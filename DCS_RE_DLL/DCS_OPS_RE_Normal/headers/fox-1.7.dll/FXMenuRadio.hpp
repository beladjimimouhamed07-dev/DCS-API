#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMenuRadio
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMenuRadio
{
public:

    // RVA: 0x21B | Ordinal: 540
        void FXMenuRadio(void);

    // RVA: 0x21C | Ordinal: 541
        void FXMenuRadio(class FX::FXComposite *, class FX::FXString const &, class FX::FXObject *, unsigned int, unsigned int);

    // RVA: 0x1084 | Ordinal: 4229
        void getCheck(void) const;

    // RVA: 0x1134 | Ordinal: 4405
        void getDefaultHeight(void);

    // RVA: 0x118A | Ordinal: 4491
        void getDefaultWidth(void);

    // RVA: 0x141D | Ordinal: 5150
        void getMetaClass(void) const;

    // RVA: 0x151C | Ordinal: 5405
        void getRadioColor(void) const;

    // RVA: 0x179D | Ordinal: 6046
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B10 | Ordinal: 6929
        void load(class FX::FXStream &);

    // RVA: 0x1C5A | Ordinal: 7259
        void manufacture(void);

    // RVA: 0x1F57 | Ordinal: 8024
        void onButtonPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F5E | Ordinal: 8031
        void onButtonRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F64 | Ordinal: 8037
        void onCheck(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F8A | Ordinal: 8075
        void onCmdAccel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2068 | Ordinal: 8297
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2182 | Ordinal: 8579
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21E9 | Ordinal: 8682
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2323 | Ordinal: 8996
        void onHotKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2332 | Ordinal: 9011
        void onHotKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x234F | Ordinal: 9040
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2377 | Ordinal: 9080
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x247D | Ordinal: 9342
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2536 | Ordinal: 9527
        void onUncheck(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2554 | Ordinal: 9557
        void onUnknown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2841 | Ordinal: 10306
        void save(class FX::FXStream &) const;

    // RVA: 0x29E1 | Ordinal: 10722
        void setCheck(unsigned char);

    // RVA: 0x2C79 | Ordinal: 11386
        void setRadioColor(unsigned int);

    // RVA: 0x46A | Ordinal: 1131
        void _FXMenuRadio(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMENURADIO_HPP
