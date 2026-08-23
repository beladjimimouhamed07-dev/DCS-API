#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXDriveBox
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXDriveBox
{
public:

    // RVA: 0xEE | Ordinal: 239
        void FXDriveBox(void);

    // RVA: 0xEF | Ordinal: 240
        void FXDriveBox(class FX::FXComposite *, class FX::FXObject *, unsigned int, unsigned int, int, int, int, int, int, int, int, int);

    // RVA: 0xBB4 | Ordinal: 2997
        void create(void);

    // RVA: 0xC6D | Ordinal: 3182
        void destroy(void);

    // RVA: 0xC9A | Ordinal: 3227
        void detach(void);

    // RVA: 0x1029 | Ordinal: 4138
        void getAssociations(void) const;

    // RVA: 0x11DE | Ordinal: 4575
        void getDrive(void) const;

    // RVA: 0x13CE | Ordinal: 5071
        void getMetaClass(void) const;

    // RVA: 0x174D | Ordinal: 5966
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1AA1 | Ordinal: 6818
        void listDrives(void);

    // RVA: 0x1AC9 | Ordinal: 6858
        void load(class FX::FXStream &);

    // RVA: 0x1C0D | Ordinal: 7182
        void manufacture(void);

    // RVA: 0x2097 | Ordinal: 8344
        void onCmdGetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21B3 | Ordinal: 8628
        void onCmdSetStringValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x21DE | Ordinal: 8671
        void onCmdSetValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23F9 | Ordinal: 9210
        void onListChanged(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x23FC | Ordinal: 9213
        void onListClicked(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27FA | Ordinal: 10235
        void save(class FX::FXStream &) const;

    // RVA: 0x298F | Ordinal: 10640
        void setAssociations(class FX::FXFileAssociations *);

    // RVA: 0x2A6F | Ordinal: 10864
        void setDrive(class FX::FXString const &);

    // RVA: 0x3FD | Ordinal: 1022
        void _FXDriveBox(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXDRIVEBOX_HPP
