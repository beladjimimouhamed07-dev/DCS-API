/*
 * CockpitBase.dll class reconstruction
 * Function: mark_self
 * Address : 7ffada669ef0
 * Role    : method
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl cockpit::avKneeboard::mark_self(void) __ptr64 */

void __thiscall cockpit::avKneeboard::mark_self(avKneeboard *this)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  avMovingMapPoint *paVar4;
  avMovingMapPoint *paVar5;
  avMovingMapPoint *paVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_1b8 [32];
  avMovingMapPoint *local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined1 local_178 [32];
  size_t local_158;
  undefined1 local_150 [264];
  ulonglong local_48;
  
                    /* 0x259ef0  5120  ?mark_self@avKneeboard@cockpit@@IEAAXXZ */
  local_48 = DAT_7ffada94e840 ^ (ulonglong)auStack_1b8;
  paVar6 = (avMovingMapPoint *)0x0;
  paVar4 = (avMovingMapPoint *)(*(longlong *)(*(longlong *)(this + 0x18) + 0x28) + -0x100);
  if (*(longlong *)(*(longlong *)(this + 0x18) + 0x28) == 0) {
    paVar4 = paVar6;
  }
  (**(code **)(*(longlong *)paVar4 + 0x98))(paVar4,local_178);
  to_map_units(this,(Vec3d *)&local_190);
  plVar3 = *(longlong **)(this + 0x450);
  while( true ) {
    if (plVar3 == *(longlong **)(this + 0x458)) {
      local_198 = (avMovingMapPoint *)FUN_7ffada82b29c(0x140);
      paVar4 = paVar6;
      if (local_198 != (avMovingMapPoint *)0x0) {
        paVar4 = (avMovingMapPoint *)avMovingMapPoint::avMovingMapPoint(local_198);
      }
      local_158 = 0;
      local_150[0] = 0;
      local_198 = paVar4;
      dVar8 = wTime::GetAbsoluteModelTime();
      dVar8 = fmod(dVar8,DAT_7ffada84e060);
      dVar9 = floor(dVar8 / DAT_7ffada850c60);
      dVar8 = floor((dVar8 - (double)(int)dVar9 * DAT_7ffada850c60) / DAT_7ffada84dd38);
      FUN_7ffada6685d0((longlong *)&local_158,s__02d__02d_7ffada8552b0,(ulonglong)(uint)(int)dVar9,
                       (ulonglong)(uint)(int)dVar8);
      FUN_7ffada5f0b10((undefined8 *)(paVar4 + 0x70),local_150,local_158);
      *(undefined4 *)(paVar4 + 0x90) = 2;
      uVar2 = _DAT_7ffada960f50;
      *(undefined8 *)(paVar4 + 0x120) = _DAT_7ffada960f48;
      *(undefined8 *)(paVar4 + 0x128) = uVar2;
      *(undefined8 *)(paVar4 + 0x130) = DAT_7ffada960f58;
      avMovingMapPoint::setPoint(paVar4,(Vec3d *)&local_190);
      paVar5 = (avMovingMapPoint *)(*(longlong *)(*(longlong *)(this + 0x18) + 0x28) + -0x100);
      if (*(longlong *)(*(longlong *)(this + 0x18) + 0x28) == 0) {
        paVar5 = paVar6;
      }
      uVar7 = (**(code **)(*(longlong *)paVar5 + 0x178))();
      avMovingMapPoint::setRotate(paVar4,(float)(uVar7 ^ DAT_7ffada84cdb0));
      SimpleOctTree::AddObject
                (*(SimpleOctTree **)(this + 0x428),(basic_string<char> *)(paVar4 + 0x70),
                 (SimpleOctTreeLoad *)paVar4);
      FUN_7ffada5f6770((longlong *)(this + 0x450),&local_198);
      if (*(int *)(this + 0x498) == 0) {
        *(undefined4 *)(this + 0x498) = 0x7fffffff;
      }
      else {
        *(int *)(this + 0x498) = *(int *)(this + 0x498) + -1;
      }
      return;
    }
    lVar1 = *plVar3;
    if ((*(int *)(lVar1 + 0x90) == 2) &&
       (dVar10 = *(double *)(lVar1 + 0x110) - local_180,
       dVar8 = *(double *)(lVar1 + 0x108) - local_188,
       dVar9 = *(double *)(lVar1 + 0x100) - local_190,
       dVar9 * dVar9 + dVar8 * dVar8 + dVar10 * dVar10 < DAT_7ffada855378)) break;
    plVar3 = plVar3 + 1;
  }
  local_158 = 0;
  local_150[0] = 0;
  dVar8 = wTime::GetAbsoluteModelTime();
  dVar8 = fmod(dVar8,DAT_7ffada84e060);
  dVar9 = floor(dVar8 / DAT_7ffada850c60);
  dVar8 = floor((dVar8 - (double)(int)dVar9 * DAT_7ffada850c60) / DAT_7ffada84dd38);
  FUN_7ffada6685d0((longlong *)&local_158,s__02d__02d_7ffada8552b0,(ulonglong)(uint)(int)dVar9,
                   (ulonglong)(uint)(int)dVar8);
  FUN_7ffada5f0b10((undefined8 *)(lVar1 + 0x70),local_150,local_158);
  return;
}

