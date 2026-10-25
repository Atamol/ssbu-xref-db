// addr:      71001d6020
// offset:    0x1d6020
// name:      FUN_71001d6020
// mangled:   
// signature: undefined __cdecl FUN_71001d6020(undefined8 * param_1)


void FUN_71001d6020(undefined8 *param_1)

{
  uint uVar1;
  
  *param_1 = &PTR_FUN_7104f56208;
  (**(code **)(DAT_71052af1e0 + 0x10))(&DAT_71052af1e0);
  if (*(char *)(param_1 + 3) != '\0') {
    uVar1 = *(uint *)((long)param_1 + 0xc);
    if (*(uint *)(param_1 + 1) == 0) {
      if (uVar1 < 0x11) {
        (&DAT_71052af120)[uVar1] = 0;
        goto LAB_71001d60c0;
      }
    }
    else if (uVar1 < 0x11) {
      *(undefined8 *)
       (*(long *)(*DAT_71052af1b0 + (ulong)*(uint *)(param_1 + 1) * 8) + (ulong)uVar1 * 8 + 8) = 0;
      goto LAB_71001d60c0;
    }
    FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp"
                   ,0x55,0xe0000003,0);
  }
LAB_71001d60c0:
                    /* WARNING: Could not recover jumptable at 0x0071001d60d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_71052af1e0 + 0x20))(&DAT_71052af1e0);
  return;
}

