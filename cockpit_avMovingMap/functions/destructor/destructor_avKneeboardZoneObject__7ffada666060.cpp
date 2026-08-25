/*
 * CockpitBase.dll class reconstruction
 * Function: ~avKneeboardZoneObject
 * Address : 7ffada666060
 * Role    : destructor
 */


/* public: virtual __cdecl cockpit::avKneeboardZoneObject::~avKneeboardZoneObject(void) __ptr64 */

void __thiscall cockpit::avKneeboardZoneObject::~avKneeboardZoneObject(avKneeboardZoneObject *this)

{
                    /* 0x256060  798  ??1avKneeboardZoneObject@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable_for_cockpit__SimpleOctTreeLoad_;
  *(undefined ***)(this + 0x38) = vftable_for_cockpit__avDrawCachedObj_;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    free(*(void **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
  }
  avDrawCachedObj::~avDrawCachedObj((avDrawCachedObj *)(this + 0x38));
  SimpleOctTreeLoad::~SimpleOctTreeLoad((SimpleOctTreeLoad *)this);
  return;
}

