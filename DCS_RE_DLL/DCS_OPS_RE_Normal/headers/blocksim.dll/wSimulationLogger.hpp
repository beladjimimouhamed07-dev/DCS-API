#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: wSimulationLogger
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wSimulationLogger
{
public:

    // RVA: 0x286 | Ordinal: 647
        void addIndent(int);

    // RVA: 0x3E2 | Ordinal: 995
        void getIndent(void);

    // RVA: 0x464 | Ordinal: 1125
        void getLevel(void);

    // RVA: 0x52F | Ordinal: 1328
        void instance(void);

    // RVA: 0x1FA | Ordinal: 507
        void operator__(class wSimulationLogger::Indenter const &);

    // RVA: 0x1FB | Ordinal: 508
        void operator__(class std::basic_ostream<char, struct std::char_traits<char>> & (__cdecl *)(class std::basic_ostream<char, struct std::char_traits<char>> &));

    // RVA: 0x588 | Ordinal: 1417
        void setIndent(int);

    // RVA: 0x58D | Ordinal: 1422
        void setLevel(enum weSimulationLogLevel);

    // RVA: 0x59A | Ordinal: 1435
        void setStream(class std::basic_ostream<char, struct std::char_traits<char>> *);

    // RVA: 0x127 | Ordinal: 296
        void wSimulationLogger(void);

    // RVA: 0x128 | Ordinal: 297
        void wSimulationLogger(class wSimulationLogger const &);

    // RVA: 0x173 | Ordinal: 372
        void _wSimulationLogger(void);
};

// DCS_OPS_RE_BLOCKSIM.DLL_WSIMULATIONLOGGER_HPP
