#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Splitter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Cooling {

class Splitter
{
public:

    // RVA: 0x135 | Ordinal: 310
        void Splitter(class EagleFM::Cooling::Splitter &&);

    // RVA: 0x136 | Ordinal: 311
        void Splitter(class EagleFM::Cooling::Splitter const &);

    // RVA: 0x137 | Ordinal: 312
        void Splitter(void);

    // RVA: 0x46B | Ordinal: 1132
        void connectAfter(class EagleFM::Cooling::IElement *);

    // RVA: 0x498 | Ordinal: 1177
        void doSimulate(double);

    // RVA: 0x6C7 | Ordinal: 1736
        void getValve(int) const;

    // RVA: 0x89A | Ordinal: 2203
        void setLiquidType(enum EagleFM::Cooling::LiquidType);

    // RVA: 0x91A | Ordinal: 2331
        void setValve(int, bool);

    // RVA: 0x1DB | Ordinal: 476
        void _Splitter(void);
};

} // namespace Cooling
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_SPLITTER_HPP
