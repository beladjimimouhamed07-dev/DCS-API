#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avMovingMapPoint
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avMovingMapPoint
{
public:

    // RVA: 0x163 | Ordinal: 356
        void avMovingMapPoint(class cockpit::avMovingMapPoint const &);

    // RVA: 0x164 | Ordinal: 357
        void avMovingMapPoint(void);

    // RVA: 0xCFC | Ordinal: 3325
        void getHeight(void);

    // RVA: 0xD6A | Ordinal: 3435
        void getName(void) const;

    // RVA: 0xD74 | Ordinal: 3445
        void getNumber(void) const;

    // RVA: 0xD9D | Ordinal: 3486
        void getPoint(void) const;

    // RVA: 0xDA2 | Ordinal: 3491
        void getPosition(void) const;

    // RVA: 0xE16 | Ordinal: 3607
        void getSubType(void) const;

    // RVA: 0xE32 | Ordinal: 3635
        void getType(void) const;

    // RVA: 0x1289 | Ordinal: 4746
        void isSystem(void) const;

    // RVA: 0x1729 | Ordinal: 5930
        void setHeight(double);

    // RVA: 0x1762 | Ordinal: 5987
        void setName(class ed::basic_string<char> const &);

    // RVA: 0x1763 | Ordinal: 5988
        void setNameByNumber(int, char const *);

    // RVA: 0x1764 | Ordinal: 5989
        void setNameRaw(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x1769 | Ordinal: 5994
        void setNumber(int);

    // RVA: 0x1774 | Ordinal: 6005
        void setOrientedBox(class osg::BoundingBoxImpl<class osg::Vec3f> const &);

    // RVA: 0x1788 | Ordinal: 6025
        void setPoint(class osg::Vec3d const &);

    // RVA: 0x178C | Ordinal: 6029
        void setPosition(class wPosition3<double> const &);

    // RVA: 0x17A0 | Ordinal: 6049
        void setRotate(float);

    // RVA: 0x17A1 | Ordinal: 6050
        void setRotatePoint(class osg::Vec3d const &, float);

    // RVA: 0x17C2 | Ordinal: 6083
        void setSubType(unsigned int);

    // RVA: 0x17C5 | Ordinal: 6086
        void setSystem(bool);

    // RVA: 0x17E1 | Ordinal: 6114
        void setType(unsigned int);

    // RVA: 0x32B | Ordinal: 812
        void _avMovingMapPoint(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVMOVINGMAPPOINT_HPP
