module top  (
	input	[4-1:0]	a,
	input	[4-1:0]	b,
	input	[3-1 :0]	op,
	output	[4-1:0]	out
);
	wire	[4-1:0]	result_add;
	wire 	[4-1:0]	result_not;
	wire 	[4-1:0]	result_and;
	wire	[4-1:0]	result_or;
	wire 	[4-1:0]	result_xor;
	wire	[4-1:0]	result_little;
	wire	[4-1:0]	result_equal;
	
	assign result_not = ~a;
	assign result_and = a & b;
	assign result_or  = a | b;
	assign result_xor = a ^ b;
	
	wire 	[4-1:0]	b_;
	wire 	zero;
	wire 	cin;
	assign b_ = (cin == 1) ? ~b : b;

	assign cin = (op == 3'b001 |
				  op == 3'b110 |
				  op == 3'b111) ? 1 : 0;
	adder add(
		.a(a),
		.b(b_),
		.cin(cin),
		.zero(zero),
		.result(result_add)
	);

	assign result_little = (result_add[3] == 1) ? 1 : 0;
	assign result_equal  = (zero == 1) ? 1 : 0;

	assign out = (op == 3'b000 | op == 3'b001) ? result_add :
				 (op == 3'b010)				   ? result_not :
				 (op == 3'b011)				   ? result_and :
				 (op == 3'b100)			   	   ? result_or	:
				 (op == 3'b101)				   ? result_xor :
				 (op == 3'b110)				   ? result_little:
				 (op == 3'b111)				   ? result_equal:
				 4'b0000;
endmodule
