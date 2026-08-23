#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FW190Base.dll
// Class: FW190ElectricSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace FW190 {

class FW190ElectricSystem
{
public:

    // RVA: 0x6 | Ordinal: 7
        void FW190ElectricSystem(class PropertyTable_<double> &, class EagleFM::AerodyneFM *);

    // RVA: 0x7 | Ordinal: 8
        void FW190ElectricSystem(class EagleFM::FW190::FW190ElectricSystem const &);

    // RVA: 0x4A | Ordinal: 75
        void OnCockpitLoad(void);

    // RVA: 0x53 | Ordinal: 84
        void doSimulate(void);

    // RVA: 0x63 | Ordinal: 100
        void getDC_Battery(void);

    // RVA: 0x64 | Ordinal: 101
        void getDC_Bus_calcNode(void);

    // RVA: 0x65 | Ordinal: 102
        void getDC_Generator(void);

    // RVA: 0x6C | Ordinal: 109
        void getEngineSystemWire(int);

    // RVA: 0x70 | Ordinal: 113
        void getFuelSystemWire(int);

    // RVA: 0x74 | Ordinal: 117
        void getGearWires(int);

    // RVA: 0x83 | Ordinal: 132
        void getSensorSystemWire(int);

    // RVA: 0x87 | Ordinal: 136
        void getStarter(void);

    // RVA: 0x91 | Ordinal: 146
        void get_28V_Bus(void);

    // RVA: 0x92 | Ordinal: 147
        void get_l_flap_drive(void);

    // RVA: 0x93 | Ordinal: 148
        void get_l_gear_drive(void);

    // RVA: 0x94 | Ordinal: 149
        void get_motor(enum EagleFM::FW190::FW190_Electric_Motors_enum);

    // RVA: 0x95 | Ordinal: 150
        void get_r_flap_drive(void);

    // RVA: 0x96 | Ordinal: 151
        void get_r_gear_drive(void);

    // RVA: 0x97 | Ordinal: 152
        void get_trimmer_drive(void);

    // RVA: 0xAC | Ordinal: 173
        void initPreStart(void);

    // RVA: 0xAF | Ordinal: 176
        void initSources(void);

    // RVA: 0xB4 | Ordinal: 181
        void onBatteryFailure(struct lwl::CSignalInfo const *);

    // RVA: 0xB5 | Ordinal: 182
        void onGeneratorFailure(struct lwl::CSignalInfo const *);

    // RVA: 0xB6 | Ordinal: 183
        void onStarterFailure(struct lwl::CSignalInfo const *);

    // RVA: 0xB8 | Ordinal: 185
        void repair(void);

    // RVA: 0xD8 | Ordinal: 217
        void setExternalPowerOnOff(bool);

    // RVA: 0xE0 | Ordinal: 225
        void setMotorOmega(double);

    // RVA: 0xF4 | Ordinal: 245
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0x19 | Ordinal: 26
        void _FW190ElectricSystem(void);
};

} // namespace FW190
} // namespace EagleFM

// DCS_OPS_RE_FW190BASE.DLL_FW190ELECTRICSYSTEM_HPP
