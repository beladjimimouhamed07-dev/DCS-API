#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avDeIceGlycolPump
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avDeIceGlycolPump
{
public:

    // RVA: 0x2AF | Ordinal: 688
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0xAE | Ordinal: 175
        void avDeIceGlycolPump(class cockpit::dcswwii::avDeIceGlycolPump &&);

    // RVA: 0xAF | Ordinal: 176
        void avDeIceGlycolPump(class cockpit::dcswwii::avDeIceGlycolPump const &);

    // RVA: 0xB0 | Ordinal: 177
        void avDeIceGlycolPump(void);

    // RVA: 0x32D | Ordinal: 814
        void doSetCommand(int, float, bool, int);

    // RVA: 0x421 | Ordinal: 1058
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x4BB | Ordinal: 1212
        void post_initialize(void);

    // RVA: 0x4DC | Ordinal: 1245
        void rearm(void);

    // RVA: 0x62A | Ordinal: 1579
        void update(void);

    // RVA: 0x132 | Ordinal: 307
        void _avDeIceGlycolPump(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVDEICEGLYCOLPUMP_HPP
