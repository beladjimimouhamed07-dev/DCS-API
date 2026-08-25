/*
 * CockpitBase.dll class reconstruction
 * Function: add_note
 * Address : 7ffada667ec0
 * Role    : method
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl cockpit::avKneeboard::add_note(class std::basic_string_view<char,struct
   std::char_traits<char> >) __ptr64 */

void __thiscall cockpit::avKneeboard::add_note(avKneeboard *this,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined1 (*pauVar8) [32];
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined1 (*pauVar12) [32];
  undefined1 auStackY_b8 [32];
  char local_80;
  undefined7 uStack_7f;
  size_t local_70;
  ulonglong uStack_68;
  undefined1 (*local_60 [2]) [32];
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
                    /* 0x257ec0  2339
                       ?add_note@avKneeboard@cockpit@@IEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
                        */
  local_40 = DAT_7ffada94e840 ^ (ulonglong)auStackY_b8;
  if ((*(longlong *)(this + 0x4e8) != 0) && (param_2[1] != 0)) {
    pcVar9 = (char *)*param_2;
    pcVar10 = pcVar9 + param_2[1];
    iVar6 = 1;
    for (; pcVar9 != pcVar10; pcVar9 = pcVar9 + 1) {
      iVar7 = iVar6 + 1;
      if (*pcVar9 != '\n') {
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
    }
    puVar2 = *(undefined8 **)(this + 0x4c0);
    puVar3 = *(undefined8 **)(this + 0x4c8);
    if ((puVar2 == puVar3) || (0x1f < (uint)(*(int *)(puVar3 + -1) + iVar6))) {
      uVar5 = ((longlong)puVar3 - (longlong)puVar2) / 0x28;
      uVar1 = uVar5 + 1;
      if (uVar1 < uVar5) {
        for (puVar11 = puVar2 + uVar1 * 5; puVar11 != puVar3; puVar11 = puVar11 + 5) {
          if (0xf < (ulonglong)puVar11[3]) {
            free((void *)*puVar11);
          }
          puVar11[2] = 0;
          puVar11[3] = 0xf;
          *(undefined1 *)puVar11 = 0;
        }
        *(undefined8 **)(this + 0x4c8) = puVar2 + uVar1 * 5;
      }
      else if (uVar5 < uVar1) {
        if ((ulonglong)((*(longlong *)(this + 0x4d0) - (longlong)puVar2) / 0x28) < uVar1) {
          FUN_7ffada6647d0((longlong *)(this + 0x4c0),uVar1);
        }
        else {
          puVar3[4] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0xf;
          *(undefined1 *)puVar3 = 0;
          *(undefined8 **)(this + 0x4c8) = puVar3 + 5;
        }
      }
      lVar4 = *(longlong *)(this + 0x4c8);
      FUN_7ffada5f0b10((undefined8 *)(lVar4 + -0x28),(void *)*param_2,param_2[1]);
      *(int *)(lVar4 + -8) = iVar6;
      FUN_7ffada5ef690(local_60,(undefined8 *)(this + 0x4d8));
      ed::string_format(&local_80);
      pauVar12 = (undefined1 (*) [32])local_60;
      if (0xf < local_48) {
        pauVar12 = local_60[0];
      }
      if (((1 < local_50) &&
          (pauVar8 = thunk_FUN_7ffada82ae20
                               (pauVar12,(undefined1 (*) [32])(*pauVar12 + local_50),
                                (undefined1 (*) [16])&DAT_7ffada85536c,2),
          pauVar8 != (undefined1 (*) [32])(*pauVar12 + local_50))) &&
         ((longlong)pauVar8 - (longlong)pauVar12 != 0xffffffffffffffff)) {
        pcVar9 = &local_80;
        if (0xf < uStack_68) {
          pcVar9 = (char *)CONCAT71(uStack_7f,local_80);
        }
        FUN_7ffada66a530((longlong *)local_60,(longlong)pauVar8 - (longlong)pauVar12,2,pcVar9,
                         local_70);
      }
      add_new_page_code(this,(basic_string<char> *)local_60);
      if (0xf < uStack_68) {
        free((void *)CONCAT71(uStack_7f,local_80));
      }
      local_70 = _DAT_7ffada84dd60;
      uStack_68 = uRam00007ffada84dd68;
      local_80 = '\0';
      if (0xf < local_48) {
        free(local_60[0]);
      }
    }
    else {
      FUN_7ffada603a60(puVar3 + -5,&DAT_7ffada855348,1);
      FUN_7ffada603a60(puVar3 + -5,(void *)*param_2,param_2[1]);
      *(int *)(puVar3 + -1) = *(int *)(puVar3 + -1) + iVar6;
    }
  }
  return;
}

