/*
 * CockpitBase.dll class reconstruction
 * Function: distribute_elements
 * Address : 7ffada7920c0
 * Role    : method
 */


/* protected: virtual void __cdecl cockpit::ccIndicatorPage::distribute_elements(void) __ptr64 */

void __thiscall cockpit::ccIndicatorPage::distribute_elements(ccIndicatorPage *this)

{
  byte *pbVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong local_38 [2];
  
                    /* 0x3820c0  2940  ?distribute_elements@ccIndicatorPage@cockpit@@MEAAXXZ */
  puVar9 = *(undefined8 **)(this + 0x50);
  puVar7 = *(undefined8 **)(this + 0x58);
  if (puVar9 != puVar7) {
    do {
      lVar4 = (**(code **)(*(longlong *)*puVar9 + 0x90))();
      puVar7 = *(undefined8 **)(lVar4 + 8);
      for (puVar8 = (undefined8 *)*puVar7; puVar8 != puVar7; puVar8 = (undefined8 *)*puVar8) {
        uVar2 = puVar8[4];
        if (uVar2 != 0) {
          puVar10 = puVar8 + 2;
          if (0xf < (ulonglong)puVar8[5]) {
            puVar10 = (undefined8 *)puVar8[2];
          }
          uVar5 = 0;
          uVar11 = 0xcbf29ce484222325;
          if (uVar2 != 0) {
            do {
              pbVar1 = (byte *)((longlong)puVar10 + uVar5);
              uVar5 = uVar5 + 1;
              uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
            } while (uVar5 < uVar2);
          }
          plVar6 = FUN_7ffada5ef1f0((longlong)(this + 0x10),local_38,puVar8 + 2,uVar11);
          lVar4 = plVar6[1];
          if (lVar4 == 0) {
            lVar4 = *(longlong *)(this + 0x18);
          }
          if (lVar4 != *(longlong *)(this + 0x18)) {
            (**(code **)(*(longlong *)*puVar9 + 0x80))
                      ((longlong *)*puVar9,*(undefined8 *)(lVar4 + 0x30));
            (**(code **)(**(longlong **)(lVar4 + 0x30) + 0x88))
                      (*(longlong **)(lVar4 + 0x30),*puVar9);
          }
        }
      }
      puVar7 = *(undefined8 **)(this + 0x58);
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar7);
  }
  puVar9 = *(undefined8 **)(this + 0x50);
  if (puVar9 != puVar7) {
    puVar7 = puVar9 + 1;
    do {
      puVar8 = (undefined8 *)(**(code **)(*(longlong *)*puVar9 + 0x58))();
      uVar2 = puVar8[2];
      if (uVar2 == 0) {
LAB_7ffada7922b2:
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      }
      else {
        puVar10 = puVar8;
        if (0xf < (ulonglong)puVar8[3]) {
          puVar10 = (undefined8 *)*puVar8;
        }
        uVar5 = 0;
        uVar11 = 0xcbf29ce484222325;
        if (uVar2 != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar10 + uVar5);
            uVar5 = uVar5 + 1;
            uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
          } while (uVar5 < uVar2);
        }
        plVar6 = FUN_7ffada5ef1f0((longlong)(this + 0x10),local_38,puVar8,uVar11);
        lVar4 = plVar6[1];
        if (lVar4 == 0) {
          lVar4 = *(longlong *)(this + 0x18);
        }
        lVar3 = *(longlong *)*puVar9;
        if (lVar4 == *(longlong *)(this + 0x18)) {
          (**(code **)(lVar3 + 0x10))();
          FUN_7ffada5f68c0();
          goto LAB_7ffada7922b2;
        }
        (**(code **)(lVar3 + 0x70))((longlong *)*puVar9,*(undefined8 *)(lVar4 + 0x30));
        (**(code **)(**(longlong **)(lVar4 + 0x30) + 0x78))(*(longlong **)(lVar4 + 0x30),*puVar9);
        memmove(puVar9,puVar7,*(longlong *)(this + 0x58) - (longlong)puVar7);
        *(longlong *)(this + 0x58) = *(longlong *)(this + 0x58) + -8;
      }
    } while (puVar9 != *(undefined8 **)(this + 0x58));
  }
  return;
}

