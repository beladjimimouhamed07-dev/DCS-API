#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: UniModelDesc.dll
// Class: TexCoordsChannels
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace model {

class TexCoordsChannels
{
public:

    // RVA: 0x5 | Ordinal: 6
        void TexCoordsChannels(void);

    // RVA: 0x53 | Ordinal: 84
        void findByTexCoordChannel(unsigned int) const;

    // RVA: 0xBA | Ordinal: 187
        void isChannelUniq(unsigned int) const;

    // RVA: 0xCC | Ordinal: 205
        void load(class io::IBinaryFileR &);

    // RVA: 0xE8 | Ordinal: 233
        void removeByTexCoordChannel(unsigned int);

    // RVA: 0x110 | Ordinal: 273
        void save(class io::IBinaryFileW &) const;
};

} // namespace model

// DCS_OPS_RE_UNIMODELDESC.DLL_TEXCOORDSCHANNELS_HPP
