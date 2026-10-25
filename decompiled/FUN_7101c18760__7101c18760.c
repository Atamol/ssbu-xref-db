// addr:      7101c18760
// offset:    0x1c18760
// name:      FUN_7101c18760
// mangled:   
// signature: undefined __cdecl FUN_7101c18760(long param_1, undefined1 * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c18760(long param_1,undefined1 *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined **ppuVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  ushort local_44 [2];
  
  plVar13 = *(long **)(param_1 + 0x80);
  ppuVar7 = (undefined **)param_3;
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    ppuVar7 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar2 = *param_2;
  *(undefined1 *)(plVar13 + 0xd) = uVar2;
  uVar10 = *(undefined8 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((long)plVar13 + 0x74) = uVar1;
  *(undefined8 *)((long)plVar13 + 0x6c) = uVar10;
  *(undefined1 *)(plVar13 + 0xf) = uVar2;
  *(undefined4 *)((long)plVar13 + 0x84) = uVar1;
  *(undefined8 *)((long)plVar13 + 0x7c) = uVar10;
  lVar16 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  lVar14 = *(long *)(lVar16 + 0x80);
  if (*(char *)(lVar14 + 200) == '\x01') {
    if (*(char *)(lVar14 + 0x2253) != '\x01') goto LAB_7101c187fc;
  }
  else {
    *(undefined1 *)(lVar14 + 200) = 1;
LAB_7101c187fc:
    if (*(char *)(lVar14 + 0x2250) != '\0') {
      ppuVar7 = (undefined **)(ulong)*(byte *)(lVar14 + 0x227c);
      FUN_7101af4c80(lVar14,1,(ulong)ppuVar7,param_4,param_5,param_6,param_7,param_8);
      if (*(char *)(lVar14 + 200) == '\0') {
        bVar5 = false;
      }
      else {
        bVar5 = *(char *)(lVar14 + 0xc9) != '\0';
      }
      lVar11 = *(long *)(*(long *)(lVar14 + 0x2260) + 0x1b8);
      if (lVar11 != 0) {
        lVar14 = *(long *)(lVar14 + 0x2260) + 0x1b8;
        lVar9 = lVar14;
        do {
          bVar4 = *(int *)(lVar11 + 0x20) < 0;
          if (!bVar4) {
            lVar9 = lVar11;
          }
          lVar11 = *(long *)(lVar11 + (ulong)bVar4 * 8);
        } while (lVar11 != 0);
        if (((lVar9 != lVar14) && (*(int *)(lVar9 + 0x20) < 1)) &&
           (plVar15 = *(long **)(lVar9 + 0x28), plVar15 != (long *)0x0)) {
          (**(code **)(*plVar15 + 0x1f8))(plVar15,bVar5);
          ppuVar7 = (undefined **)0x0;
          (**(code **)(*plVar15 + 0x388))(plVar15,bVar5 ^ 1);
        }
      }
    }
  }
  FUN_7103395260((uint *)&local_90,DAT_71053050f0);
  FUN_7101af8e90(*(long *)(lVar16 + 0x80),(uint *)&local_90,ppuVar7,param_4,param_5,param_6,param_7,
                 param_8);
  local_88 = (long *)0x656c75725f6c656d;
  local_80 = 0x69745f6d6574695f;
  local_78 = 0x656c74;
  uVar8 = 0x811c9dc5;
  uVar12 = 0x6d;
  lVar14 = 9;
  do {
    uVar8 = uVar8 * 0x89 ^ uVar12;
    uVar12 = (uint)*(byte *)((long)&local_90 + lVar14);
    lVar14 = lVar14 + 1;
  } while (uVar12 != 0);
  local_90 = (undefined **)CONCAT44(0x13,uVar8);
  FUN_7101af90b0(*(long *)(lVar16 + 0x80),(uint *)&local_90,ppuVar7,param_4,param_5,param_6,param_7,
                 param_8);
  lVar14 = *(long *)(lVar16 + 0x80);
  if (*(int *)(lVar14 + 0x1204) == 0) {
    if (*(char *)(lVar14 + 0x2259) != '\0') goto LAB_7101c18960;
  }
  else {
    *(undefined4 *)(lVar14 + 0x1204) = 0;
LAB_7101c18960:
    if ((*(char *)(lVar14 + 0x2257) != '\0') && (*(char *)(lVar14 + 0x2259) != '\0')) {
      *(char *)(lVar14 + 0x2259) = '\0';
      FUN_71037780e0(&local_90,**(long **)(lVar14 + 0xb8) + 8,(long ****)"footer_help_out",ppuVar7,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_710377b140((long)&local_90);
      uVar3 = (ulong)local_88;
      local_90 = &PTR_FUN_710523d9e8;
      local_88 = (long *)0x0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
  }
  lVar14 = *(long *)(lVar16 + 0x80);
  FUN_710376b960(*(long *)(lVar14 + 0x2268));
  (**(code **)(**(long **)(lVar14 + 0x2268) + 0x70))(*(long **)(lVar14 + 0x2268),0);
  if (*(int *)(lVar14 + 0x11b0) == 0) {
    if (*(char *)(lVar14 + 0x2258) == '\0') goto LAB_7101c18a54;
  }
  else {
    *(undefined4 *)(lVar14 + 0x11b0) = 0;
  }
  if (*(char *)(lVar14 + 0x225a) == -1) {
    *(char *)(lVar14 + 0x225a) = '\0';
  }
  if (*(int *)(lVar14 + 0xa8) == 1) {
    *(undefined4 *)(lVar14 + 0xa0) = 0;
    *(undefined8 *)(lVar14 + 8) = 0;
    *(undefined8 *)(lVar14 + 0x10) = 0;
    *(undefined1 *)(lVar14 + 0xb4) = 0;
    *(undefined8 *)(lVar14 + 0x58) = 0x200000001;
    *(undefined8 *)(lVar14 + 0xac) = 0xffffffff00000000;
    *(undefined8 *)(lVar14 + 0xa4) = 0xffffffff00000001;
    *(undefined8 *)(lVar14 + 0x90) = 0;
    *(undefined8 *)(lVar14 + 0x98) = 0;
    *(undefined8 *)(lVar14 + 0x80) = 0;
    *(undefined8 *)(lVar14 + 0x88) = 0;
    *(undefined8 *)(lVar14 + 0x70) = 0;
    *(undefined8 *)(lVar14 + 0x78) = 0;
    *(undefined8 *)(lVar14 + 0x60) = 0;
    *(undefined8 *)(lVar14 + 0x68) = 0;
  }
LAB_7101c18a54:
  *(byte *)(plVar13 + 0x11) = (byte)param_3 & 1;
  if ((undefined8 *)plVar13[3] == (undefined8 *)plVar13[2]) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar14 = *(long *)**(undefined8 **)plVar13[2] + 8;
  FUN_7103776910(&local_90,lVar14,(long ****)"set_txt_item_name",ppuVar7,param_4,param_5,param_6,
                 param_7,param_8);
  uVar3 = (ulong)local_88;
  if (*(long **)((long)local_88 + 0x10) != (long *)0x0) {
    ppuVar7 = (undefined **)0x0;
    param_4 = (byte ****)0x0;
    local_44[0] = 0;
    local_44[1] = 0;
    FUN_71037a2270(*(long **)((long)local_88 + 0x10),local_44,0,0);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_90,lVar14,(long ****)"set_txt_item_help",ppuVar7,param_4,param_5,param_6,
                 param_7,param_8);
  uVar3 = (ulong)local_88;
  if (*(long **)((long)local_88 + 0x10) != (long *)0x0) {
    ppuVar7 = (undefined **)0x0;
    param_4 = (byte ****)0x0;
    local_44[0] = 0;
    local_44[1] = 0;
    FUN_71037a2270(*(long **)((long)local_88 + 0x10),local_44,0,0);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_90,lVar14,(long ****)"set_rep_item",ppuVar7,param_4,param_5,param_6,param_7,
                 param_8);
  uVar3 = (ulong)local_88;
  FUN_71037790a0((long)local_88,1,(long *********)ppuVar7,param_4,param_5,param_6,param_7,param_8);
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_90,lVar14,(long ****)"set_rep_item_sdw",ppuVar7,param_4,param_5,param_6,
                 param_7,param_8);
  uVar3 = (ulong)local_88;
  FUN_71037790a0((long)local_88,1,(long *********)ppuVar7,param_4,param_5,param_6,param_7,param_8);
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_90,lVar14,(long ****)"bg_category",ppuVar7,param_4,param_5,param_6,param_7,
                 param_8);
  plVar15 = local_88;
  lVar16 = *local_88;
  if (lVar16 != 0) {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar15);
  }
  FUN_7103776910(&local_90,lVar14,(long ****)"set_txt_item_category",ppuVar7,param_4,param_5,param_6
                 ,param_7,param_8);
  uVar3 = (ulong)local_88;
  if (*(long **)((long)local_88 + 0x10) != (long *)0x0) {
    local_44[0] = 0;
    local_44[1] = 0;
    FUN_71037a2270(*(long **)((long)local_88 + 0x10),local_44,0,0);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  (**(code **)(*plVar13 + 8))(plVar13,0);
  FUN_7103376980(*(undefined8 **)plVar13[8]);
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}

