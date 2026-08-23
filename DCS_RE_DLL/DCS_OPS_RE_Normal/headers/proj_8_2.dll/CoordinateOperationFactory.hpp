#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: CoordinateOperationFactory
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace operation {

class CoordinateOperationFactory
{
public:

    // RVA: 0x165 | Ordinal: 358
        void create(void);

    // RVA: 0x209 | Ordinal: 522
        void createOperation(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &) const;

    // RVA: 0x20A | Ordinal: 523
        void createOperations(class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::crs::CRS>> const &, class dropbox::oxygen::nn<class std::unique_ptr<class osgeo::proj::operation::CoordinateOperationContext, struct std::default_delete<class osgeo::proj::operation::CoordinateOperationContext>>> const &) const;

    // RVA: 0x45 | Ordinal: 70
        void _CoordinateOperationFactory(void);
};

} // namespace operation
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_COORDINATEOPERATIONFACTORY_HPP
