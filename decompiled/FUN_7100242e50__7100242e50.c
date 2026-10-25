// addr:      7100242e50
// offset:    0x242e50
// name:      FUN_7100242e50
// mangled:   
// signature: ulong __cdecl FUN_7100242e50(long param_1, long * * * * param_2)


ulong FUN_7100242e50(long param_1,long ****param_2)

{
  long *********ppppppppplVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long ********pppppppplVar8;
  long *plVar9;
  long *********ppppppppplVar10;
  long *********ppppppppplVar11;
  long ********local_78;
  long ********local_70;
  long local_68;
  
  local_78 = (long ********)&local_78;
  local_68 = 0;
  plVar9 = &DAT_71052af128;
  local_70 = local_78;
  if (DAT_71052af1d8 == '\0') {
LAB_7100242ed8:
    if (*plVar9 != 0) {
      lVar5 = *(long *)(*plVar9 + 0x10);
      goto LAB_7100242f04;
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar4;
    if (uVar3 == 0) goto LAB_7100242ed8;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
      goto LAB_7100242ed8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_7100242f04:
  FUN_71001e1010(lVar5,(long *)&local_78);
  uVar6 = FUN_71001f45d0(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x30) + 0x108,
                         "prudp");
  uVar7 = uVar6;
  ppppppppplVar10 = (long *********)local_70;
  do {
    while( true ) {
      if (&local_78 == ppppppppplVar10) {
        if (&local_78 != (long *********)param_2) {
          uVar7 = FUN_7100246b20((long *)param_2,(long)local_70,(long)&local_78);
        }
        if (local_68 != 0) {
          pppppppplVar8 = (long ********)*local_70;
          pppppppplVar8[1] = local_78[1];
          *local_78[1] = (long ******)pppppppplVar8;
          local_68 = 0;
          ppppppppplVar10 = (long *********)local_70;
          while (ppppppppplVar10 != &local_78) {
            ppppppppplVar11 = (long *********)ppppppppplVar10[1];
            (*(code *)*ppppppppplVar10[2])();
            uVar7 = FUN_71001b1870((long)ppppppppplVar10);
            ppppppppplVar10 = ppppppppplVar11;
          }
        }
        return uVar7;
      }
      ppppppppplVar11 = ppppppppplVar10 + 2;
      iVar2 = FUN_71001e32f0((long)ppppppppplVar11);
      if (iVar2 == 0) break;
      pppppppplVar8 = *ppppppppplVar10;
      ppppppppplVar1 = (long *********)ppppppppplVar10[1];
      pppppppplVar8[1] = (long *******)ppppppppplVar1;
      *ppppppppplVar10[1] = (long *******)pppppppplVar8;
      local_68 = local_68 + -1;
      (*(code *)*ppppppppplVar10[2])(ppppppppplVar11);
      uVar7 = FUN_71001b1870((long)ppppppppplVar10);
      ppppppppplVar10 = ppppppppplVar1;
    }
    FUN_71001eea00((long)ppppppppplVar11,(ulong)*(byte *)(uVar6 + 0x20));
    FUN_71001f2d60((long)ppppppppplVar11,0);
    FUN_71001f2db0((long)ppppppppplVar11,0);
    FUN_71001f2e00((long)ppppppppplVar11,0);
    FUN_71001f2e30((long)ppppppppplVar11,0);
    FUN_71001f3090((long)ppppppppplVar11);
    plVar9 = &DAT_71052af128;
    if (DAT_71052af1d8 == '\0') {
LAB_7100243020:
      if (*plVar9 == 0) goto LAB_7100243044;
      lVar5 = *(long *)(*plVar9 + 0x10);
    }
    else {
      puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar3 = *puVar4;
      if (uVar3 == 0) goto LAB_7100243020;
      if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
        goto LAB_7100243020;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100243044:
      lVar5 = 0;
    }
    uVar3 = FUN_71001ef910(lVar5,(long)ppppppppplVar11);
    uVar7 = (ulong)uVar3;
    ppppppppplVar10 = (long *********)ppppppppplVar10[1];
  } while( true );
}

