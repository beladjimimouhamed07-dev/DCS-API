#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: FW190Base.dll
// Class: FW190OxygenSystem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace FW190 {

class FW190OxygenSystem
{
public:

    // RVA: 0xB | Ordinal: 12
        void FW190OxygenSystem(class EagleFM::FW190::FW190OxygenSystem const &);

    // RVA: 0xC | Ordinal: 13
        void FW190OxygenSystem(class EagleFM::DynamicBody *, class EagleFM::Sensor **, class PropertyTable_<double> &, class EagleFM::AerodyneFM *);

    // RVA: 0x55 | Ordinal: 86
        void doSimulate(void);

    // RVA: 0x7C | Ordinal: 125
        void getOxygenConsumption(float) const;

    // RVA: 0x9D | Ordinal: 158
        void initAirStart(void);

    // RVA: 0xA2 | Ordinal: 163
        void initColdStart(void);

    // RVA: 0xA8 | Ordinal: 169
        void initHotStart(void);

    // RVA: 0xB1 | Ordinal: 178
        void initialize(void);

    // RVA: 0xB2 | Ordinal: 179
        void isDamaged(void) const;

    // RVA: 0xBB | Ordinal: 188
        void repair(void);

    // RVA: 0xD4 | Ordinal: 213
        void setCylinderDamage(char);

    // RVA: 0xE7 | Ordinal: 232
        void setSensors(void);

    // RVA: 0xF7 | Ordinal: 248
        void startFailure(enum WorldGeneral::Failures, class ed::basic_string<char> const &);

    // RVA: 0x1C | Ordinal: 29
        void _FW190OxygenSystem(void);
};

} // namespace FW190
} // namespace EagleFM

// DCS_OPS_RE_FW190BASE.DLL_FW190OXYGENSYSTEM_HPP
