#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edObjects.dll
// Class: wShape
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wShape
{
public:

    // RVA: 0xBD | Ordinal: 190
        void Finish(void);

    // RVA: 0xCA | Ordinal: 203
        void GetDecl(int, int);

    // RVA: 0xCB | Ordinal: 204
        void GetDecl(char const *);

    // RVA: 0xD2 | Ordinal: 211
        void GetModel(void);

    // RVA: 0xEC | Ordinal: 237
        void Init(bool, bool);

    // RVA: 0xED | Ordinal: 238
        void InitLand(void);

    // RVA: 0x129 | Ordinal: 298
        void SetPositionType(unsigned char);

    // RVA: 0x12C | Ordinal: 301
        void Start(void);

    // RVA: 0x12D | Ordinal: 302
        void StartNet(void);

    // RVA: 0x12E | Ordinal: 303
        void Stop(void);

    // RVA: 0x1A5 | Ordinal: 422
        void obtainModel(bool);

    // RVA: 0x38 | Ordinal: 57
        void wShape(struct wShape &&);

    // RVA: 0x39 | Ordinal: 58
        void wShape(struct wShape const &);

    // RVA: 0x3A | Ordinal: 59
        void wShape(void);

    // RVA: 0x54 | Ordinal: 85
        void _wShape(void);
};

// DCS_OPS_RE_EDOBJECTS.DLL_WSHAPE_HPP
