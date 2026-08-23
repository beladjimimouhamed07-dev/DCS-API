#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x7EE | Ordinal: 2031
        void getDesc_(void);

    // RVA: 0x8A2 | Ordinal: 2211
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x99F | Ordinal: 2464
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xB09 | Ordinal: 2826
        void limit(double &, double const &);

    // RVA: 0xBC8 | Ordinal: 3017
        void registerStateData(void);

    // RVA: 0xCB5 | Ordinal: 3254
        void setGimbalAngle(class Math::Vector<3, double> const &);

    // RVA: 0xD88 | Ordinal: 3465
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

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WGM_SERVOMOTOR3_HPP
