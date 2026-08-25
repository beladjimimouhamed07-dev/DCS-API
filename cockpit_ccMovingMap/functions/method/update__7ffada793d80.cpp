/*
 * CockpitBase.dll class reconstruction
 * Function: update
 * Address : 7ffada793d80
 * Role    : method
 * Vtable slots: 5
 */


/* public: virtual void __cdecl cockpit::ccIndicatorPage::update(void) __ptr64 */

void __thiscall cockpit::ccIndicatorPage::update(ccIndicatorPage *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* 0x383d80  6892  ?update@ccIndicatorPage@cockpit@@UEAAXXZ */
  puVar1 = *(undefined8 **)(this + 0x58);
  for (puVar2 = *(undefined8 **)(this + 0x50); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(longlong *)*puVar2 + 0x20))();
  }
  return;
}

