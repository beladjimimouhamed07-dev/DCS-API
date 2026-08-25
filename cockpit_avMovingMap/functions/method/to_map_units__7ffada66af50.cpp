/*
 * CockpitBase.dll class reconstruction
 * Function: to_map_units
 * Address : 7ffada66af50
 * Role    : method
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: class osg::Vec3d __cdecl cockpit::avKneeboard::to_map_units(class osg::Vec3d const &
   __ptr64)const __ptr64 */

Vec3d * __thiscall cockpit::avKneeboard::to_map_units(avKneeboard *this,Vec3d *param_1)

{
  undefined8 uVar1;
  ITerrain *pIVar2;
  undefined8 *puVar3;
  undefined8 *in_R8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  double local_28;
  undefined8 local_20 [2];
  ulonglong local_10;
  
                    /* 0x25af50  6728
                       ?to_map_units@avKneeboard@cockpit@@AEBA?AVVec3d@osg@@AEBV34@@Z */
  local_10 = DAT_7ffada94e840 ^ (ulonglong)auStack_98;
  if (this[0x408] == (avKneeboard)0x0) {
    uVar1 = in_R8[1];
    *(undefined8 *)param_1 = *in_R8;
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0x10) = in_R8[2];
  }
  else {
    local_78 = *(undefined4 *)in_R8;
    uStack_74 = *(undefined4 *)((longlong)in_R8 + 4);
    uStack_70 = *(undefined4 *)(in_R8 + 1);
    uStack_6c = *(undefined4 *)((longlong)in_R8 + 0xc);
    local_50 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_68 = in_R8[2];
    pIVar2 = edterrain::ITerrain::GetDefaultTerrain();
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)pIVar2 + 0xb0))(pIVar2,local_40);
    local_60 = *puVar3;
    uStack_58 = puVar3[1];
    local_50 = puVar3[2];
    pIVar2 = edterrain::ITerrain::GetDefaultTerrain();
    local_48 = (**(code **)(*(longlong *)pIVar2 + 0xa8))(pIVar2);
    pIVar2 = edterrain::ITerrain::GetDefaultTerrain();
    (**(code **)(*(longlong *)pIVar2 + 0x150))(pIVar2,&local_78,&local_28,local_20);
    *(double *)param_1 = local_28 / *(double *)(this + 0x400);
    *(undefined8 *)(param_1 + 8) = local_48;
    *(undefined8 *)(param_1 + 0x10) = local_20[0];
  }
  return param_1;
}

