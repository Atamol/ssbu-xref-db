// addr:      7103907760
// offset:    0x3907760
// name:      FUN_7103907760
// mangled:   
// signature: undefined8 __cdecl FUN_7103907760(long param_1, char * param_2, char * param_3)


undefined8 FUN_7103907760(long param_1,char *param_2,char *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *local_40;
  undefined4 local_38;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  local_40 = &DAT_7104862858;
  local_38 = 2;
  puVar3 = FUN_710391dde0(*(long *)(*(long *)(param_1 + 0x18) + 0x40),(float *)&local_40);
  uVar4 = puVar3[1];
  *puVar2 = *puVar3;
  puVar2[1] = uVar4;
  plVar5 = *(long **)(param_1 + 0x10);
  *(long **)(param_1 + 0x10) = plVar5 + 2;
  FUN_71038f4d40(param_1,plVar5,param_2);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar6 + -8) & 0xf;
  if (uVar1 == 2) {
    lVar7 = *(long *)(lVar6 + -0x10);
    *(long *)(param_1 + 0x10) = lVar6 + -0x20;
    if (lVar7 == 0) goto LAB_7103907830;
  }
  else {
    if (uVar1 != 7) {
      *(long *)(param_1 + 0x10) = lVar6 + -0x20;
LAB_7103907830:
      FUN_71038f4b20(param_1,"dynamic libraries not enabled; check your Lua installation");
      return 1;
    }
    *(long *)(param_1 + 0x10) = lVar6 + -0x20;
  }
  if (*param_3 == '*') {
    *(undefined4 *)(lVar6 + -0x20) = 1;
    *(undefined4 *)(lVar6 + -0x18) = 1;
    uVar4 = 0;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  }
  else {
    FUN_71038f4b20(param_1,"dynamic libraries not enabled; check your Lua installation");
    uVar4 = 2;
  }
  return uVar4;
}

