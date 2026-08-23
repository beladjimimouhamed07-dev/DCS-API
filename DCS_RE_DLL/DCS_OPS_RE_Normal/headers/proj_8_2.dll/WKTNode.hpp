#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: WKTNode
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace io {

class WKTNode
{
public:

    // RVA: 0x30 | Ordinal: 49
        void WKTNode(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x111 | Ordinal: 274
        void addChild(class dropbox::oxygen::nn<class std::unique_ptr<class osgeo::proj::io::WKTNode, struct std::default_delete<class osgeo::proj::io::WKTNode>>> &&);

    // RVA: 0x13C | Ordinal: 317
        void children(void) const;

    // RVA: 0x156 | Ordinal: 343
        void countChildrenOfName(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &) const;

    // RVA: 0x1C8 | Ordinal: 457
        void createFrom(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, unsigned __int64);

    // RVA: 0x2B5 | Ordinal: 694
        void lookForChild(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &, int) const;

    // RVA: 0x347 | Ordinal: 840
        void toString(void) const;

    // RVA: 0x355 | Ordinal: 854
        void value(void) const;

    // RVA: 0xA2 | Ordinal: 163
        void _WKTNode(void);
};

} // namespace io
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_WKTNODE_HPP
