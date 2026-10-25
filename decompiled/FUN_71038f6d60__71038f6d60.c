// addr:      71038f6d60
// offset:    0x38f6d60
// name:      FUN_71038f6d60
// mangled:   
// signature: undefined __cdecl FUN_71038f6d60(long param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71038f6d60(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  char *__s1;
  undefined1 auStack_d0 [8];
  undefined *local_c8;
  char *local_c0;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_58 = *(long *)(param_1 + 0x20);
  uVar10 = (ulong)param_2;
  if (local_58 == param_1 + 0x60) {
                    /* WARNING: Subroutine does not return */
    FUN_71038f6c50(param_1,"bad argument #%d (%s)",uVar10,param_3,param_5,param_6,param_7,param_8);
  }
  FUN_71038fa260(param_1,"n",(long)auStack_d0);
  iVar3 = strcmp(local_c0,"method");
  if ((iVar3 == 0) && (uVar10 = (ulong)(param_2 - 1), param_2 - 1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_71038f6c50(param_1,"calling \'%s\' on bad self (%s)",local_c8,param_3,param_5,param_6,
                   param_7,param_8);
  }
  if (local_c8 != (undefined *)0x0) goto LAB_71038f6fac;
  uVar11 = *(long *)(param_1 + 0x10) - (**(long **)(param_1 + 0x20) + 0x10);
  FUN_71038fa260(param_1,"f",(long)auStack_d0);
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"_LOADED");
  iVar4 = (int)(uVar11 >> 4);
  iVar3 = iVar4 + 1;
  uVar5 = FUN_71038f7010(param_1,iVar3,2);
  if ((int)uVar5 == 0) {
    if (iVar4 < 0) {
      *(long *)(param_1 + 0x10) =
           *(long *)(param_1 + 0x10) + ((long)(uVar11 * 0x10000000 + 0x100000000) >> 0x1c);
    }
    else {
      uVar11 = **(long **)(param_1 + 0x20) + ((long)(uVar11 * 0x10000000) >> 0x1c) + 0x10;
      uVar6 = *(ulong *)(param_1 + 0x10);
      while (uVar6 < uVar11) {
        *(ulong *)(param_1 + 0x10) = uVar6 + 0x10;
        *(undefined4 *)(uVar6 + 8) = 0;
        uVar6 = *(ulong *)(param_1 + 0x10);
      }
      *(ulong *)(param_1 + 0x10) = uVar11;
    }
    local_c8 = &DAT_7104307a71;
    goto LAB_71038f6fac;
  }
  pfVar12 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar1 == 4) {
LAB_71038f6e78:
    __s1 = (char *)(*(long *)pfVar12 + 0x18);
  }
  else {
    if (uVar1 == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar12 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
      }
      FUN_71039080b0(param_1,pfVar12);
      goto LAB_71038f6e78;
    }
    __s1 = (char *)0x0;
  }
  iVar4 = strncmp(__s1,"_G.",3);
  if (iVar4 == 0) {
    FUN_71038f4b20(param_1,__s1 + 3);
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x10) + -0x20);
    puVar9 = puVar7;
    do {
      local_50 = *puVar9;
      uStack_48 = puVar9[1];
      uVar5 = puVar7[3];
      *puVar9 = puVar7[2];
      puVar9[1] = uVar5;
      puVar7[2] = local_50;
      puVar7[3] = uStack_48;
      bVar2 = puVar9 + 2 < puVar7;
      puVar7 = puVar7 + -2;
      puVar9 = puVar9 + 2;
    } while (bVar2);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  }
  FUN_71038f4000(param_1,-1,iVar3);
  lVar8 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar8 + -0x20;
  pfVar12 = (float *)(lVar8 + -0x30);
  uVar1 = *(uint *)(lVar8 + -0x28) & 0xf;
  if (uVar1 != 4) {
    if (uVar1 != 3) {
      local_c8 = (undefined *)0x0;
      goto LAB_71038f6fac;
    }
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_71038fec40(param_1);
      pfVar12 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
    }
    FUN_71039080b0(param_1,pfVar12);
  }
  local_c8 = (undefined *)(*(long *)pfVar12 + 0x18);
LAB_71038f6fac:
                    /* WARNING: Subroutine does not return */
  FUN_71038f6c50(param_1,"bad argument #%d to \'%s\' (%s)",uVar10,local_c8,param_3,param_6,param_7,
                 param_8);
}

