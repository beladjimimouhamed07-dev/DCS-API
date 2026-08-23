#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: OperationMethod
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace operation {

class OperationMethod
{
public:

    // RVA: 0x184 | Ordinal: 389
        void create(class osgeo::proj::util::PropertyMap const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::GeneralOperationParameter>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::GeneralOperationParameter>>>> const &);

    // RVA: 0x185 | Ordinal: 390
        void create(class osgeo::proj::util::PropertyMap const &, class std::vector<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::OperationParameter>>, class std::allocator<class dropbox::oxygen::nn<class std::shared_ptr<class osgeo::proj::operation::OperationParameter>>>> const &);

    // RVA: 0x258 | Ordinal: 601
        void formula(void) const;

    // RVA: 0x259 | Ordinal: 602
        void formulaCitation(void) const;

    // RVA: 0x26E | Ordinal: 623
        void getEPSGCode(void) const;

    // RVA: 0x2D6 | Ordinal: 727
        void parameters(void) const;

    // RVA: 0x7E | Ordinal: 127
        void _OperationMethod(void);
};

} // namespace operation
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_OPERATIONMETHOD_HPP
