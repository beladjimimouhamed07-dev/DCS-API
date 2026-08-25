/*
 * CockpitBase.dll class reconstruction
 * Function: thunk_FUN_7ffada82ae20
 * Address : 7ffada82b0f0
 * Role    : thunk
 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [32]
thunk_FUN_7ffada82ae20
          (undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [16],
          ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [32];
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  size_t _Size;
  undefined1 (*pauVar6) [32];
  uint uVar7;
  longlong lVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = DAT_7ffada94e840 ^ (ulonglong)auStack_78;
  pauVar2 = param_1;
  if (param_4 != 0) {
    if (param_4 == 1) {
      pauVar2 = FUN_7ffada82ab40(param_1,param_2,(*param_3)[0]);
    }
    else {
      uVar4 = (longlong)param_2 - (longlong)param_1;
      pauVar2 = param_2;
      if (param_4 <= uVar4) {
        if ((((byte)DAT_7ffada94e89c & 4) == 0) || (uVar4 < 0x10)) {
          pauVar6 = (undefined1 (*) [32])((longlong)param_1 + uVar4 + (1 - param_4));
          if (param_1 != pauVar6) {
            lVar8 = (longlong)param_3 - (longlong)param_1;
            do {
              if ((*param_1)[0] == (*param_3)[0]) {
                pcVar5 = *param_1 + 1;
                while (*pcVar5 == pcVar5[lVar8]) {
                  pcVar5 = pcVar5 + 1;
                  if ((longlong)pcVar5 - (longlong)param_1 == param_4) {
                    return param_1;
                  }
                }
              }
              param_1 = (undefined1 (*) [32])(*param_1 + 1);
              lVar8 = lVar8 + -1;
            } while (param_1 != pauVar6);
          }
        }
        else if (param_4 < 0x11) {
          uVar7 = (uint)param_4;
          uVar9 = 0x10 < uVar7;
          memcpy(auStack_58,param_3,param_4);
          auVar1 = auStack_58;
          do {
            iVar3 = pcmpestri(auStack_58,*(undefined1 (*) [16])*param_1,0xc,uVar7,0x10);
            if ((bool)uVar9) {
              param_1 = (undefined1 (*) [32])(*param_1 + iVar3);
              if (iVar3 <= (int)(0x10 - uVar7)) {
                return param_1;
              }
            }
            else {
              param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
            }
            uVar9 = param_1 < (undefined1 (*) [32])(param_2[-1] + 0x10);
          } while (param_1 <= (undefined1 (*) [32])(param_2[-1] + 0x10));
          bVar10 = param_2 < param_1;
          _Size = (longlong)param_2 - (longlong)param_1;
          if (_Size != 0) {
            memcpy(auStack_58,param_1,_Size);
            iVar3 = pcmpestri(auVar1,auStack_58,0xc,uVar7,(int)_Size);
            if (bVar10) {
              pauVar2 = (undefined1 (*) [32])(*param_1 + iVar3);
            }
          }
        }
        else {
          auVar1 = *param_3;
          bVar10 = CARRY8((longlong)param_1 - param_4,uVar4);
          pauVar6 = (undefined1 (*) [32])(((longlong)param_1 - param_4) + uVar4);
          do {
            iVar3 = pcmpestri(auVar1,*(undefined1 (*) [16])*param_1,0xc,0x10,0x10);
            if (bVar10) {
              if (iVar3 == 0) {
LAB_7ffada82af75:
                iVar3 = memcmp(*param_1 + 0x10,param_3 + 1,param_4 - 0x10);
                if (iVar3 == 0) {
                  return param_1;
                }
              }
              else {
                param_1 = (undefined1 (*) [32])(*param_1 + iVar3);
                if (pauVar6 < param_1) {
                  return param_2;
                }
                auVar11._0_4_ = *(uint *)*param_1 ^ auVar1._0_4_;
                auVar11._4_4_ = *(uint *)(*param_1 + 4) ^ auVar1._4_4_;
                auVar11._8_4_ = *(uint *)(*param_1 + 8) ^ auVar1._8_4_;
                auVar11._12_4_ = *(uint *)(*param_1 + 0xc) ^ auVar1._12_4_;
                if (auVar11 == (undefined1  [16])0x0) goto LAB_7ffada82af75;
              }
              param_1 = (undefined1 (*) [32])(*param_1 + 1);
            }
            else {
              param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
            }
            bVar10 = param_1 < pauVar6;
          } while (param_1 <= pauVar6);
        }
      }
    }
  }
  return pauVar2;
}

