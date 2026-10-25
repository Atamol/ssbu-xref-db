// addr:      71018d27f0
// offset:    0x18d27f0
// name:      FUN_71018d27f0
// mangled:   
// signature: undefined __cdecl FUN_71018d27f0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018d27f0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined **ppuVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  undefined8 uVar19;
  long lVar20;
  uint uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  undefined8 local_21f0;
  undefined8 local_21e8;
  long local_21e0;
  undefined8 local_21d8;
  undefined1 local_21d0;
  undefined8 local_21c8;
  undefined8 uStack_21c0;
  undefined8 local_21b8;
  
  puVar11 = &local_21f0;
  if (*(int *)(param_1 + 300) == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x158) + 0x70) = 0;
  }
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x158) + 0x80) + 0x229) != '\0') {
    lVar24 = *(long *)(*(long *)(param_1 + 0x140) + 0x80);
    if (*(char *)(lVar24 + 0xc9) == '\0') {
      iVar10 = 4;
    }
    else {
      iVar10 = 0;
    }
    param_3 = (undefined **)0x0;
    FUN_7103771be0((long *)(lVar24 + 0x2260),iVar10,0);
    *(undefined4 *)(lVar24 + 0x2270) = *(undefined4 *)(*(long *)(lVar24 + 0x2260) + 0x25c);
  }
  lVar24 = *(long *)(*(long *)(param_1 + 0x140) + 0x80);
  uVar26 = 0x811c9dc5;
  if (*(int *)(lVar24 + 0x2270) == 0) {
    if (*(char *)(lVar24 + 0xc9) == '\0') {
      iVar10 = 4;
    }
    else {
      iVar10 = 0;
    }
    FUN_7103771be0((long *)(lVar24 + 0x2260),iVar10,0);
    *(undefined4 *)(lVar24 + 0x2270) = *(undefined4 *)(*(long *)(lVar24 + 0x2260) + 0x25c);
    lVar24 = *(long *)(*(long *)(param_1 + 0x150) + 0x80);
    *(undefined2 *)(lVar24 + 0x202) = 0;
    (**(code **)(**(long **)(lVar24 + 0x180) + 0x70))(*(long **)(lVar24 + 0x180),1);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar24 + 0x160) + 0x10),0x710425f767);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar24 + 0x178) + 0x10),0x710425f767);
    local_21e8 = (undefined **)0x746f6f665f756e6d;
    local_21e0 = 0x657661735f7265;
    uVar15 = 0x6d;
    lVar24 = 9;
    uVar16 = uVar26;
    do {
      uVar16 = uVar16 * 0x89 ^ uVar15;
      uVar15 = (uint)*(byte *)((long)&local_21f0 + lVar24);
      lVar24 = lVar24 + 1;
    } while (uVar15 != 0);
    local_21f0 = (undefined **)CONCAT44(0xf,uVar16);
    FUN_7101af6200(*(long *)(*(long *)(param_1 + 0x140) + 0x80),10,(uint *)&local_21f0);
    lVar24 = *(long *)(*(long *)(param_1 + 0x140) + 0x80);
    if (*(int *)(lVar24 + 0x1204) == 1) {
      if (*(char *)(lVar24 + 0x2259) != '\x01') goto LAB_71018d2a48;
    }
    else {
      *(undefined4 *)(lVar24 + 0x1204) = 1;
LAB_71018d2a48:
      if ((*(char *)(lVar24 + 0x2257) != '\0') && (*(char *)(lVar24 + 0x2259) != '\x01')) {
        *(char *)(lVar24 + 0x2259) = '\x01';
        FUN_71037780e0(&local_21f0,**(long **)(lVar24 + 0xb8) + 8,(long ****)"footer_help_in",
                       puVar11,param_4,param_5,param_6,param_7,param_8);
        FUN_710377b140((long)&local_21f0);
        ppuVar4 = local_21e8;
        local_21f0 = &PTR_FUN_710523d9e8;
        local_21e8 = (undefined **)0x0;
        if (ppuVar4 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar4);
        }
      }
      FUN_7101af4610(lVar24);
      lVar24 = *(long *)(*(long *)(param_1 + 0x140) + 0x80);
    }
    if (*(char *)(lVar24 + 200) == '\x01') {
      if (*(char *)(lVar24 + 0x2253) != '\x01') goto LAB_71018d2ae4;
    }
    else {
      *(undefined1 *)(lVar24 + 200) = 1;
LAB_71018d2ae4:
      if (*(char *)(lVar24 + 0x2250) != '\0') {
        FUN_7101af4c80(lVar24,1,(ulong)*(byte *)(lVar24 + 0x227c),param_4,param_5,param_6,param_7,
                       param_8);
        if (*(char *)(lVar24 + 200) == '\0') {
          bVar6 = false;
        }
        else {
          bVar6 = *(char *)(lVar24 + 0xc9) != '\0';
        }
        lVar8 = *(long *)(*(long *)(lVar24 + 0x2260) + 0x1b8);
        if (lVar8 != 0) {
          lVar24 = *(long *)(lVar24 + 0x2260) + 0x1b8;
          lVar12 = lVar24;
          do {
            bVar5 = *(int *)(lVar8 + 0x20) < 0;
            if (!bVar5) {
              lVar12 = lVar8;
            }
            lVar8 = *(long *)(lVar8 + (ulong)bVar5 * 8);
          } while (lVar8 != 0);
          if (((lVar12 != lVar24) && (*(int *)(lVar12 + 0x20) < 1)) &&
             (plVar7 = *(long **)(lVar12 + 0x28), plVar7 != (long *)0x0)) {
            (**(code **)(*plVar7 + 0x1f8))(plVar7,bVar6);
            (**(code **)(*plVar7 + 0x388))(plVar7,bVar6 ^ 1,0);
          }
        }
      }
    }
    lVar24 = *(long *)(param_1 + 0x140);
    FUN_7101af5880(&local_21f0,(undefined8 *)(*(long *)(lVar24 + 0x80) + 0xc0));
    param_3 = (undefined **)0x1;
    param_4 = (byte ****)0x1;
    FUN_7101af8570(lVar24,(int *)&local_21f0,1,1,param_5,param_6,param_7,param_8);
    lVar24 = *(long *)(*(long *)(param_1 + 0x140) + 0x80);
    (**(code **)(**(long **)(lVar24 + 0x2268) + 0x70))(*(long **)(lVar24 + 0x2268),0);
    if (*(char *)(lVar24 + 0x11b4) == '\0') {
      param_3 = (undefined **)0x0;
      FUN_7103771a80((long *)(lVar24 + 0x2268),3,0);
    }
    else {
      lVar24 = *(long *)(lVar24 + 0x2268);
      if (*(int *)(lVar24 + 0x254) == 3) {
        FUN_710376b960(lVar24);
      }
    }
  }
  else {
    lVar24 = *(long *)(param_1 + 0x158);
    if (*(char *)(*(long *)(lVar24 + 0x80) + 0x22a) != '\0') {
      plVar7 = *(long **)(*(long *)(lVar24 + 0x80) + 0x1f8);
      (**(code **)(*plVar7 + 0x70))(plVar7,0);
      plVar7 = *(long **)(*(long *)(lVar24 + 0x80) + 0x200);
      (**(code **)(*plVar7 + 0x70))(plVar7,0);
      plVar7 = *(long **)(*(long *)(lVar24 + 0x80) + 0x208);
      (**(code **)(*plVar7 + 0x70))(plVar7,0);
      plVar7 = *(long **)(*(long *)(lVar24 + 0x80) + 0x1f0);
      (**(code **)(*plVar7 + 0x70))(plVar7,0);
      *(undefined1 *)(lVar24 + 0x70) = 1;
      if (0x12 < *(uint *)(param_1 + 0x124)) goto LAB_71018d3220;
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x124) * 4 + 0xd8) = 5;
    }
  }
  lVar24 = *(long *)(*(long *)(param_1 + 0x140) + 0x80);
  uVar16 = *(int *)(*(long *)(*(long *)(param_1 + 0x158) + 0x80) + 0x1d8) - 7;
  if ((*(char *)(lVar24 + 0x11ac) != '\0') == uVar16 < 2) {
    bVar6 = 1 < uVar16;
    *(char *)(lVar24 + 0x11ac) = bVar6;
    if (*(int *)(lVar24 + 0x11b0) < 6) {
      if (*(int *)(lVar24 + 0x11b0) - 1U < 5) {
        lVar8 = *(long *)(*(long *)(lVar24 + 0x2268) + 0x1b8);
        if (lVar8 != 0) {
          lVar12 = *(long *)(lVar24 + 0x2268) + 0x1b8;
          lVar20 = lVar12;
          lVar23 = lVar8;
          do {
            if (0 < *(int *)(lVar23 + 0x20)) {
              lVar20 = lVar23;
            }
            lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 1) * 8);
          } while (lVar23 != 0);
          if (((lVar20 != lVar12) && (*(int *)(lVar20 + 0x20) < 2)) &&
             (plVar7 = *(long **)(lVar20 + 0x28), plVar7 != (long *)0x0)) {
            (**(code **)(*plVar7 + 0x1f8))(plVar7,bVar6);
            param_3 = (undefined **)0x0;
            (**(code **)(*plVar7 + 0x388))(plVar7,uVar16 < 2);
            lVar12 = *(long *)(lVar24 + 0x2268) + 0x1b8;
            lVar8 = *(long *)(*(long *)(lVar24 + 0x2268) + 0x1b8);
          }
          lVar24 = lVar12;
          if (lVar8 != 0) {
            do {
              if (0 < *(int *)(lVar8 + 0x20)) {
                lVar24 = lVar8;
              }
              lVar8 = *(long *)(lVar8 + (ulong)(*(int *)(lVar8 + 0x20) < 1) * 8);
            } while (lVar8 != 0);
            if ((lVar24 != lVar12) && (*(int *)(lVar24 + 0x20) < 2)) goto LAB_71018d2e94;
          }
        }
      }
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar24 + 0x2268) + 0x1b8);
      if (lVar8 != 0) {
        lVar12 = *(long *)(lVar24 + 0x2268) + 0x1b8;
        lVar20 = lVar12;
        lVar23 = lVar8;
        do {
          if (1 < *(int *)(lVar23 + 0x20)) {
            lVar20 = lVar23;
          }
          lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 2) * 8);
        } while (lVar23 != 0);
        if (((lVar20 != lVar12) && (*(int *)(lVar20 + 0x20) < 3)) &&
           (plVar7 = *(long **)(lVar20 + 0x28), plVar7 != (long *)0x0)) {
          (**(code **)(*plVar7 + 0x1f8))(plVar7,bVar6);
          param_3 = (undefined **)0x0;
          (**(code **)(*plVar7 + 0x388))(plVar7,uVar16 < 2);
          lVar12 = *(long *)(lVar24 + 0x2268) + 0x1b8;
          lVar8 = *(long *)(*(long *)(lVar24 + 0x2268) + 0x1b8);
        }
        lVar24 = lVar12;
        if (lVar8 != 0) {
          do {
            if (1 < *(int *)(lVar8 + 0x20)) {
              lVar24 = lVar8;
            }
            lVar8 = *(long *)(lVar8 + (ulong)(*(int *)(lVar8 + 0x20) < 2) * 8);
          } while (lVar8 != 0);
          if ((lVar24 != lVar12) && (*(int *)(lVar24 + 0x20) < 3)) {
LAB_71018d2e94:
            plVar7 = *(long **)(lVar24 + 0x28);
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x208))(plVar7,bVar6);
              param_3 = (undefined **)0x0;
              (**(code **)(*plVar7 + 0x388))(plVar7,uVar16 < 2);
            }
          }
        }
      }
    }
  }
  lVar24 = *(long *)(param_1 + 0x140);
  if (*(int *)(*(long *)(lVar24 + 0x80) + 0x2270) != 0) goto LAB_71018d30e4;
  lVar24 = *(long *)(*(long *)(param_1 + 0x158) + 0x80);
  bVar1 = *(byte *)(lVar24 + 0x2d9);
  uVar19 = *(undefined8 *)(lVar24 + 0x2d1);
  uVar16 = (uint)((ulong)uVar19 >> 0x20);
  uVar22 = *(undefined8 *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x78) + 0x5e054);
  uVar21 = (uint)uVar22;
  uVar18 = (uint)uVar19;
  uVar15 = (uint)((ulong)uVar22 >> 0x20);
  bVar3 = (byte)((ulong)uVar19 >> 0x38);
  *(bool *)(*(long *)(*(long *)(param_1 + 0x150) + 0x80) + 0x20c) =
       ((((((((*(byte *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x78) + 0x5e05c) & 1) != bVar1
             || (uVar21 & 0xff) != (uVar18 & 0xff)) ||
            (uVar21 >> 8 & 0xff) != ((uint)((ulong)uVar19 >> 8) & 0xff)) ||
           (uVar21 >> 0x10 & 0xff) != ((uint)((ulong)uVar19 >> 0x10) & 0xff)) ||
          ((uint)((ulong)uVar22 >> 0x18) & 0xff) != uVar18 >> 0x18) ||
         (uVar15 & 0xff) != (uVar16 & 0xff)) || (uVar16 >> 8 & 0xff) != (uVar15 >> 8 & 0xff)) ||
       ((ushort)((ulong)uVar19 >> 0x30) & 0xff) != ((ushort)((ulong)uVar22 >> 0x30) & 0xff)) ||
       bVar3 != (byte)((ulong)uVar22 >> 0x38);
  *(byte *)(param_1 + 0x178) = bVar1;
  *(uint *)(param_1 + 0x174) =
       uVar16 & 0xff0000 | (uint)bVar3 << 0x18 | uVar16 & 0xff00 | uVar16 & 0xff;
  *(uint *)(param_1 + 0x170) = uVar18;
  lVar24 = *(long *)(*(long *)(param_1 + 0x158) + 0x80);
  if (*(int *)(lVar24 + 0x1d8) != 9) {
    lVar8 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar8 + 0x48) - *(long *)(lVar8 + 0x40) >> 3) < 4) {
      uVar25 = 0;
      if (*(char *)(lVar8 + 0x191) == '\0') goto LAB_71018d2fb0;
LAB_71018d3020:
      local_21d8 = 0x87650000000000;
      local_21c8 = 0xffffffffffffffff;
      uStack_21c0 = 0;
      local_21f0 = (undefined **)((ulong)local_21f0 & 0xffffffff00000000);
      local_21b8 = 0;
    }
    else {
      uVar25 = *(ulong *)(*(long *)(lVar8 + 0x40) + 0x18);
      if (*(char *)(lVar8 + 0x191) != '\0') goto LAB_71018d3020;
LAB_71018d2fb0:
      param_3 = (undefined **)&DAT_00000004;
      uVar9 = FUN_7103313f20(lVar8,uVar25,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar9 & 1) == 0) goto LAB_71018d3020;
      FUN_71024076d0((undefined4 *)&local_21f0,uVar25);
      if (((local_21e0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_21d8 == DAT_7106dd53ac))
      {
        piVar13 = (int *)(local_21e0 + 0x38);
        do {
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar6) {
            *piVar13 = *piVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    local_21e8 = &PTR_FUN_7104f73d50;
    local_21e0 = 0;
    local_21d0 = 0;
    if (0x12 < *(uint *)(lVar24 + 0x1d4)) {
LAB_71018d3220:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar24 + 0x1d4) * 4 + 0x188) = 9;
    *(undefined1 *)(lVar24 + 0x229) = 0;
    (**(code **)(**(long **)(lVar24 + 0x1f8) + 0x70))(*(long **)(lVar24 + 0x1f8),0);
    (**(code **)(**(long **)(lVar24 + 0x200) + 0x70))(*(long **)(lVar24 + 0x200),0);
    (**(code **)(**(long **)(lVar24 + 0x1f0) + 0x70))(*(long **)(lVar24 + 0x1f0),0);
    (**(code **)(**(long **)(lVar24 + 0x208) + 0x70))(*(long **)(lVar24 + 0x208),0);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar24 + 0xa0) + 0x10),0x710439d6f6);
    *(undefined8 *)(lVar24 + 0x2c0) = 0;
  }
  lVar24 = *(long *)(param_1 + 0x140);
