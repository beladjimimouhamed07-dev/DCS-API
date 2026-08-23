#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXFontSelector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXFontSelector
{
public:

    // RVA: 0x12B | Ordinal: 300
        void FXFontSelector(void);

    // RVA: 0x12C | Ordinal: 301
        void FXFontSelector(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x94F | Ordinal: 2384
        void acceptButton(void) const;

    // RVA: 0xAA8 | Ordinal: 2729
        void cancelButton(void) const;

    // RVA: 0xBBA | Ordinal: 3003
        void create(void);

    // RVA: 0x120E | Ordinal: 4623
        void getFont(void) const;

    // RVA: 0x1225 | Ordinal: 4646
        void getFontDesc(void) const;

    // RVA: 0x13DA | Ordinal: 5083
        void getMetaClass(void) const;

    // RVA: 0x1759 | Ordinal: 5978
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AA3 | Ordinal: 6820
        void listFontFaces(void);

    // RVA: 0x1AA4 | Ordinal: 6821
        void listFontSizes(void);

    // RVA: 0x1AA8 | Ordinal: 6825
        void listSlants(void);

    // RVA: 0x1AA9 | Ordinal: 6826
        void listWeights(void);

    // RVA: 0x1ADD | Ordinal: 6878
        void load(class FX::FXStream &);

    // RVA: 0x1C19 | Ordinal: 7194
        void manufacture(void);

    // RVA: 0x1F92 | Ordinal: 8083
        void onCmdAllFonts(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FB3 | Ordinal: 8116
        void onCmdCharset(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x202C | Ordinal: 8237
        void onCmdFamily(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2112 | Ordinal: 8467
        void onCmdPitch(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2137 | Ordinal: 8504
        void onCmdScalable(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21F9 | Ordinal: 8698
        void onCmdSetWidth(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2205 | Ordinal: 8710
        void onCmdSize(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2206 | Ordinal: 8711
        void onCmdSizeText(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2213 | Ordinal: 8724
        void onCmdStyle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2214 | Ordinal: 8725
        void onCmdStyleText(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2239 | Ordinal: 8762
        void onCmdWeight(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x255B | Ordinal: 9564
        void onUpdAllFonts(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x256E | Ordinal: 9583
        void onUpdCharset(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25D2 | Ordinal: 9683
        void onUpdPitch(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25E0 | Ordinal: 9697
        void onUpdScalable(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25EC | Ordinal: 9709
        void onUpdSetWidth(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x26CB | Ordinal: 9932
        void previewFont(void);

    // RVA: 0x280E | Ordinal: 10255
        void save(class FX::FXStream &) const;

    // RVA: 0x2AB8 | Ordinal: 10937
        void setFont(class FX::FXString const &);

    // RVA: 0x2ACE | Ordinal: 10959
        void setFontDesc(struct FX::FXFontDesc const &);

    // RVA: 0x413 | Ordinal: 1044
        void _FXFontSelector(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXFONTSELECTOR_HPP
