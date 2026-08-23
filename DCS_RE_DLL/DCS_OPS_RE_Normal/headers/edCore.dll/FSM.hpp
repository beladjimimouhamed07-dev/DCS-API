#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: FSM
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Common {

class FSM
{
public:

    // RVA: 0x53 | Ordinal: 84
        void FSM(class Common::FSM &&);

    // RVA: 0x54 | Ordinal: 85
        void FSM(class Common::FSM const &);

    // RVA: 0x55 | Ordinal: 86
        void FSM(char const *);

    // RVA: 0x56 | Ordinal: 87
        void FSM(char const *, class Common::FSM::Descriptor *, class Common::FSM::SymbolRecepient *);

    // RVA: 0x166 | Ordinal: 359
        void checkSymbolsQueue(void);

    // RVA: 0x1AC | Ordinal: 429
        void enterToState_(unsigned int);

    // RVA: 0x1B6 | Ordinal: 439
        void exitFromState_(void);

    // RVA: 0x1ED | Ordinal: 494
        void getDescriptor(void) const;

    // RVA: 0x20E | Ordinal: 527
        void getState(void) const;

    // RVA: 0x248 | Ordinal: 585
        void inFinishState(void) const;

    // RVA: 0x249 | Ordinal: 586
        void inInitialState(void) const;

    // RVA: 0x250 | Ordinal: 593
        void init(class Common::FSM::Descriptor *, class Common::FSM::SymbolRecepient *);

    // RVA: 0x2C3 | Ordinal: 708
        void onSymbol(unsigned int);

    // RVA: 0x2C4 | Ordinal: 709
        void onSymbolDelayed(unsigned int);

    // RVA: 0x2C5 | Ordinal: 710
        void onSymbol_(unsigned int);

    // RVA: 0x35A | Ordinal: 859
        void reset(void);

    // RVA: 0x36E | Ordinal: 879
        void sendOutputSymbol_(unsigned int);

    // RVA: 0x3BF | Ordinal: 960
        void symbolsQueueIsEmpty(void) const;

    // RVA: 0x3E8 | Ordinal: 1001
        void uninit(void);

    // RVA: 0x3F8 | Ordinal: 1017
        void valid(void) const;

    // RVA: 0xB6 | Ordinal: 183
        void _FSM(void);
};

} // namespace Common

// DCS_OPS_RE_EDCORE.DLL_FSM_HPP
