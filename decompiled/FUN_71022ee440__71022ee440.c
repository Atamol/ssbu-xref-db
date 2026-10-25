// addr:      71022ee440
// offset:    0x22ee440
// name:      FUN_71022ee440
// mangled:   
// signature: undefined __cdecl FUN_71022ee440(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71022ee440(long *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 local_b0;
  byte ***local_78;
  bool local_70;
  undefined8 local_68;
  byte local_60 [64];
  
  if (*(int *)((long)param_1 + 0x284) == 0) {
    lVar5 = *param_1;
    if (*(int *)(lVar5 + 0x44) == -0x185a3cb6) {
      iVar2 = strcmp((char *)(lVar5 + 0x4c),"AmiiboReadFigureScene");
      local_70 = iVar2 != 0;
    }
    else {
      local_70 = true;
    }
    uVar3 = 0x811c9dc5;
    uStack_b8 = 0x64456f6269696d41;
    local_b0 = 0x656e6563537469;
    local_78 = (byte ***)&PTR_FUN_71050b67e8;
    uVar9 = 0x41;
    lVar6 = 9;
    uVar10 = uVar3;
    do {
      uVar10 = uVar10 * 0x89 ^ uVar9;
      uVar9 = (uint)*(byte *)((long)&local_c0 + lVar6);
      lVar6 = lVar6 + 1;
    } while (uVar9 != 0);
    _local_c0 = CONCAT44(0xf,uVar10);
    lVar6 = *(long *)(lVar5 + 0x38);
    if (lVar6 == 0) {
      local_60[0] = 0;
      local_68 = (long ***)0x0;
    }
    else {
      uVar7 = 0;
      while( true ) {
        pbVar8 = (byte *)(lVar6 + 0x10 + uVar7);
        bVar1 = *pbVar8;
        if (bVar1 == 0) break;
        local_60[uVar7] = bVar1;
        if (0x3e < (int)uVar7 + 1U) {
          uVar7 = (ulong)((int)uVar7 + 1);
          break;
        }
        bVar1 = pbVar8[1];
        if (bVar1 == 0) {
          uVar7 = uVar7 + 1;
          break;
        }
        local_60[uVar7 + 1] = bVar1;
        uVar7 = uVar7 + 2;
      }
      local_60[uVar7 & 0xffffffff] = 0;
      uVar10 = (uint)local_60[0];
      local_68 = (long ***)(uVar7 << 0x20);
      if (local_60[0] != 0) {
        pbVar8 = local_60;
        do {
          pbVar8 = pbVar8 + 1;
          uVar3 = uVar3 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar8;
        } while (uVar10 != 0);
      }
      local_68 = (long ***)CONCAT44((int)uVar7,uVar3);
    }
    FUN_71037266d0(*(long *)(lVar5 + 0x20),(undefined8 *)&local_c0,(long ****)&local_68,&local_78,
                   param_5,param_6,param_7,param_8);
    *(undefined4 *)(lVar5 + 0x30) = 1;
  }
  else {
    lVar5 = *(long *)(*param_1 + 0x28);
    if (((*(long *)(lVar5 + 0x60) == 0) && (*(long *)(lVar5 + 0x30) == *(long *)(lVar5 + 0x38))) &&
       (*(long *)(*(long *)(*param_1 + 0x20) + 0x10) == 0)) {
      FUN_710323b9e0(param_1[0x53],param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      switch(*(undefined4 *)(*param_1 + 0x40)) {
      case 1:
        if (0x12 < *(uint *)((long)param_1 + 0x27c)) {
LAB_71022ee734:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x27c) * 4 + 0x230) = 7
        ;
        if (0x11 < *(int *)((long)param_1 + 0x27c)) {
          return;
        }
        uVar10 = *(int *)((long)param_1 + 0x27c) + 1;
        *(uint *)((long)param_1 + 0x27c) = uVar10;
        if (0x12 < uVar10) goto LAB_71022ee734;
        lVar5 = (long)param_1 + (long)(int)uVar10 * 4;
        uVar4 = 0xe;
        break;
      case 2:
        if (0x12 < *(uint *)((long)param_1 + 0x27c)) goto LAB_71022ee734;
        lVar5 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x27c) * 4;
        uVar4 = 7;
        break;
      default:
        goto switchD_71022ee4b0_caseD_3;
      case 4:
        *(undefined4 *)(param_1 + 0x54) = 1;
        if (0x12 < *(uint *)((long)param_1 + 0x27c)) goto LAB_71022ee734;
        *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x27c) * 4 + 0x230) = 1
        ;
        if (0x11 < *(int *)((long)param_1 + 0x27c)) {
          return;
        }
        uVar10 = *(int *)((long)param_1 + 0x27c) + 1;
        *(uint *)((long)param_1 + 0x27c) = uVar10;
        if (0x12 < uVar10) goto LAB_71022ee734;
        lVar5 = (long)param_1 + (long)(int)uVar10 * 4;
        uVar4 = 5;
        break;
      case 5:
        if (0x12 < *(uint *)((long)param_1 + 0x27c)) goto LAB_71022ee734;
        *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x27c) * 4 + 0x230) =
             0xd;
        if (0x11 < *(int *)((long)param_1 + 0x27c)) {
          return;
        }
        uVar10 = *(int *)((long)param_1 + 0x27c) + 1;
        *(uint *)((long)param_1 + 0x27c) = uVar10;
        if (0x12 < uVar10) goto LAB_71022ee734;
        lVar5 = (long)param_1 + (long)(int)uVar10 * 4;
        uVar4 = 0xc;
        break;
      case 6:
        if (0x12 < *(uint *)((long)param_1 + 0x27c)) goto LAB_71022ee734;
        lVar5 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x27c) * 4;
        uVar4 = 8;
        break;
      case 7:
        if (0x12 < *(uint *)((long)param_1 + 0x27c)) goto LAB_71022ee734;
        lVar5 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x27c) * 4;
        uVar4 = 0x10;
      }
      *(undefined4 *)(lVar5 + 0x230) = uVar4;
    }
  }
switchD_71022ee4b0_caseD_3:
  return;
}

