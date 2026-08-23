#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXConsole
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXConsole
{
public:

    // RVA: 0xA3 | Ordinal: 164
        void FXConsole(void);

    // RVA: 0xA4 | Ordinal: 165
        void FXConsole(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA84 | Ordinal: 2693
        void canFocus(void) const;

    // RVA: 0xAC2 | Ordinal: 2755
        void charWidth(unsigned int, int) const;

    // RVA: 0xBAD | Ordinal: 2990
        void create(void);

    // RVA: 0xC95 | Ordinal: 3222
        void detach(void);

    // RVA: 0xD3C | Ordinal: 3389
        void drawContents(class FX::FXDCWindow &, int, int, int, int) const;

    // RVA: 0xDC5 | Ordinal: 3526
        void drawTextFragment(class FX::FXDCWindow &, int, int, int, int, char const *, int, unsigned int) const;

    // RVA: 0xDC7 | Ordinal: 3528
        void drawTextLine(class FX::FXDCWindow &, int, int, int) const;

    // RVA: 0x10AC | Ordinal: 4269
        void getContentHeight(void);

    // RVA: 0x10B9 | Ordinal: 4282
        void getContentWidth(void);

    // RVA: 0x1117 | Ordinal: 4376
        void getDefaultHeight(void);

    // RVA: 0x116D | Ordinal: 4462
        void getDefaultWidth(void);

    // RVA: 0x1208 | Ordinal: 4617
        void getFont(void) const;

    // RVA: 0x1271 | Ordinal: 4722
        void getHelpText(void) const;

    // RVA: 0x129D | Ordinal: 4766
        void getHistoryLines(void) const;

    // RVA: 0x134A | Ordinal: 4939
        void getMarginBottom(void) const;

    // RVA: 0x134D | Ordinal: 4942
        void getMarginLeft(void) const;

    // RVA: 0x1351 | Ordinal: 4946
        void getMarginRight(void) const;

    // RVA: 0x1354 | Ordinal: 4949
        void getMarginTop(void) const;

    // RVA: 0x13B9 | Ordinal: 5050
        void getMetaClass(void) const;

    // RVA: 0x1630 | Ordinal: 5681
        void getTipText(void) const;

    // RVA: 0x1694 | Ordinal: 5781
        void getVisibleColumns(void) const;

    // RVA: 0x169D | Ordinal: 5790
        void getVisibleRows(void) const;

    // RVA: 0x1737 | Ordinal: 5944
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1A43 | Ordinal: 6724
        void layout(void);

    // RVA: 0x1ABB | Ordinal: 6844
        void load(class FX::FXStream &);

    // RVA: 0x1BFA | Ordinal: 7163
        void manufacture(void);

    // RVA: 0x1EB0 | Ordinal: 7857
        void moveContents(int, int);

    // RVA: 0x2460 | Ordinal: 9313
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2637 | Ordinal: 9784
        void onXXX(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27ED | Ordinal: 10222
        void save(class FX::FXStream &) const;

    // RVA: 0x2AB0 | Ordinal: 10929
        void setFont(class FX::FXFont *);

    // RVA: 0x2B13 | Ordinal: 11028
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B3F | Ordinal: 11072
        void setHistoryLines(int);

    // RVA: 0x2BD9 | Ordinal: 11226
        void setMarginBottom(int);

    // RVA: 0x2BDC | Ordinal: 11229
        void setMarginLeft(int);

    // RVA: 0x2BE0 | Ordinal: 11233
        void setMarginRight(int);

    // RVA: 0x2BE3 | Ordinal: 11236
        void setMarginTop(int);

    // RVA: 0x2D76 | Ordinal: 11639
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DCB | Ordinal: 11724
        void setVisibleColumns(int);

    // RVA: 0x2DCE | Ordinal: 11727
        void setVisibleRows(int);

    // RVA: 0x2E6B | Ordinal: 11884
        void styleOf(int, int, int, int) const;

    // RVA: 0x3E1 | Ordinal: 994
        void _FXConsole(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCONSOLE_HPP
