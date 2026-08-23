#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Lamp
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class Lamp
{
public:

    // RVA: 0xDD | Ordinal: 222
        void Lamp(class EagleFM::Elec::Lamp const &);

    // RVA: 0xDE | Ordinal: 223
        void Lamp(double);

    // RVA: 0xDF | Ordinal: 224
        void Lamp(double, double);

    // RVA: 0xE0 | Ordinal: 225
        void Lamp(double, double, char const *);

    // RVA: 0xE1 | Ordinal: 226
        void Lamp(double, double, enum EagleFM::Elec::LoadUnits);

    // RVA: 0xE2 | Ordinal: 227
        void Lamp(double, double, enum EagleFM::Elec::LoadUnits, char const *);

    // RVA: 0xE3 | Ordinal: 228
        void Lamp(double, char const *);

    // RVA: 0xE4 | Ordinal: 229
        void Lamp(void);

    // RVA: 0x4F6 | Ordinal: 1271
        void getBrightnessRegulatorValue(void) const;

    // RVA: 0x5B4 | Ordinal: 1461
        void getLightness(bool) const;

    // RVA: 0x5DB | Ordinal: 1500
        void getNominalLoad(void) const;

    // RVA: 0x728 | Ordinal: 1833
        void init(void);

    // RVA: 0x74F | Ordinal: 1872
        void initLoadR(double, enum EagleFM::Elec::LoadUnits);

    // RVA: 0x818 | Ordinal: 2073
        void setBrightnessMinVal(double);

    // RVA: 0x819 | Ordinal: 2074
        void setBrightnessRegulator(double);

    // RVA: 0x890 | Ordinal: 2193
        void setLampParams(class EagleFM::Elec::LampParams const &);

    // RVA: 0x891 | Ordinal: 2194
        void setLampParams(double);

    // RVA: 0x892 | Ordinal: 2195
        void setLampParamsFromState(class Lua::Config &, char const *);

    // RVA: 0x89E | Ordinal: 2207
        void setLoadR(double);

    // RVA: 0x996 | Ordinal: 2455
        void updateLightness(void);

    // RVA: 0x99F | Ordinal: 2464
        void updateOwnVoltage(double);

    // RVA: 0x1BD | Ordinal: 446
        void _Lamp(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_LAMP_HPP
