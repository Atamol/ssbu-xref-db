// addr:      71026b3e10
// offset:    0x26b3e10
// name:      FUN_71026b3e10
// mangled:   
// signature: undefined __cdecl FUN_71026b3e10(long param_1, char param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71026b3e10(long param_1,char param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  long *plVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long ***ppplVar15;
  int *piVar16;
  undefined8 *puVar17;
  uint uVar18;
  void *pvVar19;
  long lVar20;
  long ****pppplVar21;
  long lVar22;
  ulong uVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  long ***local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long ***local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  
  lVar12 = *(long *)(param_1 + 0x10);
  if ((int)((ulong)(*(long *)(lVar12 + 0xc0) - *(long *)(lVar12 + 0xb8)) >> 5) <=
      *(char *)(param_1 + 0x30) * 5 + (int)param_2) {
    param_2 = -1;
  }
  *(char *)(param_1 + 0x31) = param_2;
  if (*(char *)(param_1 + 0x32) == '\x02') goto LAB_71026b4228;
  if (*(char *)(param_1 + 0x32) == '\0') {
    lVar20 = 0;
  }
  else {
    uVar23 = *(ulong *)(*(long *)(lVar12 + 0x88) + 0x488) & 0xffffffffff;
    if (uVar23 != 0) {
      lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x310);
      for (plVar8 = *(long **)(lVar12 + 0xd0); plVar8 != *(long **)(lVar12 + 0xd8);
          plVar8 = plVar8 + 2) {
        if ((*(uint *)(plVar8 + 1) < 2) && (lVar20 = *plVar8, uVar23 == *(ulong *)(lVar20 + 0x68)))
        goto LAB_71026b3ed0;
      }
    }
    lVar20 = 0;
  }
LAB_71026b3ed0:
  plVar8 = (long *)FUN_710392e290(0x10,0x1b0,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar30 = extraout_x1;
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
      local_c0 = (long ***)&DAT_000001b0;
      param_3 = &local_c0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
      uVar30 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x1b0,param_3,param_4,param_5,param_6,param_7,param_8
                                         ), uVar30 = extraout_x1_00, plVar8 != (long *)0x0))
      goto LAB_71026b3f2c;
    }
    plVar8 = (long *)0x0;
  }
LAB_71026b3f2c:
  lVar13 = *(long *)(param_1 + 8);
  lVar12 = *(long *)(param_1 + 0x10);
  uVar4 = *(undefined1 *)(param_1 + 0x30);
  *(undefined1 *)(plVar8 + 0xf) = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = 0;
  plVar8[2] = lVar20;
  plVar8[9] = 0;
  plVar8[10] = 0;
  *plVar8 = (long)&PTR_FUN_71050cdba0;
  plVar8[1] = lVar13;
  plVar8[0x10] = lVar12;
  plVar8[0x11] = 0xffffffff;
  plVar8[0x12] = -1;
  *(undefined1 *)(plVar8 + 0x13) = 2;
  plVar8[0xd] = 0;
  plVar8[0xe] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[5] = 0;
  plVar8[6] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  lVar20 = _DAT_7107521008;
  lVar12 = _ConstantZero;
  *(undefined4 *)((long)plVar8 + 0xcc) = 0xffffffff;
  *(undefined8 *)((long)plVar8 + 0xdc) = 0;
  *(undefined4 *)((long)plVar8 + 0xe4) = 0;
  *(undefined1 *)(plVar8 + 0x1b) = 0;
  *(undefined2 *)(plVar8 + 0x18) = 0xc00;
  plVar8[0x1a] = 0;
  plVar8[0x1d] = 0x27;
  *(undefined2 *)((long)plVar8 + 0xf4) = 1;
  *(undefined8 *)((long)plVar8 + 0xc4) = 0;
  *(undefined4 *)(plVar8 + 0x1e) = 0;
  *(undefined2 *)(plVar8 + 0x2e) = 0;
  *(undefined4 *)((long)plVar8 + 0x174) = 0;
  *(undefined1 *)(plVar8 + 0x2f) = 0;
  *(undefined1 *)((long)plVar8 + 0x179) = uVar4;
  plVar8[0x32] = 0;
  plVar8[0x33] = 0;
  plVar8[0x30] = lVar13;
  plVar8[0x31] = 0;
  plVar8[0x2d] = lVar20;
  plVar8[0x2c] = lVar12;
  plVar8[0x21] = 0;
  plVar8[0x20] = 0x3f800000;
  plVar8[0x23] = 0;
  plVar8[0x22] = 0x3f80000000000000;
  *plVar8 = (long)&PTR_FUN_71050ce010;
  plVar8[0x15] = lVar20;
  plVar8[0x14] = lVar12;
  plVar8[0x17] = lVar20;
  plVar8[0x16] = lVar12;
  plVar8[0x25] = 0x3f800000;
  plVar8[0x24] = 0;
  plVar8[0x27] = 0x3f80000000000000;
  plVar8[0x26] = 0;
  plVar8[0x29] = lVar20;
  plVar8[0x28] = lVar12;
  plVar8[0x2b] = 0x3f80000000000000;
  plVar8[0x2a] = 0;
  bVar5 = *(byte *)(param_1 + 0x32);
  *(byte *)(plVar8 + 0x34) = bVar5;
  for (plVar1 = *(long **)(*(long *)(lVar13 + 0x310) + 0xd0);
      plVar1 != *(long **)(*(long *)(lVar13 + 0x310) + 0xd8); plVar1 = plVar1 + 2) {
    if ((*(uint *)(plVar1 + 1) < 2) && (lVar12 = *plVar1, *(long *)(lVar12 + 0x68) == 0x1609525242))
    goto LAB_71026b4068;
  }
  lVar12 = 0;
