// addr:      71001a3b80
// offset:    0x1a3b80
// name:      FUN_71001a3b80
// mangled:   
// signature: undefined8 __cdecl FUN_71001a3b80(long param_1)


undefined8 FUN_71001a3b80(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  ushort uVar18;
  undefined4 *puVar19;
  void *pvVar20;
  undefined8 uVar21;
  undefined **local_2a0;
  undefined4 local_298;
  int local_278 [4];
  uint local_268 [32];
  int local_1e8 [32];
  long local_168 [33];
  
  plVar9 = (long *)FUN_7100161fa0(DAT_71052add68);
  if ((plVar9[0x13] != 0) &&
     (lVar10 = (**(code **)(*plVar9 + 0x58))(plVar9,param_1 + 0x90), lVar10 != 0)) {
    uVar7 = FUN_71001925f0(DAT_71052adfc0);
    *(char *)(param_1 + 0xb8) = (char)uVar7;
    if ((uVar7 & 0xff) == 0xfd) {
      *(code **)(param_1 + 0x30) = FUN_71001a3ae0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar15 = "ProcessJoinRequestJob::SendJoinRefused";
      goto LAB_71001a408c;
    }
    local_168[0x1f] = 0;
    local_168[0x1e] = 0;
    local_168[0x1d] = 0;
    local_168[0x1c] = 0;
    local_168[0x1b] = 0;
    local_168[0x1a] = 0;
    local_168[0x19] = 0;
    local_168[0x18] = 0;
    local_168[0x16] = 0;
    local_168[0x17] = 0;
    local_168[0x14] = 0;
    local_168[0x15] = 0;
    local_168[0x12] = 0;
    local_168[0x13] = 0;
    local_168[0x10] = 0;
    local_168[0x11] = 0;
    local_168[0xe] = 0;
    local_168[0xf] = 0;
    local_168[0xc] = 0;
    local_168[0xd] = 0;
    local_168[10] = 0;
    local_168[0xb] = 0;
    local_168[8] = 0;
    local_168[9] = 0;
    local_168[6] = 0;
    local_168[7] = 0;
    local_168[4] = 0;
    local_168[5] = 0;
    local_168[2] = 0;
    local_168[3] = 0;
    local_168[0] = 0;
    local_168[1] = 0;
    FUN_710015fd60((undefined8 *)local_1e8);
    FUN_710015fd60((undefined8 *)local_268);
    plVar11 = (long *)FUN_7100161fb0(DAT_71052add68);
    (**(code **)(*plVar11 + 0x28))(local_278,plVar11,lVar10,local_1e8);
    uVar21 = 0;
    if (local_278[0] == 0) {
      uVar21 = FUN_71001602c0((long)local_1e8);
      FUN_7100160230(&local_2a0,(long)local_1e8);
      bVar4 = FUN_71000beb20((long)&local_2a0);
      local_2a0 = &PTR_FUN_7104f4a808;
      FUN_71000b1cf0();
      if (bVar4) {
        plVar11 = (long *)plVar9[4];
        if (plVar11 != plVar9 + 3) {
          uVar18 = 0;
          do {
            if (plVar11[2] != lVar10) {
              plVar12 = (long *)FUN_7100161fb0(DAT_71052add68);
              (**(code **)(*plVar12 + 0x28))(&local_2a0,plVar12,plVar11[2],local_268);
              FUN_71000bcf30(local_278,(int *)&local_2a0);
              if ((local_278[0] == 0) &&
                 (bVar4 = FUN_71001603e0((long)local_1e8,(long)local_268), bVar4)) {
                uVar16 = (ulong)uVar18;
                uVar18 = uVar18 + 1;
                local_168[uVar16] = plVar11[2];
              }
            }
            plVar11 = (long *)plVar11[1];
          } while (plVar11 != plVar9 + 3);
          if (uVar18 != 0) {
            bVar4 = false;
            uVar16 = (ulong)uVar18;
            plVar11 = local_168;
            do {
              plVar12 = (long *)*plVar11;
              local_2a0 = (undefined **)0x80000000000;
              local_298 = 0;
              (**(code **)(*plVar12 + 0x18))(plVar12,&local_2a0);
              bVar6 = *(byte *)(plVar12 + 7);
              bVar5 = FUN_7100190a90(DAT_71052adfc0,bVar6);
              if (bVar5) {
                FUN_7100190af0(DAT_71052adfc0,(uint)bVar6);
                bVar4 = true;
              }
              (**(code **)(*(long *)plVar12[0x15] + 0x30))((long *)plVar12[0x15],plVar12);
              plVar13 = (long *)FUN_7100161fb0(DAT_71052add68);
              (**(code **)(*plVar13 + 0x58))(plVar13,plVar12);
              lVar14 = FUN_7100190ca0(DAT_71052adfc0);
              FUN_7100189910(lVar14,(long)plVar12);
              FUN_710015e730((long)plVar12);
              FUN_710019b820((long)plVar12);
              (**(code **)(*plVar9 + 0x28))(plVar9,plVar12);
              plVar11 = plVar11 + 1;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
            FUN_7100162430(DAT_71052add68);
            if (bVar4) {
              plVar9 = (long *)FUN_7100193580(DAT_71052adfc0);
              FUN_7100198450(plVar9,1,1);
            }
          }
        }
      }
    }
    FUN_710015ff20((undefined8 *)local_268);
    FUN_710015ff20((undefined8 *)local_1e8);
    FUN_710015e540(lVar10,*(undefined1 *)(param_1 + 0xb8));
    FUN_710015e550(lVar10,uVar21);
    FUN_710015e7d0((int *)local_168,lVar10);
    FUN_7100192f70(DAT_71052adfc0,(uint)*(byte *)(param_1 + 0xb8));
    lVar14 = FUN_7100193a30(DAT_71052adfc0);
    if (lVar14 != 0) {
      lVar14 = FUN_7100193a30(DAT_71052adfc0);
      bVar6 = FUN_7100193560(DAT_71052adfc0);
      FUN_71001acaf0((int *)local_168,lVar14,(uint)bVar6,(uint)*(byte *)(param_1 + 0xb8),
                     *(byte *)(param_1 + 0xb8));
    }
    local_168[0] = 0;
    FUN_71000bb5d0(local_168);
    iVar3 = *(int *)(param_1 + 0x60);
    plVar9 = FUN_71000bb680();
    lVar14 = local_168[0] + *plVar9 * (long)iVar3;
    local_168[0] = *(long *)(param_1 + 0x78);
    *(long *)(param_1 + 0x58) = lVar14;
    local_168[1] = *(undefined8 *)(param_1 + 0x80);
    local_168[2] = *(undefined8 *)(param_1 + 0x88);
    local_268[2] = 0;
    local_268[0] = 0;
    local_268[1] = 0;
    lVar14 = FUN_7100193580(DAT_71052adfc0);
    uVar7 = FUN_710019b1e0(lVar14,*(byte *)(param_1 + 0xb8),local_168,local_268);
    if ((uVar7 - 1 & 0xff) < 3) {
      uVar16 = 0;
      puVar19 = (undefined4 *)(param_1 + 0x68);
      while( true ) {
        plVar9 = (long *)FUN_7100193a40(DAT_71052adfc0);
        pvVar20 = (void *)local_168[uVar16];
        uVar2 = local_268[uVar16];
        plVar11 = (long *)FUN_7100193580(DAT_71052adfc0);
        uVar8 = (**(code **)(*plVar11 + 0x18))();
        FUN_71001adc20(local_1e8,plVar9,puVar19,pvVar20,uVar2,lVar10 + 0x10,uVar8,
                       *(long *)(param_1 + 0x58));
        if (local_1e8[0] != 0) break;
        uVar16 = uVar16 + 1;
        puVar19 = puVar19 + 1;
        if (((ulong)uVar7 & 0xff) <= uVar16) {
          if ((uVar7 & 0xff) < 3) {
            uVar16 = (ulong)uVar7 & 0xff;
            uVar17 = 2 - uVar16;
            uVar7 = 3 - uVar7 & 3;
            if (uVar7 != 0) {
              lVar10 = -(ulong)uVar7;
              do {
                lVar14 = uVar16 * 4;
                uVar16 = uVar16 + 1;
                lVar10 = lVar10 + 1;
                *(undefined4 *)(param_1 + lVar14 + 0x68) = 0;
              } while (lVar10 != 0);
            }
            if (2 < uVar17) {
              lVar10 = uVar16 * 4 + 0x68;
              do {
                puVar1 = (undefined8 *)(param_1 + lVar10);
                lVar10 = lVar10 + 0x10;
                *puVar1 = 0;
                puVar1[1] = 0;
              } while (lVar10 != 0x74);
            }
          }
          *(char **)(param_1 + 0x40) = "ProcessJoinRequestJob::WaitResponseAck";
          *(code **)(param_1 + 0x30) = FUN_71001a40b0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          return 5;
        }
      }
      if ((uVar16 & 0xff) != 0) {
        lVar10 = uVar16 + 0x19;
        do {
          plVar9 = (long *)FUN_7100193a40(DAT_71052adfc0);
          FUN_71001ae030(plVar9,*(int *)(param_1 + lVar10 * 4));
          lVar14 = lVar10 + -0x19;
          lVar10 = lVar10 + -1;
        } while (1 < lVar14);
      }
    }
  }
  *(code **)(param_1 + 0x30) = FUN_71001a3920;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar15 = "ProcessJoinRequestJob::InitialStep";
LAB_71001a408c:
  *(char **)(param_1 + 0x40) = pcVar15;
  return 0;
}

