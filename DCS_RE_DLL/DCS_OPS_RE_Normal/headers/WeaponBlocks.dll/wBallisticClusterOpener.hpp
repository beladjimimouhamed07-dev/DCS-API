#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x787 | Ordinal: 1928
        void getCurrentTgPoint(void);

    // RVA: 0x7B4 | Ordinal: 1973
        void getDesc_(void);

    // RVA: 0x842 | Ordinal: 2115
        void getHitVec(double, double, class Math::Vector<3, double>, class Math::Vector<3, double>, double *);

    // RVA: 0x84C | Ordinal: 2125
        void getInputData(void);

    // RVA: 0x868 | Ordinal: 2153
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x965 | Ordinal: 2406
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA63 | Ordinal: 2660
        void getTimeCoeff(double);

    // RVA: 0xBA1 | Ordinal: 2978
        void registerStateData(void);

    // RVA: 0xC86 | Ordinal: 3207
        void setAddHeight(double);

    // RVA: 0xD5A | Ordinal: 3419
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WBALLISTICCLUSTEROPENER_HPP
