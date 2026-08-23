#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
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

    // RVA: 0x6FC | Ordinal: 1789
        void fillVecFromDesc(class ed::vector<double, class ed::allocator<double>> const &, class ed::vector<class Math::Vector<2, double>, class ed::allocator<class Math::Vector<2, double>>> *);

    // RVA: 0x789 | Ordinal: 1930
        void getDatCoeff(double, class ed::vector<class Math::Vector<2, double>, class ed::allocator<class Math::Vector<2, double>>> const &);

    // RVA: 0x7A6 | Ordinal: 1959
        void getDesc_(void);

    // RVA: 0x859 | Ordinal: 2138
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x956 | Ordinal: 2391
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAE3 | Ordinal: 2788
        void limitFinsCmd(void);

    // RVA: 0xB2C | Ordinal: 2861
        void readInputData(void);

    // RVA: 0xB71 | Ordinal: 2930
        void registerStateData(void);

    // RVA: 0xBDE | Ordinal: 3039
        void returnCurrentFValByIncome(double);

    // RVA: 0xBFD | Ordinal: 3070
        void select_Guidance_Mode(void);

    // RVA: 0xC4C | Ordinal: 3149
        void setAutoLoft(int);

    // RVA: 0xC82 | Ordinal: 3203
        void setLOS_pitch_lim(double);

    // RVA: 0xC93 | Ordinal: 3220
        void setManualLoft(int);

    // RVA: 0xD0A | Ordinal: 3339
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

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WAP_KH29_HPP
