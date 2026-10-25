// addr:      7100228930
// offset:    0x228930
// name:      FUN_7100228930
// mangled:   
// signature: undefined8 __cdecl FUN_7100228930(long param_1, long * param_2)


undefined8 FUN_7100228930(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  byte local_68 [16];
  undefined **local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 local_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  lVar7 = *(long *)(lVar2 + 0x18);
  if (lVar7 == lVar3) {
    *(undefined1 *)(param_1 + 8) = 1;
switchD_71002289c8_caseD_0:
    FUN_71001b76c0((long)&local_58);
  }
  else {
    lVar1 = *(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28);
    lVar2 = lVar3 + 1;
    uVar4 = *(undefined1 *)(lVar1 + lVar3);
    *(long *)(param_1 + 0x18) = lVar2;
    switch(uVar4) {
    case 0:
      goto switchD_71002289c8_caseD_0;
    case 1:
      if ((ulong)(lVar7 - lVar2) < 8) {
        uVar6 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        uVar6 = *(undefined8 *)(lVar1 + lVar2);
        *(long *)(param_1 + 0x18) = lVar3 + 9;
      }
      FUN_71001b78d0(&local_58,uVar6);
      break;
    case 2:
      if ((ulong)(lVar7 - lVar2) < 8) {
        *(undefined1 *)(param_1 + 8) = 1;
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar1 + lVar2);
        *(long *)(param_1 + 0x18) = lVar3 + 9;
      }
      FUN_71001b7930(uVar6,&local_58);
      break;
    case 3:
      FUN_71001d0670(param_1,local_68);
      FUN_71001b7940((byte *)&local_58,local_68[0]);
      break;
    case 4:
      local_50[0] = 0;
      local_40 = local_50;
      local_38 = 0x10;
      local_58 = &PTR_FUN_710509cc08;
      uVar5 = FUN_7100228650(param_1,(long)&local_58);
      if ((uVar5 & 1) != 0) {
        FUN_71001b7960((undefined8 *)local_68,(long)&local_58);
        FUN_71001b7ca0(param_2,(long *)local_68);
        FUN_71001b78a0((long *)local_68);
        local_58 = &PTR_FUN_710509cc08;
        FUN_71001b4910((long)&local_58);
        return 1;
      }
      local_58 = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_58);
      return 0;
    case 5:
      FUN_71001b04d0((undefined8 *)local_68);
      lVar2 = *(long *)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18);
      if ((ulong)(*(long *)(lVar2 + 0x18) - lVar3) < 8) {
        local_58 = (undefined **)0x0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        local_58 = *(undefined ***)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + lVar3);
        *(long *)(param_1 + 0x18) = lVar3 + 8;
      }
      FUN_71001b0580((undefined8 *)local_68,&local_58);
      FUN_71001b7b20(&local_58,(undefined8 *)local_68);
      break;
    case 6:
      if ((ulong)(lVar7 - lVar2) < 8) {
        uVar6 = 0;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      else {
        uVar6 = *(undefined8 *)(lVar1 + lVar2);
        *(long *)(param_1 + 0x18) = lVar3 + 9;
      }
      FUN_71001b78e0(&local_58,uVar6);
      break;
    default:
      goto LAB_7100228984;
    }
  }
  FUN_71001b7ca0(param_2,(long *)&local_58);
  FUN_71001b78a0((long *)&local_58);
LAB_7100228984:
  return 1;
}

