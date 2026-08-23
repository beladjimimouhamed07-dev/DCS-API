#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Effects2.dll
// Class: FumeFX
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class FumeFX
{
public:

    // RVA: 0x6B | Ordinal: 108
        void load(wchar_t const *, struct FumeFX::FXInfo &);

    // RVA: 0x6C | Ordinal: 109
        void loadGPUData(wchar_t const *, struct FumeFX::GPUData &);

    // RVA: 0x6D | Ordinal: 110
        void loadSettings(wchar_t const *, struct FumeFX::FXSettings0 &);

    // RVA: 0x80 | Ordinal: 129
        void save(wchar_t const *, struct FumeFX::GPUData const &, struct FumeFX::FXSettings0 const &);

    // RVA: 0x81 | Ordinal: 130
        void saveGPUData(wchar_t const *, struct FumeFX::GPUData const &);

    // RVA: 0x82 | Ordinal: 131
        void saveSettings(struct _iobuf *, struct FumeFX::FXSettings0 const &);

    // RVA: 0x83 | Ordinal: 132
        void saveSettings(wchar_t const *, struct FumeFX::FXSettings0 const &);
};

// DCS_OPS_RE_EFFECTS2.DLL_FUMEFX_HPP
