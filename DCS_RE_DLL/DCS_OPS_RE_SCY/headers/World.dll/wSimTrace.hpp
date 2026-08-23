#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: World.dll
// Class: wSimTrace
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSimTrace
{
public:

    // RVA: 0x16 | Ordinal: 23
        void CommandsTraceAnalogIsOn(void);

    // RVA: 0x17 | Ordinal: 24
        void CommandsTraceDiscreteIsOn(void);

    // RVA: 0x29 | Ordinal: 42
        void IsObjectClassTrace(char const *);

    // RVA: 0x2D | Ordinal: 46
        void ObjectsTraceIsOn(void);

    // RVA: 0x2E | Ordinal: 47
        void ObjectsTraceTime(void);

    // RVA: 0x36 | Ordinal: 55
        void Trace(char const *, ...);

    // RVA: 0x37 | Ordinal: 56
        void TraceFramesIsOn(void);
};

// DCS_OPS_RE_WORLD.DLL_WSIMTRACE_HPP
