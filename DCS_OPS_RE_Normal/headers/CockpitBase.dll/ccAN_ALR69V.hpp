#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccAN_ALR69V
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccAN_ALR69V
{
public:

    // RVA: 0x763 | Ordinal: 1892
        void AirborneSymbol(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x7F8 | Ordinal: 2041
        void LaunchSymbol(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x820 | Ordinal: 2081
        void NewGuySymbol(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x851 | Ordinal: 2130
        void PrimaryThreatSymbol(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x8D8 | Ordinal: 2265
        void ThreatPos(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x8D9 | Ordinal: 2266
        void ThreatSymbol(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1E1 | Ordinal: 482
        void ccAN_ALR69V(class cockpit::ccAN_ALR69V const &);

    // RVA: 0x1E2 | Ordinal: 483
        void ccAN_ALR69V(void);

    // RVA: 0xB0C | Ordinal: 2829
        void control(void);

    // RVA: 0xB3B | Ordinal: 2876
        void create_elements_controllers_map(void);

    // RVA: 0x1209 | Ordinal: 4618
        void initialize(class cockpit::avDevice *, unsigned char, class ed::basic_string<char> const &);

    // RVA: 0x124E | Ordinal: 4687
        void isBlink(float);

    // RVA: 0x370 | Ordinal: 881
        void _ccAN_ALR69V(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCAN_ALR69V_HPP
