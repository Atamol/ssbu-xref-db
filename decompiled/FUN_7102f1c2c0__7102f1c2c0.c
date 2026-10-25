// addr:      7102f1c2c0
// offset:    0x2f1c2c0
// name:      FUN_7102f1c2c0
// mangled:   
// signature: undefined __cdecl FUN_7102f1c2c0(long param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102f1c2c0(long param_1,ulong param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 auStack_90 [4];
  long local_80;
  int local_78;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
  do {
    uVar5 = param_2;
    if (plVar1 == *(long **)(*(long *)(param_1 + 0x310) + 0xd8)) {
LAB_7102f1c328:
      plVar1 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
      while( true ) {
        if (plVar1 == *(long **)(*(long *)(param_1 + 0x310) + 0xd8)) {
          return;
        }
        if ((*(uint *)(plVar1 + 1) < 2) &&
           (lVar10 = *plVar1, *(long *)(lVar10 + 0x68) == 0x1702bf9584)) break;
        plVar1 = plVar1 + 2;
      }
      if (lVar10 == 0) {
        return;
      }
      *(byte *)(lVar10 + 0x110) = ~(byte)param_2 & 1;
      FUN_71025e9d50((long *)(lVar10 + 0x108),uVar5,param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      if ((param_2 & 1) != 0) {
        return;
      }
      lVar8 = *(long *)(param_1 + 0x318);
      FUN_7102633a10(lVar8,(long *********)"chara_bg2",1,param_4,param_5,param_6,param_7,param_8);
      uVar6 = 1;
      FUN_7102633b90(lVar8,(long *********)"stage_bg2",1,param_4,param_5,param_6,param_7,param_8);
      FUN_7102633800(lVar8,(long *********)"reflection_cubemap_bg2",uVar6,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_71025f7350(*(long *)(lVar8 + 0x10),(byte *)"light_bg2");
      if ((*(char *)(lVar10 + 0xe0) != '\0') && (lVar8 = *(long *)(lVar10 + 200), lVar8 != 0)) {
        puVar9 = *(undefined8 **)(lVar8 + 0x18);
        puVar2 = *(undefined8 **)(lVar8 + 0x20);
        *(undefined4 *)(lVar8 + 0x3c) = 0;
        if (puVar9 == puVar2) {
          *(undefined4 *)(lVar8 + 0x40) = 0;
        }
        else {
          do {
            puVar11 = puVar9 + 1;
            (**(code **)(*(long *)*puVar9 + 0x18))(0,(long *)*puVar9,0);
            puVar9 = puVar11;
          } while (puVar2 != puVar11);
          puVar9 = *(undefined8 **)(lVar8 + 0x18);
          puVar2 = *(undefined8 **)(lVar8 + 0x20);
          *(undefined4 *)(lVar8 + 0x40) = 0;
          if (puVar9 != puVar2) {
            do {
              puVar11 = puVar9 + 1;
              (**(code **)(*(long *)*puVar9 + 0x18))(0,(long *)*puVar9,1);
              puVar9 = puVar11;
            } while (puVar2 != puVar11);
            puVar2 = *(undefined8 **)(lVar8 + 0x20);
            for (puVar9 = *(undefined8 **)(lVar8 + 0x18); puVar9 != puVar2; puVar9 = puVar9 + 1) {
              (**(code **)(*(long *)*puVar9 + 0x38))();
            }
          }
        }
      }
      FUN_71025ee450(0,*(long **)(lVar10 + 0xd8),1);
      FUN_71024076d0(auStack_90,0x1abd861901);
      if (local_80 == 0) {
        return;
      }
      if (DAT_7106dd53a8 != '\x01') {
        return;
      }
      if (local_78 != DAT_7106dd53ac) {
        return;
      }
      piVar7 = (int *)(local_80 + 0x38);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = *piVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      return;
    }
    if ((*(uint *)(plVar1 + 1) < 2) && (lVar10 = *plVar1, *(long *)(lVar10 + 0x68) == 0x16535ffbee))
    {
      if (lVar10 != 0) {
        *(byte *)(lVar10 + 0x110) = (byte)param_2 & 1;
        FUN_71025e9d50((long *)(lVar10 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        uVar5 = extraout_x1;
        if ((param_2 & 1) != 0) {
          lVar8 = *(long *)(param_1 + 0x318);
          FUN_7102633a10(lVar8,(long *********)"chara_bg1",1,param_4,param_5,param_6,param_7,param_8
                        );
          param_3 = (long ****)0x1;
          FUN_7102633b90(lVar8,(long *********)"stage_bg1",1,param_4,param_5,param_6,param_7,param_8
                        );
          FUN_7102633800(lVar8,(long *********)"reflection_cubemap_bg1",param_3,param_4,param_5,
                         param_6,param_7,param_8);
          FUN_71025f7350(*(long *)(lVar8 + 0x10),(byte *)"light_bg1");
          if ((*(char *)(lVar10 + 0xe0) != '\0') && (lVar8 = *(long *)(lVar10 + 200), lVar8 != 0)) {
            puVar9 = *(undefined8 **)(lVar8 + 0x18);
            puVar2 = *(undefined8 **)(lVar8 + 0x20);
            *(undefined4 *)(lVar8 + 0x3c) = 0;
            if (puVar9 == puVar2) {
              *(undefined4 *)(lVar8 + 0x40) = 0;
            }
            else {
              do {
                puVar11 = puVar9 + 1;
                (**(code **)(*(long *)*puVar9 + 0x18))(0,(long *)*puVar9,0);
                puVar9 = puVar11;
              } while (puVar2 != puVar11);
              puVar9 = *(undefined8 **)(lVar8 + 0x18);
              puVar2 = *(undefined8 **)(lVar8 + 0x20);
              *(undefined4 *)(lVar8 + 0x40) = 0;
              if (puVar9 != puVar2) {
                do {
                  puVar11 = puVar9 + 1;
                  (**(code **)(*(long *)*puVar9 + 0x18))(0,(long *)*puVar9,1);
                  puVar9 = puVar11;
                } while (puVar2 != puVar11);
                puVar2 = *(undefined8 **)(lVar8 + 0x20);
                for (puVar9 = *(undefined8 **)(lVar8 + 0x18); puVar9 != puVar2; puVar9 = puVar9 + 1)
                {
                  (**(code **)(*(long *)*puVar9 + 0x38))();
                }
              }
            }
          }
          FUN_71025ee450(0,*(long **)(lVar10 + 0xd8),1);
          uVar5 = extraout_x1_00;
        }
      }
      goto LAB_7102f1c328;
    }
    plVar1 = plVar1 + 2;
  } while( true );
}

