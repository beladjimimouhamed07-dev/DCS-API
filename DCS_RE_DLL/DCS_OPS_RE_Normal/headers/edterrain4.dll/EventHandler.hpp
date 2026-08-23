#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: EventHandler
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace ITerrainImpl4 {

class EventHandler
{
public:

    // RVA: 0x2 | Ordinal: 3
        void EventHandler(void);

    // RVA: 0x1FE | Ordinal: 511
        void discard(void);

    // RVA: 0x51C | Ordinal: 1309
        void raise(enum ITerrainImpl4::EventType) const;

    // RVA: 0x585 | Ordinal: 1414
        void setTerrain(class ITerrainImpl4 *);

    // RVA: 0x58F | Ordinal: 1424
        void setup(class std::function<void __cdecl(enum ITerrainImpl4::EventType)> const &);

    // RVA: 0x4F | Ordinal: 80
        void _EventHandler(void);
};

} // namespace ITerrainImpl4

// DCS_OPS_RE_EDTERRAIN4.DLL_EVENTHANDLER_HPP
