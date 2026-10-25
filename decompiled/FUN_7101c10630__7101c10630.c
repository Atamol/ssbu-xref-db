// addr:      7101c10630
// offset:    0x1c10630
// name:      FUN_7101c10630
// mangled:   
// signature: undefined __cdecl FUN_7101c10630(long param_1, uint param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c10630(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  byte *pbVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  long ****pppplVar9;
  byte bVar10;
  long ****pppplVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte ****ppppbVar15;
  uint uVar16;
  undefined **local_88;
  ulong local_80;
  
  pppplVar9 = (long ****)(param_1 + 0x690);
  ppppbVar15 = (byte ****)(ulong)param_2;
  bVar10 = (byte)param_2;
  pppplVar11 = pppplVar9;
  FUN_7101c16450(*(byte **)(param_1 + 0x6f0),(byte *)(param_1 + 0x658),(long)pppplVar9,bVar10);
  FUN_7101c108f0(param_1,bVar10,pppplVar11,ppppbVar15,param_5,param_6,param_7,param_8);
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (*(char *)(param_1 + 0x658) == '\x02') {
    if (*(char *)(param_1 + 0x659) != '\0') goto LAB_7101c106bc;
LAB_7101c106b4:
    uVar16 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x659) == '\0') && (*(char *)(param_1 + 0x693) != '\0'))
    goto LAB_7101c106b4;
LAB_7101c106bc:
    uVar16 = 0;
    if ((DAT_71053050f0 != 0x4090000) && (DAT_71053050f0 != 0x7010200)) {
      uVar16 = 1;
    }
  }
  uVar5 = FUN_7101c043c0(param_1 + 0x658,(long)pppplVar9,bVar10);
  bVar4 = *(char *)(param_1 + 0x658) == '\x01';
  pppplVar9 = (long ****)(ulong)uVar5;
  ppppbVar15 = (byte ****)(ulong)uVar16;
  pppplVar11 = (long ****)(ulong)bVar4;
  FUN_7101c0a4b0((uint *)&local_88,bVar10,uVar5,uVar16,(uint)bVar4);
  FUN_7101af53d0(*(long *)(*(long *)(param_1 + 0x6a0) + 0x80),(uint *)&local_88,
                 (undefined **)pppplVar9,ppppbVar15,pppplVar11,param_6,param_7,param_8);
  FUN_7103776390(&local_88,(undefined8 *)(**(long **)(param_1 + 0x6a8) + 8),pppplVar9,ppppbVar15,
                 pppplVar11,param_6,param_7,param_8);
  pbVar13 = *(byte **)(param_1 + 0x640);
  pbVar12 = *(byte **)(param_1 + 0x648);
  pbVar14 = pbVar13;
  if (pbVar13 != pbVar12) {
    bVar10 = *pbVar13;
    while (bVar10 != 0x1a) {
      pbVar14 = pbVar14 + 1;
      if (pbVar12 == pbVar14) goto LAB_7101c107b4;
      bVar10 = *pbVar14;
    }
  }
  if (pbVar12 == pbVar14) {
LAB_7101c107b4:
    pcVar8 = "indent_off";
  }
  else {
    pbVar2 = pbVar13;
    if ((pbVar13 != pbVar12) && ((uint)*pbVar13 != (param_2 & 0xff))) {
      do {
        pbVar13 = pbVar13 + 1;
        pbVar2 = pbVar12;
        if (pbVar12 == pbVar13) break;
        pbVar2 = pbVar13;
      } while ((uint)*pbVar13 != (param_2 & 0xff));
    }
    if (-1 < (long)pbVar14 - (long)pbVar2) goto LAB_7101c107b4;
    pcVar8 = "indent_on";
  }
  FUN_7103778300(0x3f800000,local_80,(long)pcVar8);
  if ((param_2 - 3 & 0xff) < 0x1c) {
    cVar1 = *(char *)(param_1 + 0x6c6);
    if ((0xf050001U >> (ulong)(param_2 - 3 & 0x1f) & 1) != 0) {
      if (cVar1 == '\0') {
        FUN_7103778300(0x3f800000,local_80,0x71042c4d58);
        *(undefined1 *)(param_1 + 0x6c6) = 1;
      }
      goto LAB_7101c10840;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x6c6);
  }
  if (cVar1 != '\0') {
    FUN_7103778300(0x3f800000,local_80,0x7104443681);
    *(undefined1 *)(param_1 + 0x6c6) = 0;
  }
LAB_7101c10840:
  uVar3 = local_80;
  local_88 = &PTR_FUN_710523d988;
  local_80 = 0;
  if (uVar3 != 0) {
    uVar7 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar3);
  }
  return;
}

