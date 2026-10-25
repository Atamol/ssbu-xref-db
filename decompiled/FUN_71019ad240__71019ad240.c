// addr:      71019ad240
// offset:    0x19ad240
// name:      FUN_71019ad240
// mangled:   
// signature: undefined __cdecl FUN_71019ad240(long param_1)


void FUN_71019ad240(long param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined1 **)(param_1 + 0x3f8) = &DAT_300000002;
  if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  lVar7 = DAT_710532f7b0;
  piVar3 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
  uVar8 = *(ulong *)(piVar3 + 2);
  puVar4 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0x12915a4ff6);
  if ((uVar8 & 0xff00000000000000) == 0xc100000000000000 && (uVar8 & 0xffffffffff) != 0) {
    if ((((ulong)puVar4 & 0xff00000000000000) != 0xc100000000000000 ||
        ((ulong)puVar4 & 0xffffffffff) == 0) || (((ulong)puVar4 ^ uVar8) & 0xffffffffff) != 0)
    goto LAB_71019ad318;
LAB_71019ad2dc:
    pcVar6 = "mnu_amiibo_reading_succession_plizardon_level";
    *(char **)(param_1 + 0x308) = "type_04";
    pcVar5 = "mnu_amiibo_reading_succession_plizardon";
  }
  else {
    if (((ulong)puVar4 & 0xff00000000000000) != 0xc100000000000000 ||
        ((ulong)puVar4 & 0xffffffffff) == 0) goto LAB_71019ad2dc;
LAB_71019ad318:
    pcVar6 = "mnu_amiibo_reading_succession_level";
    *(char **)(param_1 + 0x308) = "type_04";
    pcVar5 = "mnu_amiibo_reading_succession";
  }
  if (*(int *)(param_1 + 0x31c) < 2) {
    pcVar5 = pcVar6;
  }
  *(char **)(param_1 + 0x310) = pcVar5;
  *(undefined2 *)(param_1 + 800) = 0x100;
  lVar7 = *(long *)(lVar7 + 8);
  std::recursive_mutex::lock();
  *(undefined1 *)(lVar7 + 0x10a51) = 1;
  *(undefined4 *)(lVar7 + 0xa28) = 0;
  *(undefined2 *)(lVar7 + 0xa20) = 0;
  *(undefined1 *)(lVar7 + 0x10a4e) = 0;
  *(undefined4 *)(lVar7 + 0x10a4a) = 0;
  if (*(uint *)(lVar7 + 0x164) < 0x13) {
    *(undefined4 *)(lVar7 + (long)(int)*(uint *)(lVar7 + 0x164) * 4 + 0x118) = 0;
    if (*(int *)(lVar7 + 0x164) < 0x12) {
      uVar1 = *(int *)(lVar7 + 0x164) + 1;
      *(uint *)(lVar7 + 0x164) = uVar1;
      if (0x12 < uVar1) goto LAB_71019ad4ac;
      *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x118) = 0xb;
    }
    std::recursive_mutex::unlock();
    if (*(uint *)(param_1 + 0x2cc) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 0xd;
      if (*(int *)(param_1 + 0x2cc) < 0x12) {
        uVar1 = *(int *)(param_1 + 0x2cc) + 1;
        *(uint *)(param_1 + 0x2cc) = uVar1;
        if (0x12 < uVar1) goto LAB_71019ad4ac;
        *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x280) = 1;
        if (*(int *)(param_1 + 0x2cc) < 0x12) {
          uVar1 = *(int *)(param_1 + 0x2cc) + 1;
          *(uint *)(param_1 + 0x2cc) = uVar1;
          if (0x12 < uVar1) goto LAB_71019ad4ac;
          *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x280) = 0x15;
          if (*(int *)(param_1 + 0x2cc) < 0x12) {
            uVar1 = *(int *)(param_1 + 0x2cc) + 1;
            *(uint *)(param_1 + 0x2cc) = uVar1;
            if (0x12 < uVar1) goto LAB_71019ad4ac;
            *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x280) = 0x20;
          }
        }
      }
      return;
    }
  }
LAB_71019ad4ac:
                    /* WARNING: Subroutine does not return */
  abort();
}

