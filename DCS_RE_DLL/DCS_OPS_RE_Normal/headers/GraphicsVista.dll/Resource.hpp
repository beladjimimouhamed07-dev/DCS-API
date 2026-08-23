#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: GraphicsVista.dll
// Class: Resource
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class Resource
{
public:

    // RVA: 0x58 | Ordinal: 89
        void CreateByName(class ed::basic_string<char> const &);

    // RVA: 0x76 | Ordinal: 119
        void GetLastFrame(void);

    // RVA: 0x84 | Ordinal: 133
        void GetPrevForUnload(void);

    // RVA: 0x96 | Ordinal: 151
        void IsRegistered(void);

    // RVA: 0x98 | Ordinal: 153
        void Name(void) const;

    // RVA: 0x9D | Ordinal: 158
        void Register(void);

    // RVA: 0x9E | Ordinal: 159
        void RemoveFromList(void);

    // RVA: 0x1B | Ordinal: 28
        void Resource(void);

    // RVA: 0xB7 | Ordinal: 184
        void SetName(class ed::basic_string<char> const &);

    // RVA: 0xCA | Ordinal: 203
        void Type(void);

    // RVA: 0xCB | Ordinal: 204
        void Unregister(void);

    // RVA: 0xD0 | Ordinal: 209
        void UsedThisFrame(void);

    // RVA: 0x32 | Ordinal: 51
        void _Resource(void);
};

// DCS_OPS_RE_GRAPHICSVISTA.DLL_RESOURCE_HPP
