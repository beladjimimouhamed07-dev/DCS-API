#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avIFF_APX_72
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avIFF_APX_72
{
public:

    // RVA: 0x880 | Ordinal: 2177
        void SetCommand(int, float);

    // RVA: 0x11E | Ordinal: 287
        void avIFF_APX_72(class cockpit::avIFF_APX_72 const &);

    // RVA: 0x11F | Ordinal: 288
        void avIFF_APX_72(void);

    // RVA: 0xA3B | Ordinal: 2620
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xFA2 | Ordinal: 4003
        void get_light_status(unsigned int) const;

    // RVA: 0x14E4 | Ordinal: 5349
        void post_initialize(void);

    // RVA: 0x30A | Ordinal: 779
        void _avIFF_APX_72(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVIFF_APX_72_HPP
