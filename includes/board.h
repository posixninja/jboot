#ifndef BOARD_H
#define BOARD_H

#define BOARD_BASE 0xBF500000
#define BOARD_USE_WFI ((*(unsigned int*)BOARD_BASE >> 0x8) & 0x01)

unsigned int board_use_wfi();

#endif
