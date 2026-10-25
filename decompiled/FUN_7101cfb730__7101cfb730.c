// addr:      7101cfb730
// offset:    0x1cfb730
// name:      FUN_7101cfb730
// mangled:   
// signature: undefined __cdecl FUN_7101cfb730(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cfb730(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  iVar2 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_50);
  if (iVar2 != 0) {
    nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_50);
  }
  ppuVar1 = local_50;
  lVar5 = *(long *)(param_1 + 0x388) - (long)local_50;
  local_50 = (undefined **)0x0;
  uVar7 = lVar5 * 1000000000 + 59000000000;
  FUN_7103741810(*(long *)(param_1 + 0x388),(ulong *)&local_50);
  local_50 = (undefined **)((ulong)local_50 & 0xffffffc0001fffff);
  FUN_71037419c0((uint *)&local_50,&local_60);
  uVar6 = ((long)local_60 - (long)ppuVar1) * 1000000000;
  uVar3 = ((long)uVar6 >> 0x20) * 0x48f948e3 + ((uVar6 & 0xfffffe00) * 0x48f948e3 >> 0x20);
  iVar2 = 0;
  if ((long)ppuVar1 <= (long)local_60) {
    iVar2 = ((int)(((long)uVar6 >> 0x20) * 0x683fff6f + ((long)uVar3 >> 0x20) +
                   ((long)((uVar6 & 0xfffffe00) * 0x683fff6f + (uVar3 & 0xffffffff)) >> 0x20) >>
                  0x2d) - (int)((long)uVar6 >> 0x3f)) + 1;
  }
  FUN_7103776640(&local_50,**(long **)(param_1 + 0x140) + 8,(byte ****)"set_btn_event",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  uVar6 = local_48;
  uVar8 = uVar7 & 0xfffffe00;
  lVar5 = (long)uVar7 >> 0x20;
  uVar3 = lVar5 * 0x26d694b3 + (uVar8 * 0x26d694b3 >> 0x20);
  if (-((long)uVar7 >> 0x3f) +
      ((long)(lVar5 * 0x112e0be8 + ((long)uVar3 >> 0x20) +
             (uVar8 * 0x112e0be8 + (uVar3 & 0xffffffff) >> 0x20)) >> 0x1a) < 0x45) {
    FUN_7103778300(0x3f800000,local_48,0x710432a1e0);
    goto LAB_7101cfb950;
  }
  if (iVar2 < 1) {
    uVar3 = lVar5 * 0xed75ed55 + (uVar8 * 0xed75ed55 >> 0x20);
    if (0 < -((long)uVar7 >> 0x3f) +
            ((long)(uVar7 + lVar5 * -0x63a000da + ((long)uVar3 >> 0x20) +
                   ((long)(uVar8 * -0x63a000da + (uVar3 & 0xffffffff)) >> 0x20)) >> 0x29)) {
      FUN_7103778300(0x3f800000,local_48,0x710438cccf);
      pcVar4 = "set_txt_remained_hour";
      goto LAB_7101cfb91c;
    }
    FUN_7103778300(0x3f800000,local_48,0x71042d6464);
    FUN_7103776910(&local_60,(long)&local_50,(long ****)"set_txt_remained_minute",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a310((long)&local_60,1);
  }
  else {
    FUN_7103778300(0x3f800000,local_48,0x71043be82e);
    pcVar4 = "set_txt_remained_day";
LAB_7101cfb91c:
    FUN_7103776910(&local_60,(long)&local_50,(long ****)pcVar4,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377a310((long)&local_60,1);
  }
  uVar3 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
LAB_7101cfb950:
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar6 != 0) {
    uVar3 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar6);
  }
  return;
}

