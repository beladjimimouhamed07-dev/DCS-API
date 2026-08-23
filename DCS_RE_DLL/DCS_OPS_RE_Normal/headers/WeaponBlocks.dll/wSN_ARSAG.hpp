#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wSN_ARSAG
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSN_ARSAG
{
public:

    // RVA: 0x4E6 | Ordinal: 1255
        void __getInputPorts(void);

    // RVA: 0x57F | Ordinal: 1408
        void __getOutputPorts(void);

    // RVA: 0x5B7 | Ordinal: 1464
        void cPositionFromPosRot(class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &);

    // RVA: 0x816 | Ordinal: 2071
        void getDesc_(void);

    // RVA: 0x8CA | Ordinal: 2251
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C7 | Ordinal: 2504
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA84 | Ordinal: 2693
        void initAimError(void);

    // RVA: 0xAF9 | Ordinal: 2810
        void isTargetVisible(unsigned int);

    // RVA: 0xBEA | Ordinal: 3051
        void registerStateData(void);

    // RVA: 0xC2F | Ordinal: 3120
        void searchTargets(void);

    // RVA: 0xC6A | Ordinal: 3179
        void sendWarningToTarget(double);

    // RVA: 0xCE5 | Ordinal: 3302
        void setNewTargetID(unsigned int);

    // RVA: 0xD1E | Ordinal: 3359
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xDAF | Ordinal: 3504
        void simulate(double);

    // RVA: 0x194 | Ordinal: 405
        void wSN_ARSAG(class wSN_ARSAG const &);

    // RVA: 0x195 | Ordinal: 406
        void wSN_ARSAG(class wSN_ARSAG_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x278 | Ordinal: 633
        void _wSN_ARSAG(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WSN_ARSAG_HPP
