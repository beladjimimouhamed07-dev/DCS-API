/*
 * CockpitBase.dll class reconstruction
 * Function: check_camera_orientation
 * Address : 7ffada6738c0
 * Role    : method
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl cockpit::avMovingMap::check_camera_orientation(void) __ptr64 */

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
  
                    /* 0x2638c0  2665  ?check_camera_orientation@avMovingMap@cockpit@@IEAAXXZ */
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
    uStack_4c = (undefined4)_DAT_7ffada84dde0;
    fStack_48 = (float)((ulonglong)_DAT_7ffada84dde0 >> 0x20);
    fStack_44 = (float)uRam00007ffada84dde8;
    uStack_40 = (undefined4)((ulonglong)uRam00007ffada84dde8 >> 0x20);
    local_54 = 0;
    local_3c = 0;
    local_38 = (ulonglong)((uint)fVar2 ^ DAT_7ffada84cdb0);
    local_30 = (ulonglong)(uint)local_58;
    local_50 = fVar2;
    FUN_7ffada6135c0((float *)(this + 0x238),&local_58);
  }
  fVar2 = DAT_7ffada855ae0;
  this[0x310] = (avMovingMap)0x1;
  fVar3 = sinf(fVar2);
  local_58 = cosf(fVar2);
  uStack_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_50 = 0.0;
  uStack_4c = 0;
  local_54 = (uint)fVar3 ^ DAT_7ffada84cdb0;
  local_30 = 0x3f800000;
  fStack_48 = fVar3;
  fStack_44 = local_58;
  FUN_7ffada6135c0((float *)(this + 0x238),&local_58);
  return;
}

