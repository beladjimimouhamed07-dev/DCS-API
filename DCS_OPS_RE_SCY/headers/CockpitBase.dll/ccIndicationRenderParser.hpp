#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccIndicationRenderParser
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccIndicationRenderParser
{
public:

    // RVA: 0x96F | Ordinal: 2416
        void beforeObjectRender(class Graphics::RenderObject *);

    // RVA: 0x1FB | Ordinal: 508
        void ccIndicationRenderParser(class cockpit::ccIndicationRenderParser &&);

    // RVA: 0x1FC | Ordinal: 509
        void ccIndicationRenderParser(class cockpit::ccIndicationRenderParser const &);

    // RVA: 0x1FD | Ordinal: 510
        void ccIndicationRenderParser(void);

    // RVA: 0xA1B | Ordinal: 2588
        void change_brightness(float);

    // RVA: 0xA1C | Ordinal: 2589
        void change_color(class osg::Vec3f const &);

    // RVA: 0xA1F | Ordinal: 2592
        void change_opacity(float);

    // RVA: 0xACC | Ordinal: 2765
        void clear_counter(void);

    // RVA: 0x108D | Ordinal: 4238
        void get_shader_constant(void) const;

    // RVA: 0x10BC | Ordinal: 4285
        void get_target_material(void) const;

    // RVA: 0x114C | Ordinal: 4429
        void increase_render_target_counter(void);

    // RVA: 0x12B0 | Ordinal: 4785
        void is_colored(void) const;

    // RVA: 0x12BB | Ordinal: 4796
        void is_inverted(void) const;

    // RVA: 0x156F | Ordinal: 5488
        void read_from_state(class Lua::Config &);

    // RVA: 0x15D1 | Ordinal: 5586
        void release(void);

    // RVA: 0x15E6 | Ordinal: 5607
        void render(class Graphics::RenderObject *);

    // RVA: 0x15EB | Ordinal: 5612
        void rendered_with_targetmaterial(void) const;

    // RVA: 0x163C | Ordinal: 5693
        void restore_initial_color(void);

    // RVA: 0x1844 | Ordinal: 6213
        void set_colored(bool);

    // RVA: 0x18AD | Ordinal: 6318
        void set_inverted(bool);

    // RVA: 0x18DD | Ordinal: 6366
        void set_mfd_shader_brightness(float);

    // RVA: 0x18DE | Ordinal: 6367
        void set_mfd_shader_contrast(float);

    // RVA: 0x1929 | Ordinal: 6442
        void set_shader_constant(float, float, float, float);

    // RVA: 0x194D | Ordinal: 6478
        void set_target_material(class Graphics::MaterialPtr);

    // RVA: 0x1A13 | Ordinal: 6676
        void submit(class Graphics::RenderObject *);

    // RVA: 0x37E | Ordinal: 895
        void _ccIndicationRenderParser(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCINDICATIONRENDERPARSER_HPP
