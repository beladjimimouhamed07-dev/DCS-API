#include "avMovingMap.dll.h"


pointer[7] vftable;
pointer[3] vftable;
pointer[4] vftable{for_cockpit::SimpleOctTreeLoad};
pointer[1] vftable{for_cockpit::avDrawCachedObj};
pointer[2] vftable{for_Common::FakeUnknown<Common::Identifiable>};
pointer[2] vftable;
pointer[8] vftable;
float DAT_7ff89358cc34;
float DAT_7ff89358d238;
undefined DAT_7ff89358dde0;
uint DAT_7ff89358cdb0;
float DAT_7ff893595ae0;
undefined8 UNK_7ff89358dde8;
double DAT_7ff89358f690;
ulonglong DAT_7ff89368e840;
string s_ed_malloc_7ff89358cbc0;
undefined DAT_7ff893595ae4;
undefined DAT_7ff8936a1050;

// public: float __cdecl cockpit::avMovingMap_Cursor::getX(void)const __ptr64

float __thiscall cockpit::avMovingMap_Cursor::getX(avMovingMap_Cursor *this)

{
                    // 0x225210  3667  ?getX@avMovingMap_Cursor@cockpit@@QEBAMXZ
                    // 0x225210  4141  ?get_pressure@GyroAirSource@cockpit@@QEBAMXZ
  return *(float *)(this + 0x28);
}



// public: class wPosition3<double> const & __ptr64 __cdecl
// cockpit::avMovingMapPoint::getPosition(void)const __ptr64

wPosition3<double> * __thiscall cockpit::avMovingMapPoint::getPosition(avMovingMapPoint *this)

{
                    // 0x2530a0  3491
                    // ?getPosition@avMovingMapPoint@cockpit@@QEBAAEBV?$wPosition3@N@@XZ
                    // 0x2530a0  3591
                    // ?getState@avEmbeddedNavigation@cockpit@@UEAAAEAUEmbeddedNavigationStateVector@IavEmbeddedNavigation@2@XZ
                    // 0x2530a0  4249
                    // ?get_sight_data@SightDevice@cockpit@@QEBAAEBUSightingData@2@XZ
  return (wPosition3<double> *)(this + 0xa0);
}



// public: __cdecl cockpit::avMovingMap::avMovingMap(class cockpit::avMovingMap const & __ptr64)
// __ptr64

avMovingMap * __thiscall cockpit::avMovingMap::avMovingMap(avMovingMap *this,avMovingMap *param_1)

{
                    // 0x255a50  354  ??0avMovingMap@cockpit@@QEAA@AEBV01@@Z
  *(undefined ***)this = vftable;
  FUN_7ff8933a4ab0(this + 8,param_1 + 8);
  *(undefined8 *)(this + 0x318) = *(undefined8 *)(param_1 + 0x318);
  *(undefined8 *)(this + 800) = *(undefined8 *)(param_1 + 800);
  *(undefined4 *)(this + 0x328) = *(undefined4 *)(param_1 + 0x328);
  return this;
}



// public: __cdecl cockpit::avMovingMapPoint::avMovingMapPoint(class cockpit::avMovingMapPoint const
// & __ptr64) __ptr64

avMovingMapPoint * __thiscall
cockpit::avMovingMapPoint::avMovingMapPoint(avMovingMapPoint *this,avMovingMapPoint *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
                    // 0x255ab0  356  ??0avMovingMapPoint@cockpit@@QEAA@AEBV01@@Z
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = SimpleOctTreeLoad::vftable;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x1c) = uVar3;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  this[0x30] = param_1[0x30];
  this[0x31] = param_1[0x31];
  FUN_7ff8933a4ff0(this + 0x38,param_1 + 0x38);
  Common::FakeUnknown<>::FakeUnknown<>
            ((FakeUnknown<> *)(this + 0x58),(FakeUnknown<> *)(param_1 + 0x58));
  *(undefined ***)this = vftable_for_cockpit__SimpleOctTreeLoad_;
  *(undefined ***)(this + 0x38) = vftable_for_cockpit__avDrawCachedObj_;
  *(undefined ***)(this + 0x58) = vftable_for_Common__FakeUnknown<Common::Identifiable>_;
  FUN_7ff89332f690(this + 0x70,param_1 + 0x70);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  this[0x98] = param_1[0x98];
  *(undefined8 *)(this + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(this + 0xc0) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(this + 0xd0) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(this + 0xe8) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(this + 0x100) = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(this + 0x110) = *(undefined8 *)(param_1 + 0x110);
  uVar4 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(this + 0x120) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(this + 0x128) = uVar4;
  *(undefined8 *)(this + 0x130) = *(undefined8 *)(param_1 + 0x130);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_1 + 0x138);
  return this;
}



// public: __cdecl cockpit::avMovingMap_Cursor::avMovingMap_Cursor(class cockpit::avMovingMap_Cursor
// const & __ptr64) __ptr64

avMovingMap_Cursor * __thiscall
cockpit::avMovingMap_Cursor::avMovingMap_Cursor
          (avMovingMap_Cursor *this,avMovingMap_Cursor *param_1)

{
                    // 0x255ce0  358  ??0avMovingMap_Cursor@cockpit@@QEAA@AEBV01@@Z
  *(undefined ***)this = vftable;
  if (this + 8 != param_1 + 8) {
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  }
  if (this + 0x18 != param_1 + 0x18) {
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  this[0x38] = param_1[0x38];
  this[0x39] = param_1[0x39];
  return this;
}



// public: virtual __cdecl cockpit::avMovingMap::~avMovingMap(void) __ptr64

void __thiscall cockpit::avMovingMap::~avMovingMap(avMovingMap *this)

{
                    // 0x2560c0  811  ??1avMovingMap@cockpit@@UEAA@XZ
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x210) = ClipVolume::vftable;
  *(undefined ***)(this + 0x10) = ClipVolume::vftable;
  return;
}



// public: class cockpit::avMovingMap & __ptr64 __cdecl cockpit::avMovingMap::operator=(class
// cockpit::avMovingMap const & __ptr64) __ptr64

avMovingMap * __thiscall cockpit::avMovingMap::operator=(avMovingMap *this,avMovingMap *param_1)

