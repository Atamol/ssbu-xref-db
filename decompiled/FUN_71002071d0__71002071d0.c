// addr:      71002071d0
// offset:    0x2071d0
// name:      FUN_71002071d0
// mangled:   
// signature: undefined __cdecl FUN_71002071d0(long * param_1, long param_2)


/* WARNING: Type propagation algorithm not settling */

void FUN_71002071d0(long *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  undefined **ppuVar9;
  size_t sVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  uint uVar16;
  undefined2 uVar17;
  size_t *psVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  size_t sVar26;
  undefined8 auStack_c0 [3];
  long local_a8 [5];
  undefined **local_80;
  ulong local_78;
  size_t local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar4 = *(ushort *)(param_2 + 0x60);
  if ((*(uint *)(param_1[1] + 8) | 8) == 10) {
    if (((((uVar4 & 0x1f) == 0x10) &&
         (uVar13 = (**(code **)(*param_1 + 0x40))(param_1), (uVar13 & 1) != 0)) &&
        ((char)param_1[0x21] == '\0')) && ((*(byte *)(param_2 + 0xd1) & 1) != 0)) {
      uVar16 = 8;
      goto LAB_71002074f8;
    }
  }
  else if ((uVar4 & 0x281f) == 2) {
    plVar23 = &DAT_71052af190;
    if (DAT_71052af1d8 != '\0') {
      puVar14 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar16 = *puVar14;
      if (uVar16 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar16) {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          goto LAB_71002073a8;
        }
        plVar23 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar16 * 8) + 0x78);
      }
    }
    if (*plVar23 != 0) {
      lVar19 = DAT_71052af190;
      if (DAT_71052af1d8 != '\0') {
        puVar14 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar16 = *puVar14;
        lVar19 = DAT_71052af190;
        if (uVar16 != 0) {
          if ((ulong)uVar16 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
            lVar19 = *(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar16 * 8) + 0x78);
          }
          else {
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            lVar19 = 0;
          }
        }
      }
      plVar23 = &DAT_71052af190;
      if (DAT_71052af1d8 != '\0') {
        plVar23 = &DAT_71052af190;
        puVar14 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar16 = *puVar14;
        if (uVar16 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar16) {
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar23 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar16 * 8) + 0x78);
        }
      }
      uVar13 = FUN_71001b2170(lVar19,0x554,*(ulong *)(*plVar23 + 0x48));
      if ((uVar13 & 1) == 0) {
        return;
      }
    }
  }
