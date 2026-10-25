// addr:      7101ad36e0
// offset:    0x1ad36e0
// name:      FUN_7101ad36e0
// mangled:   
// signature: undefined __cdecl FUN_7101ad36e0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101ad36e0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar12;
  byte ****ppppbVar13;
  short *psVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined **local_60;
  ulong local_58;
  
  FUN_7103776910(&local_60,param_1 + 0x100,(long ****)"set_txt_have_num",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  puVar1 = (ulong *)(param_1 + 0x118);
  if (((*(ulong *)(param_1 + 0x118) & 0xff00000000000000) == 0xc100000000000000 &&
       (*(ulong *)(param_1 + 0x118) & 0xffffffffff) != 0) &&
     ((((*(byte *)(param_1 + 0x120) == 6 || (7 < *(byte *)(param_1 + 0x120))) ||
       ((*(ulong *)(param_1 + 0x128) & 0xffffffffff) != 0)) || (*(int *)(param_1 + 0x130) < 1)))) {
    uVar8 = FUN_7101782120(puVar1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
    ppppbVar13 = (byte ****)(ulong)uVar8;
  }
  else {
    ppppbVar13 = (byte ****)0x0;
  }
  uVar12 = 1;
  FUN_710377a280((long)&local_60,(byte *)"mnu_shop_buy_possession_n",1);
  *(undefined1 *)(param_1 + 0x250) = 0;
  if (**(uint **)**(undefined8 **)(*DAT_7105314510 + 0x1b8) < *(uint *)(param_1 + 0x138)) {
    *(undefined1 *)(param_1 + 0x250) = 1;
  }
  cVar2 = *(char *)(param_1 + 0x120);
  *(undefined1 *)(param_1 + 0x251) = 0;
  if (cVar2 == '\x05') {
    lVar17 = *(long *)(DAT_710532f730 + 8);
    uVar9 = FUN_710327d930(*(long *)(*(long *)(lVar17 + 0x318) + 8),*(ulong *)(param_1 + 0x128));
    uVar10 = FUN_710327d930(*(long *)(*(long *)(lVar17 + 0x318) + 8),*(ulong *)(param_1 + 0x128));
    iVar6 = FUN_710338b490(uVar10);
    if (iVar6 == 1) {
      uVar7 = FUN_710327de70(lVar17 + 0x310,uVar9);
      uVar8 = uVar7 - 1;
      if ((uVar8 & 0xff) < 0x10) {
        if ((uVar7 & 0xff) < 0xe) {
          if (0xc < (uVar8 & 0xff)) {
LAB_7101ad3b84:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar5 = *(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) +
                           ((ulong)uVar8 & 0xff)) == 'c';
        }
        else {
          uVar7 = uVar7 - 0xe;
          if ((~uVar7 & 0xff) == 0) goto LAB_7101ad3818;
          if (2 < (uVar7 & 0xff)) goto LAB_7101ad3b84;
          bVar5 = *(short *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) +
                             (ulong)(byte)uVar7 * 2 + 0xe) == 999;
        }
      }
      else {
LAB_7101ad3818:
        bVar5 = false;
      }
LAB_7101ad397c:
      *(bool *)(param_1 + 0x251) = bVar5;
    }
    else {
      uVar10 = FUN_710327d930(*(long *)(*(long *)(lVar17 + 0x318) + 8),0x18723aaa88);
      if ((((uVar9 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar9 & 0xffffffffff) != 0)) &&
         (((uVar10 & 0xff00000000000000) == 0x2d00000000000000 && ((uVar10 & 0xffffffffff) != 0))))
      {
        if (((uVar10 ^ uVar9) & 0xffffffffff) == 0) {
LAB_7101ad38ac:
          if (((((*puVar1 & 0xff00000000000000) == 0xc100000000000000) &&
               ((*puVar1 & 0xffffffffff) != 0)) &&
              ((*(byte *)(param_1 + 0x120) == 6 ||
               (((7 < *(byte *)(param_1 + 0x120) ||
                 ((*(ulong *)(param_1 + 0x128) & 0xffffffffff) != 0)) ||
                (*(int *)(param_1 + 0x130) < 1)))))) &&
             (uVar8 = FUN_7101782120(puVar1,extraout_x1_00,uVar12,ppppbVar13,param_5,param_6,param_7
                                     ,param_8), 0x62 < uVar8)) {
            bVar5 = true;
            goto LAB_7101ad397c;
          }
        }
      }
      else if (((uVar10 & 0xffffffffff) != 0 && (uVar10 & 0xff00000000000000) == 0x2d00000000000000)
               == ((uVar9 & 0xff00000000000000) == 0x2d00000000000000 && (uVar9 & 0xffffffffff) != 0
                  )) goto LAB_7101ad38ac;
    }
    cVar2 = *(char *)(param_1 + 0x120);
  }
  *(undefined1 *)(param_1 + 0x252) = 0;
  if (cVar2 == '\x04') {
    lVar16 = *(long *)(DAT_710532f730 + 8);
    lVar15 = *(long *)(lVar16 + 0x1d8);
    uVar7 = FUN_71032a7800(lVar15,*(ulong *)(param_1 + 0x128));
    lVar17 = *(long *)(lVar15 + 0x20);
    uVar8 = (int)((ulong)(*(long *)(lVar15 + 0x28) - lVar17) >> 6) * -0x33333333;
    if ((uVar8 <= uVar7) || (uVar4 = *(ushort *)(lVar17 + (ulong)uVar7 * 0x140), uVar4 == 0xffff)) {
      lVar17 = *(long *)(lVar16 + 0x1d8);
      uVar8 = 0xffffffff;
LAB_7101ad3a38:
      if (((uint)((int)((ulong)(*(long *)(lVar17 + 0x28) - *(long *)(lVar17 + 0x20)) >> 6) *
                 -0x33333333) <= uVar8) ||
         (*(char *)(*(long *)(lVar17 + 0x20) + (ulong)uVar8 * 0x140 + 0x5e) != '\x02')) {
        uVar9 = 0;
        psVar14 = (short *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xb8) + 0x3e);
        do {
          if (psVar14[-0x1a] == -1) {
LAB_7101ad3ac8:
            bVar5 = (((uint)uVar9 ^ 0xffffffff) & 0xffff) == 0;
            goto LAB_7101ad3ad4;
          }
          if (*psVar14 == -1) {
            uVar9 = uVar9 + 1;
            goto LAB_7101ad3ac8;
          }
          uVar9 = uVar9 + 2;
          psVar14 = psVar14 + 0x34;
        } while (uVar9 >> 4 < 0x177);
        bVar5 = true;
LAB_7101ad3ad4:
        *(bool *)(param_1 + 0x252) = bVar5;
        cVar2 = *(char *)(param_1 + 0x250);
        goto joined_r0x007101ad3adc;
      }
      goto LAB_7101ad3a68;
    }
    uVar3 = *(ushort *)(lVar15 + (long)(short)uVar4 * 2 + 0x60);
    if ((uVar8 <= uVar3) || (*(char *)(lVar17 + (ulong)uVar3 * 0x140 + 0x5e) != '\x03')) {
      lVar17 = *(long *)(lVar16 + 0x1d8);
      uVar8 = (uint)*(ushort *)(lVar17 + ((long)((ulong)uVar4 << 0x30) >> 0x2f) + 0x60);
      goto LAB_7101ad3a38;
    }
    cVar2 = *(char *)(param_1 + 0x250);
  }
  else {
LAB_7101ad3a68:
    cVar2 = *(char *)(param_1 + 0x250);
  }
  bVar5 = false;
joined_r0x007101ad3adc:
  if ((((cVar2 != '\0') || (*(char *)(param_1 + 0x251) != '\0' || bVar5)) &&
      (lVar17 = *(long *)(*(long *)(param_1 + 0x108) + 8), lVar17 != 0)) &&
     ((plVar11 = (long *)FUN_71037964b0(lVar17,0x71044229ef), plVar11 != (long *)0x0 &&
      (uVar9 = (**(code **)(*plVar11 + 0x130))(), (uVar9 & 1) != 0)))) {
    FUN_7103778630(0,*(long *)(param_1 + 0x108),0x71044229ef);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x71042f856f);
  }
  uVar9 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  return;
}

