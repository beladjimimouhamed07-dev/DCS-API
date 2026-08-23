#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_S_3_Base
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_S_3_Base
{
public:

    // RVA: 0x6B | Ordinal: 108
        void Sounder_S_3_Base(void);

    // RVA: 0x244 | Ordinal: 581
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x2C0 | Ordinal: 705
        void doInit(class Sound::Host *);

    // RVA: 0x32F | Ordinal: 816
        void doUpdate(double);

    // RVA: 0x3EA | Ordinal: 1003
        void playEngineSounds(enum Sound::Sounder_S_3_Base::S3_ExtSndSources, bool, float, float);

    // RVA: 0x40F | Ordinal: 1040
        void updateAPU(void);

    // RVA: 0x41F | Ordinal: 1056
        void updateCoreDelta(int, float, float);

    // RVA: 0x435 | Ordinal: 1078
        void updateEngineSounds(bool, float, bool, float);

    // RVA: 0x436 | Ordinal: 1079
        void updateThrustAvgDelta(float, float);

    // RVA: 0xF4 | Ordinal: 245
        void _Sounder_S_3_Base(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_S_3_BASE_HPP
