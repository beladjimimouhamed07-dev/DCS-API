#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccAIHelperBase
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccAIHelperBase
{
public:

    // RVA: 0x1DF | Ordinal: 480
        void ccAIHelperBase(class cockpit::ccAIHelperBase const &);

    // RVA: 0x1E0 | Ordinal: 481
        void ccAIHelperBase(void);

    // RVA: 0xB3A | Ordinal: 2875
        void create_elements_controllers_map(void);

    // RVA: 0x114F | Ordinal: 4432
        void indication_controller(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1151 | Ordinal: 4434
        void information_controller(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1980 | Ordinal: 6529
        void show_controller(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x36F | Ordinal: 880
        void _ccAIHelperBase(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCAIHELPERBASE_HPP
