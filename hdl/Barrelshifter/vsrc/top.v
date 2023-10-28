module top(din, shamt, dir, tp, dout);
	input	[7:0]	din;
	input	[2:0]	shamt;
	input			dir;
	input			tp;
	output	[7:0]	dout;

	wire	[7:0]	res_left;
	wire	[7:0]	res_right_lg;
	wire	[7:0]	res_right_ag;

	assign res_left = din << shamt;
	assign res_right_lg = din >> shamt;
	assign res_right_ag = $signed(din) >>> shamt;

	assign dout = (dir == 1)  ? res_left :
				  (tp == 1) ? res_right_lg:
				  				res_right_ag;
endmodule
