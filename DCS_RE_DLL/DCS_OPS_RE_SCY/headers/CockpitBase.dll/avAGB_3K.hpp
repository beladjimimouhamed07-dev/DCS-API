#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avAGB_3K
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avAGB_3K
{
public:

    // RVA: 0x86A | Ordinal: 2155
        void SetCommand(int, float);

    // RVA: 0xB3 | Ordinal: 180
        void avAGB_3K(void);

    // RVA: 0xA31 | Ordinal: 2610
        void checkAnimationConditions(int, int, float &);

    // RVA: 0xAF8 | Ordinal: 2809
        void connect_electric(class EagleFM::Elec::ItemBase &);

    // RVA: 0xC93 | Ordinal: 3220
        void getElecPower(void) const;

    // RVA: 0x14CA | Ordinal: 5323
        void post_initialize(void);

    // RVA: 0x15A3 | Ordinal: 5540
        void release(void);

    // RVA: 0x16E7 | Ordinal: 5864
        void setElecPower(bool);

    // RVA: 0x1A64 | Ordinal: 6757
        void turn_off_correction(bool);

    // RVA: 0x1A94 | Ordinal: 6805
        void update(void);

    // RVA: 0x2D1 | Ordinal: 722
        void _avAGB_3K(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVAGB_3K_HPP
