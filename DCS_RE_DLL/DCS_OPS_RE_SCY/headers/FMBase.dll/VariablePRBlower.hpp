#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: VariablePRBlower
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {

class VariablePRBlower
{
public:

    // RVA: 0x15E | Ordinal: 351
        void VariablePRBlower(class EagleFM::VariablePRBlower &&);

    // RVA: 0x15F | Ordinal: 352
        void VariablePRBlower(class EagleFM::VariablePRBlower const &);

    // RVA: 0x160 | Ordinal: 353
        void VariablePRBlower(void);

    // RVA: 0x3F5 | Ordinal: 1014
        void calcCompressor(struct EagleFM::VariablePRBlower::BlowerCalcData &);

    // RVA: 0x5AA | Ordinal: 1451
        void getKadiabatic(void) const;

    // RVA: 0x5E1 | Ordinal: 1506
        void getNu(void) const;

    // RVA: 0x72F | Ordinal: 1840
        void init(double, double, double, double, class ed::vector<struct ed::array<double, 3>, class ed::allocator<struct ed::array<double, 3>>> &);

    // RVA: 0x936 | Ordinal: 2359
        void set_blower_speed(unsigned int);

    // RVA: 0x938 | Ordinal: 2361
        void set_control(double);

    // RVA: 0x9A8 | Ordinal: 2473
        void update_Nu(void);

    // RVA: 0x1E9 | Ordinal: 490
        void _VariablePRBlower(void);
};

} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_VARIABLEPRBLOWER_HPP
