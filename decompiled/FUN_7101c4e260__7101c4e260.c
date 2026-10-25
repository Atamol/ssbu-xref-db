// addr:      7101c4e260
// offset:    0x1c4e260
// name:      FUN_7101c4e260
// mangled:   
// signature: undefined __cdecl FUN_7101c4e260(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c4e260(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  char cVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar16;
  byte ****ppppbVar17;
  int iVar18;
  long *plVar19;
  int *piVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  float fVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long ***local_40;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0x17c) != 0) {
    lVar11 = *(long *)(param_1 + 0x478);
    if ((*(long *)(lVar11 + 0xa8) != 0) &&
       (plVar19 = *(long **)(*(long *)(*(long *)(lVar11 + 0xa8) + 8) + 8), plVar19 != (long *)0x0))
    {
      auVar26 = (**(code **)(*plVar19 + 0x138))(plVar19);
      param_2 = auVar26._8_8_;
      if ((auVar26._0_8_ & 1) == 0) {
        return;
      }
      lVar11 = *(long *)(param_1 + 0x478);
    }
    if (*(char *)(lVar11 + 0xb3) != '\0') {
      bVar1 = *(byte *)(lVar11 + 0xb2);
      if (bVar1 - 1 < 2) {
        FUN_7101c5d7b0(lVar11,0,param_3,param_4,param_5,param_6,param_7,param_8);
        return;
      }
      if (bVar1 == 3) {
        FUN_7101c5d7b0(lVar11,0,param_3,param_4,param_5,param_6,param_7,param_8);
        cVar15 = '\x03';
      }
      else {
        if (bVar1 != 4) {
          return;
        }
        FUN_7101c5d7b0(lVar11,0,param_3,param_4,param_5,param_6,param_7,param_8);
        if (*(long **)(param_1 + 0x1ad0) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar12 = (**(code **)(**(long **)(param_1 + 0x1ad0) + 0x30))();
        if ((uVar12 & 1) == 0) {
          return;
        }
        cVar15 = '\b';
      }
      FUN_7101c5d920(param_1,cVar15);
      return;
    }
    *(undefined2 *)(param_1 + 0x430) = 1;
    plVar19 = (long *)**(long **)(param_1 + 0x310);
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x328))(plVar19,0);
      param_2 = extraout_x1;
    }
    if ((*(int *)(param_1 + 0x400) != -1) || (*(int *)(param_1 + 0x404) != -1)) {
      FUN_710373b540(param_1 + 0x3d8,0);
      *(undefined4 *)(param_1 + 0x3d8) = 0;
      FUN_71039602c0(param_1 + 0x3e0);
      *(undefined ***)(param_1 + 0x3e0) = &PTR_FUN_7104f73d50;
      if ((*(long *)(param_1 + 1000) != 0) &&
         ((DAT_7106dd53a8 == '\x01' && (*(int *)(param_1 + 0x3f0) == DAT_7106dd53ac)))) {
        piVar20 = (int *)(*(long *)(param_1 + 1000) + 0x38);
        do {
          cVar15 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar9) {
            *piVar20 = *piVar20 + -1;
            cVar15 = ExclusiveMonitorsStatus();
          }
        } while (cVar15 != '\0');
      }
      *(undefined8 *)(param_1 + 0x3f0) = 0;
      *(undefined8 *)(param_1 + 0x3f8) = 0;
      *(undefined8 *)(param_1 + 0x3e0) = 0;
      *(undefined8 *)(param_1 + 1000) = 0;
      *(undefined8 *)(param_1 + 0x3f0) = 0x87650000000000;
      *(undefined ***)(param_1 + 0x3e0) = &PTR_FUN_7104f73d30;
      *(undefined8 *)(param_1 + 1000) = 0;
      *(undefined1 *)(param_1 + 0x3f8) = 0;
      *(undefined8 *)(param_1 + 0x400) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x408) = 0;
      *(undefined4 *)(param_1 + 0x414) = 0;
      param_2 = extraout_x1_00;
    }
    lVar11 = *(long *)(param_1 + 0x478);
    FUN_7103775fa0((long *)**(undefined8 **)(lVar11 + 0x80),param_2,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    *(undefined1 *)(lVar11 + 0x70) = 1;
LAB_7101c4e440:
    if (0 < *(int *)(param_1 + 0x174)) {
      *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + -1;
    }
    return;
  }
  uVar12 = (**(code **)(**(long **)(param_1 + 0x300) + 0x68))();
  if ((uVar12 & 1) == 0) goto LAB_7101c4e440;
  uVar12 = *(ulong *)(param_1 + 0x428);
  if ((uVar12 & 1) == 0) {
LAB_7101c4e4bc:
    *(ulong *)(param_1 + 0x428) = uVar12 & 0xfffffffffffffffe;
  }
  else {
    plVar22 = *(long **)(param_1 + 0x2f8);
    plVar19 = (long *)**(long **)(*plVar22 + 0x18);
    if (plVar19 == (long *)0x0) {
LAB_7101c4e4c8:
      uVar12 = *(ulong *)(param_1 + 0x428);
    }
    else {
      uVar12 = (**(code **)(*plVar19 + 0x2f8))();
      if ((uVar12 & 1) != 0) {
        uVar12 = *(ulong *)(param_1 + 0x428);
        goto LAB_7101c4e4bc;
      }
      plVar19 = (long *)**(long **)(*plVar22 + 0x18);
      if (plVar19 == (long *)0x0) goto LAB_7101c4e4c8;
      uVar13 = (**(code **)(*plVar19 + 0x3c0))();
      uVar12 = *(ulong *)(param_1 + 0x428);
      if ((uVar13 & 1) == 0) goto LAB_7101c4e4bc;
    }
    if (((uint)uVar12 >> 1 & 1) == 0) {
      *(ulong *)(param_1 + 0x428) = uVar12 & 0xfffffffffffffffe;
      if (((uint)uVar12 >> 2 & 1) == 0) goto LAB_7101c4e4ec;
    }
    else {
      *(ulong *)(param_1 + 0x428) = uVar12 & 0xfffffffffffffffe;
    }
    *(undefined1 *)(param_1 + 0x431) = 0;
  }
