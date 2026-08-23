#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXAccelTable
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXAccelTable
{
public:

    // RVA: 0x29 | Ordinal: 42
        void FXAccelTable(void);

    // RVA: 0x95B | Ordinal: 2396
        void addAccel(unsigned int, class FX::FXObject *, unsigned int, unsigned int);

    // RVA: 0x1384 | Ordinal: 4997
        void getMetaClass(void) const;

    // RVA: 0x1702 | Ordinal: 5891
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1803 | Ordinal: 6148
        void hasAccel(unsigned int) const;

    // RVA: 0x1AAC | Ordinal: 6829
        void load(class FX::FXStream &);

    // RVA: 0x1BC6 | Ordinal: 7111
        void manufacture(void);

    // RVA: 0x233C | Ordinal: 9021
        void onKeyPress(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2365 | Ordinal: 9062
        void onKeyRelease(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2746 | Ordinal: 10055
        void removeAccel(unsigned int);

    // RVA: 0x278D | Ordinal: 10126
        void resize(unsigned int);

    // RVA: 0x27DE | Ordinal: 10207
        void save(class FX::FXStream &) const;

    // RVA: 0x2E91 | Ordinal: 11922
        void targetOfAccel(unsigned int) const;

    // RVA: 0x3A5 | Ordinal: 934
        void _FXAccelTable(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXACCELTABLE_HPP
