// addr:      7101cd12c0
// offset:    0x1cd12c0
// name:      FUN_7101cd12c0
// mangled:   
// signature: undefined __cdecl FUN_7101cd12c0(long param_1, ulong param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cd12c0(long param_1,ulong param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  char *pcVar8;
  long *********ppppppppplVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long ********local_4f0;
  ulong local_4e8;
  long ********local_4e0;
  ulong local_4d8;
  undefined2 local_4d0;
  undefined4 local_4cc;
  undefined2 local_4c8;
  undefined8 local_488;
  undefined8 local_480;
  undefined5 uStack_478;
  undefined3 local_473;
  undefined5 uStack_470;
  undefined8 local_460;
  undefined8 auStack_3e8 [80];
  uint local_168;
  uint local_164;
  undefined1 *local_150;
  undefined1 *local_140;
  undefined1 *local_130;
  undefined1 *local_120;
  undefined1 *local_110;
  undefined1 *local_100;
  undefined1 *local_f0;
  undefined1 *local_e0;
  undefined1 *local_d0;
  undefined1 *local_c0;
  ulong local_88 [3];
  uint local_68 [2];
  
  *(undefined8 *)(param_1 + 0x128) = 0;
  lVar2 = DAT_710532f8f8;
  uVar3 = FUN_710334fdc0(*(long *)(DAT_710532f8f8 + 8),param_2);
  local_88[0] = (ulong)uVar3;
  lVar11 = **(long **)(param_1 + 0x100);
  if (4 < *(ushort *)(param_1 + 0x120)) goto switchD_7101cd132c_caseD_3;
  lVar1 = lVar11 + 8;
  switch(*(ushort *)(param_1 + 0x120)) {
  case 0:
    pcVar8 = "set_rep_mfshot_dl";
    break;
  case 1:
    pcVar8 = "set_rep_edit";
    break;
  case 2:
    local_4cc = 0;
    local_4c8 = 0;
    local_4d0 = 0;
    local_4e0 = (long ********)0x0;
    local_4d8 = 0;
    uStack_470 = 0;
    local_488 = 0;
    local_460 = 0;
    local_480 = 0;
    uStack_478 = 0;
    local_473 = 0;
    FUN_710143c4d0(auStack_3e8);
    local_150 = &DAT_c1ffff0000000000;
    local_140 = &DAT_c1ffff0000000000;
    local_130 = &DAT_c1ffff0000000000;
    local_120 = &DAT_c1ffff0000000000;
    ppppppppplVar9 = &local_4e0;
    local_110 = &DAT_c1ffff0000000000;
    local_100 = &DAT_c1ffff0000000000;
    local_f0 = &DAT_c1ffff0000000000;
    local_e0 = &DAT_c1ffff0000000000;
    local_d0 = &DAT_c1ffff0000000000;
    local_c0 = &DAT_c1ffff0000000000;
    FUN_710334e9e0(*(long *)(lVar2 + 8),(int *)local_88,ppppppppplVar9);
    lVar12 = *(long *)(DAT_710532f730 + 8);
    lVar2 = lVar12 + 0x170;
    if (local_168 == 0xffffffff) {
LAB_7101cd14d0:
      if (local_164 == 0xffffffff) goto switchD_7101cd132c_caseD_3;
      if (local_164 < 0x16c) {
        iVar7 = (&DAT_710454a7ec)[(long)(int)local_164 * 0x12];
      }
      else {
        iVar7 = -1;
      }
      uVar5 = FUN_71032b24e0(lVar2,iVar7);
      if (((uVar5 & 0xff00000000000000) != 0x6900000000000000) ||
         (uVar4 = uVar5 & 0xffffffffff, uVar3 = local_164, uVar4 == 0))
      goto switchD_7101cd132c_caseD_3;
    }
    else {
      if (local_168 < 0x16c) {
        iVar7 = (&DAT_710454a7ec)[(long)(int)local_168 * 0x12];
      }
      else {
        iVar7 = -1;
      }
      uVar5 = FUN_71032b24e0(lVar2,iVar7);
      if (((uVar5 & 0xff00000000000000) != 0x6900000000000000) ||
         (uVar4 = uVar5 & 0xffffffffff, uVar3 = local_168, uVar4 == 0)) goto LAB_7101cd14d0;
    }
    uVar6 = FUN_71032b23e0(*(long *)(*(long *)(lVar12 + 0x178) + 8),0xd56784f97);
    if (((uVar5 & 0xff00000000000000) == 0x6900000000000000) &&
       (((uVar4 != 0 && ((uVar6 & 0xff00000000000000) == 0x6900000000000000)) &&
        ((uVar6 & 0xffffffffff) != 0)))) {
      if (((uVar6 ^ uVar5) & 0xffffffffff) != 0) goto LAB_7101cd156c;
LAB_7101cd1614:
      FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),0x710434a491);
      FUN_7103776910(&local_4f0,lVar1,(long ****)"set_rep_edit",ppppppppplVar9,param_4,param_5,
                     param_6,param_7,param_8);
      uVar4 = FUN_7101cedc80(*(long *)(DAT_7105325cd0 + 8),param_2,&local_4f0,param_4,param_5,
                             param_6,param_7,param_8);
      uVar5 = local_4e8;
      if ((uVar4 & 1) == 0) {
        *(ulong *)(param_1 + 0x128) = param_2;
      }
    }
    else {
      if (((uVar6 & 0xffffffffff) != 0 && (uVar6 & 0xff00000000000000) == 0x6900000000000000) ==
          ((uVar5 & 0xff00000000000000) == 0x6900000000000000 && uVar4 != 0)) goto LAB_7101cd1614;
LAB_7101cd156c:
      iVar7 = 0xe;
      iVar10 = iVar7;
      if (uVar3 < 0x16c) {
        if ((&DAT_710454a7f0)[(long)(int)uVar3 * 0x12] == 1) {
          iVar7 = 0xf;
        }
        iVar10 = 0x10;
        if ((&DAT_710454a7f0)[(long)(int)uVar3 * 0x12] != 2) {
          iVar10 = iVar7;
        }
      }
      FUN_7103776910(&local_4f0,lVar1,(long ****)"set_rep_replay",ppppppppplVar9,param_4,param_5,
                     param_6,param_7,param_8);
      uVar5 = FUN_7103238c50(uVar5,iVar10);
      if ((uVar5 & 0xffffffffff) == 0) {
        local_68[0] = 0xffffff;
      }
      else {
        FUN_710353da30(local_68,uVar5);
      }
      uVar3 = local_68[0];
      FUN_7103778c70(local_4e8,local_68,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8);
      uVar5 = local_4e8;
      if (uVar3 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,uVar3,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8);
        local_68[0] = 0xffffff;
      }
    }
    local_4e8 = 0;
    local_4f0 = (long ********)&PTR_FUN_710523d9a8;
    if (uVar5 == 0) goto switchD_7101cd132c_caseD_3;
    goto LAB_7101cd1440;
  case 3:
    goto switchD_7101cd132c_caseD_3;
  case 4:
    pcVar8 = "set_rep_movie";
  }
  FUN_7103776910(&local_4e0,lVar1,(long ****)pcVar8,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  uVar4 = FUN_7101cedc80(*(long *)(DAT_7105325cd0 + 8),param_2,&local_4e0,param_4,param_5,param_6,
                         param_7,param_8);
  uVar5 = local_4d8;
  if ((uVar4 & 1) == 0) {
    *(ulong *)(param_1 + 0x128) = param_2;
  }
  local_4e0 = (long ********)&PTR_FUN_710523d9a8;
  local_4d8 = 0;
  if (uVar5 != 0) {
LAB_7101cd1440:
    FUN_710392eb40(uVar5);
  }
switchD_7101cd132c_caseD_3:
  if (*(long *)(param_1 + 0x128) == 0) {
    FUN_7103778760(*(long *)(lVar11 + 0x10),0x7104433949);
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),0x710432a87b);
    FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),0x71043beebf);
  }
  return;
}

