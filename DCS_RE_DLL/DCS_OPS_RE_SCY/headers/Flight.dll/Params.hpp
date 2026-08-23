#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Flight.dll
// Class: Params
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace wGroundCrewOwner {
namespace ResourceProvider {

class Params
{
public:

    // RVA: 0x10 | Ordinal: 17
        void Params(struct wGroundCrewOwner::ResourceProvider::Params const &);

    // RVA: 0x11 | Ordinal: 18
        void Params(void);

    // RVA: 0x12 | Ordinal: 19
        void Params(struct wHeliport::ResourceProvider::Params &&);

    // RVA: 0x13 | Ordinal: 20
        void Params(struct wHeliport::ResourceProvider::Params const &);

    // RVA: 0x264 | Ordinal: 613
        void load(class Lua::Config &);

    // RVA: 0x267 | Ordinal: 616
        void load_maintenance_duration_(void);

    // RVA: 0x30 | Ordinal: 49
        void _Params(void);
};

} // namespace ResourceProvider
} // namespace wGroundCrewOwner

// DCS_OPS_RE_FLIGHT.DLL_PARAMS_HPP
