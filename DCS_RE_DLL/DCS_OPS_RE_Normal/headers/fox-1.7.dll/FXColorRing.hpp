#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXColorRing
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXColorRing
{
public:

    // RVA: 0x85 | Ordinal: 134
        void FXColorRing(void);

    // RVA: 0x86 | Ordinal: 135
        void FXColorRing(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xBA7 | Ordinal: 2984
        void create(void);

    // RVA: 0xC90 | Ordinal: 3217
        void detach(void);

    // RVA: 0x1112 | Ordinal: 4371
        void getDefaultHeight(void);

    // RVA: 0x1168 | Ordinal: 4457
        void getDefaultWidth(void);

    // RVA: 0x126D | Ordinal: 4718
        void getHelpText(void) const;

    // RVA: 0x12A3 | Ordinal: 4772
        void getHue(void) const;

    // RVA: 0x1321 | Ordinal: 4898
        void getJustify(void) const;

    // RVA: 0x13AF | Ordinal: 5040
        void getMetaClass(void) const;

    // RVA: 0x1538 | Ordinal: 5433
        void getRingWidth(void) const;

    // RVA: 0x1552 | Ordinal: 5459
        void getSat(void) const;

    // RVA: 0x162C | Ordinal: 5677
        void getTipText(void) const;

    // RVA: 0x1683 | Ordinal: 5764
        void getVal(void) const;

    // RVA: 0x172D | Ordinal: 5934
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1844 | Ordinal: 6213
        void hueFromXY(int, int) const;

    // RVA: 0x1845 | Ordinal: 6214
        void hueToXY(int &, int &, float) const;

    // RVA: 0x185C | Ordinal: 6237
        void inCorner(int, int) const;

    // RVA: 0x185E | Ordinal: 6239
        void inHueRing(int, int) const;

    // RVA: 0x185F | Ordinal: 6240
        void inTriangle(int, int) const;

    // RVA: 0x1A3F | Ordinal: 6720
        void layout(void);

    // RVA: 0x1AB6 | Ordinal: 6839
        void load(class FX::FXStream &);

    // RVA: 0x1BF1 | Ordinal: 7154
        void manufacture(void);

    // RVA: 0x203A | Ordinal: 8251
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20A6 | Ordinal: 8359
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2154 | Ordinal: 8533
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21C2 | Ordinal: 8643
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23AF | Ordinal: 9136
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23D7 | Ordinal: 9176
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2423 | Ordinal: 9252
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2444 | Ordinal: 9285
        void onMouseWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x245D | Ordinal: 9310
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24A7 | Ordinal: 9384
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24C6 | Ordinal: 9415
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27DA | Ordinal: 10203
        void satValFromXY(float &, float &, int, int) const;

    // RVA: 0x27DB | Ordinal: 10204
        void satValToXY(int &, int &, float, float) const;

    // RVA: 0x27E8 | Ordinal: 10217
        void save(class FX::FXStream &) const;

    // RVA: 0x2B0F | Ordinal: 11024
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2B43 | Ordinal: 11076
        void setHue(float);

    // RVA: 0x2B45 | Ordinal: 11078
        void setHueSatVal(float, float, float);

    // RVA: 0x2BB2 | Ordinal: 11187
        void setJustify(unsigned int);

    // RVA: 0x2C93 | Ordinal: 11412
        void setRingWidth(int);

    // RVA: 0x2CA7 | Ordinal: 11432
        void setSat(float);

    // RVA: 0x2D72 | Ordinal: 11635
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DBC | Ordinal: 11709
        void setVal(float);

    // RVA: 0x2F20 | Ordinal: 12065
        void updatering(void);

    // RVA: 0x3D3 | Ordinal: 980
        void _FXColorRing(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCOLORRING_HPP
