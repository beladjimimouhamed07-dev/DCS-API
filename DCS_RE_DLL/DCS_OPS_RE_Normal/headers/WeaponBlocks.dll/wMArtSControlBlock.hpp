#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wMArtSControlBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wMArtSControlBlock
{
public:

    // RVA: 0x4D6 | Ordinal: 1239
        void __getInputPorts(void);

    // RVA: 0x56F | Ordinal: 1392
        void __getOutputPorts(void);

    // RVA: 0x608 | Ordinal: 1545
        void calcNewTargetPoint(void);

    // RVA: 0x706 | Ordinal: 1799
        void fillWindTable(void);

    // RVA: 0x806 | Ordinal: 2055
        void getDesc_(void);

    // RVA: 0x8BA | Ordinal: 2235
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x92B | Ordinal: 2348
        void getLocAimWind(class Math::Vector<3, double>, class Math::Vector<3, double>, class Math::Vector<3, double>);

    // RVA: 0x9B7 | Ordinal: 2488
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA35 | Ordinal: 2614
        void getProjFallPos(class Math::Vector<3, double>, class Math::Vector<3, double>);

    // RVA: 0xB0E | Ordinal: 2831
        void linInterpExtD3(double, double, double, double, double);

    // RVA: 0xB6D | Ordinal: 2926
        void readInputData(double);

    // RVA: 0xBDD | Ordinal: 3038
        void registerStateData(void);

    // RVA: 0xC45 | Ordinal: 3142
        void sendCassetteParams(void);

    // RVA: 0xCAF | Ordinal: 3248
        void setFinalStage(bool);

    // RVA: 0xCE8 | Ordinal: 3305
        void setNoCorrection(bool);

    // RVA: 0xDA1 | Ordinal: 3490
        void simulate(double);

    // RVA: 0x167 | Ordinal: 360
        void wMArtSControlBlock(class wMArtSControlBlock &&);

    // RVA: 0x168 | Ordinal: 361
        void wMArtSControlBlock(class wMArtSControlBlock const &);

    // RVA: 0x169 | Ordinal: 362
        void wMArtSControlBlock(class wMArtSControlBlockDescriptor const *, class wSimulationSystem *);

    // RVA: 0x266 | Ordinal: 615
        void _wMArtSControlBlock(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WMARTSCONTROLBLOCK_HPP
