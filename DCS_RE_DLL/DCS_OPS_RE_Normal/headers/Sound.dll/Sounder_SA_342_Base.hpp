#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_SA_342_Base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_SA_342_Base
{
public:

    // RVA: 0x67 | Ordinal: 104
        void Sounder_SA_342_Base(void);

    // RVA: 0x258 | Ordinal: 601
        void doCalculateRotorDynamicGain(void);

    // RVA: 0x2BF | Ordinal: 704
        void doInit(class Sound::Host *);

    // RVA: 0x32E | Ordinal: 815
        void doUpdate(double);

    // RVA: 0x40E | Ordinal: 1039
        void updateAPU(void);

    // RVA: 0x41E | Ordinal: 1055
        void updateCoreDelta(int, float, float);

    // RVA: 0x42D | Ordinal: 1070
        void updateEngine(enum Sound::Sounder_SA_342_Base::SA342_ExtSndSources, float, bool, float);

    // RVA: 0xF0 | Ordinal: 241
        void _Sounder_SA_342_Base(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_SA_342_BASE_HPP
