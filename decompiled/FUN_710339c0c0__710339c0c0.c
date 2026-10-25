// addr:      710339c0c0
// offset:    0x339c0c0
// name:      FUN_710339c0c0
// mangled:   
// signature: bool __cdecl FUN_710339c0c0(long * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


bool FUN_710339c0c0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  long ****pppplVar5;
  byte ****ppppbVar6;
  short *psVar7;
  long lVar8;
  uint uVar9;
  undefined **local_40;
  ulong local_38;
  
  lVar8 = *param_1;
  FUN_710373b540(lVar8 + 0x68,0);
  if (((*(char *)(lVar8 + 0x61) == '\0') && (**(long **)(lVar8 + 0x48) != 0)) &&
     ((*(long **)(lVar8 + 0x48))[1] != 0)) {
    FUN_710377aee0(0x3f800000,lVar8 + 0x40);
  }
  psVar7 = (short *)*param_1;
  if ((*(long *)(*(long *)(psVar7 + 0xc) + 8) == 0) || (*(char *)((long)psVar7 + 99) != '\0')) {
    bVar4 = false;
  }
  else {
    FUN_7103776910(&local_40,(long)(psVar7 + 8),(long ****)"set_txt_sp_level",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    ppppbVar6 = (byte ****)(ulong)*(uint *)(psVar7 + 0x2a);
    pppplVar5 = (long ****)0x1;
    FUN_710377a280((long)&local_40,(byte *)"mel_result_item_unit_35_00",1);
    uVar9 = NEON_ucvtf(*(undefined4 *)(psVar7 + 0x2e));
    uVar1 = *(uint *)(psVar7 + 0x28);
    uVar2 = *(uint *)(psVar7 + 0x2a);
    *(uint *)(psVar7 + 0x28) = uVar2;
    FUN_7103778630((ulong)uVar9,*(long *)(psVar7 + 0xc),0x7104464398);
    bVar4 = uVar1 < uVar2;
    *(undefined4 *)(psVar7 + 0x2c) = *(undefined4 *)(psVar7 + 0x2e);
    if (bVar4) {
      FUN_710339a620(psVar7,1,pppplVar5,ppppbVar6,param_5,param_6,param_7,param_8);
    }
    uVar3 = local_38;
    *(undefined1 *)((long)psVar7 + 99) = 1;
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  return bVar4;
}

