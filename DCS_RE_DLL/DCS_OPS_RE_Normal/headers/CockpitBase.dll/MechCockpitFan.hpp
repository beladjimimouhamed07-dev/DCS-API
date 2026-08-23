#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: MechCockpitFan
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class MechCockpitFan
{
public:

    // RVA: 0x6C | Ordinal: 109
        void MechCockpitFan(class cockpit::MechCockpitFan &&);

    // RVA: 0x6D | Ordinal: 110
        void MechCockpitFan(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x8E9 | Ordinal: 2282
        void acceptEffectManager(class EagleFM::EffectManager *);

    // RVA: 0xAF7 | Ordinal: 2808
        void connectElectric(class EagleFM::Elec::ItemBase &);

    // RVA: 0xDFF | Ordinal: 3584
        void getSpeed(void) const;

    // RVA: 0x1157 | Ordinal: 4440
        void initAirscrewEffect(class wPosition3<double> const &, unsigned int);

    // RVA: 0x143D | Ordinal: 5182
        void onFanOff(struct lwl::CSignalInfo const *);

    // RVA: 0x143E | Ordinal: 5183
        void onFanOn(struct lwl::CSignalInfo const *);

    // RVA: 0x143F | Ordinal: 5184
        void onFanStop(void);

    // RVA: 0x149F | Ordinal: 5280
        void parseLuaConfig(class Lua::Config &);

    // RVA: 0x1517 | Ordinal: 5400
        void prepareFanForRendering(class wPosition3<double> const &);

    // RVA: 0x173E | Ordinal: 5951
        void setJammed(bool);

    // RVA: 0x176A | Ordinal: 5995
        void setOnOff(bool);

    // RVA: 0x1985 | Ordinal: 6534
        void simulate(double);

    // RVA: 0x2B2 | Ordinal: 691
        void _MechCockpitFan(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_MECHCOCKPITFAN_HPP
