#include "game.h"
#include "assets.h"

UBYTE running = TRUE;
UBYTE prev_joy;
UBYTE time;
UBYTE frame;
POS player_pos;
ENEMY enemies[NUM_ENEMIES];
BULLET bullets[NUM_ENEMIES];
UBYTE score = 0;

int main()
{
  // Init LCD
  LCDC_REG = 0x67;
  set_interrupts(VBL_IFLAG | LCD_IFLAG);
  STAT_REG = 0x45;
 
  // Set palettes
  BGP_REG = 0xE4U;
  OBP0_REG = 0xD2U;

  // Position Window Layer
  WX_REG = 7;
  WY_REG = MAXWNDPOSY - 7;

  // Initialize the background graphics
  set_bkg_data(0, 131, tileset);
  set_bkg_tiles(0, 0, 20, 32, screen_tiles);
  set_win_tiles(0, 0, 20, 1, window_tiles);

  init_sprites();

  DISPLAY_ON;
  SHOW_SPRITES;

  player_pos.x = 80;
  player_pos.y = 120;

  running = TRUE;

#ifdef __EMSCRIPTEN__
  emscripten_set_main_loop(game_loop, 60, 1);
#else
  while(1)
  {
    game_loop();
  }
#endif
}

void init_sprites()
{
  UBYTE i;

  // Initialize the sprite graphics
  set_sprite_data(0, 16, sprites);

  // Player
  set_sprite_tile(PLAYER_SPRITE_INDEX, 0);
  set_sprite_tile(PLAYER_SPRITE_INDEX + 1, 2);  
  set_sprite_tile(PLAYER_SPRITE_INDEX + 2, 8);  

  // Enemies
  for(i=0; i<NUM_ENEMIES; i++) {
    set_sprite_tile(FIRST_ENEMY_SPRITE_INDEX + (i*2), 12);
    set_sprite_tile(FIRST_ENEMY_SPRITE_INDEX + (i*2) + 1, 14);    
  }

  // Bullets
  for(i=0; i<NUM_ENEMIES; i++) {
    set_sprite_tile(FIRST_BULLET_SPRITE_INDEX + (i*2), 4);
    set_sprite_tile(FIRST_BULLET_SPRITE_INDEX + (i*2) + 1, 6);    
  }  
}

void shoot()
{
  UBYTE i;

  for(i=0; i<=NUM_BULLETS; i++) {
    if(!bullets[i].enabled) {
      break;
    }
  }

  // No available enemies (all on screen)
  if(i==NUM_BULLETS) {
    return;
  }

  bullets[i].enabled = TRUE;
  bullets[i].pos.x = player_pos.x;
  bullets[i].pos.y = player_pos.y;
}

void update_sprites()
{
  frame++;
  // Update player ship flame
  set_sprite_tile(PLAYER_SPRITE_INDEX + 2, 8 + 2 * (frame&0x1));  
}

void update_bullets()
{
  UBYTE i;
  for(i=0; i<NUM_BULLETS; i++) {
    if(!bullets[i].enabled) {
      continue;
    }
    bullets[i].pos.y-=2;
    if(bullets[i].pos.y>144) {
      bullets[i].enabled = FALSE;
      LOG("HIDE BULLET\n");
      hide_sprite(FIRST_BULLET_SPRITE_INDEX + (i*2));
    }
  }  
}

void update_enemies()
{
  UBYTE i, b, speed;

  speed = 1 + (score/10);

  for(i=0; i<NUM_ENEMIES; i++) {
    if(!enemies[i].enabled) {
      continue;
    }

    // Update position
    enemies[i].pos.y += speed;

    if(speed > 1 && (time&0x3)==0) {
      if(enemies[i].pos.x < player_pos.x) {
        enemies[i].pos.x++;
      } else if(enemies[i].pos.x > player_pos.x) {
        enemies[i].pos.x--;
      }
    }

    if(enemies[i].pos.y>136) {
      enemies[i].enabled = FALSE;
      hide_sprite(FIRST_ENEMY_SPRITE_INDEX + (i*2));
    } else {

      // Check bullet collision
      for(b=0; b<NUM_BULLETS; b++) {
        if(!bullets[b].enabled) {
          continue;
        }    
        if(is_collision(&enemies[i].pos, &bullets[b].pos, 16)) {
          LOG("HIT ENEMY %d\n", i);
          enemies[i].enabled = FALSE;
          bullets[b].enabled = FALSE;
          hide_sprite(FIRST_ENEMY_SPRITE_INDEX + (i*2));
          hide_sprite(FIRST_BULLET_SPRITE_INDEX + (b*2));
          score++;
          draw_score();
        }
      }

      // Check player collision
      if(is_collision(&enemies[i].pos, &player_pos, 12)) {
        game_over();
      }            
    }
  }  
}

