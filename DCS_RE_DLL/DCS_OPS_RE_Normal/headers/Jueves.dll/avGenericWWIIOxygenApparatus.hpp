#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: avGenericWWIIOxygenApparatus
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {
namespace dcswwii {

class avGenericWWIIOxygenApparatus
{
public:

    // RVA: 0x2B1 | Ordinal: 690
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x2C0 | Ordinal: 705
        void SetCommand(int, float);

    // RVA: 0xB6 | Ordinal: 183
        void avGenericWWIIOxygenApparatus(class cockpit::dcswwii::avGenericWWIIOxygenApparatus &&);

    // RVA: 0xB7 | Ordinal: 184
        void avGenericWWIIOxygenApparatus(class cockpit::dcswwii::avGenericWWIIOxygenApparatus const &);

    // RVA: 0xB8 | Ordinal: 185
        void avGenericWWIIOxygenApparatus(void);

    // RVA: 0x3DD | Ordinal: 990
        void get_anoxemia_data(unsigned int) const;

    // RVA: 0x426 | Ordinal: 1063
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x137 | Ordinal: 312
        void _avGenericWWIIOxygenApparatus(void);
};

} // namespace dcswwii
} // namespace cockpit

// DCS_OPS_RE_JUEVES.DLL_AVGENERICWWIIOXYGENAPPARATUS_HPP
