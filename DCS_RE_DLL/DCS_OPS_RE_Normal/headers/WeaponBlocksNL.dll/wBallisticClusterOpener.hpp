#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wBallisticClusterOpener
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBallisticClusterOpener
{
public:

    // RVA: 0x484 | Ordinal: 1157
        void __getInputPorts(void);

    // RVA: 0x51D | Ordinal: 1310
        void __getOutputPorts(void);

    // RVA: 0x5B0 | Ordinal: 1457
        void applyCharTimesCorrection(void);

    // RVA: 0x77F | Ordinal: 1920
        void getCurrentTgPoint(void);

    // RVA: 0x7AC | Ordinal: 1965
        void getDesc_(void);

    // RVA: 0x83A | Ordinal: 2107
        void getHitVec(double, double, class Math::Vector<3, double>, class Math::Vector<3, double>, double *);

    // RVA: 0x843 | Ordinal: 2116
        void getInputData(void);

    // RVA: 0x85F | Ordinal: 2144
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x95C | Ordinal: 2397
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA54 | Ordinal: 2645
        void getTimeCoeff(double);

    // RVA: 0xB77 | Ordinal: 2936
        void registerStateData(void);

    // RVA: 0xC3D | Ordinal: 3134
        void setAddHeight(double);

    // RVA: 0xD0F | Ordinal: 3344
        void simulate(double);

    // RVA: 0x5A | Ordinal: 91
        void wBallisticClusterOpener(class wBallisticClusterOpener &&);

    // RVA: 0x5B | Ordinal: 92
        void wBallisticClusterOpener(class wBallisticClusterOpener const &);

    // RVA: 0x5C | Ordinal: 93
        void wBallisticClusterOpener(class wBallisticClusterOpenerDescriptor const *, class wSimulationSystem *);

    // RVA: 0x201 | Ordinal: 514
        void _wBallisticClusterOpener(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WBALLISTICCLUSTEROPENER_HPP
