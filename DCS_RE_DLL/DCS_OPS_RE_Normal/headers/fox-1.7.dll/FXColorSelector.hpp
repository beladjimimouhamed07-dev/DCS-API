#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXColorSelector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXColorSelector
{
public:

    // RVA: 0x87 | Ordinal: 136
        void FXColorSelector(void);

    // RVA: 0x88 | Ordinal: 137
        void FXColorSelector(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int);

    // RVA: 0x94C | Ordinal: 2381
        void acceptButton(void) const;

    // RVA: 0xAA5 | Ordinal: 2726
        void cancelButton(void) const;

    // RVA: 0xFEB | Ordinal: 4076
        void getActivePanel(void) const;

    // RVA: 0x13B0 | Ordinal: 5041
        void getMetaClass(void) const;

    // RVA: 0x1519 | Ordinal: 5402
        void getRGBA(void) const;

    // RVA: 0x16B7 | Ordinal: 5816
        void getWellColor(int) const;

    // RVA: 0x172E | Ordinal: 5935
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x19AB | Ordinal: 6572
        void isOpaqueOnly(void) const;

    // RVA: 0x1AB7 | Ordinal: 6840
        void load(class FX::FXStream &);

    // RVA: 0x1BF2 | Ordinal: 7155
        void manufacture(void);

    // RVA: 0x1F6D | Ordinal: 8046
        void onChgWell(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F93 | Ordinal: 8084
        void onCmdAlphaSlider(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F94 | Ordinal: 8085
        void onCmdAlphaText(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FAA | Ordinal: 8107
        void onCmdCMYSlider(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FAB | Ordinal: 8108
        void onCmdCMYText(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FC1 | Ordinal: 8130
        void onCmdColorPick(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FF1 | Ordinal: 8178
        void onCmdCustomWell(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x205F | Ordinal: 8288
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20BB | Ordinal: 8380
        void onCmdHSVSlider(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20BC | Ordinal: 8381
        void onCmdHSVText(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20E2 | Ordinal: 8419
        void onCmdList(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x211F | Ordinal: 8480
        void onCmdRGBSlider(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2120 | Ordinal: 8481
        void onCmdRGBText(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2179 | Ordinal: 8570
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21D8 | Ordinal: 8665
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x223A | Ordinal: 8763
        void onCmdWell(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x223B | Ordinal: 8764
        void onCmdWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x255C | Ordinal: 9565
        void onUpdAlphaLabel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x255D | Ordinal: 9566
        void onUpdAlphaSlider(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x255E | Ordinal: 9567
        void onUpdAlphaText(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x256B | Ordinal: 9580
        void onUpdCMYSlider(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x256C | Ordinal: 9581
        void onUpdCMYText(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x259A | Ordinal: 9627
        void onUpdHSVSlider(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x259B | Ordinal: 9628
        void onUpdHSVText(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25D6 | Ordinal: 9687
        void onUpdRGBSlider(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25D7 | Ordinal: 9688
        void onUpdRGBText(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x261B | Ordinal: 9756
        void onUpdWheel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27E9 | Ordinal: 10218
        void save(class FX::FXStream &) const;

    // RVA: 0x296A | Ordinal: 10603
        void setActivePanel(int);

    // RVA: 0x2C2E | Ordinal: 11311
        void setOpaqueOnly(bool);

    // RVA: 0x2C76 | Ordinal: 11383
        void setRGBA(unsigned int, bool);

    // RVA: 0x2DD7 | Ordinal: 11736
        void setWellColor(int, unsigned int);

    // RVA: 0x2F1C | Ordinal: 12061
        void updateWell(void);

    // RVA: 0x3D4 | Ordinal: 981
        void _FXColorSelector(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCOLORSELECTOR_HPP
