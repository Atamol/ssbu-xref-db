// addr:      71019b79e0
// offset:    0x19b79e0
// name:      FUN_71019b79e0
// mangled:   
// signature: undefined FUN_71019b79e0(void)


void FUN_71019b79e0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  undefined **ppuStack_50;
  ulong uStack_48;
  undefined **ppuStack_40;
  ulong uStack_38;
  
  FUN_71032d6810(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar5 = *(long *)(param_1 + 0x20);
  *(int *)(lVar5 + 0xe0) = (int)param_2;
  *(undefined2 *)(lVar5 + 0xe4) = 0;
  *(undefined1 *)(lVar5 + 0xe6) = 0;
  FUN_7103776640(&ppuStack_40,lVar5 + 200,(byte ****)"set_parts_btn_00",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&ppuStack_50,(long)&ppuStack_40,(long ****)"set_txt_00",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar2 = uStack_38;
  ppuStack_40 = &PTR_FUN_710523d988;
  uStack_38 = 0;
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar2);
  }
  if (*(int *)(lVar5 + 0xe0) - 2U < 3) {
    FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0xd0),0x7104349be9);
    iVar1 = *(int *)(lVar5 + 0xe0);
    FUN_7103776910(&ppuStack_40,lVar5 + 200,(long ****)"set_txt_touch",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    if (iVar1 == 2) {
      pcVar4 = "mnu_amiibo_journey_start_nfc_touch";
    }
    else if (iVar1 == 3) {
      pcVar4 = "mnu_amiibo_journey_save_nfc_touch";
    }
    else if (iVar1 == 4) {
      pcVar4 = "mnu_amiibo_journey_stop_nfc_touch";
    }
    else {
      pcVar4 = "";
    }
    FUN_710377a120((long)&ppuStack_40,pcVar4,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar2 = uStack_38;
    ppuStack_40 = &PTR_FUN_710523d9a8;
    uStack_38 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  else if (*(int *)(lVar5 + 0xe0) == 1) {
    FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0xd0),0x71042a28b1);
    FUN_710377a120((long)&ppuStack_50,"pop_btn_ok",param_3,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_7103771a80((long *)(lVar5 + 0xd8),0,0);
  (**(code **)(**(long **)(lVar5 + 0xd8) + 0x70))(*(long **)(lVar5 + 0xd8),1);
  uVar2 = uStack_48;
  if ((*(long *)(lVar5 + 0xd8) != 0) && (1 < *(int *)(lVar5 + 0xb8) - 1U)) {
    if (0x12 < *(uint *)(lVar5 + 0xb4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar5 + (long)(int)*(uint *)(lVar5 + 0xb4) * 4 + 0x68) = 1;
  }
  ppuStack_50 = &PTR_FUN_710523d9a8;
  uStack_48 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  return;
}

