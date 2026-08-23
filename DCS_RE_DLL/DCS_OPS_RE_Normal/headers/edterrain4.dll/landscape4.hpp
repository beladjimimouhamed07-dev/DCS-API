#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: edterrain4.dll
// Class: landscape4
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class landscape4
{
public:

    // RVA: 0x11F | Ordinal: 288
        void CreateITerrainStub(class landscape4::lTerraDispatchImpl *);

    // RVA: 0x120 | Ordinal: 289
        void CreateTerraDispatch(void);

    // RVA: 0x122 | Ordinal: 291
        void DeleteTerraDispatch(class landscape4::lTerraDispatchImpl *);

    // RVA: 0x123 | Ordinal: 292
        void GetTerraDispatch(void);

    // RVA: 0x124 | Ordinal: 293
        void GetTerraDispatchCore(void);

    // RVA: 0x12E | Ordinal: 303
        void SetTerraDispatch(class landscape4::lTerraDispatchImpl *);

    // RVA: 0x19B | Ordinal: 412
        void buildRoutes(struct landscape4::lRoadNetwork &, struct offshore::Scene &, double, struct landscape4::lRoutesFile &, class ed::vector<struct offshore::Notification, class ed::allocator<struct offshore::Notification>> &, double, bool, bool, bool, bool, struct offshore::Scene *);

    // RVA: 0x4A5 | Ordinal: 1190
        void loadCloudFromOffshore(struct offshore::Scene &, int, struct landscape4::lCloudType &);

    // RVA: 0x4A6 | Ordinal: 1191
        void loadCloudsFromOffshore(class ed::basic_string<char> const &, class std::map<class ed::basic_string<char>, struct landscape4::lCloudType, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, struct landscape4::lCloudType>>> &);

    // RVA: 0x51E | Ordinal: 1311
        void realtimeLightDeclFromParams(class std::map<class ed::basic_string<char>, class ed::basic_string<char>, struct std::less<class ed::basic_string<char>>, class ed::allocator<struct std::pair<class ed::basic_string<char> const, class ed::basic_string<char>>>> const &, class osg::Vec2f, class ed::basic_string<char> const &);

    // RVA: 0x51F | Ordinal: 1312
        void realtimeLightOptionsToString(int);

    // RVA: 0x520 | Ordinal: 1313
        void realtimeLightParamsFromOffshore(struct offshore::Scene const &, struct offshore::TreeNode const *, struct offshore::Light const &, class osg::Matrixd &, bool *);

    // RVA: 0x521 | Ordinal: 1314
        void realtimeLightTypeToString(enum landscape4::RealtimeLightDecl::Type);
};

// DCS_OPS_RE_EDTERRAIN4.DLL_LANDSCAPE4_HPP
