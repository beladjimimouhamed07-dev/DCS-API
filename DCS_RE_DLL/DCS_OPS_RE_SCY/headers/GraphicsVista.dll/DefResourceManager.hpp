#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: DefResourceManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class DefResourceManager
{
public:

    // RVA: 0x57 | Ordinal: 88
        void CreateByName(enum ResourceType, class ed::basic_string<char> const &);

    // RVA: 0x6 | Ordinal: 7
        void DefResourceManager(class DefResourceManager &&);

    // RVA: 0x7 | Ordinal: 8
        void DefResourceManager(class DefResourceManager const &);

    // RVA: 0x8 | Ordinal: 9
        void DefResourceManager(class ed::basic_string<char> const &);

    // RVA: 0x108 | Ordinal: 265
        void initialize(void);

    // RVA: 0x157 | Ordinal: 344
        void uninitialize(void);

    // RVA: 0x29 | Ordinal: 42
        void _DefResourceManager(void);
};

// DCS_OPS_RE_GRAPHICSVISTA.DLL_DEFRESOURCEMANAGER_HPP
