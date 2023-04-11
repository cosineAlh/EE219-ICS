iverilog -o risccpu_tb risccpu_tb.v risccpu.v alu.v data_mem.v decoder.v instru_mem.v rf.v 
vvp risccpu_tb
gtkwave risc_tb.vcd