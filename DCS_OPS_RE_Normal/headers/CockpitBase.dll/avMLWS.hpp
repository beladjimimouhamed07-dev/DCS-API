#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avMLWS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avMLWS
{
public:

    // RVA: 0x778 | Ordinal: 1913
        void ClearThreats(void);

    // RVA: 0x88A | Ordinal: 2187
        void SetCommand(int, float);

    // RVA: 0x8BD | Ordinal: 2238
        void SetThreatIsNotValid(int);

    // RVA: 0x8BE | Ordinal: 2239
        void SetThreatIsValid(int);

    // RVA: 0x150 | Ordinal: 337
        void avMLWS(class cockpit::avMLWS const &);

    // RVA: 0x151 | Ordinal: 338
        void avMLWS(void);

    // RVA: 0xA60 | Ordinal: 2657
        void checkThreatsSize(void);

    // RVA: 0xA78 | Ordinal: 2681
        void check_inside_eyes_fov(class wPosition3<double> const &, class osg::Vec3d const &) const;

    // RVA: 0xA90 | Ordinal: 2705
        void check_visible(class wPosition3<double> const &, class MovingObject *) const;

    // RVA: 0xBD2 | Ordinal: 3027
        void exist(class MovingObject *);

    // RVA: 0xBF2 | Ordinal: 3059
        void findByID(unsigned int);

    // RVA: 0xBF4 | Ordinal: 3061
        void findNewPlace(void);

    // RVA: 0xBF7 | Ordinal: 3064
        void findOldestThreat(double &);

    // RVA: 0xC9E | Ordinal: 3231
        void getElecPower(void) const;

    // RVA: 0xDEF | Ordinal: 3568
        void getSignalStreigth(class MovingObject *, class wPosition3<float> const &, int) const;

    // RVA: 0xE24 | Ordinal: 3621
        void getThreatsSize(void) const;

    // RVA: 0xEE9 | Ordinal: 3818
        void get_contacts(void);

    // RVA: 0xEEA | Ordinal: 3819
        void get_contacts(void) const;

    // RVA: 0xF79 | Ordinal: 3962
        void get_human_position(void) const;

    // RVA: 0x10A2 | Ordinal: 4259
        void get_spike(class cockpit::MLWS_contact &);

    // RVA: 0x10A3 | Ordinal: 4260
        void get_spike_world(class cockpit::MLWS_contact &);

    // RVA: 0x1112 | Ordinal: 4371
        void handler(class viObject *, class viSearch *, void *);

    // RVA: 0x1114 | Ordinal: 4373
        void handler_implement(class viObject *, class viSearch *);

    // RVA: 0x11CF | Ordinal: 4560
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x1230 | Ordinal: 4657
        void insert(class MovingObject *);

    // RVA: 0x1255 | Ordinal: 4694
        void isDegraded(void) const;

    // RVA: 0x142A | Ordinal: 5163
        void notify(class cockpit::MLWS_contact &);

    // RVA: 0x14B4 | Ordinal: 5301
        void play_message(unsigned int);

    // RVA: 0x16F0 | Ordinal: 5873
        void setElecPower(bool);

    // RVA: 0x1A5A | Ordinal: 6747
        void tryInsertThreat(class cockpit::MWS_Threat &);

    // RVA: 0x1ABE | Ordinal: 6847
        void update(void);

    // RVA: 0x1B5E | Ordinal: 7007
        void update_existing_contacts(void);

    // RVA: 0x1B61 | Ordinal: 7010
        void update_eye(class cockpit::avSensorEye &);

    // RVA: 0x1B80 | Ordinal: 7041
        void update_single_search(void);

    // RVA: 0x321 | Ordinal: 802
        void _avMLWS(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVMLWS_HPP
