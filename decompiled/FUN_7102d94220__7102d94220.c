// addr:      7102d94220
// offset:    0x2d94220
// name:      FUN_7102d94220
// mangled:   
// signature: undefined __cdecl FUN_7102d94220(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102d94220(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  long ***ppplVar8;
  ulong uVar9;
  long ***ppplVar10;
  long ***ppplVar11;
  ulong uVar12;
  long *plVar13;
  long ****pppplVar14;
  uint uVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  long *plVar20;
  long ****pppplVar22;
  long ***ppplVar23;
  ulong uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  long ***local_a0;
  long ***local_98;
  long ***local_90;
  long ***local_88;
  long ***local_80;
  long ***local_78;
  long ***local_70;
  undefined4 local_64;
  long *plVar21;
  
  pppplVar22 = &local_a0;
  pppplVar14 = &local_a0;
  ppplVar8 = (long ***)FUN_710392e290(0x10,4,param_3,param_4,param_5,param_6,param_7,param_8);
  if (ppplVar8 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (long ***)&DAT_00000004;
      param_3 = &local_88;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar9 & 1) != 0) &&
         (ppplVar8 = (long ***)
                     FUN_710392e290(0x10,4,param_3,param_4,param_5,param_6,param_7,param_8),
         ppplVar8 != (long ***)0x0)) goto LAB_7102d942a0;
    }
    ppplVar8 = (long ***)0x0;
  }
LAB_7102d942a0:
  local_80 = (long ***)((long)ppplVar8 + 4);
  *(undefined4 *)ppplVar8 = 0;
  local_88 = ppplVar8;
  local_78 = local_80;
  ppplVar10 = (long ***)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (ppplVar10 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_a0 = (long ***)&DAT_00000008;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      param_3 = pppplVar22;
      if (((uVar9 & 1) != 0) &&
         (ppplVar10 = (long ***)
                      FUN_710392e290(0x10,8,pppplVar22,param_4,param_5,param_6,param_7,param_8),
         param_3 = pppplVar22, ppplVar10 != (long ***)0x0)) goto LAB_7102d9430c;
    }
    ppplVar10 = (long ***)0x0;
  }
LAB_7102d9430c:
  *(undefined4 *)((long)ppplVar10 + 4) = 1;
  local_80 = ppplVar10 + 1;
  *(undefined4 *)ppplVar10 = *(undefined4 *)ppplVar8;
  local_88 = ppplVar10;
  local_78 = local_80;
  if (ppplVar8 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar8);
  }
  ppplVar8 = (long ***)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (ppplVar8 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_a0 = (long ***)&DAT_00000010;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      param_3 = pppplVar14;
      if (((uVar9 & 1) != 0) &&
         (ppplVar8 = (long ***)
                     FUN_710392e290(0x10,0x10,pppplVar14,param_4,param_5,param_6,param_7,param_8),
         param_3 = pppplVar14, ppplVar8 != (long ***)0x0)) goto LAB_7102d94390;
    }
    ppplVar8 = (long ***)0x0;
  }
LAB_7102d94390:
  *(uint *)(ppplVar8 + 1) = 2;
  ppplVar11 = ppplVar8 + 2;
  ppplVar23 = (long ***)((long)ppplVar8 + 0xc);
  *ppplVar8 = *ppplVar10;
  local_88 = ppplVar8;
  local_78 = ppplVar11;
  if (ppplVar10 != (long ***)0x0) {
    local_80 = ppplVar23;
    FUN_710392eb40((ulong)ppplVar10);
  }
  *(uint *)((long)ppplVar8 + 0xc) = 3;
  uVar15 = 4;
  do {
    lVar17 = *(long *)*DAT_71052c35b0;
    uVar19 = *(uint *)(lVar17 + 0x48);
    *(int *)(lVar17 + 0x4c) = *(int *)(lVar17 + 0x4c) + 1;
    uVar2 = *(uint *)(lVar17 + 0x3c) ^ *(uint *)(lVar17 + 0x3c) << 0xb;
    *(undefined4 *)(lVar17 + 0x3c) = *(undefined4 *)(lVar17 + 0x40);
    uVar2 = uVar2 ^ uVar2 >> 8 ^ uVar19 ^ uVar19 >> 0x13;
    *(undefined4 *)(lVar17 + 0x40) = *(undefined4 *)(lVar17 + 0x44);
    *(uint *)(lVar17 + 0x44) = uVar19;
    *(uint *)(lVar17 + 0x48) = uVar2;
    uVar19 = 0;
    if (uVar15 != 0) {
      uVar19 = uVar2 / uVar15;
    }
    iVar4 = uVar19 * uVar15;
    uVar19 = *(uint *)ppplVar8;
    uVar15 = uVar15 - 1;
    lVar17 = (ulong)(uVar2 - iVar4) * 4;
    *(uint *)ppplVar8 = *(uint *)((long)ppplVar8 + lVar17);
    *(uint *)((long)ppplVar8 + lVar17) = uVar19;
    ppplVar8 = (long ***)((long)ppplVar8 + 4);
  } while (ppplVar8 < ppplVar23);
  uVar15 = 0;
  local_98 = (long ***)0x0;
  local_90 = (long ***)0x0;
  local_a0 = (long ***)0x0;
  local_80 = ppplVar11;
