// addr:      7101d27300
// offset:    0x1d27300
// name:      FUN_7101d27300
// mangled:   
// signature: undefined __cdecl FUN_7101d27300(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101d27300(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar13;
  byte ****ppppbVar14;
  short *psVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined **local_70;
  ulong local_68;
  
  FUN_7103776910(&local_70,param_1 + 0x100,(long ****)"set_txt_have_num",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  puVar1 = (ulong *)(param_1 + 0x118);
  if (((*(ulong *)(param_1 + 0x118) & 0xff00000000000000) == 0xc100000000000000 &&
       (*(ulong *)(param_1 + 0x118) & 0xffffffffff) != 0) &&
     ((((*(byte *)(param_1 + 0x120) == 6 || (7 < *(byte *)(param_1 + 0x120))) ||
       ((*(ulong *)(param_1 + 0x128) & 0xffffffffff) != 0)) || (*(int *)(param_1 + 0x130) < 1)))) {
    uVar9 = FUN_7101782120(puVar1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
    ppppbVar14 = (byte ****)(ulong)uVar9;
  }
  else {
    ppppbVar14 = (byte ****)0x0;
  }
  uVar13 = 1;
  FUN_710377a280((long)&local_70,(byte *)"mnu_shop_buy_possession_n",1);
  *(undefined1 *)(param_1 + 600) = 0;
  if (*(uint *)(*(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8) + 0x10dc8) <
      *(uint *)(param_1 + 0x138)) {
    *(undefined1 *)(param_1 + 600) = 1;
  }
  *(undefined1 *)(param_1 + 0x259) = 0;
  *(undefined2 *)(param_1 + 0x25b) = 0;
  cVar2 = *(char *)(param_1 + 0x120);
  if (cVar2 == '\x05') {
    lVar17 = *(long *)(DAT_710532f730 + 8);
    lVar18 = *(long *)(lVar17 + 0x318);
    lVar16 = *(long *)(lVar18 + 8);
    uVar10 = FUN_710327d930(lVar16,*(ulong *)(param_1 + 0x128));
    uVar11 = FUN_710327d930(lVar16,0xd61d998cb);
    bVar5 = (uVar10 & 0xffffffffff) != 0;
    bVar6 = (uVar10 & 0xff00000000000000) == 0x2d00000000000000;
    if (((!bVar6 || !bVar5) || ((uVar11 & 0xff00000000000000) != 0x2d00000000000000)) ||
       ((uVar11 & 0xffffffffff) == 0)) {
      if (((uVar11 & 0xffffffffff) != 0 && (uVar11 & 0xff00000000000000) == 0x2d00000000000000) !=
          ((uVar10 & 0xff00000000000000) == 0x2d00000000000000 && (uVar10 & 0xffffffffff) != 0))
      goto LAB_7101d2746c;
LAB_7101d27520:
      if (((((*puVar1 & 0xff00000000000000) == 0xc100000000000000) &&
           ((*puVar1 & 0xffffffffff) != 0)) &&
          (((*(ulong *)(param_1 + 0x128) & 0xffffffffff) != 0 || (*(int *)(param_1 + 0x130) < 1))))
         && (uVar9 = FUN_7101782120(puVar1,extraout_x1_00,uVar13,ppppbVar14,param_5,param_6,param_7,
                                    param_8), 0x98967e < uVar9)) {
        *(undefined1 *)(param_1 + 0x25b) = 1;
      }
      goto LAB_7101d2772c;
    }
    if (((uVar11 ^ uVar10) & 0xffffffffff) == 0) goto LAB_7101d27520;
LAB_7101d2746c:
    lVar16 = *(long *)(lVar18 + 8);
    uVar11 = FUN_710327d930(lVar16,0x155f9548cb);
    if (((bVar6 && bVar5) && ((uVar11 & 0xff00000000000000) == 0x2d00000000000000)) &&
       ((uVar11 & 0xffffffffff) != 0)) {
      if (((uVar11 ^ uVar10) & 0xffffffffff) == 0) {
LAB_7101d2758c:
        if ((((*puVar1 & 0xff00000000000000) == 0xc100000000000000) &&
            ((*puVar1 & 0xffffffffff) != 0)) &&
           ((((*(ulong *)(param_1 + 0x128) & 0xffffffffff) != 0 || (*(int *)(param_1 + 0x130) < 1))
            && (uVar9 = FUN_7101782120(puVar1,extraout_x1_01,uVar13,ppppbVar14,param_5,param_6,
                                       param_7,param_8), 0x98967e < uVar9)))) {
          *(undefined1 *)(param_1 + 0x25c) = 1;
        }
        goto LAB_7101d2772c;
      }
    }
    else if (((uVar11 & 0xffffffffff) != 0 && (uVar11 & 0xff00000000000000) == 0x2d00000000000000)
             == (bVar6 && bVar5)) goto LAB_7101d2758c;
    uVar11 = FUN_710327d930(lVar16,*(ulong *)(param_1 + 0x128));
    iVar7 = FUN_710338b490(uVar11);
    if (iVar7 == 1) {
      uVar8 = FUN_710327de70(lVar17 + 0x310,uVar10);
      uVar9 = uVar8 - 1;
      if ((uVar9 & 0xff) < 0x10) {
        if ((uVar8 & 0xff) < 0xe) {
          if (0xc < (uVar9 & 0xff)) {
LAB_7101d27944:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar5 = *(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) +
                           ((ulong)uVar9 & 0xff)) == 'c';
        }
        else {
          uVar8 = uVar8 - 0xe;
          if ((~uVar8 & 0xff) == 0) goto LAB_7101d274dc;
          if (2 < (uVar8 & 0xff)) goto LAB_7101d27944;
          bVar5 = *(short *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) +
                             (ulong)(byte)uVar8 * 2 + 0xe) == 999;
        }
      }
      else {
LAB_7101d274dc:
        bVar5 = false;
      }
LAB_7101d27728:
      *(bool *)(param_1 + 0x259) = bVar5;
    }
    else {
      uVar11 = FUN_710327d930(*(long *)(*(long *)(lVar17 + 0x318) + 8),0x18723aaa88);
      if (((bVar6 && bVar5) && ((uVar11 & 0xff00000000000000) == 0x2d00000000000000)) &&
         ((uVar11 & 0xffffffffff) != 0)) {
        if (((uVar11 ^ uVar10) & 0xffffffffff) == 0) {
LAB_7101d27698:
          if (((((*puVar1 & 0xff00000000000000) == 0xc100000000000000) &&
               ((*puVar1 & 0xffffffffff) != 0)) &&
              ((*(byte *)(param_1 + 0x120) == 6 ||
               (((7 < *(byte *)(param_1 + 0x120) ||
                 ((*(ulong *)(param_1 + 0x128) & 0xffffffffff) != 0)) ||
                (*(int *)(param_1 + 0x130) < 1)))))) &&
             (uVar9 = FUN_7101782120(puVar1,extraout_x1_02,uVar13,ppppbVar14,param_5,param_6,param_7
                                     ,param_8), 0x62 < uVar9)) {
            bVar5 = true;
            goto LAB_7101d27728;
          }
        }
      }
      else if (((uVar11 & 0xffffffffff) != 0 && (uVar11 & 0xff00000000000000) == 0x2d00000000000000)
               == (bVar6 && bVar5)) goto LAB_7101d27698;
    }
LAB_7101d2772c:
    cVar2 = *(char *)(param_1 + 0x120);
  }
  *(undefined1 *)(param_1 + 0x25a) = 0;
  if (cVar2 == '\x04') {
    lVar18 = *(long *)(DAT_710532f730 + 8);
    lVar17 = *(long *)(lVar18 + 0x1d8);
    uVar8 = FUN_71032a7800(lVar17,*(ulong *)(param_1 + 0x128));
    lVar16 = *(long *)(lVar17 + 0x20);
    uVar9 = (int)((ulong)(*(long *)(lVar17 + 0x28) - lVar16) >> 6) * -0x33333333;
    if ((uVar9 <= uVar8) || (uVar4 = *(ushort *)(lVar16 + (ulong)uVar8 * 0x140), uVar4 == 0xffff)) {
      lVar16 = *(long *)(lVar18 + 0x1d8);
      uVar9 = 0xffffffff;
LAB_7101d277e4:
      if (((uint)((int)((ulong)(*(long *)(lVar16 + 0x28) - *(long *)(lVar16 + 0x20)) >> 6) *
                 -0x33333333) <= uVar9) ||
         (*(char *)(*(long *)(lVar16 + 0x20) + (ulong)uVar9 * 0x140 + 0x5e) != '\x02')) {
        uVar10 = 0;
        psVar15 = (short *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xb8) + 0x3e);
        do {
          if (psVar15[-0x1a] == -1) {
LAB_7101d27874:
            bVar5 = (((uint)uVar10 ^ 0xffffffff) & 0xffff) == 0;
            goto LAB_7101d27880;
          }
          if (*psVar15 == -1) {
            uVar10 = uVar10 + 1;
            goto LAB_7101d27874;
          }
          uVar10 = uVar10 + 2;
          psVar15 = psVar15 + 0x34;
        } while (uVar10 >> 4 < 0x177);
        bVar5 = true;
LAB_7101d27880:
        *(bool *)(param_1 + 0x25a) = bVar5;
        cVar2 = *(char *)(param_1 + 600);
        goto joined_r0x007101d27888;
      }
      goto LAB_7101d27814;
    }
    uVar3 = *(ushort *)(lVar17 + (long)(short)uVar4 * 2 + 0x60);
    if ((uVar9 <= uVar3) || (*(char *)(lVar16 + (ulong)uVar3 * 0x140 + 0x5e) != '\x03')) {
      lVar16 = *(long *)(lVar18 + 0x1d8);
      uVar9 = (uint)*(ushort *)(lVar16 + ((long)((ulong)uVar4 << 0x30) >> 0x2f) + 0x60);
      goto LAB_7101d277e4;
    }
    cVar2 = *(char *)(param_1 + 600);
  }
  else {
LAB_7101d27814:
    cVar2 = *(char *)(param_1 + 600);
  }
  bVar5 = false;
joined_r0x007101d27888:
  if (((((cVar2 != '\0') || (*(char *)(param_1 + 0x259) != '\0' || bVar5)) ||
       (*(char *)(param_1 + 0x25b) != '\0')) || (*(char *)(param_1 + 0x25c) != '\0')) &&
     (((lVar16 = *(long *)(*(long *)(param_1 + 0x108) + 8), lVar16 != 0 &&
       (plVar12 = (long *)FUN_71037964b0(lVar16,0x71044229ef), plVar12 != (long *)0x0)) &&
      (uVar10 = (**(code **)(*plVar12 + 0x130))(), (uVar10 & 1) != 0)))) {
    FUN_7103778630(0,*(long *)(param_1 + 0x108),0x71044229ef);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x71042f856f);
  }
  uVar10 = local_68;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  return;
}

