/*
 * CockpitBase.dll class reconstruction
 * Function: avKneeboard
 * Address : 7ffada6655c0
 * Role    : method
 */


/* public: __cdecl cockpit::avKneeboard::avKneeboard(void) __ptr64 */

avKneeboard * __thiscall cockpit::avKneeboard::avKneeboard(avKneeboard *this)

{
                    /* 0x2555c0  325  ??0avKneeboard@cockpit@@QEAA@XZ */
  avDevice::avDevice((avDevice *)this);
  avMovingMap::avMovingMap((avMovingMap *)(this + 0x98));
  *(undefined ***)this = &_vftable__for__cockpit__ccContextRelatedObject__;
  *(undefined ***)(this + 0x20) = &_vftable__for__cockpit__avLuaRegistrable__;
  *(undefined ***)(this + 0x98) = &_vftable_;
  this[0x3f0] = (avKneeboard)0x0;
  this[0x408] = (avKneeboard)0x0;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x430) = 0;
  *(undefined8 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x460) = 0;
  *(undefined8 *)(this + 0x468) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x488) = 0;
  *(undefined8 *)(this + 0x490) = 0;
  *(undefined4 *)(this + 0x498) = 0x7fffffff;
  this[0x49c] = (avKneeboard)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4b0) = 0;
  *(undefined8 *)(this + 0x4b8) = 0;
  *(undefined8 *)(this + 0x4c0) = 0;
  *(undefined8 *)(this + 0x4c8) = 0;
  *(undefined8 *)(this + 0x4d0) = 0;
  *(undefined8 *)(this + 0x4d8) = 0;
  *(undefined8 *)(this + 0x4e0) = 0;
  *(undefined8 *)(this + 0x4e8) = 0;
  *(undefined8 *)(this + 0x4f0) = 0xf;
  this[0x4d8] = (avKneeboard)0x0;
  this[0x3f8] = (avKneeboard)0x1;
  *(undefined8 *)(this + 0x400) = 0x3ff0000000000000;
  *(undefined4 *)(this + 0x40c) = 0;
  return this;
}

