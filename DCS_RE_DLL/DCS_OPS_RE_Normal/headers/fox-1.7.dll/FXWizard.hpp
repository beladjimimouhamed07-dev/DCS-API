#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXWizard
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXWizard
{
public:

    // RVA: 0x383 | Ordinal: 900
        void FXWizard(void);

    // RVA: 0x384 | Ordinal: 901
        void FXWizard(class FX::FXApp *, class FX::FXString const &, class FX::FXImage *, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0x385 | Ordinal: 902
        void FXWizard(class FX::FXWindow *, class FX::FXString const &, class FX::FXImage *, unsigned int, int, int, int, int, int, int, int, int, int, int);

    // RVA: 0x977 | Ordinal: 2424
        void advanceButton(void) const;

    // RVA: 0xA74 | Ordinal: 2677
        void buttonFrame(void) const;

    // RVA: 0xAA9 | Ordinal: 2730
        void cancelButton(void) const;

    // RVA: 0xB54 | Ordinal: 2901
        void construct(void);

    // RVA: 0xF42 | Ordinal: 3907
        void finishButton(void) const;

    // RVA: 0x10A9 | Ordinal: 4266
        void getContainer(void) const;

    // RVA: 0x10E2 | Ordinal: 4323
        void getCurrentPanel(void) const;

    // RVA: 0x12BD | Ordinal: 4798
        void getImage(void) const;

    // RVA: 0x1475 | Ordinal: 5238
        void getMetaClass(void) const;

    // RVA: 0x14B1 | Ordinal: 5298
        void getNumPanels(void) const;

    // RVA: 0x17F5 | Ordinal: 6134
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B4A | Ordinal: 6987
        void load(class FX::FXStream &);

    // RVA: 0x1CB0 | Ordinal: 7345
        void manufacture(void);

    // RVA: 0x1F99 | Ordinal: 8090
        void onCmdBack(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x20FC | Ordinal: 8445
        void onCmdNext(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2565 | Ordinal: 9574
        void onUpdBack(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2591 | Ordinal: 9618
        void onUpdFinish(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x25C8 | Ordinal: 9673
        void onUpdNext(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x27A5 | Ordinal: 10150
        void retreatButton(void) const;

    // RVA: 0x287B | Ordinal: 10364
        void save(class FX::FXStream &) const;

    // RVA: 0x2A1D | Ordinal: 10782
        void setCurrentPanel(int);

    // RVA: 0x2B5F | Ordinal: 11104
        void setImage(class FX::FXImage *);

    // RVA: 0x4F5 | Ordinal: 1270
        void _FXWizard(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXWIZARD_HPP
