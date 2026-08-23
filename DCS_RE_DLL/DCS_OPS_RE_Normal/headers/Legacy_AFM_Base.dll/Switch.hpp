#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Switch
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Switch
{
public:

    // RVA: 0x375 | Ordinal: 886
        void Construct(void);

    // RVA: 0x3DA | Ordinal: 987
        void Create(void);

    // RVA: 0x495 | Ordinal: 1174
        void LockInputWire(class AFM::Wire *);

    // RVA: 0x49F | Ordinal: 1184
        void LockOutputWire(class AFM::Wire *);

    // RVA: 0x4F4 | Ordinal: 1269
        void Simulation(void);

    // RVA: 0xD8 | Ordinal: 217
        void Switch(class AFM::Switch &&);

    // RVA: 0xD9 | Ordinal: 218
        void Switch(class AFM::Switch const &);

    // RVA: 0xDA | Ordinal: 219
        void Switch(void);

    // RVA: 0x615 | Ordinal: 1558
        void getIPointerInputWire(class AFM::Wire **);

    // RVA: 0x640 | Ordinal: 1601
        void getIPointerOutputWire(class AFM::Wire **);

    // RVA: 0x748 | Ordinal: 1865
        void getSwitchPosition(int *);

    // RVA: 0x8CD | Ordinal: 2254
        void setSwitchOff(void);

    // RVA: 0x8CE | Ordinal: 2255
        void setSwitchOn(void);

    // RVA: 0x14A | Ordinal: 331
        void _Switch(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_SWITCH_HPP
