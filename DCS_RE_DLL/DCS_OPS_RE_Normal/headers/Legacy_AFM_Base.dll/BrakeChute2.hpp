#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: BrakeChute2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class BrakeChute2
{
public:

    // RVA: 0x21 | Ordinal: 34
        void BrakeChute2(class AFM::BrakeChute2 &&);

    // RVA: 0x22 | Ordinal: 35
        void BrakeChute2(class AFM::BrakeChute2 const &);

    // RVA: 0x23 | Ordinal: 36
        void BrakeChute2(void);

    // RVA: 0x346 | Ordinal: 839
        void Construct(void);

    // RVA: 0x39E | Ordinal: 927
        void Create(void);

    // RVA: 0x482 | Ordinal: 1155
        void LockElectroSystem(class AFM::ElectroSystem *);

    // RVA: 0x4B8 | Ordinal: 1209
        void LostBrakeChute(void);

    // RVA: 0x4C4 | Ordinal: 1221
        void ResetBrakeChute(void);

    // RVA: 0x4D6 | Ordinal: 1239
        void Simulation(double);

    // RVA: 0x587 | Ordinal: 1416
        void getBrakeChuteAzimuth(double *);

    // RVA: 0x588 | Ordinal: 1417
        void getBrakeChuteElevation(double *);

    // RVA: 0x589 | Ordinal: 1418
        void getBrakeChuteHorizontalDeviation(double *);

    // RVA: 0x58A | Ordinal: 1419
        void getBrakeChutePhase(double *);

    // RVA: 0x58B | Ordinal: 1420
        void getBrakeChuteVerticalDeviation(double *);

    // RVA: 0x59E | Ordinal: 1439
        void getFailureBrakeChute(int *);

    // RVA: 0x5C4 | Ordinal: 1477
        void getHatchPhase(double *);

    // RVA: 0x5DA | Ordinal: 1499
        void getIPointerBrakeChuteDrawSwitch(class AFM::Switch **);

    // RVA: 0x5DB | Ordinal: 1500
        void getIPointerBrakeChuteLostSwitch(class AFM::Switch **);

    // RVA: 0x5DC | Ordinal: 1501
        void getIPointerBrakeChuteStructureMember(class AFM::StructureMember **);

    // RVA: 0x78E | Ordinal: 1935
        void setBrakeChuteAzimuth(double);

    // RVA: 0x78F | Ordinal: 1936
        void setBrakeChuteElevation(double);

    // RVA: 0x790 | Ordinal: 1937
        void setBrakeChuteHorizontalDeviation(double);

    // RVA: 0x791 | Ordinal: 1938
        void setBrakeChutePhase(double);

    // RVA: 0x792 | Ordinal: 1939
        void setBrakeChuteVerticalDeviation(double);

    // RVA: 0x7A7 | Ordinal: 1960
        void setFailureBrakeChute(int);

    // RVA: 0x7CB | Ordinal: 1996
        void setHatchPhase(double);

    // RVA: 0x10D | Ordinal: 270
        void _BrakeChute2(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_BRAKECHUTE2_HPP
