#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXGauge
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXGauge
{
public:

    // RVA: 0x163 | Ordinal: 356
        void FXGauge(void);

    // RVA: 0x164 | Ordinal: 357
        void FXGauge(class FX::FXComposite *, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0xD5A | Ordinal: 3419
        void drawGauge(class FX::FXDCWindow &, int, int, int, int, int, int, int, int) const;

    // RVA: 0xD95 | Ordinal: 3478
        void drawPointer(class FX::FXDCWindow &, double, int, int, int, int, int, int, int, int, int) const;

    // RVA: 0x1074 | Ordinal: 4213
        void getCaption(void) const;

    // RVA: 0x1076 | Ordinal: 4215
        void getCaptionFont(void) const;

    // RVA: 0x111E | Ordinal: 4383
        void getDefaultHeight(void);

    // RVA: 0x1174 | Ordinal: 4469
        void getDefaultWidth(void);

    // RVA: 0x1236 | Ordinal: 4663
        void getGaugeStyle(void) const;

    // RVA: 0x1276 | Ordinal: 4727
        void getHelpText(void) const;

    // RVA: 0x1348 | Ordinal: 4937
        void getMajorTickDelta(void) const;

    // RVA: 0x13ED | Ordinal: 5102
        void getMetaClass(void) const;

    // RVA: 0x1481 | Ordinal: 5250
        void getMinorTickDelta(void) const;

    // RVA: 0x14C2 | Ordinal: 5315
        void getNumberFont(void) const;

    // RVA: 0x1522 | Ordinal: 5411
        void getRange(double &, double &) const;

    // RVA: 0x15D4 | Ordinal: 5589
        void getStartAngle(void) const;

    // RVA: 0x15E2 | Ordinal: 5603
        void getSweepAngle(void) const;

    // RVA: 0x1636 | Ordinal: 5687
        void getTipText(void) const;

    // RVA: 0x1686 | Ordinal: 5767
        void getValue(void) const;

    // RVA: 0x176C | Ordinal: 5997
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AEC | Ordinal: 6893
        void load(class FX::FXStream &);

    // RVA: 0x1C2B | Ordinal: 7212
        void manufacture(void);

    // RVA: 0x203F | Ordinal: 8256
        void onCmdGetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2050 | Ordinal: 8273
        void onCmdGetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2062 | Ordinal: 8291
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x207A | Ordinal: 8315
        void onCmdGetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2085 | Ordinal: 8326
        void onCmdGetRealRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x208D | Ordinal: 8334
        void onCmdGetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20AB | Ordinal: 8364
        void onCmdGetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2159 | Ordinal: 8538
        void onCmdSetHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x216A | Ordinal: 8555
        void onCmdSetIntRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x217C | Ordinal: 8573
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2194 | Ordinal: 8597
        void onCmdSetLongValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21A1 | Ordinal: 8610
        void onCmdSetRealRange(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21A9 | Ordinal: 8618
        void onCmdSetRealValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21C7 | Ordinal: 8648
        void onCmdSetTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21E0 | Ordinal: 8673
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2467 | Ordinal: 9320
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24AE | Ordinal: 9391
        void onQueryHelp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x24CE | Ordinal: 9423
        void onQueryTip(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x281D | Ordinal: 10270
        void save(class FX::FXStream &) const;

    // RVA: 0x29D3 | Ordinal: 10708
        void setCaption(class FX::FXString const &);

    // RVA: 0x29D5 | Ordinal: 10710
        void setCaptionFont(class FX::FXFont *);

    // RVA: 0x2ADF | Ordinal: 10976
        void setGaugeStyle(unsigned int);

    // RVA: 0x2B18 | Ordinal: 11033
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2BD7 | Ordinal: 11224
        void setMajorTickDelta(double);

    // RVA: 0x2C04 | Ordinal: 11269
        void setMinorTickDelta(double);

    // RVA: 0x2C24 | Ordinal: 11301
        void setNumberFont(class FX::FXFont *);

    // RVA: 0x2C7F | Ordinal: 11392
        void setRange(double, double, bool);

    // RVA: 0x2D19 | Ordinal: 11546
        void setStartAngle(int);

    // RVA: 0x2D2A | Ordinal: 11563
        void setSweepAngle(int);

    // RVA: 0x2D7B | Ordinal: 11644
        void setTipText(class FX::FXString const &);

    // RVA: 0x2DBF | Ordinal: 11712
        void setValue(double, bool);

    // RVA: 0x426 | Ordinal: 1063
        void _FXGauge(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXGAUGE_HPP
