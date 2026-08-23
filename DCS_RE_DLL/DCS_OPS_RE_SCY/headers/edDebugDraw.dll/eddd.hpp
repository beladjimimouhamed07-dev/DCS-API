#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edDebugDraw.dll
// Class: eddd
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class eddd
{
public:

    // RVA: 0x0 | Ordinal: 1
        void IDbgBox_(void);

    // RVA: 0x1 | Ordinal: 2
        void IDbgCircle_(void);

    // RVA: 0x2 | Ordinal: 3
        void IDbgCross_(void);

    // RVA: 0x3 | Ordinal: 4
        void IDbgCylinder_(void);

    // RVA: 0x4 | Ordinal: 5
        void IDbgFrustum_(void);

    // RVA: 0x5 | Ordinal: 6
        void IDbgLimitedLine_(void);

    // RVA: 0xA | Ordinal: 11
        void IDbgObj_(void);

    // RVA: 0x6 | Ordinal: 7
        void IDbgPolyLine_(void);

    // RVA: 0x7 | Ordinal: 8
        void IDbgSphere_(void);

    // RVA: 0x8 | Ordinal: 9
        void IDbgText_(void);

    // RVA: 0x9 | Ordinal: 10
        void IDbgVector3Field_(void);

    // RVA: 0xC | Ordinal: 13
        void clear_render_data(void);

    // RVA: 0xD | Ordinal: 14
        void create_box(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0xE | Ordinal: 15
        void create_box(float, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0xF | Ordinal: 16
        void create_circle(float, int, enum CircleData::AxisEnum, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x10 | Ordinal: 17
        void create_circle(float, float, enum CircleData::AxisEnum, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x11 | Ordinal: 18
        void create_cross(float, float, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x12 | Ordinal: 19
        void create_cylinder(float, float, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x13 | Ordinal: 20
        void create_frustum(float, float, float, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x14 | Ordinal: 21
        void create_icon(char const *, class osg::Vec2f const &, class osg::Matrixd const &, class osg::Vec4f const &, unsigned __int64, class osg::Vec2f const &, class osg::Vec2f const &);

    // RVA: 0x15 | Ordinal: 22
        void create_limited_line(float, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x16 | Ordinal: 23
        void create_line(bool, float, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x17 | Ordinal: 24
        void create_mesh(class osg::Vec3f const *, unsigned __int64, class osg::Vec3i const *, unsigned __int64, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64);

    // RVA: 0x18 | Ordinal: 25
        void create_poly_line(class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x19 | Ordinal: 26
        void create_sphere(float, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x1A | Ordinal: 27
        void create_text(class ed::basic_string<wchar_t> const &, char const *, int, class osg::Matrixd const &, class osg::Vec4f const &, unsigned __int64);

    // RVA: 0x1B | Ordinal: 28
        void create_vector3_field(class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x1C | Ordinal: 29
        void deinit(void);

    // RVA: 0x1D | Ordinal: 30
        void disable_debug_draw(bool);

    // RVA: 0x1E | Ordinal: 31
        void draw_box(class osg::BoundingBoxImpl<class osg::Vec3f> const &, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x1F | Ordinal: 32
        void draw_box(float, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x20 | Ordinal: 33
        void draw_circle(float, int, enum CircleData::AxisEnum, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x21 | Ordinal: 34
        void draw_circle(float, float, enum CircleData::AxisEnum, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x22 | Ordinal: 35
        void draw_cone(float, float, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x23 | Ordinal: 36
        void draw_cone_frustum(float, float, float, int, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x24 | Ordinal: 37
        void draw_cone_sector(class osg::Matrixd const &, float, float, float, float, float, float, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x25 | Ordinal: 38
        void draw_cross(float, float, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x26 | Ordinal: 39
        void draw_cylinder(float, float, int, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x27 | Ordinal: 40
        void draw_frustum(float, float, float, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x28 | Ordinal: 41
        void draw_icon(char const *, class osg::Vec2f const &, class osg::Matrixd const &, class osg::Vec4f const &, unsigned __int64);

    // RVA: 0x29 | Ordinal: 42
        void draw_limited_line(float, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x2A | Ordinal: 43
        void draw_line(bool, float, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x2B | Ordinal: 44
        void draw_matrix_frustum(class osg::Matrixf const &, class osg::Matrixf const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x2C | Ordinal: 45
        void draw_mesh(class osg::Vec3f const *, unsigned __int64, class osg::Vec3i const *, unsigned __int64, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64);

    // RVA: 0x2D | Ordinal: 46
        void draw_mesh_wareframe(class osg::Vec3f const *, unsigned __int64, class osg::Vec3i const *, unsigned __int64, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64);

    // RVA: 0x2E | Ordinal: 47
        void draw_poly_line(class osg::Vec3f const *, unsigned __int64, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x2F | Ordinal: 48
        void draw_rect(class osg::Vec4f const &, class osg::Vec3f const &);

    // RVA: 0x30 | Ordinal: 49
        void draw_sphere(float, class osg::Matrixd const &, class osg::Vec3f const &, unsigned __int64, unsigned int);

    // RVA: 0x31 | Ordinal: 50
        void draw_text(class ed::basic_string<wchar_t> const &, char const *, int, class osg::Matrixd const &, class osg::Vec4f const &, unsigned __int64);

    // RVA: 0x34 | Ordinal: 53
        void render(class osg::Matrixf const &, class osg::Vec3d const &, class ClipVolume const *);

    // RVA: 0x35 | Ordinal: 54
        void render_text(class std::function<void __cdecl(struct eddd::textDataPublic const &)> &&);

    // RVA: 0x36 | Ordinal: 55
        void setMainThreadId(class ed::thread::id);

    // RVA: 0x37 | Ordinal: 56
        void submit_geometry(void);

    // RVA: 0x38 | Ordinal: 57
        void submit_text(class std::function<void __cdecl(struct eddd::textDataPublic const &)> &&);

    // RVA: 0x39 | Ordinal: 58
        void update_graphics(void);
};

// DCS_OPS_RE_EDDEBUGDRAW.DLL_EDDD_HPP
