/*
 * CockpitBase.dll class reconstruction
 * Function: add_new_page_code
 * Address : 7ffada667a40
 * Role    : method
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: unsigned int __cdecl cockpit::avKneeboard::add_new_page_code(class
   ed::basic_string<char> const & __ptr64) __ptr64 */

uint __thiscall
cockpit::avKneeboard::add_new_page_code(avKneeboard *this,basic_string<char> *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  IcClickable *pIVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 auStack_88 [32];
  basic_string<char> **local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined1 local_54;
  undefined8 local_50;
  basic_string<char> *local_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
                    /* 0x257a40  2336
                       ?add_new_page_code@avKneeboard@cockpit@@AEAAIAEBV?$basic_string@D@ed@@@Z */
  local_20 = DAT_7ffada94e840 ^ (ulonglong)auStack_88;
  FUN_7ffada66a740((longlong *)(this + 0x480),
                   (*(longlong *)(this + 0x488) - *(longlong *)(this + 0x480) >> 3) + 1);
  uVar5 = (int)(*(longlong *)(this + 0x488) - *(longlong *)(this + 0x480) >> 3) - 1;
  *(uint *)(*(longlong *)(this + 0x488) + -4) = uVar5;
  local_48 = param_1;
  pIVar3 = instance();
  pcVar1 = *(code **)(*(longlong *)pIVar3 + 0x68);
  local_68 = &local_48;
  local_60 = 1;
  local_5c = 1;
  local_58 = 3;
  local_50 = 0;
  local_54 = 0;
  local_40 = (char *)0x0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  pcVar4 = malloc(0x20);
  if (pcVar4 == (char *)0x0) {
    ed::fatal_out_of_memory(s_ed_malloc_7ffada84cbc0,0x20);
  }
  uVar2 = s_KneeboardGeneratePage_7ffada8552e8._8_8_;
  local_30 = _DAT_7ffada8553b0;
  uStack_28 = uRam00007ffada8553b8;
  *(undefined8 *)pcVar4 = s_KneeboardGeneratePage_7ffada8552e8._0_8_;
  *(undefined8 *)(pcVar4 + 8) = uVar2;
  *(undefined4 *)(pcVar4 + 0x10) = s_KneeboardGeneratePage_7ffada8552e8._16_4_;
  pcVar4[0x14] = s_KneeboardGeneratePage_7ffada8552e8[0x14];
  pcVar4[0x15] = '\0';
  local_40 = pcVar4;
  (*pcVar1)(pIVar3,&local_40,&local_68);
  if (0xf < uStack_28) {
    free(local_40);
  }
  local_30 = _DAT_7ffada84dd60;
  uStack_28 = uRam00007ffada84dd68;
  local_40 = (char *)((ulonglong)local_40 & 0xffffffffffffff00);
  if (local_58 == 1) {
    free(local_68);
  }
  return uVar5;
}

