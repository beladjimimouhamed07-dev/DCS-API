#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: AnimationSequence
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class AnimationSequence
{
public:

    // RVA: 0x3 | Ordinal: 4
        void AnimationSequence(class AnimationSequence &&);

    // RVA: 0x4 | Ordinal: 5
        void AnimationSequence(class AnimationSequence const &);

    // RVA: 0x5 | Ordinal: 6
        void AnimationSequence(class wWeaponSystemManager *);

    // RVA: 0x37E | Ordinal: 895
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x401 | Ordinal: 1026
        void getPlaybackDirection(void) const;

    // RVA: 0x43D | Ordinal: 1086
        void getTimeToEnd(void) const;

    // RVA: 0x441 | Ordinal: 1090
        void getTotalDuration(void) const;

    // RVA: 0x4B6 | Ordinal: 1207
        void isOnBegin(void) const;

    // RVA: 0x4B7 | Ordinal: 1208
        void isOnEnd(void) const;

    // RVA: 0x4E1 | Ordinal: 1250
        void link_DParamList(class ed::vector<float, class ed::allocator128<float>> *);

    // RVA: 0x4E2 | Ordinal: 1251
        void load(class Lua::Config &);

    // RVA: 0x5F4 | Ordinal: 1525
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x623 | Ordinal: 1572
        void setPlaybackToBegin(void);

    // RVA: 0x624 | Ordinal: 1573
        void setPlaybackToEnd(void);

    // RVA: 0x65F | Ordinal: 1632
        void start(void);

    // RVA: 0x660 | Ordinal: 1633
        void startBackward(void);

    // RVA: 0x66E | Ordinal: 1647
        void stop(void);

    // RVA: 0x68B | Ordinal: 1676
        void update(void);

    // RVA: 0x5B | Ordinal: 92
        void _AnimationSequence(void);
};

// DCS_OPS_RE_WEAPONS.DLL_ANIMATIONSEQUENCE_HPP
