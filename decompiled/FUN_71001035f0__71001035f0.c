// addr:      71001035f0
// offset:    0x1035f0
// name:      FUN_71001035f0
// mangled:   
// signature: undefined FUN_71001035f0(void)


undefined8 FUN_71001035f0(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  char *pcVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  int aiStack_88 [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
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
    lVar1 = DAT_71052adb38;
    uVar5 = (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0');
    iVar2 = *(int *)(DAT_71052adb38 + uVar5 * 4 + 0x180);
    if (iVar2 != 0) {
      plVar8 = *(long **)(DAT_71052adb38 + uVar5 * 8 + 0x168);
      FUN_71000b40e0((undefined4 *)(param_1 + 0x60));
      uVar5 = FUN_7100146ed0(DAT_71052adb38);
      if (((uVar5 & 1) == 0) && (uVar5 = (**(code **)(*plVar8 + 0xe0))(plVar8), (uVar5 & 1) != 0)) {
        *(undefined1 *)(param_1 + 0x263) = 1;
        pcVar6 = *(code **)(*plVar8 + 0x70);
      }
      else {
        *(undefined1 *)(param_1 + 0x263) = 0;
        pcVar6 = *(code **)(*plVar8 + 0x60);
      }
      (*pcVar6)(aiStack_88,plVar8,(undefined4 *)(param_1 + 0x60),iVar2);
      FUN_71000bcf30(aiStack_78,aiStack_88);
      if (aiStack_78[0] == 0) {
LAB_7100103938:
        pcVar6 = FUN_7100103980;
        uVar4 = 5;
        pcVar7 = "NexMatchJointSessionJob::WaitLeaveBufferMatchmakeSession";
        goto LAB_7100103940;
      }
      aiStack_88[0] = 0xac5a;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_88 | 4))
      ;
      auStack_68[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_88 | 4),(Result *)auStack_68);
      if (aiStack_78[0] == aiStack_88[0]) {
        FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_78);
      }
    }
    plVar8 = *(long **)(lVar1 + 8);
    if ((plVar8 != (long *)0x0) && (iVar2 = FUN_71000ee2c0((long)plVar8), iVar2 != 0)) {
      uVar9 = 0;
      do {
        iVar2 = FUN_71000ee290((long)plVar8,uVar9);
        if (iVar2 != 0) {
          uVar4 = FUN_71000c36b0(DAT_71052acd90);
          uVar5 = (**(code **)(*plVar8 + 0x60))(plVar8,iVar2,uVar4);
          if ((uVar5 & 1) == 0) {
            FUN_71000ee050((long)plVar8,iVar2);
          }
          else if (iVar2 != *(int *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 4 + 0x180)) {
            FUN_7100149290(DAT_71052adb38,iVar2);
            plVar10 = *(long **)(lVar1 + (ulong)(*(char *)(lVar1 + 0x162) == '\0') * 8 + 0x168);
            FUN_71000b40e0((undefined4 *)(param_1 + 0x60));
            uVar5 = FUN_7100146ed0(DAT_71052adb38);
            if (((uVar5 & 1) == 0) &&
               (uVar5 = (**(code **)(*plVar10 + 0xe0))(plVar10), (uVar5 & 1) != 0)) {
              *(undefined1 *)(param_1 + 0x263) = 1;
              pcVar6 = *(code **)(*plVar10 + 0x70);
            }
            else {
              *(undefined1 *)(param_1 + 0x263) = 0;
              pcVar6 = *(code **)(*plVar10 + 0x60);
            }
            (*pcVar6)(aiStack_88,plVar10,(undefined4 *)(param_1 + 0x60),iVar2);
            FUN_71000bcf30(aiStack_78,aiStack_88);
            if (aiStack_78[0] == 0) goto LAB_7100103938;
          }
        }
        uVar9 = uVar9 + 1;
        uVar3 = FUN_71000ee2c0((long)plVar8);
      } while (uVar9 < uVar3);
    }
    pcVar6 = FUN_71000f70d0;
    uVar4 = 0;
    pcVar7 = "NexMatchJointSessionJob::ProcessFailure";
LAB_7100103940:
    *(code **)(param_1 + 0x30) = pcVar6;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar7;
    return uVar4;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
  aiStack_88[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)aiStack_88);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_78);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::ProcessFailure";
  return 0;
}

