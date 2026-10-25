// addr:      7101dd8f40
// offset:    0x1dd8f40
// name:      FUN_7101dd8f40
// mangled:   
// signature: undefined __cdecl FUN_7101dd8f40(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dd8f40(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar6;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  int iVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined4 local_90 [4];
  long local_80;
  int local_78;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  undefined8 *local_38;
  
  iVar7 = *(int *)(param_1 + 0x80);
  if (iVar7 == 2) {
    FUN_7103376860(**(long **)(param_1 + 0x40),param_2,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    if ((**(long **)(param_1 + 0x40) == 0) || (*(long *)(**(long **)(param_1 + 0x40) + 8) == 0)) {
      *(undefined4 *)(param_1 + 0x80) = 3;
    }
    lVar8 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x50) + 0x600);
    param_2 = extraout_x1_00;
    if ((*(char *)(lVar8 + 0x4aa) != '\0') &&
       (((*(byte *)(lVar8 + 0x1ac) >> 1 & 1) != 0 || ((*(byte *)(lVar8 + 0x1a8) >> 1 & 1) != 0)))) {
      if (((*(long **)(param_1 + 0xb8) != (long *)0x0) &&
          ((((uVar4 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))(), (uVar4 & 1) == 0 &&
             (*(char *)(*DAT_710593b438 + 1) != '\0')) && (*(int *)(param_1 + 0xc4) == 0x876500)) &&
           ((DAT_7106dd53a8 == '\x01' && (*(int *)(param_1 + 0xc0) == DAT_7106dd53ac)))))) &&
         (((*(char *)(param_1 + 200) == '\0' &&
           ((*(long **)(param_1 + 0xb8) != (long *)0x0 &&
            (uVar4 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))(), (uVar4 & 1) == 0)))) &&
          (uVar4 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x68))(), (uVar4 & 1) == 0)))) {
        FUN_710373b540(param_1 + 0xa8,0);
      }
      uVar1 = *(uint *)(param_1 + 0xa0);
      if (uVar1 != 0xffffffff) {
        if (9 < uVar1) {
LAB_7101dd94f8:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar8 = *(long *)(*(long *)(DAT_71053398d8 + 8) + (long)(int)uVar1 * 8 + 8);
        if ((*(int *)(lVar8 + 0xa8) == 1) || (*(char *)(lVar8 + 0xdd) != '\0')) {
          *(undefined2 *)(lVar8 + 0xdd) = 0x100;
          if (0x12 < *(uint *)(lVar8 + 0xa4)) goto LAB_7101dd94f8;
          *(undefined4 *)(lVar8 + (long)(int)*(uint *)(lVar8 + 0xa4) * 4 + 0x58) = 2;
        }
      }
      if ((((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar4 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf57a523f5,
                                   (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8)
           , (uVar4 & 1) != 0)) && (FUN_71024076d0(local_90,0xf57a523f5), local_80 != 0)) &&
         ((DAT_7106dd53a8 == '\x01' && (local_78 == DAT_7106dd53ac)))) {
        piVar9 = (int *)(local_80 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined4 *)(param_1 + 0x80) = 3;
      return;
    }
  }
  else {
    if (iVar7 != 1) goto LAB_7101dd9458;
    uVar4 = FUN_710259d3a0(*(long *)(*DAT_7105329f98 + 0x20),0,(long *********)param_3,param_4,
                           param_5,param_6,param_7,param_8);
    param_2 = extraout_x1;
    if ((uVar4 & 1) != 0) {
      FUN_7103776910(&local_40,param_1 + 0x60,(long ****)"set_fxui_smn_shine",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      puVar11 = local_38;
      plVar5 = FUN_710377aae0((long *)*local_38);
      if (plVar5 != (long *)0x0) {
        *(undefined1 *)((long)plVar5 + 0x13a) = 1;
      }
      local_40 = &PTR_FUN_710523d9a8;
      local_38 = (undefined8 *)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar11);
      }
      FUN_7103776640(&local_40,param_1 + 0x60,(byte ****)"set_part_aw_01",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_rep_aura_00",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar4 = local_48;
      FUN_71037790a0(local_48,1,(long *********)param_3,param_4,param_5,param_6,param_7,param_8);
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      param_4 = (byte ****)0x1;
      param_5 = (long ****)0x1;
      FUN_71025ae6d0((long)&local_40,*(ushort *)(param_1 + 0x86),0,1,1,param_6,param_7,param_8);
      param_3 = (char *)0x1;
      FUN_71025af7f0((long)&local_40,*(ushort *)(param_1 + 0x86),(long *********)0x1,param_4,param_5
                     ,param_6,param_7,param_8);
      if ((*(long *)((long)local_38 + 8) != 0) &&
         (lVar8 = *(long *)(*(long *)((long)local_38 + 8) + 0x18), lVar8 != 0)) {
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
      }
      puVar11 = *(undefined8 **)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x80) = 2;
      if (puVar11 != (undefined8 *)0x0) {
        lVar8 = *(long *)(*(long *)(**(long **)(param_1 + 0x50) + 0x10) + 8);
        if ((lVar8 != 0) &&
           (plVar5 = (long *)FUN_71037964b0(lVar8,0x71042e76f0), plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x1a0))(0);
          puVar11 = *(undefined8 **)(param_1 + 0x40);
        }
        if ((long *)*puVar11 == (long *)0x0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)*puVar11;
        }
        FUN_71033743c0(lVar8,"layout_root",*(undefined8 *)(param_1 + 0x50));
        plVar5 = (long *)0x0;
        if ((long *)**(undefined8 **)(param_1 + 0x40) != (long *)0x0) {
          FUN_7103375650((long *)**(undefined8 **)(param_1 + 0x40),"spirit_count",&DAT_71042b2a84);
          plVar5 = (long *)**(undefined8 **)(param_1 + 0x40);
        }
        param_3 = &DAT_71043cdb7b;
        param_4 = (byte ****)0x1;
        FUN_7103375650(plVar5,"is_aw_ready",&DAT_71043cdb7b);
        plVar12 = *(long **)(param_1 + 0x40);
        plVar5 = (long *)*plVar12;
        lVar13 = *plVar5;
        *(undefined4 *)(plVar5 + 2) = 0;
        plVar5 = *(long **)(lVar13 + 0x10);
        *plVar5 = lVar13;
        *(undefined4 *)(plVar5 + 1) = 0x48;
        lVar8 = *(long *)(lVar13 + 0x10);
        *(long *)(lVar13 + 0x10) = lVar8 + 0x10;
        lVar10 = *(long *)(*(long *)(lVar13 + 0x18) + 200);
        *(long *)(lVar13 + 0x10) = lVar8;
        if (lVar10 == lVar13) {
          lVar8 = *(long *)(*(long *)(lVar13 + 0x18) + 0x40);
          if (*(uint *)(lVar8 + 0xc) < 2) {
            plVar5 = (long *)(*(long *)(lVar8 + 0x18) +
                             ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar8 + 0xb) & 0x3f))
                             & 2) * 0x20);
            do {
              if (((int)plVar5[3] == 0x13) && (plVar6 = plVar5, plVar5[2] == 2)) break;
              piVar9 = (int *)((long)plVar5 + 0x1c);
              plVar5 = plVar5 + (long)*piVar9 * 4;
              plVar6 = &DAT_7104862960;
            } while (*piVar9 != 0);
          }
          else {
            plVar6 = (long *)(*(long *)(lVar8 + 0x10) + 0x10);
          }
          param_3 = "init_param";
          FUN_71038f4d40(lVar13,plVar6,"init_param");
        }
        else {
          FUN_71038f4b20(lVar13,"init_param");
          FUN_71038f4fc0(lVar13,-2);
        }
        puVar11 = (undefined8 *)(*(long *)(lVar13 + 0x10) + -0x10);
        if ((puVar11 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar13 + 0x10) + -8) & 0xf) != 6))
        {
          *(undefined8 **)(lVar13 + 0x10) = puVar11;
        }
        else {
          FUN_7103377130(plVar12,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
        }
        FUN_7103376980((undefined8 *)**(undefined8 **)(param_1 + 0x40));
      }
      FUN_7103313da0(*(undefined8 **)(DAT_710532f8d0 + 8),0,(long ****)param_3,param_4,param_5,
                     param_6,param_7,param_8);
      puVar11 = local_38;
      local_40 = &PTR_FUN_710523d988;
      local_38 = (undefined8 *)0x0;
      param_2 = extraout_x1_01;
      if (puVar11 != (undefined8 *)0x0) {
        uVar4 = *(ulong *)((long)puVar11 + 0x18);
        *(undefined ***)((long)puVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar11 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40((ulong)puVar11);
        param_2 = extraout_x1_02;
      }
    }
  }
  iVar7 = *(int *)(param_1 + 0x80);
LAB_7101dd9458:
  if (iVar7 == 4) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 8);
    if ((lVar8 != 0) &&
       (plVar5 = (long *)FUN_71037964b0(lVar8,0x710428ff7d), param_2 = extraout_x1_03,
       plVar5 != (long *)0x0)) {
      auVar14 = (**(code **)(*plVar5 + 0x138))();
      param_2 = auVar14._8_8_;
      if ((auVar14._0_8_ & 1) == 0) {
        return;
      }
    }
    FUN_7103775fa0((long *)**(undefined8 **)(param_1 + 0x50),param_2,(long ****)param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103775fa0((long *)**(undefined8 **)(param_1 + 0x58),extraout_x1_04,(long ****)param_3,
                   param_4,param_5,param_6,param_7,param_8);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  return;
}

