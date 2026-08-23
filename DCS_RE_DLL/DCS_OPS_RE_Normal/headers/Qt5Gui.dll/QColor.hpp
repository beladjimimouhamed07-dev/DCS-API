#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Qt5Gui.dll
// Class: QColor
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class QColor
{
public:

    // RVA: 0xA5 | Ordinal: 166
        void QColor(class QColor &&);

    // RVA: 0xA6 | Ordinal: 167
        void QColor(class QColor const &);

    // RVA: 0xA7 | Ordinal: 168
        void QColor(class QString const &);

    // RVA: 0xA8 | Ordinal: 169
        void QColor(int, int, int, int);

    // RVA: 0xA9 | Ordinal: 170
        void QColor(unsigned int);

    // RVA: 0xAA | Ordinal: 171
        void QColor(char const *);

    // RVA: 0xAB | Ordinal: 172
        void QColor(class QLatin1String);

    // RVA: 0xAC | Ordinal: 173
        void QColor(class QRgba64);

    // RVA: 0xAD | Ordinal: 174
        void QColor(class QStringView);

    // RVA: 0xAE | Ordinal: 175
        void QColor(enum Qt::GlobalColor);

    // RVA: 0xAF | Ordinal: 176
        void QColor(enum QColor::Spec);

    // RVA: 0xB0 | Ordinal: 177
        void QColor(enum QColor::Spec, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0xB1 | Ordinal: 178
        void QColor(void);

    // RVA: 0x9CF | Ordinal: 2512
        void alpha(void) const;

    // RVA: 0x9D3 | Ordinal: 2516
        void alphaF(void) const;

    // RVA: 0xAA0 | Ordinal: 2721
        void black(void) const;

    // RVA: 0xAA1 | Ordinal: 2722
        void blackF(void) const;

    // RVA: 0xAC5 | Ordinal: 2758
        void blue(void) const;

    // RVA: 0xAC7 | Ordinal: 2760
        void blueF(void) const;

    // RVA: 0xBFC | Ordinal: 3069
        void colorNames(void);

    // RVA: 0xC5D | Ordinal: 3166
        void convertTo(enum QColor::Spec) const;

    // RVA: 0xD0E | Ordinal: 3343
        void cyan(void) const;

    // RVA: 0xD0F | Ordinal: 3344
        void cyanF(void) const;

    // RVA: 0xD98 | Ordinal: 3481
        void dark(int) const;

    // RVA: 0xD9A | Ordinal: 3483
        void darker(int) const;

    // RVA: 0x112D | Ordinal: 4398
        void fromCmyk(int, int, int, int, int);

    // RVA: 0x112E | Ordinal: 4399
        void fromCmykF(double, double, double, double, double);

    // RVA: 0x113E | Ordinal: 4415
        void fromHsl(int, int, int, int);

    // RVA: 0x113F | Ordinal: 4416
        void fromHslF(double, double, double, double);

    // RVA: 0x1140 | Ordinal: 4417
        void fromHsv(int, int, int, int);

    // RVA: 0x1141 | Ordinal: 4418
        void fromHsvF(double, double, double, double);

    // RVA: 0x115B | Ordinal: 4444
        void fromRgb(int, int, int, int);

    // RVA: 0x115C | Ordinal: 4445
        void fromRgb(unsigned int);

    // RVA: 0x115D | Ordinal: 4446
        void fromRgbF(double, double, double, double);

    // RVA: 0x1160 | Ordinal: 4449
        void fromRgba(unsigned int);

    // RVA: 0x115E | Ordinal: 4447
        void fromRgba64(unsigned short, unsigned short, unsigned short, unsigned short);

    // RVA: 0x115F | Ordinal: 4448
        void fromRgba64(class QRgba64);

    // RVA: 0x119B | Ordinal: 4508
        void getCmyk(int *, int *, int *, int *, int *);

    // RVA: 0x119C | Ordinal: 4509
        void getCmyk(int *, int *, int *, int *, int *) const;

    // RVA: 0x119D | Ordinal: 4510
        void getCmykF(double *, double *, double *, double *, double *);

    // RVA: 0x119E | Ordinal: 4511
        void getCmykF(double *, double *, double *, double *, double *) const;

    // RVA: 0x11A4 | Ordinal: 4517
        void getHsl(int *, int *, int *, int *) const;

    // RVA: 0x11A5 | Ordinal: 4518
        void getHslF(double *, double *, double *, double *) const;

    // RVA: 0x11A6 | Ordinal: 4519
        void getHsv(int *, int *, int *, int *) const;

    // RVA: 0x11A7 | Ordinal: 4520
        void getHsvF(double *, double *, double *, double *) const;

    // RVA: 0x11AE | Ordinal: 4527
        void getRgb(int *, int *, int *, int *) const;

    // RVA: 0x11AF | Ordinal: 4528
        void getRgbF(double *, double *, double *, double *) const;

    // RVA: 0x4E12 | Ordinal: 19987
        void green(void) const;

    // RVA: 0x4E14 | Ordinal: 19989
        void greenF(void) const;

    // RVA: 0x4EBE | Ordinal: 20159
        void hslHue(void) const;

    // RVA: 0x4EBF | Ordinal: 20160
        void hslHueF(void) const;

    // RVA: 0x4EC0 | Ordinal: 20161
        void hslSaturation(void) const;

    // RVA: 0x4EC1 | Ordinal: 20162
        void hslSaturationF(void) const;

    // RVA: 0x4EC2 | Ordinal: 20163
        void hsvHue(void) const;

    // RVA: 0x4EC3 | Ordinal: 20164
        void hsvHueF(void) const;

    // RVA: 0x4EC4 | Ordinal: 20165
        void hsvSaturation(void) const;

    // RVA: 0x4EC5 | Ordinal: 20166
        void hsvSaturationF(void) const;

    // RVA: 0x4EC6 | Ordinal: 20167
        void hue(void) const;

    // RVA: 0x4EC7 | Ordinal: 20168
        void hueF(void) const;

    // RVA: 0x4FA4 | Ordinal: 20389
        void invalidate(void);

    // RVA: 0x5071 | Ordinal: 20594
        void isRgbaValid(int, int, int, int);

    // RVA: 0x5092 | Ordinal: 20627
        void isValid(void) const;

    // RVA: 0x50B6 | Ordinal: 20663
        void isValidColor(class QString const &);

    // RVA: 0x50B7 | Ordinal: 20664
        void isValidColor(class QLatin1String);

    // RVA: 0x50B8 | Ordinal: 20665
        void isValidColor(class QStringView);

    // RVA: 0x515C | Ordinal: 20829
        void light(int) const;

    // RVA: 0x515E | Ordinal: 20831
        void lighter(int) const;

    // RVA: 0x515F | Ordinal: 20832
        void lightness(void) const;

    // RVA: 0x5160 | Ordinal: 20833
        void lightnessF(void) const;

    // RVA: 0x51D9 | Ordinal: 20954
        void magenta(void) const;

    // RVA: 0x51DA | Ordinal: 20955
        void magentaF(void) const;

    // RVA: 0x530E | Ordinal: 21263
        void name(enum QColor::NameFormat) const;

    // RVA: 0x530F | Ordinal: 21264
        void name(void) const;

    // RVA: 0x5692 | Ordinal: 22163
        void red(void) const;

    // RVA: 0x5694 | Ordinal: 22165
        void redF(void) const;

    // RVA: 0x5759 | Ordinal: 22362
        void rgb(void) const;

    // RVA: 0x5760 | Ordinal: 22369
        void rgba(void) const;

    // RVA: 0x575F | Ordinal: 22368
        void rgba64(void) const;

    // RVA: 0x579B | Ordinal: 22428
        void saturation(void) const;

    // RVA: 0x579C | Ordinal: 22429
        void saturationF(void) const;

    // RVA: 0x5822 | Ordinal: 22563
        void setAlpha(int);

    // RVA: 0x5826 | Ordinal: 22567
        void setAlphaF(double);

    // RVA: 0x586B | Ordinal: 22636
        void setBlue(int);

    // RVA: 0x586D | Ordinal: 22638
        void setBlueF(double);

    // RVA: 0x58B3 | Ordinal: 22708
        void setCmyk(int, int, int, int, int);

    // RVA: 0x58B4 | Ordinal: 22709
        void setCmykF(double, double, double, double, double);

    // RVA: 0x59DB | Ordinal: 23004
        void setGreen(int);

    // RVA: 0x59DD | Ordinal: 23006
        void setGreenF(double);

    // RVA: 0x59F0 | Ordinal: 23025
        void setHsl(int, int, int, int);

    // RVA: 0x59F1 | Ordinal: 23026
        void setHslF(double, double, double, double);

    // RVA: 0x59F2 | Ordinal: 23027
        void setHsv(int, int, int, int);

    // RVA: 0x59F3 | Ordinal: 23028
        void setHsvF(double, double, double, double);

    // RVA: 0x5A95 | Ordinal: 23190
        void setNamedColor(class QString const &);

    // RVA: 0x5A96 | Ordinal: 23191
        void setNamedColor(class QLatin1String);

    // RVA: 0x5A97 | Ordinal: 23192
        void setNamedColor(class QStringView);

    // RVA: 0x5B2E | Ordinal: 23343
        void setRed(int);

    // RVA: 0x5B31 | Ordinal: 23346
        void setRedF(double);

    // RVA: 0x5B47 | Ordinal: 23368
        void setRgb(int, int, int, int);

    // RVA: 0x5B48 | Ordinal: 23369
        void setRgb(unsigned int);

    // RVA: 0x5B49 | Ordinal: 23370
        void setRgbF(double, double, double, double);

    // RVA: 0x5B4B | Ordinal: 23372
        void setRgba(unsigned int);

    // RVA: 0x5B4A | Ordinal: 23371
        void setRgba64(class QRgba64);

    // RVA: 0x5D70 | Ordinal: 23921
        void spec(void) const;

    // RVA: 0x5F3B | Ordinal: 24380
        void toCmyk(void) const;

    // RVA: 0x5F3D | Ordinal: 24382
        void toExtendedRgb(void) const;

    // RVA: 0x5F43 | Ordinal: 24388
        void toHsl(void) const;

    // RVA: 0x5F44 | Ordinal: 24389
        void toHsv(void) const;

    // RVA: 0x5F69 | Ordinal: 24426
        void toRgb(void) const;

    // RVA: 0x60F0 | Ordinal: 24817
        void value(void) const;

    // RVA: 0x60F5 | Ordinal: 24822
        void valueF(void) const;

    // RVA: 0x61DA | Ordinal: 25051
        void yellow(void) const;

    // RVA: 0x61DB | Ordinal: 25052
        void yellowF(void) const;
};

// DCS_OPS_RE_QT5GUI.DLL_QCOLOR_HPP
