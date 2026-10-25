// addr:      71018b68a0
// offset:    0x18b68a0
// name:      FUN_71018b68a0
// mangled:   
// signature: ulong __cdecl FUN_71018b68a0(undefined1[16] param_1, float param_2, float param_3, float param_4, undefined8 * param_5, undefined8 param_6, long * * * * * * * * * param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12)


ulong FUN_71018b68a0(undefined1 param_1 [16],float param_2,float param_3,float param_4,
                    undefined8 *param_5,undefined8 param_6,long *********param_7,byte ****param_8,
                    long ****param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long *********ppppppppplVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong *puVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar20 [16];
  undefined **local_78;
  long *local_70 [8];
  
  puVar8 = param_5;
  if (*(int *)((long)param_5 + 0x11c) == 0) {
    if ((*(uint *)(param_5 + 0x24) & 0xfffffffe) == 8) {
      lVar18 = param_5[0x2c];
      param_7 = (long *********)0x1;
      FUN_7101d029a0(lVar18,*(int *)(lVar18 + 0x1b0),1,param_8,param_9,param_10,param_11,param_12);
      lVar7 = *(long *)**(undefined8 **)(lVar18 + 0x188);
    }
    else {
      iVar10 = *(int *)(param_5 + 0xb9);
      if (0 < iVar10) {
        FUN_7103776910(&local_78,**(long **)(param_5[0x28] + 0x80) + 8,(long ****)"waiting",param_7,
                       param_8,param_9,param_10,param_11,param_12);
        plVar16 = local_70[0];
        lVar7 = *local_70[0];
        if (lVar7 != 0) {
          *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
        }
        local_78 = &PTR_FUN_710523d9a8;
        local_70[0] = (long *)0x0;
        if (plVar16 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar16);
        }
        lVar7 = param_5[0x28];
        if (*(char *)(lVar7 + 0xc3) == '\0') {
          FUN_71003a4ca0((uint *)&local_78,"replay_%s",&DAT_7104421055,param_7,param_8,param_9,
                         param_10,param_11,param_12);
          FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar7 + 0x80) + 0x10),(long)local_70);
          *(undefined1 *)(lVar7 + 0xc3) = 1;
        }
        iVar10 = *(int *)(param_5 + 0xb9);
      }
      FUN_7101d0ba20(param_5[0x29],iVar10,(undefined **)param_7,param_8,param_9,param_10,param_11,
                     param_12);
      lVar18 = param_5[0x2c];
      auVar4._4_4_ = extraout_var;
      auVar4._0_4_ = extraout_s0;
      auVar4._8_8_ = extraout_var_00;
      FUN_7101d02530(auVar4,param_2,param_3,param_4,lVar18,*(uint *)(param_5 + 0xb9),param_7,param_8
                     ,param_9,param_10,param_11,param_12);
      *(undefined1 *)(lVar18 + 0x70) = 0;
      lVar7 = *(long *)**(undefined8 **)(lVar18 + 0x188);
    }
    FUN_71037760f0(lVar7,1);
    if (0x12 < *(uint *)(lVar18 + 0x2a4)) goto LAB_71018b6d3c;
    *(undefined4 *)(lVar18 + 0x1f0 + (long)(int)*(uint *)(lVar18 + 0x2a4) * 4 + 0x68) = 1;
    puVar8 = (undefined8 *)FUN_7101cfff90((long *)(lVar18 + 0x1f0));
  }
  lVar7 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x98);
  if (*(int *)(lVar7 + 0x178) == 0) {
    uVar12 = *(uint *)(param_5 + 0xb9);
    if (((uVar12 < *(byte *)(lVar7 + 0x549)) &&
        (uVar12 < *(uint *)(*(long *)(DAT_7105329740 + 8) + 4))) &&
       (lVar7 = *(long *)(DAT_7105329740 + 8) + (ulong)uVar12 * 0x18,
       iVar10 = (int)((ulong)(*(long *)(lVar7 + 0x10) - *(long *)(lVar7 + 8)) >> 4), 0 < iVar10)) {
      uVar19 = 0;
      do {
        uVar6 = FUN_710239acc0(uVar12,(ulong)uVar19,param_7,param_8,param_9,param_10,param_11,
                               param_12);
        puVar8 = (undefined8 *)(ulong)uVar6;
        uVar19 = uVar19 + 1;
      } while ((int)(uVar19 & 0xffff) < iVar10);
    }
  }
  lVar7 = DAT_7105329740;
  if (*(char *)((long)param_5 + 0x5cc) == '\0') {
    lVar18 = *(long *)(DAT_7105329740 + 8) +
             (ulong)(*(int *)(*(long *)(DAT_7105329740 + 8) + 4) - 1) * 0x18;
    puVar8 = (undefined8 *)(lVar18 + 8);
    plVar16 = (long *)*puVar8;
    if (*(long **)(lVar18 + 0x10) == plVar16) {
LAB_71018b6d38:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar18 = *plVar16;
    plVar16 = (long *)plVar16[1];
    if (plVar16 != (long *)0x0) {
      plVar1 = plVar16 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar9 = (ulong)*(uint *)(lVar18 + 0x50);
    if (*(uint *)(lVar18 + 0x50) != 0xffffffff) {
      lVar18 = *(long *)(*(long *)(lVar7 + 8) + 0x80);
      uVar17 = (*(long *)(*(long *)(lVar7 + 8) + 0x88) - lVar18 >> 5) * 0xfc0fc0fc0fc0fc1;
      if (uVar17 < uVar9 || uVar17 - uVar9 == 0) goto LAB_71018b6d38;
      lVar18 = lVar18 + uVar9 * 0x820;
      FUN_710239df10(param_5 + 0x25,lVar18,param_7,param_8,param_9,param_10,param_11,param_12);
      FUN_7101d0fc10(param_5 + 0x25,lVar18,param_7,param_8,param_9,param_10,param_11,param_12);
      puVar8 = (undefined8 *)
               FUN_7101cfe670(param_5 + 0x56,lVar18,(long ****)param_7,param_8,param_9,param_10,
                              param_11,param_12);
      *(undefined1 *)((long)param_5 + 0x5cc) = 1;
    }
    if (plVar16 != (long *)0x0) {
      plVar1 = plVar16 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        puVar8 = (undefined8 *)std::__shared_weak_count::__release_weak();
      }
    }
  }
  lVar7 = param_5[0x2c];
  lVar18 = *(long *)(lVar7 + 0x1a0);
  if (lVar18 == 0) {
LAB_71018b6ab4:
    puVar14 = &DAT_7105325d20;
  }
  else {
    iVar10 = *(int *)(*(long *)(lVar7 + 400) + 0x254);
    lVar15 = lVar7 + 0x1a0;
    do {
      if (iVar10 <= *(int *)(lVar18 + 0x1c)) {
        lVar15 = lVar18;
      }
      lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x1c) < iVar10) * 8);
    } while (lVar18 != 0);
    if ((lVar15 == lVar7 + 0x1a0) || (iVar10 < *(int *)(lVar15 + 0x1c))) goto LAB_71018b6ab4;
    puVar14 = (ulong *)(lVar15 + 0x20);
  }
  uVar9 = *puVar14;
  auVar5._8_8_ = uVar9;
  auVar5._0_8_ = puVar8;
  auVar20._8_8_ = uVar9;
  auVar20._0_8_ = puVar8;
  ppppppppplVar11 = (long *********)(uVar9 >> 0x20);
  iVar10 = (int)(uVar9 >> 0x20);
  if ((-1 < iVar10 + (int)uVar9 * 100) &&
     ((*(int *)(param_5 + 0xb8) != (int)uVar9 ||
      (auVar20 = auVar5, *(int *)((long)param_5 + 0x5c4) != iVar10)))) {
    param_5[0xb8] = uVar9;
    auVar20 = FUN_7101d0a1c0(param_5[0x29],uVar9,(ulong)ppppppppplVar11,param_8,param_9,param_10,
                             param_11,param_12);
    lVar7 = param_5[0x2c];
  }
  uVar9 = auVar20._0_8_;
  if ((*(uint *)(lVar7 + 0x2a8) | 1) == 3) {
    if (*(int *)(lVar7 + 0x1e8) == 1) {
      if (0x11 < *(int *)((long)param_5 + 0x114)) {
        return uVar9;
      }
      uVar12 = *(int *)((long)param_5 + 0x114) + 1;
      *(uint *)((long)param_5 + 0x114) = uVar12;
      if (0x12 < uVar12) goto LAB_71018b6d3c;
      lVar7 = (long)param_5 + (long)(int)uVar12 * 4;
      uVar13 = 8;
    }
    else {
      if (*(int *)(lVar7 + 0x1e8) != 0) {
        return uVar9;
      }
      if (0x11 < *(int *)((long)param_5 + 0x114)) {
        return uVar9;
      }
      uVar12 = *(int *)((long)param_5 + 0x114) + 1;
      *(uint *)((long)param_5 + 0x114) = uVar12;
      if (0x12 < uVar12) {
LAB_71018b6d3c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = (long)param_5 + (long)(int)uVar12 * 4;
      uVar13 = 9;
    }
  }
  else {
    if (*(int *)(param_5[0x29] + 0x2a8) != 9) {
      return uVar9;
    }
    uVar9 = FUN_710323cb80(param_5[0x25],auVar20._8_8_,ppppppppplVar11,param_8,param_9,param_10,
                           param_11,param_12);
    if ((uVar9 & 1) == 0) {
      return uVar9;
    }
    if (*(int *)(param_5 + 0x71) != 5) {
      return uVar9;
    }
    lVar7 = param_5[0x28];
    uVar12 = *(int *)(param_5 + 0xb9) + 1;
    *(uint *)(param_5 + 0xb9) = uVar12;
    if (*(char *)(lVar7 + 0xc3) != '\0') {
      FUN_71003a4ca0((uint *)&local_78,"replay_%s",&DAT_710428ff7d,ppppppppplVar11,param_8,param_9,
                     param_10,param_11,param_12);
      uVar9 = FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar7 + 0x80) + 0x10),(long)local_70);
      *(undefined1 *)(lVar7 + 0xc3) = 0;
      uVar12 = *(uint *)(param_5 + 0xb9);
    }
    uVar19 = *(uint *)((long)param_5 + 0x114);
    if (uVar12 < *(uint *)(*(long *)(DAT_7105329740 + 8) + 4)) {
      if (0x12 < uVar19) goto LAB_71018b6d3c;
      lVar7 = (long)param_5 + (long)(int)uVar19 * 4;
      uVar13 = 2;
    }
    else {
      if (0x12 < uVar19) goto LAB_71018b6d3c;
      lVar7 = (long)param_5 + (long)(int)uVar19 * 4;
      uVar13 = 4;
    }
  }
  *(undefined4 *)(lVar7 + 200) = uVar13;
  return uVar9;
}

