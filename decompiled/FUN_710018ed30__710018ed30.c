// addr:      710018ed30
// offset:    0x18ed30
// name:      FUN_710018ed30
// mangled:   
// signature: undefined FUN_710018ed30(void)


undefined8 FUN_710018ed30(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar2 = FUN_7100161fa0(DAT_71052add68);
  lVar2 = *(long *)(lVar2 + 0x98);
  if (lVar2 == 0) {
    pcVar6 = FUN_710018ee90;
    pcVar7 = "LeaveMeshJob::LeaveSuccess";
  }
  else {
    lVar3 = FUN_7100161fa0(DAT_71052add68);
    lVar8 = *(long *)(lVar3 + 0x20);
    pcVar6 = FUN_710018efd0;
    lVar3 = lVar3 + 0x18;
    if (lVar8 == lVar3) {
      pcVar7 = "LeaveMeshJob::WaitLeavingProcess";
    }
    else {
      pcVar7 = "LeaveMeshJob::WaitLeavingProcess";
LAB_710018eda0:
      do {
        if (*(long *)(lVar8 + 0x10) != lVar2) {
          bVar1 = FUN_7100190a90(DAT_71052adfc0,*(byte *)(*(long *)(lVar8 + 0x10) + 0x38));
          if (bVar1) {
            FUN_7100190af0(DAT_71052adfc0,(uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x38));
          }
          plVar4 = *(long **)(lVar8 + 0x10);
          plVar5 = (long *)plVar4[0x15];
          if (plVar5 != (long *)0x0) {
            FUN_7100187fe0(plVar5);
            if ((int)uStack_70 == 0) {
              FUN_71000b4820((long)plVar5,0);
              lVar8 = *(long *)(lVar8 + 8);
              if (lVar8 == lVar3) break;
              goto LAB_710018eda0;
            }
            plVar4 = *(long **)(lVar8 + 0x10);
          }
          uStack_70 = 0x80000000000;
          uStack_68 = 0;
          (**(code **)(*plVar4 + 0x18))(plVar4,&uStack_70);
        }
        lVar8 = *(long *)(lVar8 + 8);
      } while (lVar8 != lVar3);
    }
  }
  *(code **)(param_1 + 0x30) = pcVar6;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar7;
  return 0;
}

