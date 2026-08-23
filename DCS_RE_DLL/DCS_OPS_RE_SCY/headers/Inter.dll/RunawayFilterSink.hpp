#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Inter.dll
// Class: RunawayFilterSink
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class RunawayFilterSink
{
public:

    // RVA: 0x8 | Ordinal: 9
        void RunawayFilterSink(class edterrain::IRoadNetwork *);

    // RVA: 0x22 | Ordinal: 35
        void canFinishFromDirection(int, int);

    // RVA: 0x23 | Ordinal: 36
        void canGetPointOnRoad(int);

    // RVA: 0x24 | Ordinal: 37
        void canMoveAlongCrossroad(int, int, int);

    // RVA: 0x25 | Ordinal: 38
        void canMoveAlongRoad(int, double, double);

    // RVA: 0x26 | Ordinal: 39
        void canStartToDirection(int, int);
};

// DCS_OPS_RE_INTER.DLL_RUNAWAYFILTERSINK_HPP
