#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXJSONFile
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXJSONFile
{
public:

    // RVA: 0x1A6 | Ordinal: 423
        void FXJSONFile(class FX::FXString const &, enum FX::FXJSON::Direction, unsigned __int64);

    // RVA: 0x1A7 | Ordinal: 424
        void FXJSONFile(void);

    // RVA: 0xAFA | Ordinal: 2811
        void close(void);

    // RVA: 0xEBB | Ordinal: 3772
        void fill(void);

    // RVA: 0xF4E | Ordinal: 3919
        void flush(void);

    // RVA: 0x263F | Ordinal: 9792
        void open(class FX::FXString const &, enum FX::FXJSON::Direction, unsigned __int64);

    // RVA: 0x2640 | Ordinal: 9793
        void open(void *, enum FX::FXJSON::Direction, unsigned __int64);

    // RVA: 0x446 | Ordinal: 1095
        void _FXJSONFile(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXJSONFILE_HPP
