// addr:      71000f5e40
// offset:    0xf5e40
// name:      FUN_71000f5e40
// mangled:   
// signature: undefined FUN_71000f5e40(void)


void FUN_71000f5e40(int *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int aiStack_70 [4];
  undefined4 auStack_58 [2];
  
  lVar3 = DAT_71052adb38;
  if (*(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180) == 0) {
    aiStack_70[0] = 0x10c08;
  }
  else {
    *(undefined1 *)(param_2 + 0x264) = 0;
    lVar9 = *(long *)(lVar3 + 8);
    if (lVar9 != 0) {
      iVar5 = FUN_71000ee2c0(lVar9);
      if (iVar5 != 0) {
        uVar10 = 0;
        do {
          iVar5 = FUN_71000ee290(lVar9,uVar10);
          if ((iVar5 != 0) &&
             (iVar5 = FUN_71000ee290(lVar9,uVar10),
             iVar5 != *(int *)(lVar3 + (ulong)(*(char *)(lVar3 + 0x162) == '\0') * 4 + 0x180)))
          goto LAB_71000f5ef4;
          uVar10 = uVar10 + 1;
          uVar6 = FUN_71000ee2c0(lVar9);
        } while (uVar10 < uVar6);
      }
      *(undefined1 *)(param_2 + 0x264) = 1;
    }
LAB_71000f5ef4:
    puVar1 = (undefined8 *)(param_2 + 0xa8);
    if (*(int *)(param_2 + 0xb8) != 0) {
      if (*(undefined8 **)(param_2 + 0xb0) != puVar1) {
        puVar8 = *(undefined8 **)(param_2 + 0xb0);
        do {
          puVar11 = (undefined8 *)puVar8[1];
          *puVar8 = 0;
          puVar8[1] = 0;
          FUN_71000b70c0(param_2 + 0xc0,param_2 + 0xc0,
                         (long *)((long)*(int *)(param_2 + 0xd4) + (long)puVar8));
          puVar8 = puVar11;
        } while (puVar11 != puVar1);
      }
      FUN_71000b7080((long)puVar1);
    }
    lVar9 = FUN_7100193a50(DAT_71052adfc0);
    lVar13 = *(long *)(lVar9 + 8);
    if (lVar13 != lVar9) {
      lVar12 = *(long *)(lVar3 + 0xb8);
      do {
        bVar4 = FUN_7100150680(lVar12,*(long *)(lVar13 + 0x10));
        if ((bVar4) && (*(int *)(param_2 + 0xd0) != 0)) {
          plVar7 = FUN_71000b71c0((undefined8 *)(param_2 + 0xc0));
          if (plVar7 == (long *)0x0) {
            plVar7 = (long *)0x0;
          }
          else {
            plVar7 = (long *)((long)plVar7 - (long)*(int *)(param_2 + 0xd4));
          }
          plVar7[2] = 0;
          FUN_71000b7090((long)puVar1,puVar1,plVar7);
          plVar7[2] = *(long *)(lVar13 + 0x10);
        }
        lVar13 = *(long *)(lVar13 + 8);
      } while (lVar13 != lVar9);
    }
    DAT_71052acc34 = 0xffffffffffffffff;
    uVar2 = *(undefined4 *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 4 + 0x180);
    *(undefined4 *)(param_2 + 0x98) = 0;
    *(undefined4 *)(param_2 + 0x230) = 2;
    *(undefined1 *)(param_2 + 0x234) = 0;
    *(undefined1 *)(param_2 + 0x240) = 0;
    *(undefined1 *)(param_2 + 0x250) = 0;
    *(undefined2 *)(param_2 + 0x260) = 0;
    *(code **)(param_2 + 0x30) = FUN_71000f6080;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "NexMatchJointSessionJob::CallDestroySessionEvent";
    *(undefined4 *)(param_2 + 0xf0) = uVar2;
    aiStack_70[0] = 0;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_70 | 4));
  auStack_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_70 | 4),(Result *)auStack_58);
  FUN_71000bce50(param_1,aiStack_70);
  return;
}

