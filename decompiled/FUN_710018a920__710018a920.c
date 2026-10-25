// addr:      710018a920
// offset:    0x18a920
// name:      FUN_710018a920
// mangled:   
// signature: undefined FUN_710018a920(void)


undefined8 FUN_710018a920(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ErrorResultVariant *pEVar9;
  int *piVar10;
  ulong uStack_190;
  undefined4 uStack_188;
  int aiStack_110 [4];
  int aiStack_100 [4];
  int aiStack_f0 [4];
  int aiStack_e0 [4];
  int aiStack_d0 [4];
  int aiStack_c0 [4];
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int iStack_60;
  undefined1 uStack_5c;
  undefined8 uStack_58;
  undefined4 auStack_48 [2];
  
  uVar4 = FUN_710018a7d0(param_1);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  if (2 < **(int **)(param_1 + 0x60) - 2U) {
    uVar4 = FUN_710018b370(param_1);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    return 5;
  }
  FUN_71000bce50((int *)&uStack_190,*(int **)(param_1 + 0x60) + 1);
  if ((int)uStack_190 == 0) {
    plVar6 = (long *)FUN_7100161fa0(DAT_71052add68);
    uVar2 = FUN_7100193110(DAT_71052adfc0);
    lVar7 = (**(code **)(*plVar6 + 0x48))(plVar6,uVar2);
    if (lVar7 != 0) {
      lVar8 = FUN_7100161fb0(DAT_71052add68);
      plVar6 = (long *)(lVar7 + 0x10);
      uVar4 = FUN_71000beb30(lVar8 + 0x108,(long)plVar6);
      if ((uVar4 & 1) == 0) {
        uStack_190 = 0x80000000000;
        uStack_188 = 0;
        (**(code **)(*plVar6 + 0x28))(plVar6,&uStack_190);
        lVar8 = FUN_7100161fb0(DAT_71052add68);
        uStack_190 = 0x80000000000;
        uStack_188 = 0;
        (**(code **)(*(long *)(lVar8 + 0x108) + 0x28))(lVar8 + 0x108,&uStack_190);
      }
      FUN_710015fd60(&uStack_190);
      plVar5 = (long *)FUN_7100161fb0(DAT_71052add68);
      (**(code **)(*plVar5 + 0x28))(&iStack_60,plVar5,lVar7,&uStack_190);
      lVar7 = FUN_7100161fb0(DAT_71052add68);
      FUN_7100160b20(lVar7,(long)&uStack_190);
      lVar7 = FUN_7100161fb0(DAT_71052add68);
      FUN_71000beb40(lVar7 + 0x108,(long)plVar6);
      bVar3 = FUN_7100193710();
      if ((bVar3 & 1) == 0) {
        DAT_71052ac680 = FUN_71001602d0((long)&uStack_190);
      }
      *(code **)(param_1 + 0x30) = FUN_710018b4d0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "JoinMeshJob::SendJoinRequest";
      FUN_710015ff20(&uStack_190);
      return 0;
    }
    lVar7 = *(long *)(DAT_71052ac580 + 0x30);
    lVar8 = *(long *)(param_1 + 0xb0);
    plVar6 = FUN_71000bb680();
    iVar1 = 0;
    if (*plVar6 != 0) {
      iVar1 = (int)((lVar7 - lVar8) / *plVar6);
    }
    if (-1 < iVar1) {
      DAT_71052ac6d7 = (undefined1)*(undefined4 *)(param_1 + 0x98);
      DAT_71052ac6c8 = iVar1;
    }
    piVar10 = *(int **)(param_1 + 0x58);
    if (piVar10 == (int *)0x0) goto LAB_710018b228;
    if (2 < *piVar10 - 2U) {
      uStack_190 = CONCAT44(uStack_190._4_4_,0x6439);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&uStack_190 | 4));
      iStack_60 = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)&uStack_190 | 4),(Result *)&iStack_60);
      FUN_71000bce50(aiStack_110,(int *)&uStack_190);
      FUN_71000b41f0(piVar10,aiStack_110);
    }
    bVar3 = FUN_7100193710();
    if ((bVar3 & 1) == 0) {
      uStack_190 = CONCAT44(uStack_190._4_4_,0x6439);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&uStack_190 | 4));
      iStack_60 = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)&uStack_190 | 4),(Result *)&iStack_60);
      DAT_71052ac6c0 = (int)uStack_190;
      DAT_71052ac6d0 = *(undefined4 *)(param_1 + 0xac);
    }
  }
  else {
    uStack_190 = uStack_190 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_190 | 4));
    iStack_60 = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&uStack_190 | 4),(Result *)&iStack_60);
    FUN_71000bce50(&iStack_60,(int *)(*(long *)(param_1 + 0x60) + 4));
    aiStack_70[0] = 0xc25;
    pEVar9 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
    nn::err::ErrorResultVariant::ErrorResultVariant(pEVar9);
    aiStack_80[0] = 0;
    nn::err::ErrorResultVariant::operator=(pEVar9,(Result *)aiStack_80);
    if (iStack_60 == aiStack_70[0]) {
      iStack_60 = 0x6c3d;
      iVar1 = iStack_60;
LAB_710018aef4:
      iStack_60 = iVar1;
      pEVar9 = (ErrorResultVariant *)((ulong)&iStack_60 | 4);
    }
    else {
      FUN_71000bce50(&iStack_60,(int *)(*(long *)(param_1 + 0x60) + 4));
      aiStack_70[0] = 0x10c26;
      nn::err::ErrorResultVariant::ErrorResultVariant(pEVar9);
      aiStack_80[0] = 0;
      nn::err::ErrorResultVariant::operator=(pEVar9,(Result *)aiStack_80);
      if (iStack_60 != aiStack_70[0]) {
        FUN_71000bce50(&iStack_60,(int *)(*(long *)(param_1 + 0x60) + 4));
        pEVar9 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
        aiStack_70[0] = 0x643f;
        nn::err::ErrorResultVariant::ErrorResultVariant(pEVar9);
        aiStack_80[0] = 0;
        nn::err::ErrorResultVariant::operator=(pEVar9,(Result *)aiStack_80);
        iVar1 = 0x643f;
        if (iStack_60 != aiStack_70[0]) {
          FUN_71000bce50(&iStack_60,(int *)(*(long *)(param_1 + 0x60) + 4));
          aiStack_70[0] = 0x6442;
          nn::err::ErrorResultVariant::ErrorResultVariant(pEVar9);
          aiStack_80[0] = 0;
          nn::err::ErrorResultVariant::operator=(pEVar9,(Result *)aiStack_80);
          iVar1 = 0x6442;
          if (iStack_60 != aiStack_70[0]) {
            FUN_71000bce50(&iStack_60,(int *)(*(long *)(param_1 + 0x60) + 4));
            pEVar9 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
            aiStack_70[0] = 0x6443;
            nn::err::ErrorResultVariant::ErrorResultVariant(pEVar9);
            aiStack_80[0] = 0;
            nn::err::ErrorResultVariant::operator=(pEVar9,(Result *)aiStack_80);
            iVar1 = 0x6443;
            if (iStack_60 != aiStack_70[0]) {
              FUN_71000bce50(&iStack_60,(int *)(*(long *)(param_1 + 0x60) + 4));
              aiStack_70[0] = 0x6444;
              nn::err::ErrorResultVariant::ErrorResultVariant(pEVar9);
              aiStack_80[0] = 0;
              nn::err::ErrorResultVariant::operator=(pEVar9,(Result *)aiStack_80);
              iVar1 = 0x6444;
              if (iStack_60 != aiStack_70[0]) {
                FUN_71000bce50(&iStack_60,(int *)(*(long *)(param_1 + 0x60) + 4));
                pEVar9 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
                aiStack_70[0] = 0x6445;
                nn::err::ErrorResultVariant::ErrorResultVariant(pEVar9);
                aiStack_80[0] = 0;
                nn::err::ErrorResultVariant::operator=(pEVar9,(Result *)aiStack_80);
                iVar1 = 0x6445;
                if (iStack_60 != aiStack_70[0]) {
                  FUN_71000bce50(&iStack_60,(int *)(*(long *)(param_1 + 0x60) + 4));
                  aiStack_70[0] = 0x6467;
                  nn::err::ErrorResultVariant::ErrorResultVariant(pEVar9);
                  aiStack_80[0] = 0;
                  nn::err::ErrorResultVariant::operator=(pEVar9,(Result *)aiStack_80);
                  iVar1 = 0x6467;
                  if (iStack_60 != aiStack_70[0]) {
                    FUN_71000bce50(&iStack_60,(int *)(*(long *)(param_1 + 0x60) + 4));
                    pEVar9 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
                    aiStack_70[0] = 0x6468;
                    nn::err::ErrorResultVariant::ErrorResultVariant(pEVar9);
                    aiStack_80[0] = 0;
                    nn::err::ErrorResultVariant::operator=(pEVar9,(Result *)aiStack_80);
                    iVar1 = 0x6468;
                    if (iStack_60 != aiStack_70[0]) {
                      FUN_71000bce50(&iStack_60,(int *)(*(long *)(param_1 + 0x60) + 4));
                      aiStack_70[0] = 0x6469;
                      nn::err::ErrorResultVariant::ErrorResultVariant(pEVar9);
                      aiStack_80[0] = 0;
                      nn::err::ErrorResultVariant::operator=(pEVar9,(Result *)aiStack_80);
                      iVar1 = 0x6469;
                      if (iStack_60 != aiStack_70[0]) {
                        FUN_71000bce50(&iStack_60,(int *)(*(long *)(param_1 + 0x60) + 4));
                        pEVar9 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
                        aiStack_70[0] = 0x646a;
                        nn::err::ErrorResultVariant::ErrorResultVariant(pEVar9);
                        aiStack_80[0] = 0;
                        nn::err::ErrorResultVariant::operator=(pEVar9,(Result *)aiStack_80);
                        iVar1 = 0x646a;
                        if (iStack_60 != aiStack_70[0]) {
                          FUN_71000bce50(&iStack_60,(int *)(*(long *)(param_1 + 0x60) + 4));
                          aiStack_70[0] = 0x644a;
                          nn::err::ErrorResultVariant::ErrorResultVariant(pEVar9);
                          aiStack_80[0] = 0;
                          nn::err::ErrorResultVariant::operator=(pEVar9,(Result *)aiStack_80);
                          iVar1 = 0x644a;
                          if (iStack_60 != aiStack_70[0]) {
                            FUN_71000bce50(&iStack_60,(int *)(*(long *)(param_1 + 0x60) + 4));
                            pEVar9 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
                            aiStack_70[0] = 0x6470;
                            nn::err::ErrorResultVariant::ErrorResultVariant(pEVar9);
                            aiStack_80[0] = 0;
                            nn::err::ErrorResultVariant::operator=(pEVar9,(Result *)aiStack_80);
                            iVar1 = 0x6470;
                            if (iStack_60 != aiStack_70[0]) {
                              FUN_71000bce50(&iStack_60,(int *)(*(long *)(param_1 + 0x60) + 4));
                              aiStack_70[0] = 0x646f;
                              nn::err::ErrorResultVariant::ErrorResultVariant(pEVar9);
                              aiStack_80[0] = 0;
                              nn::err::ErrorResultVariant::operator=(pEVar9,(Result *)aiStack_80);
                              iVar1 = 0x646f;
                              if (iStack_60 != aiStack_70[0]) {
                                FUN_71000bce50(&iStack_60,(int *)(*(long *)(param_1 + 0x60) + 4));
                                pEVar9 = (ErrorResultVariant *)((ulong)&iStack_60 | 4);
                                iStack_60 = 0x6439;
                                goto LAB_710018aef8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_710018aef4;
      }
      iStack_60 = 0x10c26;
      pEVar9 = (ErrorResultVariant *)((ulong)&iStack_60 | 4);
    }
LAB_710018aef8:
    nn::err::ErrorResultVariant::ErrorResultVariant(pEVar9);
    aiStack_70[0] = 0;
    nn::err::ErrorResultVariant::operator=(pEVar9,(Result *)aiStack_70);
    FUN_71000bcf30((int *)&uStack_190,&iStack_60);
    iStack_60 = 0x643f;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&iStack_60 | 4));
    aiStack_70[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&iStack_60 | 4),(Result *)aiStack_70);
    if ((int)uStack_190 == iStack_60) {
LAB_710018b14c:
      plVar6 = *(long **)(DAT_71052adfc0 + 0x120);
      if (plVar6 != (long *)0x0) {
        iStack_60 = 0x16;
        uStack_5c = 0xfd;
        uStack_58 = 0;
        (**(code **)(*plVar6 + 0x10))(plVar6,&iStack_60);
      }
    }
    else {
      aiStack_70[0] = 0x6443;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_70 | 4))
      ;
      aiStack_80[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_70 | 4),(Result *)aiStack_80);
      if ((int)uStack_190 == aiStack_70[0]) goto LAB_710018b14c;
      aiStack_80[0] = 0x6444;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_80 | 4))
      ;
      aiStack_90[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_80 | 4),(Result *)aiStack_90);
      if ((int)uStack_190 == aiStack_80[0]) goto LAB_710018b14c;
      aiStack_90[0] = 0x6445;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_90 | 4))
      ;
      aiStack_a0[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_90 | 4),(Result *)aiStack_a0);
      if ((int)uStack_190 == aiStack_90[0]) goto LAB_710018b14c;
      aiStack_a0[0] = 0x6442;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_a0 | 4))
      ;
      aiStack_b0[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_a0 | 4),(Result *)aiStack_b0);
      if ((int)uStack_190 == aiStack_a0[0]) goto LAB_710018b14c;
      aiStack_b0[0] = 0x6468;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_b0 | 4))
      ;
      aiStack_c0[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_b0 | 4),(Result *)aiStack_c0);
      if ((int)uStack_190 == aiStack_b0[0]) goto LAB_710018b14c;
      aiStack_c0[0] = 0x6469;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_c0 | 4))
      ;
      aiStack_d0[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_c0 | 4),(Result *)aiStack_d0);
      if ((int)uStack_190 == aiStack_c0[0]) goto LAB_710018b14c;
      aiStack_d0[0] = 0x646a;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_d0 | 4))
      ;
      aiStack_e0[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_d0 | 4),(Result *)aiStack_e0);
      if ((int)uStack_190 == aiStack_d0[0]) goto LAB_710018b14c;
      aiStack_e0[0] = 0x6467;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_e0 | 4))
      ;
      aiStack_f0[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_e0 | 4),(Result *)aiStack_f0);
      if ((int)uStack_190 == aiStack_e0[0]) goto LAB_710018b14c;
      aiStack_f0[0] = 0x644a;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_f0 | 4))
      ;
      auStack_48[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_f0 | 4),(Result *)auStack_48);
      if ((int)uStack_190 == aiStack_f0[0]) goto LAB_710018b14c;
    }
    lVar7 = *(long *)(DAT_71052ac580 + 0x30);
    lVar8 = *(long *)(param_1 + 0xb0);
    plVar6 = FUN_71000bb680();
    iVar1 = 0;
    if (*plVar6 != 0) {
      iVar1 = (int)((lVar7 - lVar8) / *plVar6);
    }
    if (-1 < iVar1) {
      DAT_71052ac6d7 = (undefined1)*(undefined4 *)(param_1 + 0x98);
      DAT_71052ac6c8 = iVar1;
    }
    piVar10 = *(int **)(param_1 + 0x58);
    if (piVar10 == (int *)0x0) goto LAB_710018b228;
    if (2 < *piVar10 - 2U) {
      FUN_71000bce50(aiStack_100,(int *)&uStack_190);
      FUN_71000b41f0(piVar10,aiStack_100);
    }
    bVar3 = FUN_7100193710();
    if ((bVar3 & 1) == 0) {
      DAT_71052ac6c0 = (int)uStack_190;
      DAT_71052ac6d0 = *(undefined4 *)(param_1 + 0xac);
    }
  }
  FUN_7100193390(DAT_71052adfc0);
  *(undefined8 *)(param_1 + 0x58) = 0;
LAB_710018b228:
  FUN_71000b4260(*(undefined4 **)(param_1 + 0x60));
  FUN_71000b40e0(*(undefined4 **)(param_1 + 0x60));
  return 1;
}

