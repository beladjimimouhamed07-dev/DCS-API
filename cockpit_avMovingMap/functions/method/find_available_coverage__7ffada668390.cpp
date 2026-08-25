/*
 * CockpitBase.dll class reconstruction
 * Function: find_available_coverage
 * Address : 7ffada668390
 * Role    : method
 */


/* protected: void __cdecl cockpit::avKneeboard::find_available_coverage(struct
   cockpit::kneeboard_map_page & __ptr64)const __ptr64 */

void __thiscall
cockpit::avKneeboard::find_available_coverage(avKneeboard *this,kneeboard_map_page *param_1)

{
  ITerrain *pIVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  
                    /* 0x258390  3066
                       ?find_available_coverage@avKneeboard@cockpit@@IEBAXAEAUkneeboard_map_page@2@@Z
                        */
  if (param_1[0x28] == (kneeboard_map_page)0x0) {
    pIVar1 = edterrain::ITerrain::GetDefaultTerrain();
    local_34 = 0xbdcccccd;
    iVar2 = 6;
    local_28 = 0x462be000;
    dVar4 = (double)(float)*(double *)param_1;
    local_38 = (float)(*(double *)(param_1 + 0x18) - dVar4);
    local_30 = (float)(*(double *)(param_1 + 0x20) - dVar4);
    local_2c = (float)(*(double *)(param_1 + 0x18) + dVar4);
    local_24 = (float)(*(double *)(param_1 + 0x20) + dVar4);
    do {
      fVar3 = (float)(**(code **)(*(longlong *)pIVar1 + 0x188))(pIVar1,&local_38,iVar2);
      if (fVar3 != 0.0) break;
      iVar2 = iVar2 + -1;
    } while (0 < iVar2);
    if (*(int *)(param_1 + 8) < iVar2) {
      iVar2 = *(int *)(param_1 + 8);
    }
    *(int *)(param_1 + 8) = iVar2;
    for (; iVar2 < 10; iVar2 = iVar2 + 1) {
      fVar3 = (float)(**(code **)(*(longlong *)pIVar1 + 0x188))(pIVar1,&local_38,iVar2);
      if (fVar3 != 0.0) {
        *(int *)(param_1 + 8) = iVar2;
        break;
      }
    }
    iVar2 = *(int *)(param_1 + 8);
    if (6 < iVar2) {
      iVar2 = 6;
    }
    *(int *)(param_1 + 8) = iVar2;
    param_1[0x28] = (kneeboard_map_page)0x1;
  }
  return;
}

