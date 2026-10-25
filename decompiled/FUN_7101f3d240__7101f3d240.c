// addr:      7101f3d240
// offset:    0x1f3d240
// name:      FUN_7101f3d240
// mangled:   
// signature: undefined __cdecl FUN_7101f3d240(long param_1, int * param_2, long * * * * * * * * * param_3, undefined8 param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f3d240(long param_1,int *param_2,long *********param_3,byte ****param_4,ulong param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  long *********ppppppppplVar13;
  long ****pppplVar14;
  char cVar15;
  long *********ppppppppplVar16;
  long *********ppppppppplVar17;
  uint auStack_e0 [18];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar5 = (uint)param_5;
  ppppppppplVar13 = param_3;
  pppplVar14 = (long ****)param_5;
  if ((int)param_4 == 0x10) {
    if (*(char *)(param_1 + 0x21d) != '\0') {
      lVar10 = *(long *)(param_1 + 8);
      *(undefined1 *)(param_1 + 0x21d) = 0;
      pcVar11 = "anime_stop";
LAB_7101f3d2a8:
      FUN_7103778300(0x3f800000,lVar10,(long)pcVar11);
    }
  }
  else if (*(char *)(param_1 + 0x21d) == '\0') {
    lVar10 = *(long *)(param_1 + 8);
    pcVar11 = "anime_loop";
    *(undefined1 *)(param_1 + 0x21d) = 1;
    goto LAB_7101f3d2a8;
  }
  iVar1 = param_2[1];
  bVar2 = *(byte *)((long)param_2 + 0xb9);
  iVar8 = *(int *)(param_1 + 0x200);
  if ((iVar1 + -1 == 0) && (iVar8 == iVar1)) {
    if ((((*(char *)(param_1 + 0x220) == (char)param_2[0x30]) &&
         (*(byte *)(param_1 + 0x221) == (bVar2 ^ 1))) && (iVar8 == iVar1)) &&
       ((uint)*(byte *)(param_1 + 0x222) == (uVar5 & 1))) goto switchD_7101f3d350_default;
    *(undefined4 *)(param_1 + 0x200) = 1;
switchD_7101f3d350_caseD_0:
    if (bVar2 == 0) {
      lVar10 = *(long *)(param_1 + 8);
      pcVar11 = "type_movie_nobgm";
    }
    else if (((param_5 & 1) == 0) || ((char)param_2[0x30] != '\0')) {
      lVar10 = *(long *)(param_1 + 8);
      pcVar11 = "type_movie";
    }
    else {
      lVar10 = *(long *)(param_1 + 8);
      pcVar11 = "type_movie_bgm_ng";
    }
  }
  else {
    if (iVar8 == iVar1) goto switchD_7101f3d350_default;
    *(int *)(param_1 + 0x200) = iVar1;
    switch(iVar1 + -1) {
    case 0:
      goto switchD_7101f3d350_caseD_0;
    case 1:
      lVar10 = *(long *)(param_1 + 8);
      pcVar11 = "type_image";
      break;
    case 2:
      lVar10 = *(long *)(param_1 + 8);
      pcVar11 = "type_sound";
      break;
    case 3:
      lVar10 = *(long *)(param_1 + 8);
      pcVar11 = "type_tellop";
      break;
    default:
      goto switchD_7101f3d350_default;
    }
  }
  FUN_7103778300(0x3f800000,lVar10,(long)pcVar11);
