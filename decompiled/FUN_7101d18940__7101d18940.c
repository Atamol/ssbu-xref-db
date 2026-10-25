// addr:      7101d18940
// offset:    0x1d18940
// name:      FUN_7101d18940
// mangled:   
// signature: undefined __cdecl FUN_7101d18940(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d18940(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined4 local_90 [2];
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  long *local_48;
  
  if (*(int *)(param_1 + 0x10c) != 0) goto LAB_7101d18b64;
  FUN_71037780e0(&local_50,*(long *)(param_1 + 0x128),(long ****)"panel",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  plVar6 = local_48;
  plVar10 = (long *)local_48[1];
  if (plVar10 == (long *)0x0) {
    local_50 = &PTR_FUN_710523d9e8;
    local_48 = (long *)0x0;
    if (plVar6 != (long *)0x0) goto LAB_7101d18a80;
  }
  else {
    if ((char)local_48[2] != '\0') {
      plVar11 = *(long **)(*local_48 + 0x80);
      plVar1 = (long *)(*local_48 + 0x88);
      if (plVar11 != plVar1) {
        do {
          while( true ) {
            uVar4 = (**(code **)(*(long *)plVar11[0xd] + 0x148))();
            if (((uVar4 & 1) != 0) &&
               (uVar4 = (**(code **)(*plVar10 + 0x120))(plVar10,plVar11[0xd]), (uVar4 & 1) != 0)) {
              (**(code **)(*(long *)plVar11[0xd] + 0x178))();
              (**(code **)(*(long *)plVar11[0xd] + 0x140))((long *)plVar11[0xd],0);
            }
            plVar7 = (long *)plVar11[1];
            if ((long *)plVar11[1] == (long *)0x0) break;
            do {
              plVar11 = plVar7;
              plVar7 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
LAB_7101d18a34:
            if (plVar11 == plVar1) goto LAB_7101d18a4c;
          }
          plVar7 = plVar11 + 2;
          plVar9 = (long *)*plVar7;
          if ((long *)*plVar9 != plVar11) {
            do {
              lVar5 = *plVar7;
              plVar7 = (long *)(lVar5 + 0x10);
              plVar11 = (long *)*plVar7;
            } while (*plVar11 != lVar5);
            goto LAB_7101d18a34;
          }
          plVar11 = plVar9;
        } while (plVar9 != plVar1);
LAB_7101d18a4c:
        plVar10 = (long *)local_48[1];
      }
    }
    (**(code **)(*plVar10 + 0x188))(plVar10);
LAB_7101d18a80:
    local_48 = (long *)0x0;
    local_50 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar6);
  }
  FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0x128) + 8),0x7104421055);
  if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
     (uVar4 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x11c876e8b1,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8), (uVar4 & 1) != 0)) {
    FUN_71024076d0(local_90,0x11c876e8b1);
    if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
      piVar8 = (int *)(local_80 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = *piVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    local_78 = 0x87650000000000;
    local_68 = 0xffffffffffffffff;
    uStack_60 = 0;
    local_90[0] = 0;
    local_58 = 0;
  }
  local_88 = &PTR_FUN_7104f73d50;
  local_80 = 0;
  local_70 = 0;
LAB_7101d18b64:
  FUN_7101d20830(*(long **)(param_1 + 0x140));
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x128) + 8) + 8);
  if (((lVar5 == 0) || (plVar6 = (long *)FUN_71037964b0(lVar5,0x7104421055), plVar6 == (long *)0x0))
     || (uVar4 = (**(code **)(*plVar6 + 0x138))(), (uVar4 & 1) != 0)) {
    if (0x12 < *(uint *)(param_1 + 0x104)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4;
    *(int *)(lVar5 + 0xb8) = *(int *)(lVar5 + 0xb8) + 1;
  }
  return;
}

