#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Lamp
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Lamp
{
public:

    // RVA: 0x360 | Ordinal: 865
        void Construct(void);

    // RVA: 0x3BE | Ordinal: 959
        void Create(void);

    // RVA: 0x81 | Ordinal: 130
        void Lamp(class AFM::Lamp &&);

    // RVA: 0x82 | Ordinal: 131
        void Lamp(class AFM::Lamp const &);

    // RVA: 0x83 | Ordinal: 132
        void Lamp(void);

    // RVA: 0x493 | Ordinal: 1172
        void LockInputWire(class AFM::Wire *);

    // RVA: 0x4E8 | Ordinal: 1257
        void Simulation(void);

    // RVA: 0x5A0 | Ordinal: 1441
        void getFailureFactor(double *);

    // RVA: 0x613 | Ordinal: 1556
        void getIPointerInputWire(class AFM::Wire **);

    // RVA: 0x6A7 | Ordinal: 1704
        void getLampStatus(int *);

    // RVA: 0x7A9 | Ordinal: 1962
        void setFailureFactor(double);

    // RVA: 0x7EF | Ordinal: 2032
        void setLampOff(void);

    // RVA: 0x7F0 | Ordinal: 2033
        void setLampOn(void);

    // RVA: 0x12D | Ordinal: 302
        void _Lamp(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_LAMP_HPP
