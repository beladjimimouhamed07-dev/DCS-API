#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: ImGui.dll
// Class: ImGuiStorage
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class ImGuiStorage
{
public:

    // RVA: 0x19F | Ordinal: 416
        void BuildSortByKey(void);

    // RVA: 0x25D | Ordinal: 606
        void GetBool(unsigned int, bool) const;

    // RVA: 0x25E | Ordinal: 607
        void GetBoolRef(unsigned int, bool);

    // RVA: 0x283 | Ordinal: 644
        void GetFloat(unsigned int, float) const;

    // RVA: 0x284 | Ordinal: 645
        void GetFloatRef(unsigned int, float);

    // RVA: 0x2A6 | Ordinal: 679
        void GetInt(unsigned int, int) const;

    // RVA: 0x2A7 | Ordinal: 680
        void GetIntRef(unsigned int, int);

    // RVA: 0x2DE | Ordinal: 735
        void GetVoidPtr(unsigned int) const;

    // RVA: 0x2DF | Ordinal: 736
        void GetVoidPtrRef(unsigned int, void *);

    // RVA: 0x431 | Ordinal: 1074
        void SetAllInt(int);

    // RVA: 0x434 | Ordinal: 1077
        void SetBool(unsigned int, bool);

    // RVA: 0x446 | Ordinal: 1095
        void SetFloat(unsigned int, float);

    // RVA: 0x44B | Ordinal: 1100
        void SetInt(unsigned int, int);

    // RVA: 0x47B | Ordinal: 1148
        void SetVoidPtr(unsigned int, void *);
};

// DCS_OPS_RE_IMGUI.DLL_IMGUISTORAGE_HPP
