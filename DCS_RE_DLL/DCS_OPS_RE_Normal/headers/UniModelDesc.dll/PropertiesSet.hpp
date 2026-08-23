#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: PropertiesSet
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class PropertiesSet
{
public:

    // RVA: 0x4 | Ordinal: 5
        void PropertiesSet(void);

    // RVA: 0x4F | Ordinal: 80
        void enableAuxCulling(bool);

    // RVA: 0x9E | Ordinal: 159
        void getTexture(unsigned int);

    // RVA: 0x9F | Ordinal: 160
        void getTexture(unsigned int) const;

    // RVA: 0xA0 | Ordinal: 161
        void getTotalTextures(void);

    // RVA: 0xCA | Ordinal: 203
        void load(class io::IBinaryFileR &);

    // RVA: 0x10D | Ordinal: 270
        void save(class io::IBinaryFileW &) const;

    // RVA: 0x129 | Ordinal: 298
        void setMaterialName(class ed::basic_string<char> const &);

    // RVA: 0x133 | Ordinal: 308
        void setTexture(unsigned int, struct model::Texture2dProperties const &);

    // RVA: 0x12 | Ordinal: 19
        void _PropertiesSet(void);
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_PROPERTIESSET_HPP
