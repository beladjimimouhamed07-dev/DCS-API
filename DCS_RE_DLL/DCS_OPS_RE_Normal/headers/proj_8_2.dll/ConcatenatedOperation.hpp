#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: ConcatenatedOperation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace operation {

class ConcatenatedOperation
{
public:

    // RVA: 0x161 | Ordinal: 354
        void create(class osgeo::proj::util::PropertyMap const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::CoordinateOperation>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::CoordinateOperation>>>> const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>>>> const &);

    // RVA: 0x1B1 | Ordinal: 434
        void createComputeMetadata(class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::CoordinateOperation>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::CoordinateOperation>>>> const &, bool);

    // RVA: 0x28A | Ordinal: 651
        void gridsNeeded(class std::shared_ptr<class osgeo::proj::io::DatabaseContext> const &, bool) const;

    // RVA: 0x2A0 | Ordinal: 673
        void inverse(void) const;

    // RVA: 0x2CD | Ordinal: 718
        void operations(void) const;

    // RVA: 0x41 | Ordinal: 66
        void _ConcatenatedOperation(void);
};

} // namespace operation
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_CONCATENATEDOPERATION_HPP