LAB_71026b4068:
  plVar8[0x31] = lVar12;
  if ((bVar5 | 2) != 2) {
    for (plVar1 = *(long **)(*(long *)(lVar13 + 0x310) + 0xd0);
        plVar1 != *(long **)(*(long *)(lVar13 + 0x310) + 0xd8); plVar1 = plVar1 + 2) {
      if ((*(uint *)(plVar1 + 1) < 2) &&
         (lVar12 = *plVar1, *(long *)(lVar12 + 0x68) == 0x1c502c2595)) goto LAB_71026b4148;
    }
    lVar12 = 0;
LAB_71026b4148:
    plVar8[0x32] = lVar12;
    FUN_71026b2db0((ulong)plVar8,uVar30,param_3,param_4,param_5,param_6,param_7,param_8);
    if ((plVar8[2] != 0) &&
       (uVar23 = FUN_71025ee6c0(*(long *)(plVar8[2] + 0xd0),
                                (byte *)"dys_common_set_Totakeke_concert"), uVar23 != 0)) {
      plVar8[0x33] = uVar23;
    }
  }
  auVar40 = _DAT_7104467a70;
  plVar8[0x15] = DAT_7104467a70._8_8_;
  plVar8[0x14] = auVar40._0_8_;
  (**(code **)(*plVar8 + 0x80))(plVar8);
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 == *(undefined8 **)(param_1 + 0x28)) {
    pvVar19 = *(void **)(param_1 + 0x18);
    pppplVar21 = (long ****)((long)puVar2 - (long)pvVar19);
    uVar23 = ((long)pppplVar21 >> 3) + 1;
    if (uVar23 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = (long)*(undefined8 **)(param_1 + 0x28) - (long)pvVar19;
    if ((ulong)(lVar12 >> 3) < 0xfffffffffffffff) {
      uVar14 = lVar12 >> 2;
      if (uVar23 <= uVar14) {
        uVar23 = uVar14;
      }
      if (uVar23 != 0) {
        if (uVar23 >> 0x3d != 0) {
LAB_71026b4f98:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_71026b417c;
      }
LAB_71026b41dc:
      pvVar9 = (void *)0x0;
    }
    else {
      uVar23 = 0x1fffffffffffffff;
LAB_71026b417c:
      ppplVar15 = (long ***)(uVar23 * 8);
      if (ppplVar15 == (long ***)0x0) {
        ppplVar15 = (long ***)0x1;
      }
      pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,param_3,param_4,param_5,param_6,param_7,param_8
                                     );
      if (pvVar9 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
          param_3 = &local_c0;
          local_c0 = ppplVar15;
          uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
          if (((uVar14 & 1) != 0) &&
             (pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,param_3,param_4,param_5,param_6,param_7
                                              ,param_8), pvVar9 != (void *)0x0))
          goto LAB_71026b41e0;
        }
        goto LAB_71026b41dc;
      }
    }
LAB_71026b41e0:
    puVar2 = (undefined8 *)((long)pvVar9 + ((long)pppplVar21 >> 3) * 8);
    *puVar2 = plVar8;
    if (0 < (long)pppplVar21) {
      memcpy(pvVar9,pvVar19,(size_t)pppplVar21);
      param_3 = pppplVar21;
    }
    *(void **)(param_1 + 0x18) = pvVar9;
    *(undefined8 **)(param_1 + 0x20) = puVar2 + 1;
    *(void **)(param_1 + 0x28) = (void *)((long)pvVar9 + uVar23 * 8);
    if (pvVar19 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar19);
    }
  }
  else {
    *puVar2 = plVar8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
  }
  if (*(char *)(param_1 + 0x32) == '\x01') {
    *(undefined1 *)(param_1 + 0x33) = 1;
  }
