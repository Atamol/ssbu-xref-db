// addr:      710018cdc0
// offset:    0x18cdc0
// name:      FUN_710018cdc0
// mangled:   
// signature: undefined FUN_710018cdc0(void)


undefined8 FUN_710018cdc0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  lVar2 = FUN_7100161fa0(DAT_71052add68);
  lVar2 = *(long *)(lVar2 + 0x98);
  if (lVar2 == 0) {
    uVar4 = 1;
  }
  else {
    lVar3 = FUN_7100161fa0(DAT_71052add68);
    lVar6 = *(long *)(lVar3 + 0x20);
    lVar3 = FUN_7100161fa0(DAT_71052add68);
    if (lVar6 != lVar3 + 0x18) {
      do {
        if (*(long *)(lVar6 + 0x10) != lVar2) {
          bVar1 = FUN_7100190a90(DAT_71052adfc0,*(byte *)(*(long *)(lVar6 + 0x10) + 0x38));
          if (bVar1) {
            FUN_7100190af0(DAT_71052adfc0,(uint)*(byte *)(*(long *)(lVar6 + 0x10) + 0x38));
          }
          lVar3 = *(long *)(lVar6 + 0x10);
          FUN_7100187520(*(long **)(lVar3 + 0xa0));
          FUN_71001a0e00(*(long **)(lVar3 + 0xb0));
          plVar5 = *(long **)(lVar3 + 0xa8);
          if (plVar5 != (long *)0x0) {
            FUN_7100187fe0(plVar5);
            if ((int)uStack_60 == 0) {
              FUN_71000b4820((long)plVar5,0);
              goto LAB_710018ceb0;
            }
          }
          uStack_60 = 0x80000000000;
          uStack_58 = 0;
          (**(code **)(**(long **)(lVar6 + 0x10) + 0x18))(*(long **)(lVar6 + 0x10),&uStack_60);
        }
LAB_710018ceb0:
        lVar6 = *(long *)(lVar6 + 8);
        lVar3 = FUN_7100161fa0(DAT_71052add68);
      } while (lVar6 != lVar3 + 0x18);
    }
    lVar2 = DAT_71052ac580;
    plVar5 = FUN_71000bb680();
    uVar4 = 0;
    *(long *)(param_1 + 0xb8) = *(long *)(lVar2 + 0x30) + *plVar5 * 5000;
    *(char **)(param_1 + 0x40) = "JoinMeshJob::WaitDisconnectStations";
    *(code **)(param_1 + 0x30) = FUN_710018d740;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return uVar4;
}

