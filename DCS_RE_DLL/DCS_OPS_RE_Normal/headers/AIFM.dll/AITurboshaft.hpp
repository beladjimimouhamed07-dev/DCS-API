#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: AIFM.dll
// Class: AITurboshaft
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace AIFM {

class AITurboshaft
{
public:

    // RVA: 0x1C | Ordinal: 29
        void AITurboshaft(class EagleFM::AIFM::AITurboshaft &&);

    // RVA: 0x1D | Ordinal: 30
        void AITurboshaft(class EagleFM::AIFM::AITurboshaft const &);

    // RVA: 0x1E | Ordinal: 31
        void AITurboshaft(class EagleFM::DynamicBody *);

    // RVA: 0x1F | Ordinal: 32
        void AITurboshaft(class EagleFM::DynamicBody *, class EagleFM::AIFM::AITurboshaftInit const &);

    // RVA: 0x64 | Ordinal: 101
        void doSimulate(void);

    // RVA: 0x7A | Ordinal: 123
        void getFuelFlow(void) const;

    // RVA: 0x7F | Ordinal: 128
        void getMode(void) const;

    // RVA: 0x88 | Ordinal: 137
        void getPower(void) const;

    // RVA: 0x8A | Ordinal: 139
        void getRelativeRPM(void) const;

    // RVA: 0x118 | Ordinal: 281
        void init(class IwoLA *, int, class EagleFM::AustereFM::Propulsion::AustereEngine *, class EagleFM::AIFM::AITurboshaftInit const &);

    // RVA: 0x13B | Ordinal: 316
        void setMode(enum EagleFM::AustereFM::Propulsion::EngineOperationalModes);

    // RVA: 0x28 | Ordinal: 41
        void _AITurboshaft(void);
};

} // namespace AIFM
} // namespace EagleFM

// DCS_OPS_RE_AIFM.DLL_AITURBOSHAFT_HPP
