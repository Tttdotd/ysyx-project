module top(
	input			clk,
	input			reset,
	output	[7:0]	out
);
	reg 	[7:0]	st;
	always @(posedge clk, reset) begin
		if (reset == 1) 
			st <= 8'b00110101;
		else
			st    <= {st[0]^st[2]^st[3]^st[4], st[7:1]};
	end
	assign out = st;
endmodule
