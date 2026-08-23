#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avMarkerReceiver
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avMarkerReceiver
{
public:

    // RVA: 0x88B | Ordinal: 2188
        void SetCommand(int, float);

    // RVA: 0x154 | Ordinal: 341
        void avMarkerReceiver(class cockpit::avMarkerReceiver const &);

    // RVA: 0x155 | Ordinal: 342
        void avMarkerReceiver(void);

    // RVA: 0xA6E | Ordinal: 2671
        void check_device_status(void);

    // RVA: 0xA79 | Ordinal: 2682
        void check_marker_beacons(void);

    // RVA: 0xD66 | Ordinal: 3431
        void getMute(void) const;

    // RVA: 0xDB1 | Ordinal: 3506
        void getRadioReceiver(void);

    // RVA: 0xF16 | Ordinal: 3863
        void get_device_status(void);

    // RVA: 0x11D1 | Ordinal: 4562
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1298 | Ordinal: 4761
        void is_BRPM_below(void) const;

    // RVA: 0x1299 | Ordinal: 4762
        void is_DRPM_below(void) const;

    // RVA: 0x129A | Ordinal: 4763
        void is_InnerMarker_below(void) const;

    // RVA: 0x129F | Ordinal: 4768
        void is_Marker_below(void) const;

    // RVA: 0x12A0 | Ordinal: 4769
        void is_MiddleMarker_below(void) const;

    // RVA: 0x12A1 | Ordinal: 4770
        void is_OuterMarker_below(void) const;

    // RVA: 0x12C7 | Ordinal: 4808
        void is_signal_received(void) const;

    // RVA: 0x15BA | Ordinal: 5563
        void release(void);

    // RVA: 0x1761 | Ordinal: 5986
        void setMute(bool);

    // RVA: 0x1ABF | Ordinal: 6848
        void update(void);

    // RVA: 0x323 | Ordinal: 804
        void _avMarkerReceiver(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVMARKERRECEIVER_HPP
