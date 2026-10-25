// addr:      710027cb70
// offset:    0x27cb70
// name:      FUN_710027cb70
// mangled:   
// signature: undefined FUN_710027cb70(void)


void FUN_710027cb70(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  undefined **ppuStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  code **ppcStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar8;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar9 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar10 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar9 == 0) {
    uVar7 = 0x80010004;
  }
  else {
    if (*(int *)(param_1 + 0xd4) == 2) {
      bVar5 = FUN_71001b4e00(*(char **)(param_1 + 0x1a0),"invalidurl");
      lVar9 = param_1 + 0x3d8;
      if (!bVar5) {
        bVar5 = *(int *)(param_1 + 0x3dc) != 0;
        if (bVar5) {
          *(undefined4 *)(param_1 + 0x3dc) = 0;
          FUN_71001cde10(&ppuStack_80);
          uStack_50 = 0x1f8;
          lStack_48 = lVar9;
          uVar7 = (*(code *)ppuStack_80[6])(&ppuStack_80,&lStack_48,&uStack_50,1);
          *(undefined4 *)(param_1 + 0x5d0) = uVar7;
          FUN_71001cb860();
        }
        pcStack_78 = (code *)((ulong)pcStack_78 & 0xffffffffffffff00);
        ppcStack_68 = &pcStack_78;
        uStack_60 = 0x10;
        ppuStack_80 = &PTR_FUN_710509cc08;
        FUN_71001b47e0((long)&ppuStack_80,(char *)(param_1 + 0x1f0),-1);
        bVar6 = FUN_71001b4e00((char *)ppcStack_68,*(char **)(param_1 + 0x1a0));
        ppuStack_80 = &PTR_FUN_710509cc08;
        FUN_71001b4910((long)&ppuStack_80);
        if (!bVar6) {
          memset((char *)(param_1 + 0x3f0),0,0x1e0);
          pcStack_58 = (char *)0x0;
          FUN_71001b2b10(param_1 + 0x188,&pcStack_58);
          strncpy((char *)(param_1 + 0x3f0),pcStack_58,0x1df);
          FUN_71001b2bf0((long)pcStack_58);
          FUN_71001cde10(&ppuStack_80);
          uStack_50 = 0x1f8;
          lStack_48 = lVar9;
          uVar7 = (*(code *)ppuStack_80[6])(&ppuStack_80,&lStack_48,&uStack_50,1);
          *(undefined4 *)(param_1 + 0x5d0) = uVar7;
          FUN_71001cb860();
        }
        iVar2 = *(int *)(param_1 + 0x1b0);
        bVar4 = *(int *)(param_1 + 0x1e0) != iVar2;
        if (bVar4) {
          *(int *)(param_1 + 0x3e0) = iVar2;
          FUN_71001cde10(&ppuStack_80);
          uStack_50 = 0x1f8;
          lStack_48 = lVar9;
          uVar7 = (*(code *)ppuStack_80[6])(&ppuStack_80,&lStack_48,&uStack_50,1);
          *(undefined4 *)(param_1 + 0x5d0) = uVar7;
          FUN_71001cb860();
        }
        bVar4 = bVar4 || (!bVar6 || bVar5);
        bVar5 = *(ulong *)(param_1 + 0x180) <= *(ulong *)(param_1 + 0x1e8);
        cVar3 = *(char *)(param_1 + 0x630);
        goto joined_r0x00710027cdf4;
      }
      *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(param_1 + 0x180);
      FUN_71001cde10(&ppuStack_80);
      uStack_50 = 0x1f8;
      lStack_48 = lVar9;
      uVar7 = (*(code *)ppuStack_80[6])(&ppuStack_80,&lStack_48,&uStack_50,1);
      *(undefined4 *)(param_1 + 0x5d0) = uVar7;
      FUN_71001cb860();
      memset((char *)(param_1 + 0x3f0),0,0x1e0);
      pcStack_58 = (char *)0x0;
      FUN_71001b2b10(param_1 + 0x188,&pcStack_58);
      strncpy((char *)(param_1 + 0x3f0),pcStack_58,0x1df);
      FUN_71001b2bf0((long)pcStack_58);
      FUN_71001cde10(&ppuStack_80);
      uStack_50 = 0x1f8;
      lStack_48 = lVar9;
      uVar7 = (*(code *)ppuStack_80[6])(&ppuStack_80,&lStack_48,&uStack_50,1);
      *(undefined4 *)(param_1 + 0x5d0) = uVar7;
      FUN_71001cb860();
      *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_1 + 0x1b0);
      FUN_71001cde10(&ppuStack_80);
      uStack_50 = 0x1f8;
      lStack_48 = lVar9;
      uVar7 = (*(code *)ppuStack_80[6])(&ppuStack_80,&lStack_48,&uStack_50,1);
      *(undefined4 *)(param_1 + 0x5d0) = uVar7;
      FUN_71001cb860();
      (**(code **)(**(long **)(param_1 + 0x5f0) + 0x18))
                (*(long **)(param_1 + 0x5f0),lVar9,0,*(undefined8 *)(param_1 + 1000));
    }
    else {
      if (*(char *)(param_1 + 0x620) != '\0') {
        ppuStack_80 = *(undefined ***)(param_1 + 0x118);
        pcStack_78 = *(code **)(param_1 + 0x120);
        uStack_70 = *(undefined8 *)(param_1 + 0x128);
        goto LAB_710027cf94;
      }
      *(int *)(param_1 + 0x3dc) = *(int *)(param_1 + 0x3dc) + 1;
      FUN_71001cde10(&ppuStack_80);
      uStack_50 = 0x1f8;
      bVar5 = true;
      lStack_48 = param_1 + 0x3d8;
      uVar7 = (*(code *)ppuStack_80[6])(&ppuStack_80,&lStack_48,&uStack_50,1);
      *(undefined4 *)(param_1 + 0x5d0) = uVar7;
      FUN_71001cb860();
      bVar4 = true;
      cVar3 = *(char *)(param_1 + 0x630);
joined_r0x00710027cdf4:
      if ((cVar3 != '\0') && ((!bVar5 || (*(char *)(param_1 + 0x640) != '\0')))) {
        **(undefined1 **)(param_1 + 0x638) = 1;
      }
      if (bVar4) {
        (**(code **)(**(long **)(param_1 + 0x5f0) + 0x18))
                  (*(long **)(param_1 + 0x5f0),param_1 + 0x3d8,0,*(undefined8 *)(param_1 + 1000));
      }
      if ((!bVar5) && (*(char *)(param_1 + 0x630) == '\0')) {
        ppuStack_80 = &PTR_FUN_7104f56e28;
        pcStack_78 = FUN_710027d010;
        uStack_70 = 0;
        ppcStack_68 = (code **)&DAT_71044114cc;
        FUN_71001d3d60(param_1,(long)&ppuStack_80);
        return;
      }
    }
    uVar7 = 0x10001;
  }
  lStack_48 = CONCAT44(lStack_48._4_4_,uVar7);
  FUN_71001b4200((undefined4 *)&ppuStack_80,(undefined4 *)&lStack_48);
LAB_710027cf94:
  FUN_710027ca30(param_1,(int *)&ppuStack_80);
  return;
}

