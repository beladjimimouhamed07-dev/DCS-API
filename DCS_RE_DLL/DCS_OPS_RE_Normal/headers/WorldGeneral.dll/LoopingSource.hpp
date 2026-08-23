#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: LoopingSource
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class LoopingSource
{
public:

    // RVA: 0x10E | Ordinal: 271
        void LoopingSource(void);

    // RVA: 0x725 | Ordinal: 1830
        void create(class Sound::Host &, char const *, char const *, char const *, char const *, char const *, char const *, struct SND_SourceParams const *);

    // RVA: 0x726 | Ordinal: 1831
        void create(class Sound::Host &, char const *, char const *, char const *, struct SND_SourceParams const *);

    // RVA: 0x768 | Ordinal: 1897
        void destroy(void);

    // RVA: 0x9AA | Ordinal: 2475
        void isCreated(void);

    // RVA: 0x9BA | Ordinal: 2491
        void isPlaying(void);

    // RVA: 0x9E2 | Ordinal: 2531
        void link(class Sound::LoopingSource &);

    // RVA: 0xB13 | Ordinal: 2836
        void play(void);

    // RVA: 0xB15 | Ordinal: 2838
        void playUpdate(struct SND_SourceParams const *);

    // RVA: 0xC1C | Ordinal: 3101
        void stop(struct SND_SourceParams const *);

    // RVA: 0xC1D | Ordinal: 3102
        void stop(void);

    // RVA: 0xC21 | Ordinal: 3106
        void stopAbruptly(void);

    // RVA: 0xC36 | Ordinal: 3127
        void unlink(void);

    // RVA: 0xC42 | Ordinal: 3139
        void update(struct SND_SourceParams const *);

    // RVA: 0x284 | Ordinal: 645
        void _LoopingSource(void);
};

} // namespace Sound

// DCS_OPS_RE_WORLDGENERAL.DLL_LOOPINGSOURCE_HPP