LAB_71002073a8:
  uVar16 = *(uint *)(param_1[1] + 8);
  if (DAT_71052af1d8 == '\0') {
LAB_7100207400:
    cVar1 = (&DAT_71052af5a4)[(ulong)uVar16 * 0x2e8];
  }
  else {
    puVar14 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar14 == 0) goto LAB_7100207400;
    cVar1 = *(char *)(*(long *)(&DAT_71052af4e8 + (ulong)uVar16 * 0x2e8) + (ulong)*puVar14 * 0x168 +
                     0xb4);
  }
  if (cVar1 != '\0') {
    param_1[0x28] = (long)DAT_71052aeba8;
  }
  uVar5 = *(ushort *)(param_2 + 0x60);
  if (((uVar5 & 0x600) != 0) && (*(int *)((long)param_1 + 0xa4) != 2)) {
    if ((char)param_1[0x3d] == '\0') {
      return;
    }
    if (*(int *)((long)param_1 + 0xa4) == 1) {
      return;
    }
    if (*(int *)((long)param_1 + 0x114) != 2) {
      return;
    }
  }
  if (((uVar5 >> 0xd & 1) == 0) && (*(ushort *)(param_1 + 0x30) < (ushort)*(byte *)(param_2 + 0xa4))
     ) {
    return;
  }
  if ((uVar5 & 0x600) == 0) {
    if ((uVar5 & 0xf) == 1) {
      if ((uVar5 >> 4 & 1) == 0) goto LAB_71002074ac;
    }
    else if (((uVar5 & 0xf) == 0) && ((uVar5 >> 4 & 1) != 0)) {
LAB_71002074ac:
      sVar26 = *(size_t *)(param_2 + 0x98);
      if (*(char *)(param_2 + 0x40) == '\0') {
        memcpy(param_1 + 0x31,(void *)(param_2 + 0x88),sVar26);
        param_1[0x33] = sVar26;
      }
      else {
        memcpy(param_1 + 0x34,(void *)(param_2 + 0x88),sVar26);
        param_1[0x36] = sVar26;
      }
    }
    if ((uVar4 & 0xf) == 0) goto LAB_7100207478;
    if ((char)param_1[0x3d] != '\0') {
      if (*(char *)(param_2 + 0xa1) != (char)param_1[0x3d]) {
        if ((uVar4 & 0xf) != 1) {
          return;
        }
        if ((*(byte *)(param_2 + 0x60) >> 4 & 1) != 0) {
          return;
        }
        uVar16 = 1;
LAB_71002074f8:
        FUN_7100206340(param_1,uVar16);
        return;
      }
      goto LAB_7100207478;
    }
    if ((*(ushort *)(param_2 + 0x60) & 0xf) != 1) {
      if (*(char *)(param_2 + 0xa1) != '\0') {
        return;
      }
      goto LAB_7100207478;
    }
    *(char *)(param_1 + 0x3d) = *(char *)(param_2 + 0xa1);
    if ((*(char *)(param_2 + 0x40) != '\0') && (*(short *)(param_2 + 0x80) != 0)) {
      *(short *)(param_1 + 0x2c) = *(short *)(param_2 + 0x80);
    }
    bVar2 = *(byte *)(param_2 + 0x42);
    if ((bVar2 | 8) != 9) goto LAB_7100207478;
    if (DAT_71052af1d8 == '\0') {
LAB_71002075c8:
      cVar1 = (&DAT_71052af5f8)[(ulong)bVar2 * 0x2e8];
    }
    else {
      puVar14 = (uint *)FUN_7101717960(DAT_71052af1d0);
      if (*puVar14 == 0) goto LAB_71002075c8;
      cVar1 = *(char *)(*(long *)(&DAT_71052af4e8 + (ulong)bVar2 * 0x2e8) + (ulong)*puVar14 * 0x168
                       + 0x108);
    }
    if (cVar1 == '\0') goto LAB_7100207478;
    bVar2 = *(byte *)(param_2 + 0x42);
    if (DAT_71052af1d8 == '\0') {
LAB_7100207628:
      lVar19 = (ulong)bVar2 * 0x2e8 + 0x71052af4f0;
    }
    else {
      puVar14 = (uint *)FUN_7101717960(DAT_71052af1d0);
      if (*puVar14 == 0) goto LAB_7100207628;
      lVar19 = *(long *)(&DAT_71052af4e8 + (ulong)bVar2 * 0x2e8) + (ulong)*puVar14 * 0x168;
    }
    local_80 = &PTR_FUN_7104f58f88;
    local_78 = *(ulong *)(lVar19 + 0x118);
    local_70 = *(size_t *)(lVar19 + 0x120);
    uStack_68 = *(undefined8 *)(lVar19 + 0x128);
    local_60 = *(undefined8 *)(lVar19 + 0x130);
    uStack_58 = *(undefined8 *)(lVar19 + 0x138);
    FUN_71001d6480(local_a8,(long)&local_70,local_78);
    lVar19 = FUN_71001cbc40((long)local_a8);
    if (lVar19 != 0) {
      (**(code **)(*(long *)param_1[0x65] + 0x30))((long *)param_1[0x65],local_a8);
      (**(code **)(*(long *)param_1[0x65] + 0x28))
                ((long *)param_1[0x65],local_a8,*(undefined1 *)((long)param_1 + 0x1e9),
                 (char)param_1[0x3d]);
    }
    FUN_71001d6880(local_a8);
    uVar5 = *(ushort *)(param_2 + 0x60);
    if ((uVar5 >> 6 & 1) != 0) goto LAB_71002076c4;
LAB_7100207480:
    uVar13 = (ulong)*(uint *)(param_1[1] + 8);
    if (DAT_71052af1d8 == '\0') goto LAB_7100207820;
LAB_710020777c:
    puVar14 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar14 == 0) goto LAB_7100207820;
    if (*(char *)(*(long *)(&DAT_71052af4e8 + uVar13 * 0x2e8) + (ulong)*puVar14 * 0x168 + 0xb4) ==
        '\0') goto LAB_7100207858;
