#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: dxgui.dll
// Class: UpdateManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace gui {

class UpdateManager
{
public:

    // RVA: 0x147 | Ordinal: 328
        void addTarget(class gui::UpdateTarget *);

    // RVA: 0x2FD | Ordinal: 766
        void get(void);

    // RVA: 0x44F | Ordinal: 1104
        void getModelTime(void) const;

    // RVA: 0x53C | Ordinal: 1341
        void getTime(void) const;

    // RVA: 0x821 | Ordinal: 2082
        void removeTarget(class gui::UpdateTarget *);

    // RVA: 0x8EA | Ordinal: 2283
        void setModelTimeFunc(class std::function<double __cdecl(void)>);

    // RVA: 0x9FA | Ordinal: 2555
        void updateTargets(void);
};

} // namespace gui

// DCS_OPS_RE_DXGUI.DLL_UPDATEMANAGER_HPP
