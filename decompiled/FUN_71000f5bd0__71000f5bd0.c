// addr:      71000f5bd0
// offset:    0xf5bd0
// name:      FUN_71000f5bd0
// mangled:   
// signature: undefined FUN_71000f5bd0(void)


void FUN_71000f5bd0(int *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int aiStack_70 [4];
  undefined4 uStack_58;
  int iStack_54;
  
  lVar3 = DAT_71052adb38;
  if (*(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180) == 0) {
    aiStack_70[0] = 0x10c08;
  }
  else {
    *(undefined1 *)(param_2 + 0x264) = 0;
    lVar10 = *(long *)(lVar3 + 8);
    if (lVar10 != 0) {
      iVar5 = FUN_71000ee2c0(lVar10);
      if (iVar5 != 0) {
        uVar11 = 0;
        do {
          iVar5 = FUN_71000ee290(lVar10,uVar11);
          if ((iVar5 != 0) &&
             (iVar5 = FUN_71000ee290(lVar10,uVar11),
             iVar5 != *(int *)(lVar3 + (ulong)(*(char *)(lVar3 + 0x162) == '\0') * 4 + 0x180)))
          goto LAB_71000f5c84;
          uVar11 = uVar11 + 1;
          uVar6 = FUN_71000ee2c0(lVar10);
        } while (uVar11 < uVar6);
      }
      *(undefined1 *)(param_2 + 0x264) = 1;
    }
LAB_71000f5c84:
    puVar1 = (undefined8 *)(param_2 + 0xa8);
    if (*(int *)(param_2 + 0xb8) != 0) {
      if (*(undefined8 **)(param_2 + 0xb0) != puVar1) {
        puVar9 = *(undefined8 **)(param_2 + 0xb0);
        do {
          puVar12 = (undefined8 *)puVar9[1];
          *puVar9 = 0;
          puVar9[1] = 0;
          FUN_71000b70c0(param_2 + 0xc0,param_2 + 0xc0,
                         (long *)((long)*(int *)(param_2 + 0xd4) + (long)puVar9));
          puVar9 = puVar12;
        } while (puVar12 != puVar1);
      }
      FUN_71000b7080((long)puVar1);
    }
    lVar10 = FUN_7100193a50(DAT_71052adfc0);
    lVar14 = *(long *)(lVar10 + 8);
    if (lVar14 != lVar10) {
      lVar13 = *(long *)(lVar3 + 0xb8);
      do {
        bVar4 = FUN_7100150680(lVar13,*(long *)(lVar14 + 0x10));
        if ((((bVar4) &&
             (uVar7 = FUN_7100150d50(lVar13,*(long *)(lVar14 + 0x10),&iStack_54), (uVar7 & 1) != 0))
            && (iStack_54 == *(int *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 4 + 0x180))) &&
           (*(int *)(param_2 + 0xd0) != 0)) {
          plVar8 = FUN_71000b71c0((undefined8 *)(param_2 + 0xc0));
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)0x0;
          }
          else {
            plVar8 = (long *)((long)plVar8 - (long)*(int *)(param_2 + 0xd4));
          }
          plVar8[2] = 0;
          FUN_71000b7090((long)puVar1,puVar1,plVar8);
          plVar8[2] = *(long *)(lVar14 + 0x10);
        }
        lVar14 = *(long *)(lVar14 + 8);
      } while (lVar14 != lVar10);
    }
    DAT_71052acc34 = 0xffffffffffffffff;
    uVar2 = *(undefined4 *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 4 + 0x180);
    *(undefined4 *)(param_2 + 0x98) = 0;
    *(undefined4 *)(param_2 + 0x230) = 5;
    *(undefined1 *)(param_2 + 0x234) = 0;
    *(undefined1 *)(param_2 + 0x240) = 0;
    *(undefined1 *)(param_2 + 0x250) = 0;
    *(undefined2 *)(param_2 + 0x260) = 0;
    *(code **)(param_2 + 0x30) = FUN_71000f53b0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "NexMatchJointSessionJob::CallSessionEvent";
    *(undefined4 *)(param_2 + 0xf0) = uVar2;
    aiStack_70[0] = 0;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_70 | 4));
  uStack_58 = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_70 | 4),(Result *)&uStack_58);
  FUN_71000bce50(param_1,aiStack_70);
  return;
}