LAB_710020783c:
    if ((*(byte *)(param_2 + 0x60) >> 5 & 1) == 0) goto LAB_7100207844;
LAB_7100207870:
    param_1[0x91] = param_1[0x91] + 1;
    uVar13 = 0;
    if (*(long *)(param_2 + 0x138) != 0) {
      uVar13 = (ulong)*(ushort *)(*(long *)(param_2 + 0x138) + 0x18);
    }
    param_1[0x92] = param_1[0x92] + uVar13;
    FUN_71001ff490(*(long *)(param_1[0x19] + (ulong)*(byte *)(param_2 + 0xa4) * 8),param_2);
    if ((uVar4 & 0xf) < 9) goto LAB_71002078b8;
    goto switchD_71002078cc_caseD_5;
  }
LAB_7100207478:
  uVar5 = *(ushort *)(param_2 + 0x60);
  if ((uVar5 >> 6 & 1) == 0) goto LAB_7100207480;
LAB_71002076c4:
  if (((uVar5 & 0xf) == 2) && (*(char *)((long)param_1 + 0x1eb) != '\0')) {
    uVar13 = (ulong)(*(byte *)(param_2 + 0xa4) >> 3) & 0x18;
    *(ulong *)(param_1[0x40] + uVar13) =
         1L << ((ulong)*(byte *)(param_2 + 0xa4) & 0x3f) | *(ulong *)(param_1[0x40] + uVar13);
    lVar19 = param_1[1];
    plVar25 = *(long **)(lVar19 + 0x158);
    plVar23 = (long *)(lVar19 + 0x158);
    if (plVar25 == (long *)0x0) {
      lVar22 = *plVar23;
      plVar24 = plVar23;
    }
    else {
      do {
        bVar11 = param_1 <= (long *)plVar25[4];
        if (!bVar11 || (long *)plVar25[4] == param_1) {
          do {
            plVar24 = plVar25;
            if (bVar11) goto LAB_71002077c0;
            plVar23 = plVar25 + 1;
            plVar25 = (long *)*plVar23;
            if (plVar25 == (long *)0x0) goto LAB_71002077c0;
            bVar11 = param_1 <= (long *)plVar25[4];
          } while ((long *)plVar25[4] <= param_1);
        }
        plVar23 = plVar25;
        plVar25 = (long *)*plVar23;
        plVar24 = plVar23;
      } while (plVar25 != (long *)0x0);
LAB_71002077c0:
      lVar22 = *plVar23;
    }
    if (lVar22 != 0) goto LAB_7100207480;
    plVar25 = FUN_71001b1820(0x28);
    plVar25[4] = (long)param_1;
    *plVar25 = 0;
    plVar25[1] = 0;
    plVar25[2] = (long)plVar24;
    *plVar23 = (long)plVar25;
    if (**(long **)(lVar19 + 0x150) != 0) {
      *(long *)(lVar19 + 0x150) = **(long **)(lVar19 + 0x150);
      plVar25 = (long *)*plVar23;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(long **)(lVar19 + 0x158),plVar25);
    *(long *)(lVar19 + 0x160) = *(long *)(lVar19 + 0x160) + 1;
    uVar16 = *(uint *)(param_1[1] + 8);
  }
  else {
    FUN_7100206970(param_1,param_2);
    uVar16 = *(uint *)(param_1[1] + 8);
  }
  uVar13 = (ulong)uVar16;
  if (DAT_71052af1d8 != '\0') goto LAB_710020777c;
LAB_7100207820:
  if ((&DAT_71052af5a4)[uVar13 * 0x2e8] != '\0') goto LAB_710020783c;
LAB_7100207858:
  param_1[0x28] = (long)DAT_71052aeba8;
  if ((*(byte *)(param_2 + 0x60) >> 5 & 1) != 0) goto LAB_7100207870;
LAB_7100207844:
  if (8 < (uVar4 & 0xf)) goto switchD_71002078cc_caseD_5;
