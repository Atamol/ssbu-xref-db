// addr:      71001f8fc0
// offset:    0x1f8fc0
// name:      FUN_71001f8fc0
// mangled:   
// signature: undefined __cdecl FUN_71001f8fc0(undefined8 * param_1)


void FUN_71001f8fc0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  FUN_71001f0ba0(param_1);
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *param_1 = &PTR_FUN_7104f57ba8;
  puVar2 = FUN_71001b1820(0x20);
  puVar5 = (undefined8 *)param_1[0x59];
  puVar6 = (undefined8 *)param_1[0x5a];
  if (puVar6 == puVar5) {
    param_1[0x59] = puVar2;
    param_1[0x5a] = puVar2;
    param_1[0x5b] = puVar2 + 4;
  }
  else {
    uVar9 = (long)puVar6 + (-0x10 - (long)puVar5);
    uVar4 = ((uint)(uVar9 >> 4) & 0xfffffff) + 1;
    puVar10 = puVar2;
    if ((uVar4 & 7) != 0) {
      lVar8 = -((ulong)uVar4 & 7);
      puVar7 = puVar6;
      puVar11 = puVar2;
      do {
        puVar6 = puVar7 + -2;
        uVar12 = puVar7[-1];
        puVar10 = puVar11 + -2;
        *puVar10 = *puVar6;
        lVar8 = lVar8 + 1;
        puVar11[-1] = uVar12;
        puVar7 = puVar6;
        puVar11 = puVar10;
      } while (lVar8 != 0);
    }
    if (0x6f < uVar9) {
      puVar10 = puVar10 + -8;
      do {
        uVar12 = puVar6[-1];
        puVar10[6] = puVar6[-2];
        puVar10[7] = uVar12;
        uVar12 = puVar6[-3];
        puVar10[4] = puVar6[-4];
        puVar10[5] = uVar12;
        uVar12 = puVar6[-5];
        puVar10[2] = puVar6[-6];
        puVar10[3] = uVar12;
        uVar12 = puVar6[-7];
        *puVar10 = puVar6[-8];
        puVar10[1] = uVar12;
        uVar12 = puVar6[-9];
        puVar10[-2] = puVar6[-10];
        puVar10[-1] = uVar12;
        uVar12 = puVar6[-0xb];
        puVar10[-4] = puVar6[-0xc];
        puVar10[-3] = uVar12;
        uVar12 = puVar6[-0xd];
        puVar10[-6] = puVar6[-0xe];
        puVar10[-5] = uVar12;
        puVar7 = puVar6 + -0x10;
        uVar12 = puVar6[-0xf];
        puVar10[-8] = *puVar7;
        puVar10[-7] = uVar12;
        puVar10 = puVar10 + -0x10;
        puVar6 = puVar7;
      } while (puVar5 != puVar7);
    }
    puVar5 = (undefined8 *)param_1[0x59];
    param_1[0x59] = (long)puVar2 + (uVar9 & 0xfffffffffffffff0 ^ 0xfffffffffffffff0);
    param_1[0x5a] = puVar2;
    param_1[0x5b] = puVar2 + 4;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_71001b1870((long)puVar5);
  }
  FUN_71001bf280((undefined4 *)(param_1 + 0x5d));
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x5f] = &PTR_FUN_7104f582d0;
  param_1[0x60] = &PTR_FUN_7104f599b8;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x66] = &PTR_FUN_7104f59688;
  FUN_71001b38e0(param_1 + 0x6b,"Transport Job",1000);
  *(undefined2 *)(param_1 + 0x88) = 0;
  param_1[0x87] = &PTR_FUN_7104f581f8;
  puVar5 = FUN_71001af850(0x38);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5[1] = puVar5 + 2;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[3] = 0;
    puVar5[4] = puVar5 + 5;
  }
  param_1[0x89] = puVar5;
  puVar5 = FUN_71001af850(0xd0);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_7100214450(puVar5);
  }
  param_1[0x8a] = puVar5;
  FUN_71001f78d0(param_1 + 0x8b);
  param_1[0xa1] = 0;
  param_1[0xa3] = &PTR_FUN_710523be40;
  *(undefined4 *)(param_1 + 0xa4) = 1;
  *(undefined1 *)((long)param_1 + 0x524) = 0;
  param_1[0xa3] = &PTR_FUN_7104f56018;
  FUN_71001cf760((long)(param_1 + 0xa3),(ulong)*(uint *)(param_1 + 0x13),0);
  param_1[0xab] = &DAT_7104f590c8;
  FUN_71001d5a90();
  puVar5 = FUN_71001af850(0x30);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_7104f582d0;
    puVar5[1] = &PTR_FUN_7104f599b8;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
  }
  param_1[0x65] = puVar5;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  uVar4 = (uint)DAT_71052af1d8;
  if (DAT_71052af1d8 != 0) {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar3;
  }
  *(uint *)(param_1 + 0x86) = uVar4;
  param_1[0xa2] = 0;
  if (*(char *)((long)param_1 + 0x441) != '\0') {
    lVar8 = *(long *)(param_1[0x8a] + 0xc0);
    if (lVar8 != 0) {
      uVar1 = FUN_71001f54b0(lVar8 + 0xf0,(char)*(undefined4 *)(param_1[0x8a] + 8),1);
      *(byte *)((long)param_1 + 0x441) = ~(byte)uVar1 & 1;
    }
  }
  lVar8 = param_1[0x8a];
  *(undefined8 **)(lVar8 + 0xc0) = param_1;
  if (*(char *)(param_1 + 0x88) != '\0') {
    uVar1 = FUN_71001f5750((long)(param_1 + 0x1e),lVar8,'\x01',(char *)0x0);
    *(byte *)((long)param_1 + 0x441) = (byte)uVar1 & 1;
  }
  if (*(char *)((long)param_1 + 0x469) != '\0') {
    lVar8 = *(long *)(param_1[0x8c] + 0x10);
    if (lVar8 != 0) {
      uVar1 = FUN_71001f54b0(lVar8 + 0xf0,(char)*(undefined4 *)(param_1[0x8c] + 8),0xf);
      *(byte *)((long)param_1 + 0x469) = ~(byte)uVar1 & 1;
    }
    FUN_71001e0c80((long)(param_1 + 0x8b));
  }
  lVar8 = param_1[0x8c];
  *(undefined8 **)(lVar8 + 0x10) = param_1;
  if (*(char *)(param_1 + 0x8d) != '\0') {
    uVar1 = FUN_71001f5750((long)(param_1 + 0x1e),lVar8,'\x0f',(char *)0x0);
    *(byte *)((long)param_1 + 0x469) = (byte)uVar1 & 1;
  }
  memset(param_1 + 0xaa,0,8);
  FUN_71001bd330();
  return;
}

