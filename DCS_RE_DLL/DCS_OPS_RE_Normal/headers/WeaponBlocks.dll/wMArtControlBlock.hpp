#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x6A1 | Ordinal: 1698
        void controlEngine(void);

    // RVA: 0x704 | Ordinal: 1797
        void fillWindTable(void);

    // RVA: 0x708 | Ordinal: 1801
        void formNoWindTempAim(void);

    // RVA: 0x70A | Ordinal: 1803
        void formTempAimByFwdWind(int);

    // RVA: 0x718 | Ordinal: 1817
        void getAddDistByH(double, double, int, int);

    // RVA: 0x804 | Ordinal: 2053
        void getDesc_(void);

    // RVA: 0x83A | Ordinal: 2107
        void getFwdDist(int, int, double);

    // RVA: 0x8B8 | Ordinal: 2233
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x929 | Ordinal: 2346
        void getLocAimWind(class Math::Vector<3, double>, class Math::Vector<3, double>, class Math::Vector<3, double>);

    // RVA: 0x92C | Ordinal: 2349
        void getLocHitPosByStAng(double);

    // RVA: 0x9B5 | Ordinal: 2486
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA4F | Ordinal: 2640
        void getSideDist(int, int);

    // RVA: 0xA55 | Ordinal: 2646
        void getStPitch(double);

    // RVA: 0xA7F | Ordinal: 2688
        void initAimData(class wMArtControlBlockDescriptor const *);

    // RVA: 0xAC2 | Ordinal: 2755
        void init_randoms(int);

    // RVA: 0xB0C | Ordinal: 2829
        void linInterpExtD3(double, double, double, double, double);

    // RVA: 0xB10 | Ordinal: 2833
        void mArtControlF(void);

    // RVA: 0xB6B | Ordinal: 2924
        void readInputData(double);

    // RVA: 0xBDB | Ordinal: 3036
        void registerStateData(void);

    // RVA: 0xC3B | Ordinal: 3132
        void selectEngineMode(void);

    // RVA: 0xCAA | Ordinal: 3243
        void setEngineMode(int);

    // RVA: 0xD18 | Ordinal: 3353
        void setStPitch(class Math::Vector<3, double> const &);

    // RVA: 0xD9F | Ordinal: 3488
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WMARTCONTROLBLOCK_HPP
