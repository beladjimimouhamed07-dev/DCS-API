#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FMBase.dll
// Class: THelicopter
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace BalanceFM {

class THelicopter
{
public:

    // RVA: 0x380 | Ordinal: 897
        void AirCushion(void);

    // RVA: 0x381 | Ordinal: 898
        void Angles(void);

    // RVA: 0x386 | Ordinal: 903
        void Autopilot(float);

    // RVA: 0x387 | Ordinal: 904
        void Booster(float);

    // RVA: 0x389 | Ordinal: 906
        void Check(void);

    // RVA: 0x38A | Ordinal: 907
        void Control(double);

    // RVA: 0x38B | Ordinal: 908
        void CoreEquations(void);

    // RVA: 0x392 | Ordinal: 915
        void Integrate(float);

    // RVA: 0x39A | Ordinal: 923
        void LoadFromFileText(char *);

    // RVA: 0x39B | Ordinal: 924
        void MainRotorDelay(float);

    // RVA: 0x39C | Ordinal: 925
        void Mashine(float);

    // RVA: 0x3A4 | Ordinal: 933
        void Run(float);

    // RVA: 0x3AB | Ordinal: 940
        void SetWheelBrake(double);

    // RVA: 0x3AF | Ordinal: 944
        void Stability(float);

    // RVA: 0x3B0 | Ordinal: 945
        void Surface(float);

    // RVA: 0x146 | Ordinal: 327
        void THelicopter(class EagleFM::BalanceFM::THelicopter const &);

    // RVA: 0x147 | Ordinal: 328
        void THelicopter(class EagleFM::BalanceFM::THelicopterData *);

    // RVA: 0x3B2 | Ordinal: 947
        void Trim(void);

    // RVA: 0x3B3 | Ordinal: 948
        void UpdateCoefs(void);

    // RVA: 0x689 | Ordinal: 1674
        void getShassy(void);

    // RVA: 0x1E0 | Ordinal: 481
        void _THelicopter(void);
};

} // namespace BalanceFM
} // namespace EagleFM

// DCS_OPS_RE_FMBASE.DLL_THELICOPTER_HPP
