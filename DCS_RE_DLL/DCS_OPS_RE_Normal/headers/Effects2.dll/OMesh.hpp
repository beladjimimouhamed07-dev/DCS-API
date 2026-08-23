#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects2.dll
// Class: OMesh
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Effects {

class OMesh
{
public:

    // RVA: 0x1 | Ordinal: 2
        void OMesh(class Effects::OMesh const &);

    // RVA: 0x2 | Ordinal: 3
        void OMesh(void);

    // RVA: 0x2C | Ordinal: 45
        void bindGeometry(class render::Shader &, struct render::ve_handle_s *, struct render::ve_handle_s *, struct render::ve_handle_s *, struct render::ve_handle_s *) const;

    // RVA: 0x2D | Ordinal: 46
        void bindTextures(class render::Shader &, unsigned int, unsigned __int64, unsigned __int64 const *, unsigned __int64 const *) const;

    // RVA: 0x33 | Ordinal: 52
        void draw(class render::Shader &, unsigned int, unsigned int, unsigned int) const;

    // RVA: 0x59 | Ordinal: 90
        void getPrimitivesCount(void) const;

    // RVA: 0x5D | Ordinal: 94
        void init(char const *, class std::function<void __cdecl(struct Effects::OMesh::Vertex *, int)>);

    // RVA: 0x5E | Ordinal: 95
        void init(char const **const, unsigned int, class std::function<void __cdecl(struct Effects::OMesh::Vertex *, int)>);

    // RVA: 0x73 | Ordinal: 116
        void release(void);

    // RVA: 0xF | Ordinal: 16
        void _OMesh(void);
};

} // namespace Effects

// DCS_OPS_RE_EFFECTS2.DLL_OMESH_HPP
