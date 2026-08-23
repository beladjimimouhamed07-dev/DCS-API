#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: rts.dll
// Class: RTSDCS
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

namespace rtsdcs {

class RTSDCS
{
public:

    // RVA: 0x0 | Ordinal: 1
        void RTSDCS(void);

    // RVA: 0x10 | Ordinal: 17
        void addPerformer(class ed::basic_string<char> const &, class ed::basic_string<char> const &, bool);

    // RVA: 0x12 | Ordinal: 19
        void addPylonLoadToConfig(char const *, char const *, class std::map<unsigned int, class ed::basic_string<char>, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, class ed::basic_string<char>>>> const &);

    // RVA: 0x16 | Ordinal: 23
        void addTaskToConfig(char const *, char const *, char const *);

    // RVA: 0x1E | Ordinal: 31
        void calcOperation(class ed::basic_string<char> const &, bool);

    // RVA: 0x1F | Ordinal: 32
        void close(void);

    // RVA: 0x21 | Ordinal: 34
        void createUDOrder(class ed::basic_string<char> &, class ed::basic_string<char> const &, class ed::basic_string<char> const &, bool, class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &, struct rtsdcs::VecRoute, bool, float);

    // RVA: 0x23 | Ordinal: 36
        void delOperation(class ed::basic_string<char> const &, bool) const;

    // RVA: 0x27 | Ordinal: 40
        void deleteUDOrder(class ed::basic_string<char> const &, class ed::basic_string<char> const &, bool);

    // RVA: 0x2B | Ordinal: 44
        void enoughResources(class ed::basic_string<char> const &, class ed::basic_string<char> const &, bool);

    // RVA: 0x2E | Ordinal: 47
        void first(class rtsdcs::SystemTime &);

    // RVA: 0x30 | Ordinal: 49
        void getApt(char const *) const;

    // RVA: 0x31 | Ordinal: 50
        void getAutoStrateg(bool &, bool &, class ed::basic_string<char> &, bool);

    // RVA: 0x32 | Ordinal: 51
        void getDefenceParam(float &, int &, int &, int &, float &, float &, float &, float &, bool);

    // RVA: 0x33 | Ordinal: 52
        void getDistForUnit(class ed::basic_string<char> const &, double &);

    // RVA: 0x34 | Ordinal: 53
        void getDistForWeapon(class ed::basic_string<char> const &);

    // RVA: 0x39 | Ordinal: 58
        void getPathParam(class ed::list<struct rtsdcs::ParamInfo, class ed::allocator<struct rtsdcs::ParamInfo>> &, bool);

    // RVA: 0x3B | Ordinal: 60
        void getRTSInfo(struct rtsdcs::RtsInfoJsn &, double &);

    // RVA: 0x3C | Ordinal: 61
        void getRTSInfo(struct rtsdcs::RtsInfoJsn &, class ed::list<struct rtsdcs::Spot, class ed::allocator<struct rtsdcs::Spot>> &, class ed::list<struct rtsdcs::Spot, class ed::allocator<struct rtsdcs::Spot>> &, class ed::list<struct rtsdcs::Spot, class ed::allocator<struct rtsdcs::Spot>> &, double &);

    // RVA: 0x3E | Ordinal: 63
        void getRegFromName(class ed::basic_string<char> const &);

    // RVA: 0x40 | Ordinal: 65
        void getRegionsWeight(class std::map<int, float, struct std::less<int>, class ed::allocator<struct std::pair<int const, float>>> &, bool);

    // RVA: 0x41 | Ordinal: 66
        void getSpeed(class ed::basic_string<char> const &, float) const;

    // RVA: 0x42 | Ordinal: 67
        void getSusps(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class std::map<class ed::basic_string<char>, class std::map<unsigned int, struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>>>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class std::map<unsigned int, struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, struct std::pair<class ed::basic_string<char>, class ed::basic_string<char>>>>>>>> &);

    // RVA: 0x43 | Ordinal: 68
        void getSusps(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class std::map<class ed::basic_string<char>, class std::map<unsigned int, class ed::basic_string<char>, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, class ed::basic_string<char>>>>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class std::map<unsigned int, class ed::basic_string<char>, struct std::less<unsigned int>, class ed::allocator<struct std::pair<unsigned int const, class ed::basic_string<char>>>>>>> &);

