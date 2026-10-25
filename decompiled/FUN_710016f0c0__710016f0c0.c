// addr:      710016f0c0
// offset:    0x16f0c0
// name:      FUN_710016f0c0
// mangled:   
// signature: ulong __cdecl FUN_710016f0c0(long param_1)


ulong FUN_710016f0c0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  undefined2 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  ErrorResultVariant *this;
  int aiStack_170 [4];
  int aiStack_160 [4];
  int aiStack_150 [4];
  int aiStack_140 [4];
  int aiStack_130 [4];
  int aiStack_120 [4];
  int local_110 [4];
  int local_100 [4];
  undefined4 local_f0 [2];
  undefined1 auStack_e8 [48];
  uint local_b8 [18];
  int aiStack_70 [4];
  int local_60 [4];
  undefined4 local_48 [2];
  
  piVar4 = aiStack_170;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_60 | 4));
  local_b8[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_b8);
  lVar8 = *(long *)(param_1 + 0x70);
  FUN_710016c060((int *)local_b8);
  FUN_71000bcf30(local_60,(int *)local_b8);
  if (local_60[0] == 0) {
    FUN_710017ddf0(*(long *)(param_1 + 0x70),2);
    lVar1 = *(long *)(param_1 + 0x2a0) + 8;
    pvVar3 = memcpy((void *)((ulong)local_b8 | 4),(void *)(param_1 + 0x2ac),
                    (ulong)*(byte *)(param_1 + 0x2ec));
    uVar5 = 1;
    if (*(char *)(lVar8 + 0x83b8) != '\0') {
      uVar5 = 2;
    }
    local_b8[0] = (uint)CONCAT12(*(undefined1 *)(param_1 + 0x2ec),uVar5);
    FUN_710016e740(pvVar3,auStack_e8);
    uVar2 = FUN_710016af60(*(long *)(param_1 + 0x70));
    local_f0[0] = nn::ldn::Connect(lVar1,local_b8,auStack_e8,uVar2,0);
    FUN_710016b2f0(local_100,lVar8,(Result *)local_f0);
    if (local_100[0] != 0) {
      this = (ErrorResultVariant *)((ulong)local_110 | 4);
      local_110[0] = 0x6838;
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      local_48[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)local_48);
      if (local_100[0] == local_110[0]) {
        local_f0[0] = nn::ldn::Connect(lVar1,local_b8,auStack_e8,uVar2,0);
        FUN_710016b2f0(local_100,lVar8,(Result *)local_f0);
        if (local_100[0] == 0) goto LAB_710016f270;
        local_110[0] = 0x6838;
        nn::err::ErrorResultVariant::ErrorResultVariant(this);
        local_48[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)local_48);
      }
      puVar9 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_120,local_100);
      piVar4 = aiStack_120;
      goto LAB_710016f2e0;
    }
LAB_710016f270:
    FUN_710016f400(local_100,param_1);
    FUN_71000bcf30(local_60,local_100);
    if (local_60[0] != 0) {
      puVar9 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_130,local_60);
      piVar4 = aiStack_130;
      goto LAB_710016f2e0;
    }
    FUN_710016da00(local_100,lVar8);
    FUN_71000bcf30(local_60,local_100);
    if (local_60[0] != 0) {
      puVar9 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_140,local_60);
      piVar4 = aiStack_140;
      goto LAB_710016f2e0;
    }
    FUN_710016c120(local_100,lVar8);
    FUN_71000bcf30(local_60,local_100);
    puVar9 = *(undefined4 **)(param_1 + 0x58);
    if (local_60[0] != 0) {
      FUN_71000bce50(aiStack_150,local_60);
      piVar4 = aiStack_150;
      goto LAB_710016f2e0;
    }
    if (*(char *)(puVar9 + 10) == '\0') {
      (**(code **)(**(long **)(param_1 + 0x70) + 0x148))
                (local_100,*(long **)(param_1 + 0x70),param_1 + 0x2a0);
      FUN_710016db50(local_110,lVar8);
      FUN_71000bcf30(local_60,local_110);
      if (local_60[0] == 0) {
        if (local_100[0] == 0) {
          *(char **)(param_1 + 0x40) = "LdnBackgroundProcessJob::WaitConnectNetworkEvent";
          uVar7 = 4;
          *(code **)(param_1 + 0x30) = FUN_7100173400;
          *(undefined8 *)(param_1 + 0x38) = 0;
          uVar6 = 0xf0000;
          goto LAB_710016f2f0;
        }
        puVar9 = *(undefined4 **)(param_1 + 0x58);
        FUN_71000bce50(aiStack_170,local_100);
      }
      else {
        puVar9 = *(undefined4 **)(param_1 + 0x58);
        FUN_71000bce50(aiStack_160,local_60);
        piVar4 = aiStack_160;
      }
      goto LAB_710016f2e0;
    }
    FUN_71000b4260(puVar9);
  }
  else {
    puVar9 = *(undefined4 **)(param_1 + 0x58);
    FUN_71000bce50(aiStack_70,local_60);
    piVar4 = aiStack_70;
LAB_710016f2e0:
    FUN_71000b41f0(puVar9,piVar4);
  }
  uVar6 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar7 = 1;
LAB_710016f2f0:
  return uVar6 | uVar7;
}

