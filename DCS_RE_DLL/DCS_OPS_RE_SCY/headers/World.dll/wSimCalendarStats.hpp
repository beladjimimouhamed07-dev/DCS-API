#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: World.dll
// Class: wSimCalendarStats
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ed {

class wSimCalendarStats
{
public:

    // RVA: 0x23 | Ordinal: 36
        void GetSimCalendarStats(class std::function<void __cdecl(class std::basic_string_view<char, struct std::char_traits<char>>, struct ed::wSimCalendarStat &)>);

    // RVA: 0x30 | Ordinal: 49
        void ResetSimCalendarStats(void);
};

} // namespace ed

// DCS_OPS_RE_WORLD.DLL_WSIMCALENDARSTATS_HPP
