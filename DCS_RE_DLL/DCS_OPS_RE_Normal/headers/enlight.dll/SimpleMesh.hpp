#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: SimpleMesh
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace enlight {

class SimpleMesh
{
public:

    // RVA: 0x23 | Ordinal: 36
        void SimpleMesh(class enlight::SimpleMesh const &);

    // RVA: 0x24 | Ordinal: 37
        void SimpleMesh(void);

    // RVA: 0x6B | Ordinal: 108
        void bindGeometry(class render::Shader &, struct render::ve_handle_s *, struct render::ve_handle_s *, struct render::ve_handle_s *, struct render::ve_handle_s *) const;

    // RVA: 0x6C | Ordinal: 109
        void bindGeometry(class render::Shader &, struct render::ve_handle_s *) const;

    // RVA: 0x6D | Ordinal: 110
        void bindTextureFLIR(class render::Shader &, unsigned __int64) const;

    // RVA: 0x6E | Ordinal: 111
        void bindTextures(class render::Shader &, unsigned __int64, unsigned __int64, unsigned __int64) const;

    // RVA: 0x8A | Ordinal: 139
        void draw(class render::Shader &, unsigned int) const;

    // RVA: 0x8B | Ordinal: 140
        void draw(class render::Shader &, unsigned int, unsigned int, unsigned int) const;

    // RVA: 0x96 | Ordinal: 151
        void getBounds(void) const;

    // RVA: 0xA6 | Ordinal: 167
        void getLodCount(void) const;

    // RVA: 0xB3 | Ordinal: 180
        void init(struct enlight::SimpleMesh::Vertex *, int, unsigned short *, int, class std::vector<struct std::pair<int, int>, class std::allocator<struct std::pair<int, int>>> const *);

    // RVA: 0xC2 | Ordinal: 195
        void loadFromFBX(char const *, bool, bool);

    // RVA: 0x39 | Ordinal: 58
        void _SimpleMesh(void);
};

} // namespace enlight

// DCS_OPS_RE_ENLIGHT.DLL_SIMPLEMESH_HPP