LAB_71002078b8:
                    /* WARNING: Switch is manually overridden */
  switch(uVar4 & 0xf) {
  case 0:
    uVar13 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((((uVar13 & 1) == 0) || ((*(byte *)(param_2 + 0x60) >> 4 & 1) == 0)) ||
       ((char)param_1[0x21] != '\0')) break;
    plVar23 = FUN_71001af850(0x238);
    if (plVar23 != (long *)0x0) {
      FUN_7100216320(plVar23,param_1,1,0x60,param_1[0x60],0);
    }
    uVar3 = *(undefined1 *)(param_2 + 0x40);
    *(undefined1 *)((long)param_1 + 0x1eb) = uVar3;
    *(undefined1 *)(plVar23 + 8) = uVar3;
    *(undefined4 *)((long)param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0xd0);
    FUN_71001ffd70((long)param_1,(uint)*(byte *)(param_2 + 0xa3));
    lVar19 = (**(code **)(*(long *)param_1[100] + 0x18))
                       ((long *)param_1[100],*(undefined1 *)((long)param_1 + 0x1eb),
                        *(undefined4 *)((long)param_1 + 0x1ec));
    param_1[0x3e] = lVar19;
    *(undefined4 *)(plVar23 + 0x1a) = *(undefined4 *)((long)param_1 + 0x1ec);
    *(char *)((long)plVar23 + 0xa3) = (char)param_1[0x30];
    if (((char)plVar23[8] != '\0') && ((short)param_1[0x2a] == 0)) {
      if (DAT_7104f54e20 == '\0') {
        FUN_71001b6a50((long *)&local_80);
      }
      else {
        FUN_71001b68a0((ulong *)&local_80,0);
      }
      ppuVar9 = local_80;
      DAT_71052aeba8 = local_80;
      iVar12 = FUN_71001b34a0(0xffff);
      uVar16 = iVar12 + (int)ppuVar9;
      uVar17 = (undefined2)uVar16;
      *(undefined2 *)(param_1 + 0x2a) = uVar17;
      if ((uVar16 & 0xffff) == 0) {
        uVar17 = 1;
        *(undefined2 *)(param_1 + 0x2a) = 1;
      }
      *(undefined2 *)(plVar23 + 0x10) = uVar17;
    }
    local_70 = 0;
    (**(code **)(*(long *)param_1[99] + 0x18))
              ((long *)param_1[99],param_2,1,0,*(undefined1 *)(param_2 + 0x42),param_1[1] + 0xe8,0,
               &local_80);
    sVar26 = local_70;
    memcpy(plVar23 + 0x11,&local_80,local_70);
    sVar10 = local_70;
    plVar23[0x13] = sVar26;
    if (*(char *)(param_2 + 0x40) == '\0') {
      memcpy(param_1 + 0x34,&local_80,local_70);
      psVar18 = (size_t *)(param_1 + 0x36);
    }
    else {
      memcpy(param_1 + 0x31,&local_80,local_70);
      psVar18 = (size_t *)(param_1 + 0x33);
    }
    *psVar18 = sVar10;
    *(undefined8 *)(plVar23[0x3e] + 0x18) = *(undefined8 *)(*(long *)(param_1[0x20] + 0x1f0) + 0x18)
    ;
    FUN_71002039c0(auStack_c0,param_1,(long)plVar23);
    plVar25 = plVar23 + 1;
    iVar12 = (int)*plVar25;
    iVar7 = (int)*plVar25 + -1;
    if (iVar12 != (int)*plVar25) {
      ClearExclusiveLocal();
      iVar21 = iVar12;
      goto LAB_71002080e8;
    }
    cVar1 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar11) {
      *(int *)plVar25 = iVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
    while (iVar21 = iVar12, cVar1 != '\0') {
LAB_71002080e8:
      while( true ) {
        iVar12 = (int)*plVar25;
        iVar7 = iVar21 + -1;
        if (iVar12 == iVar21) break;
        ClearExclusiveLocal();
        iVar21 = iVar12;
      }
      cVar1 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar11) {
        *(int *)plVar25 = iVar7;
        cVar1 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar7 == 0) && (*(char *)((long)plVar23 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar23 + 0xc) = 1;
      (**(code **)(*plVar23 + 8))(plVar23);
    }
    FUN_7100201730(param_1[1] + 0x40,(long *)param_1[0x20]);
    bVar11 = false;
    *(undefined1 *)(param_1 + 0x21) = 1;
    uVar4 = *(ushort *)(param_2 + 0x60);
    goto joined_r0x007100207cb0;
  case 1:
    uVar13 = (**(code **)(*param_1 + 0x40))(param_1);
    if (((*(ushort *)(param_2 + 0x60) >> 4 & 1) == 0) || ((uVar13 & 1) == 0)) {
      if ((*(ushort *)(param_2 + 0x60) >> 4 & 1) == 0) {
        (**(code **)(*param_1 + 0x98))(param_1);
      }
    }
    else {
      if (param_1[0x5f] != 0) {
        FUN_71001cc790(param_1[0x5f],*(long *)(param_2 + 0x138));
        param_1[0x5f] = 0;
      }
      local_a8[0] = *(long *)(param_2 + 0x1d0);
      local_80 = &PTR_FUN_7104f59348;
      local_78 = CONCAT62(local_78._2_6_,*(undefined2 *)(param_2 + 0x70));
      FUN_7100208190((long)param_1,local_a8,(long)&local_80,0);
      (**(code **)(*param_1 + 0xb0))(param_1,2);
    }
    FUN_71001ffca0(param_1);
    FUN_71002089b0((long)param_1);
    break;
  case 2:
    uVar13 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((uVar13 & 1) == 0) {
      uVar4 = *(ushort *)(param_2 + 0x60);
      if ((uVar4 >> 4 & 1) == 0) {
        if ((uVar4 >> 0xd & 1) == 0) {
          if ((uVar4 >> 5 & 1) != 0) {
            bVar11 = true;
            uVar4 = *(ushort *)(param_2 + 0x60);
            goto joined_r0x007100207cb0;
          }
          if ((uVar4 & 0x600) == 0) {
            sVar6 = *(short *)(param_2 + 0x70);
            sVar8 = sVar6 - (short)param_1[0x2c];
          }
          else {
            if (*(char *)((long)param_1 + 0x1ea) == '\0') {
              *(undefined2 *)(param_1 + 0x2f) = *(undefined2 *)(param_2 + 0x70);
              cVar1 = *(char *)(param_2 + 0xa1);
LAB_7100207f70:
              *(char *)((long)param_1 + 0x1ea) = cVar1;
            }
            else {
              cVar1 = *(char *)(param_2 + 0xa1);
              if (*(char *)((long)param_1 + 0x1ea) != cVar1) goto LAB_7100207f70;
            }
            sVar6 = *(short *)(param_2 + 0x70);
            sVar8 = sVar6 - (short)param_1[0x2f];
          }
          if (sVar8 < 0) {
            param_1[0x87] = param_1[0x87] + 1;
            bVar11 = DAT_71052af480 == '\0';
            uVar4 = *(ushort *)(param_2 + 0x60);
          }
          else {
            param_1[0x85] = param_1[0x85] + (long)(int)sVar8;
            if ((uVar4 & 0x600) == 0) {
              *(short *)(param_1 + 0x2c) = sVar6 + 1;
              bVar11 = true;
              uVar4 = *(ushort *)(param_2 + 0x60);
            }
            else {
              *(short *)(param_1 + 0x2f) = sVar6 + 1;
              bVar11 = true;
              uVar4 = *(ushort *)(param_2 + 0x60);
            }
          }
          goto joined_r0x007100207cb0;
        }
        FUN_7100208570((long)param_1,param_2);
      }
      else {
        local_a8[0] = *(long *)(param_2 + 0x1d0);
        local_80 = &PTR_FUN_7104f59348;
        local_78 = CONCAT62(local_78._2_6_,*(undefined2 *)(param_2 + 0x70));
        FUN_7100208190((long)param_1,local_a8,(long)&local_80,(ulong)*(byte *)(param_2 + 0xa4));
      }
    }
    break;
  case 3:
    if ((*(byte *)(param_2 + 0x60) >> 4 & 1) == 0) {
      FUN_7100202db0(param_1);
      uVar13 = (**(code **)(*param_1 + 0x60))(param_1);
      (**(code **)(*param_1 + 0xa0))(param_1);
      if (((uVar13 & 1) != 0) && (param_1[0x10] != 0)) {
        FUN_71001b1400();
        (**(code **)(*(long *)param_1[0x10] + 0x20))((long *)param_1[0x10],param_1);
      }
      if ((((param_1[1] != 0) && ((*(uint *)(param_1[1] + 8) | 8) == 10)) &&
          (uVar15 = (**(code **)(*param_1 + 0x58))(param_1), (uVar15 & 1) != 0)) &&
         ((*(byte *)(param_2 + 0x60) >> 6 & 1) == 0)) {
        if (((uVar13 & 1) == 0) || (param_1[0x10] == 0)) {
          if (*(int *)(param_2 + 0xa8) == 2) {
            uVar16 = 0xd;
          }
          else {
            uVar16 = 9;
          }
          FUN_7100206340(param_1,uVar16);
          break;
        }
        (**(code **)(*param_1 + 0xb0))(param_1,4);
        FUN_71001ffb10((long)param_1);
        FUN_71002015a0((long)param_1);
      }
      FUN_7100206870(param_1[1],param_1);
    }
    else {
      uVar13 = (**(code **)(*param_1 + 0x48))(param_1);
      if ((uVar13 & 1) != 0) {
        (**(code **)(*param_1 + 0xb0))(param_1,0);
      }
      local_a8[0] = *(long *)(param_2 + 0x1d0);
      local_80 = &PTR_FUN_7104f59348;
      local_78 = CONCAT62(local_78._2_6_,*(undefined2 *)(param_2 + 0x70));
      FUN_7100208190((long)param_1,local_a8,(long)&local_80,0);
    }
    break;
  case 4:
    if (((*(byte *)(param_2 + 0x60) >> 4 & 1) != 0) && (lVar19 = param_1[0x1f], lVar19 != 0)) {
      if (*(short *)(lVar19 + 0x70) == *(short *)(param_2 + 0x70)) {
        uVar13 = *(long *)(param_2 + 0x1d0) - *(long *)(lVar19 + 0x1d0);
        if (uVar13 < 0xea61) {
          iVar12 = (int)uVar13;
          if (*(char *)((long)param_1 + 0x134) == '\0') {
            iVar21 = iVar12 - (*(uint *)(param_1 + 0x25) >> 3);
            iVar7 = -iVar21;
            if (-1 < iVar21) {
              iVar7 = iVar21;
            }
            uVar16 = iVar21 + *(uint *)(param_1 + 0x25);
            uVar20 = (*(uint *)((long)param_1 + 300) - (*(uint *)((long)param_1 + 300) >> 2)) +
                     iVar7;
          }
          else {
            uVar16 = iVar12 << 3;
            *(undefined1 *)((long)param_1 + 0x134) = 0;
            uVar20 = iVar12 << 1;
          }
          *(uint *)(param_1 + 0x25) = uVar16;
          *(uint *)((long)param_1 + 300) = uVar20;
          *(int *)(param_1 + 0x26) = iVar12;
        }
        else {
          uVar16 = *(uint *)(param_1 + 0x25);
          uVar20 = *(uint *)((long)param_1 + 300);
        }
        uVar20 = uVar20 & 0xfffffffc;
        if (uVar20 < 0x22) {
          uVar20 = 0x21;
        }
        uVar20 = uVar20 + (uVar16 >> 3);
        if (*(uint *)(param_1 + 0x93) < uVar20) {
          *(uint *)(param_1 + 0x93) = uVar20;
        }
        if (uVar20 < *(uint *)((long)param_1 + 0x49c)) {
          bVar11 = false;
          *(uint *)((long)param_1 + 0x49c) = uVar20;
          uVar4 = *(ushort *)(param_2 + 0x60);
          goto joined_r0x007100207cb0;
        }
      }
      break;
    }
    param_1[0x82] = param_1[0x82] + 1;
    *(uint *)((long)param_1 + 0x4a4) = (uint)*(ushort *)(param_2 + 0x70);
    uVar4 = *(ushort *)(param_2 + 0x60);
    goto joined_r0x007100207bb8;
  case 8:
    if (((param_1[0x9d] != 0) && ((*(byte *)(param_2 + 0x60) >> 4 & 1) != 0)) &&
       (*(short *)(param_1[0x9d] + 0x70) == *(short *)(param_2 + 0x70))) {
      FUN_7100208ab0((long)param_1,param_2);
    }
  }
