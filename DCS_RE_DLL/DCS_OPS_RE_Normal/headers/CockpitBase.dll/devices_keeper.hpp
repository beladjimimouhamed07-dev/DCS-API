#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: devices_keeper
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class devices_keeper
{
public:

    // RVA: 0x8F5 | Ordinal: 2294
        void add(class cockpit::avDevice *);

    // RVA: 0xAD7 | Ordinal: 2776
        void clear_type_singletons(void);

    // RVA: 0xC32 | Ordinal: 3123
        void get(class ed::basic_string<char> const &);

    // RVA: 0xC33 | Ordinal: 3124
        void get(unsigned char);

    // RVA: 0x1825 | Ordinal: 6182
        void set_as_type_singleton(class cockpit::avDevice *, unsigned char);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_DEVICES_KEEPER_HPP
