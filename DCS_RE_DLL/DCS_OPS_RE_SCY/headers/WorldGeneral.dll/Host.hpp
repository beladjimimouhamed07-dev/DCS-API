#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Host
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Host
{
public:

    // RVA: 0x624 | Ordinal: 1573
        void allow_cockpit_gain(bool);

    // RVA: 0x721 | Ordinal: 1826
        void create(enum Sound::ContextID, char const *, struct SND_HostParams const *);

    // RVA: 0x766 | Ordinal: 1895
        void destroy(void);

    // RVA: 0xBEA | Ordinal: 3051
        void set_max_speed(double);

    // RVA: 0xBF2 | Ordinal: 3059
        void set_pos_callback(void (__cdecl *)(void *, double, double *const), void *);

    // RVA: 0xBF6 | Ordinal: 3063
        void set_sonic_boom(enum Sound::SonicBoomType, float);

    // RVA: 0xBFA | Ordinal: 3067
        void set_type(char const *);

    // RVA: 0xC41 | Ordinal: 3138
        void update(struct SND_HostParams const *);
};

} // namespace Sound

// DCS_OPS_RE_WORLDGENERAL.DLL_HOST_HPP
