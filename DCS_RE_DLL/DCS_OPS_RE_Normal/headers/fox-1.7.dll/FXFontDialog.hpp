#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXFontDialog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXFontDialog
{
public:

    // RVA: 0x126 | Ordinal: 295
        void FXFontDialog(void);

    // RVA: 0x127 | Ordinal: 296
        void FXFontDialog(class FX::FXApp *, class FX::FXString const &, unsigned int, int, int, int, int);

    // RVA: 0x128 | Ordinal: 297
        void FXFontDialog(class FX::FXWindow *, class FX::FXString const &, unsigned int, int, int, int, int);

    // RVA: 0x120D | Ordinal: 4622
        void getFont(void) const;

    // RVA: 0x1224 | Ordinal: 4645
        void getFontDesc(void) const;

    // RVA: 0x13D9 | Ordinal: 5082
        void getMetaClass(void) const;

    // RVA: 0x1758 | Ordinal: 5977
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x182B | Ordinal: 6188
        void hide(void);

    // RVA: 0x1894 | Ordinal: 6293
        void initdialog(void);

    // RVA: 0x1ADC | Ordinal: 6877
        void load(class FX::FXStream &);

    // RVA: 0x1C18 | Ordinal: 7193
        void manufacture(void);

    // RVA: 0x280D | Ordinal: 10254
        void save(class FX::FXStream &) const;

    // RVA: 0x2AB7 | Ordinal: 10936
        void setFont(class FX::FXString const &);

    // RVA: 0x2ACD | Ordinal: 10958
        void setFontDesc(struct FX::FXFontDesc const &);

    // RVA: 0x411 | Ordinal: 1042
        void _FXFontDialog(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXFONTDIALOG_HPP
