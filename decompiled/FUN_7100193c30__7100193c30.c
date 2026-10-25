// addr:      7100193c30
// offset:    0x193c30
// name:      FUN_7100193c30
// mangled:   
// signature: undefined FUN_7100193c30(void)


undefined8 FUN_7100193c30(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  char *pcVar7;
  ulong uVar8;
  
  bVar2 = FUN_7100193560(DAT_71052adfc0);
  if (bVar2 < 0x20) {
    uVar8 = 0;
    lVar1 = param_1 + 0x6c;
    do {
      while ((uint)bVar2 == ((uint)uVar8 & 0xff)) {
        *(undefined1 *)(lVar1 + uVar8) = 0;
        uVar8 = uVar8 + 1;
        if (uVar8 == 0x20) goto LAB_7100193cf0;
      }
      bVar3 = FUN_7100190a90(DAT_71052adfc0,(byte)uVar8);
      if (bVar3) {
        lVar5 = FUN_7100193580(DAT_71052adfc0);
        FUN_7100199db0(lVar5,uVar8 & 0xffffffff);
        *(undefined1 *)(lVar1 + uVar8) = 1;
      }
      else {
        *(undefined1 *)(lVar1 + uVar8) = 0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x20);
LAB_7100193cf0:
    *(undefined1 *)(param_1 + 0x8c) = 1;
    pcVar6 = FUN_7100193e40;
    uVar4 = 5;
    pcVar7 = "DestroyMeshJob::WaitDestroyResponse";
  }
  else {
    pcVar6 = FUN_7100193d30;
    uVar4 = 0;
    pcVar7 = "DestroyMeshJob::CleanupMesh";
  }
  *(code **)(param_1 + 0x30) = pcVar6;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar7;
  return uVar4;
}

