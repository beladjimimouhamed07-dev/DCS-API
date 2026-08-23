#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x714 | Ordinal: 1813
        void getAimError(void);

    // RVA: 0x780 | Ordinal: 1921
        void getCurrentTgtID(void);

    // RVA: 0x815 | Ordinal: 2070
        void getDesc_(void);

    // RVA: 0x841 | Ordinal: 2114
        void getIlluminatorTgtID(void);

    // RVA: 0x8C8 | Ordinal: 2249
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x9C5 | Ordinal: 2502
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA42 | Ordinal: 2627
        void getSideTgtID(int const &);

    // RVA: 0xA43 | Ordinal: 2628
        void getSideTgtsNum(void);

    // RVA: 0xA49 | Ordinal: 2634
        void getSyncedTgtID(void);

    // RVA: 0xA4A | Ordinal: 2635
        void getSyncedTgtPos(void);

    // RVA: 0xA74 | Ordinal: 2677
        void initAimError(void);

    // RVA: 0xAA5 | Ordinal: 2726
        void init_randoms(int);

    // RVA: 0xB4A | Ordinal: 2891
        void readInputData(void);

    // RVA: 0xBC5 | Ordinal: 3014
        void registerStateData(void);

    // RVA: 0xBDD | Ordinal: 3038
        void resetSideTgts(void);

    // RVA: 0xC79 | Ordinal: 3194
        void setIlluminatorTgtID(unsigned int const &);

    // RVA: 0xC9C | Ordinal: 3229
        void setNewTargetID(unsigned int const &);

    // RVA: 0xC9D | Ordinal: 3230
        void setNewTargetPos(class Math::Vector<3, double> const &);

    // RVA: 0xCBF | Ordinal: 3264
        void setSeekerOn(bool);

    // RVA: 0xCC9 | Ordinal: 3274
        void setSideTargets(void);

    // RVA: 0xD9E | Ordinal: 3487
        void syncAimError(class Math::Vector<3, double> const &);

    // RVA: 0xDA0 | Ordinal: 3489
        void syncIlluminatorTgtID(unsigned int const &);

    // RVA: 0xDA2 | Ordinal: 3491
        void syncSideTargetIDs(unsigned int *const);

    // RVA: 0xDA3 | Ordinal: 3492
        void syncSideTargetNum(int);

    // RVA: 0xDA4 | Ordinal: 3493
        void syncTargetID(unsigned int const &);

    // RVA: 0xDA5 | Ordinal: 3494
        void syncTargetPos(class Math::Vector<3, double> const &);

    // RVA: 0xDD1 | Ordinal: 3538
        void updateOutputs(void);

    // RVA: 0x1A6 | Ordinal: 423
        void wSensorBase(class wSensorBase const &);

    // RVA: 0x1A7 | Ordinal: 424
        void wSensorBase(class wSensorBaseDescriptor const *, class wSimulationSystem *);

    // RVA: 0x27F | Ordinal: 640
        void _wSensorBase(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WSENSORBASE_HPP
