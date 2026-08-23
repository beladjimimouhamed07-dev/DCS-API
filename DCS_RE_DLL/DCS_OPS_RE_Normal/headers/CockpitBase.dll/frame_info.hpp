#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: frame_info
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class frame_info
{
public:

    // RVA: 0x26B | Ordinal: 620
        void frame_info(struct cockpit::frame_info &&);

    // RVA: 0x26C | Ordinal: 621
        void frame_info(struct cockpit::frame_info const &);

    // RVA: 0x26D | Ordinal: 622
        void frame_info(void);

    // RVA: 0x1BA9 | Ordinal: 7082
        void zeroize_time(void);

    // RVA: 0x3B2 | Ordinal: 947
        void _frame_info(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_FRAME_INFO_HPP
