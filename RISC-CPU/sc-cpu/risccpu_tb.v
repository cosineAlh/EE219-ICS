module risccpu_tb;
reg clk,reset;

initial begin
 clk = 0;
 forever begin
  # 1 clk = ~clk;
 end
end

initial begin
	reset = 1'b1;
	#2  reset = 1'b0;
	#50 $finish;
end
risccpu risc_cpu(.clk(clk),.reset(reset));
//initial $monitor("At time %t, clk = %d", $time, clk);
initial
begin
  $dumpfile("risc_tb.vcd");
  $dumpvars;
end

endmodule
