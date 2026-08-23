#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccCrewIndicatorBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccCrewIndicatorBase
{
public:

    // RVA: 0x9A4 | Ordinal: 2469
        void cabin_icon(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x9A5 | Ordinal: 2470
        void cabin_index(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1F1 | Ordinal: 498
        void ccCrewIndicatorBase(class cockpit::ccCrewIndicatorBase const &);

    // RVA: 0x1F2 | Ordinal: 499
        void ccCrewIndicatorBase(void);

    // RVA: 0xB40 | Ordinal: 2881
        void create_elements_controllers_map(void);

    // RVA: 0x1210 | Ordinal: 4625
        void initialize(class cockpit::avDevice *, unsigned char, class ed::basic_string<char> const &);

    // RVA: 0x1394 | Ordinal: 5013
        void list_origin(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1487 | Ordinal: 5256
        void operator_name(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1505 | Ordinal: 5382
        void post_initialize(void);

    // RVA: 0x1640 | Ordinal: 5697
        void role_icon(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x197E | Ordinal: 6527
        void show(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x379 | Ordinal: 890
        void _ccCrewIndicatorBase(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCCREWINDICATORBASE_HPP
