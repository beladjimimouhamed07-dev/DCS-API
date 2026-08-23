#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: MissionReader
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Mission {

class MissionReader
{
public:

    // RVA: 0x119 | Ordinal: 282
        void MissionReader(class Mission::MissionReader const &);

    // RVA: 0x11A | Ordinal: 283
        void MissionReader(void);

    // RVA: 0x6D9 | Ordinal: 1754
        void closeChunk_(void);

    // RVA: 0x811 | Ordinal: 2066
        void getChunkCount(void);

    // RVA: 0x815 | Ordinal: 2070
        void getChunkIndex_(class ed::basic_string<char> const &, bool) const;

    // RVA: 0x816 | Ordinal: 2071
        void getChunkName(int);

    // RVA: 0x817 | Ordinal: 2072
        void getChunkSize(class ed::basic_string<char> const &);

    // RVA: 0x818 | Ordinal: 2073
        void getChunkSize(int);

    // RVA: 0x970 | Ordinal: 2417
        void hasChunk(class ed::basic_string<char> const &) const;

    // RVA: 0xAAE | Ordinal: 2735
        void open(class ed::basic_string<char> const &);

    // RVA: 0xAAF | Ordinal: 2736
        void openChunk_(int);

    // RVA: 0xB47 | Ordinal: 2888
        void readChunk(class ed::basic_string<char> const &, char *);

    // RVA: 0xB48 | Ordinal: 2889
        void readChunk(int, char *);

    // RVA: 0xB49 | Ordinal: 2890
        void readChunkToFile(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0xB4A | Ordinal: 2891
        void readChunkToFile(int, class ed::basic_string<char> const &);

    // RVA: 0xB4B | Ordinal: 2892
        void readChunksList_(void);

    // RVA: 0x289 | Ordinal: 650
        void _MissionReader(void);
};

} // namespace Mission

// DCS_OPS_RE_WORLDGENERAL.DLL_MISSIONREADER_HPP
