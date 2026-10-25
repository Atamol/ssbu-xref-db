// addr:      71001a2190
// offset:    0x1a2190
// name:      FUN_71001a2190
// mangled:   
// signature: undefined FUN_71001a2190(void)


undefined8 FUN_71001a2190(long *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  FUN_7100192e90((int *)&lStack_68,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
  lVar7 = DAT_71052adfc0;
  if ((int)lStack_68 == aiStack_50[0]) {
    uVar5 = 0;
    param_1[6] = (long)FUN_71001a1d80;
    param_1[7] = 0;
    param_1[8] = (long)"ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    bVar1 = FUN_7100193110(DAT_71052adfc0);
    FUN_7100190d10(lVar7,2,(uint)bVar1);
    plVar6 = (long *)FUN_7100161fa0(DAT_71052add68);
    uVar2 = FUN_7100193110(DAT_71052adfc0);
    lVar7 = (**(code **)(*plVar6 + 0x48))(plVar6,uVar2);
    uStack_60 = *(undefined8 *)(lVar7 + 0x40);
    lStack_68 = CONCAT44(lStack_68._4_4_,2);
    uStack_58 = uStack_60;
    FUN_7100157500(aiStack_50,DAT_71052add68 + 0x10,&lStack_68);
    bVar3 = FUN_71001931d0(DAT_71052adfc0);
    if (bVar3) {
      plVar6 = (long *)FUN_7100193580(DAT_71052adfc0);
      FUN_7100198450(plVar6,1,1);
      *(undefined1 *)(DAT_71052adfc0 + 0xaa) = 1;
    }
    lStack_68 = 0;
    FUN_71000bb5d0(&lStack_68);
    param_1[0xf] = lStack_68 - param_1[0xe];
    iVar4 = FUN_7100191bb0(DAT_71052adfc0);
    *(char *)((long)param_1 + 0x82) = (char)iVar4;
    (**(code **)(*param_1 + 0x68))(param_1);
    FUN_7100193530();
    uVar5 = 1;
  }
  return uVar5;
}

