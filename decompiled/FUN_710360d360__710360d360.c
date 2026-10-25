// addr:      710360d360
// offset:    0x360d360
// name:      FUN_710360d360
// mangled:   
// signature: ulong * __cdecl FUN_710360d360(ulong * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_710360d360(ulong *param_1,long param_2,long ****param_3,byte ****param_4,
                      long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  byte ***pppbVar2;
  byte ***pppbVar3;
  void *pvVar4;
  byte ***pppbVar5;
  char cVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  int iVar9;
  uint uVar10;
  ulong *puVar11;
  long *plVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  short sVar15;
  byte *pbVar16;
  byte **ppbVar17;
  ulong uVar18;
  long ***ppplVar19;
  ulong uVar20;
  long lVar21;
  byte ***pppbVar22;
  byte ***pppbVar23;
  byte **ppbVar24;
  long ****__n;
  ulong uVar25;
  byte **ppbVar26;
  long ***ppplVar27;
  long ****pppplVar28;
  short sVar29;
  ulong *puVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  long ***local_c8;
  long local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  long ****local_a8;
  byte **local_a0;
  long *local_98;
  long local_90;
  undefined **local_88;
  byte **local_80;
  long *local_78;
  long local_70;
  
  *param_1 = 0;
  puVar30 = param_1 + 3;
  *puVar30 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pppplVar28 = param_3;
  puVar11 = param_1;
  ppppbVar13 = param_4;
  pppplVar14 = param_5;
  if (((ulong)*param_5 & 1) == 0) {
    ppplVar27 = *param_5;
    ppplVar19 = param_5[2];
    param_1[4] = (ulong)param_5[1];
    param_1[5] = (ulong)ppplVar19;
    *puVar30 = (ulong)ppplVar27;
    goto LAB_710360d488;
  }
  __n = (long ****)param_5[1];
  if ((long ****)0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  ppplVar27 = param_5[2];
  if (__n < (long ****)0x17) {
    ppplVar19 = (long ***)((long)param_1 + 0x19);
    *(char *)puVar30 = (char)((int)__n << 1);
    if (__n != (long ****)0x0) goto LAB_710360d474;
  }
  else {
    pppplVar28 = (long ****)((ulong)(__n + 2) & 0xfffffffffffffff0);
    iVar9 = FUN_710392e1f0(&local_c8,0x10,pppplVar28,param_4,param_5,param_6,param_7,param_8);
    if (((iVar9 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
       (local_a8 = pppplVar28,
       uVar25 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_a8), (uVar25 & 1) != 0))
    {
      FUN_710392e1f0(&local_c8,0x10,pppplVar28,ppppbVar13,pppplVar14,param_6,param_7,param_8);
    }
    nu::VirtualAllocHook((ulong)pppplVar28,0x10,local_c8);
    param_1[3] = (ulong)pppplVar28 | 1;
    param_1[4] = (ulong)__n;
    param_1[5] = (ulong)local_c8;
    ppplVar19 = local_c8;
LAB_710360d474:
    pppplVar28 = __n;
    puVar11 = memcpy(ppplVar19,ppplVar27,(size_t)__n);
  }
  *(undefined1 *)((long)ppplVar19 + (long)__n) = 0;
LAB_710360d488:
  puVar30 = param_1 + 0x12;
  *puVar30 = 0;
  param_1[9] = (ulong)param_4;
  param_1[10] = (ulong)param_3;
  param_1[0xe] = 0;
  param_1[0xf] = 0xffffffffffffffff;
  param_1[0x13] = 0xffffffffffffffff;
  if (((long)param_3[1] - (long)*param_3 != 0) && (param_4[1] == *param_4)) {
    uVar10 = printf("RenderDrawBatch is not constructored.(%u)\n",
                    (uint)((ulong)((long)param_3[1] - (long)*param_3) >> 5));
    puVar11 = (ulong *)(ulong)uVar10;
  }
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x38);
  if (param_1 != (ulong *)(param_2 + 0x18)) {
    pppplVar28 = *(long *****)(param_2 + 0x20);
    pvVar4 = *(void **)(param_2 + 0x28);
    if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
      pvVar4 = (void *)(param_2 + 0x19);
      pppplVar28 = (long ****)(ulong)(*(byte *)(param_2 + 0x18) >> 1);
    }
    puVar11 = FUN_71002c51f0(param_1,pvVar4,(ulong)pppplVar28,ppppbVar13,pppplVar14,param_6,param_7,
                             param_8);
  }
  lVar21 = *(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60);
  lVar31 = lVar21 >> 1;
  uVar25 = (ulong)*(uint *)(param_2 + 0x30);
  *(short *)((long)param_1 + 0x3a) = (short)lVar31;
  uVar18 = ((long)param_4[1] - (long)*param_4 >> 3) * 0x34f72c234f72c235;
  if (uVar25 <= uVar18 && uVar18 - uVar25 != 0) {
    param_1[8] = (ulong)(*param_4 + uVar25 * 0x1d);
    while (DAT_71052b6ea0 == (undefined8 *)0x0) {
      do {
        if (DAT_71052b6ea8 != 0) {
          ClearExclusiveLocal();
          puVar11 = (ulong *)FUN_71002c4f60();
          DAT_71052b6ea0 = &DAT_71052b69f8;
          goto LAB_710360d5b0;
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(0x71052b6ea8,0x10);
        if (bVar7) {
          DAT_71052b6ea8 = 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      puVar11 = (ulong *)nn::os::YieldThread();
    }
LAB_710360d5b0:
    sVar29 = 0;
    if (lVar21 != 0) {
      puVar1 = DAT_71052b6ea0 + 0xf;
      pppbVar2 = *param_4;
      pppbVar5 = param_4[1];
      sVar29 = 0;
      do {
        uVar18 = uVar25;
        if (uVar25 < (ulong)(((long)pppbVar5 - (long)pppbVar2 >> 3) * 0x34f72c234f72c235)) {
          pppbVar3 = *param_4;
          uVar18 = ((long)param_4[1] - (long)pppbVar3 >> 3) * 0x34f72c234f72c235;
          if (uVar18 < uVar25 || uVar18 - uVar25 == 0) goto LAB_710360da54;
          ppbVar24 = pppbVar3[uVar25 * 0x1d + 1];
          pbVar16 = ppbVar24[0x71];
          pppbVar23 = pppbVar3 + uVar25 * 0x1d + 9;
          *pppbVar23 = (byte **)0x0;
          pppbVar3[uVar25 * 0x1d + 10] = (byte **)0x0;
          pppbVar3[uVar25 * 0x1d + 0xb] = (byte **)0x0;
          sVar15 = 2;
          if (pbVar16 != (byte *)0x0) {
            sVar15 = 3;
          }
          pbVar16 = ppbVar24[0x6c];
          if ((*(long **)(pbVar16 + 0x10) == (long *)0x0) ||
             (**(long **)(pbVar16 + 0x10) != *(long *)(pbVar16 + 0x18))) {
            ppbVar26 = (byte **)0x0;
            pppbVar3[uVar25 * 0x1d + 0x11] = (byte **)0x0;
LAB_710360d6b4:
            ppbVar17 = (byte **)0x0;
            pppbVar3[uVar25 * 0x1d + 0x12] = (byte **)0x0;
          }
          else {
            ppbVar26 = *(byte ***)(pbVar16 + 8);
            pppbVar3[uVar25 * 0x1d + 0x11] = ppbVar26;
            if (ppbVar26 == (byte **)0x0) goto LAB_710360d6b4;
            ppbVar17 = (byte **)ppbVar26[1];
            pppbVar3[uVar25 * 0x1d + 0x12] = ppbVar17;
            ppbVar17 = (byte **)*ppbVar17;
          }
          pppbVar3[uVar25 * 0x1d + 0x13] = ppbVar17;
          lVar21 = *(long *)(ppbVar24[0x6c] + 0x28);
          if ((*(long **)(lVar21 + 0x108) == (long *)0x0) ||
             (**(long **)(lVar21 + 0x108) != *(long *)(lVar21 + 0x110))) {
            pppbVar3[uVar25 * 0x1d + 0x16] = (byte **)0x0;
LAB_710360d718:
            ppbVar17 = (byte **)0x0;
            pppbVar3[uVar25 * 0x1d + 0x17] = (byte **)0x0;
          }
          else {
            ppbVar17 = *(byte ***)(lVar21 + 0x100);
            pppbVar3[uVar25 * 0x1d + 0x16] = ppbVar17;
            if (ppbVar17 == (byte **)0x0) goto LAB_710360d718;
            ppbVar17 = (byte **)ppbVar17[1];
            pppbVar3[uVar25 * 0x1d + 0x17] = ppbVar17;
            ppbVar17 = (byte **)*ppbVar17;
          }
          pppbVar3[uVar25 * 0x1d + 0x18] = ppbVar17;
          nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
          lVar21 = nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
          local_a0 = *(byte ***)(lVar21 + 0x58);
          if (local_a0 == (byte **)0x0) {
            local_98 = (undefined8 *)0x0;
            local_90 = 0;
          }
          else {
            local_98 = *(long **)((long)local_a0 + 8);
            local_90 = *local_98;
          }
          local_a8 = (long ****)&PTR_FUN_71052317b0;
          FUN_71038ac560((long)ppbVar26,(long)&local_a8,pppplVar28,ppppbVar13,pppplVar14,param_6,
                         param_7,param_8);
          pppbVar22 = pppbVar3 + uVar25 * 0x1d + 10;
          ppppbVar13 = (byte ****)(pppbVar3 + uVar25 * 0x1d + 8);
          if ((*pppbVar22 == (byte **)0x0) ||
             ((byte **)**pppbVar22 != pppbVar3[uVar25 * 0x1d + 0xb])) {
            plVar12 = FUN_71038adc30((long)ppbVar26,(byte *)param_5);
            if (((long *)plVar12[2] == (long *)0x0) ||
               (((*(long *)plVar12[2] != plVar12[3] ||
                 (ppbVar26 = (byte **)plVar12[1], ppbVar26 == (byte **)0x0)) ||
                (ppbVar26[1] == (byte *)0x0)))) {
              ppbVar26 = (byte **)0x0;
              *pppbVar23 = (byte **)0x0;
              pppbVar3[uVar25 * 0x1d + 10] = (byte **)0x0;
            }
            else {
              *pppbVar23 = ppbVar26;
              ppbVar26 = (byte **)ppbVar26[1];
              *pppbVar22 = ppbVar26;
              ppbVar26 = (byte **)*ppbVar26;
            }
            pppbVar3[uVar25 * 0x1d + 0xb] = ppbVar26;
          }
          local_70 = 0;
          local_78 = (long *)0x0;
          local_80 = (byte **)0x0;
          local_90 = 0;
          local_98 = (long *)0x0;
          local_a0 = (byte **)0x0;
          local_a8 = (long ****)&PTR_FUN_71052319d0;
          local_88 = &PTR_FUN_7105231a30;
          pbVar16 = ppbVar24[0x6c];
          local_c0 = 0;
          local_b8 = (undefined8 *)0x0;
          local_b0 = 0;
          local_c8 = (long ***)&PTR_FUN_71052319f0;
          if ((*(long **)(pbVar16 + 0x30) != (long *)0x0) &&
             (**(long **)(pbVar16 + 0x30) == *(long *)(pbVar16 + 0x38))) {
            local_c0 = *(long *)(pbVar16 + 0x28);
            if (local_c0 == 0) {
              local_b8 = (undefined8 *)0x0;
              local_b0 = 0;
            }
            else {
              local_b8 = *(undefined8 **)(local_c0 + 8);
              local_b0 = *local_b8;
            }
          }
          pppplVar28 = &local_c8;
          puVar11 = (ulong *)FUN_7103871960((long)puVar1,(long)&local_a8,(long)pppplVar28,
                                            (long)ppppbVar13,pppplVar14,param_6,param_7,param_8);
          if ((local_98 == (long *)0x0) || (*local_98 != local_90)) {
            *pppbVar23 = (byte **)0x0;
LAB_710360d908:
            ppbVar24 = (byte **)0x0;
            *pppbVar22 = (byte **)0x0;
          }
          else {
            *pppbVar23 = local_a0;
            if (local_a0 == (byte **)0x0) goto LAB_710360d908;
            ppbVar24 = (byte **)local_a0[1];
            *pppbVar22 = ppbVar24;
            ppbVar24 = (byte **)*ppbVar24;
          }
          pppbVar3[uVar25 * 0x1d + 0xb] = ppbVar24;
          uVar18 = (ulong)((int)uVar25 + 1);
          if ((local_78 == (long *)0x0) || (*local_78 != local_70)) {
            pppbVar3[uVar25 * 0x1d + 0xd] = (byte **)0x0;
LAB_710360d960:
            ppbVar24 = (byte **)0x0;
            pppbVar3[uVar25 * 0x1d + 0xe] = (byte **)0x0;
          }
          else {
            pppbVar3[uVar25 * 0x1d + 0xd] = local_80;
            if (local_80 == (byte **)0x0) goto LAB_710360d960;
            ppbVar24 = (byte **)local_80[1];
            pppbVar3[uVar25 * 0x1d + 0xe] = ppbVar24;
            ppbVar24 = (byte **)*ppbVar24;
          }
          pppbVar3[uVar25 * 0x1d + 0xf] = ppbVar24;
          sVar29 = sVar29 + sVar15 + 1;
        }
        lVar31 = lVar31 + -1;
        uVar25 = uVar18;
      } while (lVar31 != 0);
    }
    *(short *)(param_1 + 7) = sVar29;
    param_1[0x11] = *(ulong *)(param_2 + 0x48);
    param_1[0x10] = *(ulong *)(param_2 + 0x40);
    param_1[0x13] = *(ulong *)(param_2 + 0x58);
    *puVar30 = *(ulong *)(param_2 + 0x50);
    uVar18 = param_1[0x11];
    uVar25 = param_1[0x10];
    param_1[0x11] = CONCAT44(0x3f800000,(float)uVar18);
    param_1[0x10] = uVar25;
    if ((int)*(uint *)((long)param_1 + 0x3c) < 0) {
      param_1[6] = *(ulong *)(param_1[8] + 8);
      fVar34 = (float)_DAT_7107521008;
      fVar35 = (float)((ulong)_DAT_7107521008 >> 0x20);
      fVar32 = (float)_ConstantZero;
      fVar33 = (float)((ulong)_ConstantZero >> 0x20);
    }
    else {
      uVar20 = *(ulong *)(param_1[8] + (ulong)*(uint *)((long)param_1 + 0x3c) * 0xe8 + 8);
      param_1[6] = uVar20;
      fVar32 = (float)uVar25 - (float)*(undefined8 *)(uVar20 + 0x20);
      fVar33 = (float)(uVar25 >> 0x20) - (float)((ulong)*(undefined8 *)(uVar20 + 0x20) >> 0x20);
      fVar34 = (float)uVar18 - (float)*(undefined8 *)(uVar20 + 0x28);
      fVar35 = 1.0 - (float)((ulong)*(undefined8 *)(uVar20 + 0x28) >> 0x20);
    }
    auVar36._4_4_ = fVar33;
    auVar36._0_4_ = fVar32;
    auVar36._8_4_ = fVar34;
    auVar36._12_4_ = fVar35;
    auVar8._4_4_ = fVar33;
    auVar8._0_4_ = fVar32;
    auVar8._8_4_ = fVar34;
    auVar8._12_4_ = fVar35;
    auVar36 = NEON_ext(auVar36,auVar8,8,1);
    param_1[0x15] = (ulong)auVar36._0_4_;
    param_1[0x14] = CONCAT44(fVar33,fVar32);
    param_1[0xc] = param_1[0x10];
    param_1[0xd] = param_1[0x11];
    param_1[0xf] = param_1[0x13];
    param_1[0xe] = *puVar30;
    return puVar11;
  }
LAB_710360da54:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

