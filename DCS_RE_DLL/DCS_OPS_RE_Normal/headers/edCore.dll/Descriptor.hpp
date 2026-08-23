#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: Descriptor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Common {
namespace FSM {

class Descriptor
{
public:

    // RVA: 0x4E | Ordinal: 79
        void Descriptor(class Common::FSM::Descriptor &&);

    // RVA: 0x4F | Ordinal: 80
        void Descriptor(class Common::FSM::Descriptor const &);

    // RVA: 0x50 | Ordinal: 81
        void Descriptor(void);

    // RVA: 0x148 | Ordinal: 329
        void addFinishState(unsigned int);

    // RVA: 0x14A | Ordinal: 331
        void addOnEnterOutputSymbol(unsigned int, unsigned int);

    // RVA: 0x14B | Ordinal: 332
        void addOnExitOutputSymbol(unsigned int, unsigned int);

    // RVA: 0x14E | Ordinal: 335
        void addTransition(unsigned int, unsigned int, unsigned int, unsigned int, enum Common::FSM::StackOperation);

    // RVA: 0x16A | Ordinal: 363
        void clear(void);

    // RVA: 0x1F1 | Ordinal: 498
        void getInitialState(void) const;

    // RVA: 0x211 | Ordinal: 530
        void getTransition(unsigned int) const;

    // RVA: 0x212 | Ordinal: 531
        void getTransition(unsigned int, unsigned int) const;

    // RVA: 0x213 | Ordinal: 532
        void getTransitions(unsigned int) const;

    // RVA: 0x275 | Ordinal: 630
        void isFinishState(unsigned int) const;

    // RVA: 0x276 | Ordinal: 631
        void isInitializied(void) const;

    // RVA: 0x289 | Ordinal: 650
        void load(void);

    // RVA: 0x389 | Ordinal: 906
        void setInitialState(unsigned int);

    // RVA: 0x38A | Ordinal: 907
        void setInitializied(void);

    // RVA: 0xB4 | Ordinal: 181
        void _Descriptor(void);
};

} // namespace FSM
} // namespace Common

// DCS_OPS_RE_EDCORE.DLL_DESCRIPTOR_HPP
