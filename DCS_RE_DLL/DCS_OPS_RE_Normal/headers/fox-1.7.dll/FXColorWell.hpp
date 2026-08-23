#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXColorWell
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXColorWell
{
public:

    // RVA: 0x89 | Ordinal: 138
        void FXColorWell(void);

    // RVA: 0x8A | Ordinal: 139
        void FXColorWell(class FX::FXComposite *, unsigned int, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA83 | Ordinal: 2692
        void canFocus(void) const;

    // RVA: 0xBA8 | Ordinal: 2985
        void create(void);

    // RVA: 0xC91 | Ordinal: 3218
        void detach(void);

    // RVA: 0x1113 | Ordinal: 4372
        void getDefaultHeight(void);

    // RVA: 0x1169 | Ordinal: 4458
        void getDefaultWidth(void);

    // RVA: 0x126E | Ordinal: 4719
        void getHelpText(void) const;

    // RVA: 0x13B1 | Ordinal: 5042
        void getMetaClass(void) const;

    // RVA: 0x151A | Ordinal: 5403
        void getRGBA(void) const;

    // RVA: 0x162D | Ordinal: 5678
        void getTipText(void) const;

    // RVA: 0x16B8 | Ordinal: 5817
        void getWellSize(void) const;

    // RVA: 0x172F | Ordinal: 5936
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x19AC | Ordinal: 6573
        void isOpaqueOnly(void) const;

    // RVA: 0x19F2 | Ordinal: 6643
        void isSourceOnly(void) const;

    // RVA: 0x1A1C | Ordinal: 6685
        void killFocus(void);

    // RVA: 0x1AB8 | Ordinal: 6841
        void load(class FX::FXStream &);

    // RVA: 0x1BF3 | Ordinal: 7156
        void manufacture(void);

    // RVA: 0x1F4A | Ordinal: 8011
        void onBeginDrag(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F68 | Ordinal: 8041
        void onChgColor(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F6F | Ordinal: 8048
        void onClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FBF | Ordinal: 8128
        void onCmdColor(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x203B | Ordinal: 8252
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2060 | Ordinal: 8289
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20A7 | Ordinal: 8360
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2155 | Ordinal: 8534
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x217A | Ordinal: 8571
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21C3 | Ordinal: 8644
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21D9 | Ordinal: 8666
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x224B | Ordinal: 8780
        void onDNDDrop(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2253 | Ordinal: 8788
        void onDNDEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x225A | Ordinal: 8795
        void onDNDLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2261 | Ordinal: 8802
        void onDNDMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2269 | Ordinal: 8810
        void onDNDRequest(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x227A | Ordinal: 8827
        void onDoubleClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2281 | Ordinal: 8834
        void onDragged(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2287 | Ordinal: 8840
        void onEndDrag(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22B9 | Ordinal: 8890
        void onFocusIn(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22DD | Ordinal: 8926
        void onFocusOut(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2341 | Ordinal: 9026
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2369 | Ordinal: 9066
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23B0 | Ordinal: 9137
        void onLeftBtnPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23D8 | Ordinal: 9177
        void onLeftBtnRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2424 | Ordinal: 9253
        void onMotion(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x245E | Ordinal: 9311
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24A8 | Ordinal: 9385
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24C7 | Ordinal: 9416
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x253C | Ordinal: 9533
        void onUngrabbed(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2575 | Ordinal: 9590
        void onUpdColor(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27EA | Ordinal: 10219
        void save(class FX::FXStream &) const;

    // RVA: 0x2A96 | Ordinal: 10903
        void setFocus(void);

    // RVA: 0x2B10 | Ordinal: 11025
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2C2F | Ordinal: 11312
        void setOpaqueOnly(bool);

    // RVA: 0x2C77 | Ordinal: 11384
        void setRGBA(unsigned int, bool);

    // RVA: 0x2D0E | Ordinal: 11535
        void setSourceOnly(bool);

    // RVA: 0x2D73 | Ordinal: 11636
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DD8 | Ordinal: 11737
        void setWellSise(int);

    // RVA: 0x3D5 | Ordinal: 982
        void _FXColorWell(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCOLORWELL_HPP
