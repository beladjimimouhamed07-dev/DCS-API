#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_Snecma_M53
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_Snecma_M53
{
public:

    // RVA: 0x6C | Ordinal: 109
        void Sounder_Snecma_M53(void);

    // RVA: 0x281 | Ordinal: 642
        void doClearCockpit(void);

    // RVA: 0x2C1 | Ordinal: 706
        void doInit(class Sound::Host *);

    // RVA: 0x2F8 | Ordinal: 761
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x330 | Ordinal: 817
        void doUpdate(double);

    // RVA: 0xF5 | Ordinal: 246
        void _Sounder_Snecma_M53(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_SNECMA_M53_HPP
