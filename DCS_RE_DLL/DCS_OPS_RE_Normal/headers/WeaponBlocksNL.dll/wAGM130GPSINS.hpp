#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wAGM130GPSINS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAGM130GPSINS
{
public:

    // RVA: 0x471 | Ordinal: 1138
        void __getInputPorts(void);

    // RVA: 0x50A | Ordinal: 1291
        void __getOutputPorts(void);

    // RVA: 0x799 | Ordinal: 1946
        void getDesc_(void);

    // RVA: 0x84C | Ordinal: 2125
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x949 | Ordinal: 2378
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA7B | Ordinal: 2684
        void initGPSStatusIn(int);

    // RVA: 0xA8B | Ordinal: 2700
        void initPos(class Math::Vector<3, double> const &);

    // RVA: 0xA8C | Ordinal: 2701
        void initRot(struct Math::Rotation3<double> const &);

    // RVA: 0xA94 | Ordinal: 2709
        void initTargetPos(class Math::Vector<3, double> const &);

    // RVA: 0xA99 | Ordinal: 2714
        void initVel(class Math::Vector<3, double> const &);

    // RVA: 0xB64 | Ordinal: 2917
        void registerStateData(void);

    // RVA: 0xCFD | Ordinal: 3326
        void simulate(double);

    // RVA: 0x22 | Ordinal: 35
        void wAGM130GPSINS(class wAGM130GPSINS &&);

    // RVA: 0x23 | Ordinal: 36
        void wAGM130GPSINS(class wAGM130GPSINS const &);

    // RVA: 0x24 | Ordinal: 37
        void wAGM130GPSINS(class wAGM130GPSINSDescriptor const *, class wSimulationSystem *);

    // RVA: 0x1EE | Ordinal: 495
        void _wAGM130GPSINS(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAGM130GPSINS_HPP
