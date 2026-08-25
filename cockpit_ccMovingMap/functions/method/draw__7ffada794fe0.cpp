/*
 * CockpitBase.dll class reconstruction
 * Function: draw
 * Address : 7ffada794fe0
 * Role    : method
 * Vtable slots: 19
 */


/* public: virtual void __cdecl cockpit::ccArcade_template_buffer::draw(class
   cockpit::ccIndicationRenderParser & __ptr64,unsigned char) __ptr64 */

void __thiscall
cockpit::ccArcade_template_buffer::draw
          (ccArcade_template_buffer *this,ccIndicationRenderParser *param_1,uchar param_2)

{
  undefined8 *puVar1;
  
                    /* 0x384fe0  2950
                       ?draw@ccArcade_template_buffer@cockpit@@UEAAXAEAVccIndicationRenderParser@2@E@Z
                       0x384fe0  2956
                       ?draw@ccMapObjectsBuffer@cockpit@@UEAAXAEAVccIndicationRenderParser@2@E@Z */
  puVar1 = *(undefined8 **)(this + 0x38);
  if (puVar1 != *(undefined8 **)(this + 0x40)) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x18))((longlong *)*puVar1,param_1,param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined8 **)(this + 0x40));
  }
  return;
}

