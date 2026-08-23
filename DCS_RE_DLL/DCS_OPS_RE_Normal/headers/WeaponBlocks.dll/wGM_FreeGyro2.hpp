#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wGM_FreeGyro2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGM_FreeGyro2
{
public:

    // RVA: 0x4BD | Ordinal: 1214
        void __getInputPorts(void);

    // RVA: 0x556 | Ordinal: 1367
        void __getOutputPorts(void);

    // RVA: 0x5E6 | Ordinal: 1511
        void calcGimbalDynamics(double);

    // RVA: 0x7ED | Ordinal: 2030
        void getDesc_(void);

    // RVA: 0x8A1 | Ordinal: 2210
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x99E | Ordinal: 2463
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB08 | Ordinal: 2825
        void limit(double &, double const &);

    // RVA: 0xBC7 | Ordinal: 3016
        void registerStateData(void);

    // RVA: 0xCB4 | Ordinal: 3253
        void setGimbalAngle(class Math::Vector<3, double> const &);

    // RVA: 0xD87 | Ordinal: 3464
        void simulate(double);

    // RVA: 0x11D | Ordinal: 286
        void wGM_FreeGyro2(class wGM_FreeGyro2 &&);

    // RVA: 0x11E | Ordinal: 287
        void wGM_FreeGyro2(class wGM_FreeGyro2 const &);

    // RVA: 0x11F | Ordinal: 288
        void wGM_FreeGyro2(class wGM_FreeGyro2_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x24A | Ordinal: 587
        void _wGM_FreeGyro2(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WGM_FREEGYRO2_HPP