switchD_7101f3d350_default:
  cVar15 = *(char *)((long)param_2 + 0xbf);
  if (*(char *)(param_1 + 0x21f) != cVar15) {
    pcVar11 = "delete_out";
    if (cVar15 != '\0') {
      pcVar11 = "delete_in";
    }
    *(char *)(param_1 + 0x21f) = cVar15;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)pcVar11);
  }
  if (*param_2 != 0) {
    if (*(int *)(param_1 + 0x200) == 4) {
      FUN_710377a310(param_1 + 0x1e0,1);
      FUN_710377a310(param_1 + 0x1f0,1);
      return;
    }
    if (*(int *)(param_1 + 0x200) == 3) {
      uVar12 = *(ulong *)(param_2 + 0x10);
      FUN_71032570e0((uint *)&local_98,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x278),uVar12);
      FUN_71003a4ca0(auStack_e0,"bgm_title_%s",&uStack_90,uVar12,param_4,pppplVar14,param_6,param_7,
                     param_8);
      FUN_710377a310(param_1 + 0x1e0,1);
      uVar12 = *(ulong *)(param_2 + 0x10);
      FUN_71032570e0((uint *)&local_98,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x278),uVar12);
      FUN_71003a4ca0(auStack_e0,"bgm_title_%s",&uStack_90,uVar12,param_4,pppplVar14,param_6,param_7,
                     param_8);
      FUN_710377a310(param_1 + 0x1f0,1);
      return;
    }
    return;
  }
  iVar1 = param_2[0xc];
  if ((bool)*(char *)(param_1 + 0x21e) != (iVar1 != 0)) {
    pcVar11 = "trans_on";
    if (iVar1 == 0) {
      pcVar11 = "trans_off";
    }
    *(bool *)(param_1 + 0x21e) = iVar1 != 0;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)pcVar11);
  }
  bVar3 = *(byte *)(param_1 + 0x221);
  if (bVar3 == 0) {
    bVar7 = *(char *)(param_1 + 0x220) != '\0';
  }
  else {
    bVar7 = true;
  }
  if (bVar2 == 0) {
    bVar6 = true;
  }
  else {
    bVar6 = (char)param_2[0x30] != '\0';
  }
  if ((bVar7 != bVar6) || ((uint)*(byte *)(param_1 + 0x222) != (uVar5 & 1))) {
    pcVar11 = "bgm_ng_off";
    if (bVar6 == false && ((uVar5 ^ 0xffffffff) & 1) == 0) {
      pcVar11 = "bgm_ng_on";
    }
    *(char *)(param_1 + 0x222) = (char)(uVar5 & 1);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)pcVar11);
    bVar3 = *(byte *)(param_1 + 0x221);
  }
  cVar15 = *(char *)(param_1 + 0x220);
  cVar4 = (char)param_2[0x30];
  if (((cVar15 != '\0') != (cVar4 != '\0')) || (bVar3 != (bVar2 ^ 1))) {
    pcVar11 = "nobgm_off";
    if (cVar4 == '\0' && bVar2 == 0) {
      pcVar11 = "nobgm_on";
    }
    *(byte *)(param_1 + 0x221) = bVar2 ^ 1;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)pcVar11);
    cVar4 = (char)param_2[0x30];
    cVar15 = *(char *)(param_1 + 0x220);
  }
  if (cVar15 != cVar4) {
    pcVar11 = "mute_off";
    if (cVar4 != '\0') {
      pcVar11 = "mute_on";
    }
    *(char *)(param_1 + 0x220) = cVar4;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)pcVar11);
  }
  iVar1 = param_2[10];
  local_98 = *(undefined8 *)(param_2 + 2);
  uStack_80 = *(undefined8 *)(param_2 + 8);
  uStack_90 = *(undefined8 *)(param_2 + 4);
  local_88 = *(undefined8 *)(param_2 + 6);
  for (ppppppppplVar17 = (long *********)param_3[1]; param_3 != ppppppppplVar17;
      ppppppppplVar17 = (long *********)ppppppppplVar17[1]) {
    ppppppppplVar13 = (long *********)&SUB_00000020;
    iVar8 = memcmp(ppppppppplVar17 + 3,&local_98,0x20);
    if ((iVar8 == 0) &&
       ((*(int *)(ppppppppplVar17 + 2) == 2 || (*(int *)(ppppppppplVar17 + 7) == iVar1)))) {
      if ((param_3 != ppppppppplVar17) && (*ppppppppplVar17[9] != (long *******)0x0)) {
        FUN_7103779480(param_1 + 400,(long)(ppppppppplVar17 + 8),ppppppppplVar13,param_4,pppplVar14,
                       param_6,param_7,param_8);
        cVar15 = '\x01';
        goto LAB_7101f3d6c8;
      }
      break;
    }
  }
  FUN_7103779650(*(long *)(param_1 + 0x198));
  cVar15 = '\0';
LAB_7101f3d6c8:
  if (*(char *)(param_1 + 0x223) != cVar15) {
    pcVar11 = "thumb_on";
    if (cVar15 == '\0') {
      pcVar11 = "thumb_off";
    }
    *(char *)(param_1 + 0x223) = cVar15;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)pcVar11);
  }
  local_98 = *(undefined8 *)(param_2 + 2);
  uStack_90 = *(undefined8 *)(param_2 + 4);
  local_88 = *(undefined8 *)(param_2 + 6);
  uStack_80 = *(undefined8 *)(param_2 + 8);
  iVar1 = param_2[10];
  iVar8 = param_2[0xb];
  ppppppppplVar16 = (long *********)param_3[1];
  ppppppppplVar17 = param_3;
  if (param_3 != ppppppppplVar16) {
    do {
      ppppppppplVar13 = (long *********)&SUB_00000020;
      iVar9 = memcmp(ppppppppplVar16 + 3,&local_98,0x20);
      if ((iVar9 == 0) &&
         ((ppppppppplVar17 = ppppppppplVar16, *(int *)(ppppppppplVar16 + 2) == 2 ||
          (*(int *)(ppppppppplVar16 + 7) == iVar1 + iVar8 + -1)))) break;
      ppppppppplVar16 = (long *********)ppppppppplVar16[1];
      ppppppppplVar17 = param_3;
    } while (param_3 != ppppppppplVar16);
  }
  if ((param_3 == ppppppppplVar17) || (*ppppppppplVar17[9] == (long *******)0x0)) {
    FUN_7103779650(*(long *)(param_1 + 0x1a8));
    cVar15 = '\0';
  }
  else {
    FUN_7103779480(param_1 + 0x1a0,(long)(ppppppppplVar17 + 8),ppppppppplVar13,param_4,pppplVar14,
                   param_6,param_7,param_8);
    cVar15 = '\x01';
  }
  if (*(char *)(param_1 + 0x224) != cVar15) {
    pcVar11 = "thumb2_on";
    if (cVar15 == '\0') {
      pcVar11 = "thumb2_off";
    }
    *(char *)(param_1 + 0x224) = cVar15;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)pcVar11);
  }
  if ((param_2[0xc] != 0) && (*(char *)((long)param_2 + 0xc1) == '\0')) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x710434ac44);
    return;
  }
  return;
}

