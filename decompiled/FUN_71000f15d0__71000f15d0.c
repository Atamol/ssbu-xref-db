// addr:      71000f15d0
// offset:    0xf15d0
// name:      FUN_71000f15d0
// mangled:   
// signature: ulong __cdecl FUN_71000f15d0(long param_1)


ulong FUN_71000f15d0(long param_1)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  undefined4 *puVar8;
  ErrorResultVariant *this;
  int aiStack_80 [4];
  long local_70;
  undefined4 local_68;
  int aiStack_60 [4];
  ulong local_50;
  undefined4 local_48 [2];
  
  if (*(int *)(param_1 + 0x108) == 1) {
    iVar1 = *(int *)(DAT_71052acd90 + 0xb4);
    plVar3 = FUN_71000bb680();
    lVar7 = *plVar3;
    local_70 = 0;
    FUN_71000bb5d0(&local_70);
    *(code **)(param_1 + 0x30) = FUN_71000f17c0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(long *)(param_1 + 0x100) = local_70 + lVar7 * ((long)iVar1 + 5000);
LAB_71000f166c:
    pcVar6 = "NexConnectStationJob::WaitForNatTraversalCompletedByRelay";
  }
  else {
    if (*(int *)(param_1 + 0x108) - 2U < 3) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(code **)(param_1 + 0x30) = FUN_71000f17c0;
      goto LAB_71000f166c;
    }
    if ((*(char *)(*(long *)(param_1 + 0x70) + 0x38) != -2) &&
       (bVar2 = FUN_7100193a00(DAT_71052adfc0), (bVar2 & 1) == 0)) {
LAB_71000f17b4:
      uVar4 = 0x640000;
      uVar5 = 4;
      goto LAB_71000f1678;
    }
    local_50 = 0;
    FUN_71000bb5d0(&local_50);
    if (local_50 <= *(ulong *)(param_1 + 0x100)) goto LAB_71000f17b4;
    local_68 = 0;
    local_70 = 0x20000;
    FUN_7100160990();
    puVar8 = *(undefined4 **)(param_1 + 0x68);
    this = (ErrorResultVariant *)((ulong)&local_70 | 4);
    local_70._0_4_ = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    local_48[0] = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)local_48);
    FUN_71000bce50(aiStack_60,(int *)&local_70);
    FUN_71000b41f0(puVar8,aiStack_60);
    lVar7 = DAT_71052acd90;
    local_70 = CONCAT44(local_70._4_4_,0x644a);
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    local_48[0] = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)local_48);
    FUN_71000bce50(aiStack_80,(int *)&local_70);
    FUN_71000c5af0(lVar7,(long *)(param_1 + 0x80),aiStack_80,0);
    FUN_71000c5390(DAT_71052acd90,(long *)(param_1 + 0x80),1,1);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(code **)(param_1 + 0x30) = FUN_7100186ed0;
    pcVar6 = "ConnectStationJob::ConnectionFailed";
  }
  uVar5 = 0;
  uVar4 = 0;
  *(char **)(param_1 + 0x40) = pcVar6;
LAB_71000f1678:
  return uVar4 | uVar5;
}

