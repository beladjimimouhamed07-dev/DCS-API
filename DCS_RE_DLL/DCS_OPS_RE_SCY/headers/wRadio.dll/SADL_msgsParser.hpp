#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: wRadio.dll
// Class: SADL_msgsParser
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class SADL_msgsParser
{
public:

    // RVA: 0x49 | Ordinal: 74
        void SADL_msgsParser(void);

    // RVA: 0x1D3 | Ordinal: 468
        void append(class ed::basic_string<char> &, class ed::basic_string<char> const &);

    // RVA: 0x213 | Ordinal: 532
        void fieldIsNS(int);

    // RVA: 0x232 | Ordinal: 563
        void getBool(int);

    // RVA: 0x242 | Ordinal: 579
        void getDbl(int);

    // RVA: 0x275 | Ordinal: 630
        void getInt(int);

    // RVA: 0x29B | Ordinal: 668
        void getMsgAsString(int);

    // RVA: 0x2CA | Ordinal: 715
        void getStr(int);

    // RVA: 0x38F | Ordinal: 912
        void parse(class ed::basic_string<char> const &);

    // RVA: 0x396 | Ordinal: 919
        void place(int, class ed::basic_string<char> const &);

    // RVA: 0x397 | Ordinal: 920
        void place(int, int);

    // RVA: 0x398 | Ordinal: 921
        void place(int, float, int);

    // RVA: 0x399 | Ordinal: 922
        void place(int, double, int);

    // RVA: 0x39A | Ordinal: 923
        void place(int, char const *);

    // RVA: 0x39B | Ordinal: 924
        void place(int, bool);

    // RVA: 0x3B8 | Ordinal: 953
        void prepare(void);
};

// DCS_OPS_RE_WRADIO.DLL_SADL_MSGSPARSER_HPP
