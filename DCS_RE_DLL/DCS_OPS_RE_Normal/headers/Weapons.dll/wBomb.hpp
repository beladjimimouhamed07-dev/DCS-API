#pragma once

// ============================================================
// AUTO-GENERATED RE HEADER
// ============================================================
// DLL: Weapons.dll
// Class: wBomb
//
// WARNING:
// This is an export-derived RE interface.
// It is NOT a complete ABI reconstruction.
// Validate layout/vtables/calling conventions in Ghidra/x64dbg.
// ============================================================

class wBomb
{
public:

    // RVA: 0x153 | Ordinal: 340
        void Bomb_Limits(void);

    // RVA: 0x16A | Ordinal: 363
        void Class(void) const;

    // RVA: 0x172 | Ordinal: 371
        void Control(void);

    // RVA: 0x176 | Ordinal: 375
        void Control_Vel(void);

    // RVA: 0x178 | Ordinal: 377
        void Control_wBomb(void);

    // RVA: 0x17B | Ordinal: 380
        void CreateLight(void);

    // RVA: 0x180 | Ordinal: 385
        void DrawArgument_(void);

    // RVA: 0x196 | Ordinal: 407
        void GetDrawArguments(void);

    // RVA: 0x19E | Ordinal: 415
        void GetN2Position(void);

    // RVA: 0x1C2 | Ordinal: 451
        void In_Air_(void);

    // RVA: 0x1C4 | Ordinal: 453
        void Init(void);

    // RVA: 0x1DB | Ordinal: 476
        void NextTime(void);

    // RVA: 0x1E7 | Ordinal: 488
        void Parse(class Graphics::ModelParser &, class wPosition3<float> const &, class Graphics::effectState *);

    // RVA: 0x1ED | Ordinal: 494
        void Position(double);

    // RVA: 0x203 | Ordinal: 516
        void Set_Ag(void);

    // RVA: 0x20F | Ordinal: 528
        void Target_ID(void) const;

    // RVA: 0x214 | Ordinal: 533
        void Update_nv(void);

    // RVA: 0x215 | Ordinal: 534
        void UseChildren(double, enum viArgumentPurpose);

    // RVA: 0x254 | Ordinal: 597
        void assignTargetPoint(class osg::Vec3f const &);

    // RVA: 0x2E7 | Ordinal: 744
        void create(unsigned int, unsigned int, class osg::Vec3f const &, class wsType, class wPosition3<float> const &, class osg::Vec3f &, unsigned int, class ed::vector<float, class ed::allocator128<float>> const &, bool);

    // RVA: 0x2E8 | Ordinal: 745
        void create(unsigned int, unsigned int, class osg::Vec3f const &, class wsType, class wPosition3<float> const &, class osg::Vec3f &, unsigned int, unsigned char, class ed::vector<class osg::Vec3f, class ed::allocator<class osg::Vec3f>> const &, int, bool);

    // RVA: 0x2F6 | Ordinal: 759
        void doExplode(class osg::Vec3f const &, unsigned int);

    // RVA: 0x3C3 | Ordinal: 964
        void getHost(void) const;

    // RVA: 0x3F4 | Ordinal: 1013
        void getNameDescriptor(void) const;

    // RVA: 0x457 | Ordinal: 1112
        void get_cluster_rot_pos(void);

    // RVA: 0x456 | Ordinal: 1111
        void get_cluster_rot_pos0(void);

    // RVA: 0x474 | Ordinal: 1141
        void get_wBombHotJoin(struct wBombHotJoin &) const;

    // RVA: 0x49F | Ordinal: 1184
        void initialization(void);

    // RVA: 0x51D | Ordinal: 1310
        void netCreate(struct wBombHotJoin const &);

    // RVA: 0x527 | Ordinal: 1320
        void netGetCreate(class Mail::Message &) const;

    // RVA: 0x5EB | Ordinal: 1516
        void setBomb(unsigned int, unsigned int, class osg::Vec3f const &, class wsType, class wPosition3<float> const &, class osg::Vec3f const &, class ed::vector<float, class ed::allocator128<float>> const &);

    // RVA: 0x63C | Ordinal: 1597
        void setTime(float);

    // RVA: 0x676 | Ordinal: 1655
        void substituteShape(int);

    // RVA: 0x48 | Ordinal: 73
        void wBomb(void);

    // RVA: 0x7A | Ordinal: 123
        void _wBomb(void);
};

// DCS_OPS_RE_WEAPONS.DLL_WBOMB_HPP
