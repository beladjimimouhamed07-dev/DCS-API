/*
 * CockpitBase.dll class reconstruction
 * Function: ~ccMapObjectsBuffer
 * Address : 7ffada794760
 * Role    : destructor
 */


/* public: virtual __cdecl cockpit::ccMapObjectsBuffer::~ccMapObjectsBuffer(void) __ptr64 */

void __thiscall cockpit::ccMapObjectsBuffer::~ccMapObjectsBuffer(ccMapObjectsBuffer *this)

{
                    /* 0x384760  904  ??1ccMapObjectsBuffer@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    free(*(void **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  *(undefined4 *)(this + 0x60) = 0;
  if (*(void **)(this + 0x38) != (void *)0x0) {
    free(*(void **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
  }
  *(undefined ***)this = ccIndicationTemplateBuffer::vftable;
  if (0xf < *(ulonglong *)(this + 0x30)) {
    free(*(void **)(this + 0x18));
  }
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0xf;
  this[0x18] = (ccMapObjectsBuffer)0x0;
  return;
}

