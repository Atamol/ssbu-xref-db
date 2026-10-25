// addr:      71001082f0
// offset:    0x1082f0
// name:      FUN_71001082f0
// mangled:   
// signature: undefined FUN_71001082f0(void)


undefined8 FUN_71001082f0(long param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  int aiStack_88 [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
    aiStack_78[0] = 0xc406;
    break;
  case 6:
    aiStack_78[0] = 0xa471;
    break;
  case 7:
    aiStack_78[0] = 0xc420;
    break;
  case 8:
    aiStack_78[0] = 0xc421;
    break;
  default:
    aiStack_78[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
    aiStack_88[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)aiStack_88);
    lVar2 = DAT_71052adb38;
    plVar11 = *(long **)(DAT_71052adb38 + 8);
    if (plVar11 == (long *)0x0) {
LAB_7100108770:
      iVar4 = *(int *)(lVar2 + (ulong)(*(char *)(lVar2 + 0x162) == '\0') * 4 + 0x180);
      if (iVar4 != 0) {
        FUN_71000b40e0((undefined4 *)(param_1 + 0x110));
        plVar6 = *(long **)(lVar2 + (ulong)(*(char *)(lVar2 + 0x162) == '\0') * 8 + 0x168);
        (**(code **)(*plVar6 + 0x60))(aiStack_88,plVar6,(undefined4 *)(param_1 + 0x110),iVar4);
        FUN_71000bcf30(aiStack_78,aiStack_88);
        if (aiStack_78[0] == 0) {
          pcVar10 = FUN_7100109ab0;
          uVar12 = 5;
          pcVar15 = "NexMatchRandomMatchmakeJob::WaitLeaveBufferMatchmakeSession";
          goto LAB_7100108ac8;
        }
        aiStack_88[0] = 0xac5a;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_88 | 4));
        auStack_68[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_88 | 4),(Result *)auStack_68);
        if (aiStack_78[0] == aiStack_88[0]) {
          FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_78);
        }
        FUN_7100149290(DAT_71052adb38,0);
      }
      if ((plVar11 != (long *)0x0) && (iVar4 = FUN_71000ee2c0((long)plVar11), iVar4 != 0)) {
        uVar13 = 0;
        uVar12 = 5;
        pcVar15 = "NexMatchRandomMatchmakeJob::WaitLeaveBufferMatchmakeSession";
        do {
          iVar4 = FUN_71000ee290((long)plVar11,uVar13);
          if (iVar4 != 0) {
            uVar9 = FUN_71000c36b0(DAT_71052acd90);
            uVar8 = (**(code **)(*plVar11 + 0x60))(plVar11,iVar4,uVar9);
            if ((uVar8 & 1) == 0) {
              FUN_71000ee050((long)plVar11,iVar4);
            }
            else if (iVar4 != *(int *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 4 + 0x180)) {
              FUN_7100149290(DAT_71052adb38,iVar4);
              FUN_71000b40e0((undefined4 *)(param_1 + 0x110));
              plVar6 = *(long **)(lVar2 + (ulong)(*(char *)(lVar2 + 0x162) == '\0') * 8 + 0x168);
              (**(code **)(*plVar6 + 0x60))(aiStack_88,plVar6,(undefined4 *)(param_1 + 0x110),iVar4)
              ;
              FUN_71000bcf30(aiStack_78,aiStack_88);
              if (aiStack_78[0] == 0) {
                pcVar10 = FUN_7100109ab0;
                goto LAB_7100108ac8;
              }
              aiStack_88[0] = 0xac5a;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)aiStack_88 | 4));
              auStack_68[0] = 0;
              nn::err::ErrorResultVariant::operator=
                        ((ErrorResultVariant *)((ulong)aiStack_88 | 4),(Result *)auStack_68);
              if (aiStack_78[0] == aiStack_88[0]) {
                FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_78);
              }
              FUN_7100149290(DAT_71052adb38,0);
            }
          }
          uVar13 = uVar13 + 1;
          uVar5 = FUN_71000ee2c0((long)plVar11);
        } while (uVar13 < uVar5);
      }
      uVar8 = (ulong)*(byte *)(lVar2 + 0x162);
      if (*(int *)(lVar2 + uVar8 * 4 + 0x180) != 0) {
        if (*(char *)(param_1 + 0x68) == '\0') {
          plVar11 = *(long **)(lVar2 + uVar8 * 8 + 0x168);
          pcVar10 = *(code **)(*plVar11 + 0x60);
        }
        else {
          plVar11 = *(long **)(lVar2 + uVar8 * 8 + 0x168);
          pcVar10 = *(code **)(*plVar11 + 0x70);
        }
        (*pcVar10)(aiStack_88,plVar11,param_1 + 0x110);
        FUN_71000bcf30(aiStack_78,aiStack_88);
        if (aiStack_78[0] == 0) {
          pcVar10 = FUN_7100109cb0;
          uVar12 = 5;
          pcVar15 = "NexMatchRandomMatchmakeJob::WaitLeaveCurrentMatchmakeSession";
          goto LAB_7100108ac8;
        }
        aiStack_88[0] = 0xac5a;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_88 | 4));
        auStack_68[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_88 | 4),(Result *)auStack_68);
        if (aiStack_78[0] == aiStack_88[0]) {
          FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_78);
        }
        FUN_7100149270(DAT_71052adb38,0);
      }
      pcVar10 = FUN_71001429b0;
      uVar12 = 0;
      pcVar15 = "NexMatchRandomMatchmakeJob::CompleteFailure";
    }
    else {
      piVar1 = (int *)(param_1 + 0x110);
      plVar6 = (long *)FUN_71000ecfb0((long)plVar11,1);
      if (plVar6 != (long *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 0x18))(plVar6);
        iVar4 = FUN_71000ee2c0((long)plVar11);
        if (iVar4 != 0) {
          uVar13 = 0;
          do {
            iVar4 = FUN_71000ee290((long)plVar11,uVar13);
            if (((iVar4 != 0) &&
                (uVar8 = (**(code **)(*plVar11 + 0x60))(plVar11,iVar4,lVar7), (uVar8 & 1) != 0)) &&
               (bVar3 = FUN_71000ee7f0((long)plVar11,iVar4,lVar7), !bVar3)) {
              FUN_71000ee730((long)plVar11,iVar4,lVar7);
              iVar14 = *(int *)(param_1 + 100);
              if (iVar4 == iVar14) goto LAB_7100108424;
              goto LAB_71001084d0;
            }
            uVar13 = uVar13 + 1;
            uVar5 = FUN_71000ee2c0((long)plVar11);
          } while (uVar13 < uVar5);
        }
      }
      lVar7 = 0;
      iVar4 = 0;
      iVar14 = *(int *)(param_1 + 100);
      if (iVar14 == 0) {
LAB_7100108424:
        *(undefined1 *)(param_1 + 0x191) = 0;
        if (iVar4 == 0) goto LAB_7100108508;
LAB_71001084d4:
        FUN_71000e08e0(aiStack_88,*(long *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 8 + 0x168),
                       piVar1,iVar4,lVar7);
        FUN_71000bcf30(aiStack_78,aiStack_88);
        if (aiStack_78[0] != 0) goto LAB_7100108508;
      }
      else {
LAB_71001084d0:
        if ((iVar4 != 0) ||
           (((*(char *)(param_1 + 0x191) != '\0' &&
             (*(undefined1 *)(param_1 + 0x191) = 0, plVar6 != (long *)0x0)) &&
            (lVar7 = (**(code **)(*plVar6 + 0x18))(plVar6), iVar4 = iVar14, iVar14 != 0))))
        goto LAB_71001084d4;
LAB_7100108508:
        plVar6 = (long *)FUN_71000ecfb0((long)plVar11,2);
        if (plVar6 != (long *)0x0) {
          lVar7 = (**(code **)(*plVar6 + 0x18))(plVar6);
          iVar4 = FUN_71000ee2c0((long)plVar11);
          if (iVar4 != 0) {
            uVar13 = 0;
            do {
              iVar4 = FUN_71000ee290((long)plVar11,uVar13);
              if (((iVar4 != 0) &&
                  (uVar8 = (**(code **)(*plVar11 + 0x60))(plVar11,iVar4,lVar7), (uVar8 & 1) != 0))
                 && (bVar3 = FUN_71000ee7f0((long)plVar11,iVar4,lVar7), !bVar3)) {
                FUN_71000ee730((long)plVar11,iVar4,lVar7);
                iVar14 = *(int *)(param_1 + 100);
                if (iVar4 == iVar14) goto LAB_71001085ac;
                goto LAB_7100108604;
              }
              uVar13 = uVar13 + 1;
              uVar5 = FUN_71000ee2c0((long)plVar11);
            } while (uVar13 < uVar5);
          }
        }
        lVar7 = 0;
        iVar4 = 0;
        iVar14 = *(int *)(param_1 + 100);
        if (iVar14 == 0) {
LAB_71001085ac:
          *(undefined1 *)(param_1 + 0x192) = 0;
joined_r0x007100108714:
          if (iVar4 != 0) {
LAB_7100108608:
            FUN_71000e08e0(aiStack_88,*(long *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 8 + 0x168)
                           ,piVar1,iVar4,lVar7);
            FUN_71000bcf30(aiStack_78,aiStack_88);
            if (aiStack_78[0] == 0) goto LAB_71001089a8;
          }
        }
        else {
LAB_7100108604:
          if (iVar4 != 0) goto LAB_7100108608;
          if ((*(char *)(param_1 + 0x192) != '\0') &&
             (*(undefined1 *)(param_1 + 0x192) = 0, plVar6 != (long *)0x0)) {
            lVar7 = (**(code **)(*plVar6 + 0x18))(plVar6);
            iVar4 = iVar14;
            goto joined_r0x007100108714;
          }
        }
        plVar6 = (long *)FUN_71000ecfb0((long)plVar11,3);
        if (plVar6 != (long *)0x0) {
          lVar7 = (**(code **)(*plVar6 + 0x18))(plVar6);
          iVar4 = FUN_71000ee2c0((long)plVar11);
          if (iVar4 != 0) {
            uVar13 = 0;
            do {
              iVar4 = FUN_71000ee290((long)plVar11,uVar13);
              if (((iVar4 != 0) &&
                  (uVar8 = (**(code **)(*plVar11 + 0x60))(plVar11,iVar4,lVar7), (uVar8 & 1) != 0))
                 && (bVar3 = FUN_71000ee7f0((long)plVar11,iVar4,lVar7), !bVar3)) {
                FUN_71000ee730((long)plVar11,iVar4,lVar7);
                iVar14 = *(int *)(param_1 + 100);
                if (iVar4 == iVar14) goto LAB_71001086e0;
                goto LAB_7100108738;
              }
              uVar13 = uVar13 + 1;
              uVar5 = FUN_71000ee2c0((long)plVar11);
            } while (uVar13 < uVar5);
          }
        }
        lVar7 = 0;
        iVar4 = 0;
        iVar14 = *(int *)(param_1 + 100);
        if (iVar14 == 0) {
LAB_71001086e0:
          *(undefined1 *)(param_1 + 0x193) = 0;
joined_r0x007100108ab8:
          if (iVar4 == 0) goto LAB_7100108770;
        }
        else {
LAB_7100108738:
          if (iVar4 == 0) {
            if ((*(char *)(param_1 + 0x193) == '\0') ||
               (*(undefined1 *)(param_1 + 0x193) = 0, plVar6 == (long *)0x0)) goto LAB_7100108770;
            lVar7 = (**(code **)(*plVar6 + 0x18))(plVar6);
            iVar4 = iVar14;
            goto joined_r0x007100108ab8;
          }
        }
        FUN_71000e08e0(aiStack_88,*(long *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 8 + 0x168),
                       piVar1,iVar4,lVar7);
        FUN_71000bcf30(aiStack_78,aiStack_88);
        if (aiStack_78[0] != 0) goto LAB_7100108770;
      }
LAB_71001089a8:
      pcVar10 = FUN_71001099a0;
      uVar12 = 5;
      pcVar15 = "NexMatchRandomMatchmakeJob::WaitLeaveMatchmakeSessionCompanions";
    }
LAB_7100108ac8:
    *(code **)(param_1 + 0x30) = pcVar10;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar15;
    return uVar12;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
  aiStack_88[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)aiStack_88);
  FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_78);
  *(code **)(param_1 + 0x30) = FUN_71001429b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "nex::NexMatchRandomMatchmakeJob::CompleteFailure";
  return 0;
}

