#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXColorDialog
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXColorDialog
{
public:

    // RVA: 0x7E | Ordinal: 127
        void FXColorDialog(void);

    // RVA: 0x7F | Ordinal: 128
        void FXColorDialog(class FX::FXApp *, class FX::FXString const &, unsigned int, int, int, int, int);

    // RVA: 0x80 | Ordinal: 129
        void FXColorDialog(class FX::FXWindow *, class FX::FXString const &, unsigned int, int, int, int, int);

    // RVA: 0xBA6 | Ordinal: 2983
        void create(void);

    // RVA: 0xC66 | Ordinal: 3175
        void destroy(void);

    // RVA: 0xFEA | Ordinal: 4075
        void getActivePanel(void) const;

    // RVA: 0x13AC | Ordinal: 5037
        void getMetaClass(void) const;

    // RVA: 0x1518 | Ordinal: 5401
        void getRGBA(void) const;

    // RVA: 0x16B6 | Ordinal: 5815
        void getWellColor(int) const;

    // RVA: 0x172A | Ordinal: 5931
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x19AA | Ordinal: 6571
        void isOpaqueOnly(void) const;

    // RVA: 0x1AB5 | Ordinal: 6838
        void load(class FX::FXStream &);

    // RVA: 0x1BEE | Ordinal: 7151
        void manufacture(void);

    // RVA: 0x1F67 | Ordinal: 8040
        void onChgColor(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1FBE | Ordinal: 8127
        void onCmdColor(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x205E | Ordinal: 8287
        void onCmdGetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2178 | Ordinal: 8569
        void onCmdSetIntValue(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27E7 | Ordinal: 10216
        void save(class FX::FXStream &) const;

    // RVA: 0x2969 | Ordinal: 10602
        void setActivePanel(int);

    // RVA: 0x2C2D | Ordinal: 11310
        void setOpaqueOnly(bool);

    // RVA: 0x2C75 | Ordinal: 11382
        void setRGBA(unsigned int);

    // RVA: 0x2DD6 | Ordinal: 11735
        void setWellColor(int, unsigned int);

    // RVA: 0x3D0 | Ordinal: 977
        void _FXColorDialog(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXCOLORDIALOG_HPP
