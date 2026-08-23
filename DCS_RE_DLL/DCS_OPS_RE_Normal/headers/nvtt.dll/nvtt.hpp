#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: nvtt.dll
// Class: nvtt
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class nvtt
{
public:

    // RVA: 0x14 | Ordinal: 21
        void angularError(struct nvtt::Surface const &, struct nvtt::Surface const &);

    // RVA: 0x20 | Ordinal: 33
        void cieLabError(struct nvtt::Surface const &, struct nvtt::Surface const &);

    // RVA: 0x34 | Ordinal: 53
        void diff(struct nvtt::Surface const &, struct nvtt::Surface const &, float);

    // RVA: 0x37 | Ordinal: 56
        void errorString(enum nvtt::Error);

    // RVA: 0x4C | Ordinal: 77
        void histogram(struct nvtt::Surface const &, int, int);

    // RVA: 0x4D | Ordinal: 78
        void histogram(struct nvtt::Surface const &, float, float, int, int);

    // RVA: 0x69 | Ordinal: 106
        void rmsAlphaError(struct nvtt::Surface const &, struct nvtt::Surface const &);

    // RVA: 0x6A | Ordinal: 107
        void rmsError(struct nvtt::Surface const &, struct nvtt::Surface const &);

    // RVA: 0x6B | Ordinal: 108
        void rmsToneMappedError(struct nvtt::Surface const &, struct nvtt::Surface const &, float);

    // RVA: 0xB4 | Ordinal: 181
        void version(void);
};

// DCS_OPS_RE_NVTT.DLL_NVTT_HPP
