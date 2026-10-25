// addr:      71000f5960
// offset:    0xf5960
// name:      FUN_71000f5960
// mangled:   
// signature: undefined FUN_71000f5960(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000f5960(int *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  int aiStack_70 [4];
  undefined4 auStack_58 [2];
  
  *(undefined4 *)(param_2 + 0x230) = 1;
  lVar5 = DAT_71052adb38;
  uVar7 = (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0');
  if (*(int *)(DAT_71052adb38 + uVar7 * 4 + 0x180) == 0) {
    lVar9 = *(long *)(DAT_71052adb38 + uVar7 * 8 + 0x168);
    *(undefined1 *)(param_2 + 0x264) = 0;
    lVar10 = *(long *)(lVar5 + 8);
    if ((lVar10 != 0) && (iVar3 = FUN_71000ee2c0(lVar10), iVar3 != 0)) {
      uVar12 = 0;
      do {
        iVar3 = FUN_71000ee290(lVar10,uVar12);
        if ((iVar3 != 0) &&
           (iVar3 = FUN_71000ee290(lVar10,uVar12),
           iVar3 != *(int *)(lVar5 + (ulong)*(byte *)(lVar5 + 0x162) * 4 + 0x180))) {
          *(undefined1 *)(param_2 + 0x264) = 1;
        }
        uVar12 = uVar12 + 1;
        uVar4 = FUN_71000ee2c0(lVar10);
      } while (uVar12 < uVar4);
    }
    DAT_71052acc28 = 0xffffffffffffffff;
    _DAT_71052acc30 = 0xffffffffffffffff;
    DAT_71052ac93c = 0xffffffff;
    DAT_71052acc34._4_4_ = 0xffffffff;
    FUN_71000e4820(aiStack_70,lVar9,param_3);
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
    lVar5 = FUN_7100193a50(DAT_71052adfc0);
    lVar9 = *(long *)(lVar5 + 8);
    if (lVar9 != lVar5) {
      lVar10 = *(long *)(DAT_71052adb38 + 0xb8);
      do {
        bVar2 = FUN_7100150680(lVar10,*(long *)(lVar9 + 0x10));
        if ((bVar2) && (*(int *)(param_2 + 0xd0) != 0)) {
          plVar6 = FUN_71000b71c0((undefined8 *)(param_2 + 0xc0));
          if (plVar6 == (long *)0x0) {
            plVar6 = (long *)0x0;
          }
          else {
            plVar6 = (long *)((long)plVar6 - (long)*(int *)(param_2 + 0xd4));
          }
          plVar6[2] = 0;
          FUN_71000b7090((long)puVar1,puVar1,plVar6);
          plVar6[2] = *(long *)(lVar9 + 0x10);
        }
        lVar9 = *(long *)(lVar9 + 8);
      } while (lVar9 != lVar5);
    }
    *(undefined4 *)(param_2 + 0x98) = 0;
    *(undefined1 *)(param_2 + 0x234) = 0;
    *(undefined1 *)(param_2 + 0x240) = 0;
    *(undefined1 *)(param_2 + 0x250) = 0;
    *(undefined2 *)(param_2 + 0x260) = 0;
    *(undefined4 *)(param_2 + 0x230) = 5;
    *(char **)(param_2 + 0x40) = "NexMatchJointSessionJob::CallSessionEvent";
    *(code **)(param_2 + 0x30) = FUN_71000f53b0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    aiStack_70[0] = 0;
  }
  else {
    aiStack_70[0] = 0x10c08;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_70 | 4));
  auStack_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_70 | 4),(Result *)auStack_58);
  FUN_71000bce50(param_1,aiStack_70);
  return;
}

