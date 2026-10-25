// addr:      7100123d30
// offset:    0x123d30
// name:      FUN_7100123d30
// mangled:   
// signature: undefined FUN_7100123d30(void)


undefined8 FUN_7100123d30(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  long lVar19;
  byte bVar20;
  bool bVar21;
  uint uVar22;
  undefined8 uVar23;
  long *plVar24;
  code *pcVar25;
  char *pcVar26;
  long lVar27;
  int aiStack_88 [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 3;
  lVar19 = DAT_71052adfc0;
  FUN_7100192e90(aiStack_78,DAT_71052adfc0);
  aiStack_88[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_88 | 4));
  auStack_68[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_88 | 4),(Result *)auStack_68);
  if (aiStack_78[0] == aiStack_88[0]) {
    pcVar25 = FUN_71001a1d80;
    uVar23 = 0;
    pcVar26 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    bVar20 = FUN_7100193560(lVar19);
    lVar27 = DAT_71052ac580;
    uVar22 = (uint)bVar20;
    if ((bVar20 < 0x20) && (*(int *)(param_1 + 0xe8) != 0)) {
      bVar20 = *(byte *)(param_1 + 0xcc);
      bVar3 = *(byte *)(param_1 + 0xcd);
      bVar4 = *(byte *)(param_1 + 0xce);
      bVar5 = *(byte *)(param_1 + 0xcf);
      bVar6 = *(byte *)(param_1 + 0xd0);
      bVar7 = *(byte *)(param_1 + 0xd1);
      bVar8 = *(byte *)(param_1 + 0xd2);
      bVar9 = *(byte *)(param_1 + 0xd3);
      bVar10 = *(byte *)(param_1 + 0xd4);
      bVar11 = *(byte *)(param_1 + 0xc5);
      bVar12 = *(byte *)(param_1 + 0xc6);
      bVar13 = *(byte *)(param_1 + 199);
      bVar14 = *(byte *)(param_1 + 200);
      bVar15 = *(byte *)(param_1 + 0xc9);
      bVar16 = *(byte *)(param_1 + 0xca);
      bVar17 = *(byte *)(param_1 + 0xcb);
      plVar24 = FUN_71000bb680();
      lVar1 = 1000;
      if (bVar11 != uVar22) {
        lVar1 = 49000;
      }
      lVar2 = 4000;
      if (bVar12 != uVar22) {
        lVar2 = lVar1;
      }
      lVar1 = 7000;
      if (bVar13 != uVar22) {
        lVar1 = lVar2;
      }
      lVar2 = 10000;
      if (bVar14 != uVar22) {
        lVar2 = lVar1;
      }
      lVar1 = 13000;
      if (bVar15 != uVar22) {
        lVar1 = lVar2;
      }
      lVar2 = 16000;
      if (bVar16 != uVar22) {
        lVar2 = lVar1;
      }
      lVar1 = 19000;
      if (bVar17 != uVar22) {
        lVar1 = lVar2;
      }
      lVar2 = 22000;
      if (bVar20 != uVar22) {
        lVar2 = lVar1;
      }
      lVar1 = 25000;
      if (bVar3 != uVar22) {
        lVar1 = lVar2;
      }
      lVar2 = 28000;
      if (bVar4 != uVar22) {
        lVar2 = lVar1;
      }
      lVar1 = 31000;
      if (bVar5 != uVar22) {
        lVar1 = lVar2;
      }
      lVar2 = 34000;
      if (bVar6 != uVar22) {
        lVar2 = lVar1;
      }
      lVar1 = 37000;
      if (bVar7 != uVar22) {
        lVar1 = lVar2;
      }
      lVar2 = 40000;
      if (bVar8 != uVar22) {
        lVar2 = lVar1;
      }
      lVar1 = 43000;
      if (bVar9 != uVar22) {
        lVar1 = lVar2;
      }
      lVar2 = 46000;
      if (bVar10 != uVar22) {
        lVar2 = lVar1;
      }
      *(long *)(param_1 + 0x148) = *(long *)(lVar27 + 0x30) + *plVar24 * lVar2;
      lVar1 = DAT_71052ac580;
      iVar18 = *(int *)(param_1 + 0x60);
      plVar24 = FUN_71000bb680();
      lVar27 = 0;
      *(long *)(param_1 + 0x58) = *(long *)(lVar1 + 0x30) + *plVar24 * (long)iVar18;
      do {
        if ((uVar22 != ((uint)lVar27 & 0xff)) &&
           (bVar21 = FUN_7100190a90(lVar19,(byte)lVar27), bVar21)) {
          aiStack_78[0] = 0;
          plVar24 = (long *)FUN_7100193580(lVar19);
          bVar21 = FUN_710019ae30(plVar24,(uint)lVar27,*(long *)(param_1 + 0x58),aiStack_78);
          if (bVar21) {
            *(int *)(param_1 + 0x160 + lVar27 * 4) = aiStack_78[0];
          }
        }
        lVar27 = lVar27 + 1;
      } while (lVar27 != 0x10);
      *(undefined2 *)(param_1 + 0xb2) = 0xfd01;
      pcVar25 = FUN_7100124030;
      uVar23 = 5;
      pcVar26 = "LanProcessHostMigrationJob::LanWaitRankDecision";
    }
    else {
      pcVar25 = FUN_71001a1d80;
      uVar23 = 0;
      pcVar26 = "LanProcessHostMigrationJob::HostMigrationFailure";
    }
  }
  *(code **)(param_1 + 0x30) = pcVar25;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar26;
  return uVar23;
}

