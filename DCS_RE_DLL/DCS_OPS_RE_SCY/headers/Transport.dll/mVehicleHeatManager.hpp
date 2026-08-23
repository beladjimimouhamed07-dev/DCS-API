#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: mVehicleHeatManager
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class mVehicleHeatManager
{
public:

    // RVA: 0x13E | Ordinal: 319
        void addHeatToPart(int, float);

    // RVA: 0x1FC | Ordinal: 509
        void exportCoeffs(int, float *) const;

    // RVA: 0x1FD | Ordinal: 510
        void exportTemperatures(int, float *) const;

    // RVA: 0x24B | Ordinal: 588
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x255 | Ordinal: 598
        void getEnchancedVisibility(void);

    // RVA: 0x2F3 | Ordinal: 756
        void getTemperatures(void) const;

    // RVA: 0x32A | Ordinal: 811
        void init(float, bool);

    // RVA: 0x381 | Ordinal: 898
        void load(class Lua::Config &);

    // RVA: 0x19 | Ordinal: 26
        void mVehicleHeatManager(class mVehicleHeatManager &&);

    // RVA: 0x1A | Ordinal: 27
        void mVehicleHeatManager(class mVehicleHeatManager const &);

    // RVA: 0x1B | Ordinal: 28
        void mVehicleHeatManager(void);

    // RVA: 0x42A | Ordinal: 1067
        void readFLIRcoeffs(void);

    // RVA: 0x459 | Ordinal: 1114
        void resetBaseTemp(float);

    // RVA: 0x4A2 | Ordinal: 1187
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x4AA | Ordinal: 1195
        void setEnchancedVisibility(bool);

    // RVA: 0x4B7 | Ordinal: 1208
        void setHACforPart(int, float);

    // RVA: 0x4B8 | Ordinal: 1209
        void setHCCforPart(int, float);

    // RVA: 0x553 | Ordinal: 1364
        void update(double, float);

    // RVA: 0x55E | Ordinal: 1375
        void updateDeadCoeffs(double &, int, float *);

    // RVA: 0x570 | Ordinal: 1393
        void updateSunElevationCoeff(void);

    // RVA: 0x33 | Ordinal: 52
        void _mVehicleHeatManager(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_MVEHICLEHEATMANAGER_HPP
