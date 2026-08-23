#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WorldGeneral.dll
// Class: MissionPackage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace Mission {

class MissionPackage
{
public:

    // RVA: 0x117 | Ordinal: 280
        void MissionPackage(class Mission::MissionPackage const &);

    // RVA: 0x118 | Ordinal: 281
        void MissionPackage(class Mission::ITrackEventFilter const *, class ed::ISecurityControl *);

    // RVA: 0x60A | Ordinal: 1547
        void addChunk(class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x60B | Ordinal: 1548
        void addChunk(class std::basic_string_view<char, struct std::char_traits<char>>, class ed::Ptr<class edvfs::IBuffer, struct edvfs::IBuffer::Deleter>);

    // RVA: 0x610 | Ordinal: 1553
        void addFileChunk(class ed::basic_string<char> const &, class ed::basic_string<char> const &, bool);

    // RVA: 0x638 | Ordinal: 1593
        void cacheChunk_(struct Mission::MissionPackage::ChunkEntry_&, bool, class ed::basic_string<char> const &);

    // RVA: 0x652 | Ordinal: 1619
        void checkMissionSignature(void);

    // RVA: 0x66D | Ordinal: 1646
        void clear(void);

    // RVA: 0x6DC | Ordinal: 1757
        void compileMissionChunkAsLuaChunk(class ed::basic_string<char> const &, struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x7CD | Ordinal: 1998
        void getBaseNameNoExt(void) const;

    // RVA: 0x812 | Ordinal: 2067
        void getChunkData(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0x813 | Ordinal: 2068
        void getChunkData_(struct Mission::MissionPackage::ChunkEntry_&, bool);

    // RVA: 0x814 | Ordinal: 2069
        void getChunkFile(class ed::basic_string<char> const &);

    // RVA: 0x819 | Ordinal: 2074
        void getChunkString(class ed::basic_string<char> const &);

    // RVA: 0x832 | Ordinal: 2099
        void getFileName(void) const;

    // RVA: 0x864 | Ordinal: 2149
        void getMountPoint(void) const;

    // RVA: 0x8EB | Ordinal: 2284
        void getReadTrack(void);

    // RVA: 0x8EC | Ordinal: 2285
        void getRealFileName(void) const;

    // RVA: 0x915 | Ordinal: 2326
        void getWriteTrack(void);

    // RVA: 0x96F | Ordinal: 2416
        void hasChunk(class ed::basic_string<char> const &);

    // RVA: 0x9C1 | Ordinal: 2498
        void isSignatureValid(void) const;

    // RVA: 0x9C2 | Ordinal: 2499
        void isSigned(void) const;

    // RVA: 0xA24 | Ordinal: 2597
        void load(class ed::basic_string<char> const &, char const *);

    // RVA: 0xA4E | Ordinal: 2639
        void loadI18N(class ed::basic_string<char> const &, struct lua_State *);

    // RVA: 0xA4F | Ordinal: 2640
        void loadLuaChunk(class ed::basic_string<char> const &, struct lua_State *, class ed::basic_string<char> const &, char const *);

    // RVA: 0xA50 | Ordinal: 2641
        void loadManifestMap(class std::basic_string_view<char, struct std::char_traits<char>>);

    // RVA: 0xA5F | Ordinal: 2656
        void makeEmptyMission(class ed::basic_string<char> const &);

    // RVA: 0xA69 | Ordinal: 2666
        void mount(char const *, char const *);

    // RVA: 0xB57 | Ordinal: 2904
        void reload(void);

    // RVA: 0xB60 | Ordinal: 2913
        void removeChunk(class ed::basic_string<char> const &);

    // RVA: 0xB86 | Ordinal: 2951
        void save(class ed::basic_string<char> const &);

    // RVA: 0xC3A | Ordinal: 3131
        void unmount(void);

    // RVA: 0x288 | Ordinal: 649
        void _MissionPackage(void);
};

} // namespace Mission

// DCS_OPS_RE_WORLDGENERAL.DLL_MISSIONPACKAGE_HPP
