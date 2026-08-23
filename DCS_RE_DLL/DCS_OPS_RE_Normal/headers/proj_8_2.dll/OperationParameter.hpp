#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: proj_8_2.dll
// Class: OperationParameter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace osgeo {
namespace proj {
namespace operation {

class OperationParameter
{
public:

    // RVA: 0x186 | Ordinal: 391
        void create(class osgeo::proj::util::PropertyMap const &);

    // RVA: 0x26F | Ordinal: 624
        void getEPSGCode(void) const;

    // RVA: 0x275 | Ordinal: 630
        void getNameForEPSGCode(int);

    // RVA: 0x7F | Ordinal: 128
        void _OperationParameter(void);
};

} // namespace operation
} // namespace proj
} // namespace osgeo

// DCS_OPS_RE_PROJ_8_2.DLL_OPERATIONPARAMETER_HPP