{
                    // 0x2567d0  1120  ??4avMovingMap@cockpit@@QEAAAEAV01@AEBV01@@Z
  FUN_7ff8933a6100(this + 8,param_1 + 8);
  *(undefined8 *)(this + 0x318) = *(undefined8 *)(param_1 + 0x318);
  *(undefined8 *)(this + 800) = *(undefined8 *)(param_1 + 800);
  *(undefined4 *)(this + 0x328) = *(undefined4 *)(param_1 + 0x328);
  return this;
}



// public: class cockpit::avMovingMapPoint & __ptr64 __cdecl
// cockpit::avMovingMapPoint::operator=(class cockpit::avMovingMapPoint const & __ptr64) __ptr64

avMovingMapPoint * __thiscall
cockpit::avMovingMapPoint::operator=(avMovingMapPoint *this,avMovingMapPoint *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  avMovingMapPoint *paVar5;
  
                    // 0x256830  1121  ??4avMovingMapPoint@cockpit@@QEAAAEAV01@AEBV01@@Z
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x1c) = uVar3;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  this[0x30] = param_1[0x30];
  this[0x31] = param_1[0x31];
  FUN_7ff893351c60(this + 0x40,param_1 + 0x40);
  Common::FakeUnknown<>::operator=((FakeUnknown<> *)(this + 0x58),(FakeUnknown<> *)(param_1 + 0x58))
  ;
  paVar5 = param_1 + 0x70;
  if (this + 0x70 != paVar5) {
    if (0xf < *(ulonglong *)(param_1 + 0x88)) {
      paVar5 = *(avMovingMapPoint **)paVar5;
    }
    FUN_7ff893330b10(this + 0x70,paVar5,*(undefined8 *)(param_1 + 0x80));
  }
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  this[0x98] = param_1[0x98];
  if (this + 0xa0 != param_1 + 0xa0) {
    *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(this + 0xc0) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(this + 0xd0) = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(this + 0xe8) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(this + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(this + 0x100) = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(this + 0x110) = *(undefined8 *)(param_1 + 0x110);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(this + 0x120) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(this + 0x128) = uVar4;
  *(undefined8 *)(this + 0x130) = *(undefined8 *)(param_1 + 0x130);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_1 + 0x138);
  return this;
}



// public: class cockpit::avMovingMap_Cursor & __ptr64 __cdecl
// cockpit::avMovingMap_Cursor::operator=(class cockpit::avMovingMap_Cursor const & __ptr64) __ptr64

avMovingMap_Cursor * __thiscall
cockpit::avMovingMap_Cursor::operator=(avMovingMap_Cursor *this,avMovingMap_Cursor *param_1)

{
                    // 0x256980  1122  ??4avMovingMap_Cursor@cockpit@@QEAAAEAV01@AEBV01@@Z
  if (this + 8 != param_1 + 8) {
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  }
  if (this + 0x18 != param_1 + 0x18) {
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  this[0x38] = param_1[0x38];
  this[0x39] = param_1[0x39];
  return this;
}



// public: class ed::basic_string<char> const & __ptr64 __cdecl
// cockpit::avMovingMapPoint::getName(void)const __ptr64

basic_string<char> * __thiscall cockpit::avMovingMapPoint::getName(avMovingMapPoint *this)

{
                    // 0x258630  3435
                    // ?getName@avMovingMapPoint@cockpit@@QEBAAEBV?$basic_string@D@ed@@XZ
  return (basic_string<char> *)(this + 0x70);
}



// public: int __cdecl cockpit::avMovingMapPoint::getNumber(void)const __ptr64

int __thiscall cockpit::avMovingMapPoint::getNumber(avMovingMapPoint *this)

{
                    // 0x258640  3445  ?getNumber@avMovingMapPoint@cockpit@@QEBAHXZ
  return *(int *)(this + 0x138);
}



// public: class osg::Vec3d const & __ptr64 __cdecl cockpit::avMovingMapPoint::getPoint(void)const
// __ptr64

Vec3d * __thiscall cockpit::avMovingMapPoint::getPoint(avMovingMapPoint *this)

{
                    // 0x258650  3486  ?getPoint@avMovingMapPoint@cockpit@@QEBAAEBVVec3d@osg@@XZ
                    // 0x258650  4122  ?get_polar_position@avPadlock@cockpit@@QEBAAEBVPolar@Math@@XZ
  return (Vec3d *)(this + 0x100);
}



// public: unsigned int __cdecl cockpit::avMovingMapPoint::getSubType(void)const __ptr64

uint __thiscall cockpit::avMovingMapPoint::getSubType(avMovingMapPoint *this)

{
                    // 0x258660  3607  ?getSubType@avMovingMapPoint@cockpit@@QEBAIXZ
  return *(uint *)(this + 0x94);
}



// public: unsigned int __cdecl cockpit::avMovingMapPoint::getType(void)const __ptr64

uint __thiscall cockpit::avMovingMapPoint::getType(avMovingMapPoint *this)

{
                    // 0x258670  3635  ?getType@avMovingMapPoint@cockpit@@QEBAIXZ
  return *(uint *)(this + 0x90);
}



// public: float __cdecl cockpit::avMovingMap_Cursor::getY(void)const __ptr64

float __thiscall cockpit::avMovingMap_Cursor::getY(avMovingMap_Cursor *this)

{
                    // 0x258680  3668  ?getY@avMovingMap_Cursor@cockpit@@QEBAMXZ
  return *(float *)(this + 0x2c);
}



// public: virtual class Graphics::Camera const & __ptr64 __cdecl
// cockpit::avMovingMap::get_camera(void) __ptr64

Camera * __thiscall cockpit::avMovingMap::get_camera(avMovingMap *this)

{
  Camera *pCVar1;
  
                    // 0x258690  3785  ?get_camera@avMovingMap@cockpit@@UEAAAEBVCamera@Graphics@@XZ
  pCVar1 = get_camera(this,false,DAT_7ff89358d238,DAT_7ff89358cc34,DAT_7ff89358d238,DAT_7ff89358cc34
                     );
  return pCVar1;
}



// public: bool __cdecl cockpit::avMovingMap_Cursor::in_slew(void)const __ptr64

bool __thiscall cockpit::avMovingMap_Cursor::in_slew(avMovingMap_Cursor *this)

{
                    // 0x258a40  4425  ?in_slew@avMovingMap_Cursor@cockpit@@QEBA_NXZ
  if ((this[0x38] == (avMovingMap_Cursor)0x0) && (this[0x39] == (avMovingMap_Cursor)0x0)) {
    return false;
  }
  return true;
}



// public: virtual void __cdecl cockpit::avMovingMapPoint::setName(class ed::basic_string<char>
// const & __ptr64) __ptr64

void __thiscall
cockpit::avMovingMapPoint::setName(avMovingMapPoint *this,basic_string<char> *param_1)

{
  basic_string<char> *pbVar1;
  
                    // 0x25a8b0  5987
                    // ?setName@avMovingMapPoint@cockpit@@UEAAXAEBV?$basic_string@D@ed@@@Z
  if (this + 0x70 != (avMovingMapPoint *)param_1) {
    pbVar1 = param_1 + 0x10;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(basic_string<char> **)param_1;
    }
    FUN_7ff893330b10(this + 0x70,param_1,*(undefined8 *)pbVar1);
    return;
  }
  return;
}



