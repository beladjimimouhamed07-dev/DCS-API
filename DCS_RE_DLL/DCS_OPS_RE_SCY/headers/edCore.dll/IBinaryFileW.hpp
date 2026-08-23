#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: IBinaryFileW
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace io {

class IBinaryFileW
{
public:

    // RVA: 0x404 | Ordinal: 1029
        void writeBoundingBoxf(class osg::BoundingBoxImpl<class osg::Vec3f> const &);

    // RVA: 0x405 | Ordinal: 1030
        void writeDouble(double);

    // RVA: 0x408 | Ordinal: 1033
        void writeFloat(float);

    // RVA: 0x40A | Ordinal: 1035
        void writeMatrixd(class osg::Matrixd const &);

    // RVA: 0x40B | Ordinal: 1036
        void writeMatrixf(class osg::Matrixf const &);

    // RVA: 0x40C | Ordinal: 1037
        void writeQuatd(class osg::Quatd const &);

    // RVA: 0x40D | Ordinal: 1038
        void writeQuatf(class osg::Quatf const &);

    // RVA: 0x40E | Ordinal: 1039
        void writeSTLString(class ed::basic_string<char> const &);

    // RVA: 0x40F | Ordinal: 1040
        void writeUint16(unsigned short);

    // RVA: 0x410 | Ordinal: 1041
        void writeUint32(unsigned int);

    // RVA: 0x411 | Ordinal: 1042
        void writeUint64(unsigned __int64);

    // RVA: 0x412 | Ordinal: 1043
        void writeUint8(unsigned char);

    // RVA: 0x413 | Ordinal: 1044
        void writeVec2d(class osg::Vec2d const &);

    // RVA: 0x414 | Ordinal: 1045
        void writeVec2f(class osg::Vec2f const &);

    // RVA: 0x415 | Ordinal: 1046
        void writeVec3d(class osg::Vec3d const &);

    // RVA: 0x416 | Ordinal: 1047
        void writeVec3f(class osg::Vec3f const &);

    // RVA: 0x417 | Ordinal: 1048
        void writeVec4d(class osg::Vec4d const &);

    // RVA: 0x418 | Ordinal: 1049
        void writeVec4f(class osg::Vec4f const &);
};

} // namespace io

// DCS_OPS_RE_EDCORE.DLL_IBINARYFILEW_HPP
