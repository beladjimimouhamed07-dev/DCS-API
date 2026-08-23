#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avDirAntenna
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avDirAntenna
{
public:

    // RVA: 0xFC | Ordinal: 253
        void avDirAntenna(class cockpit::avDirAntenna const &);

    // RVA: 0xFD | Ordinal: 254
        void avDirAntenna(class cockpit::avSensorEye const &, unsigned int, double, double, double, double, struct cockpit::FreqRange const &, double, double, double);

    // RVA: 0xFE | Ordinal: 255
        void avDirAntenna(void);

    // RVA: 0xCF0 | Ordinal: 3313
        void getHPBW(void);

    // RVA: 0xCF1 | Ordinal: 3314
        void getHPBWvert(void);

    // RVA: 0x1257 | Ordinal: 4696
        void isDetected(double);

    // RVA: 0x125F | Ordinal: 4704
        void isInRange(struct cockpit::FreqRange);

    // RVA: 0x1580 | Ordinal: 5505
        void receivedPower(class osg::Vec3d const &, double, double);

    // RVA: 0x171E | Ordinal: 5919
        void setHPBW(double);

    // RVA: 0x171F | Ordinal: 5920
        void setHPBWvert(double);

    // RVA: 0x2F9 | Ordinal: 762
        void _avDirAntenna(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVDIRANTENNA_HPP
