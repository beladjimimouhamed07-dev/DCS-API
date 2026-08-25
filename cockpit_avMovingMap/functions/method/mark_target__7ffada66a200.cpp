/*
 * CockpitBase.dll class reconstruction
 * Function: mark_target
 * Address : 7ffada66a200
 * Role    : method
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl cockpit::avKneeboard::mark_target(class osg::Vec3d const & __ptr64)
   __ptr64 */

void __thiscall cockpit::avKneeboard::mark_target(avKneeboard *this,Vec3d *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  avMovingMapPoint *this_00;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_198 [32];
  avMovingMapPoint *local_178;
  double local_170;
  double local_168;
  double local_160;
  size_t local_158;
  undefined1 local_150 [264];
  ulonglong local_48;
  
                    /* 0x25a200  5121  ?mark_target@avKneeboard@cockpit@@IEAAXAEBVVec3d@osg@@@Z */
  local_48 = DAT_7ffada94e840 ^ (ulonglong)auStack_198;
  to_map_units(this,(Vec3d *)&local_170);
  plVar3 = *(longlong **)(this + 0x450);
  while( true ) {
    if (plVar3 == *(longlong **)(this + 0x458)) {
      local_178 = (avMovingMapPoint *)FUN_7ffada82b29c(0x140);
      if (local_178 == (avMovingMapPoint *)0x0) {
        this_00 = (avMovingMapPoint *)0x0;
      }
      else {
        this_00 = (avMovingMapPoint *)avMovingMapPoint::avMovingMapPoint(local_178);
      }
      local_158 = 0;
      local_150[0] = 0;
      local_178 = this_00;
      dVar4 = wTime::GetAbsoluteModelTime();
      dVar4 = fmod(dVar4,DAT_7ffada84e060);
      dVar5 = floor(dVar4 / DAT_7ffada850c60);
      dVar4 = floor((dVar4 - (double)(int)dVar5 * DAT_7ffada850c60) / DAT_7ffada84dd38);
      FUN_7ffada6685d0((longlong *)&local_158,s__02d__02d_7ffada8552b0,(ulonglong)(uint)(int)dVar5,
                       (ulonglong)(uint)(int)dVar4);
      FUN_7ffada5f0b10((undefined8 *)(this_00 + 0x70),local_150,local_158);
      *(undefined4 *)(this_00 + 0x90) = 3;
      uVar2 = _DAT_7ffada960f50;
      *(undefined8 *)(this_00 + 0x120) = _DAT_7ffada960f48;
      *(undefined8 *)(this_00 + 0x128) = uVar2;
      *(undefined8 *)(this_00 + 0x130) = DAT_7ffada960f58;
      avMovingMapPoint::setPoint(this_00,(Vec3d *)&local_170);
      SimpleOctTree::AddObject
                (*(SimpleOctTree **)(this + 0x428),(basic_string<char> *)(this_00 + 0x70),
                 (SimpleOctTreeLoad *)this_00);
      FUN_7ffada5f6770((longlong *)(this + 0x450),&local_178);
      if (*(int *)(this + 0x498) == 0) {
        *(undefined4 *)(this + 0x498) = 0x7fffffff;
      }
      else {
        *(int *)(this + 0x498) = *(int *)(this + 0x498) + -1;
      }
      return;
    }
    lVar1 = *plVar3;
    if ((*(int *)(lVar1 + 0x90) == 3) &&
       (dVar6 = *(double *)(lVar1 + 0x110) - local_160,
       dVar4 = *(double *)(lVar1 + 0x108) - local_168,
       dVar5 = *(double *)(lVar1 + 0x100) - local_170,
       dVar5 * dVar5 + dVar4 * dVar4 + dVar6 * dVar6 < DAT_7ffada855378)) break;
    plVar3 = plVar3 + 1;
  }
  return;
}

