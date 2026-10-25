// addr:      71002473e0
// offset:    0x2473e0
// name:      FUN_71002473e0
// mangled:   
// signature: undefined __cdecl FUN_71002473e0(undefined8 * param_1)


void FUN_71002473e0(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_6c;
  undefined8 *local_68 [3];
  
  FUN_7100242a30(param_1);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0xc800000000;
  *param_1 = &DAT_7104f5c4d8;
  local_68[0] = (undefined8 *)CONCAT44(local_68[0]._4_4_,0x10001);
  FUN_71001b4200((undefined4 *)(param_1 + 0x43),(undefined4 *)local_68);
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined2 *)((long)param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4b] = param_1 + 0x49;
  param_1[0x4c] = 0x10;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x48] = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)(param_1 + 0x48),"",-1);
  *(undefined2 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = &PTR_FUN_710509cc08;
  param_1[0x51] = param_1 + 0x4f;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x52] = 0x10;
  FUN_71001b47e0((long)(param_1 + 0x4e),"",-1);
  param_1[0x54] = 0;
  param_1[0x53] = &PTR_FUN_7104f5c998;
  plVar6 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_7100247518:
    if ((*plVar6 != 0) && (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0xe8);
      goto LAB_710024754c;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_7100247518;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      goto LAB_7100247518;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_710024754c:
  FUN_71001f1390(lVar5,0);
  local_68[0] = param_1;
  FUN_710023a2a0((long)param_1,FUN_7100247660,local_68);
  puVar3 = FUN_71001af850(0x48);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710022b090(puVar3);
    *(undefined1 *)((long)puVar3 + 9) = 0;
    puVar3[2] = &PTR_FUN_710509cc08;
    *(undefined1 *)(puVar3 + 3) = 0;
    puVar3[5] = puVar3 + 3;
    puVar3[6] = 0x10;
    *puVar3 = &PTR_FUN_7104f5c928;
    FUN_71001b3cb0((long)(puVar3 + 2),"");
    *(undefined4 *)(puVar3 + 7) = 4;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined1 *)((long)puVar3 + 0x3c) = 2;
  }
  if ((long *)param_1[0x54] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x54] + 8))();
  }
  param_1[0x54] = puVar3;
  pcVar4 = (char *)FUN_710024a190();
  FUN_71001b3cb0(param_1[0x54] + 0x10,pcVar4);
  local_6c = 0x10001;
  FUN_71001b4200((undefined4 *)local_68,&local_6c);
  FUN_71001b4300((undefined4 *)(param_1 + 0x43),(undefined4 *)local_68);
  puVar3 = FUN_71001af850(0x10);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &DAT_7104f5c510;
    puVar3[1] = param_1;
  }
  param_1[0x41] = puVar3;
  return;
}

