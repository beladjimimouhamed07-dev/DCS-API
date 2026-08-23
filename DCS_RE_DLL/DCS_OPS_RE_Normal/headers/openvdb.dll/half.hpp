#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: openvdb.dll
// Class: half
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace openvdb {
namespace v9_0 {
namespace math {
namespace internal {

class half
{
public:

    // RVA: 0x58F | Ordinal: 1424
        void bits(void) const;

    // RVA: 0x5D6 | Ordinal: 1495
        void convert(int);

    // RVA: 0x3A1 | Ordinal: 930
        void half(float);

    // RVA: 0x751 | Ordinal: 1874
        void isDenormalized(void) const;

    // RVA: 0x75B | Ordinal: 1884
        void isFinite(void) const;

    // RVA: 0x763 | Ordinal: 1892
        void isInfinity(void) const;

    // RVA: 0x775 | Ordinal: 1910
        void isNan(void) const;

    // RVA: 0x776 | Ordinal: 1911
        void isNegative(void) const;

    // RVA: 0x777 | Ordinal: 1912
        void isNormalized(void) const;

    // RVA: 0x791 | Ordinal: 1938
        void isZero(void) const;

    // RVA: 0x7D6 | Ordinal: 2007
        void negInf(void);

    // RVA: 0x7E2 | Ordinal: 2019
        void overflow(void);

    // RVA: 0x7E7 | Ordinal: 2024
        void posInf(void);

    // RVA: 0x840 | Ordinal: 2113
        void qNan(void);

    // RVA: 0x8AA | Ordinal: 2219
        void round(unsigned int) const;

    // RVA: 0x8AB | Ordinal: 2220
        void sNan(void);

    // RVA: 0x8C7 | Ordinal: 2248
        void setBits(unsigned short);
};

} // namespace internal
} // namespace math
} // namespace v9_0
} // namespace openvdb

// DCS_OPS_RE_OPENVDB.DLL_HALF_HPP
