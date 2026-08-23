#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccK14GunSight
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccK14GunSight
{
public:

    // RVA: 0x7E7 | Ordinal: 2024
        void K14_dbgSightCircle(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x7E8 | Ordinal: 2025
        void K14_draw_sights(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x7E9 | Ordinal: 2026
        void K14_fixedSightLightness(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x7EA | Ordinal: 2027
        void K14_gyro_sight_pos(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x7EB | Ordinal: 2028
        void K14_movableSightLightness(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x7EC | Ordinal: 2029
        void K14_rotateRangeMask(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x7ED | Ordinal: 2030
        void K14_rotateSpanMask(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x205 | Ordinal: 518
        void ccK14GunSight(class cockpit::ccK14GunSight const &);

    // RVA: 0x206 | Ordinal: 519
        void ccK14GunSight(void);

    // RVA: 0xB12 | Ordinal: 2835
        void control(void);

    // RVA: 0xB43 | Ordinal: 2884
        void create_elements_controllers_map(void);

    // RVA: 0x1216 | Ordinal: 4631
        void initialize(class cockpit::avDevice *, unsigned char, class ed::basic_string<char> const &);

    // RVA: 0x1508 | Ordinal: 5385
        void post_initialize(void);

    // RVA: 0x15D3 | Ordinal: 5588
        void release(void);

    // RVA: 0x1AEC | Ordinal: 6893
        void update(unsigned char);

    // RVA: 0x383 | Ordinal: 900
        void _ccK14GunSight(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCK14GUNSIGHT_HPP
