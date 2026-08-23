#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FX7Segment
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FX7Segment
{
public:

    // RVA: 0x8 | Ordinal: 9
        void FX7Segment(void);

    // RVA: 0x9 | Ordinal: 10
        void FX7Segment(class FX::FXComposite *, class FX::FXString const &, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xD3A | Ordinal: 3387
        void drawCells(class FX::FXDCWindow &, int, int, int, int);

    // RVA: 0xDB5 | Ordinal: 3510
        void drawSegments(class FX::FXDCWindow &, int, int, int, int, unsigned int);

    // RVA: 0xFDB | Ordinal: 4060
        void get7SegmentStyle(void) const;

    // RVA: 0x107C | Ordinal: 4221
        void getCellHeight(void) const;

    // RVA: 0x107D | Ordinal: 4222
        void getCellWidth(void) const;

    // RVA: 0x110C | Ordinal: 4365
        void getDefaultHeight(void);

    // RVA: 0x1162 | Ordinal: 4451
        void getDefaultWidth(void);

    // RVA: 0x126A | Ordinal: 4715
        void getHelpText(void) const;

    // RVA: 0x131E | Ordinal: 4895
        void getJustify(void) const;

    // RVA: 0x1374 | Ordinal: 4981
        void getMetaClass(void) const;

    // RVA: 0x15EE | Ordinal: 5615
        void getText(void) const;

    // RVA: 0x1601 | Ordinal: 5634
        void getTextColor(void) const;

    // RVA: 0x161D | Ordinal: 5662
        void getThickness(void) const;

    // RVA: 0x1629 | Ordinal: 5674
        void getTipText(void) const;

    // RVA: 0x16F2 | Ordinal: 5875
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AAB | Ordinal: 6828
        void load(class FX::FXStream &);

    // RVA: 0x1BB6 | Ordinal: 7095
        void manufacture(void);

    // RVA: 0x2037 | Ordinal: 8248
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x205A | Ordinal: 8283
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2078 | Ordinal: 8313
        void onCmdGetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x208B | Ordinal: 8332
        void onCmdGetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2093 | Ordinal: 8340
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20A3 | Ordinal: 8356
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2151 | Ordinal: 8530
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2174 | Ordinal: 8565
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2192 | Ordinal: 8595
        void onCmdSetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21A7 | Ordinal: 8616
        void onCmdSetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21AF | Ordinal: 8624
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21BF | Ordinal: 8640
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21D4 | Ordinal: 8661
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2454 | Ordinal: 9301
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24A4 | Ordinal: 9381
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24C3 | Ordinal: 9412
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27DD | Ordinal: 10206
        void save(class FX::FXStream &) const;

    // RVA: 0x28ED | Ordinal: 10478
        void set7SegmentStyle(unsigned int);

    // RVA: 0x29DB | Ordinal: 10716
        void setCellHeight(int);

    // RVA: 0x29DC | Ordinal: 10717
        void setCellWidth(int);

    // RVA: 0x2B0C | Ordinal: 11021
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2BAF | Ordinal: 11184
        void setJustify(unsigned int);

    // RVA: 0x2D36 | Ordinal: 11575
        void setText(class FX::FXString const &);

    // RVA: 0x2D48 | Ordinal: 11593
        void setTextColor(unsigned int);

    // RVA: 0x2D62 | Ordinal: 11619
        void setThickness(int);

    // RVA: 0x2D6F | Ordinal: 11632
        void setTipText(class FX::FXString const &);

    // RVA: 0x394 | Ordinal: 917
        void _FX7Segment(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FX7SEGMENT_HPP