LAB_71026b4228:
  lVar12 = (long)*(char *)(param_1 + 0x30) * 5 + (long)*(char *)(param_1 + 0x31);
  if ((((int)lVar12 < 0) ||
      (lVar20 = *(long *)(*(long *)(param_1 + 0x10) + 0xb8),
      (int)((ulong)(*(long *)(*(long *)(param_1 + 0x10) + 0xc0) - lVar20) >> 5) <= (int)lVar12)) ||
     ((((*(int *)(lVar20 + lVar12 * 0x20) != 0x14 &&
        ((((lVar20 = lVar20 + lVar12 * 0x20, *(int *)(lVar20 + 4) != 0x14 &&
           (*(int *)(lVar20 + 8) != 0x14)) && (*(int *)(lVar20 + 0xc) != 0x14)) &&
         ((*(int *)(lVar20 + 0x10) != 0x14 && (*(int *)(lVar20 + 0x14) != 0x14)))))) &&
       (*(int *)(lVar20 + 0x18) != 0x14)) && (*(int *)(lVar20 + 0x1c) != 0x14)))) {
    FUN_71026b4fc0(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_71026b4fc0(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_71026b4fc0(param_1,2,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_71026b4fc0(param_1,3,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_71026b4fc0(param_1,4,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_71026b4fc0(param_1,5,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_71026b4fc0(param_1,6,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_71026b4fc0(param_1,7,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    FUN_71026b4fc0(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_71026b4fc0(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_71026b4fc0(param_1,2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar23 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x10) + 0x88) + 0x288) & 0xffffffffff;
    if (uVar23 != 0) {
      lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x310);
      for (plVar8 = *(long **)(lVar12 + 0xd0); plVar8 != *(long **)(lVar12 + 0xd8);
          plVar8 = plVar8 + 2) {
        if ((*(uint *)(plVar8 + 1) < 2) && (lVar20 = *plVar8, uVar23 == *(ulong *)(lVar20 + 0x68)))
        goto LAB_71026b433c;
      }
    }
    lVar20 = 0;
LAB_71026b433c:
    puVar2 = (undefined8 *)(param_1 + 0x18);
    uVar18 = 4;
    cVar6 = '\0';
    do {
      cVar7 = *(char *)(param_1 + 0x30);
      lVar12 = (long)cVar7 * 5 + (long)*(char *)(param_1 + 0x31);
      if (-1 < (int)lVar12) {
        lVar22 = *(long *)(param_1 + 0x10);
        lVar13 = *(long *)(lVar22 + 0xb8);
        if ((int)lVar12 < (int)((ulong)(*(long *)(lVar22 + 0xc0) - lVar13) >> 5) &&
            (uVar18 & 0x7fffffff) < 8) {
          switch(uVar18) {
          case 0:
            piVar16 = (int *)(lVar13 + lVar12 * 0x20);
            break;
          case 1:
            piVar16 = (int *)(lVar13 + lVar12 * 0x20 + 4);
            break;
          case 2:
            piVar16 = (int *)(lVar13 + lVar12 * 0x20 + 8);
            break;
          case 3:
            piVar16 = (int *)(lVar13 + lVar12 * 0x20 + 0xc);
            break;
          default:
            piVar16 = (int *)(lVar13 + lVar12 * 0x20 + 0x10);
            break;
          case 5:
            piVar16 = (int *)(lVar13 + lVar12 * 0x20 + 0x14);
            break;
          case 6:
            piVar16 = (int *)(lVar13 + lVar12 * 0x20 + 0x18);
            break;
          case 7:
            piVar16 = (int *)(lVar13 + lVar12 * 0x20 + 0x1c);
          }
          iVar3 = *piVar16;
          if (iVar3 < 0x14) {
            if (iVar3 != -1) {
              if (iVar3 == 0x13) {
                uVar23 = *(ulong *)(*(long *)(lVar22 + 0x88) + 0x268) & 0xffffffffff;
                if (uVar23 != 0) {
                  lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x310);
                  for (plVar8 = *(long **)(lVar12 + 0xd0); plVar8 != *(long **)(lVar12 + 0xd8);
                      plVar8 = plVar8 + 2) {
                    if ((*(uint *)(plVar8 + 1) < 2) &&
                       (lVar13 = *plVar8, uVar23 == *(ulong *)(lVar13 + 0x68))) {
                      if (lVar13 != 0) {
                        puVar10 = (undefined8 *)
                                  FUN_710392e290(0x10,0x180,param_3,param_4,param_5,param_6,param_7,
                                                 param_8);
                        if (puVar10 == (undefined8 *)0x0) {
                          if (DAT_7105332f00 != (long *)0x0) {
                            local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                            local_c0 = (long ***)&DAT_00000180;
                            param_3 = &local_c0;
                            uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))
                                               (DAT_7105332f00,&local_100);
                            if (((uVar23 & 1) != 0) &&
                               (puVar10 = (undefined8 *)
                                          FUN_710392e290(0x10,0x180,param_3,param_4,param_5,param_6,
                                                         param_7,param_8),
                               puVar10 != (undefined8 *)0x0)) goto LAB_71026b4860;
                          }
                          puVar10 = (undefined8 *)0x0;
                        }
LAB_71026b4860:
                        uVar30 = *(undefined8 *)(param_1 + 8);
                        uVar34 = *(undefined8 *)(param_1 + 0x10);
                        uVar4 = *(undefined1 *)(param_1 + 0x30);
                        *(undefined1 *)(puVar10 + 0xf) = 0;
                        puVar10[0xb] = 0;
                        puVar10[0xc] = 0;
                        puVar10[2] = lVar13;
                        puVar10[9] = 0;
                        puVar10[10] = 0;
                        *(undefined1 *)(puVar10 + 0x13) = 2;
                        *puVar10 = &PTR_FUN_71050cdba0;
                        puVar10[1] = uVar30;
                        puVar10[0x10] = uVar34;
                        puVar10[0x11] = 0xffffffff;
                        puVar10[0x12] = 0xffffffffffffffff;
                        puVar10[0xd] = 0;
                        puVar10[0xe] = 0;
                        puVar10[7] = 0;
                        puVar10[8] = 0;
                        puVar10[5] = 0;
                        puVar10[6] = 0;
                        puVar10[3] = 0;
                        puVar10[4] = 0;
                        lVar13 = _DAT_7107521008;
                        lVar12 = _ConstantZero;
                        *(undefined2 *)(puVar10 + 0x18) = 0xc00;
                        *(undefined8 *)((long)puVar10 + 0xc4) = 0;
                        *(undefined4 *)((long)puVar10 + 0xcc) = 0xffffffff;
                        *(undefined8 *)((long)puVar10 + 0xdc) = 0;
                        *(undefined1 *)(puVar10 + 0x1b) = 0;
                        puVar10[0x1a] = 0;
                        *(undefined8 *)((long)puVar10 + 0xec) = 0;
                        *(undefined2 *)((long)puVar10 + 0xf4) = 1;
                        puVar10[0x15] = 0xc258ac08;
                        puVar10[0x14] = 0x3fddd2f2426dc49c;
                        puVar10[0x17] = lVar13;
                        puVar10[0x16] = lVar12;
                        puVar10[0x21] = 0;
                        puVar10[0x20] = 0x3f800000;
                        puVar10[0x23] = 0;
                        puVar10[0x22] = 0x3f80000000000000;
                        *puVar10 = &PTR_FUN_71050cde70;
                        *(undefined2 *)(puVar10 + 0x2e) = 0;
                        *(undefined4 *)((long)puVar10 + 0x174) = 0;
                        *(undefined1 *)(puVar10 + 0x2f) = 0;
                        *(undefined1 *)((long)puVar10 + 0x179) = uVar4;
                        *(undefined4 *)((long)puVar10 + 0xe4) = 0;
                        *(undefined4 *)(puVar10 + 0x1d) = 0x13;
                        *(undefined1 *)((long)puVar10 + 0x17a) = 1;
                        puVar10[0x2d] = lVar13;
                        puVar10[0x2c] = lVar12;
                        puVar10[0x25] = 0x3f800000;
                        puVar10[0x24] = 0;
                        puVar10[0x27] = 0x3f80000000000000;
                        puVar10[0x26] = 0;
                        puVar10[0x29] = lVar13;
                        puVar10[0x28] = lVar12;
                        puVar10[0x2b] = 0x3f80000000000000;
                        puVar10[0x2a] = 0;
                        uStack_f8 = 0;
                        local_100 = (long ***)&DAT_3f800000;
                        local_e8 = 0;
                        local_f0 = 0x3f80000000000000;
                        uStack_d8 = 0x3f800000;
                        local_e0 = 0;
                        local_c8 = 0x3f800000c258ac08;
                        local_d0 = 0x3fddd2f2426dc49c;
                        lVar12 = puVar10[2];
                        if (lVar12 != 0) {
                          (**(code **)(**(long **)(lVar12 + 0x90) + 0x148))
                                    (*(long **)(lVar12 + 0x90),&local_100);
                          lVar12 = *(long *)(lVar12 + 0xd8);
                          if (lVar12 != 0) {
                            local_a8 = local_e8;
                            local_b0 = local_f0;
                            local_b8 = uStack_f8;
                            local_c0 = local_100;
                            local_88 = local_c8;
                            local_90 = local_d0;
                            local_98 = uStack_d8;
                            local_a0 = local_e0;
                            if (*(char *)(*(long *)(lVar12 + 8) + 0xa8) != '\0') {
                              plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x48);
                              (**(code **)(*plVar8 + 0x20))(plVar8,&local_c0);
                            }
                            *(undefined1 *)(lVar12 + 0x20) = 1;
                          }
                        }
                        puVar17 = *(undefined8 **)(param_1 + 0x20);
                        if (puVar17 != *(undefined8 **)(param_1 + 0x28)) goto LAB_71026b4664;
                        pvVar19 = (void *)*puVar2;
                        pppplVar21 = (long ****)((long)puVar17 - (long)pvVar19);
                        uVar23 = ((long)pppplVar21 >> 3) + 1;
                        if (uVar23 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        lVar12 = (long)*(undefined8 **)(param_1 + 0x28) - (long)pvVar19;
                        if ((ulong)(lVar12 >> 3) < 0xfffffffffffffff) {
                          uVar14 = lVar12 >> 2;
                          if (uVar23 <= uVar14) {
                            uVar23 = uVar14;
                          }
                          if (uVar23 != 0) {
                            if (uVar23 >> 0x3d == 0) goto LAB_71026b4d3c;
                            goto LAB_71026b4f98;
                          }
LAB_71026b4d9c:
                          pvVar9 = (void *)0x0;
                        }
                        else {
                          uVar23 = 0x1fffffffffffffff;
LAB_71026b4d3c:
                          ppplVar15 = (long ***)(uVar23 * 8);
                          if (ppplVar15 == (long ***)0x0) {
                            ppplVar15 = (long ***)0x1;
                          }
                          pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,param_3,param_4,param_5,
                                                          param_6,param_7,param_8);
                          if (pvVar9 == (void *)0x0) {
                            if (DAT_7105332f00 != (long *)0x0) {
                              local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                              param_3 = &local_c0;
                              local_c0 = ppplVar15;
                              uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))
                                                 (DAT_7105332f00,&local_100);
                              if (((uVar14 & 1) != 0) &&
                                 (pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,param_3,param_4,
                                                                  param_5,param_6,param_7,param_8),
                                 pvVar9 != (void *)0x0)) goto LAB_71026b4da0;
                            }
                            goto LAB_71026b4d9c;
                          }
                        }
LAB_71026b4da0:
                        puVar17 = (undefined8 *)((long)pvVar9 + ((long)pppplVar21 >> 3) * 8);
                        *puVar17 = puVar10;
                        if (0 < (long)pppplVar21) {
                          memcpy(pvVar9,pvVar19,(size_t)pppplVar21);
                          param_3 = pppplVar21;
                        }
                        *(void **)(param_1 + 0x18) = pvVar9;
                        *(undefined8 **)(param_1 + 0x20) = puVar17 + 1;
                        *(void **)(param_1 + 0x28) = (void *)((long)pvVar9 + uVar23 * 8);
                        goto joined_r0x0071026b47e0;
                      }
                      break;
                    }
                  }
                }
              }
              else {
LAB_71026b4678:
                if ((cVar6 < '\x02') && (iVar3 != 0x27)) {
                  uVar23 = *(ulong *)(*(long *)(lVar22 + 0x88) + (long)iVar3 * 0x20 + 8) &
                           0xffffffffff;
                  if (uVar23 != 0) {
                    lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x310);
                    for (plVar8 = *(long **)(lVar12 + 0xd0); plVar8 != *(long **)(lVar12 + 0xd8);
                        plVar8 = plVar8 + 2) {
                      if ((*(uint *)(plVar8 + 1) < 2) &&
                         (lVar13 = *plVar8, uVar23 == *(ulong *)(lVar13 + 0x68))) {
                        if (lVar13 != 0) {
                          puVar10 = (undefined8 *)
                                    FUN_710392e290(0x10,0x180,param_3,param_4,param_5,param_6,
                                                   param_7,param_8);
                          uVar30 = extraout_x1_01;
                          if (puVar10 == (undefined8 *)0x0) {
                            if (DAT_7105332f00 != (long *)0x0) {
                              local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                              local_c0 = (long ***)&DAT_00000180;
                              param_3 = &local_c0;
                              auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))
                                                  (DAT_7105332f00,&local_100);
                              uVar30 = auVar40._8_8_;
                              if (((auVar40._0_8_ & 1) != 0) &&
                                 (puVar10 = (undefined8 *)
                                            FUN_710392e290(0x10,0x180,param_3,param_4,param_5,
                                                           param_6,param_7,param_8),
                                 uVar30 = extraout_x1_02, puVar10 != (undefined8 *)0x0))
                              goto LAB_71026b4a70;
                            }
                            puVar10 = (undefined8 *)0x0;
                          }
LAB_71026b4a70:
                          uVar34 = *(undefined8 *)(param_1 + 8);
                          uVar36 = *(undefined8 *)(param_1 + 0x10);
                          uVar4 = *(undefined1 *)(param_1 + 0x30);
                          *(undefined1 *)(puVar10 + 0xf) = 0;
                          puVar10[0xb] = 0;
                          puVar10[0xc] = 0;
                          puVar10[2] = lVar13;
                          puVar10[9] = 0;
                          puVar10[10] = 0;
                          *puVar10 = &PTR_FUN_71050cdba0;
                          puVar10[1] = uVar34;
                          puVar10[0x10] = uVar36;
                          puVar10[0x11] = 0xffffffff;
                          puVar10[0x12] = 0xffffffffffffffff;
                          *(undefined1 *)(puVar10 + 0x13) = 2;
                          puVar10[0xd] = 0;
                          puVar10[0xe] = 0;
                          puVar10[7] = 0;
                          puVar10[8] = 0;
                          puVar10[5] = 0;
                          puVar10[6] = 0;
                          puVar10[3] = 0;
                          puVar10[4] = 0;
                          lVar13 = _DAT_7107521008;
                          lVar12 = _ConstantZero;
                          *(undefined4 *)((long)puVar10 + 0xcc) = 0xffffffff;
                          *puVar10 = &PTR_FUN_71050cde70;
                          *(undefined2 *)(puVar10 + 0x18) = 0x902;
                          *(undefined8 *)((long)puVar10 + 0xc4) = 0;
                          *(undefined8 *)((long)puVar10 + 0xdc) = 0;
                          *(undefined1 *)(puVar10 + 0x1b) = 0;
                          puVar10[0x1a] = 0;
                          *(undefined8 *)((long)puVar10 + 0xec) = 0;
                          *(undefined2 *)((long)puVar10 + 0xf4) = 1;
                          *(undefined4 *)((long)puVar10 + 0x174) = 0;
                          *(undefined1 *)(puVar10 + 0x2f) = 0;
                          *(undefined1 *)((long)puVar10 + 0x179) = uVar4;
                          *(undefined1 *)((long)puVar10 + 0x17a) = 0;
                          *(undefined1 *)(puVar10 + 0x1b) = 10;
                          puVar10[0x15] = lVar13;
                          puVar10[0x14] = lVar12;
                          puVar10[0x17] = lVar13;
                          puVar10[0x16] = lVar12;
                          puVar10[0x21] = 0;
                          puVar10[0x20] = 0x3f800000;
                          puVar10[0x23] = 0;
                          puVar10[0x22] = 0x3f80000000000000;
                          puVar10[0x25] = 0x3f800000;
                          puVar10[0x24] = 0;
                          *(undefined2 *)(puVar10 + 0x2e) = 0;
                          *(undefined4 *)((long)puVar10 + 0xe4) = 0;
                          *(int *)(puVar10 + 0x1d) = iVar3;
                          puVar10[0x27] = 0x3f80000000000000;
                          puVar10[0x26] = 0;
                          puVar10[0x29] = lVar13;
                          puVar10[0x28] = lVar12;
                          puVar10[0x2b] = 0x3f80000000000000;
                          puVar10[0x2a] = 0;
                          puVar10[0x2d] = lVar13;
                          puVar10[0x2c] = lVar12;
                          FUN_71026b2db0((ulong)puVar10,uVar30,param_3,param_4,param_5,param_6,
                                         param_7,param_8);
                          uVar30 = *(undefined8 *)(&DAT_7104471280 + (long)cVar6 * 0x10);
                          uVar36 = 0;
                          uVar37 = 0;
                          fVar39 = (float)*(undefined8 *)(&UNK_7104471288 + (long)cVar6 * 0x10);
                          *(float *)(puVar10 + 0x15) = fVar39;
                          *(undefined4 *)((long)puVar10 + 0xac) = 0;
                          puVar10[0x14] = uVar30;
                          fVar28 = (float)((ulong)uVar30 >> 0x20) +
                                   *(float *)(*(long *)(puVar10[0x10] + 0x88) + (long)iVar3 * 0x20 +
                                             0x18);
                          uVar34 = 0;
                          fVar38 = (float)uVar30;
                          fVar29 = *(float *)((long)puVar10 + 0xb4) + 1.5707964;
                          uVar23 = (ulong)(uint)fVar29;
                          uVar30 = 0;
                          uVar14 = (ulong)*(uint *)(puVar10 + 0x17);
                          auVar40._4_4_ = fVar29;
                          auVar40._0_4_ = *(undefined4 *)(puVar10 + 0x16);
                          auVar40._8_4_ = *(uint *)(puVar10 + 0x17);
                          auVar40._12_4_ = 0;
                          auVar40 = FUN_7100492c30(auVar40,0);
                          fVar29 = auVar40._0_4_;
                          fVar25 = auVar40._4_4_;
                          fVar26 = auVar40._8_4_;
                          fVar31 = (float)uVar14;
                          fVar32 = (float)(uVar14 >> 0x20);
                          fVar33 = (float)uVar34;
                          fVar27 = auVar40._12_4_;
                          local_100 = (long ***)
                                      CONCAT44(fVar29 * 0.0 + fVar25 * 1.0 + fVar26 * 0.0 +
                                               fVar28 * fVar27,
                                               fVar29 * 1.0 + fVar25 * 0.0 + fVar26 * 0.0 +
                                               fVar38 * fVar27);
                          uStack_f8 = CONCAT44(fVar29 * 0.0 + fVar25 * 0.0 + fVar26 * 0.0 +
                                               fVar27 * 1.0,
                                               fVar29 * 0.0 + fVar25 * 0.0 + fVar26 * 1.0 +
                                               fVar39 * fVar27);
                          fVar35 = (float)((ulong)uVar34 >> 0x20);
                          fVar29 = (float)uVar23;
                          fVar25 = (float)(uVar23 >> 0x20);
                          fVar26 = (float)uVar30;
                          fVar27 = (float)((ulong)uVar30 >> 0x20);
                          auVar24._0_8_ =
                               CONCAT44(fVar29 * 0.0 + fVar25 * 1.0 + fVar26 * 0.0 + fVar28 * fVar27
                                        ,fVar29 * 1.0 + fVar25 * 0.0 + fVar26 * 0.0 +
                                         fVar38 * fVar27);
                          auVar24._8_4_ =
                               fVar29 * 0.0 + fVar25 * 0.0 + fVar26 * 1.0 + fVar39 * fVar27;
                          auVar24._12_4_ = fVar29 * 0.0 + fVar25 * 0.0 + fVar26 * 0.0 + fVar27 * 1.0
                          ;
                          fVar29 = (float)uVar36;
                          fVar25 = (float)((ulong)uVar36 >> 0x20);
                          fVar26 = (float)uVar37;
                          fVar27 = (float)((ulong)uVar37 >> 0x20);
                          local_d0 = CONCAT44(fVar29 * 0.0 + fVar25 * 1.0 + fVar26 * 0.0 +
                                              fVar28 * fVar27,
                                              fVar29 * 1.0 + fVar25 * 0.0 + fVar26 * 0.0 +
                                              fVar38 * fVar27);
                          local_c8 = CONCAT44(fVar29 * 0.0 + fVar25 * 0.0 + fVar26 * 0.0 +
                                              fVar27 * 1.0,
                                              fVar29 * 0.0 + fVar25 * 0.0 + fVar26 * 1.0 +
                                              fVar39 * fVar27);
                          local_e8 = auVar24._8_8_;
                          uStack_d8 = CONCAT44(fVar31 * 0.0 + fVar32 * 0.0 + fVar33 * 0.0 +
                                               fVar35 * 1.0,
                                               fVar31 * 0.0 + fVar32 * 0.0 + fVar33 * 1.0 +
                                               fVar39 * fVar35);
                          local_e0 = CONCAT44(fVar31 * 0.0 + fVar32 * 1.0 + fVar33 * 0.0 +
                                              fVar28 * fVar35,
                                              fVar31 * 1.0 + fVar32 * 0.0 + fVar33 * 0.0 +
                                              fVar38 * fVar35);
                          lVar12 = puVar10[2];
                          local_f0 = auVar24._0_8_;
                          if (lVar12 != 0) {
                            (**(code **)(**(long **)(lVar12 + 0x90) + 0x148))
                                      (*(long **)(lVar12 + 0x90),&local_100);
                            lVar12 = *(long *)(lVar12 + 0xd8);
                            if (lVar12 != 0) {
                              local_a8 = local_e8;
                              local_b0 = local_f0;
                              local_b8 = uStack_f8;
                              local_c0 = local_100;
                              local_88 = local_c8;
                              local_90 = local_d0;
                              local_98 = uStack_d8;
                              local_a0 = local_e0;
                              if (*(char *)(*(long *)(lVar12 + 8) + 0xa8) != '\0') {
                                plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x48);
                                (**(code **)(*plVar8 + 0x20))(plVar8,&local_c0);
                              }
                              *(undefined1 *)(lVar12 + 0x20) = 1;
                            }
                          }
                          *(undefined4 *)((long)puVar10 + 0x8c) =
                               *(undefined4 *)
                                (*(long *)(puVar10[0x10] + 0x88) +
                                 (long)*(int *)(puVar10 + 0x1d) * 0x20 + 0x10);
                          FUN_71026b1e50((long)puVar10);
                          FUN_71026b2c20((long)puVar10);
                          puVar17 = *(undefined8 **)(param_1 + 0x20);
                          if (puVar17 == *(undefined8 **)(param_1 + 0x28)) {
                            pvVar19 = (void *)*puVar2;
                            pppplVar21 = (long ****)((long)puVar17 - (long)pvVar19);
                            uVar23 = ((long)pppplVar21 >> 3) + 1;
                            if (uVar23 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                              std::__vector_base_common<true>::__throw_length_error();
                            }
                            lVar12 = (long)*(undefined8 **)(param_1 + 0x28) - (long)pvVar19;
                            if ((ulong)(lVar12 >> 3) < 0xfffffffffffffff) {
                              uVar14 = lVar12 >> 2;
                              if (uVar23 <= uVar14) {
                                uVar23 = uVar14;
                              }
                              if (uVar23 != 0) {
                                if (uVar23 >> 0x3d == 0) goto LAB_71026b4ddc;
                                goto LAB_71026b4f98;
                              }
LAB_71026b4e40:
                              pvVar9 = (void *)0x0;
                            }
                            else {
                              uVar23 = 0x1fffffffffffffff;
LAB_71026b4ddc:
                              ppplVar15 = (long ***)(uVar23 * 8);
                              if (ppplVar15 == (long ***)0x0) {
                                ppplVar15 = (long ***)0x1;
                              }
                              pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,param_3,param_4,param_5
                                                              ,param_6,param_7,param_8);
                              if (pvVar9 == (void *)0x0) {
                                if (DAT_7105332f00 != (long *)0x0) {
                                  local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                                  param_3 = &local_c0;
                                  local_c0 = ppplVar15;
                                  uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))
                                                     (DAT_7105332f00,&local_100);
                                  if (((uVar14 & 1) != 0) &&
                                     (pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,param_3,param_4
                                                                      ,param_5,param_6,param_7,
                                                                      param_8),
                                     pvVar9 != (void *)0x0)) goto LAB_71026b4e44;
                                }
                                goto LAB_71026b4e40;
                              }
                            }
LAB_71026b4e44:
                            puVar17 = (undefined8 *)((long)pvVar9 + ((long)pppplVar21 >> 3) * 8);
                            *puVar17 = puVar10;
                            if (0 < (long)pppplVar21) {
                              memcpy(pvVar9,pvVar19,(size_t)pppplVar21);
                              param_3 = pppplVar21;
                            }
                            *(void **)(param_1 + 0x18) = pvVar9;
                            *(undefined8 **)(param_1 + 0x20) = puVar17 + 1;
                            *(void **)(param_1 + 0x28) = (void *)((long)pvVar9 + uVar23 * 8);
                            if (pvVar19 != (void *)0x0) {
                              FUN_710392eb40((ulong)pvVar19);
                            }
                          }
                          else {
                            *puVar17 = puVar10;
                            *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
                          }
                          cVar6 = cVar6 + '\x01';
                        }
                        break;
                      }
                    }
                  }
                }
              }
            }
          }
          else if (iVar3 != 0x27) {
            if (iVar3 != 0x14) goto LAB_71026b4678;
            puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x180,param_3,param_4,param_5,param_6,param_7,param_8);
            if (puVar10 == (undefined8 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                local_c0 = (long ***)&DAT_00000180;
                param_3 = &local_c0;
                uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
                if (((uVar23 & 1) != 0) &&
                   (puVar10 = (undefined8 *)
                              FUN_710392e290(0x10,0x180,param_3,param_4,param_5,param_6,param_7,
                                             param_8), puVar10 != (undefined8 *)0x0))
                goto LAB_71026b4500;
              }
              puVar10 = (undefined8 *)0x0;
            }
