#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: AIFM.dll
// Class: AIPlaneEngine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace AIFM {

class AIPlaneEngine
{
public:

    // RVA: 0x11 | Ordinal: 18
        void AIPlaneEngine(class EagleFM::AIFM::AIPlaneEngine &&);

    // RVA: 0x12 | Ordinal: 19
        void AIPlaneEngine(class EagleFM::AIFM::AIPlaneEngine const &);

    // RVA: 0x13 | Ordinal: 20
        void AIPlaneEngine(class EagleFM::AIFM::AIPlaneFM const &);

    // RVA: 0x4E | Ordinal: 79
        void add_nozzle(struct EngineNozzlePos const &);

    // RVA: 0xC8 | Ordinal: 201
        void get_afterburner_flag(void) const;

    // RVA: 0xD2 | Ordinal: 211
        void get_drag(void) const;

    // RVA: 0xDB | Ordinal: 220
        void get_fuel_rate(void) const;

    // RVA: 0xED | Ordinal: 238
        void get_nozzles(void) const;

    // RVA: 0xF6 | Ordinal: 247
        void get_pf(void) const;

    // RVA: 0xFA | Ordinal: 251
        void get_pm(void) const;

    // RVA: 0xFF | Ordinal: 256
        void get_relative_rpm(void) const;

    // RVA: 0x106 | Ordinal: 263
        void get_throttle(void) const;

    // RVA: 0x107 | Ordinal: 264
        void get_thrust(void) const;

    // RVA: 0x122 | Ordinal: 291
        void init_hot_start(void);

    // RVA: 0x156 | Ordinal: 343
        void set_status(enum EagleFM::AIFM::AIPlaneEngine::engine_status_);

    // RVA: 0x157 | Ordinal: 344
        void set_throttle(double);

    // RVA: 0x15B | Ordinal: 348
        void simulate(float);

    // RVA: 0x25 | Ordinal: 38
        void _AIPlaneEngine(void);
};

} // namespace AIFM
} // namespace EagleFM

// DCS_OPS_RE_AIFM.DLL_AIPLANEENGINE_HPP
