#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: CoordinateOperation
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace operation {

class CoordinateOperation
{
public:

    // RVA: 0x14F | Ordinal: 336
        void coordinateOperationAccuracies(void) const;

    // RVA: 0x28D | Ordinal: 654
        void hasBallparkTransformation(void) const;

    // RVA: 0x29B | Ordinal: 668
        void interpolationCRS(void) const;

    // RVA: 0x2AD | Ordinal: 686
        void isPROJInstantiable(class std::shared_ptr<class osgeo::proj::io::DatabaseContext> const &, bool) const;

    // RVA: 0x2C6 | Ordinal: 711
        void normalizeForVisualization(void) const;

    // RVA: 0x2CC | Ordinal: 717
        void operationVersion(void) const;

    // RVA: 0x328 | Ordinal: 809
        void shallowClone(void) const;

    // RVA: 0x32A | Ordinal: 811
        void sourceCRS(void) const;

    // RVA: 0x32C | Ordinal: 813
        void sourceCoordinateEpoch(void) const;

    // RVA: 0x33B | Ordinal: 828
        void targetCRS(void) const;

    // RVA: 0x33D | Ordinal: 830
        void targetCoordinateEpoch(void) const;

    // RVA: 0x43 | Ordinal: 68
        void _CoordinateOperation(void);
};

} // namespace operation
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_COORDINATEOPERATION_HPP
