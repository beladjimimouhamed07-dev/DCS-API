/*
 * CockpitBase.dll class reconstruction
 * Function: checkCallbackClickable
 * Address : 7ffada649250
 * Role    : method
 * Vtable slots: 17
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual bool __cdecl cockpit::avDevice::checkCallbackClickable(int,float & __ptr64)
   __ptr64 */

bool __thiscall cockpit::avDevice::checkCallbackClickable(avDevice *this,int param_1,float *param_2)

{
  clickableElementActionData cVar1;
  longlong *plVar2;
  clickableElementData *this_00;
  longlong *plVar3;
  float fVar4;
  char cVar5;
  longlong *plVar6;
  clickableElementActionData *pcVar7;
  ccSound *pcVar8;
  Host *pHVar9;
  byte bVar10;
  longlong *plVar11;
  float fVar12;
  double dVar13;
  undefined8 uVar14;
  undefined1 auStack_f8 [32];
  float local_d8 [4];
  undefined4 local_c8 [2];
  double local_c0;
  double local_b8;
  double local_b0;
  ulonglong local_58;
  
                    /* 0x239250  2631  ?checkCallbackClickable@avDevice@cockpit@@UEAA_NHAEAM@Z */
  fVar4 = DAT_7ffada84d22c;
  local_58 = DAT_7ffada94e840 ^ (ulonglong)auStack_f8;
  plVar2 = *(longlong **)(this + 0x60);
  plVar6 = (longlong *)plVar2[1];
  cVar5 = *(char *)((longlong)plVar6 + 0x19);
  plVar3 = plVar2;
  while (cVar5 == '\0') {
    plVar11 = plVar6;
    if ((int)plVar6[4] < param_1) {
      plVar6 = plVar6 + 2;
      plVar11 = plVar3;
    }
    plVar6 = (longlong *)*plVar6;
    plVar3 = plVar11;
    cVar5 = *(char *)((longlong)plVar6 + 0x19);
  }
  if (((*(char *)((longlong)plVar3 + 0x19) != '\0') || (param_1 < (int)plVar3[4])) ||
     (plVar3 == plVar2)) {
    return true;
  }
  this_00 = (clickableElementData *)plVar3[5];
  if ((float)((uint)*param_2 & _DAT_7ffada84d240) < DAT_7ffada84d22c) {
    *param_2 = 0.0;
  }
  bVar10 = 0;
  do {
    pcVar7 = clickableElementData::getActionData(this_00,bVar10);
    if ((pcVar7 != (clickableElementActionData *)0x0) &&
       ((param_1 == *(int *)(pcVar7 + 0xc) || (param_1 == *(int *)(pcVar7 + 0x10)))))
    goto LAB_7ffada649334;
    bVar10 = bVar10 + 1;
  } while (bVar10 < 8);
  if (pcVar7 == (clickableElementActionData *)0x0) {
    return true;
  }
LAB_7ffada649334:
  fVar12 = clickableElementData::get_arg_value(this_00,*(int *)(pcVar7 + 0x18));
  local_d8[0] = fVar12;
  cVar5 = (**(code **)(*(longlong *)pcVar7 + 8))(pcVar7,local_d8,param_2,param_1);
  if (cVar5 == '\0') {
    return false;
  }
  cVar1 = pcVar7[8];
  if (cVar1 == (clickableElementActionData)0x1) {
    if (fVar4 <= (float)((uint)local_d8[0] & _DAT_7ffada84d240)) {
      if (this[0x91] != (avDevice)0x0) {
        local_c0 = (double)*(float *)(this_00 + 0xa4);
        local_c8[0] = 1;
        local_b8 = (double)*(float *)(this_00 + 0xa8);
        local_b0 = (double)*(float *)(this_00 + 0xac);
        pcVar8 = ccSound::instance();
        pHVar9 = ccSound::getHost(pcVar8,s_COCKPIT_SWITCHES_7ffada84cea0);
        Sound::Host::update(pHVar9,(SND_HostParams *)local_c8);
        if ((*(int *)(pcVar7 + 0x3c) == -1) && (*(int *)(pcVar7 + 0x40) == -1)) {
          pcVar8 = ccSound::instance();
          Sound::Source::play_once((Source *)pcVar8,(SND_SourceParams *)0x0);
        }
      }
      uVar14 = ED_get_time();
      *(undefined8 *)(this_00 + 0x120) = uVar14;
      return true;
    }
    cVar1 = pcVar7[0x30];
    dVar13 = (double)ED_get_time();
    if (((DAT_7ffada852098 < dVar13 - *(double *)(this_00 + 0x120)) &&
        (0.0 < *(double *)(this_00 + 0x120))) && (this[0x91] != (avDevice)0x0)) {
      local_c0 = (double)*(float *)(this_00 + 0xa4);
      local_c8[0] = 1;
      local_b8 = (double)*(float *)(this_00 + 0xa8);
      local_b0 = (double)*(float *)(this_00 + 0xac);
      pcVar8 = ccSound::instance();
      pHVar9 = ccSound::getHost(pcVar8,s_COCKPIT_SWITCHES_7ffada84cea0);
      Sound::Host::update(pHVar9,(SND_HostParams *)local_c8);
      if ((*(int *)(pcVar7 + 0x3c) == -1) && (*(int *)(pcVar7 + 0x40) == -1)) {
        pcVar8 = ccSound::instance();
        Sound::Source::play_once((Source *)(pcVar8 + 4),(SND_SourceParams *)0x0);
      }
    }
    *(undefined8 *)(this_00 + 0x120) = 0xbff0000000000000;
    return (bool)cVar1;
  }
  if (cVar1 != (clickableElementActionData)0x2) {
    if (cVar1 == (clickableElementActionData)0x3) {
      if (this[0x91] == (avDevice)0x0) {
        return true;
      }
      local_c0 = (double)*(float *)(this_00 + 0xa4);
      local_c8[0] = 1;
      local_b8 = (double)*(float *)(this_00 + 0xa8);
      local_b0 = (double)*(float *)(this_00 + 0xac);
      pcVar8 = ccSound::instance();
      pHVar9 = ccSound::getHost(pcVar8,s_COCKPIT_SWITCHES_7ffada84cea0);
      Sound::Host::update(pHVar9,(SND_HostParams *)local_c8);
      if (*(int *)(pcVar7 + 0x3c) != -1) {
        return true;
      }
      if (*(int *)(pcVar7 + 0x40) != -1) {
        return true;
      }
      goto LAB_7ffada649456;
    }
    if (cVar1 != (clickableElementActionData)0x6) {
      return true;
    }
  }
  if (this[0x91] != (avDevice)0x0) {
    local_c0 = (double)*(float *)(this_00 + 0xa4);
    local_c8[0] = 1;
    local_b8 = (double)*(float *)(this_00 + 0xa8);
    local_b0 = (double)*(float *)(this_00 + 0xac);
    pcVar8 = ccSound::instance();
    pHVar9 = ccSound::getHost(pcVar8,s_COCKPIT_SWITCHES_7ffada84cea0);
    Sound::Host::update(pHVar9,(SND_HostParams *)local_c8);
    if (((*(int *)(pcVar7 + 0x3c) == -1) && (*(int *)(pcVar7 + 0x40) == -1)) &&
       (local_d8[0] != fVar12)) {
LAB_7ffada649456:
      pcVar8 = ccSound::instance();
      Sound::Source::play_once((Source *)(pcVar8 + 8),(SND_SourceParams *)0x0);
      return true;
    }
  }
  return true;
}

