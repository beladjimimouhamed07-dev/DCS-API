#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: Indices
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class Indices
{
public:

    // RVA: 0x0 | Ordinal: 1
        void Indices(enum model::render::DrawMode, class ed::vector<unsigned int, class ed::allocator<unsigned int>> const &);

    // RVA: 0x1 | Ordinal: 2
        void Indices(void);

    // RVA: 0x74 | Ordinal: 117
        void getIndicesType(void) const;

    // RVA: 0xA3 | Ordinal: 164
        void getUniqueIndices(void) const;

    // RVA: 0xC9 | Ordinal: 202
        void load(class io::IBinaryFileR &);

    // RVA: 0xE5 | Ordinal: 230
        void remapIndices(void);

    // RVA: 0xF6 | Ordinal: 247
        void removeTriangles(class ed::span<unsigned int const, -1>);

    // RVA: 0x10C | Ordinal: 269
        void save(class io::IBinaryFileW &) const;
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_INDICES_HPP
