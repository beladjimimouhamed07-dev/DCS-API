#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avJammerInterface
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avJammerInterface
{
public:

    // RVA: 0x835 | Ordinal: 2102
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x13F | Ordinal: 320
        void avJammerInterface(class cockpit::avJammerInterface const &);

    // RVA: 0x140 | Ordinal: 321
        void avJammerInterface(void);

    // RVA: 0xA4E | Ordinal: 2639
        void checkJammersCount(void);

    // RVA: 0x11CA | Ordinal: 4555
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x122A | Ordinal: 4651
        void initialize_jammers(void);

    // RVA: 0x124C | Ordinal: 4685
        void isAvailable(void);

    // RVA: 0x1265 | Ordinal: 4710
        void isJammerActive(void) const;

    // RVA: 0x1483 | Ordinal: 5252
        void on_weapon_rearm(void);

    // RVA: 0x15B7 | Ordinal: 5560
        void release(void);

    // RVA: 0x15D7 | Ordinal: 5592
        void release_jammers(void);

    // RVA: 0x19D6 | Ordinal: 6615
        void startJammer(void);

    // RVA: 0x19FF | Ordinal: 6656
        void stopJammer(void);

    // RVA: 0x1ABA | Ordinal: 6843
        void update(void);

    // RVA: 0x31A | Ordinal: 795
        void _avJammerInterface(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVJAMMERINTERFACE_HPP
