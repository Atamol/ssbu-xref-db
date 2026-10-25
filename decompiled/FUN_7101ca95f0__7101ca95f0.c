// addr:      7101ca95f0
// offset:    0x1ca95f0
// name:      FUN_7101ca95f0
// mangled:   
// signature: undefined __cdecl FUN_7101ca95f0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007101ca9870) */

void FUN_7101ca95f0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  ushort *puVar7;
  undefined8 extraout_x1_00;
  long ****pppplVar8;
  byte ****ppppbVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  byte bVar17;
  undefined8 uStack_2710;
  undefined8 local_2708;
  undefined2 local_2700;
  byte abStack_26d0 [164];
  uint local_262c;
  undefined4 local_2628;
  undefined8 local_2624;
  undefined8 local_261c;
  undefined2 local_2614;
  undefined4 local_2612;
  undefined2 local_260e;
  undefined4 local_15e0;
  uint local_15d8;
  undefined4 local_15d4;
  byte local_15d0 [68];
  undefined4 local_158c;
  uint local_1588;
  undefined4 local_1584;
  undefined8 local_1580;
  undefined8 local_1578;
  undefined8 local_1570;
  undefined4 local_1568;
  undefined2 local_1564;
  undefined8 uStack_1562;
  undefined4 uStack_155a;
  undefined1 uStack_1556;
  long ***local_540;
  ulong local_538;
  undefined2 local_530;
  undefined4 local_52c;
  undefined2 local_528;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined5 uStack_4d8;
  undefined3 local_4d3;
  undefined5 uStack_4d0;
  undefined8 local_4c0;
  undefined8 auStack_448 [74];
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined4 local_1e4;
  undefined1 local_1e0;
  undefined1 *local_1b0;
  undefined1 *local_1a0;
  undefined1 *local_190;
  undefined1 *local_180;
  undefined1 *local_170;
  undefined1 *local_160;
  undefined1 *local_150;
  undefined1 *local_140;
  undefined1 *local_130;
  undefined1 *local_120;
  int local_f4;
  undefined **local_e8;
  ulong local_e0;
  undefined2 local_d8;
  int local_d4;
  ushort local_d0 [32];
  undefined8 local_90;
  undefined8 local_88;
  undefined5 uStack_80;
  undefined3 local_7b;
  undefined4 uStack_78;
  byte bStack_74;
  char local_73;
  char local_72;
  char local_71;
  char local_70;
  char local_6f;
  char local_6e;
  char local_6d;
  ushort local_64 [2];
  
  FUN_7101ce7e70(param_1 + 0x2330,*(long *)**(undefined8 **)(param_1 + 0x2318) + 0x5f8,param_3,
                 param_4,param_5,param_6,param_7,param_8);
  if (*(int *)(param_1 + 0x16c) == 0) {
    *(undefined1 *)(param_1 + 0x2370) = 1;
    *(undefined8 *)(param_1 + 0x2374) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x237c) = 0;
    *(undefined2 *)(param_1 + 0x2380) = 0;
    *(undefined4 *)(param_1 + 0x26b0) = 0;
    FUN_7101ce8640(param_1 + 0x2330,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  if (0 < *(int *)(*(long *)(param_1 + 0x2350) + 0x228)) {
    return;
  }
  uVar14 = 0x811c9dc5;
  FUN_7103775fa0((long *)**(undefined8 **)(param_1 + 0x2318),extraout_x1,param_3,param_4,param_5,
                 param_6,param_7,param_8);
  **(uint **)(DAT_710593b988 + 8) =
       **(uint **)(DAT_710593b988 + 8) &
       (1 << (ulong)(*(uint *)(param_1 + 0x2344) & 0x1f) ^ 0xffffffffU);
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x2318),0);
  FUN_7101af8210(*(long *)(*(long *)(param_1 + 0x180) + 0x80),(undefined8 *)(param_1 + 0x188));
  FUN_7101af5880((undefined8 *)abStack_26d0,(undefined8 *)(param_1 + 0x188));
  local_2624 = &DAT_696c6e6f5f756e6d;
  local_261c = 0x726f7065725f656e;
  local_2614 = 0x5f74;
  local_2612 = 0x6c746974;
  local_260e = 0x65;
  uVar16 = 0x6d;
  lVar15 = 0xad;
  local_2628 = 0x17;
  local_262c = uVar14;
  do {
    local_262c = local_262c * 0x89 ^ uVar16;
    uVar16 = (uint)abStack_26d0[lVar15];
    lVar15 = lVar15 + 1;
  } while (uVar16 != 0);
  local_158c = 1;
  local_1580 = &DAT_696c6e6f5f756e6d;
  local_1568 = 0x72746e6f;
  local_1578 = 0x726f7065725f656e;
  local_1570 = 0x635f706c65685f74;
  local_1564 = 0x6269;
  uStack_1562 = 0x65645f6e6f697475;
  uStack_155a = 0x6c696174;
  uStack_1556 = 0;
  uVar16 = 0x6d;
  lVar15 = 0x1151;
  local_1584 = 0x2a;
  local_1588 = uVar14;
  do {
    local_1588 = local_1588 * 0x89 ^ uVar16;
    uVar16 = (uint)abStack_26d0[lVar15];
    lVar15 = lVar15 + 1;
  } while (uVar16 != 0);
  uStack_2710 = 0x746f6f665f756e6d;
  local_2708 = 0x726f7065725f7265;
  local_2700 = 0x74;
  pcVar10 = (char *)((long)&uStack_2710 + 1);
  do {
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uVar11 = 0;
  bVar17 = 0x6d;
  do {
    local_15d0[uVar11] = bVar17;
    if (0x3e < (int)uVar11 + 1U) {
      uVar11 = (ulong)((int)uVar11 + 1);
      break;
    }
    bVar3 = *(byte *)((long)&uStack_2710 + uVar11 + 1);
    if (bVar3 == 0) {
      uVar11 = uVar11 + 1;
      break;
    }
    bVar17 = *(byte *)((long)&uStack_2710 + uVar11 + 2);
    local_15d0[uVar11 + 1] = bVar3;
    uVar11 = uVar11 + 2;
  } while (bVar17 != 0);
  local_15d0[uVar11 & 0xffffffff] = 0;
  local_15d4 = (undefined4)uVar11;
  uVar16 = (uint)local_15d0[0];
  if (local_15d0[0] != 0) {
    pbVar13 = local_15d0;
    do {
      pbVar13 = pbVar13 + 1;
      uVar14 = uVar14 * 0x89 ^ uVar16;
      uVar16 = (uint)*pbVar13;
    } while (uVar16 != 0);
  }
  local_15e0 = 10;
  ppppbVar9 = (byte ****)0x2;
  local_15d8 = uVar14;
  FUN_7101af8570(*(long *)(param_1 + 0x180),(int *)abStack_26d0,1,2,param_5,param_6,param_7,param_8)
  ;
  lVar15 = *(long *)(*(long *)(param_1 + 0x180) + 0x80);
  (**(code **)(**(long **)(lVar15 + 0x2268) + 0x70))(*(long **)(lVar15 + 0x2268),0);
  if (*(char *)(lVar15 + 0x11b4) == '\0') {
    FUN_7103771a80((long *)(lVar15 + 0x2268),3,0);
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x2268);
    if (*(int *)(lVar15 + 0x254) == 3) {
      FUN_710376b960(lVar15);
    }
  }
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x2350) + 0x288);
  *(undefined8 *)(param_1 + 0x2a30) = *(undefined8 *)(*(long *)(param_1 + 0x2350) + 0x290);
  puVar1 = (uint *)(param_1 + 0x2a28);
  *(undefined8 *)(param_1 + 0x2a28) = uVar12;
  lVar15 = DAT_710532f8f8;
  local_d4 = 0;
  local_d0[0] = 0;
  local_d8 = 0;
  local_e8 = (undefined **)0x0;
  local_e0 = 0;
  uStack_78 = 0;
  bStack_74 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_7b = 0;
  local_90 = 0;
  FUN_710334e560(*(long *)(DAT_710532f8f8 + 8),(int *)puVar1,&local_e8);
  pppplVar8 = (long ****)&DAT_00000370;
  memset(&local_540,0,0x370);
  local_1f4 = 1;
  local_1e4 = 0;
  local_1e0 = 0;
  *(undefined2 *)(param_1 + 0x26c0) = 0;
  *(undefined4 *)(param_1 + 0x26bc) = 0;
  *(undefined4 *)(param_1 + 0x26b8) = 0x811c9dc5;
  *(undefined2 *)(param_1 + 0x29ec) = 0;
  *(undefined4 *)(param_1 + 0x29e8) = 0;
  *(undefined4 *)(param_1 + 0x29e4) = 0x811c9dc5;
  *(undefined4 *)(param_1 + 0x2a04) = 1;
  *(undefined8 *)(param_1 + 0x2a08) = local_1f0;
  *(undefined1 *)(param_1 + 0x2a10) = local_1e8;
  *(undefined1 *)(param_1 + 0x2a18) = 0;
  *(undefined4 *)(param_1 + 0x2a14) = 0;
  *(undefined4 *)(param_1 + 0x2a24) = 0;
  if (*(ulong *)(param_1 + 0x2a30) == 0) {
    sVar4 = -1;
  }
  else {
    pppplVar8 = (long ****)(ulong)*puVar1;
    sVar4 = FUN_710334c7d0(*(long *)(lVar15 + 8),*(ulong *)(param_1 + 0x2a30),*puVar1);
  }
  *(short *)(param_1 + 0x2a24) = sVar4;
  FUN_7101cf4120((int *)puVar1,(uint *)(param_1 + 0x29e4));
  *(undefined ***)(param_1 + 0x2a08) = local_e8;
  if ((undefined4 *)(param_1 + 0x2a14) != &uStack_78) {
    uVar11 = (ulong)bStack_74;
    if (bStack_74 != 0) {
      *(byte *)(param_1 + 0x2a18) = bStack_74;
      if (local_73 == '\0') {
        uVar11 = 1;
      }
      else {
        *(char *)(param_1 + 0x2a19) = local_73;
        if (local_72 == '\0') {
          uVar11 = 2;
        }
        else {
          *(char *)(param_1 + 0x2a1a) = local_72;
          if (local_71 == '\0') {
            uVar11 = 3;
          }
          else {
            *(char *)(param_1 + 0x2a1b) = local_71;
            if (local_70 == '\0') {
              uVar11 = 4;
            }
            else {
              *(char *)(param_1 + 0x2a1c) = local_70;
              if (local_6f == '\0') {
                uVar11 = 5;
              }
              else {
                *(char *)(param_1 + 0x2a1d) = local_6f;
                if (local_6e == '\0') {
                  uVar11 = 6;
                }
                else {
                  *(char *)(param_1 + 0x2a1e) = local_6e;
                  if (local_6d == '\0') {
                    uVar11 = 7;
                  }
                  else {
                    *(char *)(param_1 + 0x2a1f) = local_6d;
                    uVar11 = 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined1 *)(param_1 + uVar11 + 0x2a18) = 0;
    *(int *)(param_1 + 0x2a14) = (int)uVar11;
  }
  *(char *)(param_1 + 0x2a26) = (char)DAT_710523d00c;
  *(undefined1 *)(param_1 + 0x2a27) = 0;
  if (*(short *)(param_1 + 0x2a24) == 2) {
    local_52c = 0;
    local_528 = 0;
    local_530 = 0;
    local_538 = 0;
    local_540 = (long ***)0x0;
    uStack_4d0 = 0;
    uStack_4d8 = 0;
    local_4d3 = 0;
    local_4e0 = 0;
    local_4e8 = 0;
    local_4c0 = 0;
    FUN_710143c4d0(auStack_448);
    local_1b0 = &DAT_c1ffff0000000000;
    local_1a0 = &DAT_c1ffff0000000000;
    local_190 = &DAT_c1ffff0000000000;
    local_180 = &DAT_c1ffff0000000000;
    pppplVar8 = &local_540;
    local_170 = &DAT_c1ffff0000000000;
    local_160 = &DAT_c1ffff0000000000;
    local_150 = &DAT_c1ffff0000000000;
    local_140 = &DAT_c1ffff0000000000;
    local_130 = &DAT_c1ffff0000000000;
    local_120 = &DAT_c1ffff0000000000;
    FUN_710334e9e0(*(long *)(lVar15 + 8),(int *)puVar1,pppplVar8);
    if (local_f4 != 0) {
      *(undefined1 *)(param_1 + 0x2a27) = 1;
    }
  }
  if (local_d4 == 0) {
    FUN_7103776910(&local_540,**(long **)(param_1 + 0x2320) + 8,(long ****)"set_txt_00",pppplVar8,
                   ppppbVar9,param_5,param_6,param_7,param_8);
    plVar5 = *(long **)(local_538 + 0x10);
    uVar11 = local_538;
    if (plVar5 == (long *)0x0) goto LAB_7101ca9cc0;
    local_64[0] = 0;
    local_64[1] = 0;
    puVar7 = local_64;
    pppplVar8 = (long ****)0x0;
    ppppbVar9 = (byte ****)0x0;
  }
  else {
    FUN_7103776910(&local_540,**(long **)(param_1 + 0x2320) + 8,(long ****)"set_txt_00",pppplVar8,
                   ppppbVar9,param_5,param_6,param_7,param_8);
    plVar5 = *(long **)(local_538 + 0x10);
    uVar11 = local_538;
    if (plVar5 == (long *)0x0) goto LAB_7101ca9cc0;
    puVar7 = local_d0;
    pppplVar8 = (long ****)&DAT_ffffffff;
    ppppbVar9 = (byte ****)0x1;
  }
  uVar11 = local_538;
  FUN_71037a2270(plVar5,puVar7,(uint)pppplVar8,(ulong)ppppbVar9);
LAB_7101ca9cc0:
  local_540 = (long ***)&PTR_FUN_710523d9a8;
  local_538 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776390(&local_540,(undefined8 *)(**(long **)(param_1 + 0x2320) + 8),pppplVar8,ppppbVar9,
                 param_5,param_6,param_7,param_8);
  FUN_7101cac0c0(param_1,(undefined1 *)&local_540,puVar1,ppppbVar9,param_5,param_6,param_7,param_8);
  uVar11 = local_538;
  local_540 = (long ***)&PTR_FUN_710523d988;
  local_538 = 0;
  if (uVar11 != 0) {
    uVar6 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x2320),0,(long ****)0x1003,ppppbVar9,param_5,
                 param_6,param_7,param_8);
  pppplVar8 = (long ****)0x1004;
  FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 9000),0,(long ****)0x1004,ppppbVar9,param_5,
                 param_6,param_7,param_8);
  FUN_7103776640(&local_540,**(long **)(param_1 + 0x2320) + 8,(byte ****)"set_part_btn_01",pppplVar8
                 ,ppppbVar9,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_e8,(long)&local_540,(long ****)"set_txt_sentence_dis",pppplVar8,ppppbVar9,
                 param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_e8,"mnu_online_report_contribution_detail",pppplVar8,ppppbVar9,param_5
                 ,param_6,param_7,param_8);
  uVar11 = local_e0;
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_e8,(long)&local_540,(long ****)"set_txt_sentence",pppplVar8,ppppbVar9,
                 param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_e8,"mnu_online_report_contribution_detail",pppplVar8,ppppbVar9,param_5
                 ,param_6,param_7,param_8);
  uVar11 = local_e0;
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x2320) + 0x10),0x7104421055);
  FUN_71032e5a30(*(long *)(DAT_710532f7c8 + 8),extraout_x1_00,pppplVar8,ppppbVar9,param_5,param_6,
                 param_7,param_8);
  uVar11 = local_538;
  if (0 < *(int *)(param_1 + 0x164)) {
    *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + -1;
  }
  local_540 = (long ***)&PTR_FUN_710523d988;
  local_538 = 0;
  if (uVar11 != 0) {
    uVar6 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar11);
  }
  return;
}

