#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x80E | Ordinal: 2063
        void getDesc_(void);

    // RVA: 0x8C1 | Ordinal: 2242
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9BE | Ordinal: 2495
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA72 | Ordinal: 2675
        void initAimError(void);

    // RVA: 0xAD2 | Ordinal: 2771
        void isTargetVisible(unsigned int);

    // RVA: 0xBC0 | Ordinal: 3009
        void registerStateData(void);

    // RVA: 0xBEE | Ordinal: 3055
        void searchTargets(void);

    // RVA: 0xC23 | Ordinal: 3108
        void sendWarningToTarget(double);

    // RVA: 0xC9B | Ordinal: 3228
        void setNewTargetID(unsigned int);

    // RVA: 0xCD3 | Ordinal: 3284
        void setSyncTargetID(unsigned int const &);

    // RVA: 0xD64 | Ordinal: 3429
        void simulate(double);

    // RVA: 0x194 | Ordinal: 405
        void wSN_ARSAG(class wSN_ARSAG const &);

    // RVA: 0x195 | Ordinal: 406
        void wSN_ARSAG(class wSN_ARSAG_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x278 | Ordinal: 633
        void _wSN_ARSAG(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WSN_ARSAG_HPP
