#ifndef GAME_H
#define GAME_H

#include <gbdkjs.h>
#include <gb/gb.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#define NUM_ENEMIES 5
#define NUM_BULLETS 3

#define PLAYER_SPRITE_INDEX 0
#define FIRST_ENEMY_SPRITE_INDEX 3
#define FIRST_BULLET_SPRITE_INDEX 13

typedef struct _POS {
  UBYTE x;
  UBYTE y;
} POS;

typedef struct _ENEMY {
  POS pos;
  UBYTE enabled;
} ENEMY;

typedef struct _BULLET {
  POS pos;
  UBYTE enabled;
} BULLET;

void game_loop();
void game_over();
void init_sprites();

void shoot();

void update_sprites();
void update_bullets();
void update_enemies();
void spawn_enemy();

void hide_sprite(UBYTE i);

UBYTE is_collision(POS *a, POS *b, UBYTE size);

void position_player();
void position_enemies();
void position_bullets();

void draw_score();

#endif
