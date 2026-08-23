#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avADF
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avADF
{
public:

    // RVA: 0xAF | Ordinal: 176
        void avADF(class cockpit::avADF const &);

    // RVA: 0xB0 | Ordinal: 177
        void avADF(enum cockpit::ADF_Range);

    // RVA: 0x9B4 | Ordinal: 2485
        void calcBearing(double);

    // RVA: 0x9B5 | Ordinal: 2486
        void calcDirection(double);

    // RVA: 0xC50 | Ordinal: 3153
        void getBearing(void) const;

    // RVA: 0x1194 | Ordinal: 4501
        void initialize(class wRadioReceiver *, class Lua::Config &);

    // RVA: 0x1287 | Ordinal: 4744
        void isSignalReceived(void) const;

    // RVA: 0x140F | Ordinal: 5136
        void moveArrow(float, double);

    // RVA: 0x15A1 | Ordinal: 5538
        void release(void);

    // RVA: 0x179A | Ordinal: 6043
        void setReceiver(class wRadioReceiver *);

    // RVA: 0x1A30 | Ordinal: 6705
        void test(float, double);

    // RVA: 0x1A92 | Ordinal: 6803
        void update(double);

    // RVA: 0x2CF | Ordinal: 720
        void _avADF(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVADF_HPP
