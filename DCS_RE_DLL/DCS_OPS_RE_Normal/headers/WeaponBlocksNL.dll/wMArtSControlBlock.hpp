#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x700 | Ordinal: 1793
        void fillWindTable(void);

    // RVA: 0x7FE | Ordinal: 2047
        void getDesc_(void);

    // RVA: 0x8B1 | Ordinal: 2226
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x922 | Ordinal: 2339
        void getLocAimWind(class Math::Vector<3, double>, class Math::Vector<3, double>, class Math::Vector<3, double>);

    // RVA: 0x9AE | Ordinal: 2479
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA2C | Ordinal: 2605
        void getProjFallPos(class Math::Vector<3, double>, class Math::Vector<3, double>);

    // RVA: 0xAE7 | Ordinal: 2792
        void linInterpExtD3(double, double, double, double, double);

    // RVA: 0xB43 | Ordinal: 2884
        void readInputData(double);

    // RVA: 0xBB3 | Ordinal: 2996
        void registerStateData(void);

    // RVA: 0xC01 | Ordinal: 3074
        void sendCassetteParams(void);

    // RVA: 0xC65 | Ordinal: 3174
        void setFinalStage(bool);

    // RVA: 0xC9E | Ordinal: 3231
        void setNoCorrection(bool);

    // RVA: 0xD56 | Ordinal: 3415
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WMARTSCONTROLBLOCK_HPP
