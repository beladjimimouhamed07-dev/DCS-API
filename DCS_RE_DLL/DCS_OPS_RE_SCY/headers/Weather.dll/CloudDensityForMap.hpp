#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weather.dll
// Class: CloudDensityForMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Weather {

class CloudDensityForMap
{
public:

    // RVA: 0x0 | Ordinal: 1
        void CloudDensityForMap(class Weather::CloudDensityForMap &&);

    // RVA: 0x1 | Ordinal: 2
        void CloudDensityForMap(class Weather::CloudDensityForMap const &);

    // RVA: 0x2 | Ordinal: 3
        void CloudDensityForMap(void);

    // RVA: 0x29 | Ordinal: 42
        void addPoly(double, double, class osg::Vec4f const &, double, class wPosition3<double> const &, class osg::RectImpl<class osg::Vec2i> const &);

    // RVA: 0x38 | Ordinal: 57
        void discard(void);

    // RVA: 0x3A | Ordinal: 59
        void doRedraw(double, class wPosition3<double> const &, class osg::RectImpl<class osg::Vec2i> const &);

    // RVA: 0x3E | Ordinal: 63
        void fillCamera(double, class wPosition3<double> const &, class osg::RectImpl<class osg::Vec2i> const &);

    // RVA: 0x3F | Ordinal: 64
        void fillGeom(double, class wPosition3<double> const &, class osg::RectImpl<class osg::Vec2i> const &);

    // RVA: 0x76 | Ordinal: 119
        void initSize(class osg::RectImpl<class osg::Vec2i> const &);

    // RVA: 0x7B | Ordinal: 124
        void map2Window(class osg::Vec2d const &, double, class wPosition3<double> const &, class osg::RectImpl<class osg::Vec2i> const &);

    // RVA: 0x7D | Ordinal: 126
        void oneTimeInit(class osg::RectImpl<class osg::Vec2i> const &);

    // RVA: 0x81 | Ordinal: 130
        void render(void);

    // RVA: 0x86 | Ordinal: 135
        void setAtmo(class Weather::IAtmosphere *);

    // RVA: 0x94 | Ordinal: 149
        void texPosToWPos(unsigned int, unsigned int, double *, double *);

    // RVA: 0xE | Ordinal: 15
        void _CloudDensityForMap(void);
};

} // namespace Weather

// DCS_OPS_RE_WEATHER.DLL_CLOUDDENSITYFORMAP_HPP
