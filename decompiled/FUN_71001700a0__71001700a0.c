// addr:      71001700a0
// offset:    0x1700a0
// name:      FUN_71001700a0
// mangled:   
// signature: ulong __cdecl FUN_71001700a0(long param_1)


ulong FUN_71001700a0(long param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int *piVar3;
  undefined2 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  ErrorResultVariant *this;
  int aiStack_180 [4];
  int aiStack_170 [4];
  int aiStack_160 [4];
  int aiStack_150 [4];
  int aiStack_140 [4];
  int local_130 [4];
  int local_120 [4];
  undefined4 local_110 [2];
  undefined1 auStack_108 [48];
  undefined8 local_d8;
  undefined8 uStack_d0;
  char local_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  uint local_b8 [18];
  int aiStack_70 [4];
  int local_60 [4];
  undefined4 local_48 [2];
  
  piVar3 = aiStack_180;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_60 | 4));
  local_b8[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_b8);
  lVar7 = *(long *)(param_1 + 0x70);
  FUN_710016c060((int *)local_b8);
  FUN_71000bcf30(local_60,(int *)local_b8);
  if (local_60[0] == 0) {
    FUN_710017ddf0(*(long *)(param_1 + 0x70),2);
    pvVar2 = memcpy((void *)((ulong)local_b8 | 4),(void *)(param_1 + 0x2ac),
                    (ulong)*(byte *)(param_1 + 0x2ec));
    uVar4 = 1;
    if (*(char *)(lVar7 + 0x83b8) != '\0') {
      uVar4 = 2;
    }
    local_b8[0] = (uint)CONCAT12(*(undefined1 *)(param_1 + 0x2ec),uVar4);
    local_d8 = *(undefined8 *)(lVar7 + 0x841c);
    uStack_d0 = *(undefined8 *)(lVar7 + 0x8424);
    uStack_c0 = *(undefined8 *)(lVar7 + 0x8434);
    _local_c8 = CONCAT71((int7)((ulong)*(undefined8 *)(lVar7 + 0x842c) >> 8),
                         (char)*(undefined8 *)(lVar7 + 0x842c) + '\x01');
    FUN_710016e740(pvVar2,auStack_108);
    uVar1 = FUN_710016af60(*(long *)(param_1 + 0x70));
    local_110[0] = nn::ldn::ConnectPrivate(param_1 + 0x2f0,local_b8,&local_d8,auStack_108,uVar1,0);
    FUN_710016b2f0(local_120,lVar7,(Result *)local_110);
    if (local_120[0] != 0) {
      this = (ErrorResultVariant *)((ulong)local_130 | 4);
      local_130[0] = 0x6838;
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      local_48[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)local_48);
      if (local_120[0] == local_130[0]) {
        local_110[0] = nn::ldn::ConnectPrivate
                                 (param_1 + 0x2f0,local_b8,&local_d8,auStack_108,uVar1,0);
        FUN_710016b2f0(local_120,lVar7,(Result *)local_110);
        if (local_120[0] == 0) goto LAB_7100170288;
        local_130[0] = 0x6838;
        nn::err::ErrorResultVariant::ErrorResultVariant(this);
        local_48[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)local_48);
      }
      puVar8 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_140,local_120);
      piVar3 = aiStack_140;
      goto LAB_71001702c8;
    }
LAB_7100170288:
    FUN_710016b170(lVar7);
    FUN_710016da00(local_120,lVar7);
    FUN_71000bcf30(local_60,local_120);
    if (local_60[0] != 0) {
      puVar8 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_150,local_60);
      piVar3 = aiStack_150;
      goto LAB_71001702c8;
    }
    FUN_710016c120(local_120,lVar7);
    FUN_71000bcf30(local_60,local_120);
    puVar8 = *(undefined4 **)(param_1 + 0x58);
    if (local_60[0] != 0) {
      FUN_71000bce50(aiStack_160,local_60);
      piVar3 = aiStack_160;
      goto LAB_71001702c8;
    }
    if (*(char *)(puVar8 + 10) == '\0') {
      (**(code **)(**(long **)(param_1 + 0x70) + 0x148))
                (local_120,*(long **)(param_1 + 0x70),param_1 + 0x2a0);
      FUN_710016db50(local_130,lVar7);
      FUN_71000bcf30(local_60,local_130);
      if (local_60[0] == 0) {
        if (local_120[0] == 0) {
          *(char **)(param_1 + 0x40) = "LdnBackgroundProcessJob::WaitConnectNetworkEvent";
          uVar6 = 4;
          *(code **)(param_1 + 0x30) = FUN_7100173400;
          *(undefined8 *)(param_1 + 0x38) = 0;
          uVar5 = 0xf0000;
          goto LAB_71001702d8;
        }
        puVar8 = *(undefined4 **)(param_1 + 0x58);
        FUN_71000bce50(aiStack_180,local_120);
      }
      else {
        puVar8 = *(undefined4 **)(param_1 + 0x58);
        FUN_71000bce50(aiStack_170,local_60);
        piVar3 = aiStack_170;
      }
      goto LAB_71001702c8;
    }
    FUN_71000b4260(puVar8);
  }
  else {
    puVar8 = *(undefined4 **)(param_1 + 0x58);
    FUN_71000bce50(aiStack_70,local_60);
    piVar3 = aiStack_70;
LAB_71001702c8:
    FUN_71000b41f0(puVar8,piVar3);
  }
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar6 = 1;
LAB_71001702d8:
  return uVar5 | uVar6;
}

