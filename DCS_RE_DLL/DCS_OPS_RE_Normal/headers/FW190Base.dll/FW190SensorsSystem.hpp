#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FW190Base.dll
// Class: FW190SensorsSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace FW190 {

class FW190SensorsSystem
{
public:

    // RVA: 0xD | Ordinal: 14
        void FW190SensorsSystem(class EagleFM::FW190::FW190SensorsSystem const &);

    // RVA: 0xE | Ordinal: 15
        void FW190SensorsSystem(class EagleFM::DynamicBody *, class EagleFM::Elec::Wire *);

    // RVA: 0x56 | Ordinal: 87
        void doSimulate(void);

    // RVA: 0x5B | Ordinal: 92
        void getAtmoPressureHg(void) const;

    // RVA: 0x77 | Ordinal: 120
        void getIsDamaged(void) const;

    // RVA: 0x82 | Ordinal: 131
        void getSensorOutput(int) const;

    // RVA: 0x84 | Ordinal: 133
        void getSensors(void);

    // RVA: 0xBC | Ordinal: 189
        void repair(void);

    // RVA: 0xCE | Ordinal: 207
        void setAtmoPressureHg(double);

    // RVA: 0xD5 | Ordinal: 214
        void setDamagePito(double);

    // RVA: 0xEB | Ordinal: 236
        void setUnderlyingSurface(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0x1D | Ordinal: 30
        void _FW190SensorsSystem(void);
};

} // namespace FW190
} // namespace EagleFM

// DCS_OPS_RE_FW190BASE.DLL_FW190SENSORSSYSTEM_HPP
