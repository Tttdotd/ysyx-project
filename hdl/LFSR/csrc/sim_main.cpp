#include <nvboard.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <Vtop.h>

static Vtop* top;

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

void nvboard_bind_all_pins(Vtop* top);

void step_and_dump_wave() {
	top->eval();

	//波形图绘制
	//contextp->timeInc(1);
	//tfp->dump(contextp->time());
}

//使用nvboard时所需函数
static void single_cycle() {
	step_and_dump_wave();
}

void sim_init() {
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	top = new Vtop;

	//绘制波形图
	//contextp->traceEverOn(true);
//	top->trace(tfp, 0);
//	tfp->open("dump.vcd");
	
	//nvboard init;
  	nvboard_bind_all_pins(top);
  	nvboard_init();
}

//置位信号
//static void reset(int n) {
//  	top->rst = 1;
//  	while (n -- > 0) single_cycle();
//  	top->rst = 0;
//}

int main() {
	sim_init();
	// start the simulate;
	//reset(10);
	//nvboard所需逻辑
  	while(1) {
    	nvboard_update();
    	single_cycle();
  	}
}
