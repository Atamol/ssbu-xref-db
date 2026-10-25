// addr:      710018a4b0
// offset:    0x18a4b0
// name:      FUN_710018a4b0
// mangled:   
// signature: undefined FUN_710018a4b0(void)


undefined8 FUN_710018a4b0(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  int aiStack_78 [4];
  undefined **appuStack_68 [5];
  undefined4 auStack_38 [2];
  
  uVar4 = FUN_710018a7d0(param_1);
  uVar5 = 1;
  if ((uVar4 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x98) = 1;
    plVar6 = (long *)FUN_7100161fa0(DAT_71052add68);
    lVar7 = (**(code **)(*plVar6 + 0x20))();
    uVar4 = FUN_710015e680(lVar7);
    if ((uVar4 & 1) != 0) {
      uVar1 = FUN_7100193110(DAT_71052adfc0);
      FUN_710015e540(lVar7,uVar1);
      uVar5 = FUN_71001602c0(*(long *)(param_1 + 0x70));
      FUN_710015e550(lVar7,uVar5);
      FUN_7100160230(appuStack_68,*(long *)(param_1 + 0x70));
      FUN_71000beb40(lVar7 + 0x10,(long)appuStack_68);
      appuStack_68[0] = &PTR_FUN_7104f4a808;
      FUN_71000b1cf0();
      plVar6 = (long *)FUN_7100161fb0(DAT_71052add68);
      (**(code **)(*plVar6 + 0x20))(appuStack_68,plVar6,lVar7,*(undefined8 *)(param_1 + 0x70));
      appuStack_68[0] = (undefined **)0x0;
      FUN_71000bb5d0(appuStack_68);
      *(char *)(lVar7 + 0x78) =
           (char)appuStack_68[0] + (char)((ulong)appuStack_68[0] / 0xfe) * '\x02' + '\x02';
    }
    plVar6 = *(long **)(lVar7 + 0xa0);
    iVar3 = FUN_71000b4920((long)plVar6);
    if ((iVar3 != 0) && (iVar3 = FUN_71000b4920((long)plVar6), iVar3 != 5)) {
      FUN_7100187520(plVar6);
      (**(code **)(*plVar6 + 0x10))(plVar6,1);
    }
    FUN_7100186610(plVar6);
    if ((int)appuStack_68[0] == 0) {
      *(undefined4 *)(lVar7 + 0x48) = 2;
      FUN_71000b4820((long)plVar6,0);
      *(char **)(param_1 + 0x40) = "JoinMeshJob::WaitUntilConnectToHost";
      uVar5 = 5;
      *(code **)(param_1 + 0x30) = FUN_710018a920;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      lVar8 = *(long *)(DAT_71052ac580 + 0x30);
      lVar9 = *(long *)(param_1 + 0xb0);
      plVar6 = FUN_71000bb680();
      iVar3 = 0;
      if (*plVar6 != 0) {
        iVar3 = (int)((lVar8 - lVar9) / *plVar6);
      }
      if (-1 < iVar3) {
        DAT_71052ac6d7 = (undefined1)*(undefined4 *)(param_1 + 0x98);
        DAT_71052ac6c8 = iVar3;
      }
      piVar10 = *(int **)(param_1 + 0x58);
      if (piVar10 != (int *)0x0) {
        if (2 < *piVar10 - 2U) {
          appuStack_68[0] = (undefined **)CONCAT44(appuStack_68[0]._4_4_,0x6439);
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)appuStack_68 | 4));
          auStack_38[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)appuStack_68 | 4),(Result *)auStack_38);
          FUN_71000bce50(aiStack_78,(int *)appuStack_68);
          FUN_71000b41f0(piVar10,aiStack_78);
        }
        bVar2 = FUN_7100193710();
        if ((bVar2 & 1) == 0) {
          appuStack_68[0] = (undefined **)CONCAT44(appuStack_68[0]._4_4_,0x6439);
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)appuStack_68 | 4));
          auStack_38[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)appuStack_68 | 4),(Result *)auStack_38);
          DAT_71052ac6c0 = (int)appuStack_68[0];
          DAT_71052ac6d0 = *(undefined4 *)(param_1 + 0xac);
        }
        FUN_7100193390(DAT_71052adfc0);
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      plVar6 = (long *)FUN_7100161fb0(DAT_71052add68);
      (**(code **)(*plVar6 + 0x58))(plVar6,lVar7);
      FUN_710015e730(lVar7);
      FUN_710019b820(lVar7);
      plVar6 = (long *)FUN_7100161fa0(DAT_71052add68);
      (**(code **)(*plVar6 + 0x28))(plVar6,lVar7);
      FUN_71000b4260(*(undefined4 **)(param_1 + 0x60));
      FUN_71000b40e0(*(undefined4 **)(param_1 + 0x60));
      uVar5 = 1;
    }
  }
  return uVar5;
}

