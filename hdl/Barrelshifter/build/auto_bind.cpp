#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->din, BIND_RATE_SCR, BIND_DIR_IN , 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->shamt, BIND_RATE_SCR, BIND_DIR_IN , 3, SW15, SW14, SW13);
	nvboard_bind_pin( &top->tp, BIND_RATE_SCR, BIND_DIR_IN , 1, SW12);
	nvboard_bind_pin( &top->dir, BIND_RATE_SCR, BIND_DIR_IN , 1, SW11);
	nvboard_bind_pin( &top->dout, BIND_RATE_SCR, BIND_DIR_OUT, 8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
}
