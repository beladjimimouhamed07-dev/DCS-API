#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: CoordinateOperationContext
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace operation {

class CoordinateOperationContext
{
public:

    // RVA: 0x164 | Ordinal: 357
        void create(class std::shared_ptr<class osgeo::proj::io::AuthorityFactory> const &, class std::shared_ptr<class osgeo::proj::metadata::Extent> const &, double);

    // RVA: 0x25E | Ordinal: 607
        void getAllowBallparkTransformations(void) const;

    // RVA: 0x25F | Ordinal: 608
        void getAllowUseIntermediateCRS(void) const;

    // RVA: 0x260 | Ordinal: 609
        void getAreaOfInterest(void) const;

    // RVA: 0x266 | Ordinal: 615
        void getAuthorityFactory(void) const;

    // RVA: 0x26B | Ordinal: 620
        void getDesiredAccuracy(void) const;

    // RVA: 0x26C | Ordinal: 621
        void getDiscardSuperseded(void) const;

    // RVA: 0x271 | Ordinal: 626
        void getGridAvailabilityUse(void) const;

    // RVA: 0x273 | Ordinal: 628
        void getIntermediateCRS(void) const;

    // RVA: 0x27A | Ordinal: 635
        void getSourceAndTargetCRSExtentUse(void) const;

    // RVA: 0x27B | Ordinal: 636
        void getSpatialCriterion(void) const;

    // RVA: 0x27F | Ordinal: 640
        void getUsePROJAlternativeGridNames(void) const;

    // RVA: 0x30B | Ordinal: 780
        void setAllowBallparkTransformations(bool);

    // RVA: 0x30D | Ordinal: 782
        void setAllowUseIntermediateCRS(enum osgeo::proj::operation::CoordinateOperationContext::IntermediateCRSUse);

    // RVA: 0x30E | Ordinal: 783
        void setAreaOfInterest(class std::shared_ptr<class osgeo::proj::metadata::Extent> const &);

    // RVA: 0x311 | Ordinal: 786
        void setDesiredAccuracy(double);

    // RVA: 0x312 | Ordinal: 787
        void setDiscardSuperseded(bool);

    // RVA: 0x313 | Ordinal: 788
        void setGridAvailabilityUse(enum osgeo::proj::operation::CoordinateOperationContext::GridAvailabilityUse);

    // RVA: 0x317 | Ordinal: 792
        void setIntermediateCRS(class std::vector<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>, class std::allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>>>> const &);

    // RVA: 0x31F | Ordinal: 800
        void setSourceAndTargetCRSExtentUse(enum osgeo::proj::operation::CoordinateOperationContext::SourceTargetCRSExtentUse);

    // RVA: 0x320 | Ordinal: 801
        void setSpatialCriterion(enum osgeo::proj::operation::CoordinateOperationContext::SpatialCriterion);

    // RVA: 0x325 | Ordinal: 806
        void setUsePROJAlternativeGridNames(bool);

    // RVA: 0x44 | Ordinal: 69
        void _CoordinateOperationContext(void);
};

} // namespace operation
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_COORDINATEOPERATIONCONTEXT_HPP
