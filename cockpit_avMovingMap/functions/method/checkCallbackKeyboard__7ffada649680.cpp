/*
 * CockpitBase.dll class reconstruction
 * Function: checkCallbackKeyboard
 * Address : 7ffada649680
 * Role    : method
 * Vtable slots: 16
 */


/* public: virtual bool __cdecl cockpit::avDevice::checkCallbackKeyboard(int,float & __ptr64)
   __ptr64 */

bool __thiscall cockpit::avDevice::checkCallbackKeyboard(avDevice *this,int param_1,float *param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int *piVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res8 [2];
  
                    /* 0x239680  2632  ?checkCallbackKeyboard@avDevice@cockpit@@UEAA_NHAEAM@Z */
  fVar3 = DAT_7ffada84d22c;
  plVar7 = *(longlong **)(this + 0x70);
  plVar5 = (longlong *)plVar7[1];
  cVar4 = *(char *)((longlong)plVar5 + 0x19);
  plVar6 = plVar7;
  while (cVar4 == '\0') {
    plVar9 = plVar5;
    if ((int)plVar5[4] < param_1) {
      plVar5 = plVar5 + 2;
      plVar9 = plVar6;
    }
    plVar5 = (longlong *)*plVar5;
    plVar6 = plVar9;
    cVar4 = *(char *)((longlong)plVar5 + 0x19);
  }
  if (((*(char *)((longlong)plVar6 + 0x19) == '\0') && ((int)plVar6[4] <= param_1)) &&
     (plVar6 != plVar7)) {
    piVar2 = (int *)plVar6[6];
    for (piVar8 = (int *)plVar6[5]; piVar8 != piVar2; piVar8 = piVar8 + 6) {
      if (*piVar8 != 0) {
        local_res8[0] = *param_2;
        if (local_res8[0] == 0.0) {
          local_res8[0] = (float)piVar8[2];
        }
        cVar4 = (**(code **)(*(longlong *)this + 0x50))(this,*piVar8,param_1,local_res8);
        if (cVar4 == '\0') {
          return false;
        }
        fVar10 = ccCockpitContext::get_argument(*(ccCockpitContext **)(this + 0x18),*piVar8);
        *param_2 = local_res8[0];
        if ((char)piVar8[5] == '\0') {
          fVar10 = fVar10 + local_res8[0];
          fVar12 = (float)piVar8[3];
          if ((fVar10 <= (float)piVar8[4] + fVar3) &&
             (fVar11 = fVar12 - fVar3, fVar12 = fVar10, fVar10 < fVar11)) {
            fVar12 = (float)piVar8[4];
          }
        }
        else {
          fVar12 = (float)piVar8[2];
        }
        ccCockpitContext::set_argument(*(ccCockpitContext **)(this + 0x18),*piVar8,fVar12);
      }
      iVar1 = piVar8[1];
      if (iVar1 != 0) {
        plVar7 = *(longlong **)(this + 0x60);
        plVar5 = (longlong *)plVar7[1];
        plVar6 = plVar7;
        if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
          do {
            plVar7 = plVar5;
            if ((int)plVar5[4] < iVar1) {
              plVar5 = plVar5 + 2;
              plVar7 = plVar6;
            }
            plVar5 = (longlong *)*plVar5;
            plVar6 = plVar7;
          } while (*(char *)((longlong)plVar5 + 0x19) == '\0');
          plVar6 = *(longlong **)(this + 0x60);
        }
        if (((*(char *)((longlong)plVar7 + 0x19) == '\0') && ((int)plVar7[4] <= iVar1)) &&
           ((plVar7 != plVar6 && ((clickableElementData *)plVar7[5] != (clickableElementData *)0x0))
           )) {
          clickableElementData::update((clickableElementData *)plVar7[5]);
        }
      }
    }
  }
  return true;
}

