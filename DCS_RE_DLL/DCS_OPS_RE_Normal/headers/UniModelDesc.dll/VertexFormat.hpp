#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: VertexFormat
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class VertexFormat
{
public:

    // RVA: 0xB | Ordinal: 12
        void VertexFormat(void);

    // RVA: 0x8B | Ordinal: 140
        void getOffset(unsigned int) const;

    // RVA: 0xA6 | Ordinal: 167
        void getVertexBSize(void) const;

    // RVA: 0xA7 | Ordinal: 168
        void getVertexSize(void) const;

    // RVA: 0xD2 | Ordinal: 211
        void load(class io::IBinaryFileR &);

    // RVA: 0x116 | Ordinal: 279
        void save(class io::IBinaryFileW &) const;
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_VERTEXFORMAT_HPP
