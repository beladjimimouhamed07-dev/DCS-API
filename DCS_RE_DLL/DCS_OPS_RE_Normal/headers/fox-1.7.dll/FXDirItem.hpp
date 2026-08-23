#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDirItem
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDirItem
{
public:

    // RVA: 0xD7 | Ordinal: 216
        void FXDirItem(void);

    // RVA: 0xD8 | Ordinal: 217
        void FXDirItem(class FX::FXString const &, class FX::FXIcon *, class FX::FXIcon *, void *);

    // RVA: 0x1023 | Ordinal: 4132
        void getAssoc(void) const;

    // RVA: 0x1101 | Ordinal: 4354
        void getDate(void) const;

    // RVA: 0x13C4 | Ordinal: 5061
        void getMetaClass(void) const;

    // RVA: 0x1485 | Ordinal: 5254
        void getMode(void) const;

    // RVA: 0x15B3 | Ordinal: 5556
        void getSize(void) const;

    // RVA: 0x1743 | Ordinal: 5956
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x18FE | Ordinal: 6399
        void isBlockdev(void) const;

    // RVA: 0x1905 | Ordinal: 6406
        void isChardev(void) const;

    // RVA: 0x1919 | Ordinal: 6426
        void isDirectory(void) const;

    // RVA: 0x1937 | Ordinal: 6456
        void isExecutable(void) const;

    // RVA: 0x193D | Ordinal: 6462
        void isFifo(void) const;

    // RVA: 0x1940 | Ordinal: 6465
        void isFile(void) const;

    // RVA: 0x19EF | Ordinal: 6640
        void isSocket(void) const;

    // RVA: 0x19FB | Ordinal: 6652
        void isSymlink(void) const;

    // RVA: 0x1C05 | Ordinal: 7174
        void manufacture(void);

    // RVA: 0x2989 | Ordinal: 10634
        void setAssoc(struct FX::FXFileAssoc *);

    // RVA: 0x2A3D | Ordinal: 10814
        void setDate(__int64);

    // RVA: 0x2C05 | Ordinal: 11270
        void setMode(unsigned int);

    // RVA: 0x2CF8 | Ordinal: 11513
        void setSize(__int64);

    // RVA: 0x3F2 | Ordinal: 1011
        void _FXDirItem(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDIRITEM_HPP