// public: void __cdecl cockpit::avMovingMapPoint::setNameRaw(class
// std::basic_string_view<char,struct std::char_traits<char> >) __ptr64

void __thiscall cockpit::avMovingMapPoint::setNameRaw(avMovingMapPoint *this,undefined8 *param_2)

{
                    // 0x25a8d0  5989
                    // ?setNameRaw@avMovingMapPoint@cockpit@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
  FUN_7ff893330b10(this + 0x70,*param_2,param_2[1]);
  return;
}



// public: void __cdecl cockpit::avMovingMapPoint::setNumber(int) __ptr64

void __thiscall cockpit::avMovingMapPoint::setNumber(avMovingMapPoint *this,int param_1)

{
                    // 0x25a8e0  5994  ?setNumber@avMovingMapPoint@cockpit@@QEAAXH@Z
  *(int *)(this + 0x138) = param_1;
  return;
}



// public: void __cdecl cockpit::avMovingMapPoint::setOrientedBox(class osg::BoundingBoxImpl<class
// osg::Vec3f> const & __ptr64) __ptr64

void __thiscall
cockpit::avMovingMapPoint::setOrientedBox
          (avMovingMapPoint *this,BoundingBoxImpl<osg::Vec3f> *param_1)

{
  undefined8 uVar1;
  
                    // 0x25a8f0  6005
                    // ?setOrientedBox@avMovingMapPoint@cockpit@@QEAAXAEBV?$BoundingBoxImpl@VVec3f@osg@@@osg@@@Z
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x120) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x128) = uVar1;
  *(undefined8 *)(this + 0x130) = *(undefined8 *)(param_1 + 0x10);
  return;
}



// public: void __cdecl cockpit::avMovingMapPoint::setSubType(unsigned int) __ptr64

void __thiscall cockpit::avMovingMapPoint::setSubType(avMovingMapPoint *this,uint param_1)

{
                    // 0x25a910  6083  ?setSubType@avMovingMapPoint@cockpit@@QEAAXI@Z
  *(uint *)(this + 0x94) = param_1;
  return;
}



// public: void __cdecl cockpit::avMovingMapPoint::setType(unsigned int) __ptr64

void __thiscall cockpit::avMovingMapPoint::setType(avMovingMapPoint *this,uint param_1)

