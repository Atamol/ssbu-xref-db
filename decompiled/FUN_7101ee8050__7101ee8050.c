// addr:      7101ee8050
// offset:    0x1ee8050
// name:      FUN_7101ee8050
// mangled:   
// signature: undefined __cdecl FUN_7101ee8050(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ee8050(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined **local_50;
  long *local_48;
  undefined **local_40;
  ulong local_38;
  
  FUN_7103776390(&local_40,(undefined8 *)(*(long *)*param_1 + 8),param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (*(int *)((long)param_1 + 0x10c) == 0) {
    if (((param_1[0x37] & 0xff00000000000000) == 0x800000000000000) &&
       ((param_1[0x37] & 0xffffffffff) != 0)) {
      FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_parts_tips_%d",
                     (ulong)(*(int *)(param_1 + 0x39) == 0),param_4,param_5,param_6,param_7,param_8)
      ;
      plVar1 = local_48;
      lVar4 = *local_48;
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
      }
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_parts_tips_%d",
                     (ulong)(*(int *)(param_1 + 0x39) == 0),param_4,param_5,param_6,param_7,param_8)
      ;
      plVar1 = local_48;
      FUN_7103779650((long)local_48);
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_parts_tips_%d",
                     (ulong)*(uint *)(param_1 + 0x39),param_4,param_5,param_6,param_7,param_8);
      plVar1 = local_48;
      lVar4 = *local_48;
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      }
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      FUN_7101ee8990(param_1,param_1[0x37],(long ****)(ulong)*(uint *)(param_1 + 0x39),param_4,
                     param_5,param_6,param_7,param_8);
    }
    else {
      if (0x12 < *(uint *)((long)param_1 + 0x104)) {
LAB_7101ee8288:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x104) * 4 + 0xb8) = 0;
    }
  }
  else if (*(char *)((long)param_1 + 0x1cf) == '\0') {
    if ((*(long **)(param_1[0x25] + 8) == (long *)0x0) ||
       (uVar2 = (**(code **)(**(long **)(param_1[0x25] + 8) + 0x138))(), (uVar2 & 1) != 0)) {
      if (0x12 < *(uint *)((long)param_1 + 0x104)) goto LAB_7101ee8288;
      *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x104) * 4 + 0xb8) = 3;
    }
  }
  else {
    lVar4 = *(long *)(param_1[0x34] + 0x10);
    if (((((lVar4 == 0) || (*(char *)(lVar4 + 0x27c) == '\0')) || (*(char *)(lVar4 + 0x27d) != '\0')
         ) || ((*(char *)(lVar4 + 0x27e) == '\0' && (*(char *)(lVar4 + 0x280) == '\0')))) &&
       (((lVar4 = *(long *)(param_1[0x36] + 0x10), lVar4 == 0 ||
         ((*(char *)(lVar4 + 0x27c) == '\0' || (*(char *)(lVar4 + 0x27d) != '\0')))) ||
        ((*(char *)(lVar4 + 0x27e) == '\0' && (*(char *)(lVar4 + 0x280) == '\0')))))) {
      FUN_710377aee0(0x3f800000,(long)(param_1 + 0x24));
      *(undefined1 *)((long)param_1 + 0x1cf) = 0;
    }
  }
  uVar2 = local_38;
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

