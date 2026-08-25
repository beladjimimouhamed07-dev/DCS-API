/*
 * CockpitBase.dll class reconstruction
 * Function: ~SimpleOctTree
 * Address : 7ffada7f6230
 * Role    : destructor
 */


/* public: __cdecl cockpit::SimpleOctTree::~SimpleOctTree(void) __ptr64 */

void __thiscall cockpit::SimpleOctTree::~SimpleOctTree(SimpleOctTree *this)

{
  SimpleOctTreeNode *this_00;
  
                    /* 0x3e6230  700  ??1SimpleOctTree@cockpit@@QEAA@XZ */
  this_00 = *(SimpleOctTreeNode **)(this + 0x18);
  if (this_00 != (SimpleOctTreeNode *)0x0) {
    SimpleOctTreeNode::~SimpleOctTreeNode(this_00);
    free(this_00);
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x70) = 0;
  }
  if (*(void **)(this + 0x38) != (void *)0x0) {
    free(*(void **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
  }
  FUN_7ffada5efbc0((longlong *)(this + 0x28));
  return;
}