void hide_sprite(UBYTE i)
{
  move_sprite(i, 0, 0);
  move_sprite(i + 1, 0, 0);      
}

UBYTE is_collision(POS *a, POS *b, UBYTE size)
{
  return (a->x > b->x - size)
    && (a->x < b->x + size)
    && (a->y > b->y - size)
    && (a->y < b->y + size);
}

void position_player()
{
  move_sprite(PLAYER_SPRITE_INDEX, player_pos.x, player_pos.y);
  move_sprite(PLAYER_SPRITE_INDEX + 1, player_pos.x + 8, player_pos.y);
  move_sprite(PLAYER_SPRITE_INDEX + 2, player_pos.x + 4, player_pos.y + 16);
}

void position_enemies()
{
  UBYTE i;
  for(i=0; i<NUM_ENEMIES; i++) {
    if(!enemies[i].enabled) {
      continue;
    }
    // Move sprite
    move_sprite(FIRST_ENEMY_SPRITE_INDEX + (i*2), enemies[i].pos.x, enemies[i].pos.y);
    move_sprite(FIRST_ENEMY_SPRITE_INDEX + (i*2) + 1, enemies[i].pos.x + 8, enemies[i].pos.y);    
  }
}

void position_bullets()
{
  UBYTE i;
  for(i=0; i<NUM_BULLETS; i++) {
    if(!bullets[i].enabled) {
      continue;
    }
    // Move sprite
    move_sprite(FIRST_BULLET_SPRITE_INDEX + (i*2), bullets[i].pos.x, bullets[i].pos.y);
    move_sprite(FIRST_BULLET_SPRITE_INDEX + (i*2) + 1, bullets[i].pos.x + 8, bullets[i].pos.y);    
  }  
}

void spawn_enemy()
{
  UBYTE i;
  for(i=0; i<=NUM_ENEMIES; i++) {
    if(!enemies[i].enabled) {
      break;
    }
  }

  // No available enemies (all on screen)
  if(i==NUM_ENEMIES) {
    return;
  }

  LOG("SPAWN ENEMY %d at [%d,%d]\n", i, time % 160, 0);

  enemies[i].pos.x = 8 + (player_pos.x + (2 * time)) % 144;
  enemies[i].pos.y = 0;
  enemies[i].enabled = TRUE;
}

void draw_score() {
  UBYTE letter;

  letter = score % 10;
  set_win_tiles(15,0,1,1, &letter);

  letter = (score/10) % 10;
  set_win_tiles(14,0,1,1, &letter);

  letter = (score/100) % 10;
  set_win_tiles(13,0,1,1, &letter);
}

void game_over()
{
  DISPLAY_OFF;
  HIDE_SPRITES;
  running = FALSE;
  set_bkg_tiles(0, 0, 20, 18, gameover_tiles);
  SCX_REG = 0;
  SCY_REG = 0;
  DISPLAY_ON;
}

void game_loop()
{
  UBYTE joy;
  
  #ifdef __EMSCRIPTEN__    
    emscripten_update_registers(
      SCX_REG, SCY_REG,
      WX_REG, WY_REG,
      LYC_REG, LCDC_REG,
      BGP_REG,
      OBP0_REG, OBP1_REG
    );
  #endif
  
  wait_vbl_done();

  joy = joypad();
  time++;

  if(!running) {
    return;
  }

  // Scroll Screen Buffer
  SCY_REG-=2;

  // Controls
  if(joy & J_LEFT) { // Left pressed
    player_pos.x-=1;
  } else if (joy & J_RIGHT) { // Right pressed
    player_pos.x+=1;
  }
  if(joy & J_UP) { // Up pressed
    player_pos.y-=1;
  } else if (joy & J_DOWN) { // Down pressed
    player_pos.y+=1;
  }

  if(joy & J_A && !(prev_joy & J_A)) { // If pressing A but wasn't last frame
    LOG("Pressing A\n");
    shoot();
  }
  if(joy & J_B) {
    LOG("Pressing B\n");
  }  
  if(joy & J_START) {
    LOG("Pressing Start\n");
  }
  if(joy & J_SELECT) {
    LOG("Pressing Select\n");
  }  

  // Player limits
  if(player_pos.x < 8) {
    player_pos.x = 8;
  }
  if(player_pos.x > 152) {
    player_pos.x = 152;
  }
  if(player_pos.y < 16) {
    player_pos.y = 16;
  }
  if(player_pos.y > 120) {
    player_pos.y = 120;
  }

  // Update sprites (every 16 frames)
  if((time&0xF)==0) {
    update_sprites();
  }

  // Spawn enemy (every 32 frames)
  if((time&0x1F)==0) {
    spawn_enemy();
  }

  update_bullets();
  update_enemies();

  position_player();
  position_enemies();
  position_bullets();

  prev_joy = joy;
}
