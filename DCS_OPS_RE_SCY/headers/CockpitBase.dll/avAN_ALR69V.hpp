#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avAN_ALR69V
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avAN_ALR69V
{
public:

    // RVA: 0xBB | Ordinal: 188
        void avAN_ALR69V(void);

    // RVA: 0xA5C | Ordinal: 2653
        void checkSoundsVolumes(void);

    // RVA: 0xB13 | Ordinal: 2836
        void controlSounds(void);

    // RVA: 0xC8A | Ordinal: 3211
        void getDevMode(void) const;

    // RVA: 0xE23 | Ordinal: 3620
        void getThreatSymbol(class cockpit::RWR_Emitter const &);

    // RVA: 0x1198 | Ordinal: 4505
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14CC | Ordinal: 5325
        void post_initialize(void);

    // RVA: 0x15A5 | Ordinal: 5542
        void release(void);

    // RVA: 0x16D7 | Ordinal: 5848
        void setDevMode(struct cockpit::Device_Mode const &);

    // RVA: 0x17B2 | Ordinal: 6067
        void setSoundVolume(double);

    // RVA: 0x1A96 | Ordinal: 6807
        void update(void);

    // RVA: 0x2D5 | Ordinal: 726
        void _avAN_ALR69V(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVAN_ALR69V_HPP
