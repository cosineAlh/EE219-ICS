// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rdata_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ram_r_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->top__DOT__vram_r_data);
    vlSelf->top__DOT__RVCPU__DOT__transfer_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__transfer_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RVCPU__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RVCPU__DOT__sca_rs1_r_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__rs2_r_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__operand_rs1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RVCPU__DOT__operand_rs2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RVCPU__DOT__alu_opcode = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__RVCPU__DOT__exe_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RVCPU__DOT__branch_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__jump_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__wb_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__rd_w_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RVCPU__DOT__vec_rs1_r_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__vs1_r_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__vd_w_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RVCPU__DOT__v_alu_opcode = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->top__DOT__RVCPU__DOT__operand_vs1);
    VL_RAND_RESET_W(256, vlSelf->top__DOT__RVCPU__DOT__operand_vs2);
    VL_RAND_RESET_W(256, vlSelf->top__DOT__RVCPU__DOT__vexe_result);
    vlSelf->top__DOT__RVCPU__DOT__vwb_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RVCPU__DOT__IF_Stage__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_s = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_b = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__imm_j = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_addi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_mul = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_slti = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__ID_Stage__DOT__inst_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__EXE_Stage__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__RVCPU__DOT__REGFILE__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vle32_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vx = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vx = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vadd_vv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vmul_vv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__V_ID_Stage__DOT__inst_vse32_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->top__DOT__RVCPU__DOT__V_REGFILE__DOT__vregs[__Vi0]);
    }
    vlSelf->__Vfunc_ram_read_helper__0__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__1__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__3__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__4__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__5__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__6__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__7__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__8__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__9__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__10__Vfuncout = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
