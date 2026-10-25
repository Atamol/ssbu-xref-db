// addr:      71018b6ed0
// offset:    0x18b6ed0
// name:      FUN_71018b6ed0
// mangled:   
// signature: undefined __cdecl FUN_71018b6ed0(undefined1[16] param_1, float param_2, float param_3, float param_4, long param_5, undefined8 param_6, long * * * * param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12)


void FUN_71018b6ed0(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                   undefined8 param_6,long ****param_7,byte ****param_8,long ****param_9,
                   undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  uint uVar1;
  long *plVar2;
  float *pfVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar8;
  int iVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  ulong *puVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined **local_88;
  long *local_80 [8];
  
  if (*(int *)(param_5 + 0x11c) == 0) {
    if ((*(uint *)(param_5 + 0x120) & 0xfffffffe) == 8) {
      lVar12 = *(long *)(param_5 + 0x160);
      FUN_7101d029a0(lVar12,*(int *)(lVar12 + 0x1b0),1,param_8,param_9,param_10,param_11,param_12);
      FUN_71037760f0(*(long *)**(undefined8 **)(lVar12 + 0x188),1);
      if (0x12 < *(uint *)(lVar12 + 0x2a4)) goto LAB_71018b7354;
      *(undefined4 *)(lVar12 + 0x1f0 + (long)(int)*(uint *)(lVar12 + 0x2a4) * 4 + 0x68) = 1;
      FUN_7101cfff90((long *)(lVar12 + 0x1f0));
    }
    else {
      lVar12 = *(long *)(param_5 + 0x158);
      FUN_7103775fa0((long *)**(undefined8 **)(lVar12 + 0x150),param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12);
      FUN_7103775fa0((long *)**(undefined8 **)(lVar12 + 0x148),extraout_x1,param_7,param_8,param_9,
                     param_10,param_11,param_12);
      FUN_7103775fa0((long *)**(undefined8 **)(lVar12 + 0x158),extraout_x1_00,param_7,param_8,
                     param_9,param_10,param_11,param_12);
      if ((DAT_7105339168 != 0) && (pfVar3 = (float *)(DAT_7105339168 + 0x72b4), *pfVar3 != 0.0)) {
        *(undefined1 *)(DAT_7105339168 + 0x72b9) = 1;
        *pfVar3 = 0.0;
      }
      lVar12 = *(long *)(param_5 + 0x140);
      *(undefined1 *)(lVar12 + 0x70) = 0;
      FUN_7103775dc0((long *)**(undefined8 **)(lVar12 + 0x80),1,(long ****)0x10004,param_8,param_9,
                     param_10,param_11,param_12);
      lVar12 = *(long *)(param_5 + 0x148);
      FUN_7103775dc0((long *)**(undefined8 **)(lVar12 + 0x90),0,(long ****)0x1003,param_8,param_9,
                     param_10,param_11,param_12);
      FUN_7103775dc0((long *)**(undefined8 **)(lVar12 + 0x98),1,(long ****)&DAT_00010001,param_8,
                     param_9,param_10,param_11,param_12);
      ppuVar10 = (undefined **)0x1004;
      FUN_7103775dc0((long *)**(undefined8 **)(lVar12 + 0xa0),0,(long ****)0x1004,param_8,param_9,
                     param_10,param_11,param_12);
      lVar12 = *(long *)(param_5 + 0x140);
      *(undefined1 *)(lVar12 + 0xc1) = 1;
      FUN_7103776910(&local_88,**(long **)(lVar12 + 0x80) + 8,(long ****)"set_txt_tnmt_progress",
                     ppuVar10,param_8,param_9,param_10,param_11,param_12);
      FUN_710377a120((long)&local_88,"mel_tournament_chart_final_result",ppuVar10,param_8,param_9,
                     param_10,param_11,param_12);
      plVar15 = local_80[0];
      local_88 = &PTR_FUN_710523d9a8;
      local_80[0] = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar15);
      }
      FUN_7103776910(&local_88,**(long **)(*(long *)(param_5 + 0x140) + 0x80) + 8,
                     (long ****)"waiting",ppuVar10,param_8,param_9,param_10,param_11,param_12);
      plVar15 = local_80[0];
      lVar12 = *local_80[0];
      if (lVar12 != 0) {
        *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
      }
      local_88 = &PTR_FUN_710523d9a8;
      local_80[0] = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar15);
      }
      lVar12 = *(long *)(param_5 + 0x140);
      if (*(char *)(lVar12 + 0xc3) == '\0') {
        FUN_71003a4ca0((uint *)&local_88,"replay_%s",&DAT_7104421055,ppuVar10,param_8,param_9,
                       param_10,param_11,param_12);
        FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar12 + 0x80) + 0x10),(long)local_80);
        *(undefined1 *)(lVar12 + 0xc3) = 1;
      }
      FUN_7101d0ba20(*(long *)(param_5 + 0x148),*(int *)(*(long *)(DAT_7105329740 + 8) + 4) + -1,
                     ppuVar10,param_8,param_9,param_10,param_11,param_12);
      FUN_7103775dc0((long *)**(undefined8 **)(*(long *)(param_5 + 0x150) + 0x80),1,
                     (long ****)0x10000,param_8,param_9,param_10,param_11,param_12);
      lVar12 = DAT_7105329740;
      lVar17 = *(long *)(DAT_7105329740 + 8);
      lVar11 = lVar17 + (ulong)(*(int *)(lVar17 + 4) - 1) * 0x18;
      plVar15 = *(long **)(lVar11 + 8);
      if (*(long **)(lVar11 + 0x10) == plVar15) {
LAB_71018b735c:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar11 = *plVar15;
      plVar15 = (long *)plVar15[1];
      if (plVar15 != (long *)0x0) {
        plVar2 = plVar15 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar17 = *(long *)(lVar12 + 8);
      }
      uVar8 = (ulong)*(uint *)(lVar11 + 0x50);
      uVar16 = (*(long *)(lVar17 + 0x88) - *(long *)(lVar17 + 0x80) >> 5) * 0xfc0fc0fc0fc0fc1;
      if (uVar16 < uVar8 || uVar16 - uVar8 == 0) goto LAB_71018b735c;
      lVar12 = *(long *)(lVar17 + 0x80) + uVar8 * 0x820;
      auVar6._4_4_ = extraout_var;
      auVar6._0_4_ = extraout_s0;
      auVar6._8_8_ = extraout_var_01;
      FUN_7101d0fd10(auVar6,param_2,param_3,*(long *)(param_5 + 0x150),(long *)(param_5 + 0x128),
                     lVar12,param_8,param_9,param_10,param_11,param_12);
      lVar17 = *(long *)(param_5 + 0x160);
      auVar7._4_4_ = extraout_var_00;
      auVar7._0_4_ = extraout_s0_00;
      auVar7._8_8_ = extraout_var_02;
      FUN_7101d02530(auVar7,param_2,param_3,param_4,lVar17,
                     *(uint *)(*(long *)(DAT_7105329740 + 8) + 4),lVar12,param_8,param_9,param_10,
                     param_11,param_12);
      *(undefined1 *)(lVar17 + 0x70) = 0;
      FUN_71037760f0(*(long *)**(undefined8 **)(lVar17 + 0x188),1);
      if (0x12 < *(uint *)(lVar17 + 0x2a4)) goto LAB_71018b7354;
      *(undefined4 *)(lVar17 + 0x1f0 + (long)(int)*(uint *)(lVar17 + 0x2a4) * 4 + 0x68) = 1;
      FUN_7101cfff90((long *)(lVar17 + 0x1f0));
      if (plVar15 != (long *)0x0) {
        plVar2 = plVar15 + 1;
        do {
          lVar12 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  lVar12 = *(long *)(param_5 + 0x160);
  lVar17 = *(long *)(lVar12 + 0x1a0);
  if (lVar17 == 0) {
LAB_71018b7280:
    puVar14 = &DAT_7105325d20;
  }
  else {
    iVar9 = *(int *)(*(long *)(lVar12 + 400) + 0x254);
    lVar11 = lVar12 + 0x1a0;
    do {
      if (iVar9 <= *(int *)(lVar17 + 0x1c)) {
        lVar11 = lVar17;
      }
      lVar17 = *(long *)(lVar17 + (ulong)(*(int *)(lVar17 + 0x1c) < iVar9) * 8);
    } while (lVar17 != 0);
    if ((lVar11 == lVar12 + 0x1a0) || (iVar9 < *(int *)(lVar11 + 0x1c))) goto LAB_71018b7280;
    puVar14 = (ulong *)(lVar11 + 0x20);
  }
  uVar8 = *puVar14;
  iVar9 = (int)(uVar8 >> 0x20);
  if ((-1 < iVar9 + (int)uVar8 * 100) &&
     ((*(int *)(param_5 + 0x5c0) != (int)uVar8 || (*(int *)(param_5 + 0x5c4) != iVar9)))) {
    *(ulong *)(param_5 + 0x5c0) = uVar8;
    FUN_7101d0a1c0(*(long *)(param_5 + 0x148),uVar8,uVar8 >> 0x20,param_8,param_9,param_10,param_11,
                   param_12);
    lVar12 = *(long *)(param_5 + 0x160);
  }
  if ((*(uint *)(lVar12 + 0x2a8) | 1) == 3) {
    if (*(int *)(lVar12 + 0x1e8) == 1) {
      if (0x11 < *(int *)(param_5 + 0x114)) {
        return;
      }
      uVar1 = *(int *)(param_5 + 0x114) + 1;
      *(uint *)(param_5 + 0x114) = uVar1;
      if (0x12 < uVar1) goto LAB_71018b7354;
      uVar13 = 8;
    }
    else {
      if (*(int *)(lVar12 + 0x1e8) != 0) {
        return;
      }
      if (0x11 < *(int *)(param_5 + 0x114)) {
        return;
      }
      uVar1 = *(int *)(param_5 + 0x114) + 1;
      *(uint *)(param_5 + 0x114) = uVar1;
      if (0x12 < uVar1) {
LAB_71018b7354:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar13 = 9;
    }
    *(undefined4 *)(param_5 + (long)(int)uVar1 * 4 + 200) = uVar13;
  }
  return;
}

