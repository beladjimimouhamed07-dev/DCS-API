#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wGM_ServoMotor3
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wGM_ServoMotor3
{
public:

    // RVA: 0x4BE | Ordinal: 1215
        void __getInputPorts(void);

    // RVA: 0x557 | Ordinal: 1368
        void __getOutputPorts(void);

    // RVA: 0x5E4 | Ordinal: 1509
        void calcGimbalDynamics2(double);

    // RVA: 0x5E5 | Ordinal: 1510
        void calcGimbalDynamics3(double);

    // RVA: 0x7E6 | Ordinal: 2023
        void getDesc_(void);

    // RVA: 0x899 | Ordinal: 2202
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x996 | Ordinal: 2455
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xAE2 | Ordinal: 2787
        void limit(double &, double const &);

    // RVA: 0xB9E | Ordinal: 2975
        void registerStateData(void);

    // RVA: 0xC6B | Ordinal: 3180
        void setGimbalAngle(class Math::Vector<3, double> const &);

    // RVA: 0xD3D | Ordinal: 3390
        void simulate(double);

    // RVA: 0x120 | Ordinal: 289
        void wGM_ServoMotor3(class wGM_ServoMotor3 &&);

    // RVA: 0x121 | Ordinal: 290
        void wGM_ServoMotor3(class wGM_ServoMotor3 const &);

    // RVA: 0x122 | Ordinal: 291
        void wGM_ServoMotor3(class wGM_ServoMotor3_Descriptor const *, class wSimulationSystem *);

    // RVA: 0x24B | Ordinal: 588
        void _wGM_ServoMotor3(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WGM_SERVOMOTOR3_HPP
