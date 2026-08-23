#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: CircuitBreakerAnim
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace electrics {

class CircuitBreakerAnim
{
public:

    // RVA: 0x10 | Ordinal: 17
        void CircuitBreakerAnim(class EagleFM::dcswwii::electrics::CircuitBreakerAnim const &);

    // RVA: 0x11 | Ordinal: 18
        void CircuitBreakerAnim(double, double);

    // RVA: 0x34F | Ordinal: 848
        void doTrip(void);

    // RVA: 0x52B | Ordinal: 1324
        void set(class cockpit::avDevice *, int, int);

    // RVA: 0xE7 | Ordinal: 232
        void _CircuitBreakerAnim(void);
};

} // namespace electrics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_CIRCUITBREAKERANIM_HPP