LAB_7102d9447c:
  ppplVar8 = local_a0;
  pppplVar22 = (long ****)((long)local_90 - (long)local_a0);
  uVar24 = (long)pppplVar22 >> 2;
  uVar9 = uVar24 + 1;
  if (uVar9 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if (uVar24 < 0x1fffffffffffffff) {
    if (uVar9 <= (ulong)((long)pppplVar22 >> 1)) {
      uVar9 = (long)pppplVar22 >> 1;
    }
    if (uVar9 != 0) {
      if (uVar9 >> 0x3e == 0) goto LAB_7102d944bc;
      goto LAB_7102d9495c;
    }
LAB_7102d9451c:
    ppplVar11 = (long ***)0x0;
  }
  else {
    uVar9 = 0x3fffffffffffffff;
LAB_7102d944bc:
    ppplVar10 = (long ***)(uVar9 * 4);
    if (ppplVar10 == (long ***)0x0) {
      ppplVar10 = (long ***)0x1;
    }
    ppplVar11 = (long ***)
                FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,param_8);
    if (ppplVar11 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        param_3 = &local_70;
        local_70 = ppplVar10;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar12 & 1) != 0) &&
           (ppplVar11 = (long ***)
                        FUN_710392e290(0x10,ppplVar10,param_3,param_4,param_5,param_6,param_7,
                                       param_8), ppplVar11 != (long ***)0x0)) goto LAB_7102d94520;
      }
      goto LAB_7102d9451c;
    }
  }
