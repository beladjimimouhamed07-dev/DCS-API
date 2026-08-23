#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: QuantizedUnitVec
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace math {

class QuantizedUnitVec
{
public:

    // RVA: 0x35B | Ordinal: 860
        void QuantizedUnitVec(void);

    // RVA: 0x65E | Ordinal: 1631
        void flipSignBits(unsigned short &);

    // RVA: 0x9C6 | Ordinal: 2503
        void unpack(unsigned short);
};

} // namespace math
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_QUANTIZEDUNITVEC_HPP
