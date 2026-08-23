#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: JsonWriter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class JsonWriter
{
public:

    // RVA: 0x13E | Ordinal: 319
        void _yajl_print_callback(void *, char const *, unsigned __int64);

    // RVA: 0x1B7 | Ordinal: 440
        void exit_gzip(void);

    // RVA: 0x1C4 | Ordinal: 453
        void finish(void);

    // RVA: 0x221 | Ordinal: 546
        void get_contents(void) const;

    // RVA: 0x26A | Ordinal: 619
        void init_gzip(void);

    // RVA: 0x35B | Ordinal: 860
        void reset(enum ed::JsonWriter::OutputFormat);
};

} // namespace ed

// DCS_OPS_RE_EDCORE.DLL_JSONWRITER_HPP
