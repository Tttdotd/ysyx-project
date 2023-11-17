module adder (
	input	[4-1:0]	a,
	input	[4-1:0]	b,
	input					cin,
	output					zero,
	output	[4-1:0]	result 
);
	assign result = a + b + {3'b000, cin};
	assign zero = ~(|result);
endmodule
