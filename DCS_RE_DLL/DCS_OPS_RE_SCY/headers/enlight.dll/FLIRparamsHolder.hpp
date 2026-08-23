#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: enlight.dll
// Class: FLIRparamsHolder
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class FLIRparamsHolder
{
public:

    // RVA: 0x1A | Ordinal: 27
        void FLIRparamsHolder(void);

    // RVA: 0x95 | Ordinal: 150
        void get(void) const;

    // RVA: 0x9E | Ordinal: 159
        void getConstantBuffer(void) const;

    // RVA: 0xB1 | Ordinal: 178
        void init(char const *, char const *);

    // RVA: 0xC1 | Ordinal: 194
        void loadConfig(char const *, char const *, bool);

    // RVA: 0xD5 | Ordinal: 214
        void release(void);

    // RVA: 0x105 | Ordinal: 262
        void update(class osg::Vec3f const &, class osg::Vec3f const &);

    // RVA: 0x34 | Ordinal: 53
        void _FLIRparamsHolder(void);
};

// DCS_OPS_RE_ENLIGHT.DLL_FLIRPARAMSHOLDER_HPP
