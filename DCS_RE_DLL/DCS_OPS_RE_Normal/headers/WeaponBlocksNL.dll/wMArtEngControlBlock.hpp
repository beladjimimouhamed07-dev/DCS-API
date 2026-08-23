#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wMArtEngControlBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wMArtEngControlBlock
{
public:

    // RVA: 0x4D5 | Ordinal: 1238
        void __getInputPorts(void);

    // RVA: 0x56E | Ordinal: 1391
        void __getOutputPorts(void);

    // RVA: 0x5A1 | Ordinal: 1442
        void addTempAimHAndSideData(double);

    // RVA: 0x5BD | Ordinal: 1470
        void calcAimPointAndCtrlEng(void);

    // RVA: 0x5C4 | Ordinal: 1477
        void calcByInpData(void);

    // RVA: 0x69E | Ordinal: 1695
        void controlEngine(void);

    // RVA: 0x6FF | Ordinal: 1792
        void fillWindTable(void);

    // RVA: 0x703 | Ordinal: 1796
        void formNoWindTempAim(void);

    // RVA: 0x705 | Ordinal: 1798
        void formTempAimByFwdWind(void);

    // RVA: 0x7FD | Ordinal: 2046
        void getDesc_(void);

    // RVA: 0x833 | Ordinal: 2100
        void getFwdDist(int, double);

    // RVA: 0x8B0 | Ordinal: 2225
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x921 | Ordinal: 2338
        void getLocAimWind(class Math::Vector<3, double>, class Math::Vector<3, double>, class Math::Vector<3, double>);

    // RVA: 0x924 | Ordinal: 2341
        void getLocHitPosByStEng(double);

    // RVA: 0x9AD | Ordinal: 2478
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA41 | Ordinal: 2626
        void getSideDist(int);

    // RVA: 0xA45 | Ordinal: 2630
        void getStEngTime(double);

    // RVA: 0xA71 | Ordinal: 2674
        void initAimData(class wMArtEngControlBlockDescriptor const *);

    // RVA: 0xAE6 | Ordinal: 2791
        void linInterpExtD3(double, double, double, double, double);

    // RVA: 0xAEA | Ordinal: 2795
        void mArtControlF(void);

    // RVA: 0xB42 | Ordinal: 2883
        void readInputData(double);

    // RVA: 0xBB2 | Ordinal: 2995
        void registerStateData(void);

    // RVA: 0xCCE | Ordinal: 3279
        void setStSignal(class Math::Vector<3, double> const &);

    // RVA: 0xD55 | Ordinal: 3414
        void simulate(double);

    // RVA: 0x164 | Ordinal: 357
        void wMArtEngControlBlock(class wMArtEngControlBlock &&);

    // RVA: 0x165 | Ordinal: 358
        void wMArtEngControlBlock(class wMArtEngControlBlock const &);

    // RVA: 0x166 | Ordinal: 359
        void wMArtEngControlBlock(class wMArtEngControlBlockDescriptor const *, class wSimulationSystem *);

    // RVA: 0x265 | Ordinal: 614
        void _wMArtEngControlBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WMARTENGCONTROLBLOCK_HPP
