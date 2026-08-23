#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: Vertices
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class Vertices
{
public:

    // RVA: 0xC | Ordinal: 13
        void Vertices(struct model::VertexFormat const &);

    // RVA: 0xD | Ordinal: 14
        void Vertices(class ed::vector<float, class ed::allocator<float>> const &, unsigned __int64, struct model::VertexFormat const &);

    // RVA: 0xE | Ordinal: 15
        void Vertices(void);

    // RVA: 0x20 | Ordinal: 33
        void append(struct model::Vertices const &);

    // RVA: 0x2F | Ordinal: 48
        void buildFormat(void) const;

    // RVA: 0x31 | Ordinal: 50
        void calcVertexSize(void) const;

    // RVA: 0x44 | Ordinal: 69
        void clearDataOnly(void);

    // RVA: 0x45 | Ordinal: 70
        void cloneFormatOnly(void) const;

    // RVA: 0x47 | Ordinal: 72
        void cmpAttributes(struct model::Vertices const &) const;

    // RVA: 0x48 | Ordinal: 73
        void cmpFormat(struct model::VertexFormat const &) const;

    // RVA: 0x4B | Ordinal: 76
        void copyVertex(unsigned int, struct model::Vertices &) const;

    // RVA: 0x50 | Ordinal: 81
        void extract(struct model::VertexFormat const &) const;

    // RVA: 0x5A | Ordinal: 91
        void get(enum model::va::VertexAttribute);

    // RVA: 0x5B | Ordinal: 92
        void get(enum model::va::VertexAttribute) const;

    // RVA: 0x8A | Ordinal: 139
        void getNumVertices(void) const;

    // RVA: 0x9C | Ordinal: 157
        void getSize(enum model::va::VertexAttribute) const;

    // RVA: 0xAA | Ordinal: 171
        void get_safe(enum model::va::VertexAttribute);

    // RVA: 0xAB | Ordinal: 172
        void get_safe(enum model::va::VertexAttribute) const;

    // RVA: 0xB7 | Ordinal: 184
        void importFormat(struct model::VertexFormat const &);

    // RVA: 0xD3 | Ordinal: 212
        void load(class io::IBinaryFileR &, struct model::VertexFormat const &);

    // RVA: 0xE1 | Ordinal: 226
        void pack(void) const;

    // RVA: 0x117 | Ordinal: 280
        void save(class io::IBinaryFileW &) const;

    // RVA: 0x13B | Ordinal: 316
        void unpack(class ed::vector<float, class ed::allocator<float>> const &, unsigned __int64);

    // RVA: 0x13E | Ordinal: 319
        void validate(void) const;
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_VERTICES_HPP
