#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGroupBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGroupBox
{
public:

    // RVA: 0x169 | Ordinal: 362
        void FXGroupBox(void);

    // RVA: 0x16A | Ordinal: 363
        void FXGroupBox(class FX::FXComposite *, class FX::FXString const &, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0xBC0 | Ordinal: 3009
        void create(void);

    // RVA: 0xCA3 | Ordinal: 3236
        void detach(void);

    // RVA: 0xCDE | Ordinal: 3295
        void disable(void);

    // RVA: 0xE02 | Ordinal: 3587
        void enable(void);

    // RVA: 0x1120 | Ordinal: 4385
        void getDefaultHeight(void);

    // RVA: 0x1176 | Ordinal: 4471
        void getDefaultWidth(void);

    // RVA: 0x120F | Ordinal: 4624
        void getFont(void) const;

    // RVA: 0x123E | Ordinal: 4671
        void getGroupBoxStyle(void) const;

    // RVA: 0x13EF | Ordinal: 5104
        void getMetaClass(void) const;

    // RVA: 0x15F1 | Ordinal: 5618
        void getText(void) const;

    // RVA: 0x1604 | Ordinal: 5637
        void getTextColor(void) const;

    // RVA: 0x176E | Ordinal: 5999
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A48 | Ordinal: 6729
        void layout(void);

    // RVA: 0x1AEE | Ordinal: 6895
        void load(class FX::FXStream &);

    // RVA: 0x1C2D | Ordinal: 7214
        void manufacture(void);

    // RVA: 0x2099 | Ordinal: 8346
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21B5 | Ordinal: 8630
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21E1 | Ordinal: 8674
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2469 | Ordinal: 9322
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x281F | Ordinal: 10272
        void save(class FX::FXStream &) const;

    // RVA: 0x2AB9 | Ordinal: 10938
        void setFont(class FX::FXFont *);

    // RVA: 0x2AE5 | Ordinal: 10982
        void setGroupBoxStyle(unsigned int);

    // RVA: 0x2D39 | Ordinal: 11578
        void setText(class FX::FXString const &);

    // RVA: 0x2D4B | Ordinal: 11596
        void setTextColor(unsigned int);

    // RVA: 0x429 | Ordinal: 1066
        void _FXGroupBox(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGROUPBOX_HPP
