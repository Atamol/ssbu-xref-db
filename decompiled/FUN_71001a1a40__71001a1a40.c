// addr:      71001a1a40
// offset:    0x1a1a40
// name:      FUN_71001a1a40
// mangled:   
// signature: undefined FUN_71001a1a40(void)


undefined8 FUN_71001a1a40(long *param_1)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  int aiStack_f0 [4];
  int aiStack_e0 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 auStack_58 [2];
  
  *(undefined4 *)(param_1 + 0x22) = 7;
  FUN_7100192e90(aiStack_e0,DAT_71052adfc0);
  aiStack_f0[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_f0 | 4));
  auStack_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_f0 | 4),(Result *)auStack_58);
  if (aiStack_e0[0] != aiStack_f0[0]) {
    bVar1 = FUN_7100193560(DAT_71052adfc0);
    lVar3 = FUN_7100161fa0(DAT_71052add68);
    plVar8 = *(long **)(lVar3 + 0x98);
    if (plVar8 != (long *)0x0) {
      plVar4 = (long *)FUN_7100161fb0(DAT_71052add68);
      FUN_710015fd60((undefined8 *)aiStack_e0);
      (**(code **)(*plVar4 + 0x28))(aiStack_f0,plVar4,plVar8,aiStack_e0);
      if (aiStack_f0[0] == 0) {
        FUN_7100160b20((long)plVar4,(long)aiStack_e0);
        FUN_71000beb40((long)(plVar4 + 0x21),(long)(plVar8 + 2));
        FUN_710015ff20((undefined8 *)aiStack_e0);
        plVar8 = (long *)FUN_7100161fa0(DAT_71052add68);
        lVar3 = (**(code **)(*plVar8 + 0x48))(plVar8,*(undefined1 *)((long)param_1 + 0x86));
        if (lVar3 != 0) {
          bVar2 = FUN_7100190a90(DAT_71052adfc0,*(byte *)((long)param_1 + 0x86));
          if (bVar2) {
            (**(code **)(*param_1 + 0x70))(param_1,*(undefined1 *)((long)param_1 + 0x86));
          }
          else {
            *(undefined4 *)(lVar3 + 0x48) = 6;
          }
        }
        uVar9 = 0;
        uVar10 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        aiStack_e0[0] = 0;
        aiStack_e0[1] = 0;
        uStack_d8 = 0;
        do {
          while ((uint)bVar1 == ((uint)uVar9 & 0xff)) {
LAB_71001a1c6c:
            *(undefined1 *)((long)param_1 + uVar9 + 0x91) = 0;
            uVar9 = uVar9 + 1;
            if (uVar9 == 0x20) goto LAB_71001a1c7c;
          }
          bVar2 = FUN_7100190a90(DAT_71052adfc0,(byte)uVar9);
          if (!bVar2) goto LAB_71001a1c6c;
          plVar8 = (long *)FUN_7100193580(DAT_71052adfc0);
          bVar2 = FUN_710019a070(plVar8,(uint)uVar9);
          *(undefined1 *)((long)param_1 + uVar9 + 0x91) = 1;
          if (!bVar2) {
            plVar8 = (long *)FUN_7100161fa0(DAT_71052add68);
            lVar3 = (**(code **)(*plVar8 + 0x48))(plVar8,uVar9 & 0xffffffff);
            if (lVar3 == 0) {
              *(byte *)((long)aiStack_e0 + (long)(int)uVar10) = (byte)uVar9;
              uVar10 = uVar10 + 1;
              goto LAB_71001a1c6c;
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != 0x20);
LAB_71001a1c7c:
        if (0 < (int)uVar10) {
          uVar9 = (ulong)uVar10;
          pbVar11 = (byte *)aiStack_e0;
          do {
            bVar1 = *pbVar11;
            FUN_7100190af0(DAT_71052adfc0,(uint)bVar1);
            plVar8 = (long *)FUN_7100161fa0(DAT_71052add68);
            lVar3 = (**(code **)(*plVar8 + 0x48))(plVar8,bVar1);
            if (lVar3 != 0) {
              (**(code **)(**(long **)(lVar3 + 0xa8) + 0x30))(*(long **)(lVar3 + 0xa8),lVar3);
              plVar8 = (long *)FUN_7100161fb0(DAT_71052add68);
              (**(code **)(*plVar8 + 0x58))(plVar8,lVar3);
              lVar6 = FUN_7100190ca0(DAT_71052adfc0);
              FUN_7100189910(lVar6,lVar3);
              FUN_710019b820(lVar3);
              FUN_710015e730(lVar3);
              plVar8 = (long *)FUN_7100161fa0(DAT_71052add68);
              (**(code **)(*plVar8 + 0x28))(plVar8,lVar3);
              FUN_7100162430(DAT_71052add68);
            }
            pbVar11 = pbVar11 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        plVar8 = FUN_71000bb680();
        lVar6 = *plVar8;
        uVar5 = 5;
        lVar3 = *(long *)(DAT_71052ac580 + 0x30);
        *(undefined1 *)((long)param_1 + 0xb1) = 1;
        param_1[0xd] = lVar3 + lVar6 * 500;
        pcVar7 = "ProcessHostMigrationJob::WaitGreetingResponse";
        param_1[6] = (long)FUN_71001a1e10;
        param_1[7] = 0;
        goto LAB_71001a1b54;
      }
      FUN_710015ff20((undefined8 *)aiStack_e0);
      aiStack_e0[0] = 0;
      aiStack_e0[1] = 0x10000;
      uStack_d8 = (ulong)uStack_d8._4_4_ << 0x20;
      (**(code **)(*plVar8 + 0x18))(plVar8,aiStack_e0);
    }
  }
  uVar5 = 0;
  param_1[6] = (long)FUN_71001a1d80;
  param_1[7] = 0;
  pcVar7 = "ProcessHostMigrationJob::HostMigrationFailure";
LAB_71001a1b54:
  param_1[8] = (long)pcVar7;
  return uVar5;
}

