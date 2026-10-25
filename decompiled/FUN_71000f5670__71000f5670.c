// addr:      71000f5670
// offset:    0xf5670
// name:      FUN_71000f5670
// mangled:   
// signature: undefined FUN_71000f5670(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000f5670(int *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  int aiStack_70 [4];
  undefined4 auStack_58 [2];
  
  *(undefined4 *)(param_2 + 0x230) = 1;
  lVar9 = DAT_71052adb38;
  uVar11 = (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0');
  if (*(int *)(DAT_71052adb38 + uVar11 * 4 + 0x180) == 0) {
    lVar13 = *(long *)(DAT_71052adb38 + uVar11 * 8 + 0x168);
    *(undefined1 *)(param_2 + 0x264) = 0;
    lVar15 = *(long *)(lVar9 + 8);
    if ((lVar15 != 0) && (iVar6 = FUN_71000ee2c0(lVar15), iVar6 != 0)) {
      uVar16 = 0;
      do {
        iVar6 = FUN_71000ee290(lVar15,uVar16);
        if ((iVar6 != 0) &&
           (iVar6 = FUN_71000ee290(lVar15,uVar16),
           iVar6 != *(int *)(lVar9 + (ulong)*(byte *)(lVar9 + 0x162) * 4 + 0x180))) {
          *(undefined1 *)(param_2 + 0x264) = 1;
        }
        uVar16 = uVar16 + 1;
        uVar7 = FUN_71000ee2c0(lVar15);
      } while (uVar16 < uVar7);
    }
    DAT_71052acc28 = 0xffffffffffffffff;
    _DAT_71052acc30 = 0xffffffffffffffff;
    DAT_71052ac93c = 0xffffffff;
    DAT_71052acc34._4_4_ = 0xffffffff;
    sVar4 = FUN_710013dc70((long)param_3);
    if (sVar4 != 0) {
      sVar4 = FUN_710013dc70((long)param_3);
      sVar5 = FUN_71000c1a50((long)param_3);
      if ((ushort)(sVar5 + sVar4) <= *(ushort *)(DAT_71052add68 + 0x70)) {
        bVar2 = FUN_71000c1580((long)param_3);
        *(byte *)(param_2 + 0x266) = bVar2 & 1;
        uVar8 = FUN_7100146ed0(lVar9);
        FUN_71000e4360(aiStack_70,lVar13,param_3,(uint)uVar8 & 1);
        FUN_71001492f0(DAT_71052adb38,sVar5 + sVar4 & 0xff);
        puVar1 = (undefined8 *)(param_2 + 0xa8);
        if (*(int *)(param_2 + 0xb8) != 0) {
          if (*(undefined8 **)(param_2 + 0xb0) != puVar1) {
            puVar12 = *(undefined8 **)(param_2 + 0xb0);
            do {
              puVar14 = (undefined8 *)puVar12[1];
              *puVar12 = 0;
              puVar12[1] = 0;
              FUN_71000b70c0(param_2 + 0xc0,param_2 + 0xc0,
                             (long *)((long)*(int *)(param_2 + 0xd4) + (long)puVar12));
              puVar12 = puVar14;
            } while (puVar14 != puVar1);
          }
          FUN_71000b7080((long)puVar1);
        }
        lVar9 = FUN_7100193a50(DAT_71052adfc0);
        lVar13 = *(long *)(lVar9 + 8);
        if (lVar13 != lVar9) {
          lVar15 = *(long *)(DAT_71052adb38 + 0xb8);
          do {
            bVar3 = FUN_7100150680(lVar15,*(long *)(lVar13 + 0x10));
            if ((bVar3) && (*(int *)(param_2 + 0xd0) != 0)) {
              plVar10 = FUN_71000b71c0((undefined8 *)(param_2 + 0xc0));
              if (plVar10 == (long *)0x0) {
                plVar10 = (long *)0x0;
              }
              else {
                plVar10 = (long *)((long)plVar10 - (long)*(int *)(param_2 + 0xd4));
              }
              plVar10[2] = 0;
              FUN_71000b7090((long)puVar1,puVar1,plVar10);
              plVar10[2] = *(long *)(lVar13 + 0x10);
            }
            lVar13 = *(long *)(lVar13 + 8);
          } while (lVar13 != lVar9);
        }
        *(undefined4 *)(param_2 + 0xf0) = 0;
        *(undefined4 *)(param_2 + 0x98) = 0;
        *(undefined1 *)(param_2 + 0x234) = 0;
        *(undefined4 *)(param_2 + 0x230) = 5;
        *(undefined1 *)(param_2 + 0x240) = 0;
        *(undefined1 *)(param_2 + 0x250) = 0;
        *(undefined2 *)(param_2 + 0x260) = 0;
        *(code **)(param_2 + 0x30) = FUN_71000f53b0;
        *(undefined8 *)(param_2 + 0x38) = 0;
        *(char **)(param_2 + 0x40) = "NexMatchJointSessionJob::CallSessionEvent";
        aiStack_70[0] = 0;
        goto LAB_71000f57bc;
      }
    }
    aiStack_70[0] = 0x10c07;
  }
  else {
    aiStack_70[0] = 0x10c08;
  }
LAB_71000f57bc:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_70 | 4));
  auStack_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_70 | 4),(Result *)auStack_58);
  FUN_71000bce50(param_1,aiStack_70);
  return;
}

