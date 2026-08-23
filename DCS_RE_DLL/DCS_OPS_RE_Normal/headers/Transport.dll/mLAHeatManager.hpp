#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: mLAHeatManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class mLAHeatManager
{
public:

    // RVA: 0x329 | Ordinal: 810
        void init(float, bool);

    // RVA: 0x16 | Ordinal: 23
        void mLAHeatManager(class mLAHeatManager &&);

    // RVA: 0x17 | Ordinal: 24
        void mLAHeatManager(class mLAHeatManager const &);

    // RVA: 0x18 | Ordinal: 25
        void mLAHeatManager(void);

    // RVA: 0x4BD | Ordinal: 1214
        void setInitialPartTemp(int, float);

    // RVA: 0x552 | Ordinal: 1363
        void update(double, float);

    // RVA: 0x55D | Ordinal: 1374
        void updateDeadCoeffs(double &, int, float *);

    // RVA: 0x32 | Ordinal: 51
        void _mLAHeatManager(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_MLAHEATMANAGER_HPP
