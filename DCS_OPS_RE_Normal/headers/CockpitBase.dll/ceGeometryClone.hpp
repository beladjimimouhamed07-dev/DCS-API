#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ceGeometryClone
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ceGeometryClone
{
public:

    // RVA: 0x22F | Ordinal: 560
        void ceGeometryClone(class cockpit::ceGeometryClone const &);

    // RVA: 0x230 | Ordinal: 561
        void ceGeometryClone(class Graphics::RenderObject const &);

    // RVA: 0x231 | Ordinal: 562
        void ceGeometryClone(void);

    // RVA: 0xA94 | Ordinal: 2709
        void class_name(void) const;

    // RVA: 0xB1B | Ordinal: 2844
        void copy(void);

    // RVA: 0xE3F | Ordinal: 3648
        void getValue(struct lua_State *, class ed::basic_string<char> const &) const;

    // RVA: 0x1677 | Ordinal: 5752
        void self_render(class cockpit::ccIndicationRenderParser &);

    // RVA: 0x17EE | Ordinal: 6127
        void setValue(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x189D | Ordinal: 6302
        void set_geometry(class Graphics::Geometry *, class Graphics::Material *);

    // RVA: 0x397 | Ordinal: 920
        void _ceGeometryClone(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CEGEOMETRYCLONE_HPP
