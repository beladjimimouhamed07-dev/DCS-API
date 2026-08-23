#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6A2 | Ordinal: 1699
        void controlEngine(void);

    // RVA: 0x705 | Ordinal: 1798
        void fillWindTable(void);

    // RVA: 0x709 | Ordinal: 1802
        void formNoWindTempAim(void);

    // RVA: 0x70B | Ordinal: 1804
        void formTempAimByFwdWind(void);

    // RVA: 0x805 | Ordinal: 2054
        void getDesc_(void);

    // RVA: 0x83B | Ordinal: 2108
        void getFwdDist(int, double);

    // RVA: 0x8B9 | Ordinal: 2234
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x92A | Ordinal: 2347
        void getLocAimWind(class Math::Vector<3, double>, class Math::Vector<3, double>, class Math::Vector<3, double>);

    // RVA: 0x92D | Ordinal: 2350
        void getLocHitPosByStEng(double);

    // RVA: 0x9B6 | Ordinal: 2487
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA50 | Ordinal: 2641
        void getSideDist(int);

    // RVA: 0xA54 | Ordinal: 2645
        void getStEngTime(double);

    // RVA: 0xA80 | Ordinal: 2689
        void initAimData(class wMArtEngControlBlockDescriptor const *);

    // RVA: 0xAC3 | Ordinal: 2756
        void init_randoms(int);

    // RVA: 0xB0D | Ordinal: 2830
        void linInterpExtD3(double, double, double, double, double);

    // RVA: 0xB11 | Ordinal: 2834
        void mArtControlF(void);

    // RVA: 0xB6C | Ordinal: 2925
        void readInputData(double);

    // RVA: 0xBDC | Ordinal: 3037
        void registerStateData(void);

    // RVA: 0xD19 | Ordinal: 3354
        void setStSignal(class Math::Vector<3, double> const &);

    // RVA: 0xDA0 | Ordinal: 3489
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WMARTENGCONTROLBLOCK_HPP
