#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_FW_190
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_FW_190
{
public:

    // RVA: 0x22 | Ordinal: 35
        void Sounder_FW_190(void);

    // RVA: 0x267 | Ordinal: 616
        void doClearCockpit(void);

    // RVA: 0x29F | Ordinal: 672
        void doInit(class Sound::Host *);

    // RVA: 0x2DA | Ordinal: 731
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x314 | Ordinal: 789
        void doUpdate(double);

    // RVA: 0x388 | Ordinal: 905
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3A0 | Ordinal: 929
        void onFlapsMovement(double, double, int);

    // RVA: 0x3D4 | Ordinal: 981
        void onUndercarriageLock(int, double);

    // RVA: 0x3DE | Ordinal: 991
        void onUndercarriageStrutMove(bool, struct ed::array<char, 3> const *, double, bool);

    // RVA: 0xAB | Ordinal: 172
        void _Sounder_FW_190(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_FW_190_HPP
