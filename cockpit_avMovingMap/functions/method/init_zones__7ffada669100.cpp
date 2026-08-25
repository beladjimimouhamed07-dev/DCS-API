/*
 * CockpitBase.dll class reconstruction
 * Function: init_zones
 * Address : 7ffada669100
 * Role    : method
 */


/* protected: void __cdecl cockpit::avKneeboard::init_zones(void) __ptr64 */

void __thiscall cockpit::avKneeboard::init_zones(avKneeboard *this)

{
  bool bVar1;
  SimpleOctTree *pSVar2;
  lua_State *plVar3;
  avKneeboardZoneObject *this_00;
  SimpleOctTreeLoad *pSVar4;
  int iVar5;
  double dVar6;
  undefined8 local_38 [2];
  uint local_28 [3];
  float local_1c;
  undefined4 local_18;
  float local_14;
  
                    /* 0x259100  4488  ?init_zones@avKneeboard@cockpit@@IEAAXXZ */
  dVar6 = DAT_7ffada855388;
  if (this[0x408] != (avKneeboard)0x0) {
    dVar6 = DAT_7ffada855380;
  }
  local_1c = (float)dVar6;
  local_28[0] = (uint)local_1c ^ DAT_7ffada84cdb0;
  local_28[1] = 0xc3960000;
  local_18 = 0x46ea6000;
  local_28[2] = local_28[0];
  local_14 = local_1c;
  pSVar2 = SimpleOctTree::create_quad_tree((BoundingBoxImpl<osg::Vec3f> *)local_28,DAT_7ffada84cc34)
  ;
  *(SimpleOctTree **)(this + 0x430) = pSVar2;
  plVar3 = avDevice::ensured_Lua((avDevice *)this,(char *)0x0);
  Lua::Config::Config((Config *)local_38,plVar3,-0x2712);
  bVar1 = Lua::Config::open((Config *)local_38,s_zones_7ffada8552a4);
  if (bVar1) {
    iVar5 = 1;
    bVar1 = Lua::Config::open((Config *)local_38,1);
    if (bVar1) {
      do {
        pSVar2 = *(SimpleOctTree **)(this + 0x430);
        this_00 = (avKneeboardZoneObject *)FUN_7ffada82b29c(0x70);
        pSVar4 = (SimpleOctTreeLoad *)0x0;
        if (this_00 != (avKneeboardZoneObject *)0x0) {
          pSVar4 = (SimpleOctTreeLoad *)
                   avKneeboardZoneObject::avKneeboardZoneObject(this_00,(Config *)local_38);
        }
        SimpleOctTree::AddObject(pSVar2,pSVar4);
        lua_settop(local_38[0],0xfffffffe);
        iVar5 = iVar5 + 1;
        bVar1 = Lua::Config::open((Config *)local_38,iVar5);
      } while (bVar1);
    }
    lua_settop(local_38[0],0xfffffffe);
  }
  Lua::Config::~Config((Config *)local_38);
  return;
}

