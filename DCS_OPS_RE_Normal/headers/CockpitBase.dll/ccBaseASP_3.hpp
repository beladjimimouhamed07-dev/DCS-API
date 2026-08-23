#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccBaseASP_3
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccBaseASP_3
{
public:

    // RVA: 0x754 | Ordinal: 1877
        void ASP_3N_dbgSightCircle(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x755 | Ordinal: 1878
        void ASP_3N_draw_sights(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x756 | Ordinal: 1879
        void ASP_3N_gyro_sight_pos(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x757 | Ordinal: 1880
        void ASP_3N_movableSightLightness(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x758 | Ordinal: 1881
        void ASP_3N_rotateMirror(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x759 | Ordinal: 1882
        void ASP_3N_rotateRangeMask(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x75A | Ordinal: 1883
        void ASP_3N_rotateSpanMask(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1E6 | Ordinal: 487
        void ccBaseASP_3(class cockpit::ccBaseASP_3 const &);

    // RVA: 0x1E7 | Ordinal: 488
        void ccBaseASP_3(void);

    // RVA: 0xB0E | Ordinal: 2831
        void control(void);

    // RVA: 0xB3D | Ordinal: 2878
        void create_elements_controllers_map(void);

    // RVA: 0xC53 | Ordinal: 3156
        void getBrightnessFadeWithDistance(void);

    // RVA: 0x120C | Ordinal: 4621
        void initialize(class cockpit::avDevice *, unsigned char, class ed::basic_string<char> const &);

    // RVA: 0x1AE5 | Ordinal: 6886
        void update(unsigned char);

    // RVA: 0x1AE6 | Ordinal: 6887
        void update(void);

    // RVA: 0x373 | Ordinal: 884
        void _ccBaseASP_3(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCBASEASP_3_HPP
