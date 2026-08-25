/*
 * CockpitBase.dll class reconstruction
 * Function: ed_cockpit_set_action_digital
 * Address : 7ffada62c840
 * Role    : method
 */


void ed_cockpit_set_action_digital(undefined4 param_1)

{
                    /* 0x21c840  7119  ed_cockpit_set_action_digital */
                    /* WARNING: Could not recover jumptable at 0x7ffada62c850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(cockpit::ccCockpitContext::contexts_ptr + 0x10) + 0xc0))
            (*(longlong **)(cockpit::ccCockpitContext::contexts_ptr + 0x10),param_1);
  return;
}

