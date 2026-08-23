#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: HelControlSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class HelControlSystem
{
public:

    // RVA: 0xA4 | Ordinal: 165
        void HelControlSystem(class EagleFM::HelControlSystem const &);

    // RVA: 0xA5 | Ordinal: 166
        void HelControlSystem(void);

    // RVA: 0x503 | Ordinal: 1284
        void getCollective(void);

    // RVA: 0x504 | Ordinal: 1285
        void getCollective(void) const;

    // RVA: 0x821 | Ordinal: 2082
        void setCollectiveDir(int);

    // RVA: 0x822 | Ordinal: 2083
        void setCollectiveStopper(bool);

    // RVA: 0x1AD | Ordinal: 430
        void _HelControlSystem(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_HELCONTROLSYSTEM_HPP
