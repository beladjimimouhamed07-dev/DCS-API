#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccLambdaGauge
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccLambdaGauge
{
public:

    // RVA: 0x209 | Ordinal: 522
        void ccLambdaGauge(class cockpit::ccLambdaGauge &&);

    // RVA: 0x20A | Ordinal: 523
        void ccLambdaGauge(class Lua::Config &, class std::function<float __cdecl(void)> const &);

    // RVA: 0x20B | Ordinal: 524
        void ccLambdaGauge(class cockpit::ccLambdaGauge const &);

    // RVA: 0x20C | Ordinal: 525
        void ccLambdaGauge(class std::function<float __cdecl(void)> const &);

    // RVA: 0x1AEE | Ordinal: 6895
        void update(class cockpit::ccMainPanel *);

    // RVA: 0x385 | Ordinal: 902
        void _ccLambdaGauge(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCLAMBDAGAUGE_HPP