switchD_71002078cc_caseD_5:
  uVar4 = *(ushort *)(param_2 + 0x60);
joined_r0x007100207bb8:
  bVar11 = false;
joined_r0x007100207cb0:
  if ((uVar4 >> 5 & 1) != 0) goto LAB_7100207e64;
  param_1[0x7a] = param_1[0x7a] + 1;
  lVar19 = *(long *)(param_2 + 0x138);
  if (lVar19 == 0) {
    param_1[0x7e] = param_1[0x7e];
    if ((uVar4 >> 9 & 1) != 0) goto LAB_7100207df0;
LAB_7100207dc0:
    if ((uVar4 >> 10 & 1) != 0) {
      param_1[0x7d] = param_1[0x7d] + 1;
      if (lVar19 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x18);
      }
      plVar23 = param_1 + 0x81;
      goto LAB_7100207e20;
    }
  }
  else {
    param_1[0x7e] = param_1[0x7e] + (ulong)*(ushort *)(lVar19 + 0x18);
    if ((uVar4 >> 9 & 1) == 0) goto LAB_7100207dc0;
LAB_7100207df0:
    param_1[0x7c] = param_1[0x7c] + 1;
    if (lVar19 == 0) {
      uVar13 = 0;
      plVar23 = param_1 + 0x80;
    }
    else {
      uVar13 = (ulong)*(ushort *)(lVar19 + 0x18);
      plVar23 = param_1 + 0x80;
    }
LAB_7100207e20:
    *plVar23 = *plVar23 + uVar13;
  }
  if (bVar11) {
    param_1[0x7b] = param_1[0x7b] + 1;
    if (lVar19 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = (ulong)*(ushort *)(lVar19 + 0x18);
    }
    param_1[0x7f] = param_1[0x7f] + uVar13;
    FUN_7100206050((long)param_1,param_2);
  }
