#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avAN_ALE_40V
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avAN_ALE_40V
{
public:

    // RVA: 0x794 | Ordinal: 1941
        void DropSnar(unsigned char, int, char);

    // RVA: 0x7D3 | Ordinal: 2004
        void InitContainersPayload(void);

    // RVA: 0xB9 | Ordinal: 186
        void avAN_ALE_40V(class cockpit::avAN_ALE_40V const &);

    // RVA: 0xBA | Ordinal: 187
        void avAN_ALE_40V(void);

    // RVA: 0x15A4 | Ordinal: 5541
        void release(void);

    // RVA: 0x2D4 | Ordinal: 725
        void _avAN_ALE_40V(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVAN_ALE_40V_HPP