LAB_71026b4500:
            uVar30 = *(undefined8 *)(param_1 + 8);
            puVar10[0xd] = 0;
            puVar10[0xe] = 0;
            *(undefined1 *)(puVar10 + 0xf) = 0;
            puVar10[0xb] = 0;
            puVar10[0xc] = 0;
            puVar10[2] = lVar20;
            puVar10[0x10] = lVar22;
            *(undefined1 *)(puVar10 + 0x13) = 2;
            *puVar10 = &PTR_FUN_71050cdba0;
            puVar10[1] = uVar30;
            *(undefined4 *)(puVar10 + 0x11) = 0xffffffff;
            *(undefined8 *)((long)puVar10 + 0x8c) = 0xffffffff00000000;
            *(undefined4 *)((long)puVar10 + 0x94) = 0xffffffff;
            puVar10[9] = 0;
            puVar10[10] = 0;
            puVar10[7] = 0;
            puVar10[8] = 0;
            puVar10[5] = 0;
            puVar10[6] = 0;
            puVar10[3] = 0;
            puVar10[4] = 0;
            lVar13 = _DAT_7107521008;
            lVar12 = _ConstantZero;
            *(undefined2 *)(puVar10 + 0x18) = 0xc00;
            *(undefined8 *)((long)puVar10 + 0xc4) = 0;
            *(undefined4 *)((long)puVar10 + 0xcc) = 0xffffffff;
            *(undefined8 *)((long)puVar10 + 0xdc) = 0;
            *(undefined1 *)(puVar10 + 0x1b) = 0;
            puVar10[0x1a] = 0;
            *(undefined8 *)((long)puVar10 + 0xec) = 0;
            *(undefined2 *)((long)puVar10 + 0xf4) = 1;
            puVar10[0x15] = 0xc262d810;
            puVar10[0x14] = 0x3f80000042496354;
            puVar10[0x17] = lVar13;
            puVar10[0x16] = lVar12;
            *puVar10 = &PTR_FUN_71050cde70;
            *(undefined4 *)((long)puVar10 + 0x174) = 0;
            *(undefined1 *)(puVar10 + 0x2f) = 0;
            *(char *)((long)puVar10 + 0x179) = cVar7;
            *(undefined1 *)((long)puVar10 + 0x17a) = 1;
            puVar10[0x2d] = lVar13;
            puVar10[0x2c] = lVar12;
            puVar10[0x21] = 0;
            puVar10[0x20] = 0x3f800000;
            puVar10[0x23] = 0;
            puVar10[0x22] = 0x3f80000000000000;
            *(undefined2 *)(puVar10 + 0x2e) = 0;
            *(undefined4 *)((long)puVar10 + 0xe4) = 0;
            *(undefined4 *)(puVar10 + 0x1d) = 0x14;
            puVar10[0x29] = lVar13;
            puVar10[0x28] = lVar12;
            puVar10[0x2b] = 0x3f80000000000000;
            puVar10[0x2a] = 0;
            puVar10[0x25] = 0x3f800000;
            puVar10[0x24] = 0;
            puVar10[0x27] = 0x3f80000000000000;
            puVar10[0x26] = 0;
            uStack_f8 = 0;
            local_100 = (long ***)&DAT_3f800000;
            local_e8 = 0;
            local_f0 = 0x3f80000000000000;
            uStack_d8 = 0x3f800000;
            local_e0 = 0;
            local_c8 = 0x3f800000c262d810;
            local_d0 = 0x3f80000042496354;
            lVar12 = puVar10[2];
            if (lVar12 != 0) {
              (**(code **)(**(long **)(lVar12 + 0x90) + 0x148))
                        (*(long **)(lVar12 + 0x90),&local_100);
              lVar12 = *(long *)(lVar12 + 0xd8);
              if (lVar12 != 0) {
                local_a8 = local_e8;
                local_b0 = local_f0;
                local_b8 = uStack_f8;
                local_c0 = local_100;
                local_88 = local_c8;
                local_90 = local_d0;
                local_98 = uStack_d8;
                local_a0 = local_e0;
                if (*(char *)(*(long *)(lVar12 + 8) + 0xa8) != '\0') {
                  plVar8 = *(long **)(*(long *)(lVar12 + 8) + 0x48);
                  (**(code **)(*plVar8 + 0x20))(plVar8,&local_c0);
                }
                *(undefined1 *)(lVar12 + 0x20) = 1;
              }
            }
            puVar17 = *(undefined8 **)(param_1 + 0x20);
            if (puVar17 == *(undefined8 **)(param_1 + 0x28)) {
              pvVar19 = (void *)*puVar2;
              pppplVar21 = (long ****)((long)puVar17 - (long)pvVar19);
              uVar23 = ((long)pppplVar21 >> 3) + 1;
              if (uVar23 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar12 = (long)*(undefined8 **)(param_1 + 0x28) - (long)pvVar19;
              if ((ulong)(lVar12 >> 3) < 0xfffffffffffffff) {
                uVar14 = lVar12 >> 2;
                if (uVar23 <= uVar14) {
                  uVar23 = uVar14;
                }
                if (uVar23 != 0) {
                  if (uVar23 >> 0x3d == 0) goto LAB_71026b4748;
                  goto LAB_71026b4f98;
                }
LAB_71026b47a8:
                pvVar9 = (void *)0x0;
              }
              else {
                uVar23 = 0x1fffffffffffffff;
LAB_71026b4748:
                ppplVar15 = (long ***)(uVar23 * 8);
                if (ppplVar15 == (long ***)0x0) {
                  ppplVar15 = (long ***)0x1;
                }
                pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,param_3,param_4,param_5,param_6,
                                                param_7,param_8);
                if (pvVar9 == (void *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                    param_3 = &local_c0;
                    local_c0 = ppplVar15;
                    uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
                    if (((uVar14 & 1) != 0) &&
                       (pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,param_3,param_4,param_5,
                                                        param_6,param_7,param_8),
                       pvVar9 != (void *)0x0)) goto LAB_71026b47ac;
                  }
                  goto LAB_71026b47a8;
                }
              }
LAB_71026b47ac:
              puVar17 = (undefined8 *)((long)pvVar9 + ((long)pppplVar21 >> 3) * 8);
              *puVar17 = puVar10;
              if (0 < (long)pppplVar21) {
                memcpy(pvVar9,pvVar19,(size_t)pppplVar21);
                param_3 = pppplVar21;
              }
              *(void **)(param_1 + 0x28) = (void *)((long)pvVar9 + uVar23 * 8);
              *(void **)(param_1 + 0x18) = pvVar9;
              *(undefined8 **)(param_1 + 0x20) = puVar17 + 1;
joined_r0x0071026b47e0:
              if (pvVar19 != (void *)0x0) {
                FUN_710392eb40((ulong)pvVar19);
              }
            }
            else {
LAB_71026b4664:
              *puVar17 = puVar10;
              *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
            }
          }
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < 8);
  }
  plVar8 = *(long **)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar8 != plVar1) {
    cVar6 = *(char *)(param_1 + 0x34);
    do {
      plVar11 = (long *)*plVar8;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))(plVar11,cVar6 == '\0');
      }
      plVar8 = plVar8 + 1;
    } while (plVar1 != plVar8);
  }
  return;
}

