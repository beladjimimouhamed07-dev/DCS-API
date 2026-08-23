#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: wMessage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wMessage
{
public:

    // RVA: 0x1DB | Ordinal: 476
        void buildContent_(void) const;

    // RVA: 0x223 | Ordinal: 548
        void fromState(struct lua_State *, int);

    // RVA: 0x239 | Ordinal: 570
        void getCommNetFlags(void) const;

    // RVA: 0x247 | Ordinal: 584
        void getDirectory(void) const;

    // RVA: 0x248 | Ordinal: 585
        void getDuration(void) const;

    // RVA: 0x253 | Ordinal: 596
        void getEvent(void) const;

    // RVA: 0x254 | Ordinal: 597
        void getFiles(void) const;

    // RVA: 0x28D | Ordinal: 654
        void getLoopSequencePlayStartTime(void) const;

    // RVA: 0x2D1 | Ordinal: 722
        void getSubtitle(void) const;

    // RVA: 0x2D2 | Ordinal: 723
        void getSubtitlesDuration(void) const;

    // RVA: 0x334 | Ordinal: 821
        void isLoopedSequence(void) const;

    // RVA: 0x408 | Ordinal: 1033
        void setCommNetFlags(void);

    // RVA: 0x411 | Ordinal: 1042
        void setDuration(double);

    // RVA: 0x417 | Ordinal: 1048
        void setEvent(enum wMsg);

    // RVA: 0x428 | Ordinal: 1065
        void setLoopElementPlayTime(double);

    // RVA: 0x429 | Ordinal: 1066
        void setLoopedSequenceElementsCount(int);

    // RVA: 0x44B | Ordinal: 1100
        void setStartTime(void);

    // RVA: 0x44D | Ordinal: 1102
        void setSubtitlesDuration(double);

    // RVA: 0x478 | Ordinal: 1145
        void toState(struct lua_State *) const;

    // RVA: 0x4BC | Ordinal: 1213
        void updateLoopSequencePlayStartTime(void);

    // RVA: 0x6E | Ordinal: 111
        void wMessage(class wMessage::Sender const &, enum wMsg const &, class ed::basic_string<char> const &, enum wMessage::PlayMode);

    // RVA: 0x6F | Ordinal: 112
        void wMessage(class wMessage::Sender const &, enum wMsg const &, class ed::basic_string<char> const &, bool, class ed::basic_string<char> const &, enum wMessage::PlayMode, double);

    // RVA: 0x70 | Ordinal: 113
        void wMessage(class wMessage::Sender const &, enum wMsg const &, class LuaTableElement const &, enum wMessage::PlayMode, double);

    // RVA: 0x71 | Ordinal: 114
        void wMessage(class wMessage::Sender const &, enum wMsg const &, enum wMessage::PlayMode);

    // RVA: 0x72 | Ordinal: 115
        void wMessage(enum wMessage::Type, enum wMessage::PlayMode);

    // RVA: 0xAC | Ordinal: 173
        void _wMessage(void);
};

// DCS_OPS_RE_WRADIO.DLL_WMESSAGE_HPP
