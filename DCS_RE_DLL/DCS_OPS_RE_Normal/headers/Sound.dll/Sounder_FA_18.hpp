#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_FA_18
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_FA_18
{
public:

    // RVA: 0x20 | Ordinal: 33
        void Sounder_FA_18(void);

    // RVA: 0x237 | Ordinal: 568
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x266 | Ordinal: 615
        void doClearCockpit(void);

    // RVA: 0x29E | Ordinal: 671
        void doInit(class Sound::Host *);

    // RVA: 0x2D9 | Ordinal: 730
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x313 | Ordinal: 788
        void doUpdate(double);

    // RVA: 0x33E | Ordinal: 831
        void getOverridenCategories(void);

    // RVA: 0x387 | Ordinal: 904
        void onCustomSound(int, int, struct SND_SourceParams *, double, double, double);

    // RVA: 0x3C9 | Ordinal: 970
        void onUndercarriageDoorSlam(int, double);

    // RVA: 0x3D3 | Ordinal: 980
        void onUndercarriageLock(int, double);

    // RVA: 0x3DD | Ordinal: 990
        void onUndercarriageStrutMove(bool, struct ed::array<char, 3> const *, double, bool);

    // RVA: 0xA9 | Ordinal: 170
        void _Sounder_FA_18(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_FA_18_HPP
