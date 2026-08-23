#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: CockpitBase.dll
// Class: avExternalCargoSpeech
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace cockpit {

class avExternalCargoSpeech
{
public:

    // RVA: 0x833 | Ordinal: 2100
        void OnCockpitEvent(class ed::basic_string<char> const &, class HeapVector<struct Graphics::DynamicParam> const &);

    // RVA: 0x8F7 | Ordinal: 2296
        void addAboveZone(void);

    // RVA: 0x8F8 | Ordinal: 2297
        void addAtHeight(void);

    // RVA: 0x8F9 | Ordinal: 2298
        void addAvulsion(void);

    // RVA: 0x8FA | Ordinal: 2299
        void addCargoSteering(void);

    // RVA: 0x8FC | Ordinal: 2301
        void addDriftingDown(void);

    // RVA: 0x8FE | Ordinal: 2303
        void addEndRadioClick(void);

    // RVA: 0x8FF | Ordinal: 2304
        void addFlight(void);

    // RVA: 0x900 | Ordinal: 2305
        void addFlightStabilityAfterSwing(void);

    // RVA: 0x901 | Ordinal: 2306
        void addFlightSwing(void);

    // RVA: 0x902 | Ordinal: 2307
        void addHooked(void);

    // RVA: 0x903 | Ordinal: 2308
        void addHovering(void);

    // RVA: 0x904 | Ordinal: 2309
        void addNearLuke(void);

    // RVA: 0x905 | Ordinal: 2310
        void addOneAxisMessages(class std::map<double, unsigned int, struct std::less<double>, class ed::allocator<struct std::pair<double const, unsigned int>>> const &);

    // RVA: 0x907 | Ordinal: 2312
        void addRopeIsTorn(void);

    // RVA: 0x908 | Ordinal: 2313
        void addRopeTighten(void);

    // RVA: 0x90D | Ordinal: 2318
        void addStartRadioClick(void);

    // RVA: 0x90F | Ordinal: 2320
        void addTakeOff(void);

    // RVA: 0x910 | Ordinal: 2321
        void addTension(void);

    // RVA: 0x911 | Ordinal: 2322
        void addThreeAxisMessages(class ed::vector<struct cockpit::avExternalCargoSpeech::speechDataSteering, class ed::allocator<struct cockpit::avExternalCargoSpeech::speechDataSteering>> const &, class Math::Vector<3, double> const &, class std::array<class std::function<void __cdecl(class ed::deque<unsigned int, class ed::allocator<unsigned int>> &, double, int, int)>, 3> const &);

    // RVA: 0x912 | Ordinal: 2323
        void addUnhooked(void);

    // RVA: 0x913 | Ordinal: 2324
        void addUnhooking(void);

    // RVA: 0x914 | Ordinal: 2325
        void addZoneSteering(void);

    // RVA: 0x10D | Ordinal: 270
        void avExternalCargoSpeech(class cockpit::avExternalCargoSpeech &&);

    // RVA: 0x10E | Ordinal: 271
        void avExternalCargoSpeech(class cockpit::avExternalCargoSpeech const &);

    // RVA: 0x10F | Ordinal: 272
        void avExternalCargoSpeech(void);

    // RVA: 0xA5D | Ordinal: 2654
        void checkSwingMessageCommonConditions(unsigned char);

    // RVA: 0xA5E | Ordinal: 2655
        void checkSwingMessageConditions(void);

    // RVA: 0xA5F | Ordinal: 2656
        void checkSwingMessageLastConditions(unsigned char);

    // RVA: 0xAEA | Ordinal: 2795
        void computeDriftingDown(void);

    // RVA: 0xAEB | Ordinal: 2796
        void computeFlightSpeech(void);

    // RVA: 0xAEC | Ordinal: 2797
        void computeSpeechAfterHooking(class IExternalCargo *);

    // RVA: 0xAED | Ordinal: 2798
        void computeSpeechBeforeHooking(void);

    // RVA: 0xAEE | Ordinal: 2799
        void computeUnhookSpeechWithZones(void);

    // RVA: 0xAEF | Ordinal: 2800
        void computeUnhookSpeechWithoutZones(void);

    // RVA: 0xB69 | Ordinal: 2922
        void detectCargoIsDeviated(unsigned char, class std::vector<double, class std::allocator<double>> const &);

    // RVA: 0xB6A | Ordinal: 2923
        void detectStabilityAfterSwing(void);

    // RVA: 0xB6B | Ordinal: 2924
        void detectSwingMessagesWillBePlayed(void);

    // RVA: 0xE37 | Ordinal: 3640
        void getUnitSystemType(struct lua_State *);

    // RVA: 0x1158 | Ordinal: 4441
        void initCargoAvulsionData(void);

    // RVA: 0x1159 | Ordinal: 4442
        void initCargoSpeechData(void);

    // RVA: 0x115A | Ordinal: 4443
        void initCargoSpeechData_XZ(void) const;

    // RVA: 0x115B | Ordinal: 4444
        void initCargoSpeechData_Y(void) const;

    // RVA: 0x115C | Ordinal: 4445
        void initCargoSteeringData(void) const;

    // RVA: 0x115D | Ordinal: 4446
        void initDriftingDownData(void);

    // RVA: 0x1160 | Ordinal: 4449
        void initHeight(void) const;

    // RVA: 0x1169 | Ordinal: 4458
        void initLongitudinalDirection(void) const;

    // RVA: 0x1174 | Ordinal: 4469
        void initSwingData(void);

    // RVA: 0x1175 | Ordinal: 4470
        void initTransverseDirection(void) const;

    // RVA: 0x1176 | Ordinal: 4471
        void initZoneSteeringData(void);

    // RVA: 0x1177 | Ordinal: 4472
        void initZoneSteeringData_XZ_add(class std::map<double, unsigned int, struct std::less<double>, class ed::allocator<struct std::pair<double const, unsigned int>>> &) const;

    // RVA: 0x11B7 | Ordinal: 4536
        void initialize(unsigned char, class ed::basic_string<char> const &, class ed::basic_string<char> const &);

    // RVA: 0x123F | Ordinal: 4672
        void interruptMessage(void);

    // RVA: 0x14B3 | Ordinal: 5300
        void playSpeech(double);

    // RVA: 0x14BE | Ordinal: 5311
        void postPostInit(void);

    // RVA: 0x14E0 | Ordinal: 5345
        void post_initialize(void);

    // RVA: 0x19D7 | Ordinal: 6616
        void startMessage(unsigned int);

    // RVA: 0x1A00 | Ordinal: 6657
        void stopMessage(void);

    // RVA: 0x1AB0 | Ordinal: 6833
        void update(void);

    // RVA: 0x302 | Ordinal: 771
        void _avExternalCargoSpeech(void);
};

} // namespace cockpit

// DCS_OPS_RE_COCKPITBASE.DLL_AVEXTERNALCARGOSPEECH_HPP
