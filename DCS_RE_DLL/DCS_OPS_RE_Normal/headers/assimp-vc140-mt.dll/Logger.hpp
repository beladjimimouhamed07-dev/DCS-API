#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: assimp-vc140-mt.dll
// Class: Logger
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Assimp {

class Logger
{
public:

    // RVA: 0x31 | Ordinal: 50
        void Logger(enum Assimp::Logger::LogSeverity);

    // RVA: 0x32 | Ordinal: 51
        void Logger(void);

    // RVA: 0x33 | Ordinal: 52
        void Logger(class Assimp::Logger const &);

    // RVA: 0x27C | Ordinal: 637
        void debug(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x27D | Ordinal: 638
        void debug(char const *);

    // RVA: 0x283 | Ordinal: 644
        void error(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x284 | Ordinal: 645
        void error(char const *);

    // RVA: 0x29E | Ordinal: 671
        void getLogSeverity(void) const;

    // RVA: 0x2C1 | Ordinal: 706
        void info(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x2C2 | Ordinal: 707
        void info(char const *);

    // RVA: 0x2F4 | Ordinal: 757
        void setLogSeverity(enum Assimp::Logger::LogSeverity);

    // RVA: 0x308 | Ordinal: 777
        void warn(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &);

    // RVA: 0x309 | Ordinal: 778
        void warn(char const *);

    // RVA: 0x8B | Ordinal: 140
        void _Logger(void);
};

} // namespace Assimp

// DCS_OPS_RE_ASSIMP-VC140-MT.DLL_LOGGER_HPP
