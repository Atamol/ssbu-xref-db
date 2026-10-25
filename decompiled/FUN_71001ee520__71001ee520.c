// addr:      71001ee520
// offset:    0x1ee520
// name:      FUN_71001ee520
// mangled:   
// signature: undefined FUN_71001ee520(void)


void FUN_71001ee520(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  long *plVar5;
  ulonglong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  undefined **ppuStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined4 uStack_54;
  
  plVar5 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar10 = *puVar4;
    if (uVar10 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar10) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        goto LAB_71001ee728;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar10 * 8) + 0x10);
    }
  }
  if ((*plVar5 != 0) && (*(long *)(*plVar5 + 0x10) != 0)) {
    plVar5 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar10 = *puVar4;
      if (uVar10 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar10) goto LAB_71001ee794;
        plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar10 * 8) + 0x20);
      }
    }
    plVar5 = (long *)FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),
                                    *(uint *)(param_1 + 0xa0));
    if ((plVar5 != (long *)0x0) &&
       (FUN_71001b12a0((ulong *)&ppuStack_80), ppuStack_80 <= *(undefined ***)(param_1 + 0x138))) {
      plVar8 = &DAT_71052af128;
      if (DAT_71052af1d8 != '\0') {
        puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar10 = *puVar4;
        if (uVar10 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar10) {
LAB_71001ee794:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar10 * 8) + 0x10);
        }
      }
      lVar9 = *(long *)(param_1 + 0x148);
      if (param_1 + 0x140 != lVar9) {
        lVar7 = *(long *)(*(long *)(*plVar8 + 0x10) + 0x198);
        bVar1 = false;
        uVar10 = 1;
        do {
          uVar6 = FUN_71001f2ba0(lVar9 + 0x10,"RVCID",0);
          iVar2 = FUN_71001e85d0(lVar7,(int)uVar6);
          bVar1 = (bool)(bVar1 | iVar2 != -1);
          uVar3 = FUN_71001e48b0(lVar7,lVar9 + 0x10);
          lVar9 = *(long *)(lVar9 + 8);
          uVar10 = uVar10 & uVar3;
        } while (param_1 + 0x140 != lVar9);
        if (bVar1) {
          uStack_54 = 0x10001;
          FUN_71001b4200((undefined4 *)&ppuStack_80,&uStack_54);
          FUN_71001d0f00(plVar5,2,&ppuStack_80,1);
          FUN_71001cd870(param_1);
          return;
        }
        if (uVar10 == 0) {
          FUN_71001d6410(param_1,1);
          *(undefined4 *)(param_1 + 0x44) = 0x32;
          return;
        }
      }
    }
  }
LAB_71001ee728:
  ppuStack_80 = &PTR_FUN_7104f56e28;
  pcStack_78 = FUN_71001edb60;
  uStack_70 = 0;
  puStack_68 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&ppuStack_80);
  return;
}

