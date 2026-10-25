// addr:      710018a080
// offset:    0x18a080
// name:      FUN_710018a080
// mangled:   
// signature: undefined FUN_710018a080(void)


undefined8 FUN_710018a080(long param_1)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  int aiStack_4f0 [4];
  int aiStack_4e0 [4];
  ulong uStack_4d0;
  undefined4 uStack_4c8;
  undefined **appuStack_4c0 [128];
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined4 uStack_b8;
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  undefined4 auStack_48 [2];
  
  piVar9 = aiStack_4f0;
  FUN_71001907f0(aiStack_60,DAT_71052adfc0);
  if (aiStack_60[0] == 0) {
    plVar3 = (long *)FUN_7100161fa0(DAT_71052add68);
    plVar3 = (long *)FUN_7100166790(plVar3);
    uVar4 = FUN_710015e680((long)plVar3);
    if ((uVar4 & 1) == 0) {
      piVar9 = *(int **)(param_1 + 0x58);
      if (2 < *piVar9 - 2U) {
        appuStack_4c0[0] = (undefined **)CONCAT44(appuStack_4c0[0]._4_4_,0x6439);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)appuStack_4c0 | 4));
        uStack_4d0 = uStack_4d0 & 0xffffffff00000000;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)appuStack_4c0 | 4),(Result *)&uStack_4d0);
        FUN_71000bce50(aiStack_80,(int *)appuStack_4c0);
        piVar10 = aiStack_80;
        goto LAB_710018a258;
      }
      goto LAB_710018a260;
    }
    FUN_7100190c90(DAT_71052adfc0);
    plVar5 = (long *)FUN_7100161fb0(DAT_71052add68);
    plVar1 = plVar5 + 1;
    uVar6 = FUN_71001602c0((long)plVar1);
    FUN_710015e550((long)plVar3,uVar6);
    FUN_7100160230(appuStack_4c0,(long)plVar1);
    FUN_71000beb40((long)(plVar3 + 2),(long)appuStack_4c0);
    appuStack_4c0[0] = &PTR_FUN_7104f4a808;
    FUN_71000b1cf0();
    (**(code **)(*plVar5 + 0x20))(appuStack_4c0,plVar5,plVar3,plVar1);
    FUN_71000bcf30(aiStack_60,(int *)appuStack_4c0);
    if (aiStack_60[0] != 0) {
      piVar9 = *(int **)(param_1 + 0x58);
      if (2 < *piVar9 - 2U) {
        appuStack_4c0[0] = (undefined **)CONCAT44(appuStack_4c0[0]._4_4_,0x6439);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)appuStack_4c0 | 4));
        uStack_4d0 = uStack_4d0 & 0xffffffff00000000;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)appuStack_4c0 | 4),(Result *)&uStack_4d0);
        FUN_71000bce50(aiStack_90,(int *)appuStack_4c0);
        piVar10 = aiStack_90;
        goto LAB_710018a258;
      }
      goto LAB_710018a260;
    }
    pvVar7 = (void *)FUN_7100190ca0(DAT_71052adfc0);
    FUN_710011bce0((long)appuStack_4c0);
    FUN_7100188bb0((int *)&uStack_4d0,pvVar7,appuStack_4c0);
    FUN_71000bcf30(aiStack_60,(int *)&uStack_4d0);
    if (aiStack_60[0] == 0) {
      uStack_b8 = 0;
      if (*(code **)(DAT_71052adfc0 + 0x70) != (code *)0x0) {
        uStack_b8 = (**(code **)(DAT_71052adfc0 + 0x70))();
      }
      uStack_bb = FUN_71001939a0(DAT_71052adfc0);
      bVar2 = FUN_7100193790(DAT_71052adfc0);
      uStack_ba = uStack_bb;
      if ((bVar2 & 1) == 0) {
        uStack_ba = 1;
      }
      pvVar7 = (void *)FUN_7100190ca0(DAT_71052adfc0);
      FUN_7100188900(pvVar7,appuStack_4c0);
      lVar8 = FUN_7100190ca0(DAT_71052adfc0);
      FUN_7100188db0((int *)&uStack_4d0,lVar8,plVar3,appuStack_4c0,0);
      FUN_71000bcf30(aiStack_60,(int *)&uStack_4d0);
      if (aiStack_60[0] == 0) {
        *(code **)(param_1 + 0x30) = FUN_710018a4b0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "JoinMeshJob::StartConnectingToHost";
        return 0;
      }
      FUN_7100190ca0(DAT_71052adfc0);
      uStack_4c8 = 0;
      uStack_4d0 = 0x80000000000;
      FUN_7100189a00();
      piVar10 = *(int **)(param_1 + 0x58);
      if (2 < *piVar10 - 2U) {
        uStack_4d0 = CONCAT44(uStack_4d0._4_4_,0x6439);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&uStack_4d0 | 4));
        auStack_48[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)&uStack_4d0 | 4),(Result *)auStack_48);
        FUN_71000bce50(aiStack_4f0,(int *)&uStack_4d0);
        goto LAB_710018a444;
      }
    }
    else {
      piVar10 = *(int **)(param_1 + 0x58);
      if (2 < *piVar10 - 2U) {
        uStack_4d0 = CONCAT44(uStack_4d0._4_4_,0x6439);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&uStack_4d0 | 4));
        auStack_48[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)&uStack_4d0 | 4),(Result *)auStack_48);
        FUN_71000bce50(aiStack_4e0,(int *)&uStack_4d0);
        piVar9 = aiStack_4e0;
LAB_710018a444:
        FUN_71000b41f0(piVar10,piVar9);
      }
    }
    bVar2 = FUN_7100193710();
    if ((bVar2 & 1) != 0) goto LAB_710018a2ac;
    uStack_4d0 = CONCAT44(uStack_4d0._4_4_,0x6439);
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_4d0 | 4));
    auStack_48[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&uStack_4d0 | 4),(Result *)auStack_48);
    DAT_71052ac6c0 = (undefined4)uStack_4d0;
  }
  else {
    piVar9 = *(int **)(param_1 + 0x58);
    if (2 < *piVar9 - 2U) {
      appuStack_4c0[0] = (undefined **)CONCAT44(appuStack_4c0[0]._4_4_,0x6439);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)appuStack_4c0 | 4));
      uStack_4d0 = uStack_4d0 & 0xffffffff00000000;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)appuStack_4c0 | 4),(Result *)&uStack_4d0);
      FUN_71000bce50(aiStack_70,(int *)appuStack_4c0);
      piVar10 = aiStack_70;
LAB_710018a258:
      FUN_71000b41f0(piVar9,piVar10);
    }
LAB_710018a260:
    bVar2 = FUN_7100193710();
    if ((bVar2 & 1) != 0) goto LAB_710018a2ac;
    appuStack_4c0[0] = (undefined **)CONCAT44(appuStack_4c0[0]._4_4_,0x6439);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)appuStack_4c0 | 4));
    uStack_4d0 = uStack_4d0 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)appuStack_4c0 | 4),(Result *)&uStack_4d0);
    DAT_71052ac6c0 = appuStack_4c0[0]._0_4_;
  }
  DAT_71052ac6d0 = *(undefined4 *)(param_1 + 0xac);
LAB_710018a2ac:
  FUN_7100193390(DAT_71052adfc0);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

