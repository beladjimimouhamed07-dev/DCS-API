#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: PlaneSounder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class PlaneSounder
{
public:

    // RVA: 0x219 | Ordinal: 538
        void clearCockpit(void);

    // RVA: 0x230 | Ordinal: 561
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x247 | Ordinal: 584
        void doCalculateGroundMovementParameters(float, float *, float *);

    // RVA: 0x354 | Ordinal: 853
        void init(class IwoLA *, struct Aircraft_Descriptor const *, class Sound::Host *, enum Sound::Sounder::SoundLOD);

    // RVA: 0x36C | Ordinal: 877
        void initCockpit(class Sound::Host *);

    // RVA: 0x375 | Ordinal: 886
        void onAirbrakeExtension(bool);

    // RVA: 0x39F | Ordinal: 928
        void onFlapsMovement(double, double, int);

    // RVA: 0x3FF | Ordinal: 1024
        void update(double);

    // RVA: 0x87 | Ordinal: 136
        void _PlaneSounder(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_PLANESOUNDER_HPP
