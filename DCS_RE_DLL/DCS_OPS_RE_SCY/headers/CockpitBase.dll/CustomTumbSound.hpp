#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: CustomTumbSound
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class CustomTumbSound
{
public:

    // RVA: 0x36 | Ordinal: 55
        void CustomTumbSound(void);

    // RVA: 0x1152 | Ordinal: 4435
        void init(class cockpit::avDevice &, int, char const *);

    // RVA: 0x14B6 | Ordinal: 5303
        void play_once(void);

    // RVA: 0x2A0 | Ordinal: 673
        void _CustomTumbSound(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CUSTOMTUMBSOUND_HPP
