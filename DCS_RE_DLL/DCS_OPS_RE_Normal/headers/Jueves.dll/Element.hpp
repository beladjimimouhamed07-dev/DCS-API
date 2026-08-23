#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Jueves.dll
// Class: Element
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace EagleFM {
namespace dcswwii {
namespace pneumatics {

class Element
{
public:

    // RVA: 0x22 | Ordinal: 35
        void Element(class EagleFM::dcswwii::pneumatics::Element const &);

    // RVA: 0x23 | Ordinal: 36
        void Element(double, double, double, double, double);

    // RVA: 0x2CC | Ordinal: 717
        void addFeedee(class EagleFM::dcswwii::pneumatics::Element *);

    // RVA: 0x36A | Ordinal: 875
        void getDrainValveOpening(void);

    // RVA: 0x371 | Ordinal: 882
        void getExhaustValveOpening(void);

    // RVA: 0x382 | Ordinal: 899
        void getIntakeValveOpening(void);

    // RVA: 0x388 | Ordinal: 905
        void getLeakHoleCrossSection(void);

    // RVA: 0x3A3 | Ordinal: 932
        void getPressure(void);

    // RVA: 0x3D4 | Ordinal: 981
        void getVolume(void);

    // RVA: 0x543 | Ordinal: 1348
        void setDrainValveOpening(double);

    // RVA: 0x547 | Ordinal: 1352
        void setExhaustValveOpening(double);

    // RVA: 0x55A | Ordinal: 1371
        void setIntakeValveOpening(double);

    // RVA: 0x561 | Ordinal: 1378
        void setLeakHoleCrossSection(double);

    // RVA: 0x573 | Ordinal: 1396
        void setPressure(double);

    // RVA: 0x5D4 | Ordinal: 1493
        void simulate(double);

    // RVA: 0xF0 | Ordinal: 241
        void _Element(void);
};

} // namespace pneumatics
} // namespace dcswwii
} // namespace EagleFM

// DCS_OPS_RE_JUEVES.DLL_ELEMENT_HPP
