#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avTACAN_ARN118_CtrlPanel
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avTACAN_ARN118_CtrlPanel
{
public:

    // RVA: 0x899 | Ordinal: 2202
        void SetCommand(int, float);

    // RVA: 0x1C1 | Ordinal: 450
        void avTACAN_ARN118_CtrlPanel(void);

    // RVA: 0xA42 | Ordinal: 2627
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xBD8 | Ordinal: 3033
        void ext_set_channel(int);

    // RVA: 0xC61 | Ordinal: 3170
        void getChannel(void) const;

    // RVA: 0xC62 | Ordinal: 3171
        void getChannelDigit(int);

    // RVA: 0xD0C | Ordinal: 3341
        void getInitTacanChannel(void);

    // RVA: 0xD5D | Ordinal: 3422
        void getModeXY(void) const;

    // RVA: 0xE1E | Ordinal: 3615
        void getTestLight(void) const;

    // RVA: 0x11F8 | Ordinal: 4601
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x14FE | Ordinal: 5375
        void post_initialize(void);

    // RVA: 0x16B3 | Ordinal: 5812
        void setChannelOnes(int);

    // RVA: 0x16B4 | Ordinal: 5813
        void setChannelTens(int);

    // RVA: 0x35C | Ordinal: 861
        void _avTACAN_ARN118_CtrlPanel(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVTACAN_ARN118_CTRLPANEL_HPP
