/*
 * CockpitBase.dll class reconstruction
 * Function: ~avMovingMapPoint
 * Address : 7ffada6744d0
 * Role    : destructor
 */


/* public: virtual __cdecl cockpit::avMovingMapPoint::~avMovingMapPoint(void) __ptr64 */

void __thiscall cockpit::avMovingMapPoint::~avMovingMapPoint(avMovingMapPoint *this)

{
                    /* 0x2644d0  812  ??1avMovingMapPoint@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable_for_cockpit__SimpleOctTreeLoad_;
  *(undefined ***)(this + 0x38) = vftable_for_cockpit__avDrawCachedObj_;
  *(undefined ***)(this + 0x58) = vftable_for_Common__FakeUnknown<Common::Identifiable>_;
  if (0xf < *(ulonglong *)(this + 0x88)) {
    free(*(void **)(this + 0x70));
  }
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0xf;
  this[0x70] = (avMovingMapPoint)0x0;
  Common::FakeUnknown<Common::Identifiable>::~FakeUnknown<Common::Identifiable>
            ((FakeUnknown<Common::Identifiable> *)(this + 0x58));
  avDrawCachedObj::~avDrawCachedObj((avDrawCachedObj *)(this + 0x38));
  SimpleOctTreeLoad::~SimpleOctTreeLoad((SimpleOctTreeLoad *)this);
  return;
}