{
                    // 0x25a930  6114  ?setType@avMovingMapPoint@cockpit@@QEAAXI@Z
  *(uint *)(this + 0x90) = param_1;
  return;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::setX(float) __ptr64

void __thiscall cockpit::avMovingMap_Cursor::setX(avMovingMap_Cursor *this,float param_1)

{
                    // 0x25a940  6149  ?setX@avMovingMap_Cursor@cockpit@@QEAAXM@Z
  *(float *)(this + 0x28) = param_1;
  return;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::setY(float) __ptr64

void __thiscall cockpit::avMovingMap_Cursor::setY(avMovingMap_Cursor *this,float param_1)

{
                    // 0x25a950  6150  ?setY@avMovingMap_Cursor@cockpit@@QEAAXM@Z
  *(float *)(this + 0x2c) = param_1;
  return;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::set_limits_X(float,float) __ptr64

void __thiscall
cockpit::avMovingMap_Cursor::set_limits_X(avMovingMap_Cursor *this,float param_1,float param_2)

{
                    // 0x25a960  6342  ?set_limits_X@avMovingMap_Cursor@cockpit@@QEAAXMM@Z
  *(double *)(this + 8) = (double)param_1;
  *(double *)(this + 0x10) = (double)param_2;
  return;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::set_limits_X(class cockpit::limits<double>)
// __ptr64

void __thiscall
cockpit::avMovingMap_Cursor::set_limits_X(avMovingMap_Cursor *this,avMovingMap_Cursor *param_2)

{
                    // 0x25a980  6343
                    // ?set_limits_X@avMovingMap_Cursor@cockpit@@QEAAXV?$limits@N@2@@Z
  if (this + 8 != param_2) {
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(this + 8) = *(undefined8 *)param_2;
  }
  return;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::set_limits_Y(float,float) __ptr64

void __thiscall
cockpit::avMovingMap_Cursor::set_limits_Y(avMovingMap_Cursor *this,float param_1,float param_2)

{
                    // 0x25a9a0  6344  ?set_limits_Y@avMovingMap_Cursor@cockpit@@QEAAXMM@Z
  *(double *)(this + 0x18) = (double)param_1;
  *(double *)(this + 0x20) = (double)param_2;
  return;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::set_limits_Y(class cockpit::limits<double>)
// __ptr64

void __thiscall
cockpit::avMovingMap_Cursor::set_limits_Y(avMovingMap_Cursor *this,avMovingMap_Cursor *param_2)

{
                    // 0x25a9c0  6345
                    // ?set_limits_Y@avMovingMap_Cursor@cockpit@@QEAAXV?$limits@N@2@@Z
  if (this + 0x18 != param_2) {
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)param_2;
  }
  return;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::start_X(double) __ptr64

void __thiscall cockpit::avMovingMap_Cursor::start_X(avMovingMap_Cursor *this,double param_1)

{
                    // 0x25aef0  6622  ?start_X@avMovingMap_Cursor@cockpit@@QEAAXN@Z
  this[0x38] = (avMovingMap_Cursor)0x1;
  *(float *)(this + 0x30) = (float)param_1;
  return;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::start_Y(double) __ptr64

void __thiscall cockpit::avMovingMap_Cursor::start_Y(avMovingMap_Cursor *this,double param_1)

{
                    // 0x25af10  6623  ?start_Y@avMovingMap_Cursor@cockpit@@QEAAXN@Z
  this[0x39] = (avMovingMap_Cursor)0x1;
  *(float *)(this + 0x34) = (float)param_1;
  return;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::stop_X(void) __ptr64

void __thiscall cockpit::avMovingMap_Cursor::stop_X(avMovingMap_Cursor *this)

{
                    // 0x25af30  6662  ?stop_X@avMovingMap_Cursor@cockpit@@QEAAXXZ
  this[0x38] = (avMovingMap_Cursor)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::stop_Y(void) __ptr64

void __thiscall cockpit::avMovingMap_Cursor::stop_Y(avMovingMap_Cursor *this)

{
                    // 0x25af40  6663  ?stop_Y@avMovingMap_Cursor@cockpit@@QEAAXXZ
  this[0x39] = (avMovingMap_Cursor)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}



// public: __cdecl cockpit::avMovingMap::avMovingMap(void) __ptr64

avMovingMap * __thiscall cockpit::avMovingMap::avMovingMap(avMovingMap *this)

{
                    // 0x263810  355  ??0avMovingMap@cockpit@@QEAA@XZ
  *(undefined ***)this = vftable;
  Graphics::Camera::Camera((Camera *)(this + 8),0);
  *(undefined8 *)(this + 0x318) = 0xbff0000000000000;
  *(undefined8 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x328) = 0;
  *(undefined4 *)(this + 8) = 1;
  this[0x310] = (avMovingMap)0x1;
  return this;
}



// public: __cdecl cockpit::avMovingMap_Cursor::avMovingMap_Cursor(void) __ptr64

avMovingMap_Cursor * __thiscall
cockpit::avMovingMap_Cursor::avMovingMap_Cursor(avMovingMap_Cursor *this)

{
                    // 0x263870  359  ??0avMovingMap_Cursor@cockpit@@QEAA@XZ
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 8) = 0xbff0000000000000;
  *(undefined8 *)(this + 0x18) = 0xbff0000000000000;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0x20) = 0x3ff0000000000000;
  return this;
}



// public: virtual __cdecl cockpit::avMovingMap_Cursor::~avMovingMap_Cursor(void) __ptr64

void __thiscall cockpit::avMovingMap_Cursor::~avMovingMap_Cursor(avMovingMap_Cursor *this)

{
                    // 0x2638b0  813  ??1avMovingMap_Cursor@cockpit@@UEAA@XZ
  *(undefined ***)this = vftable;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// protected: void __cdecl cockpit::avMovingMap::check_camera_orientation(void) __ptr64

void __thiscall cockpit::avMovingMap::check_camera_orientation(avMovingMap *this)

{
  char cVar1;
  float fVar2;
  float fVar3;
  double local_res8;
  float local_58;
  uint local_54;
  float local_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  ulonglong local_38;
  ulonglong local_30;
  
                    // 0x2638c0  2665  ?check_camera_orientation@avMovingMap@cockpit@@IEAAXXZ
  this[0x310] = (avMovingMap)0x1;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 600) = 0;
  local_res8 = 0.0;
  *(undefined8 *)(this + 0x238) = 0x3f800000;
  *(undefined8 *)(this + 0x24c) = 0x3f800000;
  *(undefined4 *)(this + 0x260) = 0x3f800000;
  cVar1 = (**(code **)(*(longlong *)this + 8))(0,&local_res8);
  if (cVar1 != '\0') {
    fVar3 = (float)local_res8;
    this[0x310] = (avMovingMap)0x1;
    fVar2 = sinf(fVar3);
    local_58 = cosf(fVar3);
    uStack_4c = (undefined4)_DAT_7ff89358dde0;
    fStack_48 = (float)((ulonglong)_DAT_7ff89358dde0 >> 0x20);
    fStack_44 = (float)uRam00007ff89358dde8;
    uStack_40 = (undefined4)((ulonglong)uRam00007ff89358dde8 >> 0x20);
    local_54 = 0;
    local_3c = 0;
    local_38 = (ulonglong)((uint)fVar2 ^ DAT_7ff89358cdb0);
    local_30 = (ulonglong)(uint)local_58;
    local_50 = fVar2;
    FUN_7ff8933535c0(this + 0x238,&local_58);
  }
  fVar2 = DAT_7ff893595ae0;
  this[0x310] = (avMovingMap)0x1;
  fVar3 = sinf(fVar2);
  local_58 = cosf(fVar2);
  uStack_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_50 = 0.0;
  uStack_4c = 0;
  local_54 = (uint)fVar3 ^ DAT_7ff89358cdb0;
  local_30 = 0x3f800000;
  fStack_48 = fVar3;
  fStack_44 = local_58;
  FUN_7ff8933535c0(this + 0x238,&local_58);
  return;
}



// protected: void __cdecl cockpit::avMovingMap::check_camera_volume(bool,float,float,float,float)
// __ptr64

void __thiscall
cockpit::avMovingMap::check_camera_volume
          (avMovingMap *this,bool param_1,float param_2,float param_3,float param_4,float param_5)

{
  double dVar1;
  float fVar2;
  
                    // 0x263a40  2668  ?check_camera_volume@avMovingMap@cockpit@@IEAAX_NMMMM@Z
  if ((((*(float *)(this + 0x304) < *(float *)(this + 0x2f8)) ||
       (*(float *)(this + 0x308) < *(float *)(this + 0x2fc))) ||
      (*(float *)(this + 0x30c) < *(float *)(this + 0x300))) || (param_1)) {
    dVar1 = (double)(**(code **)(*(longlong *)this + 0x10))();
    *(undefined4 *)(this + 0x300) = 0xbdcccccd;
    fVar2 = (float)dVar1;
    this[0x310] = (avMovingMap)0x1;
    *(undefined4 *)(this + 0x30c) = 0x462be000;
    *(float *)(this + 0x2fc) = fVar2 * param_4;
    *(float *)(this + 0x2f8) = fVar2 * param_2;
    *(float *)(this + 0x308) = fVar2 * param_5;
    *(float *)(this + 0x304) = fVar2 * param_3;
  }
  return;
}



// public: virtual void __cdecl cockpit::avMovingMap_Cursor::clear(void) __ptr64

void __thiscall cockpit::avMovingMap_Cursor::clear(avMovingMap_Cursor *this)

{
                    // 0x263b30  2749  ?clear@avMovingMap_Cursor@cockpit@@UEAAXXZ
  *(undefined8 *)(this + 0x28) = 0;
  return;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::clear_moving(void) __ptr64

void __thiscall cockpit::avMovingMap_Cursor::clear_moving(avMovingMap_Cursor *this)

{
                    // 0x263b40  2766  ?clear_moving@avMovingMap_Cursor@cockpit@@QEAAXXZ
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x38) = 0;
  return;
}



// public: class Graphics::Camera const & __ptr64 __cdecl
// cockpit::avMovingMap::get_camera(bool,float,float,float,float) __ptr64

Camera * __thiscall
cockpit::avMovingMap::get_camera
          (avMovingMap *this,bool param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined1 local_38 [48];
  
                    // 0x263b50  3784
                    // ?get_camera@avMovingMap@cockpit@@QEAAAEBVCamera@Graphics@@_NMMMM@Z
  dVar4 = wTime::GetModelTime();
  if (dVar4 != *(double *)(this + 0x318)) {
    dVar4 = wTime::GetModelTime();
    *(double *)(this + 0x318) = dVar4;
    (**(code **)(*(longlong *)this + 0x28))(this);
    check_camera_orientation(this);
    check_camera_volume(this,param_1,param_2,param_3,param_4,param_5);
    (**(code **)(*(longlong *)this + 0x30))(this);
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)this + 0x20))(this,local_38);
    uVar1 = *puVar3;
    uVar2 = *(undefined4 *)(puVar3 + 1);
    this[0x310] = (avMovingMap)0x1;
    *(undefined8 *)(this + 0x268) = uVar1;
    *(undefined4 *)(this + 0x270) = uVar2;
  }
  return (Camera *)(this + 8);
}



// public: class osg::Vec3f __cdecl cockpit::avMovingMap::get_map_center(void) __ptr64

void __thiscall cockpit::avMovingMap::get_map_center(avMovingMap *this)

{
  undefined4 uVar1;
  undefined8 *in_RDX;
  
                    // 0x263c30  4022  ?get_map_center@avMovingMap@cockpit@@QEAA?AVVec3f@osg@@XZ
  uVar1 = *(undefined4 *)(this + 0x328);
  *in_RDX = *(undefined8 *)(this + 800);
  *(undefined4 *)(in_RDX + 1) = uVar1;
  return;
}



// public: bool __cdecl cockpit::avMovingMap_Cursor::in_limit(void) __ptr64

bool __thiscall cockpit::avMovingMap_Cursor::in_limit(avMovingMap_Cursor *this)

{
  double dVar1;
  
                    // 0x263c50  4423  ?in_limit@avMovingMap_Cursor@cockpit@@QEAA_NXZ
  dVar1 = (double)*(float *)(this + 0x28);
  if ((((dVar1 < *(double *)(this + 0x10)) &&
       (*(double *)(this + 8) <= dVar1 && dVar1 != *(double *)(this + 8))) &&
      (dVar1 = (double)*(float *)(this + 0x2c), dVar1 < *(double *)(this + 0x20))) &&
     (*(double *)(this + 0x18) <= dVar1 && dVar1 != *(double *)(this + 0x18))) {
    return true;
  }
  return false;
}



// protected: class osg::Vec3f __cdecl cockpit::avMovingMap::relative_position_map(class osg::Vec3f
// const & __ptr64) __ptr64

Vec3f * __thiscall cockpit::avMovingMap::relative_position_map(avMovingMap *this,Vec3f *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  float *in_R8;
  undefined1 local_48 [64];
  
                    // 0x263c90  5531
                    // ?relative_position_map@avMovingMap@cockpit@@IEAA?AVVec3f@osg@@AEBV34@@Z
  lVar9 = (**(code **)(*(longlong *)this + 0x18))();
  lVar9 = FUN_7ff8933388b0(lVar9 + 0x230,local_48);
  fVar1 = *in_R8;
  fVar2 = in_R8[1];
  fVar3 = in_R8[2];
  fVar4 = *(float *)(lVar9 + 0x14);
  fVar5 = *(float *)(lVar9 + 0x18);
  *(undefined4 *)param_1 = 0;
  fVar6 = *(float *)(lVar9 + 8);
  fVar7 = *(float *)(lVar9 + 0x28);
  fVar8 = *(float *)(lVar9 + 0x38);
  *(float *)(param_1 + 4) =
       fVar2 * fVar4 + fVar1 * *(float *)(lVar9 + 4) + fVar3 * *(float *)(lVar9 + 0x24) +
       *(float *)(lVar9 + 0x34);
  *(float *)(param_1 + 8) = fVar2 * fVar5 + fVar1 * fVar6 + fVar3 * fVar7 + fVar8;
  return param_1;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::set_from_axis_absolute_X(float,bool) __ptr64

void __thiscall
cockpit::avMovingMap_Cursor::set_from_axis_absolute_X
          (avMovingMap_Cursor *this,float param_1,bool param_2)

{
  double dVar1;
  
                    // 0x263d30  6296
                    // ?set_from_axis_absolute_X@avMovingMap_Cursor@cockpit@@QEAAXM_N@Z
  *(float *)(this + 0x28) = param_1;
  if (param_2) {
    dVar1 = *(double *)(this + 8);
    if (*(double *)(this + 8) <= (double)param_1) {
      dVar1 = (double)param_1;
    }
    if (*(double *)(this + 0x10) <= dVar1) {
      dVar1 = *(double *)(this + 0x10);
    }
    *(float *)(this + 0x28) = (float)dVar1;
    dVar1 = *(double *)(this + 0x18);
    if (*(double *)(this + 0x18) <= (double)*(float *)(this + 0x2c)) {
      dVar1 = (double)*(float *)(this + 0x2c);
    }
    if (*(double *)(this + 0x20) <= dVar1) {
      dVar1 = *(double *)(this + 0x20);
    }
    *(float *)(this + 0x2c) = (float)dVar1;
  }
  return;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::set_from_axis_absolute_Y(float,bool) __ptr64

void __thiscall
cockpit::avMovingMap_Cursor::set_from_axis_absolute_Y
          (avMovingMap_Cursor *this,float param_1,bool param_2)

{
  double dVar1;
  
                    // 0x263d80  6297
                    // ?set_from_axis_absolute_Y@avMovingMap_Cursor@cockpit@@QEAAXM_N@Z
  *(float *)(this + 0x2c) = param_1;
  if (param_2) {
    dVar1 = *(double *)(this + 8);
    if (*(double *)(this + 8) <= (double)*(float *)(this + 0x28)) {
      dVar1 = (double)*(float *)(this + 0x28);
    }
    if (*(double *)(this + 0x10) <= dVar1) {
      dVar1 = *(double *)(this + 0x10);
    }
    *(float *)(this + 0x28) = (float)dVar1;
    dVar1 = *(double *)(this + 0x18);
    if (*(double *)(this + 0x18) <= (double)param_1) {
      dVar1 = (double)param_1;
    }
    if (*(double *)(this + 0x20) <= dVar1) {
      dVar1 = *(double *)(this + 0x20);
    }
    *(float *)(this + 0x2c) = (float)dVar1;
  }
  return;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::set_from_axis_relative_X(float,bool) __ptr64

void __thiscall
cockpit::avMovingMap_Cursor::set_from_axis_relative_X
          (avMovingMap_Cursor *this,float param_1,bool param_2)

{
  double dVar1;
  float fVar2;
  double dVar3;
  
                    // 0x263dd0  6298
                    // ?set_from_axis_relative_X@avMovingMap_Cursor@cockpit@@QEAAXM_N@Z
  fVar2 = (float)((double)param_1 * DAT_7ff89358f690 + (double)*(float *)(this + 0x28));
  *(float *)(this + 0x28) = fVar2;
  if (param_2) {
    dVar1 = (double)fVar2;
    dVar3 = *(double *)(this + 8);
    if (*(double *)(this + 8) <= dVar1) {
      dVar3 = dVar1;
    }
    if (*(double *)(this + 0x10) <= dVar3) {
      dVar3 = *(double *)(this + 0x10);
    }
    *(float *)(this + 0x28) = (float)dVar3;
    dVar3 = *(double *)(this + 0x18);
    if (*(double *)(this + 0x18) <= (double)*(float *)(this + 0x2c)) {
      dVar3 = (double)*(float *)(this + 0x2c);
    }
    if (*(double *)(this + 0x20) <= dVar3) {
      dVar3 = *(double *)(this + 0x20);
    }
    *(float *)(this + 0x2c) = (float)dVar3;
  }
  return;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::set_from_axis_relative_Y(float,bool) __ptr64

void __thiscall
cockpit::avMovingMap_Cursor::set_from_axis_relative_Y
          (avMovingMap_Cursor *this,float param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  
                    // 0x263e40  6299
                    // ?set_from_axis_relative_Y@avMovingMap_Cursor@cockpit@@QEAAXM_N@Z
  fVar3 = (float)((double)param_1 * DAT_7ff89358f690 + (double)*(float *)(this + 0x2c));
  *(float *)(this + 0x2c) = fVar3;
  if (param_2) {
    dVar1 = *(double *)(this + 8);
    if (*(double *)(this + 8) <= (double)*(float *)(this + 0x28)) {
      dVar1 = (double)*(float *)(this + 0x28);
    }
    if (*(double *)(this + 0x10) <= dVar1) {
      dVar1 = *(double *)(this + 0x10);
    }
    dVar2 = (double)fVar3;
    *(float *)(this + 0x28) = (float)dVar1;
    dVar1 = *(double *)(this + 0x18);
    if (*(double *)(this + 0x18) <= dVar2) {
      dVar1 = dVar2;
    }
    if (*(double *)(this + 0x20) <= dVar1) {
      dVar1 = *(double *)(this + 0x20);
    }
    *(float *)(this + 0x2c) = (float)dVar1;
  }
  return;
}



// public: void __cdecl cockpit::avMovingMap_Cursor::to_limit(void) __ptr64

void __thiscall cockpit::avMovingMap_Cursor::to_limit(avMovingMap_Cursor *this)

{
  double dVar1;
  
                    // 0x263eb0  6727  ?to_limit@avMovingMap_Cursor@cockpit@@QEAAXXZ
  dVar1 = *(double *)(this + 8);
  if (*(double *)(this + 8) <= (double)*(float *)(this + 0x28)) {
    dVar1 = (double)*(float *)(this + 0x28);
  }
  if (*(double *)(this + 0x10) <= dVar1) {
    dVar1 = *(double *)(this + 0x10);
  }
  *(float *)(this + 0x28) = (float)dVar1;
  dVar1 = *(double *)(this + 0x18);
  if (*(double *)(this + 0x18) <= (double)*(float *)(this + 0x2c)) {
    dVar1 = (double)*(float *)(this + 0x2c);
  }
  if (*(double *)(this + 0x20) <= dVar1) {
    dVar1 = *(double *)(this + 0x20);
  }
  *(float *)(this + 0x2c) = (float)dVar1;
  return;
}



// public: bool __cdecl cockpit::avMovingMap_Cursor::update_X(double,bool) __ptr64

bool __thiscall
cockpit::avMovingMap_Cursor::update_X(avMovingMap_Cursor *this,double param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  
                    // 0x263ef0  6978  ?update_X@avMovingMap_Cursor@cockpit@@QEAA_NN_N@Z
  if (this[0x38] == (avMovingMap_Cursor)0x0) {
    return false;
  }
  fVar3 = (float)((double)*(float *)(this + 0x30) * param_1 + (double)*(float *)(this + 0x28));
  *(float *)(this + 0x28) = fVar3;
  if (param_2) {
    dVar1 = (double)fVar3;
    dVar2 = *(double *)(this + 8);
    if (*(double *)(this + 8) <= dVar1) {
      dVar2 = dVar1;
    }
    if (*(double *)(this + 0x10) <= dVar2) {
      dVar2 = *(double *)(this + 0x10);
    }
    *(float *)(this + 0x28) = (float)dVar2;
    dVar2 = *(double *)(this + 0x18);
    if (*(double *)(this + 0x18) <= (double)*(float *)(this + 0x2c)) {
      dVar2 = (double)*(float *)(this + 0x2c);
    }
    if (*(double *)(this + 0x20) <= dVar2) {
      dVar2 = *(double *)(this + 0x20);
    }
    *(float *)(this + 0x2c) = (float)dVar2;
  }
  return true;
}



// public: bool __cdecl cockpit::avMovingMap_Cursor::update_Y(double,bool) __ptr64

bool __thiscall
cockpit::avMovingMap_Cursor::update_Y(avMovingMap_Cursor *this,double param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  float fVar3;
  
                    // 0x263f60  6979  ?update_Y@avMovingMap_Cursor@cockpit@@QEAA_NN_N@Z
  if (this[0x39] == (avMovingMap_Cursor)0x0) {
    return false;
  }
  fVar3 = (float)((double)*(float *)(this + 0x34) * param_1 + (double)*(float *)(this + 0x2c));
  *(float *)(this + 0x2c) = fVar3;
  if (param_2) {
    dVar1 = *(double *)(this + 8);
    if (*(double *)(this + 8) <= (double)*(float *)(this + 0x28)) {
      dVar1 = (double)*(float *)(this + 0x28);
    }
    if (*(double *)(this + 0x10) <= dVar1) {
      dVar1 = *(double *)(this + 0x10);
    }
    dVar2 = (double)fVar3;
    *(float *)(this + 0x28) = (float)dVar1;
    dVar1 = *(double *)(this + 0x18);
    if (*(double *)(this + 0x18) <= dVar2) {
      dVar1 = dVar2;
    }
    if (*(double *)(this + 0x20) <= dVar1) {
      dVar1 = *(double *)(this + 0x20);
    }
    *(float *)(this + 0x2c) = (float)dVar1;
  }
  return true;
}



// public: __cdecl cockpit::avMovingMapPoint::avMovingMapPoint(void) __ptr64

avMovingMapPoint * __thiscall cockpit::avMovingMapPoint::avMovingMapPoint(avMovingMapPoint *this)

{
                    // 0x264330  357  ??0avMovingMapPoint@cockpit@@QEAA@XZ
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = SimpleOctTreeLoad::vftable;
  *(undefined4 *)(this + 0x10) = 0x7f7fffff;
  *(undefined4 *)(this + 0x14) = 0x7f7fffff;
  *(undefined4 *)(this + 0x18) = 0x7f7fffff;
  *(undefined4 *)(this + 0x1c) = 0xff7fffff;
  *(undefined4 *)(this + 0x20) = 0xff7fffff;
  *(undefined4 *)(this + 0x24) = 0xff7fffff;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x30) = 0x100;
  avDrawCachedObj::avDrawCachedObj((avDrawCachedObj *)(this + 0x38));
  Common::FakeUnknown<>::FakeUnknown<>((FakeUnknown<> *)(this + 0x58));
  *(undefined ***)this = vftable_for_cockpit__SimpleOctTreeLoad_;
  *(undefined ***)(this + 0x38) = vftable_for_cockpit__avDrawCachedObj_;
  *(undefined ***)(this + 0x58) = vftable_for_Common__FakeUnknown<Common::Identifiable>_;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0xf;
  this[0x70] = (avMovingMapPoint)0x0;
  *(undefined8 *)(this + 0x90) = 0;
  this[0x98] = (avMovingMapPoint)0x0;
  *(undefined8 *)(this + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0x3ff0000000000000;
  *(undefined4 *)(this + 0x120) = 0xc2480000;
  *(undefined4 *)(this + 0x124) = 0xc2480000;
  *(undefined4 *)(this + 0x128) = 0xc2480000;
  *(undefined4 *)(this + 300) = 0x42480000;
  *(undefined4 *)(this + 0x130) = 0x42480000;
  *(undefined4 *)(this + 0x134) = 0x42480000;
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  return this;
}



// public: virtual __cdecl cockpit::avMovingMapPoint::~avMovingMapPoint(void) __ptr64

void __thiscall cockpit::avMovingMapPoint::~avMovingMapPoint(avMovingMapPoint *this)

{
                    // 0x2644d0  812  ??1avMovingMapPoint@cockpit@@UEAA@XZ
  *(undefined ***)this = vftable_for_cockpit__SimpleOctTreeLoad_;
  *(undefined ***)(this + 0x38) = vftable_for_cockpit__avDrawCachedObj_;
  *(undefined ***)(this + 0x58) = vftable_for_Common__FakeUnknown<Common::Identifiable>_;
  if (0xf < *(ulonglong *)(this + 0x88)) {
    free(*(void **)(this + 0x70));
  }
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0xf;
  this[0x70] = (avMovingMapPoint)0x0;
  Common::FakeUnknown<>::~FakeUnknown<>((FakeUnknown<> *)(this + 0x58));
  avDrawCachedObj::~avDrawCachedObj((avDrawCachedObj *)(this + 0x38));
  SimpleOctTreeLoad::~SimpleOctTreeLoad((SimpleOctTreeLoad *)this);
  return;
}



// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// public: void __cdecl cockpit::avMovingMapPoint::setNameByNumber(int,char const * __ptr64) __ptr64

void __thiscall
cockpit::avMovingMapPoint::setNameByNumber(avMovingMapPoint *this,int param_1,char *param_2)

{
  size_t _Size;
  ulonglong uVar1;
  void *_Dst;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  size_t local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
                    // 0x264560  5988  ?setNameByNumber@avMovingMapPoint@cockpit@@QEAAXHPEBD@Z
  local_28 = DAT_7ff89368e840 ^ (ulonglong)auStack_68;
  *(int *)(this + 0x138) = param_1;
  if (param_2 == (char *)0x0) {
    param_2 = &DAT_7ff893595ae4;
  }
  FUN_7ff8933b49d0(&DAT_7ff8936a1050,param_2,param_1);
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  _Size = strlen(&DAT_7ff8936a1050);
  if (_Size < 0x8000000000000000) {
    if (_Size < 0x10) {
      uStack_30 = 0xf;
      local_38 = _Size;
      memcpy(&local_48,&DAT_7ff8936a1050,_Size);
      *(undefined1 *)((longlong)&local_48 + _Size) = 0;
    }
    else {
      uVar1 = _Size | 0xf;
      uVar2 = 0x7fffffffffffffff;
      if ((uVar1 < 0x8000000000000000) && (uVar2 = uVar1, uVar1 < 0x16)) {
        uVar2 = 0x16;
      }
      _Dst = malloc(uVar2 + 1);
      if (_Dst == (void *)0x0) {
        ed::fatal_out_of_memory(s_ed_malloc_7ff89358cbc0,uVar2 + 1);
      }
      local_48 = _Dst;
      local_38 = _Size;
      uStack_30 = uVar2;
      memcpy(_Dst,&DAT_7ff8936a1050,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
    }
    (**(code **)(*(longlong *)this + 0x18))(this,&local_48);
    if (0xf < uStack_30) {
      free(local_48);
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_7ff893330ac0();
}



// public: void __cdecl cockpit::avMovingMapPoint::setPoint(class osg::Vec3d const & __ptr64)
// __ptr64

void __thiscall cockpit::avMovingMapPoint::setPoint(avMovingMapPoint *this,Vec3d *param_1)

{
  undefined8 uVar1;
  BoundingBoxImpl<osg::Vec3f> *pBVar2;
  undefined1 local_28 [32];
  
                    // 0x2646c0  6025  ?setPoint@avMovingMapPoint@cockpit@@QEAAXAEBVVec3d@osg@@@Z
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x100) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = uVar1;
  pBVar2 = (BoundingBoxImpl<osg::Vec3f> *)FUN_7ff8933b3fd0(this + 0x120,local_28);
  SimpleOctTreeLoad::setBoundingBox((SimpleOctTreeLoad *)this,pBVar2);
  *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 8);
  return;
}



// public: void __cdecl cockpit::avMovingMapPoint::setPosition(class wPosition3<double> const &
// __ptr64) __ptr64

void __thiscall
cockpit::avMovingMapPoint::setPosition(avMovingMapPoint *this,wPosition3<double> *param_1)

{
  undefined8 uVar1;
  BoundingBoxImpl<osg::Vec3f> *pBVar2;
  undefined1 local_28 [32];
  
                    // 0x264730  6029
                    // ?setPosition@avMovingMapPoint@cockpit@@QEAAXAEBV?$wPosition3@N@@@Z
  if (this + 0xa0 != (avMovingMapPoint *)param_1) {
    *(undefined8 *)(this + 0xa0) = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0xc0) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0xd0) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0xe0) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(this + 0xe8) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(this + 0xf0) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(this + 0x100) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(this + 0x110) = *(undefined8 *)(param_1 + 0x70);
  }
  *(undefined8 *)(this + 0x108) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x100) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x110) = uVar1;
  pBVar2 = (BoundingBoxImpl<osg::Vec3f> *)FUN_7ff8933b3fd0(this + 0x120,local_28);
  SimpleOctTreeLoad::setBoundingBox((SimpleOctTreeLoad *)this,pBVar2);
  *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 0x68);
  return;
}



// public: void __cdecl cockpit::avMovingMapPoint::setRotate(float) __ptr64

void __thiscall cockpit::avMovingMapPoint::setRotate(avMovingMapPoint *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  
                    // 0x264800  6049  ?setRotate@avMovingMapPoint@cockpit@@QEAAXM@Z
  fVar4 = (float)((uint)param_1 ^ DAT_7ff89358cdb0);
  *(undefined8 *)(this + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x3ff0000000000000;
  dVar2 = sin((double)fVar4);
  dVar3 = cos((double)fVar4);
  dVar1 = *(double *)(this + 0xa0);
  *(double *)(this + 0xa0) = dVar1 * dVar3 - *(double *)(this + 0xe0) * dVar2;
  *(double *)(this + 0xe0) = *(double *)(this + 0xe0) * dVar3 + dVar1 * dVar2;
  dVar1 = *(double *)(this + 0xa8);
  *(double *)(this + 0xa8) = dVar1 * dVar3 - *(double *)(this + 0xe8) * dVar2;
  *(double *)(this + 0xe8) = *(double *)(this + 0xe8) * dVar3 + dVar1 * dVar2;
  dVar1 = *(double *)(this + 0xb0);
  *(double *)(this + 0xb0) = dVar1 * dVar3 - *(double *)(this + 0xf0) * dVar2;
  *(double *)(this + 0xf0) = *(double *)(this + 0xf0) * dVar3 + dVar1 * dVar2;
  return;
}



// public: void __cdecl cockpit::avMovingMapPoint::setRotatePoint(class osg::Vec3d const &
// __ptr64,float) __ptr64

void __thiscall
cockpit::avMovingMapPoint::setRotatePoint(avMovingMapPoint *this,Vec3d *param_1,float param_2)

{
  undefined8 uVar1;
  BoundingBoxImpl<osg::Vec3f> *pBVar2;
  undefined1 local_28 [32];
  
                    // 0x264950  6050
                    // ?setRotatePoint@avMovingMapPoint@cockpit@@QEAAXAEBVVec3d@osg@@M@Z
  setRotate(this,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x100) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = uVar1;
  pBVar2 = (BoundingBoxImpl<osg::Vec3f> *)FUN_7ff8933b3fd0(this + 0x120,local_28);
  SimpleOctTreeLoad::setBoundingBox((SimpleOctTreeLoad *)this,pBVar2);
  *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 8);
  return;
}


