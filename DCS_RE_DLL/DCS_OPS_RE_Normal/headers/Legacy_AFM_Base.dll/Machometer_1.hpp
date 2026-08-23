#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Machometer_1
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Machometer_1
{
public:

    // RVA: 0x361 | Ordinal: 866
        void Construct(void);

    // RVA: 0x3C0 | Ordinal: 961
        void Create(void);

    // RVA: 0x4A2 | Ordinal: 1187
        void LockPito(class AFM::Pito *);

    // RVA: 0x87 | Ordinal: 136
        void Machometer_1(class AFM::Machometer_1 &&);

    // RVA: 0x88 | Ordinal: 137
        void Machometer_1(class AFM::Machometer_1 const &);

    // RVA: 0x89 | Ordinal: 138
        void Machometer_1(void);

    // RVA: 0x4E9 | Ordinal: 1258
        void Simulation(double);

    // RVA: 0x60D | Ordinal: 1550
        void getIPointerIndicator(class AFM::Indicator **);

    // RVA: 0x12F | Ordinal: 304
        void _Machometer_1(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_MACHOMETER_1_HPP
