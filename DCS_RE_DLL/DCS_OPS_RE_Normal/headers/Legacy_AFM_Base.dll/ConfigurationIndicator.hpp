#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: ConfigurationIndicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class ConfigurationIndicator
{
public:

    // RVA: 0x30 | Ordinal: 49
        void ConfigurationIndicator(class AFM::ConfigurationIndicator &&);

    // RVA: 0x31 | Ordinal: 50
        void ConfigurationIndicator(class AFM::ConfigurationIndicator const &);

    // RVA: 0x32 | Ordinal: 51
        void ConfigurationIndicator(void);

    // RVA: 0x34A | Ordinal: 843
        void Construct(void);

    // RVA: 0x3A3 | Ordinal: 932
        void Create(void);

    // RVA: 0x46F | Ordinal: 1136
        void LockControlSystem(class AFM::ControlSystem *);

    // RVA: 0x483 | Ordinal: 1156
        void LockElectroSystem(class AFM::ElectroSystem *);

    // RVA: 0x48A | Ordinal: 1163
        void LockGear(class AFM::Gear *);

    // RVA: 0x4DA | Ordinal: 1243
        void Simulation(double);

    // RVA: 0x5D5 | Ordinal: 1494
        void getIPointerAttentionLamp(class AFM::Lamp **);

    // RVA: 0x61E | Ordinal: 1567
        void getIPointerLeftAirBrakeLamp(class AFM::Lamp **);

    // RVA: 0x620 | Ordinal: 1569
        void getIPointerLeftFlapLandingPositionLamp(class AFM::Lamp **);

    // RVA: 0x621 | Ordinal: 1570
        void getIPointerLeftFlapManoeuvrePositionLamp(class AFM::Lamp **);

    // RVA: 0x623 | Ordinal: 1572
        void getIPointerLeftGearLamp(class AFM::Lamp **);

    // RVA: 0x63E | Ordinal: 1599
        void getIPointerNoseGearLamp(class AFM::Lamp **);

    // RVA: 0x658 | Ordinal: 1625
        void getIPointerRightAirBrakeLamp(class AFM::Lamp **);

    // RVA: 0x65A | Ordinal: 1627
        void getIPointerRightFlapLandingPositionLamp(class AFM::Lamp **);

    // RVA: 0x65B | Ordinal: 1628
        void getIPointerRightFlapManoeuvrePositionLamp(class AFM::Lamp **);

    // RVA: 0x65D | Ordinal: 1630
        void getIPointerRightGearLamp(class AFM::Lamp **);

    // RVA: 0x112 | Ordinal: 275
        void _ConfigurationIndicator(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_CONFIGURATIONINDICATOR_HPP
