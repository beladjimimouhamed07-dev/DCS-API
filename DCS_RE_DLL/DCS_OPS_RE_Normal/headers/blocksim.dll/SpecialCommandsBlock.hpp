#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: blocksim.dll
// Class: SpecialCommandsBlock
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace wSimulationSystemScheme {

class SpecialCommandsBlock
{
public:

    // RVA: 0xCF | Ordinal: 208
        void SpecialCommandsBlock(class wSimulationSystemScheme::SpecialCommandsBlock &&);

    // RVA: 0xD0 | Ordinal: 209
        void SpecialCommandsBlock(class wSimulationSystemScheme::SpecialCommandsBlock const &);

    // RVA: 0xD1 | Ordinal: 210
        void SpecialCommandsBlock(void);

    // RVA: 0x2B0 | Ordinal: 689
        void clone(void) const;

    // RVA: 0x2E5 | Ordinal: 742
        void create(class Lua::Loader *);

    // RVA: 0x356 | Ordinal: 855
        void getBlockTypeName(void) const;

    // RVA: 0x3BA | Ordinal: 955
        void getClassName(void) const;

    // RVA: 0x412 | Ordinal: 1043
        void getInputPorts_(void) const;

    // RVA: 0x538 | Ordinal: 1337
        void load(class Lua::Loader &);

    // RVA: 0x55B | Ordinal: 1372
        void save(class Lua::Loader &);

    // RVA: 0x154 | Ordinal: 341
        void _SpecialCommandsBlock(void);
};

} // namespace wSimulationSystemScheme

// DCS_OPS_RE_BLOCKSIM.DLL_SPECIALCOMMANDSBLOCK_HPP
