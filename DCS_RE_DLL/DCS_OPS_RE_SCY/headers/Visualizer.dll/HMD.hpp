#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Visualizer.dll
// Class: HMD
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class HMD
{
public:

    // RVA: 0xA7 | Ordinal: 168
        void bind_lua_api(struct lua_State *);

    // RVA: 0xB5 | Ordinal: 182
        void destroy(void);

    // RVA: 0xC9 | Ordinal: 202
        void getActiveVRProviderID(void);

    // RVA: 0xCA | Ordinal: 203
        void getApplicationWindowSize(int &, int &);

    // RVA: 0xDA | Ordinal: 219
        void getEyeIndexForActiveViewport(void);

    // RVA: 0xFB | Ordinal: 252
        void get_options(void);

    // RVA: 0x107 | Ordinal: 264
        void initialize(void);

    // RVA: 0x109 | Ordinal: 266
        void instance(void);

    // RVA: 0x10B | Ordinal: 268
        void isActive(void);

    // RVA: 0x123 | Ordinal: 292
        void processUserInput(void);

    // RVA: 0x14F | Ordinal: 336
        void setCommand(unsigned int, float);

    // RVA: 0x15D | Ordinal: 350
        void setHeadPosExternalControl(bool);

    // RVA: 0x175 | Ordinal: 374
        void setPlatformCompensation(class wPosition3<float> const *);
};

// DCS_OPS_RE_VISUALIZER.DLL_HMD_HPP
