#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Legacy_AFM_Base.dll
// Class: Tachometer_2TK2
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace AFM {

class Tachometer_2TK2
{
public:

    // RVA: 0x377 | Ordinal: 888
        void Construct(void);

    // RVA: 0x3DC | Ordinal: 989
        void Create(void);

    // RVA: 0x49A | Ordinal: 1179
        void LockLeftJetEngine(class AFM::JetEngine *);

    // RVA: 0x4A7 | Ordinal: 1192
        void LockRightJetEngine(class AFM::JetEngine *);

    // RVA: 0x4F5 | Ordinal: 1270
        void Simulation(double);

    // RVA: 0xDE | Ordinal: 223
        void Tachometer_2TK2(class AFM::Tachometer_2TK2 &&);

    // RVA: 0xDF | Ordinal: 224
        void Tachometer_2TK2(class AFM::Tachometer_2TK2 const &);

    // RVA: 0xE0 | Ordinal: 225
        void Tachometer_2TK2(void);

    // RVA: 0x62A | Ordinal: 1579
        void getIPointerLeftJetEngineIndicator(class AFM::Indicator **);

    // RVA: 0x62C | Ordinal: 1581
        void getIPointerLeftJetEngineSensor(class AFM::Sensor **);

    // RVA: 0x664 | Ordinal: 1637
        void getIPointerRightJetEngineIndicator(class AFM::Indicator **);

    // RVA: 0x666 | Ordinal: 1639
        void getIPointerRightJetEngineSensor(class AFM::Sensor **);

    // RVA: 0x14C | Ordinal: 333
        void _Tachometer_2TK2(void);
};

} // namespace AFM

// DCS_OPS_RE_LEGACY_AFM_BASE.DLL_TACHOMETER_2TK2_HPP