LAB_7101c4e4ec:
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x10),0);
  bVar1 = *(byte *)(param_1 + 0xafc);
  bVar2 = *(byte *)(param_1 + 0xce4);
  bVar3 = *(byte *)(param_1 + 0xecc);
  bVar4 = *(byte *)(param_1 + 0x10b4);
  bVar5 = *(byte *)(param_1 + 0x129c);
  bVar6 = *(byte *)(param_1 + 0x1484);
  bVar7 = *(byte *)(param_1 + 0x166c);
  bVar8 = *(byte *)(param_1 + 0x1854);
  FUN_7103776640(&local_80,*(long *)(param_1 + 0x478) + 0x88,(byte ****)"set_parts_header_btn",
                 param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_now",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  ppppbVar17 = (byte ****)
               (ulong)((uint)bVar2 + (uint)bVar1 + (uint)bVar3 + (uint)bVar4 + (uint)bVar5 +
                       (uint)bVar6 + (uint)bVar7 + (uint)bVar8 & 0xff);
  FUN_710377a280((long)&local_90,(byte *)"mnu_online_room_search_participants_n",1);
  uVar12 = local_88;
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  ppuVar10 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = (undefined **)0x0;
  if (ppuVar10 != (undefined **)0x0) {
    uVar12 = *(ulong *)((long)ppuVar10 + 0x18);
    *(undefined ***)((long)ppuVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppuVar10 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40((ulong)ppuVar10);
  }
  lVar11 = *(long *)(param_1 + 0x478);
  pppplVar16 = (long ****)0x11000;
  FUN_7103775dc0((long *)**(undefined8 **)(lVar11 + 0x80),1,(long ****)0x11000,ppppbVar17,param_5,
                 param_6,param_7,param_8);
  *(undefined1 *)(lVar11 + 0x70) = 0;
  lVar11 = *(long *)(param_1 + 0x478);
  *(undefined2 *)(lVar11 + 0xb2) = 0x100;
  FUN_71037760f0(*(long *)**(undefined8 **)(lVar11 + 0x80),0);
  if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
    pppplVar16 = (long ****)&DAT_00000004;
    uVar12 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19b197f89a,(long ****)&DAT_00000004,
                            ppppbVar17,param_5,param_6,param_7,param_8);
    if ((uVar12 & 1) == 0) goto LAB_7101c4e6a8;
    FUN_71024076d0((undefined4 *)&local_80,0x19b197f89a);
    if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_68 == DAT_7106dd53ac)) {
      piVar20 = (int *)(local_70 + 0x38);
      do {
        cVar15 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar9) {
          *piVar20 = *piVar20 + -1;
          cVar15 = ExclusiveMonitorsStatus();
        }
      } while (cVar15 != '\0');
    }
  }
  else {
LAB_7101c4e6a8:
    local_68 = 0x87650000000000;
    local_58 = 0xffffffffffffffff;
    uStack_50 = 0;
    local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
    local_48 = 0;
  }
  lVar23 = DAT_710532f8b8;
  local_78 = &PTR_FUN_7104f73d50;
  local_70 = 0;
  local_60 = 0;
  lVar21 = *(long *)(DAT_710532f8c0 + 8);
  fVar24 = (float)FUN_71033112b0(0x41900000,lVar21,0xf26edfd4c);
  lVar23 = *(long *)(lVar23 + 8);
  if (*(int *)(lVar23 + 100) < 1) {
    uVar25 = FUN_71033112b0(0x41200000,lVar21,0xed3893c2f);
    *(undefined4 *)(lVar23 + 0x50) = uVar25;
    if (fVar24 <= 1.0) {
      fVar24 = 1.0;
    }
    *(undefined4 *)(lVar23 + 0x54) = *(undefined4 *)(lVar23 + 0x58);
    *(undefined4 *)(lVar23 + 0x5c) = 0;
    *(float *)(lVar23 + 0x60) = 1.0 / fVar24;
    iVar18 = 1;
  }
  else {
    iVar18 = *(int *)(lVar23 + 100) + 1;
  }
  *(int *)(lVar23 + 100) = iVar18;
  FUN_71037780e0(&local_90,lVar11 + 0x88,(long ****)"pop_in",pppplVar16,ppppbVar17,param_5,param_6,
                 param_7,param_8);
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar16,ppppbVar17,param_5,param_6,param_7,param_8);
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ***)&DAT_00000010;
      pppplVar16 = &local_40;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar12 & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar16,ppppbVar17,param_5,param_6,param_7,param_8),
         puVar14 != (undefined8 *)0x0)) goto LAB_7101c4e7d0;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_7101c4e7d0:
  uVar12 = local_88;
  *puVar14 = &PTR_FUN_710523d9e8;
  puVar14[1] = 0;
  if (&local_90 != (undefined ***)puVar14) {
    local_88 = 0;
    puVar14[1] = uVar12;
  }
  plVar19 = *(long **)(lVar11 + 0xa8);
  *(undefined8 **)(lVar11 + 0xa8) = puVar14;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 8))(plVar19);
  }
  uVar12 = local_88;
  local_90 = &PTR_FUN_710523d9e8;
  local_88 = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  FUN_710377aee0(0x3f800000,*(long *)(lVar11 + 0xa8));
  return;
}

