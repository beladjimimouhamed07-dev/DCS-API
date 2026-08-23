#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: Align
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class Align
{
public:

    // RVA: 0x30 | Ordinal: 49
        void Align(enum gui::Align::Type, int);

    // RVA: 0x15A | Ordinal: 347
        void calc(int, int, int &, int &) const;

    // RVA: 0x466 | Ordinal: 1127
        void getOffset(void) const;

    // RVA: 0x543 | Ordinal: 1348
        void getType(void) const;

    // RVA: 0x8F3 | Ordinal: 2292
        void setOffset(int);

    // RVA: 0x95C | Ordinal: 2397
        void setType(enum gui::Align::Type);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_ALIGN_HPP
