// addr:      7100101210
// offset:    0x101210
// name:      FUN_7100101210
// mangled:   
// signature: undefined FUN_7100101210(void)


undefined8 FUN_7100101210(long param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  Result *pRVar12;
  char *pcVar13;
  code *pcVar14;
  long *plVar15;
  ErrorResultVariant *this;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long lStack_138;
  undefined8 uStack_130;
  int aiStack_128 [4];
  int aiStack_118 [32];
  int iStack_98;
  undefined4 uStack_94;
  int aiStack_78 [6];
  
  iVar6 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar6) {
  case 5:
    aiStack_118[0] = 0xc406;
    break;
  case 6:
    aiStack_118[0] = 0xa471;
    break;
  case 7:
    aiStack_118[0] = 0xc420;
    break;
  case 8:
    aiStack_118[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_118,DAT_71052adfc0);
    if ((aiStack_118[0] == 0) && (iVar6 = FUN_7100146ba0(DAT_71052adb38), iVar6 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        lVar7 = FUN_71001939c0(DAT_71052adfc0);
        if (*(char *)(lVar7 + 0x84) != '\0') {
          return 5;
        }
        aiStack_78[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_78 | 4));
        aiStack_118[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)aiStack_118);
        lVar7 = DAT_71052adb38;
        uVar2 = FUN_7100193110(DAT_71052adfc0);
        plVar15 = *(long **)(lVar7 + 0x168 + (ulong)*(byte *)(lVar7 + 0x162) * 8);
        plVar17 = *(long **)(lVar7 + 0x168 + (ulong)((ulong)*(byte *)(lVar7 + 0x162) == 0) * 8);
        bVar3 = FUN_7100140e30(param_1);
        lVar18 = *(long *)(lVar7 + 8);
        bVar4 = FUN_71000edff0(lVar18,*(int *)(lVar7 + (ulong)*(byte *)(lVar7 + 0x162) * 4 + 0x180))
        ;
        if (bVar3) {
          if ((bVar4) &&
             (bVar3 = FUN_71000edff0(lVar18,*(int *)(lVar7 + (ulong)(*(char *)(lVar7 + 0x162) ==
                                                                    '\0') * 4 + 0x180)), bVar3)) {
            plVar8 = (long *)FUN_7100161fa0(DAT_71052add68);
            lVar18 = (**(code **)(*plVar8 + 0x48))(plVar8,uVar2);
            if (lVar18 == 0) {
              return 5;
            }
            FUN_710015fd60((undefined8 *)aiStack_118);
            plVar8 = (long *)FUN_7100161fb0(DAT_71052add68);
            (**(code **)(*plVar8 + 0x28))(&iStack_98,plVar8,lVar18,aiStack_118);
            FUN_71000bcf30(aiStack_78,&iStack_98);
            if (aiStack_78[0] == 0) {
              lVar18 = FUN_71001602c0((long)aiStack_118);
              lVar9 = FUN_7100193a50(DAT_71052adfc0);
              FUN_71001ae940(aiStack_128,lVar9,(undefined8 *)&iStack_98,lVar18);
              FUN_71000bcf30(aiStack_78,aiStack_128);
              if (aiStack_78[0] == 0) {
                lVar18 = CONCAT44(uStack_94,iStack_98);
                bVar3 = FUN_7100150680(*(long *)(lVar7 + 0xb8),lVar18);
                if (bVar3) {
                  lVar9 = (**(code **)(*plVar15 + 0xf0))(plVar15);
                  lVar10 = FUN_7100193a50(DAT_71052adfc0);
                  FUN_71001ae940(aiStack_128,lVar10,(undefined8 *)&iStack_98,lVar9);
                  FUN_71000bcf30(aiStack_78,aiStack_128);
                  if (aiStack_78[0] == 0) {
                    lStack_138 = CONCAT44(uStack_94,iStack_98);
                    bVar3 = FUN_7100150680(*(long *)(lVar7 + 0xb8),lStack_138);
                    if (bVar3) {
                      if (*(long *)(lVar7 + 0xf0) == lVar18) {
                        uVar11 = (**(code **)(*plVar17 + 0xe0))(plVar17);
                        if ((uVar11 & 1) == 0) {
                          lVar18 = *(long *)(DAT_71052ac580 + 0x30);
                          lVar9 = *(long *)(param_1 + 0x1d8);
                          plVar15 = FUN_71000bb680();
                          if (*plVar15 * 10000 <= lVar18 - lVar9) {
                            *(undefined8 *)(param_1 + 0x1d8) =
                                 *(undefined8 *)(DAT_71052ac580 + 0x30);
                            uVar1 = *(undefined4 *)
                                     (lVar7 + (ulong)(*(char *)(lVar7 + 0x162) == '\0') * 4 + 0x180)
                            ;
                            pcVar14 = *(code **)(*plVar17 + 0xd8);
LAB_710010199c:
                            (*pcVar14)(aiStack_128,plVar17,uVar1);
                          }
                        }
                        else {
                          uVar11 = (**(code **)(*plVar15 + 0xe0))(plVar15);
                          if ((uVar11 & 1) == 0) {
                            lVar18 = *(long *)(DAT_71052ac580 + 0x30);
                            lVar9 = *(long *)(param_1 + 0x1d8);
                            plVar17 = FUN_71000bb680();
                            if (*plVar17 * 10000 <= lVar18 - lVar9) {
LAB_7100101974:
                              *(undefined8 *)(param_1 + 0x1d8) =
                                   *(undefined8 *)(DAT_71052ac580 + 0x30);
                              uVar1 = *(undefined4 *)
                                       (lVar7 + (ulong)*(byte *)(lVar7 + 0x162) * 4 + 0x180);
                              pcVar14 = *(code **)(*plVar15 + 0xd8);
                              plVar17 = plVar15;
                              goto LAB_710010199c;
                            }
                          }
                          else {
                            if (*(char *)(param_1 + 0x240) == '\0') {
                              if (*(int *)(lVar7 + (ulong)(*(char *)(lVar7 + 0x162) == '\0') * 4 +
                                          400) == 0) {
                                uVar16 = 0;
                                *(code **)(param_1 + 0x30) = FUN_7100102b00;
                                *(undefined8 *)(param_1 + 0x38) = 0;
                                *(char **)(param_1 + 0x40) =
                                     "NexMatchJointSessionJob::UpdateJointSessionOpenStatus";
                                goto LAB_71001019a4;
                              }
                              goto LAB_71001016d8;
                            }
                            lVar18 = *(long *)(DAT_71052ac580 + 0x30);
                            lVar9 = *(long *)(param_1 + 0x1d8);
                            plVar17 = FUN_71000bb680();
                            if (*plVar17 * 10000 <= lVar18 - lVar9) {
                              *(undefined1 *)(param_1 + 0x240) = 0;
                              goto LAB_7100101974;
                            }
                          }
                        }
                      }
                      else {
                        lVar9 = (**(code **)(*plVar17 + 0xf0))(plVar17);
                        if (lVar9 == lVar18) {
                          FUN_7100150d50(*(long *)(lVar7 + 0xb8),lVar18,
                                         (undefined4 *)((long)&uStack_130 + 4));
                          if (uStack_130._4_4_ ==
                              *(int *)(lVar7 + (ulong)*(byte *)(lVar7 + 0x162) * 4 + 0x180)) {
                            lVar9 = (**(code **)(*plVar15 + 0xf0))(plVar15);
                            if (lVar9 != lVar18) goto LAB_71001019a0;
                          }
                          else if ((lStack_138 == *(long *)(lVar7 + 0xf0)) &&
                                  (bVar5 = FUN_71000d7ea0((long)plVar15), (bVar5 & 1) == 0)) {
                            (**(code **)(*plVar15 + 0xd8))
                                      (aiStack_128,plVar15,
                                       *(undefined4 *)
                                        (lVar7 + (ulong)*(byte *)(lVar7 + 0x162) * 4 + 0x180));
                          }
LAB_71001016d8:
                          FUN_710015ff20((undefined8 *)aiStack_118);
                          lVar18 = *(long *)(lVar7 + 0xf8);
                          if (lStack_138 != lVar18) goto LAB_7100101790;
                          goto LAB_7100101800;
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_71001019a0:
            uVar16 = 5;
LAB_71001019a4:
            FUN_710015ff20((undefined8 *)aiStack_118);
            return uVar16;
          }
LAB_71001016f4:
          *(undefined1 *)(param_1 + 0x130) = 0x18;
          this = (ErrorResultVariant *)((ulong)aiStack_118 | 4);
          aiStack_118[0] = 0x6c59;
          nn::err::ErrorResultVariant::ErrorResultVariant(this);
          pRVar12 = (Result *)&iStack_98;
          iStack_98 = 0;
        }
        else {
          if (!bVar4) goto LAB_71001016f4;
          plVar17 = (long *)FUN_7100161fa0(DAT_71052add68);
          lVar18 = (**(code **)(*plVar17 + 0x48))(plVar17,uVar2);
          if (lVar18 == 0) {
            return 5;
          }
          FUN_710015fd60((undefined8 *)aiStack_118);
          plVar17 = (long *)FUN_7100161fb0(DAT_71052add68);
          (**(code **)(*plVar17 + 0x28))(&iStack_98,plVar17,lVar18,aiStack_118);
          FUN_71000bcf30(aiStack_78,&iStack_98);
          if (aiStack_78[0] != 0) {
LAB_7100101878:
            FUN_710015ff20((undefined8 *)aiStack_118);
            return 5;
          }
          lVar18 = FUN_71001602c0((long)aiStack_118);
          lVar9 = FUN_7100193a50(DAT_71052adfc0);
          FUN_71001ae940(aiStack_128,lVar9,(undefined8 *)&iStack_98,lVar18);
          FUN_71000bcf30(aiStack_78,aiStack_128);
          if (aiStack_78[0] != 0) goto LAB_7100101878;
          lStack_138 = CONCAT44(uStack_94,iStack_98);
          bVar3 = FUN_7100150680(*(long *)(lVar7 + 0xb8),lStack_138);
          if (!bVar3) goto LAB_7100101878;
          if (lStack_138 == *(long *)(lVar7 + 0xf0)) {
            uVar11 = (**(code **)(*plVar15 + 0xe0))(plVar15);
            if ((uVar11 & 1) == 0) {
              lVar18 = *(long *)(DAT_71052ac580 + 0x30);
              lVar9 = *(long *)(param_1 + 0x1d8);
              plVar17 = FUN_71000bb680();
              if (*plVar17 * 10000 <= lVar18 - lVar9) {
                *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(DAT_71052ac580 + 0x30);
                (**(code **)(*plVar15 + 0xd8))
                          (aiStack_128,plVar15,
                           *(undefined4 *)(lVar7 + (ulong)*(byte *)(lVar7 + 0x162) * 4 + 0x180));
              }
              goto LAB_7100101878;
            }
            goto LAB_71001016d8;
          }
          lVar18 = (**(code **)(*plVar15 + 0xf0))(plVar15);
          FUN_710015ff20((undefined8 *)aiStack_118);
          if (lVar18 != lStack_138) {
            return 5;
          }
          lVar18 = *(long *)(lVar7 + 0xf8);
          if (lStack_138 == lVar18) {
LAB_7100101800:
            *(code **)(param_1 + 0x30) = FUN_7100102bf0;
            *(undefined8 *)(param_1 + 0x38) = 0;
            pcVar13 = "NexMatchJointSessionJob::ProcessComplete";
            goto LAB_710010138c;
          }
LAB_7100101790:
          bVar3 = FUN_7100150680(*(long *)(lVar7 + 0xb8),lVar18);
          if (!bVar3) goto LAB_7100101800;
          uStack_130 = 0;
          uVar11 = FUN_7100150d50(*(long *)(lVar7 + 0xb8),*(long *)(lVar7 + 0xf8),
                                  (undefined4 *)((long)&uStack_130 + 4));
          if (((uVar11 & 1) != 0) &&
             (uVar11 = FUN_7100150d50(*(long *)(lVar7 + 0xb8),lStack_138,(undefined4 *)&uStack_130),
             (uVar11 & 1) != 0)) {
            if (uStack_130._4_4_ != (int)uStack_130) goto LAB_7100101800;
          }
          *(undefined1 *)(param_1 + 0x130) = 0x24;
          this = (ErrorResultVariant *)((ulong)aiStack_118 | 4);
          aiStack_118[0] = 0x6c59;
          nn::err::ErrorResultVariant::ErrorResultVariant(this);
          aiStack_128[0] = 0;
          pRVar12 = (Result *)aiStack_128;
        }
        nn::err::ErrorResultVariant::operator=(this,pRVar12);
        FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_118);
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        goto LAB_71001012e4;
      }
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      uVar2 = 6;
    }
    else {
      aiStack_118[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)aiStack_118 | 4));
      iStack_98 = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_118 | 4),(Result *)&iStack_98);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_118);
      uVar2 = 4;
    }
    *(undefined1 *)(param_1 + 0x130) = uVar2;
LAB_71001012e4:
    *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
    *(code **)(param_1 + 0x30) = FUN_71000f7210;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 5;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_118 | 4));
  iStack_98 = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_118 | 4),(Result *)&iStack_98);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_118);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar13 = "NexMatchJointSessionJob::ProcessFailure";
LAB_710010138c:
  *(char **)(param_1 + 0x40) = pcVar13;
  return 0;
}

