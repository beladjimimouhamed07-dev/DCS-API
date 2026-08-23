#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_F110GE129
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_F110GE129
{
public:

    // RVA: 0x1D | Ordinal: 30
        void Sounder_F110GE129(void);

    // RVA: 0x263 | Ordinal: 612
        void doClearCockpit(void);

    // RVA: 0x29B | Ordinal: 668
        void doInit(class Sound::Host *);

    // RVA: 0x2D6 | Ordinal: 727
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x310 | Ordinal: 785
        void doUpdate(double);

    // RVA: 0x3F4 | Ordinal: 1013
        void setStarter(bool);

    // RVA: 0xA6 | Ordinal: 167
        void _Sounder_F110GE129(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_F110GE129_HPP
