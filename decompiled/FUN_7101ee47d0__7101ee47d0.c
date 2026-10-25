// addr:      7101ee47d0
// offset:    0x1ee47d0
// name:      FUN_7101ee47d0
// mangled:   
// signature: undefined __cdecl FUN_7101ee47d0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ee47d0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  char cVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined **local_128;
  ulong local_120;
  undefined **local_118;
  ulong local_110;
  uint local_108 [2];
  undefined1 local_100 [64];
  uint auStack_c0 [2];
  undefined1 auStack_b8 [72];
  
  lVar13 = 0;
  do {
    lVar1 = param_1 + lVar13;
    lVar9 = *(long *)(lVar1 + 0x138);
    lVar12 = **(long **)(lVar9 + 0x18);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(lVar1 + 0x160);
      *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 0x10;
      lVar9 = *(long *)(lVar1 + 0x138);
    }
    if ((*(long *)(lVar9 + 8) != 0) && (lVar9 = *(long *)(*(long *)(lVar9 + 8) + 0x18), lVar9 != 0))
    {
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe | *(int *)(lVar1 + 0x150) == 3;
    }
    FUN_7103776390(&local_118,(undefined8 *)(lVar1 + 0x140),param_3,param_4,param_5,param_6,param_7,
                   param_8);
    uVar2 = *(uint *)(lVar1 + 0x120);
    if (((uVar2 == 0xffffffff) ||
        (((puVar10 = &DAT_7105339830, uVar2 < 10 && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
         (puVar10 = (undefined8 *)(&DAT_7105339860)[(int)uVar2],
         (undefined8 *)(&DAT_7105339860)[(int)uVar2] == (undefined8 *)0x0)))) ||
       (uVar4 = *(int *)(puVar10[2] + 0x9c) - 1, 6 < uVar4)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar4 * 4);
    }
    FUN_710339d9f0(auStack_c0,uVar8);
    FUN_7103778300(0x3f800000,local_110,(long)auStack_b8);
    puVar10 = &DAT_7105339830;
    if ((((uVar2 < 10) && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
        (puVar10 = (undefined8 *)(&DAT_7105339860)[(int)uVar2],
        (undefined8 *)(&DAT_7105339860)[(int)uVar2] == (undefined8 *)0x0)) ||
       ((char)((long *)puVar10[2])[0x17] == '\0')) {
LAB_7101ee49d8:
      local_100[0] = 0;
      local_108[0] = 0x811c9dc5;
      local_108[1] = 0;
    }
    else {
      cVar6 = (**(code **)(*(long *)puVar10[2] + 0x20))();
      bVar3 = cVar6 - 1;
      if ((0xe < bVar3) || ((0x2e8aUL >> ((long)(char)bVar3 & 0x3fU) & 1) != 0))
      goto LAB_7101ee49d8;
      FUN_71003a4ca0(local_108,"indicator_%d",
                     (ulong)(*(int *)(&DAT_7104753e00 + (long)(char)bVar3 * 4) + 1),param_3,param_4,
                     param_5,param_6,param_7,param_8);
      if (local_108[1] != 0) {
        FUN_7103778300(0x3f800000,local_110,(long)local_100);
      }
    }
    uVar5 = local_110;
    local_118 = &PTR_FUN_710523d988;
    local_110 = 0;
    if (uVar5 != 0) {
      uVar7 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar5);
    }
    FUN_7103776390(&local_128,(undefined8 *)(lVar1 + 0x140),param_3,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_710337d0d0((long)&local_128,*(uint *)(lVar1 + 0x120),param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    uVar5 = local_120;
    local_128 = &PTR_FUN_710523d988;
    local_120 = 0;
    if (uVar5 != 0) {
      uVar7 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar5);
    }
    plVar11 = *(long **)(lVar1 + 0x178);
    if (((plVar11 == (long *)0x0) || ((char)plVar11[0x19] == '\0')) ||
       (*(int *)(*plVar11 + 0x68) != -1)) {
      FUN_7103778300(0x3f800000,*(long *)(lVar1 + 0x138),0x7104413119);
    }
    else {
      param_3 = (long ****)(ulong)(*(int *)(*plVar11 + 0x58) + 1);
      FUN_7103778430(lVar1 + 0x130,"player_color_%dp",param_3,param_4,param_5,param_6,param_7,
                     param_8);
    }
    lVar13 = lVar13 + 0x60;
    if (lVar13 == 0x360) {
      return;
    }
  } while( true );
}

