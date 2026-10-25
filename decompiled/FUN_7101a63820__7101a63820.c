// addr:      7101a63820
// offset:    0x1a63820
// name:      FUN_7101a63820
// mangled:   
// signature: undefined __cdecl FUN_7101a63820(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a63820(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  undefined4 local_70 [4];
  long local_60;
  int local_58;
  
  lVar4 = DAT_710532f820;
  if (*(int *)(param_1 + 0x134) == 0) {
    bVar2 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),0x58ffff1ab727f973);
    if (bVar2) {
      FUN_71032edf70(*(uint **)(lVar4 + 0x10),0x58ffff1ab727f973);
      FUN_71032f1bb0(*(long *)(lVar4 + 8),*(uint **)(lVar4 + 0x10),param_3,param_4,param_5,param_6,
                     param_7,param_8);
    }
    else {
      *(undefined4 *)(*(long *)(lVar4 + 8) + 0x118) = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x158) + 0x70))(*(long **)(param_1 + 0x158),0);
    (**(code **)(**(long **)(param_1 + 0x158) + 0x60))(*(long **)(param_1 + 0x158),0);
    (**(code **)(**(long **)(param_1 + 400) + 0x70))(*(long **)(param_1 + 400),0);
    (**(code **)(**(long **)(param_1 + 400) + 0x60))(*(long **)(param_1 + 400),0);
    if (*(char *)(param_1 + 0x280) != '\0') {
      lVar4 = *(long *)(param_1 + 0x278);
      if (*(char *)(lVar4 + 0x90) != '\0') {
        *(undefined4 *)(lVar4 + 0xa0) = *(undefined4 *)(lVar4 + 0xa4);
        if (*(long *)(lVar4 + 0x88) != 0) {
          FUN_710373b540(*(long *)(lVar4 + 0x88),0);
          uVar6 = *(ulong *)(lVar4 + 0x88);
          *(undefined8 *)(lVar4 + 0x88) = 0;
          if (uVar6 != 0) {
            *(undefined ***)(uVar6 + 8) = &PTR_FUN_7104f73d50;
            if (((*(long *)(uVar6 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
               (*(int *)(uVar6 + 0x18) == DAT_7106dd53ac)) {
              piVar5 = (int *)(*(long *)(uVar6 + 0x10) + 0x38);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar2) {
                  *piVar5 = *piVar5 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            *(undefined8 *)(uVar6 + 0x10) = 0;
            *(undefined1 *)(uVar6 + 0x20) = 0;
            FUN_710392eb40(uVar6);
          }
        }
      }
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x148) + 0x10),0x71043bede9);
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x148) + 0x10),0x7104307f9d);
      *(undefined1 *)(param_1 + 0x280) = 0;
    }
  }
  else {
    lVar4 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x148) + 0x600);
    if ((*(char *)(lVar4 + 0x4aa) != '\0') &&
       (((*(byte *)(lVar4 + 0x1ac) >> 1 & 1) != 0 || ((*(byte *)(lVar4 + 0x1a8) >> 1 & 1) != 0)))) {
      lVar4 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar4 + 0x48) - *(long *)(lVar4 + 0x40) >> 3) < 4) {
        uVar6 = 0;
        cVar1 = *(char *)(lVar4 + 0x191);
      }
      else {
        uVar6 = *(ulong *)(*(long *)(lVar4 + 0x40) + 0x18);
        cVar1 = *(char *)(lVar4 + 0x191);
      }
      if (((cVar1 == '\0') &&
          (uVar3 = FUN_7103313f20(lVar4,uVar6,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                  param_7,param_8), (uVar3 & 1) != 0)) &&
         ((FUN_71024076d0(local_70,uVar6), local_60 != 0 &&
          ((DAT_7106dd53a8 == '\x01' && (local_58 == DAT_7106dd53ac)))))) {
        piVar5 = (int *)(local_60 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined4 *)(param_1 + 0x164) = 1;
    }
  }
  return;
}

