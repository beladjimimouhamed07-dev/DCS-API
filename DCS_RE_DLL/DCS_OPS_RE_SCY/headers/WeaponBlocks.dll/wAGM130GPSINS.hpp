#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7A1 | Ordinal: 1954
        void getDesc_(void);

    // RVA: 0x855 | Ordinal: 2134
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x952 | Ordinal: 2387
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA91 | Ordinal: 2706
        void initGPSStatusIn(int);

    // RVA: 0xAA1 | Ordinal: 2722
        void initPos(class Math::Vector<3, double> const &);

    // RVA: 0xAA2 | Ordinal: 2723
        void initRot(struct Math::Rotation3<double> const &);

    // RVA: 0xAAA | Ordinal: 2731
        void initTargetPos(class Math::Vector<3, double> const &);

    // RVA: 0xAAF | Ordinal: 2736
        void initVel(class Math::Vector<3, double> const &);

    // RVA: 0xB8E | Ordinal: 2959
        void registerStateData(void);

    // RVA: 0xD48 | Ordinal: 3401
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAGM130GPSINS_HPP
