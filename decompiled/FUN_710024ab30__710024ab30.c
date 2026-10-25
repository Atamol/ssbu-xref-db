// addr:      710024ab30
// offset:    0x24ab30
// name:      FUN_710024ab30
// mangled:   
// signature: undefined __cdecl FUN_710024ab30(undefined8 * param_1)


void FUN_710024ab30(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  
  FUN_7100234fb0(param_1,0xc);
  *param_1 = &PTR_FUN_7104f5cb88;
  FUN_710024d230(param_1 + 4,0x15);
  FUN_710024d4f0(param_1 + 0x16,0x32);
  nn::util::ReferSymbol("SDK MW+Nintendo+NEX_MM-4_6_13");
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710024abd8:
    if ((*plVar6 != 0) && (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_710024ac0c;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710024abd8;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710024abd8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_710024ac0c:
  plVar6 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  (**(code **)(DAT_71052b59b8 + 0x10))(&DAT_71052b59b8);
  iVar8 = DAT_71052b59b0;
  if ((DAT_71052b59b0 == 0) &&
     (DAT_71052b5a48 = FUN_71001af850(0x18), iVar8 = DAT_71052b59b0,
     DAT_71052b5a48 != (undefined8 *)0x0)) {
    *DAT_71052b5a48 = DAT_71052b5a48;
    DAT_71052b5a48[1] = DAT_71052b5a48;
    DAT_71052b5a48[2] = 0;
    iVar8 = DAT_71052b59b0;
  }
  DAT_71052b5a50 = &DAT_71052b59a8;
  DAT_71052b59b0 = iVar8 + 1;
  (**(code **)(DAT_71052b59b8 + 0x20))(&DAT_71052b59b8);
  if (iVar8 == 0) {
    plVar3 = FUN_71001af850(0x60);
    if (plVar3 == (long *)0x0) {
      FUN_710024b170(&DAT_71052b59a8,(long *)0x0);
      plVar3 = FUN_71001af850(200);
    }
    else {
      *(undefined1 *)(plVar3 + 1) = 0;
      plVar3[7] = (long)&PTR_FUN_710509cc08;
      *(undefined1 *)(plVar3 + 8) = 0;
      *(undefined4 *)((long)plVar3 + 0xc) = 0;
      *(undefined4 *)(plVar3 + 4) = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      *plVar3 = (long)&PTR_FUN_7104f5cc18;
      plVar3[10] = (long)(plVar3 + 8);
      plVar3[0xb] = 0x10;
      *(undefined8 *)((long)plVar3 + 0x24) = 1;
      *(undefined8 *)((long)plVar3 + 0x2c) = 0x200;
      FUN_71001b3cb0((long)(plVar3 + 7),"");
      uVar1 = FUN_710024b170(&DAT_71052b59a8,plVar3);
      if ((uVar1 & 1) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      plVar3 = FUN_71001af850(200);
    }
    if (plVar3 != (long *)0x0) {
      *(undefined1 *)(plVar3 + 1) = 0;
      plVar3[7] = (long)&PTR_FUN_710509cc08;
      *(undefined1 *)(plVar3 + 8) = 0;
      plVar3[10] = (long)(plVar3 + 8);
      plVar3[0xb] = 0x10;
      plVar3[2] = 0;
      plVar3[3] = 0;
      *(undefined4 *)(plVar3 + 4) = 0;
      *(undefined8 *)((long)plVar3 + 0x2c) = 0x200;
      *(undefined4 *)((long)plVar3 + 0xc) = 0;
      *plVar3 = (long)&PTR_FUN_7104f5cc18;
      *(undefined8 *)((long)plVar3 + 0x24) = 1;
      FUN_71001b3cb0((long)(plVar3 + 7),"");
      *(undefined1 *)(plVar3 + 0xc) = 0;
      *plVar3 = (long)&PTR_FUN_7104f5cea8;
      plVar7 = plVar3 + 0xd;
      *plVar7 = (long)&PTR_FUN_710523be40;
      *(undefined4 *)(plVar3 + 0xe) = 1;
      *(undefined1 *)((long)plVar3 + 0x74) = 0;
      *plVar7 = (long)&PTR_FUN_7104f56018;
      uVar4 = FUN_71001cf750();
      FUN_71001cf760((long)plVar7,uVar4,0);
      *plVar3 = (long)&PTR_FUN_7104f5cff8;
      plVar3[0x14] = (long)&PTR_FUN_710509cc08;
      *(undefined1 *)(plVar3 + 0x15) = 0;
      plVar3[0x17] = (long)(plVar3 + 0x15);
      plVar3[0x18] = 0x10;
      FUN_71001b47e0((long)(plVar3 + 0x14),"DynamicGathering",-1);
    }
    uVar1 = FUN_710024b170(&DAT_71052b59a8,plVar3);
    if (((uVar1 & 1) == 0) && (plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    plVar3 = FUN_71001af850(0x68);
    if (plVar3 != (long *)0x0) {
      *(undefined1 *)(plVar3 + 1) = 0;
      plVar3[7] = (long)&PTR_FUN_710509cc08;
      *(undefined1 *)(plVar3 + 8) = 0;
      *(undefined4 *)((long)plVar3 + 0xc) = 0;
      *(undefined4 *)(plVar3 + 4) = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      *plVar3 = (long)&PTR_FUN_7104f5cc18;
      plVar3[10] = (long)(plVar3 + 8);
      plVar3[0xb] = 0x10;
      *(undefined8 *)((long)plVar3 + 0x24) = 1;
      *(undefined8 *)((long)plVar3 + 0x2c) = 0x200;
      FUN_71001b3cb0((long)(plVar3 + 7),"");
      *(undefined1 *)(plVar3 + 0xc) = 0;
      *plVar3 = (long)&PTR_FUN_7104f5d068;
    }
    uVar1 = FUN_710024b170(&DAT_71052b59a8,plVar3);
    if (((uVar1 & 1) == 0) && (plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00710024af08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}

