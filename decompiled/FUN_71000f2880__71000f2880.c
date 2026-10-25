// addr:      71000f2880
// offset:    0xf2880
// name:      FUN_71000f2880
// mangled:   
// signature: undefined FUN_71000f2880(void)


undefined8 FUN_71000f2880(long param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *plVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  int aiStack_88 [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
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
    plVar10 = *(long **)(DAT_71052adb38 + 8);
    if (plVar10 == (long *)0x0) {
LAB_71000f2d0c:
      uVar7 = (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0');
      iVar3 = *(int *)(DAT_71052adb38 + uVar7 * 4 + 0x180);
      if (iVar3 != 0) {
        plVar5 = *(long **)(DAT_71052adb38 + uVar7 * 8 + 0x168);
        FUN_71000b40e0((undefined4 *)(param_1 + 0x60));
        (**(code **)(*plVar5 + 0x60))(aiStack_88,plVar5,(undefined4 *)(param_1 + 0x60),iVar3);
        FUN_71000bcf30(aiStack_78,aiStack_88);
        if (aiStack_78[0] == 0) {
          pcVar9 = FUN_71000f4630;
          pcVar11 = "NexMatchJoinSessionJob::WaitLeaveBufferMatchmakeSession";
          goto LAB_71000f303c;
        }
        aiStack_88[0] = 0xac5a;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_88 | 4));
        auStack_68[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_88 | 4),(Result *)auStack_68);
        if (aiStack_78[0] == aiStack_88[0]) {
          FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_78);
        }
        FUN_7100149290(DAT_71052adb38,0);
      }
      if ((plVar10 != (long *)0x0) && (iVar3 = FUN_71000ee2c0((long)plVar10), iVar3 != 0)) {
        uVar12 = 0;
        pcVar11 = "NexMatchJoinSessionJob::WaitLeaveBufferMatchmakeSession";
        do {
          iVar3 = FUN_71000ee290((long)plVar10,uVar12);
          if (iVar3 != 0) {
            uVar8 = FUN_71000c36b0(DAT_71052acd90);
            uVar7 = (**(code **)(*plVar10 + 0x60))(plVar10,iVar3,uVar8);
            if ((uVar7 & 1) == 0) {
              FUN_71000ee050((long)plVar10,iVar3);
            }
            else if (iVar3 != *(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4
                                      + 0x180)) {
              FUN_7100149290(DAT_71052adb38,iVar3);
              plVar5 = *(long **)(DAT_71052adb38 +
                                  (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168);
              FUN_71000b40e0((undefined4 *)(param_1 + 0x60));
              (**(code **)(*plVar5 + 0x60))(aiStack_88,plVar5,(undefined4 *)(param_1 + 0x60),iVar3);
              FUN_71000bcf30(aiStack_78,aiStack_88);
              if (aiStack_78[0] == 0) {
                pcVar9 = FUN_71000f4630;
                goto LAB_71000f303c;
              }
              aiStack_88[0] = 0xac5a;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)aiStack_88 | 4));
              auStack_68[0] = 0;
              nn::err::ErrorResultVariant::operator=
                        ((ErrorResultVariant *)((ulong)aiStack_88 | 4),(Result *)auStack_68);
              if (aiStack_78[0] == aiStack_88[0]) {
                FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_78);
              }
              FUN_7100149290(DAT_71052adb38,0);
            }
          }
          uVar12 = uVar12 + 1;
          uVar4 = FUN_71000ee2c0((long)plVar10);
        } while (uVar12 < uVar4);
      }
      iVar3 = *(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180);
      if (iVar3 != 0) {
        plVar10 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
        FUN_71000b40e0((undefined4 *)(param_1 + 0x60));
        (**(code **)(*plVar10 + 0x60))(aiStack_88,plVar10,(undefined4 *)(param_1 + 0x60),iVar3);
        FUN_71000bcf30(aiStack_78,aiStack_88);
        if (aiStack_78[0] == 0) {
          pcVar9 = FUN_71000f4820;
          pcVar11 = "NexMatchJoinSessionJob::WaitLeaveCurrentMatchmakeSession";
          goto LAB_71000f303c;
        }
        aiStack_88[0] = 0xac5a;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_88 | 4));
        auStack_68[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_88 | 4),(Result *)auStack_68);
        if (aiStack_78[0] == aiStack_88[0]) {
          FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_78);
        }
        FUN_7100149270(DAT_71052adb38,0);
      }
      pcVar9 = FUN_710013e970;
      pcVar11 = "NexMatchJoinSessionJob::CompleteFailure";
    }
    else {
      piVar1 = (int *)(param_1 + 0x60);
      plVar5 = (long *)FUN_71000ecfb0((long)plVar10,1);
      if (plVar5 != (long *)0x0) {
        lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5);
        iVar3 = FUN_71000ee2c0((long)plVar10);
        if (iVar3 != 0) {
          uVar12 = 0;
          do {
            iVar3 = FUN_71000ee290((long)plVar10,uVar12);
            if (((iVar3 != 0) &&
                (uVar7 = (**(code **)(*plVar10 + 0x60))(plVar10,iVar3,lVar6), (uVar7 & 1) != 0)) &&
               (bVar2 = FUN_71000ee7f0((long)plVar10,iVar3,lVar6), !bVar2)) {
              FUN_71000ee730((long)plVar10,iVar3,lVar6);
              iVar13 = *(int *)(param_1 + 0x114);
              if (iVar3 == iVar13) goto LAB_71000f29b4;
              goto LAB_71000f2a5c;
            }
            uVar12 = uVar12 + 1;
            uVar4 = FUN_71000ee2c0((long)plVar10);
          } while (uVar12 < uVar4);
        }
      }
      lVar6 = 0;
      iVar3 = 0;
      iVar13 = *(int *)(param_1 + 0x114);
      if (iVar13 == 0) {
LAB_71000f29b4:
        *(undefined1 *)(param_1 + 0x179) = 0;
        if (iVar3 == 0) goto LAB_71000f2a98;
LAB_71000f2a60:
        FUN_71000e08e0(aiStack_88,
                       *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 +
                                0x168),piVar1,iVar3,lVar6);
        FUN_71000bcf30(aiStack_78,aiStack_88);
        if (aiStack_78[0] != 0) goto LAB_71000f2a98;
      }
      else {
LAB_71000f2a5c:
        if ((iVar3 != 0) ||
           (((*(char *)(param_1 + 0x179) != '\0' &&
             (*(undefined1 *)(param_1 + 0x179) = 0, plVar5 != (long *)0x0)) &&
            (lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5), iVar3 = iVar13, iVar13 != 0))))
        goto LAB_71000f2a60;
