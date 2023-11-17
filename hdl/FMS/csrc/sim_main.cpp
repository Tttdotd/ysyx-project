#include <nvboard.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <Vtop.h>

static Vtop* top;

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

void nvboard_bind_all_pins(Vtop* top);

void step_and_dump_waveform() {
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}

static void single_cycle_nvboard() {
  	//top->clk = 0; top->eval();
  	//top->clk = 1; top->eval();
	top->eval();
}

void sim_init_nvboard() {
	contextp = new VerilatedContext;
	top = new Vtop;
  	nvboard_bind_all_pins(top);
  	nvboard_init();
}

void sim_init_waveform() {
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	top = new Vtop;
	contextp->traceEverOn(true);
	top->trace(tfp, 0);
	tfp->open("dump.vcd");
}

void simulating_waveform() {
	//simulate logic
	sim_init_waveform();
}

void simulating_nvboard() {
	sim_init_nvboard();
	while(1) {
		nvboard_update();
		single_cycle_nvboard();
	}
}
int main() {
	//select the type of simulate
	simulating_nvboard();
}
