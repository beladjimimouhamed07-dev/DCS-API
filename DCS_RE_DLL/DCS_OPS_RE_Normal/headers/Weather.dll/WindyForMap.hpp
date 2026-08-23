#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weather.dll
// Class: WindyForMap
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Weather {

class WindyForMap
{
public:

    // RVA: 0xC | Ordinal: 13
        void WindyForMap(class Weather::WindyForMap &&);

    // RVA: 0xD | Ordinal: 14
        void WindyForMap(void);

    // RVA: 0x37 | Ordinal: 56
        void createThread(void);

    // RVA: 0x39 | Ordinal: 58
        void discard(void);

    // RVA: 0x3B | Ordinal: 60
        void doRedraw(double, class wPosition3<double> const &, class osg::RectImpl<class osg::Vec2i> const &);

    // RVA: 0x3D | Ordinal: 62
        void exitThread(void);

    // RVA: 0x40 | Ordinal: 65
        void fillGeom(void);

    // RVA: 0x75 | Ordinal: 118
        void init(void);

    // RVA: 0x79 | Ordinal: 122
        void isBaricSystemPresent(void) const;

    // RVA: 0x7C | Ordinal: 125
        void map2Window(class osg::Vec2d const &);

    // RVA: 0x7E | Ordinal: 127
        void parse(void);

    // RVA: 0x82 | Ordinal: 131
        void render(class uiBaseShader *);

    // RVA: 0x83 | Ordinal: 132
        void renderGeometry(class uiBaseShader *);

    // RVA: 0x84 | Ordinal: 133
        void renderText(class uiBaseShader *);

    // RVA: 0x88 | Ordinal: 137
        void setAtmo(class Weather::IAtmosphere *);

    // RVA: 0x8E | Ordinal: 143
        void setState(bool);

    // RVA: 0x95 | Ordinal: 150
        void textUpdate(void);

    // RVA: 0x98 | Ordinal: 153
        void updateMapPoint(class osg::Vec2d const &);

    // RVA: 0x14 | Ordinal: 21
        void _WindyForMap(void);
};

} // namespace Weather

// DCS_OPS_RE_WEATHER.DLL_WINDYFORMAP_HPP
