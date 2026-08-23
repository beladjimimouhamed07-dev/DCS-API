#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: DatumEnsemble
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace datum {

class DatumEnsemble
{
public:

    // RVA: 0x127 | Ordinal: 296
        void asDatum(class std::shared_ptr<class osgeo::proj::io::DatabaseContext> const &) const;

    // RVA: 0x16B | Ordinal: 364
        void create(class osgeo::proj::util::PropertyMap const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::datum::Datum>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::datum::Datum>>>> const &, class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::metadata::PositionalAccuracy>> const &);

    // RVA: 0x23C | Ordinal: 573
        void datums(void) const;

    // RVA: 0x2EC | Ordinal: 749
        void positionalAccuracy(void) const;

    // RVA: 0x4D | Ordinal: 78
        void _DatumEnsemble(void);
};

} // namespace datum
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_DATUMENSEMBLE_HPP
