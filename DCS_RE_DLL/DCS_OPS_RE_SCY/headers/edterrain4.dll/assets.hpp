#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: assets
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class assets
{
public:

    // RVA: 0x15D | Ordinal: 350
        void applyAliases(struct offshore::Scene &, int, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *);

    // RVA: 0x29B | Ordinal: 668
        void getAsset(class ed::basic_string<char> const &);

    // RVA: 0x29E | Ordinal: 671
        void getAssignedAsset(struct offshore::Scene &, int, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> *);
};

// DCS_OPS_RE_EDTERRAIN4.DLL_ASSETS_HPP
