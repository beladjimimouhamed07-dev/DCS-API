#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_MiG_29_Fulcrum
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_MiG_29_Fulcrum
{
public:

    // RVA: 0x4F | Ordinal: 80
        void Sounder_MiG_29_Fulcrum(void);

    // RVA: 0x278 | Ordinal: 633
        void doClearCockpit(void);

    // RVA: 0x2B3 | Ordinal: 692
        void doInit(class Sound::Host *);

    // RVA: 0x2EC | Ordinal: 749
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x346 | Ordinal: 839
        void getSource(enum Sound::Sounder_MiG_29_Fulcrum::MIG29Fulcrum_CptSndSources);

    // RVA: 0x365 | Ordinal: 870
        void initAliasForCockpit(void);

    // RVA: 0x391 | Ordinal: 914
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0xD8 | Ordinal: 217
        void _Sounder_MiG_29_Fulcrum(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_MIG_29_FULCRUM_HPP
