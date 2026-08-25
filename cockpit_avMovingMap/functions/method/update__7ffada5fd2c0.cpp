/*
 * CockpitBase.dll class reconstruction
 * Function: update
 * Address : 7ffada5fd2c0
 * Role    : method
 */


/* public: void __cdecl cockpit::clickableElementData::update(void) __ptr64 */

void __thiscall cockpit::clickableElementData::update(clickableElementData *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* 0x1ed2c0  6904  ?update@clickableElementData@cockpit@@QEAAXXZ */
  if (this[0xd0] != (clickableElementData)0x0) {
    force_update(this);
    puVar1 = *(undefined8 **)(this + 0x38);
    for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
      update((clickableElementData *)puVar2[2]);
    }
  }
  return;
}

