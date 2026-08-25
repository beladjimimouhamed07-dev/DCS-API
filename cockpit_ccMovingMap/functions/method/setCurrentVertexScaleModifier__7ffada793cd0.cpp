/*
 * CockpitBase.dll class reconstruction
 * Function: setCurrentVertexScaleModifier
 * Address : 7ffada793cd0
 * Role    : method
 * Vtable slots: 9
 */


/* public: virtual void __cdecl cockpit::ccIndicatorPage::setCurrentVertexScaleModifier(char,float)
   __ptr64 */

void __thiscall
cockpit::ccIndicatorPage::setCurrentVertexScaleModifier
          (ccIndicatorPage *this,char param_1,float param_2)

{
                    /* 0x383cd0  5837
                       ?setCurrentVertexScaleModifier@ccIndicatorPage@cockpit@@UEAAXDM@Z */
  if (param_1 == '\x01') {
    *(undefined4 *)(this + 0x74) = *(undefined4 *)(this + 0x68);
  }
  else {
    if (param_1 == '\x02') {
      *(float *)(this + 0x74) = *(float *)(this + 0x70) * DAT_7ffada84dcf8;
      return;
    }
    if (param_1 == '\x03') {
      *(undefined4 *)(this + 0x74) = 0x3f800000;
      return;
    }
    if (param_1 == '\x04') {
      *(float *)(this + 0x74) = param_2;
      return;
    }
  }
  return;
}