    // RVA: 0x45 | Ordinal: 70
        void getTargetsGroups(class ed::list<struct rtsdcs::VecRoute, class ed::allocator<struct rtsdcs::VecRoute>> &, class ed::list<struct rtsdcs::VecRoute, class ed::allocator<struct rtsdcs::VecRoute>> &);

    // RVA: 0x46 | Ordinal: 71
        void getTargetsWeight(class std::map<class ed::basic_string<char>, float, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, float>>> &, bool &, float &, bool);

    // RVA: 0x47 | Ordinal: 72
        void getTasksFor(class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::basic_string<char> const &, class ed::vector<class ed::basic_string<char>, class ed::allocator<class ed::basic_string<char>>> &);

    // RVA: 0x49 | Ordinal: 74
        void getTypeByModel(char const *) const;

    // RVA: 0x4C | Ordinal: 77
        void getUDOrder(class ed::basic_string<char> const &, class ed::basic_string<char> const &, bool, class ed::basic_string<char> &);

    // RVA: 0x4D | Ordinal: 78
        void getUnitPath(class ed::basic_string<char> const &, class ed::basic_string<char> &, bool) const;

    // RVA: 0x50 | Ordinal: 81
        void getWinMode(void) const;

    // RVA: 0x52 | Ordinal: 83
        void getWinner(void) const;

    // RVA: 0x53 | Ordinal: 84
        void isLoaded(void) const;

    // RVA: 0x54 | Ordinal: 85
        void isStarted(void);

    // RVA: 0x58 | Ordinal: 89
        void newOperation(class ed::basic_string<char> const &, double, double, double, class ed::basic_string<char> const &, double, bool);

    // RVA: 0x59 | Ordinal: 90
        void nextUDOrder(class ed::basic_string<char> &, class ed::basic_string<char> const &, bool, bool);

    // RVA: 0x5A | Ordinal: 91
        void open(char const *, unsigned int, unsigned int);

    // RVA: 0x5C | Ordinal: 93
        void remPerformer(class ed::basic_string<char> const &, class ed::basic_string<char> const &, bool);

    // RVA: 0x5D | Ordinal: 94
        void run(float, class ed::basic_string<char> const &);

    // RVA: 0x5E | Ordinal: 95
        void save(char const *);

    // RVA: 0x60 | Ordinal: 97
        void second(class rtsdcs::SystemTime &);

    // RVA: 0x62 | Ordinal: 99
        void setAutoStrateg(bool, bool, bool);

    // RVA: 0x63 | Ordinal: 100
        void setDefenceOnly(bool, bool);

    // RVA: 0x64 | Ordinal: 101
        void setDefenceParam(float, int, int, int, float, float, float, float, bool);

    // RVA: 0x65 | Ordinal: 102
        void setEvent(char const *) const;

    // RVA: 0x67 | Ordinal: 104
        void setParam(char const *) const;

    // RVA: 0x68 | Ordinal: 105
        void setPathParam(class ed::list<struct rtsdcs::ParamInfo, class ed::allocator<struct rtsdcs::ParamInfo>> const &, bool);

    // RVA: 0x69 | Ordinal: 106
        void setRadBubles(double) const;

    // RVA: 0x6A | Ordinal: 107
        void setRegionsWeight(class std::map<int, float, struct std::less<int>, class ed::allocator<struct std::pair<int const, float>>> const &, bool);

    // RVA: 0x6C | Ordinal: 109
        void setStartFlyableStart(char const *) const;

    // RVA: 0x6D | Ordinal: 110
        void setTargetGame(class ed::basic_string<char> const &);

    // RVA: 0x6E | Ordinal: 111
        void setTargetsWeight(class std::map<class ed::basic_string<char>, float, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, float>>> const &, bool, float, bool);

    // RVA: 0x6F | Ordinal: 112
        void setTicks(double, double, double) const;

    // RVA: 0x2 | Ordinal: 3
        void _RTSDCS(void);
};

} // namespace rtsdcs

// DCS_OPS_RE_RTS.DLL_RTSDCS_HPP
