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
    tracep->declBus(c+6,"a", false,-1, 3,0);
    tracep->declBus(c+7,"b", false,-1, 3,0);
    tracep->declBus(c+8,"op", false,-1, 2,0);
    tracep->declBus(c+9,"out", false,-1, 3,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+6,"a", false,-1, 3,0);
    tracep->declBus(c+7,"b", false,-1, 3,0);
    tracep->declBus(c+8,"op", false,-1, 2,0);
    tracep->declBus(c+9,"out", false,-1, 3,0);
    tracep->declBus(c+1,"result_add", false,-1, 3,0);
    tracep->declBus(c+10,"result_not", false,-1, 3,0);
    tracep->declBus(c+11,"result_and", false,-1, 3,0);
    tracep->declBus(c+12,"result_or", false,-1, 3,0);
    tracep->declBus(c+13,"result_xor", false,-1, 3,0);
    tracep->declBus(c+2,"result_little", false,-1, 3,0);
    tracep->declBus(c+3,"result_equal", false,-1, 3,0);
    tracep->declBus(c+14,"b_", false,-1, 3,0);
    tracep->declBit(c+4,"zero", false,-1);
    tracep->declBit(c+5,"cin", false,-1);
    tracep->pushNamePrefix("add ");
    tracep->declBus(c+6,"a", false,-1, 3,0);
    tracep->declBus(c+14,"b", false,-1, 3,0);
    tracep->declBit(c+5,"cin", false,-1);
    tracep->declBit(c+4,"zero", false,-1);
    tracep->declBus(c+1,"result", false,-1, 3,0);
    tracep->popNamePrefix(2);
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
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__result_add),4);
    bufp->fullCData(oldp+2,(((8U & (IData)(vlSelf->top__DOT__result_add))
                              ? 1U : 0U)),4);
    bufp->fullCData(oldp+3,(((0U != (IData)(vlSelf->top__DOT__result_add))
                              ? 0U : 1U)),4);
    bufp->fullBit(oldp+4,((1U & (~ (IData)((0U != (IData)(vlSelf->top__DOT__result_add)))))));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__cin));
    bufp->fullCData(oldp+6,(vlSelf->a),4);
    bufp->fullCData(oldp+7,(vlSelf->b),4);
    bufp->fullCData(oldp+8,(vlSelf->op),3);
    bufp->fullCData(oldp+9,(vlSelf->out),4);
    bufp->fullCData(oldp+10,((0xfU & (~ (IData)(vlSelf->a)))),4);
    bufp->fullCData(oldp+11,(((IData)(vlSelf->a) & (IData)(vlSelf->b))),4);
    bufp->fullCData(oldp+12,(((IData)(vlSelf->a) | (IData)(vlSelf->b))),4);
    bufp->fullCData(oldp+13,(((IData)(vlSelf->a) ^ (IData)(vlSelf->b))),4);
    bufp->fullCData(oldp+14,((0xfU & ((IData)(vlSelf->top__DOT__cin)
                                       ? (~ (IData)(vlSelf->b))
                                       : (IData)(vlSelf->b)))),4);
}