LAB_71000f2a98:
        plVar5 = (long *)FUN_71000ecfb0((long)plVar10,2);
        if (plVar5 != (long *)0x0) {
          lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5);
          iVar3 = FUN_71000ee2c0((long)plVar10);
          if (iVar3 != 0) {
            uVar12 = 0;
            do {
              iVar3 = FUN_71000ee290((long)plVar10,uVar12);
              if (((iVar3 != 0) &&
                  (uVar7 = (**(code **)(*plVar10 + 0x60))(plVar10,iVar3,lVar6), (uVar7 & 1) != 0))
                 && (bVar2 = FUN_71000ee7f0((long)plVar10,iVar3,lVar6), !bVar2)) {
                FUN_71000ee730((long)plVar10,iVar3,lVar6);
                iVar13 = *(int *)(param_1 + 0x114);
                if (iVar3 == iVar13) goto LAB_71000f2b3c;
                goto LAB_71000f2b94;
              }
              uVar12 = uVar12 + 1;
              uVar4 = FUN_71000ee2c0((long)plVar10);
            } while (uVar12 < uVar4);
          }
        }
        lVar6 = 0;
        iVar3 = 0;
        iVar13 = *(int *)(param_1 + 0x114);
        if (iVar13 == 0) {
LAB_71000f2b3c:
          *(undefined1 *)(param_1 + 0x17a) = 0;
joined_r0x0071000f2ca8:
          if (iVar3 != 0) {
LAB_71000f2b98:
            FUN_71000e08e0(aiStack_88,
                           *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 +
                                    0x168),piVar1,iVar3,lVar6);
            FUN_71000bcf30(aiStack_78,aiStack_88);
            if (aiStack_78[0] == 0) goto LAB_71000f2fc8;
          }
        }
        else {
LAB_71000f2b94:
          if (iVar3 != 0) goto LAB_71000f2b98;
          if ((*(char *)(param_1 + 0x17a) != '\0') &&
             (*(undefined1 *)(param_1 + 0x17a) = 0, plVar5 != (long *)0x0)) {
            lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5);
            iVar3 = iVar13;
            goto joined_r0x0071000f2ca8;
          }
        }
        plVar5 = (long *)FUN_71000ecfb0((long)plVar10,3);
        if (plVar5 != (long *)0x0) {
          lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5);
          iVar3 = FUN_71000ee2c0((long)plVar10);
          if (iVar3 != 0) {
            uVar12 = 0;
            do {
              iVar3 = FUN_71000ee290((long)plVar10,uVar12);
              if (((iVar3 != 0) &&
                  (uVar7 = (**(code **)(*plVar10 + 0x60))(plVar10,iVar3,lVar6), (uVar7 & 1) != 0))
                 && (bVar2 = FUN_71000ee7f0((long)plVar10,iVar3,lVar6), !bVar2)) {
                FUN_71000ee730((long)plVar10,iVar3,lVar6);
                iVar13 = *(int *)(param_1 + 0x114);
                if (iVar3 == iVar13) goto LAB_71000f2c74;
                goto LAB_71000f2ccc;
              }
              uVar12 = uVar12 + 1;
              uVar4 = FUN_71000ee2c0((long)plVar10);
            } while (uVar12 < uVar4);
          }
        }
        lVar6 = 0;
        iVar3 = 0;
        iVar13 = *(int *)(param_1 + 0x114);
        if (iVar13 == 0) {
LAB_71000f2c74:
          *(undefined1 *)(param_1 + 0x17b) = 0;
joined_r0x0071000f302c:
          if (iVar3 == 0) goto LAB_71000f2d0c;
        }
        else {
LAB_71000f2ccc:
          if (iVar3 == 0) {
            if ((*(char *)(param_1 + 0x17b) == '\0') ||
               (*(undefined1 *)(param_1 + 0x17b) = 0, plVar5 == (long *)0x0)) goto LAB_71000f2d0c;
            lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5);
            iVar3 = iVar13;
            goto joined_r0x0071000f302c;
          }
        }
        FUN_71000e08e0(aiStack_88,
                       *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 +
                                0x168),piVar1,iVar3,lVar6);
        FUN_71000bcf30(aiStack_78,aiStack_88);
        if (aiStack_78[0] != 0) goto LAB_71000f2d0c;
      }
LAB_71000f2fc8:
      pcVar9 = FUN_71000f4520;
      pcVar11 = "NexMatchJoinSessionJob::WaitLeaveMatchmakeSessionCompanions";
    }
LAB_71000f303c:
    *(code **)(param_1 + 0x30) = pcVar9;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar11;
    return 5;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
  aiStack_88[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)aiStack_88);
  FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_78);
  *(code **)(param_1 + 0x30) = FUN_710013e970;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "nex::NexMatchJoinSessionJob::CompleteFailure";
  return 0;
}

