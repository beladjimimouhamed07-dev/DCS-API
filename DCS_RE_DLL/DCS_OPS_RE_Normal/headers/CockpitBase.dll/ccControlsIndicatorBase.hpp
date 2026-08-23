#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccControlsIndicatorBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccControlsIndicatorBase
{
public:

    // RVA: 0x8A4 | Ordinal: 2213
        void SetCommand(int, float);

    // RVA: 0x97E | Ordinal: 2431
        void brakes_value(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x97F | Ordinal: 2432
        void brakes_value_actual(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1F0 | Ordinal: 497
        void ccControlsIndicatorBase(void);

    // RVA: 0xB3F | Ordinal: 2880
        void create_elements_controllers_map(void);

    // RVA: 0x120F | Ordinal: 4624
        void initialize(class cockpit::avDevice *, unsigned char, class ed::basic_string<char> const &);

    // RVA: 0x149C | Ordinal: 5277
        void parking_brake(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1647 | Ordinal: 5704
        void rudder(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x197D | Ordinal: 6526
        void show(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x19F5 | Ordinal: 6646
        void stick_pitch(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x19F6 | Ordinal: 6647
        void stick_roll(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1A35 | Ordinal: 6710
        void throttle(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x378 | Ordinal: 889
        void _ccControlsIndicatorBase(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCCONTROLSINDICATORBASE_HPP
