#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: Source
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Source
{
public:

    // RVA: 0x73E | Ordinal: 1855
        void create(class Sound::Host &, char const *, struct SND_SourceParams const *);

    // RVA: 0x756 | Ordinal: 1879
        void create_alternative(class Sound::Host &, char const *, char const *, struct SND_SourceParams const *);

    // RVA: 0x757 | Ordinal: 1880
        void create_alternative_ex(class Sound::Host &, char const *, char const *, struct SND_SourceParams const *);

    // RVA: 0x76A | Ordinal: 1899
        void destroy(void);

    // RVA: 0x9DB | Ordinal: 2524
        void is_playing(void) const;

    // RVA: 0x9E3 | Ordinal: 2532
        void link(class Sound::Source &);

    // RVA: 0xB14 | Ordinal: 2837
        void play(struct SND_PlayParams const *, struct SND_SourceParams const *);

    // RVA: 0xB16 | Ordinal: 2839
        void play_continue(void);

    // RVA: 0xB17 | Ordinal: 2840
        void play_once(struct SND_SourceParams const *);

    // RVA: 0xB18 | Ordinal: 2841
        void play_update(struct SND_SourceParams const *);

    // RVA: 0xC1E | Ordinal: 3103
        void stop(void);

    // RVA: 0xC37 | Ordinal: 3128
        void unlink(void);

    // RVA: 0xC44 | Ordinal: 3141
        void update(struct SND_SourceParams const *);
};

} // namespace Sound

// DCS_OPS_RE_WORLDGENERAL.DLL_SOURCE_HPP
