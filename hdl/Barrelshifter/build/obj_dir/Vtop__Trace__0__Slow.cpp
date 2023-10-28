// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"din", false,-1, 7,0);
    tracep->declBus(c+2,"shamt", false,-1, 2,0);
    tracep->declBit(c+3,"dir", false,-1);
    tracep->declBit(c+4,"tp", false,-1);
    tracep->declBus(c+5,"dout", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+1,"din", false,-1, 7,0);
    tracep->declBus(c+2,"shamt", false,-1, 2,0);
    tracep->declBit(c+3,"dir", false,-1);
    tracep->declBit(c+4,"tp", false,-1);
    tracep->declBus(c+5,"dout", false,-1, 7,0);
    tracep->declBus(c+6,"res_left", false,-1, 7,0);
    tracep->declBus(c+7,"res_right_lg", false,-1, 7,0);
    tracep->declBus(c+8,"res_right_ag", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->din),8);
    bufp->fullCData(oldp+2,(vlSelf->shamt),3);
    bufp->fullBit(oldp+3,(vlSelf->dir));
    bufp->fullBit(oldp+4,(vlSelf->tp));
    bufp->fullCData(oldp+5,(vlSelf->dout),8);
    bufp->fullCData(oldp+6,((0xffU & ((IData)(vlSelf->din) 
                                      << (IData)(vlSelf->shamt)))),8);
    bufp->fullCData(oldp+7,((0xffU & ((IData)(vlSelf->din) 
                                      >> (IData)(vlSelf->shamt)))),8);
    bufp->fullCData(oldp+8,((0xffU & VL_SHIFTRS_III(8,8,3, (IData)(vlSelf->din), (IData)(vlSelf->shamt)))),8);
}
