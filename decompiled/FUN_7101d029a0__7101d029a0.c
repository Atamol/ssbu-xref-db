// addr:      7101d029a0
// offset:    0x1d029a0
// name:      FUN_7101d029a0
// mangled:   
// signature: undefined __cdecl FUN_7101d029a0(long param_1, int param_2, byte param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d029a0(long param_1,int param_2,byte param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined **local_70;
  long *local_68;
  
  plVar1 = (long *)(param_1 + 0x1a0);
  if (*(long **)(param_1 + 0x198) != plVar1) {
    plVar7 = *(long **)(param_1 + 0x198);
    do {
      while( true ) {
        uVar8 = plVar7[4];
        if ((int)uVar8 < param_2) {
          lVar6 = *(long *)(*(long *)(param_1 + 400) + 0x1b8);
          if (lVar6 != 0) {
            iVar3 = *(int *)((long)plVar7 + 0x1c);
            lVar2 = *(long *)(param_1 + 400) + 0x1b8;
            lVar4 = lVar2;
            do {
              if (iVar3 <= *(int *)(lVar6 + 0x20)) {
                lVar4 = lVar6;
              }
              lVar6 = *(long *)(lVar6 + (ulong)(*(int *)(lVar6 + 0x20) < iVar3) * 8);
            } while (lVar6 != 0);
            if (((lVar4 != lVar2) && (*(int *)(lVar4 + 0x20) <= iVar3)) &&
               (plVar9 = *(long **)(lVar4 + 0x28), plVar9 != (long *)0x0)) {
              (**(code **)(*plVar9 + 0x1f8))(plVar9,param_3 & 1);
              (**(code **)(*plVar9 + 0x388))(plVar9,(param_3 ^ 1) & 1,0);
            }
          }
          FUN_7103776910(&local_70,**(long **)(param_1 + 0x188) + 8,
                         (long ****)"set_replaybtn_%d_%02d",uVar8 & 0xffffffff,uVar8 >> 0x20,param_5
                         ,param_6,param_7,param_8);
          plVar9 = local_68;
          lVar6 = *local_68;
          if (lVar6 != 0) {
            *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe | param_3 & 1;
          }
          local_70 = &PTR_FUN_710523d9a8;
          local_68 = (long *)0x0;
          if (plVar9 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar9);
          }
        }
        plVar9 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) break;
        do {
          plVar7 = plVar9;
          plVar9 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
LAB_7101d02b0c:
        if (plVar7 == plVar1) {
          return;
        }
      }
      plVar9 = plVar7 + 2;
      plVar5 = (long *)*plVar9;
      if ((long *)*plVar5 != plVar7) {
        do {
          lVar6 = *plVar9;
          plVar9 = (long *)(lVar6 + 0x10);
          plVar7 = (long *)*plVar9;
        } while (*plVar7 != lVar6);
        goto LAB_7101d02b0c;
      }
      plVar7 = plVar5;
    } while (plVar5 != plVar1);
  }
  return;
}

