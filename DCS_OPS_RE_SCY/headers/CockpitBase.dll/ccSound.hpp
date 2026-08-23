#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: ccSound
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class ccSound
{
public:

    // RVA: 0x226 | Ordinal: 551
        void ccSound(void);

    // RVA: 0xB32 | Ordinal: 2867
        void createHost(enum Sound::ContextID, char const *, struct SND_HostParams *);

    // RVA: 0xCFF | Ordinal: 3328
        void getHost(char const *);

    // RVA: 0xDFA | Ordinal: 3579
        void getSoundPos(char const *, struct SND_HostParams &);

    // RVA: 0x1156 | Ordinal: 4439
        void init(void);

    // RVA: 0x1239 | Ordinal: 4666
        void instance(void);

    // RVA: 0x13A5 | Ordinal: 5030
        void loadSounds(struct lua_State *, class ed::basic_string<char> const &);

    // RVA: 0x14B7 | Ordinal: 5304
        void play_switch_sound(class osg::Vec3f const &, int);

    // RVA: 0x1594 | Ordinal: 5525
        void register_in_script(struct lua_State *);

    // RVA: 0x15D6 | Ordinal: 5591
        void release(void);

    // RVA: 0x1B89 | Ordinal: 7050
        void update_sw_host(class osg::Vec3f const &);

    // RVA: 0x391 | Ordinal: 914
        void _ccSound(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_CCSOUND_HPP
