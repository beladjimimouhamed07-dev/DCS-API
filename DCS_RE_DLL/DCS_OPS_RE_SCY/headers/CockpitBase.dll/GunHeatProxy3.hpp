#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: GunHeatProxy3
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class GunHeatProxy3
{
public:

    // RVA: 0x50 | Ordinal: 81
        void GunHeatProxy3(struct cockpit::GunHeatProxyModelDesc3 const &);

    // RVA: 0x51 | Ordinal: 82
        void GunHeatProxy3(class cockpit::GunHeatProxy3 &&);

    // RVA: 0x52 | Ordinal: 83
        void GunHeatProxy3(class cockpit::GunHeatProxy3 const &);

    // RVA: 0xB2D | Ordinal: 2862
        void create(struct cockpit::GunHeatProxyModelDesc3 const &);

    // RVA: 0xCFB | Ordinal: 3324
        void getHeatGroup(void);

    // RVA: 0x1B70 | Ordinal: 7025
        void update_heat_sources(float, float);

    // RVA: 0x2A7 | Ordinal: 680
        void _GunHeatProxy3(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_GUNHEATPROXY3_HPP