LAB_7100207e64:
  uVar13 = (ulong)*(byte *)(param_2 + 0xa4);
  lVar19 = param_1[0x19];
  lVar22 = *(long *)(lVar19 + uVar13 * 8);
  plVar23 = (long *)(lVar22 + 0x10);
  plVar25 = (long *)*plVar23;
  if (plVar25 != (long *)0x0) {
    sVar6 = *(short *)(lVar22 + 0x28);
    plVar24 = plVar23;
    do {
      sVar8 = sVar6 - (short)plVar25[5];
      if (sVar8 < 1) {
        plVar24 = plVar25;
      }
      plVar25 = (long *)plVar25[0 < sVar8];
    } while (plVar25 != (long *)0x0);
    while ((plVar24 != plVar23 && ((short)((short)plVar24[5] - sVar6) < 1))) {
      plVar23 = (long *)plVar24[6];
      *(short *)(lVar22 + 0x28) = sVar6 + 1;
      if (plVar23 == (long *)0x0) {
        return;
      }
      if ((*(ushort *)(plVar23 + 0xc) & 0xf) == 2) {
        FUN_7100206050((long)param_1,(long)plVar23);
        uVar13 = (ulong)*(byte *)(param_2 + 0xa4);
        lVar19 = param_1[0x19];
      }
      FUN_71001ff680(*(long *)(lVar19 + uVar13 * 8),plVar23);
      uVar13 = (ulong)*(byte *)(param_2 + 0xa4);
      lVar19 = param_1[0x19];
      lVar22 = *(long *)(lVar19 + uVar13 * 8);
      plVar23 = (long *)(lVar22 + 0x10);
      plVar25 = (long *)*plVar23;
      if (plVar25 == (long *)0x0) {
        return;
      }
      sVar6 = *(short *)(lVar22 + 0x28);
      plVar24 = plVar23;
      do {
        sVar8 = sVar6 - (short)plVar25[5];
        if (sVar8 < 1) {
          plVar24 = plVar25;
        }
        plVar25 = (long *)plVar25[0 < sVar8];
      } while (plVar25 != (long *)0x0);
    }
  }
  return;
}