LAB_71018d30e4:
  lVar8 = *(long *)(*(long *)(param_1 + 0x158) + 0x80);
  uVar25 = (**(code **)(**(long **)(lVar8 + 0x1f0) + 0x78))();
  if ((uVar25 & 1) == 0) {
    uVar25 = (**(code **)(**(long **)(lVar8 + 0x1f8) + 0x78))();
    if ((uVar25 & 1) == 0) {
      uVar25 = (**(code **)(**(long **)(lVar8 + 0x200) + 0x78))();
      pcVar17 = "mnu_opt_shortmsg_help_end";
      if ((uVar25 & 1) == 0) {
        pcVar17 = "";
      }
    }
    else {
      pcVar17 = "mnu_opt_shortmsg_help_start";
    }
  }
  else {
    pcVar17 = "mnu_opt_shortmsg_help_transmit_receive";
    if (*(int *)(*(long *)(lVar8 + 0x208) + 0x254) != 0) {
      pcVar17 = "mnu_opt_shortmsg_help_transmit_receive_off";
    }
  }
  uVar25 = 0;
  do {
    cVar2 = pcVar17[uVar25];
    if (cVar2 == '\0') {
LAB_71018d31b8:
      *(undefined1 *)((long)&local_21e8 + (uVar25 & 0xffffffff)) = 0;
      uVar16 = (uint)(byte)local_21e8;
      if ((byte)local_21e8 != 0) {
        pbVar14 = (byte *)((long)&local_21e8 + 1);
        do {
          uVar26 = uVar26 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (uVar16 != 0);
      }
      local_21f0 = (undefined **)CONCAT44((int)uVar25,uVar26);
      FUN_7101af53d0(*(long *)(lVar24 + 0x80),(uint *)&local_21f0,param_3,param_4,param_5,param_6,
                     param_7,param_8);
      return;
    }
    *(char *)((long)&local_21e8 + uVar25) = cVar2;
    if (0x3e < (int)uVar25 + 1U) {
      uVar25 = (ulong)((int)uVar25 + 1);
      goto LAB_71018d31b8;
    }
    cVar2 = (pcVar17 + uVar25)[1];
    if (cVar2 == '\0') {
      uVar25 = uVar25 + 1;
      goto LAB_71018d31b8;
    }
    *(char *)((long)&local_21e8 + uVar25 + 1) = cVar2;
    uVar25 = uVar25 + 2;
  } while( true );
}

