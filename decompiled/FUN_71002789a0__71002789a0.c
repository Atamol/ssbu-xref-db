// addr:      71002789a0
// offset:    0x2789a0
// name:      FUN_71002789a0
// mangled:   
// signature: undefined FUN_71002789a0(void)


void FUN_71002789a0(long param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  char *pcStack_68;
  char *pcStack_60;
  undefined **ppuStack_58;
  char acStack_50 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar4 == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x308) != 0) &&
     (lVar4 = FUN_71001b52a0(*(long *)(param_1 + 0x308)), lVar4 != 0)) {
    pcStack_40 = acStack_50;
    uStack_38 = 0x10;
    acStack_50[0] = '\0';
    ppuStack_58 = &PTR_FUN_710509cc08;
    uVar5 = (**(code **)(*param_2 + 0xa0))(param_2,&DAT_7104453f9b,&ppuStack_58);
    if (((uVar5 & 1) != 0) &&
       (bVar2 = FUN_71001b4e00(pcStack_40,*(char **)(*(long *)(param_1 + 0x308) + 0x18)), !bVar2)) {
      *(undefined1 *)(param_1 + 0x321) = 1;
      FUN_71001d0a10((long *)(param_1 + 0x100));
      goto LAB_7100278b38;
    }
    ppuStack_58 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&ppuStack_58);
  }
  acStack_50[0] = '\0';
  ppuStack_58 = &PTR_FUN_710509cc08;
  pcStack_40 = acStack_50;
  uStack_38 = 0x10;
  uVar5 = (**(code **)(*param_2 + 0xa0))(param_2,"Content-Length",&ppuStack_58);
  if ((uVar5 & 1) != 0) {
    pcStack_68 = (char *)0x0;
    pcStack_60 = (char *)0x0;
    FUN_71001b2b10((long)&ppuStack_58,&pcStack_68);
    uVar5 = strtoul(pcStack_68,&pcStack_60,10);
    FUN_71001b2bf0((long)pcStack_68);
    if (((int)uVar5 != 0) && (*(int *)(param_1 + 0x270) != (int)uVar5)) {
      *(undefined1 *)(param_1 + 0x322) = 1;
      FUN_71001d0a10((long *)(param_1 + 0x100));
    }
  }
LAB_7100278b38:
  ppuStack_58 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_58);
  return;
}

