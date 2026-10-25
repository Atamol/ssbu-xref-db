// addr:      7101eaa850
// offset:    0x1eaa850
// name:      FUN_7101eaa850
// mangled:   
// signature: undefined __cdecl FUN_7101eaa850(long param_1, int param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101eaa850(long param_1,int param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  long *********ppppppppplVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined **local_208;
  long *local_200;
  undefined **local_1f8;
  ulong local_1f0;
  undefined4 local_1e8 [2];
  undefined1 auStack_1e0 [4];
  char local_1dc;
  long ********apppppppplStack_d8 [4];
  undefined8 local_b4;
  undefined8 local_a8;
  undefined7 uStack_a0;
  undefined1 local_99;
  undefined5 uStack_98;
  char cStack_93;
  char cStack_92;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (param_2 == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x710434aae7);
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x71042f8a93);
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x710441303d);
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x71042d6a14);
    return;
  }
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x71042e7958);
  puVar13 = *(undefined8 **)(*DAT_7105314510 + 0x298);
  local_1e8[0] = 0;
  memset(auStack_1e0,0,0x10a);
  local_b4 = 1;
  local_a8 = 0xd9ffff0000000000;
  uStack_98 = 0;
  cStack_93 = '\0';
  cStack_92 = '\0';
  uStack_a0 = 0;
  local_99 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  if ((ulong)(*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138) >> 2) <= (ulong)(long)param_2)
  {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x138) + (long)param_2 * 4);
  puVar5 = local_1e8;
  uVar3 = FUN_71017ceba0(puVar13,uVar1,puVar5);
  if ((uVar3 & 1) == 0) {
    return;
  }
  ppppppppplVar6 = apppppppplStack_d8;
  FUN_7103776910(&local_1f8,param_3,(long ****)"set_txt_00",puVar5,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_710377a310((long)&local_1f8,1);
  FUN_7103776910(&local_208,param_3,(long ****)"set_rep_00",ppppppppplVar6,param_4,param_5,param_6,
                 param_7,param_8);
  lVar9 = *(long *)(param_1 + 0x160);
  if (lVar9 == 0) {
LAB_7101eaa998:
    lVar9 = *local_200;
    plVar11 = local_200;
    if (lVar9 == 0) goto LAB_7101eaa9b0;
    bVar8 = *(byte *)(lVar9 + 0x58) & 0xfe;
  }
  else {
    lVar7 = param_1 + 0x160;
    do {
      bVar2 = *(uint *)(lVar9 + 0x1c) < uVar1;
      if (!bVar2) {
        lVar7 = lVar9;
      }
      lVar9 = *(long *)(lVar9 + (ulong)bVar2 * 8);
    } while (lVar9 != 0);
    if ((lVar7 == param_1 + 0x160) || (uVar1 < *(uint *)(lVar7 + 0x1c))) goto LAB_7101eaa998;
    if (*(long *)(*DAT_710532f860 + 0x10) != 0) {
      uVar1 = *(uint *)(lVar7 + 0x20);
      plVar10 = (long *)(*DAT_710532f860 + 8);
      plVar12 = (long *)*plVar10;
      plVar11 = plVar10;
      if (plVar12 != (long *)0x0) {
        do {
          if (*(uint *)(plVar12 + 4) >= uVar1) {
            plVar11 = plVar12;
          }
          plVar12 = (long *)plVar12[*(uint *)(plVar12 + 4) < uVar1];
        } while (plVar12 != (long *)0x0);
        if ((plVar11 != plVar10) && (*(uint *)(plVar11 + 4) <= uVar1)) {
          FUN_7103779480((long)&local_208,(long)(plVar11 + 5),ppppppppplVar6,param_4,param_5,param_6
                         ,param_7,param_8);
        }
      }
    }
    lVar9 = *local_200;
    plVar11 = local_200;
    if (lVar9 == 0) goto LAB_7101eaa9b0;
    bVar8 = *(byte *)(lVar9 + 0x58) | 1;
  }
  *(byte *)(lVar9 + 0x58) = bVar8;
  plVar11 = local_200;
LAB_7101eaa9b0:
  if ((int)local_b4 == 1) {
    lVar9 = *(long *)(param_3 + 8);
    pcVar4 = "preview_m";
  }
  else if ((int)local_b4 == 2) {
    lVar9 = *(long *)(param_3 + 8);
    pcVar4 = "preview_l";
  }
  else {
    lVar9 = *(long *)(param_3 + 8);
    pcVar4 = "preview_s";
  }
  FUN_7103778300(0x3f800000,lVar9,(long)pcVar4);
  if (cStack_93 == '\0') {
    pcVar4 = "favorite_off";
  }
  else {
    pcVar4 = "favorite_on";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar4);
  if (cStack_92 == '\0') {
    pcVar4 = "fourperson_off";
  }
  else {
    pcVar4 = "fourperson_on";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar4);
  if (local_1dc == '\x01') {
    pcVar4 = "download_on";
  }
  else {
    pcVar4 = "download_off";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar4);
  local_208 = &PTR_FUN_710523d9a8;
  local_200 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar11);
  }
  uVar3 = local_1f0;
  local_1f8 = &PTR_FUN_710523d9a8;
  local_1f0 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  return;
}

