// addr:      7101c31320
// offset:    0x1c31320
// name:      FUN_7101c31320
// mangled:   
// signature: undefined __cdecl FUN_7101c31320(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c31320(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  int iVar4;
  ulong uVar5;
  long ****pppplVar6;
  byte ****ppppbVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  undefined4 local_90 [2];
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  if (*(int *)(param_1 + 0x21b4) == 0) {
    (**(code **)(**(long **)(param_1 + 0x2020) + 0x60))(*(long **)(param_1 + 0x2020),0);
    (**(code **)(**(long **)(param_1 + 0x2020) + 0x70))(*(long **)(param_1 + 0x2020),0);
    lVar8 = *(long *)(*(long *)(**(long **)(param_1 + 0x2200) + 0x10) + 8);
    if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
    }
    lVar8 = *(long *)(*(long *)(**(long **)(param_1 + 0x21c8) + 0x10) + 8);
    if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
    }
    plVar9 = (long *)**(undefined8 **)(param_1 + 0x21d8);
    if ((*(long *)(plVar9[2] + 8) != 0) &&
       (lVar8 = *(long *)(*(long *)(plVar9[2] + 8) + 0x18), lVar8 != 0)) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
      plVar9 = (long *)**(undefined8 **)(param_1 + 0x21d8);
    }
    FUN_71037760f0(*plVar9,1);
    (**(code **)(**(long **)(param_1 + 0x2028) + 0x60))(*(long **)(param_1 + 0x2028),1);
    (**(code **)(**(long **)(param_1 + 0x2028) + 0x70))(*(long **)(param_1 + 0x2028),1);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x21d8) + 0x10),0x7104421055);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x21d8) + 0x10),0x71042e7402);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x21d8) + 0x10),0x71043190be);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x21d8) + 0x10),0x71042c4fb9);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x21d8) + 0x10),0x71043ae07a);
    FUN_7103776910(&local_40,**(long **)(param_1 + 0x21d8) + 8,(long ****)"set_txt_rule",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    FUN_7101c321b0((long)&local_40,(byte *)"mel_tournament_standby_rule");
    iVar4 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_50);
    ppppbVar7 = param_4;
    if (iVar4 != 0) {
      nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_50);
      ppppbVar7 = param_4;
    }
    ppuVar3 = local_50;
    local_50 = (undefined **)0x0;
    FUN_7103741810(ppuVar3,(ulong *)&local_50);
    param_4 = (byte ****)
              (((ulong)local_50 & 0xfff) * 1000000 + ((ulong)local_50 >> 0xc & 0xf) * 1000 +
              ((ulong)local_50 >> 0x10 & 0x1f));
    FUN_7103776910(&local_50,**(long **)(param_1 + 0x21d8) + 8,(long ****)"set_txt_date",param_3,
                   ppppbVar7,param_5,param_6,param_7,param_8);
    pppplVar6 = (long ****)0x1;
    FUN_710377a280((long)&local_50,(byte *)"mel_tournament_standby_date",1);
    uVar5 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_7103313da0(*(undefined8 **)(DAT_710532f8d0 + 8),0,pppplVar6,param_4,param_5,param_6,param_7,
                   param_8);
    uVar5 = local_38;
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  if (*(int *)(*(long *)(param_1 + 0x2028) + 0x25c) == 0) {
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x21d8),0);
    (**(code **)(**(long **)(param_1 + 0x2028) + 0x60))(*(long **)(param_1 + 0x2028),0);
    (**(code **)(**(long **)(param_1 + 0x2028) + 0x70))(*(long **)(param_1 + 0x2028),0);
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar5 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x25130e5233,(long ****)&DAT_00000004,
                               param_4,param_5,param_6,param_7,param_8), (uVar5 & 1) != 0)) {
      FUN_71024076d0(local_90,0x25130e5233);
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar10 = (int *)(local_80 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    else {
      local_78 = 0x87650000000000;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      local_90[0] = 0;
      local_58 = 0;
    }
    local_88 = &PTR_FUN_7104f73d50;
    local_80 = 0;
    local_70 = 0;
    if (0x12 < *(uint *)(param_1 + 0x21ac)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x21ac) * 4 + 0x2160) = 9;
  }
  return;
}

