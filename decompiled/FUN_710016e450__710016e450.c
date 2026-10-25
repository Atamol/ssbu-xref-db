// addr:      710016e450
// offset:    0x16e450
// name:      FUN_710016e450
// mangled:   
// signature: undefined FUN_710016e450(void)


ulong FUN_710016e450(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined4 *puVar11;
  long lVar12;
  int aiStack_160 [4];
  int aiStack_150 [4];
  int aiStack_140 [4];
  int aiStack_130 [4];
  int aiStack_120 [4];
  int aiStack_110 [4];
  undefined4 auStack_100 [2];
  UserConfig aUStack_f8 [48];
  undefined8 uStack_c8;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined1 uStack_6e;
  undefined2 uStack_6c;
  int aiStack_60 [4];
  int aiStack_50 [4];
  
  piVar7 = aiStack_160;
  aiStack_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)&uStack_c8);
  if ((*(char *)(param_1 + 0x78) == '\0') &&
     (bVar1 = FUN_7100182850(*(long *)(param_1 + 0x70)), bVar1)) {
    uVar4 = FUN_71000b63d0();
    uVar5 = FUN_71000b63d0();
    FUN_7100173820(param_1,uVar4,uVar5);
    uVar2 = FUN_7100173100(param_1);
    FUN_71001820f0(*(long *)(param_1 + 0x70),uVar2);
    (**(code **)(**(long **)(param_1 + 0x70) + 0xd0))
              (*(long **)(param_1 + 0x70),param_1 + 0x105,uVar2);
  }
  FUN_710016c000((int *)&uStack_c8);
  FUN_71000bcf30(aiStack_50,(int *)&uStack_c8);
  if (aiStack_50[0] == 0) {
    FUN_710017ddf0(*(long *)(param_1 + 0x70),1);
    (**(code **)(**(long **)(param_1 + 0x70) + 0xa8))
              (&uStack_c8,*(long **)(param_1 + 0x70),param_1 + 0x105,
               *(undefined4 *)(param_1 + 0x288));
    FUN_71000bcf30(aiStack_50,(int *)&uStack_c8);
    uStack_70 = *(undefined2 *)(param_1 + 0x28c);
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    uVar10 = *(undefined2 *)(param_1 + 0xc0);
    memset(&uStack_c8,0,0x10);
    uStack_78 = CONCAT44(uStack_bc,CONCAT22(uVar10,uStack_c0));
    uStack_6e = *(undefined1 *)(param_1 + 0xc2);
    uStack_c8 = uVar4;
    uStack_be = uVar10;
    uStack_80 = uVar4;
    uVar3 = FUN_710016af60(*(long *)(param_1 + 0x70));
    uStack_6c = (undefined2)uVar3;
    pvVar6 = memcpy((void *)((ulong)&uStack_c8 | 4),(void *)(param_1 + 0xc4),
                    (ulong)*(byte *)(param_1 + 0x104));
    uVar10 = 1;
    if (*(char *)(*(long *)(param_1 + 0x70) + 0x83b8) != '\0') {
      uVar10 = 2;
    }
    uStack_c8 = CONCAT62(CONCAT42(uStack_c8._4_4_,(ushort)*(byte *)(param_1 + 0x104)),uVar10);
    FUN_710016e740(pvVar6,aUStack_f8);
    auStack_100[0] =
         nn::ldn::CreateNetwork((NetworkConfig *)&uStack_80,(SecurityConfig *)&uStack_c8,aUStack_f8)
    ;
    FUN_710016b2f0(aiStack_110,*(undefined8 *)(param_1 + 0x70),(Result *)auStack_100);
    if (aiStack_110[0] != 0) {
      puVar11 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_120,aiStack_110);
      piVar7 = aiStack_120;
      goto LAB_710016e660;
    }
    lVar12 = *(long *)(param_1 + 0x70);
    FUN_710016da00(aiStack_130,lVar12);
    FUN_71000bcf30(aiStack_50,aiStack_130);
    if (aiStack_50[0] != 0) {
      puVar11 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_140,aiStack_50);
      piVar7 = aiStack_140;
      goto LAB_710016e660;
    }
    FUN_710016c120(aiStack_130,lVar12);
    FUN_71000bcf30(aiStack_50,aiStack_130);
    puVar11 = *(undefined4 **)(param_1 + 0x58);
    if (aiStack_50[0] != 0) {
      FUN_71000bce50(aiStack_150,aiStack_50);
      piVar7 = aiStack_150;
      goto LAB_710016e660;
    }
    if (*(char *)(puVar11 + 10) == '\0') {
      FUN_710016db50(aiStack_130,lVar12);
      FUN_71000bcf30(aiStack_50,aiStack_130);
      if (aiStack_50[0] == 0) {
        *(char **)(param_1 + 0x40) = "LdnBackgroundProcessJob::WaitCreateNetworkEvent";
        uVar9 = 4;
        *(code **)(param_1 + 0x30) = FUN_7100173110;
        *(undefined8 *)(param_1 + 0x38) = 0;
        uVar8 = 0xf0000;
        goto LAB_710016e670;
      }
      puVar11 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_160,aiStack_50);
      goto LAB_710016e660;
    }
    FUN_71000b4260(puVar11);
  }
  else {
    puVar11 = *(undefined4 **)(param_1 + 0x58);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar7 = aiStack_60;
LAB_710016e660:
    FUN_71000b41f0(puVar11,piVar7);
  }
  uVar8 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar9 = 1;
LAB_710016e670:
  return uVar8 | uVar9;
}

