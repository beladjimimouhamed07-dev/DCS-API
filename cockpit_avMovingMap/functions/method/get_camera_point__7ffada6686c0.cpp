/*
 * CockpitBase.dll class reconstruction
 * Function: get_camera_point
 * Address : 7ffada6686c0
 * Role    : method
 * Vtable slots: 30
 */


/* protected: virtual class osg::Vec3f __cdecl cockpit::avKneeboard::get_camera_point(void)const
   __ptr64 */

void __thiscall cockpit::avKneeboard::get_camera_point(avKneeboard *this)

{
  longlong *plVar1;
  float *in_RDX;
  double *pdVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_38 [2];
  double local_28;
  undefined1 local_20 [24];
  
                    /* 0x2586c0  3789  ?get_camera_point@avKneeboard@cockpit@@MEBA?AVVec3f@osg@@XZ
                        */
  pdVar2 = *(double **)(this + 0x378);
  uVar3 = (ulonglong)
          *(int *)(*(longlong *)(this + 1000) + 4 + (ulonglong)*(uint *)(this + 0x374) * 8);
  if (uVar3 < (ulonglong)((*(longlong *)(this + 0x380) - (longlong)pdVar2) / 0x30)) {
    pdVar2 = pdVar2 + uVar3 * 6;
  }
  dVar5 = pdVar2[3];
  dVar6 = pdVar2[4];
  if (this[0x404] != (avKneeboard)0x0) {
    plVar1 = (longlong *)(*(longlong *)(*(longlong *)(this + -0x80) + 0x28) + -0x100);
    if (*(longlong *)(*(longlong *)(this + -0x80) + 0x28) == 0) {
      plVar1 = (longlong *)0x0;
    }
    (**(code **)(*plVar1 + 0x98))(plVar1,local_20);
    to_map_units(this + -0x98,(Vec3d *)local_38);
    dVar5 = local_38[0];
    dVar6 = local_28;
  }
  if (this[0x360] == (avKneeboard)0x0) {
    dVar4 = *pdVar2 + *pdVar2;
  }
  else {
    dVar4 = 0.0;
  }
  *in_RDX = (float)dVar5;
  in_RDX[1] = (float)dVar4;
  in_RDX[2] = (float)dVar6;
  return;
}

