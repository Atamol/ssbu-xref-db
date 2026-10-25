// addr:      7101e42f50
// offset:    0x1e42f50
// name:      FUN_7101e42f50
// mangled:   
// signature: undefined __cdecl FUN_7101e42f50(long param_1, ulong param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e42f50(long param_1,ulong param_2,ulong param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  undefined **local_50;
  long *local_48;
  
  FUN_71037780e0(&local_50,param_1,(long ****)"progress_finish",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar2 = local_48;
  plVar6 = (long *)local_48[1];
  if ((param_2 & 1) == 0) {
    if (plVar6 != (long *)0x0) {
      if ((char)local_48[2] != '\0') {
        plVar8 = *(long **)(*local_48 + 0x80);
        plVar1 = (long *)(*local_48 + 0x88);
        if (plVar8 != plVar1) {
          do {
            while( true ) {
              uVar3 = (**(code **)(*(long *)plVar8[0xd] + 0x148))();
              if (((uVar3 & 1) != 0) &&
                 (uVar3 = (**(code **)(*plVar6 + 0x120))(plVar6,plVar8[0xd]), (uVar3 & 1) != 0)) {
                (**(code **)(*(long *)plVar8[0xd] + 0x178))();
                (**(code **)(*(long *)plVar8[0xd] + 0x140))((long *)plVar8[0xd],0);
              }
              plVar4 = (long *)plVar8[1];
              if ((long *)plVar8[1] == (long *)0x0) break;
              do {
                plVar8 = plVar4;
                plVar4 = (long *)*plVar8;
              } while ((long *)*plVar8 != (long *)0x0);
LAB_7101e430b4:
              if (plVar8 == plVar1) goto LAB_7101e430cc;
            }
            plVar4 = plVar8 + 2;
            plVar5 = (long *)*plVar4;
            if ((long *)*plVar5 != plVar8) {
              do {
                lVar7 = *plVar4;
                plVar4 = (long *)(lVar7 + 0x10);
                plVar8 = (long *)*plVar4;
              } while (*plVar8 != lVar7);
              goto LAB_7101e430b4;
            }
            plVar8 = plVar5;
          } while (plVar5 != plVar1);
LAB_7101e430cc:
          plVar6 = (long *)local_48[1];
        }
      }
      (**(code **)(*plVar6 + 0x188))(plVar6);
    }
    lVar7 = *(long *)(param_1 + 8);
    if ((*(long *)(lVar7 + 8) != 0) &&
       (plVar6 = (long *)FUN_71037964b0(*(long *)(lVar7 + 8),0x71042d69e0), plVar6 != (long *)0x0))
    {
      uVar3 = (**(code **)(*plVar6 + 0x130))();
      if ((uVar3 & 1) != 0) goto LAB_7101e43138;
      lVar7 = *(long *)(param_1 + 8);
    }
    FUN_7103778300(0x3f800000,lVar7,0x71042d69e0);
  }
  else {
    if (((((plVar6 == (long *)0x0) ||
          (uVar3 = (**(code **)(*plVar6 + 0x138))(plVar6), (uVar3 & 1) == 0)) ||
         ((long *)local_48[1] == (long *)0x0)) ||
        (fVar9 = (float)(**(code **)(*(long *)local_48[1] + 0x198))(), fVar9 <= 0.0)) &&
       ((param_3 & 1) != 0)) {
      if (((long *)local_48[1] == (long *)0x0) ||
         (uVar3 = (**(code **)(*(long *)local_48[1] + 0x130))(), (uVar3 & 1) == 0)) {
        FUN_710377aee0(0x3f800000,(long)&local_50);
      }
      goto LAB_7101e43148;
    }
    FUN_710377b140((long)&local_50);
  }
LAB_7101e43138:
  if (local_48 == (long *)0x0) {
    return;
  }
LAB_7101e43148:
  local_48 = (long *)0x0;
  local_50 = &PTR_FUN_710523d9e8;
  FUN_710392eb40((ulong)plVar2);
  return;
}

