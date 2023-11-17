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
    tracep->declBit(c+1,"w", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"reset", false,-1);
    tracep->declBit(c+4,"z", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+1,"w", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"reset", false,-1);
    tracep->declBit(c+4,"z", false,-1);
    tracep->declBus(c+6,"A", false,-1, 8,0);
    tracep->declBus(c+7,"B", false,-1, 8,0);
    tracep->declBus(c+8,"C", false,-1, 8,0);
    tracep->declBus(c+9,"D", false,-1, 8,0);
    tracep->declBus(c+10,"E", false,-1, 8,0);
    tracep->declBus(c+11,"F", false,-1, 8,0);
    tracep->declBus(c+12,"G", false,-1, 8,0);
    tracep->declBus(c+13,"H", false,-1, 8,0);
    tracep->declBus(c+14,"I", false,-1, 8,0);
    tracep->declBus(c+5,"status", false,-1, 8,0);
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
    bufp->fullBit(oldp+1,(vlSelf->w));
    bufp->fullBit(oldp+2,(vlSelf->clk));
    bufp->fullBit(oldp+3,(vlSelf->reset));
    bufp->fullBit(oldp+4,(vlSelf->z));
    bufp->fullSData(oldp+5,(vlSelf->top__DOT__status),9);
    bufp->fullSData(oldp+6,(1U),9);
    bufp->fullSData(oldp+7,(2U),9);
    bufp->fullSData(oldp+8,(4U),9);
    bufp->fullSData(oldp+9,(8U),9);
    bufp->fullSData(oldp+10,(0x10U),9);
    bufp->fullSData(oldp+11,(0x20U),9);
    bufp->fullSData(oldp+12,(0x40U),9);
    bufp->fullSData(oldp+13,(0x80U),9);
    bufp->fullSData(oldp+14,(0x100U),9);
}
