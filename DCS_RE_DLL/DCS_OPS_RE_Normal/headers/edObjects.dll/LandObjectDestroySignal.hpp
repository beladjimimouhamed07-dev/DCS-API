#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: LandObjectDestroySignal
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class LandObjectDestroySignal
{
public:

    // RVA: 0x13 | Ordinal: 20
        void LandObjectDestroySignal(class LandObjectDestroySignal &&);

    // RVA: 0x14 | Ordinal: 21
        void LandObjectDestroySignal(class LandObjectDestroySignal const &);

    // RVA: 0x15 | Ordinal: 22
        void LandObjectDestroySignal(void);

    // RVA: 0x1A2 | Ordinal: 419
        void notifyDestroy(class lLandObject *);

    // RVA: 0x43 | Ordinal: 68
        void _LandObjectDestroySignal(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_LANDOBJECTDESTROYSIGNAL_HPP
