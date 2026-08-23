#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wSensorBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSensorBase
{
public:

    // RVA: 0x4ED | Ordinal: 1262
        void __getInputPorts(void);

    // RVA: 0x586 | Ordinal: 1415
        void __getOutputPorts(void);

    // RVA: 0x59F | Ordinal: 1440
        void addSideTgtID(unsigned int const &);

    // RVA: 0x5B9 | Ordinal: 1466
        void cPositionFromPosRot(class Math::Vector<3, double> const &, struct Math::Rotation3<double> const &);

    // RVA: 0x71B | Ordinal: 1820
        void getAimError(void);

    // RVA: 0x788 | Ordinal: 1929
        void getCurrentTgtID(void);

    // RVA: 0x81D | Ordinal: 2078
        void getDesc_(void);

    // RVA: 0x84A | Ordinal: 2123
        void getIlluminatorTgtID(void);

    // RVA: 0x8D1 | Ordinal: 2258
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9CE | Ordinal: 2511
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA51 | Ordinal: 2642
        void getSideTgtID(int const &);

    // RVA: 0xA52 | Ordinal: 2643
        void getSideTgtsNum(void);

    // RVA: 0xA58 | Ordinal: 2649
        void getSyncedTgtID(void);

    // RVA: 0xA59 | Ordinal: 2650
        void getSyncedTgtPos(void);

    // RVA: 0xA86 | Ordinal: 2695
        void initAimError(void);

    // RVA: 0xACA | Ordinal: 2763
        void init_randoms(int);

    // RVA: 0xB74 | Ordinal: 2933
        void readInputData(void);

    // RVA: 0xBEF | Ordinal: 3056
        void registerStateData(void);

    // RVA: 0xC07 | Ordinal: 3080
        void resetSideTgts(void);

    // RVA: 0xCC3 | Ordinal: 3268
        void setIlluminatorTgtID(unsigned int const &);

    // RVA: 0xCE6 | Ordinal: 3303
        void setNewTargetID(unsigned int const &);

    // RVA: 0xCE7 | Ordinal: 3304
        void setNewTargetPos(class Math::Vector<3, double> const &);

    // RVA: 0xD09 | Ordinal: 3338
        void setSeekerOn(bool);

    // RVA: 0xD14 | Ordinal: 3349
        void setSideTargets(void);

    // RVA: 0xDE9 | Ordinal: 3562
        void syncAimError(class Math::Vector<3, double> const &);

    // RVA: 0xDEB | Ordinal: 3564
        void syncIlluminatorTgtID(unsigned int const &);

    // RVA: 0xDED | Ordinal: 3566
        void syncSideTargetIDs(unsigned int *const);

    // RVA: 0xDEE | Ordinal: 3567
        void syncSideTargetNum(int);

    // RVA: 0xDEF | Ordinal: 3568
        void syncTargetID(unsigned int const &);

    // RVA: 0xDF0 | Ordinal: 3569
        void syncTargetPos(class Math::Vector<3, double> const &);

    // RVA: 0xE20 | Ordinal: 3617
        void updateOutputs(void);

    // RVA: 0x1A6 | Ordinal: 423
        void wSensorBase(class wSensorBase const &);

    // RVA: 0x1A7 | Ordinal: 424
        void wSensorBase(class wSensorBaseDescriptor const *, class wSimulationSystem *);

    // RVA: 0x27F | Ordinal: 640
        void _wSensorBase(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WSENSORBASE_HPP
