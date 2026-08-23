#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: WKTFormatter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace io {

class WKTFormatter
{
public:

    // RVA: 0x1A3 | Ordinal: 420
        void create(class dropbox::oxygen::nn<class std::unique_ptr<class osgeo::proj::io::WKTFormatter, struct std::default_delete<class osgeo::proj::io::WKTFormatter>>> const &);

    // RVA: 0x1A4 | Ordinal: 421
        void create(enum osgeo::proj::io::WKTFormatter::Convention, class std::shared_ptr<class osgeo::proj::io::DatabaseContext>);

    // RVA: 0x2A5 | Ordinal: 678
        void isAllowedEllipsoidalHeightAsVerticalCRS(void) const;

    // RVA: 0x2B0 | Ordinal: 689
        void isStrict(void) const;

    // RVA: 0x30C | Ordinal: 781
        void setAllowEllipsoidalHeightAsVerticalCRS(bool);

    // RVA: 0x316 | Ordinal: 791
        void setIndentationWidth(int);

    // RVA: 0x31B | Ordinal: 796
        void setMultiLine(bool);

    // RVA: 0x31C | Ordinal: 797
        void setOutputAxis(enum osgeo::proj::io::WKTFormatter::OutputAxisRule);

    // RVA: 0x31D | Ordinal: 798
        void setOutputId(bool);

    // RVA: 0x321 | Ordinal: 802
        void setStrict(bool);

    // RVA: 0x329 | Ordinal: 810
        void simulCurNodeHasId(void);

    // RVA: 0x346 | Ordinal: 839
        void toString(void) const;

    // RVA: 0xA1 | Ordinal: 162
        void _WKTFormatter(void);
};

} // namespace io
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_WKTFORMATTER_HPP
