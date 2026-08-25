/*
 * CockpitBase.dll class reconstruction
 * Function: getActionData
 * Address : 7ffada5f97a0
 * Role    : method
 */


/* public: class cockpit::clickableElementActionData * __ptr64 __cdecl
   cockpit::clickableElementData::getActionData(unsigned char) __ptr64 */

clickableElementActionData * __thiscall
cockpit::clickableElementData::getActionData(clickableElementData *this,uchar param_1)

{
                    /* 0x1e97a0  3129
                       ?getActionData@clickableElementData@cockpit@@QEAAPEAVclickableElementActionData@2@E@Z
                       0x1e97a0  3130
                       ?getActionData@clickableElementData@cockpit@@QEBAPEBVclickableElementActionData@2@E@Z
                        */
  if ((ulonglong)param_1 < (ulonglong)(*(longlong *)(this + 0xf0) - *(longlong *)(this + 0xe8) >> 3)
     ) {
    return *(clickableElementActionData **)(*(longlong *)(this + 0xe8) + (ulonglong)param_1 * 8);
  }
  return (clickableElementActionData *)0x0;
}

