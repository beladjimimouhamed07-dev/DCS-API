#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocksNL.dll
// Class: wEngineAnim
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wEngineAnim
{
public:

    // RVA: 0x4AC | Ordinal: 1197
        void __getInputPorts(void);

    // RVA: 0x545 | Ordinal: 1350
        void __getOutputPorts(void);

    // RVA: 0x78F | Ordinal: 1936
        void getDesc(void) const;

    // RVA: 0x7D4 | Ordinal: 2005
        void getDesc_(void);

    // RVA: 0x887 | Ordinal: 2184
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x984 | Ordinal: 2437
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA24 | Ordinal: 2597
        void getParent(void);

    // RVA: 0xBE2 | Ordinal: 3043
        void rnd_m1p1(void);

    // RVA: 0xD32 | Ordinal: 3379
        void simulate(double);

    // RVA: 0xDB0 | Ordinal: 3505
        void testGroundCollision_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0xCE | Ordinal: 207
        void wEngineAnim(class wEngineAnim const &);

    // RVA: 0xCF | Ordinal: 208
        void wEngineAnim(class wEngineAnimDescriptor const *, class wSimulationSystem *);

    // RVA: 0x22C | Ordinal: 557
        void _wEngineAnim(void);
};

// DCS_OPS_RE_WEAPONBLOCKSNL.DLL_WENGINEANIM_HPP
