/*
 * CockpitBase.dll class reconstruction
 * Function: avMovingMap
 * Address : 7ffada673810
 * Role    : method
 */


/* public: __cdecl cockpit::avMovingMap::avMovingMap(void) __ptr64 */

avMovingMap * __thiscall cockpit::avMovingMap::avMovingMap(avMovingMap *this)

{
                    /* 0x263810  355  ??0avMovingMap@cockpit@@QEAA@XZ */
  *(undefined ***)this = vftable;
  Graphics::Camera::Camera((Camera *)(this + 8),0);
  *(undefined8 *)(this + 0x318) = 0xbff0000000000000;
  *(undefined8 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x328) = 0;
  *(undefined4 *)(this + 8) = 1;
  this[0x310] = (avMovingMap)0x1;
  return this;
}

