#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccEkranIndicator
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccEkranIndicator
{
public:

    // RVA: 0x1F6 | Ordinal: 503
        void ccEkranIndicator(class cockpit::ccEkranIndicator const &);

    // RVA: 0x1F7 | Ordinal: 504
        void ccEkranIndicator(void);

    // RVA: 0xB10 | Ordinal: 2833
        void control(void);

    // RVA: 0xB41 | Ordinal: 2882
        void create_elements_controllers_map(void);

    // RVA: 0xB63 | Ordinal: 2916
        void default_time_str(struct cockpit::frame_info &);

    // RVA: 0xB81 | Ordinal: 2946
        void do_string_change(class cockpit::avEkranMessage &, struct cockpit::frame_info &);

    // RVA: 0xC20 | Ordinal: 3105
        void freeze_strip(struct cockpit::frame_info &);

    // RVA: 0xF25 | Ordinal: 3878
        void get_dz_1(void) const;

    // RVA: 0xF26 | Ordinal: 3879
        void get_dz_2(void) const;

    // RVA: 0xF32 | Ordinal: 3891
        void get_failure_flag(void) const;

    // RVA: 0xFC4 | Ordinal: 4037
        void get_memory_flag(void) const;

    // RVA: 0x1034 | Ordinal: 4149
        void get_queue_flag(void) const;

    // RVA: 0x1212 | Ordinal: 4627
        void initialize(class cockpit::avDevice *, unsigned char, class ed::basic_string<char> const &);

    // RVA: 0x126D | Ordinal: 4718
        void isOff(void);

    // RVA: 0x13FD | Ordinal: 5118
        void make_time_string(struct cockpit::frame_info &, class cockpit::avEkranMessage const &);

    // RVA: 0x1A67 | Ordinal: 6760
        void txt1_control(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1A68 | Ordinal: 6761
        void txt2_control(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1A6B | Ordinal: 6764
        void txt_failure_control(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1A6F | Ordinal: 6768
        void txt_memory_control(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x1A70 | Ordinal: 6769
        void txt_queue_control(class cockpit::Element *, class cockpit::ccDrawable *, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x37C | Ordinal: 893
        void _ccEkranIndicator(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCEKRANINDICATOR_HPP
