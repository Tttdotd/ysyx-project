module adder(a, b, cin, cout, result);
	input	[3:0]	a;
	input	[3:0]	b;
	input			cin;
	output			cout;
	output	[3:0]	result;

	assign {cout, result} = a + b + {3'b000, cin};
endmodule
