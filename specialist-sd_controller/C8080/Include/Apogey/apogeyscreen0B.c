#include <apogey/screen_constrcutor.h>

void apogeyScreen0b() {
  // MEM_ADDR, FULL_HEIGHT, HEIGHT, TOP_INVISIBLE, FONT, BPL, FILL_EOL, HIDDEN_ATTRIB, CHAR_GEN
  APOGEY_SCREEN_STD(0xE1D0, 30, 25, 3, 0x99, 78, 1, 1, 0);
}
