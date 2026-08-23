#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: System
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class System
{
public:

    // RVA: 0x144 | Ordinal: 325
        void System(class EagleFM::System const &);

    // RVA: 0x145 | Ordinal: 326
        void System(class EagleFM::AerodyneFM *, double);

    // RVA: 0x499 | Ordinal: 1178
        void doSimulate(void);

    // RVA: 0x734 | Ordinal: 1845
        void initAirStart(void);

    // RVA: 0x73D | Ordinal: 1854
        void initColdStart(void);

    // RVA: 0x749 | Ordinal: 1866
        void initHotStart(void);

    // RVA: 0x756 | Ordinal: 1879
        void initPreStart(void);

    // RVA: 0x799 | Ordinal: 1946
        void netCompleteStateStream(class Mail::Stream &);

    // RVA: 0x7D1 | Ordinal: 2002
        void repair(void);

    // RVA: 0x983 | Ordinal: 2436
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0x1DF | Ordinal: 480
        void _System(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_SYSTEM_HPP
