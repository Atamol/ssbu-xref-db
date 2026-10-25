// addr:      71023d4940
// offset:    0x23d4940
// name:      FUN_71023d4940
// mangled:   
// signature: undefined __cdecl FUN_71023d4940(undefined8 param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71023d4940(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  if ((long *)*param_2 == (long *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)*param_2;
  }
  FUN_71038f7260(lVar6,"manager");
  puVar4 = *(undefined8 **)(lVar6 + 0x10);
  *puVar4 = puVar4[-2];
  puVar4[1] = puVar4[-1];
  lVar5 = *(long *)(lVar6 + 0x10);
  *(long *)(lVar6 + 0x10) = lVar5 + 0x10;
  FUN_71038f5390(lVar6,(long *)(lVar5 + -0x10),"__index");
  FUN_71038f9510(lVar6,(long *)&DAT_71050ba898,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + -0x10;
  puVar4 = FUN_71038f6930(lVar6,8);
  *puVar4 = param_1;
  FUN_71038f4d40(lVar6,(long *)(*(long *)(lVar6 + 0x18) + 0x40),"manager");
  FUN_71038f5c00(lVar6,-2);
  if (lVar6 != 0) {
    lVar5 = *(long *)(*(long *)(lVar6 + 0x18) + 0x40);
    if (*(uint *)(lVar5 + 0xc) < 2) {
      plVar2 = (long *)(*(long *)(lVar5 + 0x18) +
                       ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar5 + 0xb) & 0x3f)) & 2) *
                       0x20);
      do {
        if (((int)plVar2[3] == 0x13) && (plVar3 = plVar2, plVar2[2] == 2)) break;
        piVar1 = (int *)((long)plVar2 + 0x1c);
        plVar2 = plVar2 + (long)*piVar1 * 4;
        plVar3 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar3 = (long *)(*(long *)(lVar5 + 0x10) + 0x10);
    }
    FUN_71038f5390(lVar6,plVar3,"manager");
  }
  if ((long *)*param_2 != (long *)0x0) {
    FUN_7103375650((long *)*param_2,"MELEE_TYPE_NORMAL",&DAT_71042b2a84);
    if ((long *)*param_2 != (long *)0x0) {
      FUN_7103375650((long *)*param_2,"MELEE_TYPE_TEAM",&DAT_71042b2a84);
      if ((long *)*param_2 != (long *)0x0) {
        FUN_7103375650((long *)*param_2,"MELEE_TYPE_BATTLE_ROYAL",&DAT_71042b2a84);
        if ((long *)*param_2 != (long *)0x0) {
          FUN_7103375650((long *)*param_2,"MELEE_TYPE_ONE_TO_MANY",&DAT_71042b2a84);
          if ((long *)*param_2 != (long *)0x0) {
            FUN_7103375650((long *)*param_2,"MELEE_TYPE_CORPS",&DAT_71042b2a84);
            if ((long *)*param_2 != (long *)0x0) {
              FUN_7103375650((long *)*param_2,"MELEE_TYPE_BONUS",&DAT_71042b2a84);
              if ((long *)*param_2 != (long *)0x0) {
                FUN_7103375650((long *)*param_2,"DIFFICULTY_MIN",&DAT_71042b2a84);
                if ((long *)*param_2 != (long *)0x0) {
                  FUN_7103375650((long *)*param_2,"DIFFICULTY_MAX",&DAT_71042b2a84);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

