#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x7E5 | Ordinal: 2022
        void getDesc_(void);

    // RVA: 0x898 | Ordinal: 2201
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x995 | Ordinal: 2454
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAE1 | Ordinal: 2786
        void limit(double &, double const &);

    // RVA: 0xB9D | Ordinal: 2974
        void registerStateData(void);

    // RVA: 0xC6A | Ordinal: 3179
        void setGimbalAngle(class Math::Vector<3, double> const &);

    // RVA: 0xD3C | Ordinal: 3389
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WGM_FREEGYRO2_HPP
