// addr:      71019e40b0
// offset:    0x19e40b0
// name:      FUN_71019e40b0
// mangled:   
// signature: int __cdecl FUN_71019e40b0(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


int FUN_71019e40b0(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  plVar9 = *(long **)(param_1 + 0x40);
  plVar4 = (long *)*plVar9;
  lVar10 = *plVar4;
  *(undefined4 *)(plVar4 + 2) = 0;
  plVar4 = *(long **)(lVar10 + 0x10);
  *plVar4 = lVar10;
  *(undefined4 *)(plVar4 + 1) = 0x48;
  lVar6 = *(long *)(lVar10 + 0x10);
  *(long *)(lVar10 + 0x10) = lVar6 + 0x10;
  lVar7 = *(long *)(*(long *)(lVar10 + 0x18) + 200);
  *(long *)(lVar10 + 0x10) = lVar6;
  if (lVar7 == lVar10) {
    lVar6 = *(long *)(*(long *)(lVar10 + 0x18) + 0x40);
    if (*(uint *)(lVar6 + 0xc) < 2) {
      plVar4 = (long *)(*(long *)(lVar6 + 0x18) +
                       ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar6 + 0xb) & 0x3f)) & 2) *
                       0x20);
      do {
        if (((int)plVar4[3] == 0x13) && (plVar8 = plVar4, plVar4[2] == 2)) break;
        piVar1 = (int *)((long)plVar4 + 0x1c);
        plVar4 = plVar4 + (long)*piVar1 * 4;
        plVar8 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar8 = (long *)(*(long *)(lVar6 + 0x10) + 0x10);
    }
    param_3 = "get_voice_type";
    FUN_71038f4d40(lVar10,plVar8,"get_voice_type");
  }
  else {
    FUN_71038f4b20(lVar10,"get_voice_type");
    FUN_71038f4fc0(lVar10,-2);
  }
  puVar5 = (undefined8 *)(*(long *)(lVar10 + 0x10) + -0x10);
  if ((puVar5 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar10 + 0x10) + -8) & 0xf) != 6)) {
    iVar2 = 0;
    *(undefined8 **)(lVar10 + 0x10) = puVar5;
  }
  else {
    iVar2 = FUN_7103377130(plVar9,1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  }
  plVar9 = *(long **)(param_1 + 0x40);
  plVar4 = (long *)*plVar9;
  lVar10 = *plVar4;
  *(undefined4 *)(plVar4 + 2) = 0;
  plVar4 = *(long **)(lVar10 + 0x10);
  *plVar4 = lVar10;
  *(undefined4 *)(plVar4 + 1) = 0x48;
  lVar6 = *(long *)(lVar10 + 0x10);
  *(long *)(lVar10 + 0x10) = lVar6 + 0x10;
  lVar7 = *(long *)(*(long *)(lVar10 + 0x18) + 200);
  *(long *)(lVar10 + 0x10) = lVar6;
  if (lVar7 == lVar10) {
    lVar6 = *(long *)(*(long *)(lVar10 + 0x18) + 0x40);
    if (*(uint *)(lVar6 + 0xc) < 2) {
      plVar4 = (long *)(*(long *)(lVar6 + 0x18) +
                       ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar6 + 0xb) & 0x3f)) & 2) *
                       0x20);
      do {
        if (((int)plVar4[3] == 0x13) && (plVar8 = plVar4, plVar4[2] == 2)) break;
        piVar1 = (int *)((long)plVar4 + 0x1c);
        plVar4 = plVar4 + (long)*piVar1 * 4;
        plVar8 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar8 = (long *)(*(long *)(lVar6 + 0x10) + 0x10);
    }
    param_3 = "get_voice_pitch";
    FUN_71038f4d40(lVar10,plVar8,"get_voice_pitch");
  }
  else {
    FUN_71038f4b20(lVar10,"get_voice_pitch");
    FUN_71038f4fc0(lVar10,-2);
  }
  puVar5 = (undefined8 *)(*(long *)(lVar10 + 0x10) + -0x10);
  if ((puVar5 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar10 + 0x10) + -8) & 0xf) != 6)) {
    iVar3 = 0;
    *(undefined8 **)(lVar10 + 0x10) = puVar5;
  }
  else {
    iVar3 = FUN_7103377130(plVar9,1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  }
  plVar9 = (long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 600) + 0x18);
  plVar8 = (long *)*plVar9;
  plVar4 = plVar9;
  if (plVar8 != (long *)0x0) {
    do {
      if (iVar2 <= *(int *)((long)plVar8 + 0x1c)) {
        plVar4 = plVar8;
      }
      plVar8 = (long *)plVar8[*(int *)((long)plVar8 + 0x1c) < iVar2];
    } while (plVar8 != (long *)0x0);
    if ((plVar4 != plVar9) && (*(int *)((long)plVar4 + 0x1c) <= iVar2)) {
      iVar2 = (int)plVar4[4];
      if (iVar3 == 2) {
        return iVar2 + 1;
      }
      if (iVar3 != 0) {
        return iVar2;
      }
      return iVar2 + -1;
    }
  }
  return 0x25;
}

