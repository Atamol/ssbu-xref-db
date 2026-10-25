// addr:      7101eab0b0
// offset:    0x1eab0b0
// name:      FUN_7101eab0b0
// mangled:   
// signature: undefined __cdecl FUN_7101eab0b0(long param_1, int param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101eab0b0(long param_1,int param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long *********ppppppppplVar7;
  byte bVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  uint auStack_110 [2];
  char acStack_108 [64];
  undefined **local_c8;
  long *local_c0;
  undefined **local_b8;
  ulong local_b0;
  undefined **local_a8;
  ulong local_a0 [8];
  
  if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
LAB_7101eab608:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar14 = **(long **)**(undefined8 **)(param_1 + 0x10);
  if (param_2 < 0) {
LAB_7101eab24c:
    FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x10),0x710437cc43);
    return;
  }
  if ((((ulong)(*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) >> 2) <=
        (ulong)(long)param_2) ||
      (uVar2 = *(uint *)(*(long *)(param_1 + 0x138) + (long)param_2 * 4), uVar2 == 0)) ||
     (*(char *)*DAT_7105314510 != '\0')) goto LAB_7101eab24c;
  plVar4 = (long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x298);
  lVar5 = *plVar4;
  if ((lVar5 == plVar4[1]) || (plVar4[0xb] == 0)) goto LAB_7101eab24c;
  plVar9 = plVar4 + 10;
  plVar13 = (long *)*plVar9;
  if (plVar13 == (long *)0x0) goto LAB_7101eab24c;
  plVar12 = plVar9;
  do {
    bVar3 = *(uint *)((long)plVar13 + 0x1c) < uVar2;
    if (!bVar3) {
      plVar12 = plVar13;
    }
    plVar13 = (long *)plVar13[bVar3];
  } while (plVar13 != (long *)0x0);
  if (((plVar12 == plVar9) || (uVar2 < *(uint *)((long)plVar12 + 0x1c))) ||
     (uVar11 = (ulong)(int)plVar12[4], (int)plVar12[4] == -1)) goto LAB_7101eab24c;
  uVar10 = (plVar4[1] - lVar5 >> 3) * 0x5adbe6e3d89936fb;
  if (uVar10 < uVar11 || uVar10 - uVar11 == 0) goto LAB_7101eab608;
  if (*(short *)(lVar5 + uVar11 * 0x32198 + 4) != 2) goto LAB_7101eab24c;
  ppppppppplVar7 = (long *********)0x32198;
  memcpy(*(void **)(param_1 + 0x170),(void *)(lVar5 + uVar11 * 0x32198),0x32198);
  FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x10),0x71043cfbe8);
  FUN_7103776640(&local_b8,lVar14 + 8,(byte ****)"set_parts_preview",ppppppppplVar7,param_4,param_5,
                 param_6,param_7,param_8);
  iVar1 = *(int *)(*(long *)(param_1 + 0x170) + 0x134);
  if (iVar1 == 1) {
    FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x10),0x7104433804);
    pcVar6 = "preview_m";
    uVar11 = local_b0;
  }
  else if (iVar1 == 2) {
    FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x10),0x71042b4b0c);
    pcVar6 = "preview_l";
    uVar11 = local_b0;
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x10),0x71042a3733);
    pcVar6 = "preview_s";
    uVar11 = local_b0;
  }
  FUN_7103778300(0x3f800000,uVar11,(long)pcVar6);
  if (*(char *)(*(long *)(param_1 + 0x170) + 0x156) == '\0') {
    pcVar6 = "limit_off";
  }
  else {
    pcVar6 = "limit_on";
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x10),(long)pcVar6);
  if (*(char *)(*(long *)(param_1 + 0x170) + 0xc) == '\x01') {
    FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x10),0x7104443e4b);
    lVar5 = *(long *)(lVar14 + 0x10);
    pcVar6 = "cleator_on";
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x10),0x71042d6a14);
    lVar5 = *(long *)(lVar14 + 0x10);
    pcVar6 = "cleator_off";
  }
  FUN_7103778300(0x3f800000,lVar5,(long)pcVar6);
  lVar5 = *(long *)(param_1 + 0x160);
  if (lVar5 != 0) {
    lVar15 = param_1 + 0x160;
    do {
      bVar3 = *(uint *)(lVar5 + 0x1c) < uVar2;
      if (!bVar3) {
        lVar15 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)bVar3 * 8);
    } while (lVar5 != 0);
    if ((lVar15 != param_1 + 0x160) && (*(uint *)(lVar15 + 0x1c) <= uVar2)) {
      FUN_7103776910(&local_a8,(long)&local_b8,(long ****)"set_rep_stage",ppppppppplVar7,param_4,
                     param_5,param_6,param_7,param_8);
      if (*(long *)(*DAT_710532f860 + 0x10) != 0) {
        uVar2 = *(uint *)(lVar15 + 0x20);
        plVar9 = (long *)(*DAT_710532f860 + 8);
        plVar13 = (long *)*plVar9;
        plVar4 = plVar9;
        if (plVar13 != (long *)0x0) {
          do {
            if (*(uint *)(plVar13 + 4) >= uVar2) {
              plVar4 = plVar13;
            }
            plVar13 = (long *)plVar13[*(uint *)(plVar13 + 4) < uVar2];
          } while (plVar13 != (long *)0x0);
          if ((plVar4 != plVar9) && (*(uint *)(plVar4 + 4) <= uVar2)) {
            FUN_7103779480((long)&local_a8,(long)(plVar4 + 5),ppppppppplVar7,param_4,param_5,param_6
                           ,param_7,param_8);
          }
        }
      }
      uVar10 = local_a0[0];
      local_a8 = &PTR_FUN_710523d9a8;
      local_a0[0] = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
    }
  }
  FUN_7103776910(&local_a8,(long)&local_b8,(long ****)"set_txt_st_name",ppppppppplVar7,param_4,
                 param_5,param_6,param_7,param_8);
  lVar5 = *(long *)(param_1 + 0x170) + 0x110;
  FUN_710377a310((long)&local_a8,1);
  uVar10 = local_a0[0];
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0[0] = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  FUN_7103776910(&local_c8,(long)&local_b8,(long ****)"set_txt_music_title",lVar5,param_4,param_5,
                 param_6,param_7,param_8);
  uVar10 = *(ulong *)(*(long *)(param_1 + 0x170) + 0x140);
  if (((uVar10 & 0xff00000000000000) == 0xd900000000000000) && ((uVar10 & 0xffffffffff) != 0)) {
    FUN_71032570e0((uint *)&local_a8,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x278),uVar10);
    FUN_71003a4ca0(auStack_110,"bgm_title_%s",local_a0,uVar10,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_710377a120((long)&local_c8,acStack_108,uVar10,param_4,param_5,param_6,param_7,param_8);
    lVar5 = *local_c0;
    plVar4 = local_c0;
    if (lVar5 == 0) goto LAB_7101eab508;
    bVar8 = *(byte *)(lVar5 + 0x58) | 1;
  }
  else {
    lVar5 = *local_c0;
    plVar4 = local_c0;
    if (lVar5 == 0) goto LAB_7101eab508;
    bVar8 = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  *(byte *)(lVar5 + 0x58) = bVar8;
  plVar4 = local_c0;
LAB_7101eab508:
  lVar5 = *(long *)(param_1 + 0x170);
  lVar15 = (ulong)*(byte *)(lVar5 + 0x22) * 1000000 + (ulong)*(byte *)(lVar5 + 0x23) * 1000;
  lVar5 = (ulong)*(ushort *)(lVar5 + 0x1e) * 1000000 + (ulong)*(byte *)(lVar5 + 0x20) * 1000 +
          (ulong)*(byte *)(lVar5 + 0x21);
  FUN_7103776910(&local_a8,(long)&local_b8,(long ****)"set_txt_make_time",uVar10,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a310((long)&local_a8,2);
  uVar10 = local_a0[0];
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0[0] = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  FUN_7103776910(&local_a8,lVar14 + 8,(long ****)"set_txt_author_01",lVar5,lVar15,param_5,param_6,
                 param_7,param_8);
  FUN_710377a310((long)&local_a8,1);
  uVar10 = local_a0[0];
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0[0] = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  local_c8 = &PTR_FUN_710523d9a8;
  local_c0 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = 0;
  if (uVar11 != 0) {
    uVar10 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar11);
  }
  return;
}

