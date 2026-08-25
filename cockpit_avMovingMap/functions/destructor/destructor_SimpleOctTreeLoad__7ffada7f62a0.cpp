/*
 * CockpitBase.dll class reconstruction
 * Function: ~SimpleOctTreeLoad
 * Address : 7ffada7f62a0
 * Role    : destructor
 */


/* public: virtual __cdecl cockpit::SimpleOctTreeLoad::~SimpleOctTreeLoad(void) __ptr64 */

void __thiscall cockpit::SimpleOctTreeLoad::~SimpleOctTreeLoad(SimpleOctTreeLoad *this)

{
                    /* 0x3e62a0  701  ??1SimpleOctTreeLoad@cockpit@@UEAA@XZ */
  *(undefined ***)this = vftable;
  remove_from_node(this);
  *(undefined ***)this = ed::Shared::vftable;
  return;
}

