#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXShutterItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXShutterItem
{
public:

    // RVA: 0x2CA | Ordinal: 715
        void FXShutterItem(void);

    // RVA: 0x2CB | Ordinal: 716
        void FXShutterItem(class FX::FXShutter *, class FX::FXString const &, class FX::FXIcon *, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0x106C | Ordinal: 4205
        void getButton(void) const;

    // RVA: 0x10AA | Ordinal: 4267
        void getContent(void) const;

    // RVA: 0x1284 | Ordinal: 4741
        void getHelpText(void) const;

    // RVA: 0x1447 | Ordinal: 5192
        void getMetaClass(void) const;

    // RVA: 0x155C | Ordinal: 5469
        void getScrollWindow(void) const;

    // RVA: 0x1644 | Ordinal: 5701
        void getTipText(void) const;

    // RVA: 0x17C7 | Ordinal: 6088
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B24 | Ordinal: 6949
        void load(class FX::FXStream &);

    // RVA: 0x1C84 | Ordinal: 7301
        void manufacture(void);

    // RVA: 0x1FA9 | Ordinal: 8106
        void onCmdButton(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x22B0 | Ordinal: 8881
        void onFocusDown(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x230F | Ordinal: 8976
        void onFocusUp(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2855 | Ordinal: 10326
        void save(class FX::FXStream &) const;

    // RVA: 0x2B26 | Ordinal: 11047
        void setHelpText(class FX::FXString const &);

    // RVA: 0x2D87 | Ordinal: 11656
        void setTipText(class FX::FXString const &);

    // RVA: 0x4B1 | Ordinal: 1202
        void _FXShutterItem(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXSHUTTERITEM_HPP
