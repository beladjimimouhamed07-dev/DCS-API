#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avCrewIndicatorBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avCrewIndicatorBase
{
public:

    // RVA: 0x830 | Ordinal: 2097
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x875 | Ordinal: 2166
        void SetCommand(int, float);

    // RVA: 0xEB | Ordinal: 236
        void avCrewIndicatorBase(class cockpit::avCrewIndicatorBase &&);

    // RVA: 0xEC | Ordinal: 237
        void avCrewIndicatorBase(class cockpit::avCrewIndicatorBase const &);

    // RVA: 0xED | Ordinal: 238
        void avCrewIndicatorBase(void);

    // RVA: 0x11AF | Ordinal: 4528
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1438 | Ordinal: 5177
        void onChangeCabin(int, int);

    // RVA: 0x14DA | Ordinal: 5339
        void post_initialize(void);

    // RVA: 0x1608 | Ordinal: 5641
        void repopulate(void);

    // RVA: 0x16AB | Ordinal: 5804
        void setCabins(int);

    // RVA: 0x2F2 | Ordinal: 755
        void _avCrewIndicatorBase(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVCREWINDICATORBASE_HPP
