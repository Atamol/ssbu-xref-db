// addr:      7100263aa0
// offset:    0x263aa0
// name:      FUN_7100263aa0
// mangled:   
// signature: undefined FUN_7100263aa0(void)


/* WARNING: Removing unreachable block (ram,0x007100263da0) */
/* WARNING: Removing unreachable block (ram,0x007100263db4) */

void FUN_7100263aa0(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  uint *puVar9;
  undefined4 uVar10;
  code *pcVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  int iStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  bVar5 = FUN_71001ccd00(param_3);
  if (!bVar5) {
    uVar10 = 0x8001000d;
    goto LAB_7100263e28;
  }
  uVar6 = (**(code **)(*param_2 + 0x48))(param_2,param_3);
  if ((uVar6 & 1) == 0) {
    uStack_68 = CONCAT44(uStack_68._4_4_,0x80010004);
    FUN_71001b4200((undefined4 *)auStack_80,(undefined4 *)&uStack_68);
    FUN_71001d0c90((long)param_3,auStack_80);
    uStack_68 = CONCAT71(uStack_68._1_7_,1);
    FUN_71001b4220((undefined4 *)param_1,(char *)&uStack_68);
    return;
  }
  uVar7 = (**(code **)(*param_2 + 0x388))(param_2);
  if (param_3[0x17] == 0) {
    plVar8 = FUN_71001af850(0x648);
  }
  else {
    uVar7 = *(undefined8 *)(param_3[0x17] + 0x10);
    plVar8 = FUN_71001af850(0x648);
  }
  if (plVar8 != (long *)0x0) {
    FUN_71001d38d0(plVar8,2);
    plVar8[0x15] = 0;
    plVar8[0x16] = 0;
    *(undefined1 *)(plVar8 + 0x17) = 1;
    *(undefined4 *)((long)plVar8 + 0xbc) = 0;
    *(undefined4 *)(plVar8 + 0x14) = 0;
    *plVar8 = (long)&PTR_FUN_7104f5f318;
    FUN_710022e6b0(plVar8 + 0x18,0);
    *(undefined1 *)(plVar8 + 0x32) = 0;
    plVar8[0x30] = 0;
    plVar8[0x31] = (long)&PTR_FUN_710509cc08;
    plVar8[0x34] = (long)(plVar8 + 0x32);
    plVar8[0x35] = 0x10;
    FUN_71001b47e0((long)(plVar8 + 0x31),"",-1);
    *(undefined4 *)(plVar8 + 0x36) = 0;
    plVar8[0x37] = 0;
    plVar8[0x38] = 0;
    plVar8[0x39] = 0;
    plVar8[0x3a] = 0;
    memset(plVar8 + 0x3b,0,0x200);
    memset(plVar8 + 0x7b,0,0x200);
    plVar8[0xbb] = 0;
    plVar8[0xbc] = 0;
    plVar8[0xbd] = 0;
    plVar8[0xbe] = 0;
    plVar8[0xbf] = 0;
    plVar8[0xc0] = 0;
    plVar8[0xc1] = 0;
    plVar8[0xc2] = 0;
    plVar8[0xc3] = 0;
    *(undefined1 *)(plVar8 + 0xc4) = 0;
    plVar8[0xc5] = 0;
    *(undefined1 *)(plVar8 + 0xc6) = 0;
    plVar8[199] = 0;
    *(undefined1 *)(plVar8 + 200) = 0;
  }
  (**(code **)(*plVar8 + 0x70))
            (&iStack_98,plVar8,(int)param_3[3],param_2 + 0x17,(int)param_2[0x18],uVar7,param_4,
             param_5,param_6);
  pcVar11 = FUN_710170d030;
  if (iStack_98 < 0) {
    pcVar11 = (code *)0x0;
  }
  if (pcVar11 == (code *)0x0) {
    uStack_60 = uStack_90;
    uStack_58 = uStack_88;
    FUN_71001d0f00(param_3,3,&uStack_68,1);
    plVar14 = plVar8 + 1;
    iVar13 = (int)*plVar14;
    iVar4 = (int)*plVar14 + -1;
    if (iVar13 == (int)*plVar14) {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
      while (cVar3 != '\0') {
LAB_7100263d7c:
        while( true ) {
          iVar1 = (int)*plVar14;
          iVar4 = iVar13 + -1;
          if (iVar1 == iVar13) break;
          ClearExclusiveLocal();
          iVar13 = iVar1;
        }
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        iVar13 = iVar1;
        if (bVar5) {
          *(int *)plVar14 = iVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      }
      if ((iVar4 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar8 + 0xc) = 1;
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      param_1[2] = uStack_88;
      *param_1 = CONCAT44(uStack_94,iStack_98);
      param_1[1] = uStack_90;
      return;
    }
    ClearExclusiveLocal();
    goto LAB_7100263d7c;
  }
  plVar14 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100263c98:
    if ((*plVar14 == 0) || (lVar12 = *(long *)(*plVar14 + 0x10), lVar12 == 0)) goto LAB_7100263e14;
    lVar12 = *(long *)(lVar12 + 0x10);
  }
  else {
    puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar9;
    if (uVar2 == 0) goto LAB_7100263c98;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar14 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_7100263c98;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100263e14:
    lVar12 = 0;
  }
  FUN_71001ccdf0(lVar12,(long)plVar8,0);
  uVar10 = 0x10001;
LAB_7100263e28:
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar10);
  FUN_71001b4200((undefined4 *)param_1,(undefined4 *)&uStack_68);
  return;
}

