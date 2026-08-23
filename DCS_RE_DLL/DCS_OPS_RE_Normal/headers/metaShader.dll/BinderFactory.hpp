#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: metaShader.dll
// Class: BinderFactory
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace render {

class BinderFactory
{
public:

    // RVA: 0x3 | Ordinal: 4
        void BinderFactory(void);

    // RVA: 0x1F | Ordinal: 32
        void addBinder(class ed::basic_string<char> const &, class render::BinderConstructor *);

    // RVA: 0x34 | Ordinal: 53
        void getBinder(class ed::basic_string<char> const &);

    // RVA: 0x36 | Ordinal: 55
        void getInstance(void);

    // RVA: 0x4D | Ordinal: 78
        void removeBinder(class ed::basic_string<char> const &);
};

} // namespace render

// DCS_OPS_RE_METASHADER.DLL_BINDERFACTORY_HPP
