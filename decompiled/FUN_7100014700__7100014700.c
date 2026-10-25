// addr:      7100014700
// offset:    0x14700
// name:      FUN_7100014700
// mangled:   
// signature: int __cdecl FUN_7100014700(long * param_1)


int FUN_7100014700(long *param_1)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  ulong in_x4;
  ulong in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  char local_d0 [16];
  char local_c0 [16];
  char local_b0 [8];
  undefined1 local_a8;
  undefined1 auStack_a4 [10];
  undefined1 auStack_9a [10];
  undefined1 auStack_90 [10];
  undefined1 auStack_86 [10];
  undefined1 auStack_7c [10];
  undefined1 auStack_72 [18];
  
  lVar13 = *param_1;
  iVar4 = *(int *)(lVar13 + 0xb58);
  lVar15 = *(long *)(lVar13 + 0x9e8);
  lVar16 = *(long *)(lVar13 + 0x9f0);
  auVar17 = FUN_7100017740();
  lVar12 = auVar17._0_8_;
  pcVar6 = *(char **)(lVar13 + 0xa58);
  uVar7 = *(ulong *)(lVar13 + 0xa60);
  lVar5 = FUN_71000177a0(lVar12,auVar17._8_4_,(long)pcVar6,(int)uVar7);
  uVar2 = lVar5 / 1000000;
  lVar8 = 999;
  if (0x20c49ba5e353f6 < lVar15) {
    lVar8 = 999999;
  }
  *(long *)(lVar13 + 0xa10) = lVar5;
  uVar9 = lVar5 / 1000;
  if (0x20c49ba5e353f6 < lVar15) {
    uVar9 = uVar2;
  }
  lVar1 = lVar15 * 1000;
  if (0x20c49ba5e353f6 < lVar15) {
    lVar1 = lVar15;
  }
  if (lVar5 <= lVar8) {
    uVar9 = 1;
  }
  lVar8 = 0;
  if (uVar9 != 0) {
    lVar8 = lVar1 / (long)uVar9;
  }
  *(long *)(lVar13 + 0xa18) = lVar8;
  lVar8 = lVar16 * 1000;
  uVar9 = lVar5 / 1000;
  lVar15 = 999;
  if (0x20c49ba5e353f6 < lVar16) {
    lVar8 = lVar16;
    uVar9 = uVar2;
    lVar15 = 999999;
  }
  if (lVar5 <= lVar15) {
    uVar9 = 1;
  }
  lVar15 = 0;
  if (uVar9 != 0) {
    lVar15 = lVar8 / (long)uVar9;
  }
  *(long *)(lVar13 + 0xa20) = lVar15;
  if (*(long *)(lVar13 + 0x9d0) == lVar12) {
    bVar3 = false;
    uVar10 = *(uint *)(lVar13 + 0xa08);
  }
  else {
    iVar4 = iVar4 % 6;
    *(long *)(lVar13 + 0x9d0) = lVar12;
    plVar14 = (long *)(lVar13 + 0x9d0 + (long)iVar4 * 8 + 0xf8);
    *plVar14 = *(long *)(lVar13 + 0x9f0) + *(long *)(lVar13 + 0x9e8);
    *(undefined1 (*) [16])(lVar13 + 0x9d0 + (long)iVar4 * 0x10 + 0x128) = auVar17;
    iVar4 = *(int *)(lVar13 + 0xb58);
    *(int *)(lVar13 + 0xb58) = iVar4 + 1;
    if (iVar4 == 0) {
      bVar3 = true;
      *(long *)(lVar13 + 0x9f8) = *(long *)(lVar13 + 0xa18) + *(long *)(lVar13 + 0xa20);
      uVar10 = *(uint *)(lVar13 + 0xa08);
    }
    else {
      if (iVar4 < 5) {
        iVar4 = 0;
      }
      else {
        iVar4 = (iVar4 + 1) % 6;
      }
      lVar8 = lVar13 + 0x9d0 + (long)iVar4 * 0x10;
      pcVar6 = *(char **)(lVar8 + 0x128);
      uVar7 = *(ulong *)(lVar8 + 0x130);
      lVar8 = FUN_7100017750(lVar12,auVar17._8_4_,(long)pcVar6,(int)uVar7);
      if (lVar8 == 0) {
        lVar8 = 1;
      }
      lVar12 = *plVar14 - *(long *)(lVar13 + 0x9d0 + (long)iVar4 * 8 + 0xf8);
      if (lVar12 < 0x418938) {
        lVar15 = 0;
        if (lVar8 != 0) {
          lVar15 = (lVar12 * 1000) / lVar8;
        }
        *(long *)(lVar13 + 0x9f8) = lVar15;
        uVar10 = *(uint *)(lVar13 + 0xa08);
      }
      else {
        *(long *)(lVar13 + 0x9f8) = (long)((double)lVar12 / ((double)lVar8 / 1000.0));
        uVar10 = *(uint *)(lVar13 + 0xa08);
      }
      bVar3 = true;
    }
  }
  if ((uVar10 >> 4 & 1) == 0) {
    if (*(code **)(lVar13 + 0x330) == (code *)0x0) {
      if (*(code **)(lVar13 + 0x328) == (code *)0x0) {
        if (!bVar3) goto LAB_7100014f5c;
        if ((uVar10 >> 7 & 1) == 0) {
          pcVar6 = *(char **)(lVar13 + 0x4f98);
          if (pcVar6 != (char *)0x0) {
            FUN_7100027870(*(long *)(lVar13 + 0x260));
          }
          FUN_7100027870(*(long *)(lVar13 + 0x260));
          uVar10 = *(uint *)(lVar13 + 0xa08) | 0x80;
          *(uint *)(lVar13 + 0xa08) = uVar10;
        }
        if (((uVar10 >> 5 & 1) == 0) || (lVar8 = *(long *)(lVar13 + 0xa20), lVar8 < 1)) {
          uVar9 = 0;
joined_r0x007100014a30:
          if ((uVar10 >> 6 & 1) == 0) goto LAB_7100014ac0;
LAB_7100014a34:
          lVar8 = *(long *)(lVar13 + 0xa18);
          if (lVar8 < 1) goto LAB_7100014ac0;
          uVar11 = 0;
          if (lVar8 != 0) {
            uVar11 = *(long *)(lVar13 + 0x9d8) / lVar8;
          }
        }
        else {
          lVar12 = *(long *)(lVar13 + 0x9e0);
          uVar9 = 0;
          if (lVar8 != 0) {
            uVar9 = lVar12 / lVar8;
          }
          if ((lVar12 < 0x2711) && (lVar12 < 1)) goto joined_r0x007100014a30;
          if ((uVar10 >> 6 & 1) != 0) goto LAB_7100014a34;
LAB_7100014ac0:
          uVar11 = 0;
        }
        if ((long)uVar9 <= (long)uVar11) {
          uVar9 = uVar11;
        }
        uVar11 = uVar9 - uVar2;
        if ((long)uVar9 < 1) {
          uVar11 = 0;
        }
        if ((long)uVar11 < 1) {
          local_b0[0] = '-';
          local_b0[1] = '-';
          local_b0[2] = ':';
          local_b0[3] = '-';
          local_b0[4] = '-';
          local_b0[5] = ':';
          local_b0[6] = '-';
          local_b0[7] = '-';
          local_a8 = 0;
joined_r0x007100014ba4:
          if (0 < (long)uVar9) goto LAB_7100014ba8;
LAB_7100014b54:
          builtin_strncpy(local_c0,"--:--:--",9);
joined_r0x007100014b70:
          if (999999 < lVar5) goto LAB_7100014c14;
LAB_7100014b74:
          builtin_strncpy(local_d0,"--:--:--",9);
        }
        else {
          if ((long)uVar11 < 360000) {
            uVar7 = uVar11 / 0xe10;
            in_x4 = (uVar11 % 0xe10) / 0x3c;
            in_x5 = (uVar11 % 0xe10) % 0x3c;
            pcVar6 = "%2ld:%02ld:%02ld";
            FUN_7100007ef0(local_b0,9,"%2ld:%02ld:%02ld",uVar7,in_x4,in_x5,in_x6,in_x7);
            goto joined_r0x007100014ba4;
          }
          uVar7 = uVar11 / 0x15180;
          if ((long)uVar11 < 86400000) {
            in_x4 = (uVar11 % 0x15180) / 0xe10;
            pcVar6 = "%3ldd %02ldh";
            FUN_7100007ef0(local_b0,9,"%3ldd %02ldh",uVar7,in_x4,in_x5,in_x6,in_x7);
            goto joined_r0x007100014ba4;
          }
          pcVar6 = "%7ldd";
          FUN_7100007ef0(local_b0,9,"%7ldd",uVar7,in_x4,in_x5,in_x6,in_x7);
          if ((long)uVar9 < 1) goto LAB_7100014b54;
LAB_7100014ba8:
          if ((long)uVar9 < 360000) {
            uVar7 = uVar9 / 0xe10;
            in_x4 = (uVar9 % 0xe10) / 0x3c;
            in_x5 = (uVar9 % 0xe10) % 0x3c;
            pcVar6 = "%2ld:%02ld:%02ld";
            FUN_7100007ef0(local_c0,9,"%2ld:%02ld:%02ld",uVar7,in_x4,in_x5,in_x6,in_x7);
            goto joined_r0x007100014b70;
          }
          uVar7 = uVar9 / 0x15180;
          if (86399999 < (long)uVar9) {
            pcVar6 = "%7ldd";
            FUN_7100007ef0(local_c0,9,"%7ldd",uVar7,in_x4,in_x5,in_x6,in_x7);
            goto joined_r0x007100014b70;
          }
          in_x4 = (uVar9 % 0x15180) / 0xe10;
          pcVar6 = "%3ldd %02ldh";
          FUN_7100007ef0(local_c0,9,"%3ldd %02ldh",uVar7,in_x4,in_x5,in_x6,in_x7);
          if (lVar5 < 1000000) goto LAB_7100014b74;
LAB_7100014c14:
          if (lVar5 < 360000000000) {
            uVar7 = uVar2 / 0xe10;
            in_x4 = (uVar2 % 0xe10) / 0x3c;
            in_x5 = (uVar2 % 0xe10) % 0x3c;
            pcVar6 = "%2ld:%02ld:%02ld";
            FUN_7100007ef0(local_d0,9,"%2ld:%02ld:%02ld",uVar7,in_x4,in_x5,in_x6,in_x7);
          }
          else {
            uVar7 = uVar2 / 0x15180;
            if (lVar5 < 86400000000000) {
              in_x4 = (uVar2 % 0x15180) / 0xe10;
              pcVar6 = "%3ldd %02ldh";
              FUN_7100007ef0(local_d0,9,"%3ldd %02ldh",uVar7,in_x4,in_x5,in_x6,in_x7);
            }
            else {
              pcVar6 = "%7ldd";
              FUN_7100007ef0(local_d0,9,"%7ldd",uVar7,in_x4,in_x5,in_x6,in_x7);
            }
          }
        }
        lVar8 = 0x9f0;
        if ((*(uint *)(lVar13 + 0xa08) & 0x20) != 0) {
          lVar8 = 0x9e0;
        }
        lVar12 = 0x9e8;
        if ((*(uint *)(lVar13 + 0xa08) & 0x40) != 0) {
          lVar12 = 0x9d8;
        }
        lVar5 = *(long *)(lVar13 + 0x260);
        FUN_7100015310(*(long *)(lVar13 + lVar12) + *(long *)(lVar13 + lVar8),auStack_90,pcVar6,
                       uVar7,in_x4,in_x5,in_x6,in_x7);
        FUN_7100015310(*(ulong *)(lVar13 + 0x9e8),auStack_a4,pcVar6,uVar7,in_x4,in_x5,in_x6,in_x7);
        FUN_7100015310(*(ulong *)(lVar13 + 0x9f0),auStack_9a,pcVar6,uVar7,in_x4,in_x5,in_x6,in_x7);
        FUN_7100015310(*(ulong *)(lVar13 + 0xa18),auStack_86,pcVar6,uVar7,in_x4,in_x5,in_x6,in_x7);
        FUN_7100015310(*(ulong *)(lVar13 + 0xa20),auStack_7c,pcVar6,uVar7,in_x4,in_x5,in_x6,in_x7);
        FUN_7100015310(*(ulong *)(lVar13 + 0x9f8),auStack_72,pcVar6,uVar7,in_x4,in_x5,in_x6,in_x7);
        FUN_7100027870(lVar5);
        FUN_7100027820(*(long *)(lVar13 + 0x260));
        goto LAB_7100014f5c;
      }
      iVar4 = (**(code **)(lVar13 + 0x328))
                        ((double)*(long *)(lVar13 + 0x9d8),(double)*(long *)(lVar13 + 0x9e8),
                         (double)*(long *)(lVar13 + 0x9e0),(double)*(long *)(lVar13 + 0x9f0),
                         *(undefined8 *)(lVar13 + 0x398));
    }
    else {
      pcVar6 = *(char **)(lVar13 + 0x9e8);
      uVar7 = *(ulong *)(lVar13 + 0x9e0);
      in_x4 = *(ulong *)(lVar13 + 0x9f0);
      iVar4 = (**(code **)(lVar13 + 0x330))
                        (*(undefined8 *)(lVar13 + 0x398),*(undefined8 *)(lVar13 + 0x9d8));
    }
    if (iVar4 != 0) {
      FUN_7100016040(lVar13,(byte *)"Callback aborted",pcVar6,uVar7,in_x4,in_x5,in_x6,in_x7);
    }
  }
  else {
LAB_7100014f5c:
    iVar4 = 0;
  }
  return iVar4;
}

