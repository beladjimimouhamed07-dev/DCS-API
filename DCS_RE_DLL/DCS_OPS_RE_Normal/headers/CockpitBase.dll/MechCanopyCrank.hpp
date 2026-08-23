#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: MechCanopyCrank
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class MechCanopyCrank
{
public:

    // RVA: 0x6B | Ordinal: 108
        void MechCanopyCrank(class cockpit::avDevice *, double, class std::function<void __cdecl(void)>);

    // RVA: 0x822 | Ordinal: 2083
        void NextEvent(void);

    // RVA: 0x9F4 | Ordinal: 2549
        void can_move(char) const;

    // RVA: 0x9F6 | Ordinal: 2551
        void canopyDropped(void);

    // RVA: 0xA62 | Ordinal: 2659
        void check_animation(float &);

    // RVA: 0xB4D | Ordinal: 2894
        void cur_value(void) const;

    // RVA: 0xC0D | Ordinal: 3086
        void force(bool);

    // RVA: 0xC59 | Ordinal: 3162
        void getCanopyCrankDegradeK(void) const;

    // RVA: 0xEF2 | Ordinal: 3827
        void get_crank_value(void) const;

    // RVA: 0x10DE | Ordinal: 4319
        void get_turns(void) const;

    // RVA: 0x1350 | Ordinal: 4945
        void l_read(class Lua::Config &, char const *);

    // RVA: 0x1410 | Ordinal: 5137
        void moveCanopy(void);

    // RVA: 0x16AD | Ordinal: 5806
        void setCanopyMoveDirection(char);

    // RVA: 0x1707 | Ordinal: 5896
        void setFM_proxy(class cockpit::avFMProxyBase *);

    // RVA: 0x1760 | Ordinal: 5985
        void setMovementDegradationValues(double, double, double, double);

    // RVA: 0x2B1 | Ordinal: 690
        void _MechCanopyCrank(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_MECHCANOPYCRANK_HPP
