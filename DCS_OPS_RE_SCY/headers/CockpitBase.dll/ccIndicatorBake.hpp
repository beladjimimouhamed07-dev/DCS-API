#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccIndicatorBake
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccIndicatorBake
{
public:

    // RVA: 0x82E | Ordinal: 2095
        void OnBeginFrame(void);

    // RVA: 0x90C | Ordinal: 2317
        void addSource(int, int, int);

    // RVA: 0x96B | Ordinal: 2412
        void bakeDeclare(struct cockpit::bakeDeclareData const &);

    // RVA: 0x202 | Ordinal: 515
        void ccIndicatorBake(void);

    // RVA: 0x1155 | Ordinal: 4438
        void init(class cockpit::ccCockpitContext *, char const *, char const *, enum cockpit::IndBakePostEff, int);

    // RVA: 0x178D | Ordinal: 6030
        void setPosteffectParams(int, float, float, float);

    // RVA: 0x178E | Ordinal: 6031
        void setPosteffectParams(int, float, float, float, float);

    // RVA: 0x381 | Ordinal: 898
        void _ccIndicatorBake(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCINDICATORBAKE_HPP
