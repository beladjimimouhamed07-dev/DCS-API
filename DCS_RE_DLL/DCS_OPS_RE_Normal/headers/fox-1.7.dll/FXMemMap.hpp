#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXMemMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXMemMap
{
public:

    // RVA: 0x206 | Ordinal: 519
        void FXMemMap(void);

    // RVA: 0xA53 | Ordinal: 2644
        void base(void) const;

    // RVA: 0xAFC | Ordinal: 2813
        void close(void);

    // RVA: 0xF4F | Ordinal: 3920
        void flush(void);

    // RVA: 0x1A84 | Ordinal: 6789
        void length(void) const;

    // RVA: 0x1CB5 | Ordinal: 7350
        void map(__int64, __int64);

    // RVA: 0x1F39 | Ordinal: 7994
        void offset(void) const;

    // RVA: 0x264A | Ordinal: 9803
        void openMap(class FX::FXString const &, __int64, __int64, unsigned int, unsigned int);

    // RVA: 0x264B | Ordinal: 9804
        void openMap(void *, __int64, __int64, unsigned int);

    // RVA: 0x2696 | Ordinal: 9879
        void position(__int64, unsigned int);

    // RVA: 0x2697 | Ordinal: 9880
        void position(void) const;

    // RVA: 0x26E5 | Ordinal: 9958
        void readBlock(void *, __int64);

    // RVA: 0x2F07 | Ordinal: 12040
        void unmap(void);

    // RVA: 0x2FDB | Ordinal: 12252
        void writeBlock(void const *, __int64);

    // RVA: 0x460 | Ordinal: 1121
        void _FXMemMap(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXMEMMAP_HPP
