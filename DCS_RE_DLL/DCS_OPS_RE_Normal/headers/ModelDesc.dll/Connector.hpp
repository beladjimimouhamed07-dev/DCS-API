#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ModelDesc.dll
// Class: Connector
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class Connector
{
public:

    // RVA: 0x20 | Ordinal: 33
        void getName(void) const;

    // RVA: 0x2A | Ordinal: 43
        void getPosition(class osg::Matrixd const &, class ed::vector<float, class ed::allocator128<float>> const &) const;

    // RVA: 0x2B | Ordinal: 44
        void getPosition(class osg::Matrixd const &, class ed::vector<float, class ed::allocator128<float>> const &, class osg::Matrixd &) const;

    // RVA: 0x2E | Ordinal: 47
        void getProperty(char const *, class ed::vector<float, class ed::allocator128<float>> const &, unsigned int &) const;

    // RVA: 0x2F | Ordinal: 48
        void getProperty(char const *, class ed::vector<float, class ed::allocator128<float>> const &, float &) const;

    // RVA: 0x30 | Ordinal: 49
        void getProperty(char const *, class ed::vector<float, class ed::allocator128<float>> const &, class osg::Vec2f &) const;

    // RVA: 0x31 | Ordinal: 50
        void getProperty(char const *, class ed::vector<float, class ed::allocator128<float>> const &, class osg::Vec3f &) const;

    // RVA: 0x32 | Ordinal: 51
        void getProperty(char const *, class ed::vector<float, class ed::allocator128<float>> const &, class osg::Vec4f &) const;

    // RVA: 0x33 | Ordinal: 52
        void getProperty(char const *, char **) const;

    // RVA: 0x3D | Ordinal: 62
        void getVisibility(class ed::vector<float, class ed::allocator128<float>> const &) const;
};

} // namespace model

// DCS_OPS_RE_MODELDESC.DLL_CONNECTOR_HPP
