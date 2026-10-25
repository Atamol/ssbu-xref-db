// addr:      7101743bf0
// offset:    0x1743bf0
// name:      FUN_7101743bf0
// mangled:   
// signature: undefined __cdecl FUN_7101743bf0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101743bf0(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  ulong *puVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong *local_60;
  ulong local_58;
  
  FUN_710375aa90((long *)&local_60,"sum_misc",param_3,param_4,param_5,param_6,param_7,param_8);
  puVar3 = local_60;
  puVar17 = *(undefined8 **)(*DAT_7105314510 + 0x78);
  nn::prepo::PlayReport::Add((char *)(*local_60 + 0x4020),0x7104432e27);
  nn::prepo::PlayReport::Add((char *)(*local_60 + 0x4020),0x7104442db9);
  nn::prepo::PlayReport::Add((char *)(*local_60 + 0x4020),0x71042912ab);
  local_58 = (ulong)(*(char *)(*(long *)*puVar17 + 3) != '\0');
  nn::prepo::PlayReport::Add((char *)(*local_60 + 0x4020),(Any64BitId *)"fighter_handicap");
  lVar12 = 0x3d;
  do {
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  nn::prepo::PlayReport::Add((char *)(*local_60 + 0x4020),0x71042f7923);
  local_58 = (ulong)*(byte *)(*(long *)*puVar17 + 0x5e05d);
  nn::prepo::PlayReport::Add((char *)(*local_60 + 0x4020),(Any64BitId *)"optout_news");
  nn::prepo::PlayReport::Add((char *)(*local_60 + 0x4020),0x71042912b5);
  nn::prepo::PlayReport::Add((char *)(*local_60 + 0x4020),0x710425e9e2);
  nn::prepo::PlayReport::Add((char *)(*local_60 + 0x4020),0x71043296ff);
  nn::prepo::PlayReport::Add((char *)(*local_60 + 0x4020),0x71043f00ac);
  lVar18 = *(long *)(DAT_710532f730 + 8);
  lVar15 = *(long *)(lVar18 + 0x168);
  lVar12 = *(long *)(lVar15 + 8);
  pcVar8 = *(char **)(lVar12 + 0x20);
  if ((*pcVar8 == '\f') && (iVar10 = *(int *)(pcVar8 + 1) + -1, 0 < *(int *)(pcVar8 + 1))) {
    iVar11 = 0;
    uVar13 = *(ulong *)(lVar12 + 0x48) & 0xffffffffff;
    pbVar9 = &DAT_7104742dbb;
    do {
      iVar2 = iVar10 + iVar11;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar12 + 0x18) + 0x28) + (long)*(int *)(pcVar8 + 5) +
                       (long)iVar2 * 8);
      uVar14 = *(ulong *)(*(long *)(*(long *)(lVar12 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar14 == uVar13) {
        uVar13 = (ulong)(int)puVar1[1];
        pbVar9 = &DAT_7104742dbb;
        if ((uVar13 & 0x80000000) == 0) {
          pbVar9 = (byte *)(pcVar8 + uVar13);
        }
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar14 <= uVar13) {
        iVar11 = iVar2 + 1;
        iVar4 = iVar10;
      }
      iVar10 = iVar4;
    } while (iVar11 <= iVar10);
  }
  else {
    pbVar9 = &DAT_7104742dbb;
  }
  if ((*pbVar9 - 0xb < 2) && (iVar10 = *(int *)(pbVar9 + 1), 0 < iVar10)) {
    uVar16 = 0;
    while( true ) {
      puVar7 = FUN_7103263d20(lVar15,uVar16);
      uVar6 = FUN_7103264d20(lVar15,(ulong)puVar7);
      if (((uVar6 & 1) != 0) && (uVar13 = FUN_7103264270(lVar15,puVar7), (int)uVar13 != -1)) {
        FUN_7101797560(puVar7,0,0);
      }
      if (iVar10 - 1U == uVar16) break;
      lVar15 = *(long *)(lVar18 + 0x168);
      uVar16 = uVar16 + 1;
    }
  }
  nn::prepo::PlayReport::Add((char *)(*local_60 + 0x4020),0x71042e675f);
  lVar12 = 0;
  uVar16 = 0;
  uVar13 = 1;
  do {
    uVar16 = *(int *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x268) + (lVar12 >> 0x2e) +
                     0x65a0) + uVar16;
    if (999999999 < uVar16) break;
    lVar12 = lVar12 + 0x1000000000000;
    bVar5 = uVar13 < 2000;
    uVar13 = uVar13 + 1;
  } while (bVar5);
  local_58 = (ulong)uVar16;
  nn::prepo::PlayReport::Add
            ((char *)(*local_60 + 0x4020),(Any64BitId *)"directory_battle_total_score");
  lVar12 = 0;
  uVar16 = 0;
  do {
    lVar15 = lVar12 * 4;
    lVar12 = lVar12 + 1;
    if (*(int *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x268) + lVar15 + 0x65a0) != 0) {
      uVar16 = uVar16 + 1;
    }
  } while (lVar12 != 2000);
  local_58 = (ulong)uVar16;
  nn::prepo::PlayReport::Add
            ((char *)(*local_60 + 0x4020),(Any64BitId *)"directory_battle_cleared_count");
  local_58 = (ulong)*(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x268) + 0x84e0);
  nn::prepo::PlayReport::Add
            ((char *)(*local_60 + 0x4020),(Any64BitId *)"directory_battle_played_count");
  iVar10 = *(int *)(*DAT_710593b580 + 0x7300);
  if ((iVar10 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar10)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  nn::prepo::PlayReport::Save((Uid *)(*local_60 + 0x4020));
  local_60 = (ulong *)0x0;
  uVar13 = *puVar3;
  *puVar3 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  FUN_710392eb40((ulong)puVar3);
  return;
}

