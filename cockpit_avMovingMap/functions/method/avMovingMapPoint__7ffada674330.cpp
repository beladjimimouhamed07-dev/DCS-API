/*
 * CockpitBase.dll class reconstruction
 * Function: avMovingMapPoint
 * Address : 7ffada674330
 * Role    : method
 */


/* public: __cdecl cockpit::avMovingMapPoint::avMovingMapPoint(void) __ptr64 */

avMovingMapPoint * __thiscall cockpit::avMovingMapPoint::avMovingMapPoint(avMovingMapPoint *this)

{
                    /* 0x264330  357  ??0avMovingMapPoint@cockpit@@QEAA@XZ */
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = SimpleOctTreeLoad::vftable;
  *(undefined4 *)(this + 0x10) = 0x7f7fffff;
  *(undefined4 *)(this + 0x14) = 0x7f7fffff;
  *(undefined4 *)(this + 0x18) = 0x7f7fffff;
  *(undefined4 *)(this + 0x1c) = 0xff7fffff;
  *(undefined4 *)(this + 0x20) = 0xff7fffff;
  *(undefined4 *)(this + 0x24) = 0xff7fffff;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x30) = 0x100;
  avDrawCachedObj::avDrawCachedObj((avDrawCachedObj *)(this + 0x38));
  Common::FakeUnknown<Common::Identifiable>::FakeUnknown<Common::Identifiable>
            ((FakeUnknown<Common::Identifiable> *)(this + 0x58));
  *(undefined ***)this = vftable_for_cockpit__SimpleOctTreeLoad_;
  *(undefined ***)(this + 0x38) = vftable_for_cockpit__avDrawCachedObj_;
  *(undefined ***)(this + 0x58) = vftable_for_Common__FakeUnknown<Common::Identifiable>_;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0xf;
  this[0x70] = (avMovingMapPoint)0x0;
  *(undefined8 *)(this + 0x90) = 0;
  this[0x98] = (avMovingMapPoint)0x0;
  *(undefined8 *)(this + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x3ff0000000000000;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0x3ff0000000000000;
  *(undefined4 *)(this + 0x120) = 0xc2480000;
  *(undefined4 *)(this + 0x124) = 0xc2480000;
  *(undefined4 *)(this + 0x128) = 0xc2480000;
  *(undefined4 *)(this + 300) = 0x42480000;
  *(undefined4 *)(this + 0x130) = 0x42480000;
  *(undefined4 *)(this + 0x134) = 0x42480000;
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  return this;
}

