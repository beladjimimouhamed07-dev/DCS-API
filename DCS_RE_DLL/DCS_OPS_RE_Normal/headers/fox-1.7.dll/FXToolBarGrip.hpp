#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXToolBarGrip
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXToolBarGrip
{
public:

    // RVA: 0x31E | Ordinal: 799
        void FXToolBarGrip(void);

    // RVA: 0x31F | Ordinal: 800
        void FXToolBarGrip(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xA9C | Ordinal: 2717
        void canFocus(void) const;

    // RVA: 0xFE7 | Ordinal: 4072
        void getActiveColor(void) const;

    // RVA: 0x1156 | Ordinal: 4439
        void getDefaultHeight(void);

    // RVA: 0x11AC | Ordinal: 4525
        void getDefaultWidth(void);

    // RVA: 0x145E | Ordinal: 5215
        void getMetaClass(void) const;

    // RVA: 0x17DE | Ordinal: 6111
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x191F | Ordinal: 6432
        void isDoubleBar(void) const;

    // RVA: 0x1B3E | Ordinal: 6975
        void load(class FX::FXStream &);

    // RVA: 0x1C9A | Ordinal: 7323
        void manufacture(void);

    // RVA: 0x22A0 | Ordinal: 8865
        void onEnter(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23A4 | Ordinal: 9125
        void onLeave(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2498 | Ordinal: 9369
        void onPaint(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x286F | Ordinal: 10352
        void save(class FX::FXStream &) const;

    // RVA: 0x2967 | Ordinal: 10600
        void setActiveColor(unsigned int);

    // RVA: 0x2A60 | Ordinal: 10849
        void setDoubleBar(bool);

    // RVA: 0x4D3 | Ordinal: 1236
        void _FXToolBarGrip(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXTOOLBARGRIP_HPP
