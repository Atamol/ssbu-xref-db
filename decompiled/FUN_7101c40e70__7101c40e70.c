// addr:      7101c40e70
// offset:    0x1c40e70
// name:      FUN_7101c40e70
// mangled:   
// signature: undefined __cdecl FUN_7101c40e70(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c40e70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined **local_40;
  ulong local_38;
  
  plVar5 = (long *)**(undefined8 **)(param_1 + 0x118);
  if (*(int *)(param_1 + 0x10c) == 0) {
    FUN_7103776910(&local_40,(long)(plVar5 + 1),(long ****)"set_txt_help_00",param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    FUN_710377a120((long)&local_40,"mnu_vr_calibration_start",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar3 = local_38;
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_7103778300(0x3f800000,plVar5[2],0x710439d424);
    FUN_7103778300(0x3f800000,plVar5[2],0x7104433949);
    FUN_7103778300(0x3f800000,plVar5[2],0x710426ffa7);
    FUN_7103778300(0x3f800000,plVar5[2],0x71044223a7);
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x118),1);
    FUN_7103771a80((long *)(param_1 + 0x120),0,1);
    (**(code **)(**(long **)(param_1 + 0x120) + 0x60))(*(long **)(param_1 + 0x120),1);
    (**(code **)(**(long **)(param_1 + 0x120) + 0x70))(*(long **)(param_1 + 0x120),1);
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x120) + 0x280) != '\0') {
      if ((*(int *)(param_1 + 0x150) != -1) || (*(int *)(param_1 + 0x154) != -1)) {
        FUN_710373b540(param_1 + 0x128,0);
        *(undefined4 *)(param_1 + 0x128) = 0;
        FUN_71039602c0(param_1 + 0x130);
        *(undefined ***)(param_1 + 0x130) = &PTR_FUN_7104f73d50;
        if ((*(long *)(param_1 + 0x138) != 0) &&
           ((DAT_7106dd53a8 == '\x01' && (*(int *)(param_1 + 0x140) == DAT_7106dd53ac)))) {
          piVar4 = (int *)(*(long *)(param_1 + 0x138) + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar2) {
              *piVar4 = *piVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        *(undefined8 *)(param_1 + 0x140) = 0;
        *(undefined8 *)(param_1 + 0x148) = 0;
        *(undefined8 *)(param_1 + 0x130) = 0;
        *(undefined8 *)(param_1 + 0x138) = 0;
        *(undefined4 *)(param_1 + 0x140) = 0;
        *(undefined4 *)(param_1 + 0x144) = 0x876500;
        *(undefined1 *)(param_1 + 0x148) = 0;
        *(undefined4 *)(param_1 + 0x164) = 0;
        *(undefined ***)(param_1 + 0x130) = &PTR_FUN_7104f73d30;
        *(undefined8 *)(param_1 + 0x138) = 0;
        *(undefined8 *)(param_1 + 0x150) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x158) = 0;
      }
      if ((*(int *)(param_1 + 400) != -1) || (*(int *)(param_1 + 0x194) != -1)) {
        FUN_710373b540(param_1 + 0x168,0);
        *(undefined4 *)(param_1 + 0x168) = 0;
        FUN_71039602c0(param_1 + 0x170);
        *(undefined ***)(param_1 + 0x170) = &PTR_FUN_7104f73d50;
        if ((*(long *)(param_1 + 0x178) != 0) &&
           ((DAT_7106dd53a8 == '\x01' && (*(int *)(param_1 + 0x180) == DAT_7106dd53ac)))) {
          piVar4 = (int *)(*(long *)(param_1 + 0x178) + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar2) {
              *piVar4 = *piVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        *(undefined8 *)(param_1 + 0x180) = 0;
        *(undefined8 *)(param_1 + 0x188) = 0;
        *(undefined8 *)(param_1 + 0x170) = 0;
        *(undefined8 *)(param_1 + 0x178) = 0;
        *(undefined4 *)(param_1 + 0x180) = 0;
        *(undefined4 *)(param_1 + 0x184) = 0x876500;
        *(undefined1 *)(param_1 + 0x188) = 0;
        *(undefined4 *)(param_1 + 0x1a4) = 0;
        *(undefined ***)(param_1 + 0x170) = &PTR_FUN_7104f73d30;
        *(undefined8 *)(param_1 + 0x178) = 0;
        *(undefined8 *)(param_1 + 400) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x198) = 0;
      }
      *(undefined4 *)(param_1 + 0x1f8) = 2;
      if (*(uint *)(param_1 + 0x104) < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4 + 0xb8) = 7;
        FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x118),0);
        return;
      }
LAB_7101c41174:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(int *)(*(long *)(param_1 + 0x120) + 0x25c) == 0) {
      FUN_71037760f0(*plVar5,0);
      if (0x12 < *(uint *)(param_1 + 0x104)) goto LAB_7101c41174;
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4 + 0xb8) = 4;
    }
  }
  return;
}

