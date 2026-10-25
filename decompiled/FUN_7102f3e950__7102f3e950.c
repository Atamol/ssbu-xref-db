// addr:      7102f3e950
// offset:    0x2f3e950
// name:      FUN_7102f3e950
// mangled:   
// signature: undefined __cdecl FUN_7102f3e950(long param_1, byte * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102f3e950(long param_1,byte *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 extraout_x1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  
  if ((param_2 != (byte *)0x0) && (uVar6 = (uint)*param_2, *param_2 != 0)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x310);
    plVar2 = *(long **)(lVar3 + 0xd0);
    plVar4 = *(long **)(lVar3 + 0xd8);
    if (plVar2 != plVar4) {
      uVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar8 = param_2;
      do {
        pbVar8 = pbVar8 + 1;
        uVar1 = uVar6 + 0x20;
        if (0x19 < uVar6 - 0x41) {
          uVar1 = uVar6;
        }
        uVar7 = (&DAT_7104754084)[(uVar1 ^ uVar7) & 0xff] ^ uVar7 >> 8;
        uVar6 = (uint)*pbVar8;
        uVar5 = uVar5 + 0x100000000;
      } while (uVar6 != 0);
      do {
        if ((*(uint *)(plVar2 + 1) < 2) &&
           (lVar3 = *plVar2, (uVar5 & 0xff00000000 | (ulong)~uVar7) == *(ulong *)(lVar3 + 0x68)))
        goto LAB_7102f3ea04;
        plVar2 = plVar2 + 2;
      } while (plVar4 != plVar2);
    }
  }
  lVar3 = 0;
LAB_7102f3ea04:
  *(long *)(param_1 + 8) = lVar3;
  FUN_7102610070(lVar3,(byte *)"s10_island_collapse");
  FUN_710260fdd0(0,*(long *)(param_1 + 8),1);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != 0) {
    if ((*(char *)(lVar3 + 0xe0) != '\0') && (*(long *)(lVar3 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar3 + 200) + 0x32) = 0;
    }
    if (*(long *)(lVar3 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar3 + 0xd8) + 0x22) = 0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x110) = 1;
      FUN_71025e9d50((long *)(lVar3 + 0x108),extraout_x1,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      lVar3 = *(long *)(param_1 + 8);
      if (lVar3 != 0) {
        if ((*(char *)(lVar3 + 0xe0) != '\0') && (*(long *)(lVar3 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar3 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar3 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar3 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar3 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar3 + 0xb0) + 0x10) = 0;
        }
      }
    }
  }
  plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x50) + 0x300) + 0x18);
  plVar2 = (long *)*plVar4;
  plVar4 = (long *)plVar4[1];
  if (plVar2 != plVar4) {
    do {
      uVar6 = (uint)*param_2;
      if (uVar6 == 0) {
        uVar9 = 0;
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        uVar7 = 0xffffffff;
        pbVar8 = param_2;
        do {
          pbVar8 = pbVar8 + 1;
          uVar1 = uVar6 + 0x20;
          if (0x19 < uVar6 - 0x41) {
            uVar1 = uVar6;
          }
          uVar7 = (&DAT_7104754084)[(uVar1 ^ uVar7) & 0xff] ^ uVar7 >> 8;
          uVar6 = (uint)*pbVar8;
          uVar5 = uVar5 + 0x100000000;
        } while (uVar6 != 0);
        uVar9 = (ulong)~uVar7;
        uVar5 = uVar5 & 0xff00000000;
      }
      if ((*(ulong *)(*plVar2 + 0xa0) & 0xffffffffff) == (uVar5 | uVar9)) {
        plVar2 = *(long **)(*plVar2 + 0x110);
        if (plVar2 == (long *)0x0) {
          return;
        }
        if (*plVar2 == plVar2[1]) {
          return;
        }
        *(long **)(param_1 + 0x10) = plVar2;
        return;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar4);
  }
  return;
}

