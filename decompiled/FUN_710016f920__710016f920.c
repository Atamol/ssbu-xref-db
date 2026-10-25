// addr:      710016f920
// offset:    0x16f920
// name:      FUN_710016f920
// mangled:   
// signature: undefined FUN_710016f920(void)


ulong FUN_710016f920(long param_1)

{
  void *pvVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  int aiStack_158 [4];
  int aiStack_148 [4];
  int aiStack_138 [4];
  int aiStack_128 [4];
  int aiStack_118 [4];
  int aiStack_108 [4];
  UserConfig aUStack_f8 [48];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  uint auStack_a8 [18];
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  aiStack_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_a8[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_a8);
  lVar5 = *(long *)(param_1 + 0x70);
  FUN_710016c000((int *)auStack_a8);
  FUN_71000bcf30(aiStack_50,(int *)auStack_a8);
  if (aiStack_50[0] == 0) {
    FUN_710017ddf0(*(long *)(param_1 + 0x70),1);
    (**(code **)(**(long **)(param_1 + 0x70) + 0xa8))
              (auStack_a8,*(long **)(param_1 + 0x70),param_1 + 0x105,
               *(undefined4 *)(param_1 + 0x288));
    FUN_71000bcf30(aiStack_50,(int *)auStack_a8);
    pvVar1 = memcpy((void *)((ulong)auStack_a8 | 4),(void *)(param_1 + 0xc4),
                    (ulong)*(byte *)(param_1 + 0x104));
    uVar7 = 1;
    if (*(char *)(lVar5 + 0x83b8) != '\0') {
      uVar7 = 2;
    }
    auStack_a8[0] = (uint)CONCAT12(*(undefined1 *)(param_1 + 0x104),uVar7);
    uStack_c8 = *(undefined8 *)(lVar5 + 0x841c);
    uStack_c0 = *(undefined8 *)(lVar5 + 0x8424);
    uStack_b0 = *(undefined8 *)(lVar5 + 0x8434);
    _cStack_b8 = CONCAT71((int7)((ulong)*(undefined8 *)(lVar5 + 0x842c) >> 8),
                          (char)*(undefined8 *)(lVar5 + 0x842c) + '\x01');
    FUN_710016e740(pvVar1,aUStack_f8);
    auStack_38[0] =
         nn::ldn::CreateNetworkPrivate
                   ((NetworkConfig *)(param_1 + 0x2f0),(SecurityConfig *)auStack_a8,
                    (SecurityParameter *)&uStack_c8,aUStack_f8,8,(AddressEntry *)(lVar5 + 0x83bc));
    FUN_710016b2f0(aiStack_108,lVar5,(Result *)auStack_38);
    if (aiStack_108[0] != 0) {
      puVar6 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_118,aiStack_108);
      piVar2 = aiStack_118;
      goto LAB_710016fad4;
    }
    FUN_710016b170(lVar5);
    FUN_710016da00(aiStack_128,lVar5);
    FUN_71000bcf30(aiStack_50,aiStack_128);
    if (aiStack_50[0] != 0) {
      puVar6 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_138,aiStack_50);
      piVar2 = aiStack_138;
      goto LAB_710016fad4;
    }
    FUN_710016c120(aiStack_128,lVar5);
    FUN_71000bcf30(aiStack_50,aiStack_128);
    puVar6 = *(undefined4 **)(param_1 + 0x58);
    if (aiStack_50[0] != 0) {
      FUN_71000bce50(aiStack_148,aiStack_50);
      piVar2 = aiStack_148;
      goto LAB_710016fad4;
    }
    if (*(char *)(puVar6 + 10) == '\0') {
      FUN_710016db50(aiStack_128,lVar5);
      FUN_71000bcf30(aiStack_50,aiStack_128);
      if (aiStack_50[0] == 0) {
        *(char **)(param_1 + 0x40) = "LdnBackgroundProcessJob::WaitCreateNetworkEvent";
        uVar4 = 4;
        *(code **)(param_1 + 0x30) = FUN_7100173110;
        *(undefined8 *)(param_1 + 0x38) = 0;
        uVar3 = 0xf0000;
        goto LAB_710016fae4;
      }
      puVar6 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_158,aiStack_50);
      piVar2 = aiStack_158;
      goto LAB_710016fad4;
    }
    FUN_71000b4260(puVar6);
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 0x58);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar2 = aiStack_60;
LAB_710016fad4:
    FUN_71000b41f0(puVar6,piVar2);
  }
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar4 = 1;
LAB_710016fae4:
  return uVar3 | uVar4;
}

