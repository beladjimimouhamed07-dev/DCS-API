/*
 * CockpitBase.dll class reconstruction
 * Function: update
 * Address : 7ffada793d20
 * Role    : method
 * Vtable slots: 4
 */


/* public: virtual void __cdecl cockpit::ccIndicatorPage::update(unsigned char) __ptr64 */

void __thiscall cockpit::ccIndicatorPage::update(ccIndicatorPage *this,uchar param_1)

{
  undefined8 *puVar1;
  uchar uVar2;
  undefined8 *puVar3;
  
                    /* 0x383d20  6891  ?update@ccIndicatorPage@cockpit@@UEAAXE@Z */
  puVar1 = *(undefined8 **)(this + 0x58);
  for (puVar3 = *(undefined8 **)(this + 0x50); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    uVar2 = (**(code **)(*(longlong *)*puVar3 + 0x140))();
    if (uVar2 == param_1) {
      (**(code **)(*(longlong *)*puVar3 + 0x20))();
    }
  }
  return;
}

