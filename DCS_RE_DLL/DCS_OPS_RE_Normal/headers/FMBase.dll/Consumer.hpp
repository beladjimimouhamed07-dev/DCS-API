#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: Consumer
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace Elec {

class Consumer
{
public:

    // RVA: 0x4B | Ordinal: 76
        void Consumer(class EagleFM::Elec::Consumer const &);

    // RVA: 0x4C | Ordinal: 77
        void Consumer(double);

    // RVA: 0x4D | Ordinal: 78
        void Consumer(double, double);

    // RVA: 0x4E | Ordinal: 79
        void Consumer(double, double, char const *);

    // RVA: 0x4F | Ordinal: 80
        void Consumer(double, double, enum EagleFM::Elec::LoadUnits);

    // RVA: 0x50 | Ordinal: 81
        void Consumer(double, double, enum EagleFM::Elec::LoadUnits, char const *);

    // RVA: 0x51 | Ordinal: 82
        void Consumer(double, char const *);

    // RVA: 0x52 | Ordinal: 83
        void Consumer(void);

    // RVA: 0x46C | Ordinal: 1133
        void connectAfterMe(class EagleFM::Elec::ItemBase *);

    // RVA: 0x5DC | Ordinal: 1501
        void getNominalPower(void) const;

    // RVA: 0x5DE | Ordinal: 1503
        void getNominalVoltageChecked(void) const;

    // RVA: 0x74E | Ordinal: 1871
        void initLoadR(double, enum EagleFM::Elec::LoadUnits);

    // RVA: 0x7B0 | Ordinal: 1969
        void pushLoadAccumulator(class EagleFM::Elec::ItemBase *);

    // RVA: 0x89B | Ordinal: 2204
        void setLoadR(double);

    // RVA: 0x89C | Ordinal: 2205
        void setLoadR(double, enum EagleFM::Elec::LoadUnits);

    // RVA: 0x8B8 | Ordinal: 2233
        void setParams(class EagleFM::Elec::ConsumerParams const &);

    // RVA: 0x8B9 | Ordinal: 2234
        void setParams(double, bool, double, double, double);

    // RVA: 0x8BB | Ordinal: 2236
        void setParamsFromState(class Lua::Config &, char const *);

    // RVA: 0x99C | Ordinal: 2461
        void updateOwnVoltage(double);

    // RVA: 0x192 | Ordinal: 403
        void _Consumer(void);
};

} // namespace Elec
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_CONSUMER_HPP
