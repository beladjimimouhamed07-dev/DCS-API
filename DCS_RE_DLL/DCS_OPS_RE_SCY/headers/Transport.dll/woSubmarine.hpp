#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Transport.dll
// Class: woSubmarine
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class woSubmarine
{
public:

    // RVA: 0xD6 | Ordinal: 215
        void GetPoint(double);

    // RVA: 0xE1 | Ordinal: 226
        void Hrad(void);

    // RVA: 0xFD | Ordinal: 254
        void Parse(class Graphics::ModelParser &, class wPosition3<float> const &, class Graphics::effectState *);

    // RVA: 0x103 | Ordinal: 260
        void Position(double);

    // RVA: 0x1A3 | Ordinal: 420
        void controlLinearVelocity(double);

    // RVA: 0x1A4 | Ordinal: 421
        void controlPeriscope(void);

    // RVA: 0x1A7 | Ordinal: 424
        void controlVerticalVelocity(double);

    // RVA: 0x1AE | Ordinal: 431
        void create(struct woShip::InitShip *, class wcSquadron *);

    // RVA: 0x1EE | Ordinal: 495
        void doControl(double &);

    // RVA: 0x21F | Ordinal: 544
        void getBaseSubmerson(void) const;

    // RVA: 0x246 | Ordinal: 583
        void getDetectionPoint(void);

    // RVA: 0x24E | Ordinal: 591
        void getDiffInitStatus(class Mail::Writer &);

    // RVA: 0x292 | Ordinal: 659
        void getManagerSensorHeight(void) const;

    // RVA: 0x337 | Ordinal: 824
        void initObject(struct woShip::InitShip const *);

    // RVA: 0x36F | Ordinal: 880
        void is_master_arm_on(bool) const;

    // RVA: 0x372 | Ordinal: 883
        void is_master_arm_on_or_activating(void) const;

    // RVA: 0x373 | Ordinal: 884
        void is_periscope_up(void) const;

    // RVA: 0x3A5 | Ordinal: 934
        void master_arm_on(bool);

    // RVA: 0x3DC | Ordinal: 989
        void netNextTime(double &);

    // RVA: 0x403 | Ordinal: 1028
        void prepareToDive(void);

    // RVA: 0x4A5 | Ordinal: 1190
        void setDiffInitStatus(class Mail::Reader &);

    // RVA: 0x4D9 | Ordinal: 1242
        void setRequiredDepth(float);

    // RVA: 0x561 | Ordinal: 1378
        void updateDrawArguments(void);

    // RVA: 0x569 | Ordinal: 1386
        void updatePeriscope(double &);

    // RVA: 0x29 | Ordinal: 42
        void woSubmarine(void);

    // RVA: 0x3E | Ordinal: 63
        void _woSubmarine(void);
};

// DCS_OPS_RE_TRANSPORT.DLL_WOSUBMARINE_HPP
