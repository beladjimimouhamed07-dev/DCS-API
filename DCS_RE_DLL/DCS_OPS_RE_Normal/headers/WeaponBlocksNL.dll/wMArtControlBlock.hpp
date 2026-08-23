#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wMArtControlBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wMArtControlBlock
{
public:

    // RVA: 0x4D4 | Ordinal: 1237
        void __getInputPorts(void);

    // RVA: 0x56D | Ordinal: 1390
        void __getOutputPorts(void);

    // RVA: 0x5A0 | Ordinal: 1441
        void addTempAimHAndSideData(int, double);

    // RVA: 0x5BC | Ordinal: 1469
        void calcAimPointAndCtrlAng(void);

    // RVA: 0x5C3 | Ordinal: 1476
        void calcByInpData(void);

    // RVA: 0x69D | Ordinal: 1694
        void controlEngine(void);

    // RVA: 0x6FE | Ordinal: 1791
        void fillWindTable(void);

    // RVA: 0x702 | Ordinal: 1795
        void formNoWindTempAim(void);

    // RVA: 0x704 | Ordinal: 1797
        void formTempAimByFwdWind(int);

    // RVA: 0x711 | Ordinal: 1810
        void getAddDistByH(double, double, int, int);

    // RVA: 0x7FC | Ordinal: 2045
        void getDesc_(void);

    // RVA: 0x832 | Ordinal: 2099
        void getFwdDist(int, int, double);

    // RVA: 0x8AF | Ordinal: 2224
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x920 | Ordinal: 2337
        void getLocAimWind(class Math::Vector<3, double>, class Math::Vector<3, double>, class Math::Vector<3, double>);

    // RVA: 0x923 | Ordinal: 2340
        void getLocHitPosByStAng(double);

    // RVA: 0x9AC | Ordinal: 2477
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA40 | Ordinal: 2625
        void getSideDist(int, int);

    // RVA: 0xA46 | Ordinal: 2631
        void getStPitch(double);

    // RVA: 0xA70 | Ordinal: 2673
        void initAimData(class wMArtControlBlockDescriptor const *);

    // RVA: 0xAE5 | Ordinal: 2790
        void linInterpExtD3(double, double, double, double, double);

    // RVA: 0xAE9 | Ordinal: 2794
        void mArtControlF(void);

    // RVA: 0xB41 | Ordinal: 2882
        void readInputData(double);

    // RVA: 0xBB1 | Ordinal: 2994
        void registerStateData(void);

    // RVA: 0xBFA | Ordinal: 3067
        void selectEngineMode(void);

    // RVA: 0xC60 | Ordinal: 3169
        void setEngineMode(int);

    // RVA: 0xCCD | Ordinal: 3278
        void setStPitch(class Math::Vector<3, double> const &);

    // RVA: 0xD54 | Ordinal: 3413
        void simulate(double);

    // RVA: 0x161 | Ordinal: 354
        void wMArtControlBlock(class wMArtControlBlock &&);

    // RVA: 0x162 | Ordinal: 355
        void wMArtControlBlock(class wMArtControlBlock const &);

    // RVA: 0x163 | Ordinal: 356
        void wMArtControlBlock(class wMArtControlBlockDescriptor const *, class wSimulationSystem *);

    // RVA: 0x264 | Ordinal: 613
        void _wMArtControlBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WMARTCONTROLBLOCK_HPP
