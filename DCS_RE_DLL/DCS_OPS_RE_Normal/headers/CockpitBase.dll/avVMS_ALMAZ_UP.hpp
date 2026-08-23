#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avVMS_ALMAZ_UP
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avVMS_ALMAZ_UP
{
public:

    // RVA: 0x8A3 | Ordinal: 2212
        void SetCommand(int, float);

    // RVA: 0x1D9 | Ordinal: 474
        void avVMS_ALMAZ_UP(class cockpit::avVMS_ALMAZ_UP &&);

    // RVA: 0x1DA | Ordinal: 475
        void avVMS_ALMAZ_UP(class cockpit::avVMS_ALMAZ_UP const &);

    // RVA: 0x1DB | Ordinal: 476
        void avVMS_ALMAZ_UP(void);

    // RVA: 0x1206 | Ordinal: 4615
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1607 | Ordinal: 5640
        void repeat(void);

    // RVA: 0x36B | Ordinal: 876
        void _avVMS_ALMAZ_UP(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVVMS_ALMAZ_UP_HPP
