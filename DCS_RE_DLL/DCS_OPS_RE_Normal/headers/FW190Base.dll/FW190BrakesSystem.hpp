#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FW190Base.dll
// Class: FW190BrakesSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace FW190 {

class FW190BrakesSystem
{
public:

    // RVA: 0x0 | Ordinal: 1
        void FW190BrakesSystem(class EagleFM::FW190::FW190BrakesSystem &&);

    // RVA: 0x1 | Ordinal: 2
        void FW190BrakesSystem(class EagleFM::FW190::FW190BrakesSystem const &);

    // RVA: 0x2 | Ordinal: 3
        void FW190BrakesSystem(class EagleFM::AerodyneFM *);

    // RVA: 0x52 | Ordinal: 83
        void doSimulate(void);

    // RVA: 0x5F | Ordinal: 96
        void getBrakeCylinder(unsigned int);

    // RVA: 0x99 | Ordinal: 154
        void initAirStart(void);

    // RVA: 0xA4 | Ordinal: 165
        void initHotStart(void);

    // RVA: 0x17 | Ordinal: 24
        void _FW190BrakesSystem(void);
};

} // namespace FW190
} // namespace EagleFM

// DCS_OPS_RE_FW190BASE.DLL_FW190BRAKESSYSTEM_HPP
