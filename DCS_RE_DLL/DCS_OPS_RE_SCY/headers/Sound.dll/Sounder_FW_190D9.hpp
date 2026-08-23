#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Sound.dll
// Class: Sounder_FW_190D9
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Sound {

class Sounder_FW_190D9
{
public:

    // RVA: 0x24 | Ordinal: 37
        void Sounder_FW_190D9(void);

    // RVA: 0x239 | Ordinal: 570
        void doCalculateAirmassParameters(float, float, float *, float *, float *);

    // RVA: 0x269 | Ordinal: 618
        void doClearCockpit(void);

    // RVA: 0x2A1 | Ordinal: 674
        void doInit(class Sound::Host *);

    // RVA: 0x2DC | Ordinal: 733
        void doInitCockpit(class Sound::Host *);

    // RVA: 0x316 | Ordinal: 791
        void doUpdate(double);

    // RVA: 0x3AA | Ordinal: 939
        void onGunFire(bool, int, bool);

    // RVA: 0xAD | Ordinal: 174
        void _Sounder_FW_190D9(void);
};

} // namespace Sound

// DCS_OPS_RE_SOUND.DLL_SOUNDER_FW_190D9_HPP
