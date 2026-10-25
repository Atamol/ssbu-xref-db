// addr:      7101892d70
// offset:    0x1892d70
// name:      FUN_7101892d70
// mangled:   
// signature: undefined8 __cdecl FUN_7101892d70(ulong param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7101892d70(ulong param_1,ulong param_2,long *********param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong extraout_x1;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  undefined **local_60;
  ulong local_58;
  
  uVar5 = (uint)param_2;
  if ((~uVar5 & 0xff) == 0) {
    return 1;
  }
  lVar8 = *(long *)(param_1 + 0x1e8);
  if (lVar8 == 0) {
    return 1;
  }
  uVar6 = param_2 & 0xff;
  if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
  uVar4 = param_2;
  if ((*(uint *)(lVar7 + 0xa000) & 1 << (ulong)(uVar5 & 0x1f)) != 0) {
    if (*(long *)(lVar7 + 0x9ff8) == 0) {
      uVar2 = 0xff;
      uVar4 = 0;
    }
    else {
      uVar2 = FUN_71016f6340(lVar7 + 0xa010,*(long *)(lVar7 + 0x9ff8));
      uVar4 = extraout_x1;
    }
    if ((uVar2 & 0xff) == (uVar5 & 0xff)) {
      puVar9 = (uint *)(lVar7 + uVar6 * 0x78 + 0xa080);
      goto LAB_7101892f8c;
    }
  }
  if (((uVar5 & 0xff) < 8) &&
     (lVar8 = *(long *)(lVar8 + 0x80), *(char *)(lVar8 + uVar6 * 0x1e8 + 0xafc) != '\0')) {
    uVar2 = *(uint *)(lVar7 + uVar6 * 0x78 + 0xa084);
    if (0x3e6 < uVar2) {
      uVar2 = 999;
    }
    lVar10 = lVar8 + uVar6 * 0x1e8;
    *(uint *)(lVar10 + 0x948) = uVar2;
    FUN_7101c78060(*(undefined8 **)(*(long *)(lVar8 + 0x468) + 0x80),uVar4,param_3,param_4,param_5,
                   param_6,param_7,param_8);
    if (*(char *)(lVar10 + 0xafa) != '\0') {
      FUN_7103776910(&local_60,lVar8 + 0x2d0,(long ****)"set_txt_02",param_3,param_4,param_5,param_6
                     ,param_7,param_8);
      param_4 = (byte ****)(ulong)*(uint *)(lVar10 + 0x948);
      param_3 = (long *********)0x1;
      FUN_710377a280((long)&local_60,(byte *)"mnu_online_room_inside_ko_total_n",1);
      uVar4 = local_58;
      local_60 = &PTR_FUN_710523d9a8;
      local_58 = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
    }
  }
  puVar9 = (uint *)(lVar7 + uVar6 * 0x78 + 0xa080);
  uVar2 = *puVar9;
  if (((uVar5 & 0xff) < 8) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x1e8) + 0x80),
     (uint)*(byte *)(lVar8 + 0x1920) != (uVar5 & 0xff))) {
    *(byte *)(lVar8 + uVar6 * 0x1e8 + 0xafd) =
         uVar2 - 2 < 0xc & (byte)(0x807 >> (ulong)(uVar2 - 2 & 0x1f));
    FUN_7101c61830(lVar8,(byte)param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar2 = *puVar9;
  }
  if ((uVar2 | 4) == 0xc) {
    if (7 < (uVar5 & 0xff)) goto LAB_7101892f8c;
    lVar8 = *(long *)(*(long *)(param_1 + 0x1e8) + 0x80);
    bVar1 = *(char *)(lVar8 + uVar6 * 0x1e8 + 0xaf8) != '\x01';
  }
  else {
    if (7 < (uVar5 & 0xff)) goto LAB_7101892f8c;
    lVar8 = *(long *)(*(long *)(param_1 + 0x1e8) + 0x80);
    bVar1 = false;
  }
  *(bool *)(lVar8 + uVar6 * 0x1e8 + 0xafe) = bVar1;
  FUN_7101c61830(lVar8,(byte)param_2,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101892f8c:
  if (*puVar9 != 6) {
    return 4;
  }
  if (*(char *)(lVar7 + uVar6 * 0x78 + 0xa074) == -1) {
    uVar5 = 4;
  }
  else {
    if (-1 < *(int *)(lVar7 + uVar6 * 0x78 + 0xa07c)) {
      uVar3 = FUN_7101892950(param_1,uVar6,0,param_4,param_5,param_6,param_7,param_8);
      return uVar3;
    }
    uVar5 = 3;
  }
  uVar3 = FUN_7101892c60(param_1,param_2 & 0xffffffff,uVar5,(byte ****)(param_2 & 0xffffffff),
                         (long ****)0x0,param_6,param_7,param_8);
  return uVar3;
}

