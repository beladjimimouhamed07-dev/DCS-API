#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edCore.dll
// Class: IIR_Filter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Math {

class IIR_Filter
{
public:

    // RVA: 0x5C | Ordinal: 93
        void IIR_Filter(class Math::IIR_Filter const &);

    // RVA: 0x5D | Ordinal: 94
        void IIR_Filter(void);

    // RVA: 0x168 | Ordinal: 361
        void cleanNearestCascade(void);

    // RVA: 0x18E | Ordinal: 399
        void createNextCascade(class Math::IIR_Filter const &);

    // RVA: 0x18F | Ordinal: 400
        void createNextCascade(class Math::IIR_FilterCoefficients const &);

    // RVA: 0x208 | Ordinal: 521
        void getOutput(void) const;

    // RVA: 0x251 | Ordinal: 594
        void init(class Math::IIR_FilterCoefficients const &);

    // RVA: 0x260 | Ordinal: 609
        void initBPF(double, double, double, double);

    // RVA: 0x261 | Ordinal: 610
        void initBPFFromState(class Lua::Config &, char const *, double);

    // RVA: 0x262 | Ordinal: 611
        void initFromState(class Lua::Config &, char const *);

    // RVA: 0x263 | Ordinal: 612
        void initHPF_LPF(bool, double, double, double, double, double, bool);

    // RVA: 0x264 | Ordinal: 613
        void initHPF_LPF(bool, double, double, double, double, double);

    // RVA: 0x265 | Ordinal: 614
        void initHPF_LPFFromState(class Lua::Config &, char const *, double);

    // RVA: 0x266 | Ordinal: 615
        void initHPF_LPFbyPrototype(bool, int, enum Math::IIR_FilterPrototypes, double, double, double, double);

    // RVA: 0x267 | Ordinal: 616
        void initHPF_LPFbyPrototypeFromState(class Lua::Config &, char const *, double);

    // RVA: 0x3F2 | Ordinal: 1011
        void update(double);

    // RVA: 0xB9 | Ordinal: 186
        void _IIR_Filter(void);
};

} // namespace Math

// DCS_OPS_RE_EDCORE.DLL_IIR_FILTER_HPP
