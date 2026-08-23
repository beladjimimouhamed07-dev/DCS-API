#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ImGui.dll
// Class: ImGuiIO
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ImGuiIO
{
public:

    // RVA: 0x14F | Ordinal: 336
        void AddInputCharacter(unsigned int);

    // RVA: 0x150 | Ordinal: 337
        void AddInputCharacterUTF16(unsigned short);

    // RVA: 0x151 | Ordinal: 338
        void AddInputCharactersUTF8(char const *);

    // RVA: 0x1C8 | Ordinal: 457
        void ClearInputCharacters(void);

    // RVA: 0x100 | Ordinal: 257
        void ImGuiIO(void);
};

// DCS_OPS_RE_IMGUI.DLL_IMGUIIO_HPP
