/*
 * CockpitBase.dll class reconstruction
 * Function: SetCommand
 * Address : 7ffada6675f0
 * Role    : method
 * Vtable slots: 12
 */


/* public: virtual void __cdecl cockpit::avKneeboard::SetCommand(int,float) __ptr64 */

void __thiscall cockpit::avKneeboard::SetCommand(avKneeboard *this,int param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
                    /* 0x2575f0  2185  ?SetCommand@avKneeboard@cockpit@@UEAAXHM@Z */
  if (param_1 < 0xbba) {
    if (param_1 == 0xbb9) {
      next_page(this);
      return;
    }
    if (param_1 != 0xa3c) {
      return;
    }
switchD_7ffada6676b7_caseD_bbe:
    uVar6 = (longlong)(param_2 + DAT_7ffada84dd10) & 0xffffffff;
    if ((uVar6 < (ulonglong)(*(longlong *)(this + 0x470) - *(longlong *)(this + 0x468) >> 2)) &&
       (iVar5 = *(int *)(*(longlong *)(this + 0x468) + uVar6 * 4), iVar5 != -1)) {
      uVar7 = 0;
      uVar6 = *(longlong *)(this + 0x488) - *(longlong *)(this + 0x480) >> 3;
      if (uVar6 != 0) {
        do {
          if (*(int *)(*(longlong *)(this + 0x480) + 4 + uVar7 * 8) == iVar5) {
            *(int *)(this + 0x40c) = (int)uVar7;
            break;
          }
          uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar7 < uVar6);
      }
LAB_7ffada667757:
      if (*(int *)(this + 0x498) != 0) {
        *(int *)(this + 0x498) = *(int *)(this + 0x498) + -1;
        return;
      }
      *(undefined4 *)(this + 0x498) = 0x7fffffff;
      return;
    }
  }
  else {
    switch(param_1) {
    case 0xbba:
      iVar5 = *(int *)(this + 0x40c);
      if (iVar5 == 0) {
        if (*(longlong *)(this + 0x480) == *(longlong *)(this + 0x488)) goto LAB_7ffada6676eb;
        iVar5 = (int)(*(longlong *)(this + 0x488) - *(longlong *)(this + 0x480) >> 3);
      }
      *(int *)(this + 0x40c) = iVar5 + -1;
LAB_7ffada6676eb:
      if (*(int *)(this + 0x498) != 0) {
        *(int *)(this + 0x498) = *(int *)(this + 0x498) + -1;
        return;
      }
      *(undefined4 *)(this + 0x498) = 0x7fffffff;
      return;
    case 0xbbb:
      mark_self(this);
      return;
    case 0xbbc:
      set_page_as_shortcut
                (this,*(uint *)(*(longlong *)(this + 0x480) + 4 +
                               (ulonglong)*(uint *)(this + 0x40c) * 8));
      return;
    case 0xbbd:
      lVar2 = *(longlong *)(this + 0x468);
      iVar5 = 1;
      if (param_2 < 0.0) {
        iVar5 = -1;
      }
      if (lVar2 == *(longlong *)(this + 0x470)) {
        return;
      }
      uVar6 = 0;
      lVar4 = *(longlong *)(this + 0x480);
      lVar10 = *(longlong *)(this + 0x470) - lVar2 >> 2;
      iVar1 = *(int *)(lVar4 + (ulonglong)*(uint *)(this + 0x40c) * 8);
      if (iVar1 < 0) {
        uVar7 = uVar6;
        if (iVar5 < 1) {
LAB_7ffada667866:
          uVar7 = (ulonglong)((int)lVar10 - 1);
        }
      }
      else {
        uVar9 = iVar1 + iVar5;
        if ((int)uVar9 < 0) goto LAB_7ffada667866;
        uVar7 = (ulonglong)uVar9;
        if (lVar10 - 1U < (ulonglong)(longlong)(int)uVar9) {
          uVar7 = 0;
        }
      }
      if (lVar10 != 0) {
        lVar8 = lVar10;
        do {
          if ((uVar7 < (ulonglong)(*(longlong *)(this + 0x470) - lVar2 >> 2)) &&
             (iVar5 = *(int *)(lVar2 + uVar7 * 4), iVar5 != -1)) {
            uVar7 = *(longlong *)(this + 0x488) - lVar4 >> 3;
            if (uVar7 == 0) goto LAB_7ffada667919;
            goto LAB_7ffada667900;
          }
          uVar9 = (int)uVar7 * 2;
          if ((int)uVar9 < 0) {
            uVar7 = (ulonglong)((int)lVar10 - 1);
          }
          else {
            uVar7 = (ulonglong)uVar9;
            if (lVar10 - 1U < (ulonglong)(longlong)(int)uVar9) {
              uVar7 = uVar6;
            }
          }
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      break;
    case 0xbbe:
      goto switchD_7ffada6676b7_caseD_bbe;
    case 0xbbf:
      if (0.0 < param_2) {
        ed_cockpit_set_action_digital(0x633);
        return;
      }
      break;
    case 0xbc0:
      unset_page_as_shortcut
                (this,*(uint *)(*(longlong *)(this + 0x480) + 4 +
                               (ulonglong)*(uint *)(this + 0x40c) * 8));
      return;
    case 0xbc1:
      uVar9 = *(uint *)(this + 0x40c);
      if (uVar9 == 0) {
        return;
      }
      lVar2 = *(longlong *)(this + 0x480);
      uVar3 = *(undefined8 *)(lVar2 + (ulonglong)uVar9 * 8);
      *(undefined8 *)(lVar2 + (ulonglong)uVar9 * 8) =
           *(undefined8 *)(lVar2 + (ulonglong)(uVar9 - 1) * 8);
      *(undefined8 *)(lVar2 + (ulonglong)(uVar9 - 1) * 8) = uVar3;
      *(int *)(this + 0x40c) = *(int *)(this + 0x40c) + -1;
      goto LAB_7ffada667757;
    case 0xbc2:
      uVar9 = *(uint *)(this + 0x40c);
      lVar2 = *(longlong *)(this + 0x480);
      uVar6 = (ulonglong)(uVar9 + 1);
      if (uVar6 < (ulonglong)(*(longlong *)(this + 0x488) - lVar2 >> 3)) {
        uVar3 = *(undefined8 *)(lVar2 + (ulonglong)uVar9 * 8);
        *(undefined8 *)(lVar2 + (ulonglong)uVar9 * 8) = *(undefined8 *)(lVar2 + uVar6 * 8);
        *(undefined8 *)(lVar2 + uVar6 * 8) = uVar3;
        *(int *)(this + 0x40c) = *(int *)(this + 0x40c) + 1;
        goto LAB_7ffada667757;
      }
    }
  }
  return;
  while (uVar6 = (ulonglong)((int)uVar6 + 1), uVar6 < uVar7) {
LAB_7ffada667900:
    if (*(int *)(lVar4 + 4 + uVar6 * 8) == iVar5) {
      *(int *)(this + 0x40c) = (int)uVar6;
      break;
    }
  }
LAB_7ffada667919:
  if (*(int *)(this + 0x498) != 0) {
    *(int *)(this + 0x498) = *(int *)(this + 0x498) + -1;
    return;
  }
  *(undefined4 *)(this + 0x498) = 0x7fffffff;
  return;
}

