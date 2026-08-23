#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRulerView
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRulerView
{
public:

    // RVA: 0x2AA | Ordinal: 683
        void FXRulerView(void);

    // RVA: 0x2AB | Ordinal: 684
        void FXRulerView(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0xD2B | Ordinal: 3372
        void drawBackground(class FX::FXDCWindow &);

    // RVA: 0xD3D | Ordinal: 3390
        void drawContents(class FX::FXDCWindow &);

    // RVA: 0x101E | Ordinal: 4127
        void getArrowPosX(void) const;

    // RVA: 0x101F | Ordinal: 4128
        void getArrowPosY(void) const;

    // RVA: 0x10B1 | Ordinal: 4274
        void getContentHeight(void);

    // RVA: 0x10BE | Ordinal: 4287
        void getContentWidth(void);

    // RVA: 0x1142 | Ordinal: 4419
        void getDefaultHeight(void);

    // RVA: 0x1198 | Ordinal: 4505
        void getDefaultWidth(void);

    // RVA: 0x11CB | Ordinal: 4556
        void getDocumentColor(void) const;

    // RVA: 0x11CC | Ordinal: 4557
        void getDocumentHeight(void) const;

    // RVA: 0x11D0 | Ordinal: 4561
        void getDocumentWidth(void) const;

    // RVA: 0x11D1 | Ordinal: 4562
        void getDocumentX(void) const;

    // RVA: 0x11D2 | Ordinal: 4563
        void getDocumentY(void) const;

    // RVA: 0x1240 | Ordinal: 4673
        void getHAlignment(void) const;

    // RVA: 0x1241 | Ordinal: 4674
        void getHEdgeSpacing(void) const;

    // RVA: 0x1242 | Ordinal: 4675
        void getHMajorTicks(void) const;

    // RVA: 0x1243 | Ordinal: 4676
        void getHMarginLower(void) const;

    // RVA: 0x1244 | Ordinal: 4677
        void getHMarginUpper(void) const;

    // RVA: 0x1245 | Ordinal: 4678
        void getHMediumTicks(void) const;

    // RVA: 0x1246 | Ordinal: 4679
        void getHNumberTicks(void) const;

    // RVA: 0x1247 | Ordinal: 4680
        void getHPixelPerTick(void) const;

    // RVA: 0x1248 | Ordinal: 4681
        void getHRulerFont(void) const;

    // RVA: 0x1249 | Ordinal: 4682
        void getHRulerStyle(void) const;

    // RVA: 0x124D | Ordinal: 4686
        void getHTinyTicks(void) const;

    // RVA: 0x1283 | Ordinal: 4740
        void getHelpText(void) const;

    // RVA: 0x143D | Ordinal: 5182
        void getMetaClass(void) const;

    // RVA: 0x1643 | Ordinal: 5700
        void getTipText(void) const;

    // RVA: 0x1674 | Ordinal: 5749
        void getVAlignment(void) const;

    // RVA: 0x1675 | Ordinal: 5750
        void getVEdgeSpacing(void) const;

    // RVA: 0x1676 | Ordinal: 5751
        void getVMajorTicks(void) const;

    // RVA: 0x1677 | Ordinal: 5752
        void getVMarginLower(void) const;

    // RVA: 0x1678 | Ordinal: 5753
        void getVMarginUpper(void) const;

    // RVA: 0x1679 | Ordinal: 5754
        void getVMediumTicks(void) const;

    // RVA: 0x167A | Ordinal: 5755
        void getVNumberTicks(void) const;

    // RVA: 0x167B | Ordinal: 5756
        void getVPixelPerTick(void) const;

    // RVA: 0x167C | Ordinal: 5757
        void getVRulerFont(void) const;

    // RVA: 0x167D | Ordinal: 5758
        void getVRulerStyle(void) const;

    // RVA: 0x1681 | Ordinal: 5762
        void getVTinyTicks(void) const;

    // RVA: 0x1699 | Ordinal: 5786
        void getVisibleHeight(void) const;

    // RVA: 0x16A0 | Ordinal: 5793
        void getVisibleWidth(void) const;

    // RVA: 0x16A4 | Ordinal: 5797
        void getVisibleX(void) const;

    // RVA: 0x16AA | Ordinal: 5803
        void getVisibleY(void) const;

    // RVA: 0x17BD | Ordinal: 6078
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1840 | Ordinal: 6209
        void horizontalRuler(void) const;

    // RVA: 0x1A5B | Ordinal: 6748
        void layout(void);

    // RVA: 0x1B20 | Ordinal: 6945
        void load(class FX::FXStream &);

    // RVA: 0x1C7A | Ordinal: 7291
        void manufacture(void);

    // RVA: 0x1EB3 | Ordinal: 7860
        void moveContents(int, int);

    // RVA: 0x2047 | Ordinal: 8264
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20B3 | Ordinal: 8372
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2161 | Ordinal: 8546
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21CF | Ordinal: 8656
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2277 | Ordinal: 8824
        void onDocChanged(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x243A | Ordinal: 9275
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2489 | Ordinal: 9354
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24BA | Ordinal: 9403
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24DA | Ordinal: 9435
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2851 | Ordinal: 10322
        void save(class FX::FXStream &) const;

    // RVA: 0x2984 | Ordinal: 10629
        void setArrowPosX(int);

    // RVA: 0x2985 | Ordinal: 10630
        void setArrowPosY(int);

    // RVA: 0x2A5C | Ordinal: 10845
        void setDocumentColor(unsigned int);

    // RVA: 0x2A5D | Ordinal: 10846
        void setDocumentHeight(int, bool);

    // RVA: 0x2A5F | Ordinal: 10848
        void setDocumentWidth(int, bool);

    // RVA: 0x2AE7 | Ordinal: 10984
        void setHAlignment(unsigned int, bool);

    // RVA: 0x2AE8 | Ordinal: 10985
        void setHEdgeSpacing(int, bool);

    // RVA: 0x2AE9 | Ordinal: 10986
        void setHMajorTicks(int, bool);

    // RVA: 0x2AEA | Ordinal: 10987
        void setHMarginLower(int, bool);

    // RVA: 0x2AEB | Ordinal: 10988
        void setHMarginUpper(int, bool);

    // RVA: 0x2AEC | Ordinal: 10989
        void setHMediumTicks(int, bool);

    // RVA: 0x2AED | Ordinal: 10990
        void setHNumberTicks(int, bool);

    // RVA: 0x2AEE | Ordinal: 10991
        void setHPixelPerTick(double, bool);

    // RVA: 0x2AEF | Ordinal: 10992
        void setHRulerFont(class FX::FXFont *, bool);

    // RVA: 0x2AF0 | Ordinal: 10993
        void setHRulerStyle(unsigned int);

    // RVA: 0x2AF4 | Ordinal: 10997
        void setHTinyTicks(int, bool);

    // RVA: 0x2B25 | Ordinal: 11046
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2D86 | Ordinal: 11655
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DAD | Ordinal: 11694
        void setVAlignment(unsigned int, bool);

    // RVA: 0x2DAE | Ordinal: 11695
        void setVEdgeSpacing(int, bool);

    // RVA: 0x2DAF | Ordinal: 11696
        void setVMajorTicks(int, bool);

    // RVA: 0x2DB0 | Ordinal: 11697
        void setVMarginLower(int, bool);

    // RVA: 0x2DB1 | Ordinal: 11698
        void setVMarginUpper(int, bool);

    // RVA: 0x2DB2 | Ordinal: 11699
        void setVMediumTicks(int, bool);

    // RVA: 0x2DB3 | Ordinal: 11700
        void setVNumberTicks(int, bool);

    // RVA: 0x2DB4 | Ordinal: 11701
        void setVPixelPerTick(double, bool);

    // RVA: 0x2DB5 | Ordinal: 11702
        void setVRulerFont(class FX::FXFont *, bool);

    // RVA: 0x2DB6 | Ordinal: 11703
        void setVRulerStyle(unsigned int);

    // RVA: 0x2DBA | Ordinal: 11707
        void setVTinyTicks(int, bool);

    // RVA: 0x2F5A | Ordinal: 12123
        void verticalRuler(void) const;

    // RVA: 0x49E | Ordinal: 1183
        void _FXRulerView(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXRULERVIEW_HPP
