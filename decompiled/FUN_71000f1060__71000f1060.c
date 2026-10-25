// addr:      71000f1060
// offset:    0xf1060
// name:      FUN_71000f1060
// mangled:   
// signature: undefined FUN_71000f1060(void)


uint FUN_71000f1060(long param_1)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  ErrorResultVariant *this;
  int aiStack_80 [4];
  int aiStack_70 [4];
  ulong uStack_60;
  long lStack_58;
  undefined4 uStack_50;
  undefined4 auStack_48 [2];
  
  if (*(int *)(param_1 + 0x108) == 1) {
    iVar10 = *(int *)((long)DAT_71052acd90 + 0xb4);
    lVar5 = FUN_7100161fb0(DAT_71052add68);
    bVar2 = FUN_7100160300(lVar5 + 8);
    if (bVar2) {
      iVar10 = (int)DAT_71052acd90[0x17] + iVar10;
    }
    bVar2 = FUN_7100160300(param_1 + 0x80);
    if ((bVar2) || (*(char *)(*(long *)(param_1 + 0x70) + 0x38) == -2)) {
      iVar10 = (int)DAT_71052acd90[0x17] + iVar10;
    }
    plVar6 = FUN_71000bb680();
    lVar5 = *plVar6;
    lStack_58 = 0;
    FUN_71000bb5d0(&lStack_58);
    lStack_58 = lStack_58 + lVar5 * iVar10;
LAB_71000f12f8:
    *(long *)(param_1 + 0x100) = lStack_58;
    pcVar9 = "NexConnectStationJob::WaitForNatTraversalCompleted";
    *(code **)(param_1 + 0x30) = FUN_71000f0ae0;
    *(undefined8 *)(param_1 + 0x38) = 0;
LAB_71000f1308:
    uVar4 = 0;
    uVar8 = 0;
    *(char **)(param_1 + 0x40) = pcVar9;
  }
  else {
    if (*(int *)(param_1 + 0x108) - 2U < 3) {
      if ((*(int *)(param_1 + 0x138) < 1) ||
         (FUN_71000bce50((int *)&lStack_58,(int *)(param_1 + 0x10c)), (int)lStack_58 == 0)) {
        iVar10 = *(int *)((long)DAT_71052acd90 + 0xb4);
        plVar6 = FUN_71000bb680();
        lVar5 = *plVar6;
        lStack_58 = 0;
        FUN_71000bb5d0(&lStack_58);
        lStack_58 = lStack_58 + lVar5 * iVar10;
        goto LAB_71000f12f8;
      }
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + -1;
      *(undefined8 *)(param_1 + 0x140) = 0;
      FUN_71000c5390((long)DAT_71052acd90,(long *)(param_1 + 0x80),1,1);
      FUN_71000b40e0((undefined4 *)(param_1 + 0x108));
      iVar10 = (int)DAT_71052acd90[0x17] + *(int *)((long)DAT_71052acd90 + 0xb4);
      uVar4 = FUN_7100138620((uint *)&DAT_71052acf18);
      iVar1 = iVar10 + (int)((ulong)uVar4 * 10 >> 0x20) * 1000;
      *(code **)(param_1 + 0x30) = FUN_71000f0790;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexConnectStationJob::PrepareNatTraversal";
      plVar6 = FUN_71000bb680();
      lVar5 = *plVar6;
      lStack_58 = 0;
      FUN_71000bb5d0(&lStack_58);
      uVar4 = iVar1 * 0x10000;
      *(long *)(param_1 + 0x100) = lStack_58 + lVar5 * (iVar1 + iVar10);
    }
    else {
      if ((*(char *)(*(long *)(param_1 + 0x70) + 0x38) == -2) ||
         (bVar3 = FUN_7100193a00(DAT_71052adfc0), (bVar3 & 1) != 0)) {
        uStack_60 = 0;
        FUN_71000bb5d0(&uStack_60);
        if (*(ulong *)(param_1 + 0x100) < uStack_60) {
          if (*(char *)(*(long *)(param_1 + 0x70) + 0x38) == -2) {
            iVar10 = *(int *)(param_1 + 0x13c);
            if (0 < iVar10) {
              *(int *)(param_1 + 0x13c) = iVar10 + -1;
              uVar7 = (**(code **)(*DAT_71052acd90 + 0x58))();
              if ((uVar7 & 1) != 0) {
                DAT_71052ac624 = '\x02' - (char)iVar10;
              }
              uVar4 = 0x640000;
              plVar6 = FUN_71000bb680();
              lVar5 = *plVar6;
              lStack_58 = 0;
              FUN_71000bb5d0(&lStack_58);
              *(long *)(param_1 + 0x100) = lStack_58 + lVar5 * 5000;
              goto LAB_71000f12b4;
            }
          }
          uStack_50 = 0;
          lStack_58 = 0x20000;
          FUN_7100160990();
          puVar11 = *(undefined4 **)(param_1 + 0x68);
          this = (ErrorResultVariant *)((ulong)&lStack_58 | 4);
          lStack_58._0_4_ = 0x644a;
          nn::err::ErrorResultVariant::ErrorResultVariant(this);
          auStack_48[0] = 0;
          nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_48);
          FUN_71000bce50(aiStack_70,(int *)&lStack_58);
          FUN_71000b41f0(puVar11,aiStack_70);
          plVar6 = DAT_71052acd90;
          lStack_58 = CONCAT44(lStack_58._4_4_,0x644a);
          nn::err::ErrorResultVariant::ErrorResultVariant(this);
          auStack_48[0] = 0;
          nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_48);
          FUN_71000bce50(aiStack_80,(int *)&lStack_58);
          FUN_71000c5af0((long)plVar6,(long *)(param_1 + 0x80),aiStack_80,0);
          FUN_71000c5390((long)DAT_71052acd90,(long *)(param_1 + 0x80),1,1);
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(code **)(param_1 + 0x30) = FUN_7100186ed0;
          pcVar9 = "ConnectStationJob::ConnectionFailed";
          goto LAB_71000f1308;
        }
      }
      uVar4 = 0x640000;
    }
LAB_71000f12b4:
    uVar8 = 4;
  }
  return uVar4 | uVar8;
}

