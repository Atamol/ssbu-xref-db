// addr:      7100110480
// offset:    0x110480
// name:      FUN_7100110480
// mangled:   
// signature: undefined FUN_7100110480(void)


undefined8 FUN_7100110480(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  bool bVar8;
  undefined8 uVar9;
  long *plVar10;
  char *pcVar11;
  uint uVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  int aiStack_68 [4];
  int aiStack_58 [4];
  undefined4 auStack_48 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 3;
  lVar6 = DAT_71052adfc0;
  FUN_7100192e90(aiStack_58,DAT_71052adfc0);
  aiStack_68[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_68 | 4));
  auStack_48[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_48);
  if (aiStack_58[0] == aiStack_68[0]) {
    pcVar13 = FUN_71001a1d80;
    uVar9 = 0;
    pcVar11 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    bVar7 = FUN_7100193560(lVar6);
    lVar17 = DAT_71052ac580;
    if ((bVar7 < 0x20) && (*(int *)(param_1 + 0xe8) != 0)) {
      bVar2 = *(byte *)(param_1 + 0xc6);
      uVar12 = 0;
      if (*(byte *)(param_1 + 0xc5) != bVar7) {
        uVar12 = 0x20;
      }
      if (bVar2 == bVar7) {
        uVar12 = 1;
      }
      uVar16 = 2;
      if (bVar2 == 0xfd) {
        uVar16 = 1;
      }
      uVar1 = (uint)(bVar2 != 0xfd);
      if (*(byte *)(param_1 + 0xc5) != 0xfd) {
        uVar1 = uVar16;
      }
      uVar16 = 2;
      if (*(byte *)(param_1 + 199) != bVar7) {
        uVar16 = uVar12;
      }
      if (*(byte *)(param_1 + 199) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar12 = 3;
      if (*(byte *)(param_1 + 200) != bVar7) {
        uVar12 = uVar16;
      }
      if (*(byte *)(param_1 + 200) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = 4;
      if (*(byte *)(param_1 + 0xc9) != bVar7) {
        uVar16 = uVar12;
      }
      if (*(byte *)(param_1 + 0xc9) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar12 = 5;
      if (*(byte *)(param_1 + 0xca) != bVar7) {
        uVar12 = uVar16;
      }
      if (*(byte *)(param_1 + 0xca) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = 6;
      if (*(byte *)(param_1 + 0xcb) != bVar7) {
        uVar16 = uVar12;
      }
      if (*(byte *)(param_1 + 0xcb) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar12 = 7;
      if (*(byte *)(param_1 + 0xcc) != bVar7) {
        uVar12 = uVar16;
      }
      if (*(byte *)(param_1 + 0xcc) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = 8;
      if (*(byte *)(param_1 + 0xcd) != bVar7) {
        uVar16 = uVar12;
      }
      if (*(byte *)(param_1 + 0xcd) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar12 = 9;
      if (*(byte *)(param_1 + 0xce) != bVar7) {
        uVar12 = uVar16;
      }
      if (*(byte *)(param_1 + 0xce) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = 10;
      if (*(byte *)(param_1 + 0xcf) != bVar7) {
        uVar16 = uVar12;
      }
      if (*(byte *)(param_1 + 0xcf) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar12 = 0xb;
      if (*(byte *)(param_1 + 0xd0) != bVar7) {
        uVar12 = uVar16;
      }
      if (*(byte *)(param_1 + 0xd0) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = 0xc;
      if (*(byte *)(param_1 + 0xd1) != bVar7) {
        uVar16 = uVar12;
      }
      if (*(byte *)(param_1 + 0xd1) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar12 = 0xd;
      if (*(byte *)(param_1 + 0xd2) != bVar7) {
        uVar12 = uVar16;
      }
      if (*(byte *)(param_1 + 0xd2) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = 0xe;
      if (*(byte *)(param_1 + 0xd3) != bVar7) {
        uVar16 = uVar12;
      }
      if (*(byte *)(param_1 + 0xd3) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar12 = 0xf;
      if (*(byte *)(param_1 + 0xd4) != bVar7) {
        uVar12 = uVar16;
      }
      if (*(byte *)(param_1 + 0xd4) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = 0x10;
      if (*(byte *)(param_1 + 0xd5) != bVar7) {
        uVar16 = uVar12;
      }
      if (*(byte *)(param_1 + 0xd5) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar12 = 0x11;
      if (*(byte *)(param_1 + 0xd6) != bVar7) {
        uVar12 = uVar16;
      }
      if (*(byte *)(param_1 + 0xd6) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = 0x12;
      if (*(byte *)(param_1 + 0xd7) != bVar7) {
        uVar16 = uVar12;
      }
      if (*(byte *)(param_1 + 0xd7) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar12 = 0x13;
      if (*(byte *)(param_1 + 0xd8) != bVar7) {
        uVar12 = uVar16;
      }
      if (*(byte *)(param_1 + 0xd8) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = 0x14;
      if (*(byte *)(param_1 + 0xd9) != bVar7) {
        uVar16 = uVar12;
      }
      if (*(byte *)(param_1 + 0xd9) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar12 = 0x15;
      if (*(byte *)(param_1 + 0xda) != bVar7) {
        uVar12 = uVar16;
      }
      if (*(byte *)(param_1 + 0xda) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = 0x16;
      if (*(byte *)(param_1 + 0xdb) != bVar7) {
        uVar16 = uVar12;
      }
      if (*(byte *)(param_1 + 0xdb) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar12 = 0x17;
      if (*(byte *)(param_1 + 0xdc) != bVar7) {
        uVar12 = uVar16;
      }
      if (*(byte *)(param_1 + 0xdc) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = 0x18;
      if (*(byte *)(param_1 + 0xdd) != bVar7) {
        uVar16 = uVar12;
      }
      if (*(byte *)(param_1 + 0xdd) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar12 = 0x19;
      if (*(byte *)(param_1 + 0xde) != bVar7) {
        uVar12 = uVar16;
      }
      if (*(byte *)(param_1 + 0xde) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = 0x1a;
      if (*(byte *)(param_1 + 0xdf) != bVar7) {
        uVar16 = uVar12;
      }
      if (*(byte *)(param_1 + 0xdf) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar12 = 0x1b;
      if (*(byte *)(param_1 + 0xe0) != bVar7) {
        uVar12 = uVar16;
      }
      if (*(byte *)(param_1 + 0xe0) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = 0x1c;
      if (*(byte *)(param_1 + 0xe1) != bVar7) {
        uVar16 = uVar12;
      }
      if (*(byte *)(param_1 + 0xe1) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar12 = 0x1d;
      if (*(byte *)(param_1 + 0xe2) != bVar7) {
        uVar12 = uVar16;
      }
      if (*(byte *)(param_1 + 0xe2) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = 0x1e;
      if (*(byte *)(param_1 + 0xe3) != bVar7) {
        uVar16 = uVar12;
      }
      if (*(byte *)(param_1 + 0xe3) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      uVar12 = 0x1f;
      if (*(byte *)(param_1 + 0xe4) != bVar7) {
        uVar12 = uVar16;
      }
      if (*(byte *)(param_1 + 0xe4) != 0xfd) {
        uVar1 = uVar1 + 1;
      }
      if (uVar12 == 0) {
        iVar14 = 0;
      }
      else {
        uVar16 = uVar1 >> 1;
        uVar3 = uVar16 + (uVar1 & 1) + (uVar16 - 1) * uVar16;
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = *(uint *)(param_1 + 0x158) / uVar3;
        }
        if (uVar12 < uVar16) {
          iVar15 = uVar16 * 2;
          iVar14 = 0;
          uVar16 = 1;
          do {
            iVar15 = iVar15 + -2;
            uVar16 = uVar16 + 1;
            iVar14 = iVar15 + iVar14;
          } while (uVar16 <= uVar12);
          iVar14 = iVar14 * uVar4;
        }
        else {
          iVar14 = *(uint *)(param_1 + 0x158) - uVar4 * (uVar1 + ~uVar12);
        }
      }
      plVar10 = FUN_71000bb680();
      iVar15 = *(int *)(param_1 + 0x60);
      *(long *)(param_1 + 0x150) = *(long *)(lVar17 + 0x30) + *plVar10 * (long)iVar14;
      lVar5 = DAT_71052ac580;
      plVar10 = FUN_71000bb680();
      lVar17 = 0;
      *(long *)(param_1 + 0x58) = *(long *)(lVar5 + 0x30) + *plVar10 * (long)iVar15;
      do {
        uVar12 = (uint)lVar17;
        if ((((uint)bVar7 != (uVar12 & 0xff)) &&
            ((uint)*(byte *)(param_1 + 0x86) != (uVar12 & 0xff))) &&
           (bVar8 = FUN_7100190a90(lVar6,(byte)lVar17), bVar8)) {
          aiStack_58[0] = 0;
          plVar10 = (long *)FUN_7100193580(lVar6);
          bVar8 = FUN_710019ae30(plVar10,uVar12,*(long *)(param_1 + 0x58),aiStack_58);
          if (bVar8) {
            *(int *)(param_1 + 0x178 + lVar17 * 4) = aiStack_58[0];
          }
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x20);
      *(undefined2 *)(param_1 + 0xb2) = 0xfd01;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      pcVar13 = FUN_71001109a0;
      pcVar11 = "NexProcessHostMigrationJob::NexWaitRankDecision";
      uVar9 = 5;
    }
    else {
      pcVar13 = FUN_71001a1d80;
      uVar9 = 0;
      pcVar11 = "NexProcessHostMigrationJob::HostMigrationFailure";
    }
  }
  *(code **)(param_1 + 0x30) = pcVar13;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar11;
  return uVar9;
}

