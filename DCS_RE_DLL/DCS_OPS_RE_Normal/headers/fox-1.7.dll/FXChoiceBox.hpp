#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXChoiceBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXChoiceBox
{
public:

    // RVA: 0x77 | Ordinal: 120
        void FXChoiceBox(void);

    // RVA: 0x78 | Ordinal: 121
        void FXChoiceBox(class FX::FXApp *, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, class FX::FXString const &, unsigned int, int, int, int, int);

    // RVA: 0x79 | Ordinal: 122
        void FXChoiceBox(class FX::FXApp *, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, char const **, unsigned int, int, int, int, int);

    // RVA: 0x7A | Ordinal: 123
        void FXChoiceBox(class FX::FXWindow *, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, class FX::FXString const &, unsigned int, int, int, int, int);

    // RVA: 0x7B | Ordinal: 124
        void FXChoiceBox(class FX::FXWindow *, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, char const **, unsigned int, int, int, int, int);

    // RVA: 0xA0E | Ordinal: 2575
        void ask(class FX::FXApp *, unsigned int, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, class FX::FXString const &);

    // RVA: 0xA0F | Ordinal: 2576
        void ask(class FX::FXApp *, unsigned int, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, char const **);

    // RVA: 0xA10 | Ordinal: 2577
        void ask(class FX::FXWindow *, unsigned int, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, class FX::FXString const &);

    // RVA: 0xA11 | Ordinal: 2578
        void ask(class FX::FXWindow *, unsigned int, class FX::FXString const &, class FX::FXString const &, class FX::FXIcon *, char const **);

    // RVA: 0x13AA | Ordinal: 5035
        void getMetaClass(void) const;

    // RVA: 0x1728 | Ordinal: 5929
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1896 | Ordinal: 6295
        void initialize(class FX::FXString const &, class FX::FXIcon *);

    // RVA: 0x1AB3 | Ordinal: 6836
        void load(class FX::FXStream &);

    // RVA: 0x1BEC | Ordinal: 7149
        void manufacture(void);

    // RVA: 0x1FAC | Ordinal: 8109
        void onCmdCancel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FB7 | Ordinal: 8120
        void onCmdClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27E5 | Ordinal: 10214
        void save(class FX::FXStream &) const;

    // RVA: 0x3CE | Ordinal: 975
        void _FXChoiceBox(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCHOICEBOX_HPP
