// addr:      7101e9b720
// offset:    0x1e9b720
// name:      FUN_7101e9b720
// mangled:   
// signature: undefined __cdecl FUN_7101e9b720(long * param_1, byte param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e9b720(long *param_1,byte param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 extraout_x1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  if (3 < param_2) {
    return;
  }
  lVar8 = *(long *)(*param_1 + (ulong)param_2 * 8 + 0x48);
  if (lVar8 == 0) {
    return;
  }
  plVar6 = *(long **)(lVar8 + 0xa0);
  *(undefined1 *)(lVar8 + 0xb5) = 0;
  if (plVar6 != (long *)0x0) {
    plVar2 = (long *)plVar6[1];
    plVar7 = (long *)plVar2[1];
    if (plVar7 == (long *)0x0) {
      *(undefined8 *)(lVar8 + 0xa0) = 0;
    }
    else {
      if ((char)plVar2[2] != '\0') {
        plVar9 = *(long **)(*plVar2 + 0x80);
        plVar2 = (long *)(*plVar2 + 0x88);
        if (plVar9 != plVar2) {
          do {
            while( true ) {
              uVar1 = (**(code **)(*(long *)plVar9[0xd] + 0x148))();
              if (((uVar1 & 1) != 0) &&
                 (uVar1 = (**(code **)(*plVar7 + 0x120))(plVar7,plVar9[0xd]), (uVar1 & 1) != 0)) {
                (**(code **)(*(long *)plVar9[0xd] + 0x178))();
                (**(code **)(*(long *)plVar9[0xd] + 0x140))((long *)plVar9[0xd],0);
              }
              plVar4 = (long *)plVar9[1];
              if ((long *)plVar9[1] == (long *)0x0) break;
              do {
                plVar9 = plVar4;
                plVar4 = (long *)*plVar9;
              } while ((long *)*plVar9 != (long *)0x0);
LAB_7101e9b820:
              if (plVar9 == plVar2) goto LAB_7101e9b838;
            }
            plVar4 = plVar9 + 2;
            plVar3 = (long *)*plVar4;
            if ((long *)*plVar3 != plVar9) {
              do {
                lVar5 = *plVar4;
                plVar4 = (long *)(lVar5 + 0x10);
                plVar9 = (long *)*plVar4;
              } while (*plVar9 != lVar5);
              goto LAB_7101e9b820;
            }
            plVar9 = plVar3;
          } while (plVar3 != plVar2);
LAB_7101e9b838:
          plVar7 = *(long **)(plVar6[1] + 8);
        }
      }
      (**(code **)(*plVar7 + 0x178))(plVar7);
      plVar6 = *(long **)(lVar8 + 0xa0);
      *(undefined8 *)(lVar8 + 0xa0) = 0;
      if (plVar6 == (long *)0x0) goto LAB_7101e9b874;
    }
    (**(code **)(*plVar6 + 8))(plVar6);
  }
LAB_7101e9b874:
  *(undefined1 *)(lVar8 + 0x98) = 0;
  FUN_7103778300(0x3f800000,*(long *)(lVar8 + 8),0x71042a36bf);
  FUN_7103778300(0x3f800000,*(long *)(lVar8 + 8),0x710438d258);
  FUN_7103778300(0x3f800000,*(long *)(lVar8 + 8),0x7104401c0b);
  FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0x38),0x71043cd335);
  *(undefined1 *)(lVar8 + 0xb0) = 0;
  *(undefined1 *)(lVar8 + 0xb5) = 0;
  FUN_71037790a0(*(long *)(lVar8 + 0x68),1,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_71037790a0(*(long *)(lVar8 + 0x78),1,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_71025ae390(lVar8 + 0x10,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_71037790a0(*(long *)(lVar8 + 0x58),1,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(lVar8 + 0xb2) = 0;
  if (*(char *)((long)param_1 + 10) != '\0') {
    plVar6 = *(long **)(lVar8 + 0x88);
    plVar2 = (long *)plVar6[1];
    if (plVar2 != (long *)0x0) {
      if ((char)plVar6[2] != '\0') {
        plVar7 = *(long **)(*plVar6 + 0x80);
        plVar6 = (long *)(*plVar6 + 0x88);
        if (plVar7 != plVar6) {
          do {
            while( true ) {
              uVar1 = (**(code **)(*(long *)plVar7[0xd] + 0x148))();
              if (((uVar1 & 1) != 0) &&
                 (uVar1 = (**(code **)(*plVar2 + 0x120))(plVar2,plVar7[0xd]), (uVar1 & 1) != 0)) {
                (**(code **)(*(long *)plVar7[0xd] + 0x178))();
                (**(code **)(*(long *)plVar7[0xd] + 0x140))((long *)plVar7[0xd],0);
              }
              plVar9 = (long *)plVar7[1];
              if ((long *)plVar7[1] == (long *)0x0) break;
              do {
                plVar7 = plVar9;
                plVar9 = (long *)*plVar7;
              } while ((long *)*plVar7 != (long *)0x0);
LAB_7101e9b9c8:
              if (plVar7 == plVar6) goto LAB_7101e9b9e0;
            }
            plVar9 = plVar7 + 2;
            plVar4 = (long *)*plVar9;
            if ((long *)*plVar4 != plVar7) {
              do {
                lVar5 = *plVar9;
                plVar9 = (long *)(lVar5 + 0x10);
                plVar7 = (long *)*plVar9;
              } while (*plVar7 != lVar5);
              goto LAB_7101e9b9c8;
            }
            plVar7 = plVar4;
          } while (plVar4 != plVar6);
LAB_7101e9b9e0:
          plVar2 = *(long **)(*(long *)(lVar8 + 0x88) + 8);
        }
      }
      (**(code **)(*plVar2 + 0x188))(plVar2);
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar8 + 8),0x710425fbe5);
    FUN_7103778300(0x3f800000,*(long *)(lVar8 + 8),0x710435bea3);
    FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0x28),0x710425fbe5);
    *(undefined1 *)(lVar8 + 0xb3) = 0;
    if (*(char *)(lVar8 + 0xb4) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(lVar8 + 8),0x71043cfbc9);
    }
    *(undefined1 *)(lVar8 + 0xb4) = 0;
  }
  return;
}

