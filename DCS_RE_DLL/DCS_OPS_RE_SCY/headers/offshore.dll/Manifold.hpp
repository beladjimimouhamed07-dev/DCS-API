#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: offshore.dll
// Class: Manifold
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace offshore {

class Manifold
{
public:

    // RVA: 0x99 | Ordinal: 154
        void appendBoundingRect(class osg::RectImpl<class osg::Vec2d> const &);

    // RVA: 0x139 | Ordinal: 314
        void getBoundingRectForUV(void) const;

    // RVA: 0x14D | Ordinal: 334
        void getHash(void) const;

    // RVA: 0x16B | Ordinal: 364
        void getParam(class ed::basic_string<char> const &) const;

    // RVA: 0x16C | Ordinal: 365
        void getParam(class ed::basic_string<char> const &, double &) const;

    // RVA: 0x3C | Ordinal: 61
        void operator_(struct offshore::Manifold const &) const;

    // RVA: 0x22C | Ordinal: 557
        void setParam(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x22D | Ordinal: 558
        void setParam(class ed::basic_string<char> const &, double const &);
};

} // namespace offshore

// DCS_OPS_RE_OFFSHORE.DLL_MANIFOLD_HPP
