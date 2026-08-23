#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: fox-1.7.dll
// Class: FXRecentFiles
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace FX {

class FXRecentFiles
{
public:

    // RVA: 0x290 | Ordinal: 657
        void FXRecentFiles(class FX::FXApp *, class FX::FXString const &, class FX::FXObject *, unsigned int);

    // RVA: 0x291 | Ordinal: 658
        void FXRecentFiles(class FX::FXSettings *, class FX::FXString const &, class FX::FXObject *, unsigned int);

    // RVA: 0x292 | Ordinal: 659
        void FXRecentFiles(void);

    // RVA: 0x9D3 | Ordinal: 2516
        void appendFile(class FX::FXString const &);

    // RVA: 0xAD5 | Ordinal: 2774
        void clear(void);

    // RVA: 0x11F0 | Ordinal: 4593
        void getFile(unsigned int) const;

    // RVA: 0x123F | Ordinal: 4672
        void getGroupName(void) const;

    // RVA: 0x1363 | Ordinal: 4964
        void getMaxFiles(void) const;

    // RVA: 0x1439 | Ordinal: 5178
        void getMetaClass(void) const;

    // RVA: 0x159B | Ordinal: 5532
        void getSelector(void) const;

    // RVA: 0x15A1 | Ordinal: 5538
        void getSettings(void) const;

    // RVA: 0x15EB | Ordinal: 5612
        void getTarget(void) const;

    // RVA: 0x17B9 | Ordinal: 6074
        void handle(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x1B1D | Ordinal: 6942
        void load(class FX::FXStream &);

    // RVA: 0x1C76 | Ordinal: 7287
        void manufacture(void);

    // RVA: 0x1FB5 | Ordinal: 8118
        void onCmdClear(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x202D | Ordinal: 8238
        void onCmdFile(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2560 | Ordinal: 9569
        void onUpdAnyFiles(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x258E | Ordinal: 9615
        void onUpdFile(class FX::FXObject *, unsigned int, void *);

    // RVA: 0x2749 | Ordinal: 10058
        void removeFile(class FX::FXString const &);

    // RVA: 0x284E | Ordinal: 10319
        void save(class FX::FXStream &) const;

    // RVA: 0x2A85 | Ordinal: 10886
        void setFile(unsigned int, class FX::FXString const &);

    // RVA: 0x2AE6 | Ordinal: 10983
        void setGroupName(class FX::FXString const &);

    // RVA: 0x2BF1 | Ordinal: 11250
        void setMaxFiles(unsigned int);

    // RVA: 0x2CDF | Ordinal: 11488
        void setSelector(unsigned int);

    // RVA: 0x2CE4 | Ordinal: 11493
        void setSettings(class FX::FXSettings *);

    // RVA: 0x2D34 | Ordinal: 11573
        void setTarget(class FX::FXObject *);

    // RVA: 0x495 | Ordinal: 1174
        void _FXRecentFiles(void);
};

} // namespace FX

// DCS_OPS_RE_FOX-1.7.DLL_FXRECENTFILES_HPP
