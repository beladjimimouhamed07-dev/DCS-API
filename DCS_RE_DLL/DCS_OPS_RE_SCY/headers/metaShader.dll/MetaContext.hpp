#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: metaShader.dll
// Class: MetaContext
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class MetaContext
{
public:

    // RVA: 0x4 | Ordinal: 5
        void MetaContext(int, void const *);

    // RVA: 0x5 | Ordinal: 6
        void MetaContext(int, void const *, int, void const *);

    // RVA: 0x6 | Ordinal: 7
        void MetaContext(int, void const *, int, void const *, int, void const *);

    // RVA: 0x7 | Ordinal: 8
        void MetaContext(int, void const *, int, void const *, int, void const *, int, void const *);

    // RVA: 0x8 | Ordinal: 9
        void MetaContext(void);

    // RVA: 0x35 | Ordinal: 54
        void getExtension(int);

    // RVA: 0x53 | Ordinal: 84
        void setExtension(int, void *);
};

} // namespace render

// DCS_OPS_RE_METASHADER.DLL_METACONTEXT_HPP
