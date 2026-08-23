#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMenuCheck
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMenuCheck
{
public:

    // RVA: 0x215 | Ordinal: 534
        void FXMenuCheck(void);

    // RVA: 0x216 | Ordinal: 535
        void FXMenuCheck(class FX::FXComposite *, class FX::FXString const &, class FX::FXObject *, unsigned int, unsigned int);

    // RVA: 0x106B | Ordinal: 4204
        void getBoxColor(void) const;

    // RVA: 0x1083 | Ordinal: 4228
        void getCheck(void) const;

    // RVA: 0x1132 | Ordinal: 4403
        void getDefaultHeight(void);

    // RVA: 0x1188 | Ordinal: 4489
        void getDefaultWidth(void);

    // RVA: 0x141A | Ordinal: 5147
        void getMetaClass(void) const;

    // RVA: 0x179A | Ordinal: 6043
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B0E | Ordinal: 6927
        void load(class FX::FXStream &);

    // RVA: 0x1C57 | Ordinal: 7256
        void manufacture(void);

    // RVA: 0x1F55 | Ordinal: 8022
        void onButtonPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F5C | Ordinal: 8029
        void onButtonRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F63 | Ordinal: 8036
        void onCheck(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1F88 | Ordinal: 8073
        void onCmdAccel(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2067 | Ordinal: 8296
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2181 | Ordinal: 8578
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21E8 | Ordinal: 8681
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2321 | Ordinal: 8994
        void onHotKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2330 | Ordinal: 9009
        void onHotKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x234D | Ordinal: 9038
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2375 | Ordinal: 9078
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x247B | Ordinal: 9340
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2535 | Ordinal: 9526
        void onUncheck(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2553 | Ordinal: 9556
        void onUnknown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x283F | Ordinal: 10304
        void save(class FX::FXStream &) const;

    // RVA: 0x29CB | Ordinal: 10700
        void setBoxColor(unsigned int);

    // RVA: 0x29E0 | Ordinal: 10721
        void setCheck(unsigned char);

    // RVA: 0x467 | Ordinal: 1128
        void _FXMenuCheck(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMENUCHECK_HPP
