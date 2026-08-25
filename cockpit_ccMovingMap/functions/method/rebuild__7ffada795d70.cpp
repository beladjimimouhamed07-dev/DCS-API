/*
 * CockpitBase.dll class reconstruction
 * Function: rebuild
 * Address : 7ffada795d70
 * Role    : method
 * Vtable slots: 18
 */


/* public: virtual void __cdecl cockpit::ccArcade_template_buffer::rebuild(class cockpit::Element *
   __ptr64) __ptr64 */

void __thiscall
cockpit::ccArcade_template_buffer::rebuild(ccArcade_template_buffer *this,Element *param_1)

{
  undefined8 *puVar1;
  
                    /* 0x385d70  5500
                       ?rebuild@ccArcade_template_buffer@cockpit@@UEAAXPEAVElement@2@@Z
                       0x385d70  5502  ?rebuild@ccMapObjectsBuffer@cockpit@@UEAAXPEAVElement@2@@Z */
  puVar1 = *(undefined8 **)(this + 0x38);
  if (puVar1 != *(undefined8 **)(this + 0x40)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x70))((longlong *)*puVar1,param_1);
      (**(code **)(*(longlong *)*puVar1 + 0x20))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined8 **)(this + 0x40));
  }
  return;
}

