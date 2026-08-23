#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avRemoteCompass_AN5730
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avRemoteCompass_AN5730
{
public:

    // RVA: 0x894 | Ordinal: 2197
        void SetCommand(int, float);

    // RVA: 0x191 | Ordinal: 402
        void avRemoteCompass_AN5730(class cockpit::avRemoteCompass_AN5730 const &);

    // RVA: 0x192 | Ordinal: 403
        void avRemoteCompass_AN5730(void);

    // RVA: 0xA40 | Ordinal: 2625
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xC6D | Ordinal: 3182
        void getCourseKnobVal(void) const;

    // RVA: 0xEE3 | Ordinal: 3812
        void get_commanded_course(void) const;

    // RVA: 0xF6F | Ordinal: 3952
        void get_heading(void) const;

    // RVA: 0x11E3 | Ordinal: 4580
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1ACF | Ordinal: 6864
        void update(void);

    // RVA: 0x340 | Ordinal: 833
        void _avRemoteCompass_AN5730(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVREMOTECOMPASS_AN5730_HPP
