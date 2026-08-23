#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: WeaponBlocks.dll
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

    // RVA: 0x797 | Ordinal: 1944
        void getDesc(void) const;

    // RVA: 0x7DC | Ordinal: 2013
        void getDesc_(void);

    // RVA: 0x890 | Ordinal: 2193
        void getInputPort(class ed::basic_string<char> const &);

    // RVA: 0x98D | Ordinal: 2446
        void getOutputPort(class ed::basic_string<char> const &);

    // RVA: 0xA2D | Ordinal: 2606
        void getParent(void);

    // RVA: 0xABB | Ordinal: 2748
        void init_randoms(int);

    // RVA: 0xC21 | Ordinal: 3106
        void rnd_m1p1(void);

    // RVA: 0xD7D | Ordinal: 3454
        void simulate(double);

    // RVA: 0xDFB | Ordinal: 3580
        void testGroundCollision_(class Math::Vector<3, double> const &, class Math::Vector<3, double> const &, class Math::Vector<3, double> const &);

    // RVA: 0xCE | Ordinal: 207
        void wEngineAnim(class wEngineAnim const &);

    // RVA: 0xCF | Ordinal: 208
        void wEngineAnim(class wEngineAnimDescriptor const *, class wSimulationSystem *);

    // RVA: 0x22C | Ordinal: 557
        void _wEngineAnim(void);
};

// DCS_OPS_RE_WEAPONBLOCKS.DLL_WENGINEANIM_HPP