LAB_7102d94520:
  puVar1 = (uint *)((long)ppplVar11 + uVar24 * 4);
  ppplVar10 = (long ***)((long)ppplVar11 + uVar9 * 4);
  ppplVar23 = (long ***)(puVar1 + 1);
  *puVar1 = uVar15;
  if (0 < (long)pppplVar22) {
    memcpy(ppplVar11,ppplVar8,(size_t)pppplVar22);
    param_3 = pppplVar22;
  }
  local_a0 = ppplVar11;
  local_98 = ppplVar23;
  local_90 = ppplVar10;
  if (ppplVar8 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar8);
  }
  while (uVar15 = uVar15 + 1, uVar15 < 7) {
    if (local_98 == local_90) goto LAB_7102d9447c;
    *(uint *)local_98 = uVar15;
    local_98 = (long ***)((long)local_98 + 4);
  }
  if ((4 < (long)local_98 - (long)local_a0) && (local_a0 < (long ***)((long)local_98 + -4))) {
    uVar9 = (ulong)((long)local_98 - (long)local_a0) >> 2;
    ppplVar8 = local_a0;
    do {
      lVar17 = *(long *)*DAT_71052c35b0;
      uVar2 = *(uint *)(lVar17 + 0x48);
      *(int *)(lVar17 + 0x4c) = *(int *)(lVar17 + 0x4c) + 1;
      uVar15 = *(uint *)(lVar17 + 0x3c) ^ *(uint *)(lVar17 + 0x3c) << 0xb;
      *(undefined4 *)(lVar17 + 0x3c) = *(undefined4 *)(lVar17 + 0x40);
      uVar15 = uVar15 ^ uVar15 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
      *(undefined4 *)(lVar17 + 0x40) = *(undefined4 *)(lVar17 + 0x44);
      *(uint *)(lVar17 + 0x44) = uVar2;
      *(uint *)(lVar17 + 0x48) = uVar15;
      uVar2 = 0;
      uVar19 = (uint)uVar9;
      if (uVar19 != 0) {
        uVar2 = uVar15 / uVar19;
      }
      uVar3 = *(uint *)ppplVar8;
      uVar9 = (ulong)(uVar19 - 1);
      lVar17 = (ulong)(uVar15 - uVar2 * uVar19) * 4;
      *(uint *)ppplVar8 = *(uint *)((long)ppplVar8 + lVar17);
      *(uint *)((long)ppplVar8 + lVar17) = uVar3;
      ppplVar8 = (long ***)((long)ppplVar8 + 4);
    } while (ppplVar8 < (long ***)((long)local_98 + -4));
  }
  if ((long)local_80 - (long)local_88 == 0) {
LAB_7102d94968:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  if ((long)local_98 - (long)local_a0 == 0) {
LAB_7102d94970:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar15 = *(uint *)local_a0;
  if (((uVar15 < 7) && (uVar2 = *(uint *)local_88, uVar2 < 4)) &&
     (*(uint *)(&DAT_7104559a80 + (long)(int)uVar15 * 4) < 3)) {
    pauVar5 = (undefined1 (*) [16])
              (&UNK_7104559aa0 +
              (long)(int)*(uint *)(&DAT_7104559a80 + (long)(int)uVar15 * 4) * 0x10 +
              (long)(int)uVar2 * 0x30);
    uVar6 = *(undefined8 *)*pauVar5;
    auVar7 = *pauVar5;
    auVar26 = *pauVar5;
    *(uint *)(param_1 + 0x90) = uVar2;
    *(uint *)(param_1 + 0x94) = uVar15;
    *(undefined1 *)(param_1 + 0x98) = 0;
    auVar26 = NEON_ext(auVar26,auVar7,8,1);
    uVar9 = (long)local_80 - (long)local_88 >> 2;
    *(ulong *)(param_1 + 0x88) = (ulong)auVar26._0_4_;
    *(undefined8 *)(param_1 + 0x80) = uVar6;
    if (uVar9 < 2) goto LAB_7102d94968;
    uVar24 = (long)local_98 - (long)local_a0 >> 2;
    if (uVar24 < 2) goto LAB_7102d94970;
    uVar15 = *(uint *)((long)local_a0 + 4);
    if (((uVar15 < 7) && (uVar2 = *(uint *)((long)local_88 + 4), uVar2 < 4)) &&
       (*(uint *)(&DAT_7104559a80 + (long)(int)uVar15 * 4) < 3)) {
      pauVar5 = (undefined1 (*) [16])
                (&UNK_7104559aa0 +
                (long)(int)*(uint *)(&DAT_7104559a80 + (long)(int)uVar15 * 4) * 0x10 +
                (long)(int)uVar2 * 0x30);
      uVar6 = *(undefined8 *)*pauVar5;
      auVar7 = *pauVar5;
      auVar26 = *pauVar5;
      *(uint *)(param_1 + 0xb0) = uVar2;
      *(uint *)(param_1 + 0xb4) = uVar15;
      *(undefined1 *)(param_1 + 0xb8) = 0;
      auVar26 = NEON_ext(auVar26,auVar7,8,1);
      *(ulong *)(param_1 + 0xa8) = (ulong)auVar26._0_4_;
      *(undefined8 *)(param_1 + 0xa0) = uVar6;
      if (uVar9 < 3) goto LAB_7102d94968;
      if (uVar24 < 3) goto LAB_7102d94970;
      uVar15 = *(uint *)(local_a0 + 1);
      if (((uVar15 < 7) && (uVar2 = *(uint *)(local_88 + 1), uVar2 < 4)) &&
         (*(uint *)(&DAT_7104559a80 + (long)(int)uVar15 * 4) < 3)) {
        pauVar5 = (undefined1 (*) [16])
                  (&UNK_7104559aa0 +
                  (long)(int)*(uint *)(&DAT_7104559a80 + (long)(int)uVar15 * 4) * 0x10 +
                  (long)(int)uVar2 * 0x30);
        uVar6 = *(undefined8 *)*pauVar5;
        auVar7 = *pauVar5;
        auVar26 = *pauVar5;
        *(uint *)(param_1 + 0xd0) = uVar2;
        *(uint *)(param_1 + 0xd4) = uVar15;
        *(undefined1 *)(param_1 + 0xd8) = 0;
        auVar26 = NEON_ext(auVar26,auVar7,8,1);
        *(ulong *)(param_1 + 200) = (ulong)auVar26._0_4_;
        *(undefined8 *)(param_1 + 0xc0) = uVar6;
        if (uVar9 < 4) goto LAB_7102d94968;
        if (uVar24 < 4) goto LAB_7102d94970;
        uVar15 = *(uint *)((long)local_a0 + 0xc);
        if (((6 < uVar15) || (uVar2 = *(uint *)((long)local_88 + 0xc), 3 < uVar2)) ||
           (2 < *(uint *)(&DAT_7104559a80 + (long)(int)uVar15 * 4))) goto LAB_7102d9495c;
        pauVar5 = (undefined1 (*) [16])
                  (&UNK_7104559aa0 +
                  (long)(int)*(uint *)(&DAT_7104559a80 + (long)(int)uVar15 * 4) * 0x10 +
                  (long)(int)uVar2 * 0x30);
        uVar6 = *(undefined8 *)*pauVar5;
        auVar7 = *pauVar5;
        auVar26 = *pauVar5;
        *(uint *)(param_1 + 0xf0) = uVar2;
        *(uint *)(param_1 + 0xf4) = uVar15;
        *(undefined1 *)(param_1 + 0xf8) = 0;
        *(undefined4 *)(param_1 + 0x100) = 0;
        auVar26 = NEON_ext(auVar26,auVar7,8,1);
        *(ulong *)(param_1 + 0xe8) = (ulong)auVar26._0_4_;
        *(undefined8 *)(param_1 + 0xe0) = uVar6;
        *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x98);
        (**(code **)(**(long **)(param_1 + 0x40) + 0x30))
                  (*(long **)(param_1 + 0x40),&DAT_7104559a70);
        (**(code **)(**(long **)(param_1 + 0x40) + 0x38))();
        *(undefined2 *)(param_1 + 0x108) = 1;
        *(undefined4 *)(param_1 + 0x10c) = 0;
        fVar25 = *(float *)(*(long *)(param_1 + 0x10) + 0x3c8);
        *(float *)(param_1 + 0x110) = fVar25;
        *(float *)(param_1 + 0x104) = fVar25 + *(float *)(param_1 + 0x104);
        *(undefined8 *)(param_1 + 0x114) = 0x3fee147b3f000000;
        *(undefined4 *)(param_1 + 0x11c) = 0;
        if (local_a0 != (long ***)0x0) {
          local_98 = local_a0;
          FUN_710392eb40((ulong)local_a0);
        }
        if (local_88 != (long ***)0x0) {
          local_80 = local_88;
          FUN_710392eb40((ulong)local_88);
        }
        *(undefined1 *)(*(long *)(param_1 + 0x38) + 0xa5) = 1;
        (**(code **)(**(long **)(param_1 + 0x38) + 0x38))();
        lVar17 = *(long *)(param_1 + 8);
        plVar13 = *(long **)(**(long **)(lVar17 + 0x338) + 8);
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x58))(plVar13,0x17,0xffffffff);
          lVar17 = *(long *)(param_1 + 8);
        }
        plVar18 = *(long **)(*(long *)(lVar17 + 0x300) + 0x18);
        plVar13 = (long *)*plVar18;
        plVar18 = (long *)plVar18[1];
        plVar20 = plVar13;
        if (plVar13 != plVar18) {
          do {
            plVar21 = plVar20 + 1;
            if ((*(ulong *)(*plVar20 + 0xa0) & 0xffffffffff) == 0x7b569df99) {
              puVar16 = *(undefined8 **)(*plVar20 + 0x130);
              if (puVar16 != (undefined8 *)0x0) {
                FUN_71025f55b0((undefined8 *)*puVar16,(undefined8 *)puVar16[1],"IPP0001");
                plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x300) + 0x18);
                plVar18 = (long *)plVar13[1];
                plVar13 = (long *)*plVar13;
              }
              break;
            }
            plVar20 = plVar21;
          } while (plVar18 != plVar21);
          do {
            if (plVar13 == plVar18) {
              return;
            }
            lVar17 = *plVar13;
            plVar13 = plVar13 + 1;
          } while ((*(ulong *)(lVar17 + 0xa0) & 0xffffffffff) != 0x7a462bc1e);
          puVar16 = *(undefined8 **)(lVar17 + 0x130);
          if (puVar16 != (undefined8 *)0x0) {
            FUN_71025f5420((undefined8 *)*puVar16,(undefined8 *)puVar16[1],"IPP2301");
            return;
          }
        }
        return;
      }
    }
  }
LAB_7102d9495c:
                    /* WARNING: Subroutine does not return */
  abort();
}

