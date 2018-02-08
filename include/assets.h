const unsigned char sprites[] = {
0x02,0x03,0x05,0x06,0x05,0x07,0x0B,0x0D,0xFB,0xFD,0xBB,0xDF,0x97,0xFB,0xAE,0xF5,0xDF,0xE5,0xBF,0xC5,0x7E,0x85,0x7E,0xD5,0x7E,0xFD,0x80,0xFF,0x7C,0x7F,0x02,0x03,0x40,0xC0,0xA0,0x60,0xA0,0xE0,0xD0,0xB0,0xDF,0xBF,0xDB,0xFD,0xE9,0xDF,0xF7,0x2D,0xFB,0xA7,0xFD,0xA3,0xFE,0x21,0xFE,0x2B,0xFE,0x3F,0x81,0x7F,0x3E,0xFE,0xC0,0x40,0x60,0x00,0x60,0x00,0x60,0x00,0x40,0x20,0x40,0x20,0x40,0x20,0x40,0x20,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x06,0x00,0x06,0x00,0x02,0x04,0x02,0x04,0x02,0x04,0x02,0x04,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x3C,0x00,0x7E,0x00,0x18,0x00,0x5A,0x00,0x4A,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x3C,0x00,0x7E,0x00,0x58,0x00,0x1A,0x00,0x50,0x00,0x00,0x00,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x03,0x01,0x03,0x00,0x07,0x01,0x1B,0x07,0x6C,0x1F,0xB8,0x7F,0x3F,0x1E,0x3F,0x1E,0x3F,0x1F,0x3F,0x1F,0x3F,0x1F,0x1F,0x0F,0x0F,0x06,0x07,0x03,0x03,0x00,0x80,0x00,0x40,0x80,0xC0,0x00,0x60,0x80,0x18,0xE0,0x46,0xB8,0xF9,0x06,0xFC,0x78,0xFC,0x58,0xFC,0xC8,0xFC,0xC8,0xFC,0xD8,0xF8,0xB0,0xF0,0x60,0xE0,0xC0,0xC0,0x00
};
const unsigned char tileset[] = {
0x00,0x00,0x3C,0x3C,0x62,0x62,0x52,0x52,0x4A,0x4A,0x46,0x46,0x3C,0x3C,0x00,0x00,0x00,0x00,0x18,0x18,0x28,0x28,0x08,0x08,0x08,0x08,0x08,0x08,0x3C,0x3C,0x00,0x00,0x00,0x00,0x3C,0x3C,0x42,0x42,0x02,0x02,0x3C,0x3C,0x40,0x40,0x7E,0x7E,0x00,0x00,0x00,0x00,0x7C,0x7C,0x02,0x02,0x0C,0x0C,0x02,0x02,0x02,0x02,0x7E,0x7E,0x00,0x00,0x00,0x00,0x40,0x40,0x40,0x40,0x48,0x48,0x7E,0x7E,0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x00,0x7E,0x7E,0x40,0x40,0x7C,0x7C,0x02,0x02,0x02,0x02,0x7C,0x7C,0x00,0x00,0x00,0x00,0x3C,0x3C,0x40,0x40,0x7C,0x7C,0x42,0x42,0x42,0x42,0x3C,0x3C,0x00,0x00,0x00,0x00,0x7E,0x7E,0x02,0x02,0x04,0x04,0x08,0x08,0x10,0x10,0x20,0x20,0x00,0x00,0x00,0x00,0x3C,0x3C,0x42,0x42,0x3C,0x3C,0x42,0x42,0x42,0x42,0x3C,0x3C,0x00,0x00,0x00,0x00,0x3C,0x3C,0x42,0x42,0x42,0x42,0x3E,0x3E,0x02,0x02,0x3C,0x3C,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBF,0xF7,0xFF,0xF7,0xF7,0xC1,0xFF,0xF7,0xFF,0xF7,0xFF,0xFF,0xBF,0xFF,0xFF,0xFF,0xF7,0xFF,0xFF,0xF7,0xF7,0xE3,0xA2,0xC1,0xF7,0xE3,0xFF,0xF7,0xF7,0xFF,0xBF,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xEF,0xFF,0xD7,0xEF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xF8,0xE0,0xE0,0xC0,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x8F,0x8F,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x3F,0x1F,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x80,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFC,0xF8,0xF8,0xF8,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0x0F,0x07,0x07,0x07,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFC,0xFC,0xFC,0xF8,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x07,0x07,0x07,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0xFF,0xFF,0xFF,0xFF,0xFE,0xFE,0xFE,0xFE,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0x80,0x80,0x00,0x00,0x00,0x00,0x01,0x00,0x03,0x00,0x06,0x01,0x04,0x03,0x09,0x07,0x00,0x00,0x00,0x00,0xF8,0x00,0xFE,0x00,0x06,0xF8,0x01,0xFE,0xF9,0xFE,0xFE,0xFF,0x0F,0x0F,0x07,0x07,0x03,0x03,0x03,0x03,0x1F,0x03,0x7F,0x03,0xE3,0x1F,0x83,0x7F,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xF8,0xF8,0xF8,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x08,0x00,0x10,0x08,0x7F,0x7F,0x7F,0x7F,0x3F,0x3F,0x3F,0x3F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x0F,0x0F,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0x07,0x07,0x03,0x03,0x03,0x03,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0xF8,0xF8,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xC0,0xC0,0x07,0x07,0x07,0x07,0x07,0x07,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x3F,0x00,0x00,0x3F,0x00,0x3F,0x00,0x00,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0xFF,0x3F,0xFF,0x3F,0x3F,0xFF,0x3F,0xFF,0x7F,0x7F,0xFC,0xFC,0xF8,0xF8,0xFC,0xFC,0xFC,0xF8,0xFC,0xFC,0xF8,0xFC,0xFC,0xFC,0xFE,0xFC,0x0B,0x07,0x07,0x0F,0x07,0x0F,0x0F,0x0F,0x07,0x07,0x07,0x07,0x03,0x03,0x03,0x03,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xFF,0xE0,0xFF,0xE0,0xE0,0xFE,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x00,0x01,0x00,0x01,0x01,0x01,0x03,0x01,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xE0,0xE0,0xE0,0xE0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x14,0x08,0x2C,0x18,0x28,0x1C,0x1A,0x3C,0x5E,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x07,0x07,0x07,0x07,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x01,0xF0,0xF0,0xF0,0xF0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0x00,0x00,0x20,0x00,0x20,0x00,0x50,0x20,0x50,0x20,0x20,0x70,0x28,0x70,0x78,0x70,0xC0,0xC0,0x01,0x00,0x01,0x00,0x00,0x01,0x02,0x01,0x03,0x01,0x05,0x03,0x05,0x03,0x03,0x03,0x01,0x01,0x81,0x01,0x81,0x01,0x01,0x81,0x01,0x81,0x81,0x81,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x3F,0x00,0x00,0x3F,0x00,0x3F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0x7F,0xFF,0x7F,0xFF,0x7F,0x7F,0xFF,0x7F,0xFF,0xFE,0xFC,0xFD,0xFE,0xFD,0xFE,0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x80,0x00,0xC0,0x00,0x60,0x80,0x38,0xC0,0x9F,0xE0,0xC7,0xF8,0xE0,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0xFF,0x00,0x03,0x01,0x05,0x03,0x05,0x03,0x0B,0x07,0x3B,0x07,0xF6,0x0E,0xC7,0x3F,0x0F,0xFE,0x80,0x80,0x80,0x80,0x81,0x80,0x01,0x00,0x00,0x01,0x02,0x01,0xFF,0x01,0xFD,0x03,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x00,0x00,0x80,0x00,0x80,0x00,0x40,0x80,0x40,0x80,0xBF,0xC0,0xBF,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x40,0x40,0x40,0x40,0xFF,0x40,0xFF,0x40,0x70,0x78,0x74,0x78,0xFC,0x78,0xFA,0x7C,0x7A,0xFC,0x7C,0xFE,0xFD,0xFE,0xFF,0xFE,0x0B,0x07,0x0B,0x07,0x07,0x0F,0x17,0x0F,0x1F,0x0F,0x2F,0x1F,0xEF,0x1F,0xDF,0x3F,0x80,0x80,0xC0,0x80,0xC0,0x80,0x80,0xC0,0x80,0xC0,0xC0,0xC0,0xFF,0xC0,0xFF,0xC0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0x70,0x70,0xFF,0xF0,0xFF,0x70,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0xFF,0x3F,0xFF,0x3F,0xE0,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x07,0x00,0xFF,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x01,0xFF,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xFF,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x40,0xFF,0x40,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0xFF,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0x70,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xFF,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFE,0xC0,0xC0,0x80,0x80,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x3F,0x03,0x03,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFC,0xFE,0xFE,0x7E,0x7C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x07,0x03,0x03,0x03,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x80,0x80,0x80,0x01,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xFC,0xFC,0xF8,0xF8,0xF8,0xF8,0xF0,0xF0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x1F,0x00,0x18,0x07,0x20,0x1F,0x27,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0xF8,0x00,0x0C,0xF0,0x06,0xF8,0xF2,0xFC,0x3E,0x3E,0x1D,0x1E,0x0F,0x0E,0x06,0x07,0x06,0x07,0x07,0x07,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x01,0x01,0x01,0x80,0x00,0x80,0x00,0x40,0x80,0x40,0x80,0x80,0xC0,0xFF,0xFF,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFC,0xFC,0xFC,0xFC,0x78,0x78,0x78,0x78,0x01,0x00,0x02,0x01,0x02,0x01,0x05,0x03,0x05,0x03,0x03,0x07,0x0B,0x07,0x0F,0x07,0x80,0x80,0x80,0x80,0x80,0x80,0x81,0x80,0x81,0x80,0x80,0x81,0x80,0x81,0x80,0x80,0x01,0x01,0x01,0x01,0x01,0x01,0xFF,0x01,0xFF,0x01,0x01,0xFF,0x01,0xFF,0x03,0x03,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0x00,0x00,0x00,0x00,0x78,0x00,0x7C,0x00,0x04,0x78,0x00,0x7C,0x78,0x7C,0x78,0x78,0x0F,0x0F,0x0F,0x0F,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07,0xE0,0xE0,0xC0,0xC0,0xE0,0xE0,0xE0,0xC0,0xE0,0xE0,0xC0,0xE0,0xE0,0xE0,0xF0,0xE0,0x5F,0x3F,0x5F,0x3F,0x3F,0x7F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x1F,0x1F,0x07,0x07,0xF8,0xFE,0xFC,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFC,0xFC,0xF8,0xF8,0xF0,0xF0,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x07,0x03,0x07,0x03,0x03,0x07,0xA0,0xC0,0xE0,0xC0,0xD0,0xE0,0xD0,0xE0,0xE0,0xF0,0xE8,0xF0,0xF8,0xF0,0xF4,0xF8,0x38,0x38,0x30,0x30,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x17,0x0F,0x17,0x0F,0x2F,0x1F,0x2F,0x1F,0x1F,0x3F,0x5F,0x3F,0x7F,0x3F,0xBF,0x7F,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x81,0x80,0x81,0x80,0x80,0x81,0x80,0x81,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xFF,0x03,0xFF,0x03,0x03,0xFF,0x03,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x40,0x00,0x20,0x40,0x0F,0x07,0x1F,0x07,0x37,0x0F,0x67,0x1F,0xCF,0x3F,0x1F,0x7F,0x3F,0x3F,0x3F,0x3F,0xF0,0xE0,0xE8,0xF0,0xEC,0xF0,0xF6,0xF8,0xF3,0xFC,0xF9,0xFE,0xFC,0xFF,0xFE,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0xFC,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x1F,0x00,0xFC,0x03,0x0B,0x07,0x1F,0x07,0x17,0x0F,0x67,0x1F,0xEF,0x1F,0x9F,0x7F,0x1F,0xFF,0x7F,0xFF,0xF4,0xF8,0xFA,0xFC,0xFA,0xFC,0xFC,0xFE,0xFD,0xFE,0xFF,0xFE,0xFE,0xFF,0xFE,0xFF,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x02,0x01,0x02,0x01,0xFD,0x03,0xFD,0x03,0xBF,0x7F,0x7F,0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x81,0x81,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xFF,0x80,0xFF,0x80,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xFF,0x01,0xFF,0x01,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xE0,0xFF,0xE0,0xFF,0xE0,0x30,0x40,0x50,0x60,0x48,0x70,0x6C,0x70,0x74,0x78,0x72,0x7C,0xFB,0x7C,0xFD,0x7E,0x1F,0x1F,0x0F,0x0F,0x07,0x07,0x07,0x07,0x03,0x03,0x01,0x01,0xFF,0x03,0xFF,0x01,0x03,0xFC,0xC0,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x1F,0x03,0xFF,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0xFF,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0xFF,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x01,0xFF,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0xFF,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7C,0xFF,0x7E,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0xFF,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
};
const unsigned char screen_tiles[] = {
0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0B,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0C,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0D,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0B,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0D,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0C,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0C,0x0A,0x0A,0x0A,0x0A,0x0A,0x0D,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0B,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0D,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0C,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0C,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0B,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0D,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0C,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0B,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0D,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0B,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0D,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0C,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0B,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0D,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0D,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A
};
const unsigned char window_tiles[] = {
0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x0E
};
const unsigned char gameover_tiles[] = {
0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0F,0x10,0x11,0x0A,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x1B,0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x2F,0x30,0x31,0x32,0x33,0x26,0x34,0x35,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x36,0x37,0x38,0x39,0x3A,0x3B,0x3C,0x3D,0x3E,0x3F,0x40,0x41,0x42,0x43,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x44,0x45,0x46,0x47,0x0A,0x48,0x49,0x4A,0x4B,0x48,0x4C,0x4D,0x4E,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x4F,0x50,0x51,0x52,0x53,0x0A,0x54,0x55,0x56,0x57,0x19,0x11,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x58,0x59,0x5A,0x5B,0x5C,0x5D,0x5E,0x5F,0x60,0x61,0x62,0x63,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x64,0x65,0x66,0x67,0x68,0x69,0x6A,0x6B,0x6C,0x61,0x6D,0x6E,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x6F,0x70,0x71,0x72,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x7A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x7B,0x7C,0x0A,0x0A,0x7D,0x0A,0x7E,0x7F,0x80,0x81,0x82,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A,0x0A
};