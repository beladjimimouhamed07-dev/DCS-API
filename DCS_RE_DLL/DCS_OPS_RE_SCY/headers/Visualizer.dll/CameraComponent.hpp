#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Visualizer.dll
// Class: CameraComponent
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class CameraComponent
{
public:

    // RVA: 0xA | Ordinal: 11
        void CameraComponent(class CameraComponent &&);

    // RVA: 0xB | Ordinal: 12
        void CameraComponent(class CameraComponent const &);

    // RVA: 0xC | Ordinal: 13
        void CameraComponent(void);

    // RVA: 0xF0 | Ordinal: 241
        void getProjectionDesc(void) const;

    // RVA: 0x101 | Ordinal: 258
        void init(void);

    // RVA: 0x15B | Ordinal: 348
        void setHMDProjection(float *);

    // RVA: 0x22 | Ordinal: 35
        void _CameraComponent(void);
};

// DCS_OPS_RE_VISUALIZER.DLL_CAMERACOMPONENT_HPP
