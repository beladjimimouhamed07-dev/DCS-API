#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
// Class: wAP_KH29
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wAP_KH29
{
public:

    // RVA: 0x47E | Ordinal: 1151
        void __getInputPorts(void);

    // RVA: 0x517 | Ordinal: 1304
        void __getOutputPorts(void);

    // RVA: 0x5D7 | Ordinal: 1496
        void calcFinsCmd(void);

    // RVA: 0x5D8 | Ordinal: 1497
        void calcFinsCmd_x(void);

    // RVA: 0x5EC | Ordinal: 1517
        void calcGuidanceCmd(double);

    // RVA: 0x5FC | Ordinal: 1533
        void calcLOS_pitch(void);

    // RVA: 0x62B | Ordinal: 1580
        void calcRollCmd(void);

    // RVA: 0x702 | Ordinal: 1795
        void fillVecFromDesc(class ed::vector<double, class ed::allocator<double>> const &, class ed::vector<class Math::Vector<2, double>, class ed::allocator<class Math::Vector<2, double>>> *);

    // RVA: 0x791 | Ordinal: 1938
        void getDatCoeff(double, class ed::vector<class Math::Vector<2, double>, class ed::allocator<class Math::Vector<2, double>>> const &);

    // RVA: 0x7AE | Ordinal: 1967
        void getDesc_(void);

    // RVA: 0x862 | Ordinal: 2147
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x95F | Ordinal: 2400
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB0A | Ordinal: 2827
        void limitFinsCmd(void);

    // RVA: 0xB56 | Ordinal: 2903
        void readInputData(void);

    // RVA: 0xB9B | Ordinal: 2972
        void registerStateData(void);

    // RVA: 0xC08 | Ordinal: 3081
        void returnCurrentFValByIncome(double);

    // RVA: 0xC41 | Ordinal: 3138
        void select_Guidance_Mode(void);

    // RVA: 0xC96 | Ordinal: 3223
        void setAutoLoft(int);

    // RVA: 0xCCC | Ordinal: 3277
        void setLOS_pitch_lim(double);

    // RVA: 0xCDD | Ordinal: 3294
        void setManualLoft(int);

    // RVA: 0xD55 | Ordinal: 3414
        void simulate(double);

    // RVA: 0x48 | Ordinal: 73
        void wAP_KH29(class wAP_KH29 &&);

    // RVA: 0x49 | Ordinal: 74
        void wAP_KH29(class wAP_KH29 const &);

    // RVA: 0x4A | Ordinal: 75
        void wAP_KH29(class wAP_KH29_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x1FB | Ordinal: 508
        void _wAP_KH29(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WAP_KH29_HPP
