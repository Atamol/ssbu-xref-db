// addr:      7101e65770
// offset:    0x1e65770
// name:      FUN_7101e65770
// mangled:   
// signature: undefined __cdecl FUN_7101e65770(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e65770(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 extraout_x1;
  undefined1 uVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined4 local_88 [2];
  undefined **local_80;
  long local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ushort local_44 [2];
  
  if (*(int *)(param_1 + 0x1d4) == 0) {
    FUN_7101e66690((byte *)(param_1 + 0x230),"cam_searchfield%d_dialog_cancel_confirm",0,param_4,
                   param_5,param_6,param_7,param_8);
    puVar14 = *(undefined8 **)(param_1 + 0x200);
    plVar3 = (long *)*puVar14;
    (**(code **)(*plVar3 + 0x60))(plVar3,1);
    plVar3 = (long *)*puVar14;
    (**(code **)(*plVar3 + 0x70))(plVar3,1);
    cVar1 = (char)(*(long **)(param_1 + 0x200))[1];
    if (*(char *)(param_1 + 0x218) == '\0') {
      bVar2 = cVar1 == '\x01';
    }
    else {
      bVar2 = cVar1 == '\0';
    }
    param_3 = (long ****)0x1;
    FUN_7103771a80(*(long **)(param_1 + 0x200),(uint)!bVar2,1);
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x1e0),1);
  }
  uVar8 = (ulong)*(byte *)(*(long **)(param_1 + 0x4d0) + 1);
  lVar11 = *(long *)(**(long **)(param_1 + 0x4d0) + 8);
  if (((uVar8 < 3 && *(char *)(lVar11 + 0x388) != '\0') &&
      (lVar11 = *(long *)(lVar11 + uVar8 * 8 + 0x78), lVar11 != 0)) &&
     (cVar1 = *(char *)(lVar11 + 0x80), cVar1 == '\x04' || cVar1 == '\x02')) {
    lVar11 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40) >> 3) < 4) {
      uVar8 = 0;
      if (*(char *)(lVar11 + 0x191) == '\0') goto LAB_7101e658d8;
LAB_7101e65948:
      local_70 = 0x87650000000000;
      local_60 = 0xffffffffffffffff;
      uStack_58 = 0;
      local_88[0] = 0;
      local_50 = 0;
    }
    else {
      uVar8 = *(ulong *)(*(long *)(lVar11 + 0x40) + 0x18);
      if (*(char *)(lVar11 + 0x191) != '\0') goto LAB_7101e65948;
LAB_7101e658d8:
      param_3 = (long ****)&DAT_00000004;
      uVar4 = FUN_7103313f20(lVar11,uVar8,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar4 & 1) == 0) goto LAB_7101e65948;
      FUN_71024076d0(local_88,uVar8);
      if (((local_78 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_70 == DAT_7106dd53ac)) {
        piVar9 = (int *)(local_78 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    local_80 = &PTR_FUN_7104f73d50;
    local_78 = 0;
    local_68 = 0;
    plVar3 = *(long **)(param_1 + 0x200);
LAB_7101e65980:
    uVar6 = 1;
LAB_7101e65984:
    *(undefined1 *)(param_1 + 0x4c0) = uVar6;
  }
  else {
    plVar3 = *(long **)(param_1 + 0x200);
    if (*(char *)(*plVar3 + 0x280) != '\0') goto LAB_7101e65980;
    uVar7 = *(uint *)(*plVar3 + 0x25c);
    if (uVar7 != 0xffffffff) {
      if (*(char *)(param_1 + 0x218) == '\0') {
        if (1 < uVar7) goto LAB_7101e65ccc;
        if ((char)plVar3[(long)(int)uVar7 * 9 + 1] == '\0') goto LAB_7101e65cc4;
        goto LAB_7101e65980;
      }
      if (1 < uVar7) goto LAB_7101e65ccc;
      if ((char)plVar3[(long)(int)uVar7 * 9 + 1] != '\x01') goto LAB_7101e65980;
LAB_7101e65cc4:
      uVar6 = 2;
      goto LAB_7101e65984;
    }
    if (*(char *)(param_1 + 0x4c0) == '\0') {
      return;
    }
  }
  (**(code **)(*(long *)*plVar3 + 0x60))((long *)*plVar3,0);
  (**(code **)(*(long *)*plVar3 + 0x70))((long *)*plVar3,0);
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x1e0),0);
  cVar1 = *(char *)(param_1 + 0x4c0);
  if (cVar1 == '\x01') {
    lVar11 = *(long *)(param_1 + 0x248);
    plVar5 = *(long **)(*(long *)(lVar11 + 0x18) + 0x10);
    plVar3 = (long *)(param_1 + 0x248);
    if (plVar5 != (long *)0x0) {
      param_3 = (long ****)0x0;
      param_4 = (byte ****)0x0;
      local_44[0] = 0;
      local_44[1] = 0;
      FUN_71037a2270(plVar5,local_44,0,0);
      lVar11 = *plVar3;
    }
    plVar5 = *(long **)(lVar11 + 0x40);
    if (plVar5 != (long *)0x0) {
      plVar12 = (long *)plVar5[1];
      plVar15 = (long *)plVar12[1];
      if (plVar15 == (long *)0x0) {
        *(undefined8 *)(lVar11 + 0x40) = 0;
      }
      else {
        if ((char)plVar12[2] != '\0') {
          plVar16 = *(long **)(*plVar12 + 0x80);
          plVar12 = (long *)(*plVar12 + 0x88);
          if (plVar16 != plVar12) {
            do {
              while( true ) {
                uVar8 = (**(code **)(*(long *)plVar16[0xd] + 0x148))();
                if (((uVar8 & 1) != 0) &&
                   (uVar8 = (**(code **)(*plVar15 + 0x120))(plVar15,plVar16[0xd]), (uVar8 & 1) != 0)
                   ) {
                  (**(code **)(*(long *)plVar16[0xd] + 0x178))();
                  (**(code **)(*(long *)plVar16[0xd] + 0x140))((long *)plVar16[0xd],0);
                }
                plVar10 = (long *)plVar16[1];
                if ((long *)plVar16[1] == (long *)0x0) break;
                do {
                  plVar16 = plVar10;
                  plVar10 = (long *)*plVar16;
                } while ((long *)*plVar16 != (long *)0x0);
LAB_7101e65ac0:
                if (plVar16 == plVar12) goto LAB_7101e65ad8;
              }
              plVar10 = plVar16 + 2;
              plVar13 = (long *)*plVar10;
              if ((long *)*plVar13 != plVar16) {
                do {
                  lVar11 = *plVar10;
                  plVar10 = (long *)(lVar11 + 0x10);
                  plVar16 = (long *)*plVar10;
                } while (*plVar16 != lVar11);
                goto LAB_7101e65ac0;
              }
              plVar16 = plVar13;
            } while (plVar13 != plVar12);
LAB_7101e65ad8:
            plVar15 = *(long **)(plVar5[1] + 8);
          }
        }
        (**(code **)(*plVar15 + 0x178))(plVar15);
        plVar5 = *(long **)(*plVar3 + 0x40);
        *(undefined8 *)(*plVar3 + 0x40) = 0;
        if (plVar5 == (long *)0x0) goto LAB_7101e65b18;
      }
      (**(code **)(*plVar5 + 8))(plVar5);
    }
LAB_7101e65b18:
    FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x248) + 8),0x7104443dfb);
    *(undefined1 *)(param_1 + 0x251) = 0;
    *(undefined1 *)(param_1 + 0x2c0) = 0;
    FUN_7101e94e90(plVar3,0,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0x2c1) = 4;
    FUN_7101e97ac0((long *)(param_1 + 0x2e8),extraout_x1,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    cVar1 = *(char *)(param_1 + 0x4c0);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c4) = 0;
  *(undefined8 *)(param_1 + 0x1bc) = 0;
  *(undefined8 *)(param_1 + 0x1b4) = 0;
  *(undefined8 *)(param_1 + 0x1ac) = 0;
  *(undefined8 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x19c) = 0;
  *(undefined8 *)(param_1 + 0x194) = 0;
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0x14;
  if (cVar1 == '\x02') {
    if (*(long *)(param_1 + 0x4c8) != 0) {
      FUN_710373b7f0(*(long *)(param_1 + 0x4c8));
      uVar8 = *(ulong *)(param_1 + 0x4c8);
      *(undefined8 *)(param_1 + 0x4c8) = 0;
      if (uVar8 != 0) {
        *(undefined ***)(uVar8 + 8) = &PTR_FUN_7104f73d50;
        if (((*(long *)(uVar8 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
           (*(int *)(uVar8 + 0x18) == DAT_7106dd53ac)) {
          piVar9 = (int *)(*(long *)(uVar8 + 0x10) + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar2) {
              *piVar9 = *piVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        *(undefined8 *)(uVar8 + 0x10) = 0;
        *(undefined1 *)(uVar8 + 0x20) = 0;
        FUN_710392eb40(uVar8);
      }
    }
    if (0x11 < *(int *)(param_1 + 0x1cc)) {
      return;
    }
    uVar7 = *(int *)(param_1 + 0x1cc) + 1;
    *(uint *)(param_1 + 0x1cc) = uVar7;
    if (uVar7 < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0x180) = 0xb;
      if (0x11 < *(int *)(param_1 + 0x1cc)) {
        return;
      }
      uVar7 = *(int *)(param_1 + 0x1cc) + 1;
      *(uint *)(param_1 + 0x1cc) = uVar7;
      if (uVar7 < 0x13) goto LAB_7101e65c88;
    }
LAB_7101e65ccc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar7 = 1;
  *(undefined4 *)(param_1 + 0x1cc) = 1;
LAB_7101e65c88:
  *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0x180) = 0xe;
  return;
}

