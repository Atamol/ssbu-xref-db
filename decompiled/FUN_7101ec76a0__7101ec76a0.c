// addr:      7101ec76a0
// offset:    0x1ec76a0
// name:      FUN_7101ec76a0
// mangled:   
// signature: undefined __cdecl FUN_7101ec76a0(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007101ec785c) */

void FUN_7101ec76a0(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  long ****pppplVar4;
  long *plVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char cVar11;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_48;
  uint *local_40;
  uint *local_38;
  
  puVar1 = (uint *)FUN_710392e290(0x10,0x90,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar1 == (uint *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_48 = (uint *)((ulong)local_48._4_4_ << 0x20);
      local_90 = (undefined **)&DAT_00000090;
      pppplVar4 = (long ****)&local_90;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_48);
      if (((uVar2 & 1) != 0) &&
         (puVar1 = (uint *)FUN_710392e290(0x10,0x90,pppplVar4,param_4,param_5,param_6,param_7,
                                          param_8), puVar1 != (uint *)0x0)) goto LAB_7101ec770c;
    }
    puVar1 = (uint *)0x0;
  }
LAB_7101ec770c:
  local_38 = puVar1 + 0x24;
  uVar6 = 0x811c9dc5;
  local_80 = 0x706f74735f3131;
  local_48 = puVar1;
  local_40 = puVar1;
  pcVar10 = (char *)((long)&local_88 + 1);
  do {
    cVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar11 != '\0');
  uVar2 = 0;
  cVar11 = 's';
  *puVar1 = 0;
  do {
    *(char *)((long)puVar1 + uVar2 + 8) = cVar11;
    if (0x3e < (int)uVar2 + 1U) {
      uVar2 = (ulong)((int)uVar2 + 1);
      break;
    }
    cVar11 = *(char *)((long)&local_88 + uVar2 + 1);
    uVar2 = uVar2 + 1;
  } while (cVar11 != '\0');
  *(undefined1 *)((long)puVar1 + (uVar2 & 0xffffffff) + 8) = 0;
  uVar8 = (uint)(byte)puVar1[2];
  puVar1[1] = (uint)uVar2;
  uVar9 = uVar6;
  if ((byte)puVar1[2] != 0) {
    pbVar7 = (byte *)((long)puVar1 + 9);
    do {
      uVar9 = uVar9 * 0x89 ^ uVar8;
      uVar8 = (uint)*pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (uVar8 != 0);
  }
  local_40 = puVar1 + 0x12;
  *puVar1 = uVar9;
  local_88 = 0x5f6e74625f746573;
  local_80 = 0x74657365725f3231;
  uVar8 = 0x73;
  local_78 = 0;
  pbVar7 = (byte *)((long)&local_88 + 1);
  uVar9 = uVar6;
  do {
    uVar9 = uVar9 * 0x89 ^ uVar8;
    uVar8 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (uVar8 != 0);
  uVar2 = 0;
  local_90 = (undefined **)CONCAT44(0x10,uVar9);
  cVar11 = 's';
  *local_40 = 0;
  while( true ) {
    *(char *)((long)puVar1 + uVar2 + 0x50) = cVar11;
    if (0x3e < (int)uVar2 + 1U) {
      uVar2 = (ulong)((int)uVar2 + 1);
      goto LAB_7101ec78a0;
    }
    cVar11 = *(char *)((long)&local_88 + uVar2 + 1);
    if (cVar11 == '\0') break;
    *(char *)((long)puVar1 + uVar2 + 0x51) = cVar11;
    cVar11 = *(char *)((long)&local_88 + uVar2 + 2);
    uVar2 = uVar2 + 2;
    if (cVar11 == '\0') {
LAB_7101ec78a0:
      *(undefined1 *)((long)local_40 + (uVar2 & 0xffffffff) + 8) = 0;
      uVar9 = (uint)(byte)puVar1[0x14];
      puVar1[0x13] = (uint)uVar2;
      if ((byte)puVar1[0x14] != 0) {
        pbVar7 = (byte *)((long)puVar1 + 0x51);
        do {
          uVar6 = uVar6 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (uVar9 != 0);
      }
      puVar1[0x12] = uVar6;
      local_40 = puVar1 + 0x24;
      plVar5 = &local_48;
      FUN_7101ec4640(param_1,(long ****)"selector_playing",plVar5,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_7101ec7250((long)param_1,0,plVar5,param_4,param_5,param_6,param_7,param_8);
      FUN_7101ec7250((long)param_1,1,plVar5,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_90,param_1[1],(byte ****)"set_btn_11_stop",plVar5,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_a0,(long)&local_90,(long ****)"set_txt_btnname_white",plVar5,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_a0,"mnu_stgcreate_edit_stop",plVar5,param_4,param_5,param_6,
                     param_7,param_8);
      uVar2 = local_98;
      local_a0 = &PTR_FUN_710523d9a8;
      local_98 = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_7103776640(&local_b0,param_1[1],(byte ****)"set_btn_12_reset",plVar5,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_a0,(long)&local_b0,(long ****)"set_txt_btnname_white",plVar5,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_a0,"mnu_stgcreate_edit_reset",plVar5,param_4,param_5,param_6,
                     param_7,param_8);
      uVar2 = local_98;
      local_a0 = &PTR_FUN_710523d9a8;
      local_98 = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      uVar2 = local_a8;
      local_b0 = &PTR_FUN_710523d988;
      local_a8 = 0;
      if (uVar2 != 0) {
        uVar3 = *(ulong *)(uVar2 + 0x18);
        *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar2 + 0x18) = 0;
        if (uVar3 != 0) {
          FUN_710392eb40(uVar3);
        }
        FUN_710392eb40(uVar2);
      }
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar2 = local_88;
      local_90 = &PTR_FUN_710523d988;
      local_88 = 0;
      if (uVar2 != 0) {
        uVar3 = *(ulong *)(uVar2 + 0x18);
        *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar2 + 0x18) = 0;
        if (uVar3 != 0) {
          FUN_710392eb40(uVar3);
        }
        FUN_710392eb40(uVar2);
      }
      if (local_48 != (uint *)0x0) {
        local_40 = local_48;
        FUN_710392eb40((ulong)local_48);
      }
      return;
    }
  }
  uVar2 = uVar2 + 1;
  goto LAB_7101ec78a0;
}

