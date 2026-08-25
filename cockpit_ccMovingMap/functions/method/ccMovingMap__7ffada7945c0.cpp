/*
 * CockpitBase.dll class reconstruction
 * Function: ccMovingMap
 * Address : 7ffada7945c0
 * Role    : method
 */


/* public: __cdecl cockpit::ccMovingMap::ccMovingMap(void) __ptr64 */

ccMovingMap * __thiscall cockpit::ccMovingMap::ccMovingMap(ccMovingMap *this)

{
                    /* 0x3845c0  531  ??0ccMovingMap@cockpit@@QEAA@XZ */
  ccIndicatorPage::ccIndicatorPage((ccIndicatorPage *)this);
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined2 *)(this + 0x98) = 0x101;
  this[0x9a] = (ccMovingMap)0x1;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  return this;
}

