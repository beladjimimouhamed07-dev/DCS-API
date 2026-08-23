#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Debug
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Debug
{
public:

    // RVA: 0x347 | Ordinal: 840
        void getWatchValue(unsigned __int64);

    // RVA: 0x348 | Ordinal: 841
        void get_newSnd_playEngines(void);

    // RVA: 0x349 | Ordinal: 842
        void get_oldSnd_playEngines(void);

    // RVA: 0x34A | Ordinal: 843
        void get_oldSnd_playF15OWS(void);

    // RVA: 0x34B | Ordinal: 844
        void get_oldSnd_playWinds(void);

    // RVA: 0x3EC | Ordinal: 1005
        void registerSounderDebug(void);

    // RVA: 0x3F9 | Ordinal: 1018
        void setWatchValue(unsigned __int64, double);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_DEBUG_HPP
