// addr:      7101c45de0
// offset:    0x1c45de0
// name:      FUN_7101c45de0
// mangled:   
// signature: undefined __cdecl FUN_7101c45de0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c45de0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined **ppuVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **local_50;
  ulong local_48;
  undefined8 local_38;
  
  iVar4 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_50);
  ppuVar2 = local_50;
  if (((((iVar4 == 0) && (*(int *)(param_1 + 0x148) != 0)) &&
       (iVar4 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_50),
       iVar4 == 0)) &&
      (((long)local_50 <= *(long *)(param_1 + 0x280) &&
       (*(long *)(param_1 + 0x268) <= (long)local_50)))) &&
     ((long)local_50 <= *(long *)(param_1 + 0x278))) {
    if ((long)local_50 < *(long *)(param_1 + 0x270)) {
      lVar5 = *(long *)(param_1 + 0x270) - (long)ppuVar2;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x278) - (long)ppuVar2;
    }
    uVar8 = lVar5 * 1000000000;
  }
  else {
    uVar8 = 0;
  }
  iVar4 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_50);
  ppuVar2 = local_50;
  if (((iVar4 == 0) && (*(int *)(param_1 + 0x148) != 0)) &&
     ((iVar4 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_50),
      iVar4 == 0 &&
      ((((long)local_50 <= *(long *)(param_1 + 0x280) &&
        (*(long *)(param_1 + 0x268) <= (long)local_50)) &&
       (lVar5 = *(long *)(param_1 + 0x278), (long)local_50 <= lVar5)))))) {
    if ((long)local_50 < *(long *)(param_1 + 0x270)) {
      lVar5 = *(long *)(param_1 + 0x270);
    }
    local_50 = (undefined **)0x0;
    FUN_7103741810(lVar5,(ulong *)&local_50);
    local_50 = (undefined **)((ulong)local_50 & 0xffffffc0001fffff);
    FUN_71037419c0((uint *)&local_50,&local_38);
    if (CONCAT44(local_38._4_4_,(undefined4)local_38) < (long)ppuVar2) goto LAB_7101c45e18;
    uVar7 = (CONCAT44(local_38._4_4_,(undefined4)local_38) - (long)ppuVar2) * 1000000000;
    uVar1 = ((long)uVar7 >> 0x20) * 0x48f948e3 + ((uVar7 & 0xfffffe00) * 0x48f948e3 >> 0x20);
    iVar4 = ((int)(((long)uVar7 >> 0x20) * 0x683fff6f + ((long)uVar1 >> 0x20) +
                   ((long)((uVar7 & 0xfffffe00) * 0x683fff6f + (uVar1 & 0xffffffff)) >> 0x20) >>
                  0x2d) - (int)((long)uVar7 >> 0x3f)) + 1;
  }
  else {
LAB_7101c45e18:
    iVar4 = 0;
  }
  FUN_7103776910(&local_50,**(long **)(param_1 + 0x528) + 8,(long ****)"set_txt_timer",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  uVar1 = local_48;
  if (*(int *)(param_1 + 0x520) != 0) goto LAB_7101c460f8;
  if (*(long **)(local_48 + 0x10) != (long *)0x0) {
    param_3 = 0;
    param_4 = 0;
    local_38._0_4_ = 0;
    FUN_71037a2270(*(long **)(local_48 + 0x10),(ushort *)&local_38,0,0);
  }
  uVar7 = ((long)uVar8 >> 0x20) * 0x26d694b3 + ((uVar8 & 0xfffffe00) * 0x26d694b3 >> 0x20);
  lVar5 = ((long)(((long)uVar8 >> 0x20) * 0x112e0be8 + ((long)uVar7 >> 0x20) +
                 ((uVar8 & 0xfffffe00) * 0x112e0be8 + (uVar7 & 0xffffffff) >> 0x20)) >> 0x1a) -
          ((long)uVar8 >> 0x3f);
  if (iVar4 < 1) {
    uVar8 = uVar8 + 59000000000;
    uVar7 = ((long)uVar8 >> 0x20) * 0x68fd3d1d + ((uVar8 & 0xfffffe00) * 0x68fd3d1d >> 0x20);
    uVar8 = ((long)(((long)uVar8 >> 0x20) * 0x12533fe + ((long)uVar7 >> 0x20) +
                   ((uVar8 & 0xfffffe00) * 0x12533fe + (uVar7 & 0xffffffff) >> 0x20)) >> 0x1c) -
            ((long)uVar8 >> 0x3f);
    if (0 < (int)((uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU)) / 0x3c)) {
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x528) + 0x10),0x71042c4dc3);
      pcVar6 = "mnu_convention_top_pre_count_hour";
      goto LAB_7101c46020;
    }
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x528) + 0x10),0x710436c398);
    if (lVar5 < 0xb) {
      FUN_710377a120((long)&local_50,"mnu_convention_top_pre_count_soon",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      goto LAB_7101c46030;
    }
    FUN_710377a280((long)&local_50,(byte *)"mnu_convention_top_pre_count_minute",1);
    bVar3 = *(char *)(param_1 + 0x652) == '\0';
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x528) + 0x10),0x7104401534);
    pcVar6 = "mnu_convention_top_pre_count_day";
LAB_7101c46020:
    FUN_710377a280((long)&local_50,(byte *)pcVar6,1);
LAB_7101c46030:
    bVar3 = *(char *)(param_1 + 0x652) == '\0';
    if ((lVar5 < 0xb) && (*(char *)(param_1 + 0x652) == '\0')) {
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x528) + 0x10),0x71043de934);
      *(undefined1 *)(param_1 + 0x652) = 1;
      goto LAB_7101c460f8;
    }
  }
  if ((10 < lVar5) && (!bVar3)) {
    FUN_7103778630(0,*(long *)(**(long **)(param_1 + 0x528) + 0x10),0x71043de934);
    *(undefined1 *)(param_1 + 0x652) = 0;
  }
LAB_7101c460f8:
  *(undefined4 *)(param_1 + 0x648) = 0xc;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  return;
}

