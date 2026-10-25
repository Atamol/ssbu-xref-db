// addr:      71019e3b90
// offset:    0x19e3b90
// name:      FUN_71019e3b90
// mangled:   
// signature: undefined __cdecl FUN_71019e3b90(long param_1, ulong param_2, undefined1 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019e3b90(long param_1,ulong param_2,undefined1 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  long *plVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar19 = *(long *)(param_1 + 0x80);
  if (*(undefined8 **)(lVar19 + 0x18) == *(undefined8 **)(lVar19 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  pcVar7 = &DAT_00001000;
  FUN_7103775dc0((long *)**(undefined8 **)**(undefined8 **)(lVar19 + 0x10),0,
                 (long ****)&DAT_00001000,param_4,param_5,param_6,param_7,param_8);
  *(ulong *)(lVar19 + 0xf0) = param_2;
  *(undefined1 *)(lVar19 + 0xf8) = param_3;
  lVar18 = *(long *)(DAT_710532f730 + 8);
  lVar16 = *(long *)(lVar18 + 0x168);
  puVar5 = FUN_71032631a0(lVar16,0x13fdfdfb2b);
  if (((param_2 & 0xff00000000000000) == 0xc100000000000000) && ((param_2 & 0xffffffffff) != 0)) {
    if ((((ulong)puVar5 & 0xff00000000000000) == 0xc100000000000000 &&
        ((ulong)puVar5 & 0xffffffffff) != 0) && (((ulong)puVar5 ^ param_2) & 0xffffffffff) == 0) {
LAB_71019e3cc4:
      uVar9 = 1;
      goto LAB_71019e3d54;
    }
    puVar5 = FUN_71032631a0(lVar16,0x15d7061f77);
    if (((((ulong)puVar5 & 0xff00000000000000) == 0xc100000000000000) &&
        (((ulong)puVar5 & 0xffffffffff) != 0)) && ((((ulong)puVar5 ^ param_2) & 0xffffffffff) == 0))
    {
LAB_71019e3cf4:
      uVar9 = 2;
      goto LAB_71019e3d54;
    }
    puVar5 = FUN_71032631a0(lVar16,0x1257ab1d87);
    uVar12 = (ulong)puVar5 & 0xff00000000000000;
    uVar8 = (ulong)puVar5 & 0xffffffffff;
    if ((uVar12 != 0xc100000000000000) || (uVar8 == 0)) goto LAB_71019e3d18;
    bVar3 = (((ulong)puVar5 ^ param_2) & 0xffffffffff) == 0;
  }
  else {
    if (((ulong)puVar5 & 0xff00000000000000) != 0xc100000000000000 ||
        ((ulong)puVar5 & 0xffffffffff) == 0) goto LAB_71019e3cc4;
    puVar5 = FUN_71032631a0(lVar16,0x15d7061f77);
    if (((ulong)puVar5 & 0xff00000000000000) != 0xc100000000000000 ||
        ((ulong)puVar5 & 0xffffffffff) == 0) goto LAB_71019e3cf4;
    puVar5 = FUN_71032631a0(lVar16,0x1257ab1d87);
    uVar8 = (ulong)puVar5 & 0xffffffffff;
    uVar12 = (ulong)puVar5 & 0xff00000000000000;
LAB_71019e3d18:
    bVar3 = (uVar8 != 0 && uVar12 == 0xc100000000000000) ==
            ((param_2 & 0xff00000000000000) == 0xc100000000000000 && (param_2 & 0xffffffffff) != 0);
  }
  uVar9 = 3;
  if (!bVar3) {
    uVar9 = 0;
  }
LAB_71019e3d54:
  plVar15 = *(long **)(lVar19 + 0x40);
  lVar17 = *(long *)*plVar15;
  *(undefined4 *)((long *)*plVar15 + 2) = 0;
  plVar10 = *(long **)(lVar17 + 0x10);
  *plVar10 = lVar17;
  *(undefined4 *)(plVar10 + 1) = 0x48;
  lVar16 = *(long *)(lVar17 + 0x10);
  *(long *)(lVar17 + 0x10) = lVar16 + 0x10;
  lVar13 = *(long *)(*(long *)(lVar17 + 0x18) + 200);
  *(long *)(lVar17 + 0x10) = lVar16;
  if (lVar13 == lVar17) {
    lVar16 = *(long *)(*(long *)(lVar17 + 0x18) + 0x40);
    if (*(uint *)(lVar16 + 0xc) < 2) {
      plVar10 = (long *)(*(long *)(lVar16 + 0x18) +
                        ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar16 + 0xb) & 0x3f)) & 2)
                        * 0x20);
      do {
        if (((int)plVar10[3] == 0x13) && (plVar6 = plVar10, plVar10[2] == 2)) break;
        piVar1 = (int *)((long)plVar10 + 0x1c);
        plVar10 = plVar10 + (long)*piVar1 * 4;
        plVar6 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar6 = (long *)(*(long *)(lVar16 + 0x10) + 0x10);
    }
    pcVar7 = "set_mii_type";
    FUN_71038f4d40(lVar17,plVar6,"set_mii_type");
  }
  else {
    FUN_71038f4b20(lVar17,"set_mii_type");
    FUN_71038f4fc0(lVar17,-2);
  }
  puVar11 = (undefined8 *)(*(long *)(lVar17 + 0x10) + -0x10);
  if ((puVar11 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar17 + 0x10) + -8) & 0xf) != 6)) {
    *(undefined8 **)(lVar17 + 0x10) = puVar11;
  }
  else {
    lVar16 = *(long *)*plVar15;
    puVar11 = *(undefined8 **)(lVar16 + 0x10);
    *(undefined4 *)(puVar11 + 1) = 0x13;
    *puVar11 = uVar9;
    *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 0x10;
    *(int *)(*plVar15 + 0x10) = *(int *)(*plVar15 + 0x10) + 1;
    FUN_7103377130(plVar15,0,(long ****)pcVar7,param_4,param_5,param_6,param_7,param_8);
  }
  bVar2 = *(byte *)(lVar19 + 0xf8);
  uVar4 = FUN_710328cb60(*(long *)(lVar18 + 600),(uint)bVar2);
  plVar15 = *(long **)(lVar19 + 0x40);
  lVar13 = *(long *)*plVar15;
  *(undefined4 *)((long *)*plVar15 + 2) = 0;
  plVar10 = *(long **)(lVar13 + 0x10);
  *plVar10 = lVar13;
  *(undefined4 *)(plVar10 + 1) = 0x48;
  lVar16 = *(long *)(lVar13 + 0x10);
  *(long *)(lVar13 + 0x10) = lVar16 + 0x10;
  lVar18 = *(long *)(*(long *)(lVar13 + 0x18) + 200);
  *(long *)(lVar13 + 0x10) = lVar16;
  if (lVar18 == lVar13) {
    lVar16 = *(long *)(*(long *)(lVar13 + 0x18) + 0x40);
    if (*(uint *)(lVar16 + 0xc) < 2) {
      plVar10 = (long *)(*(long *)(lVar16 + 0x18) +
                        ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar16 + 0xb) & 0x3f)) & 2)
                        * 0x20);
      do {
        if (((int)plVar10[3] == 0x13) && (plVar6 = plVar10, plVar10[2] == 2)) break;
        piVar1 = (int *)((long)plVar10 + 0x1c);
        plVar10 = plVar10 + (long)*piVar1 * 4;
        plVar6 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar6 = (long *)(*(long *)(lVar16 + 0x10) + 0x10);
    }
    pcVar7 = "set_voice_id";
    FUN_71038f4d40(lVar13,plVar6,"set_voice_id");
  }
  else {
    FUN_71038f4b20(lVar13,"set_voice_id");
    FUN_71038f4fc0(lVar13,-2);
  }
  puVar11 = (undefined8 *)(*(long *)(lVar13 + 0x10) + -0x10);
  if ((puVar11 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar13 + 0x10) + -8) & 0xf) != 6)) {
    *(undefined8 **)(lVar13 + 0x10) = puVar11;
  }
  else {
    lVar16 = *(long *)*plVar15;
    plVar10 = *(long **)(lVar16 + 0x10);
    *plVar10 = (long)(int)uVar4;
    *(undefined4 *)(plVar10 + 1) = 0x13;
    *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 0x10;
    *(int *)(*plVar15 + 0x10) = *(int *)(*plVar15 + 0x10) + 1;
    lVar16 = *(long *)*plVar15;
    puVar14 = *(ulong **)(lVar16 + 0x10);
    *puVar14 = (ulong)((uint)bVar2 + (bVar2 / 3) * -3);
    *(undefined4 *)(puVar14 + 1) = 0x13;
    *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 0x10;
    *(int *)(*plVar15 + 0x10) = *(int *)(*plVar15 + 0x10) + 1;
    FUN_7103377130(plVar15,0,(long ****)pcVar7,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_7103376980((undefined8 *)**(undefined8 **)(lVar19 + 0x40));
  *(undefined4 *)(lVar19 + 0xdc) = 0;
  *(undefined8 *)(lVar19 + 0xe0) = 0xffffffff;
  *(undefined4 *)(lVar19 + 0xe8) = 0xffffffff;
  *(undefined8 *)(lVar19 + 0x50) = 0;
  *(undefined8 *)(lVar19 + 0x58) = 0;
  *(undefined8 *)(lVar19 + 0xd4) = 0;
  *(undefined8 *)(lVar19 + 0xcc) = 0;
  *(undefined8 *)(lVar19 + 0xc4) = 0;
  *(undefined8 *)(lVar19 + 0xbc) = 0;
  *(undefined8 *)(lVar19 + 0xb4) = 0;
  *(undefined8 *)(lVar19 + 0xac) = 0;
  *(undefined8 *)(lVar19 + 0xa4) = 0;
  *(undefined8 *)(lVar19 + 0x9c) = 0;
  *(undefined8 *)(lVar19 + 0x94) = 0;
  *(undefined1 *)(lVar19 + 0xec) = 0;
  *(undefined4 *)(lVar19 + 0x90) = 1;
  FUN_71019e2fc0((long *)(lVar19 + 0x48));
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}

