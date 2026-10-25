// addr:      7101ef1f70
// offset:    0x1ef1f70
// name:      FUN_7101ef1f70
// mangled:   
// signature: undefined __cdecl FUN_7101ef1f70(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ef1f70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  puVar10 = *(uint **)(*(long *)(param_1 + 0x270) + 8);
  if (*(int *)(param_1 + 0x24c) == 0) {
    *(undefined8 *)(puVar10 + 0x94) = *(undefined8 *)(puVar10 + 0x92);
    if (*(int *)(*(long *)(puVar10 + 0xaa) + 0xf0) != -1) {
      FUN_7103776640(&local_40,*(long *)(puVar10 + 0xa8) + 0x118,(byte ****)"set_part_key_help",
                     param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_txt_help",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377a120((long)&local_50,"mel_team_competition_sort_auto",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar3 = local_48;
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      uVar3 = local_38;
      local_40 = &PTR_FUN_710523d988;
      local_38 = 0;
      if (uVar3 != 0) {
        uVar7 = *(ulong *)(uVar3 + 0x18);
        *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar3 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar3);
      }
      lVar8 = *(long *)(puVar10 + 0xa8);
      iVar2 = *(int *)(lVar8 + 0x130);
      if (iVar2 != 2) {
        *(undefined4 *)(lVar8 + 0x104) = 0;
        *(undefined8 *)(lVar8 + 0x18) = 0;
        *(undefined8 *)(lVar8 + 0x20) = 0;
        *(undefined8 *)(lVar8 + 0xfc) = 0;
        *(undefined8 *)(lVar8 + 0xf4) = 0;
        *(undefined8 *)(lVar8 + 0xec) = 0;
        *(undefined8 *)(lVar8 + 0xe4) = 0;
        *(undefined8 *)(lVar8 + 0xdc) = 0;
        *(undefined8 *)(lVar8 + 0xd4) = 0;
        *(undefined8 *)(lVar8 + 0xcc) = 0;
        *(undefined8 *)(lVar8 + 0xc4) = 0;
        *(undefined8 *)(lVar8 + 0xbc) = 0;
        *(undefined8 *)(lVar8 + 0x108) = 0xffffffff;
        *(undefined4 *)(lVar8 + 0x110) = 0xffffffff;
        *(undefined1 *)(lVar8 + 0x114) = 0;
        *(undefined4 *)(lVar8 + 0xb8) = 0;
        if (iVar2 == 3) {
          *(undefined4 *)(lVar8 + 0x104) = 3;
          *(undefined8 *)(lVar8 + 0xbc) = 0x300000004;
          *(undefined4 *)(lVar8 + 0xc4) = 7;
        }
        else if (iVar2 == 1) {
          *(undefined8 *)(lVar8 + 0xbc) = 0x300000004;
          *(undefined4 *)(lVar8 + 0x104) = 2;
        }
        else if (iVar2 == 0) {
          *(undefined4 *)(lVar8 + 0x104) = 1;
          *(undefined4 *)(lVar8 + 0xbc) = 4;
        }
        if (1 < *(uint *)(lVar8 + 0x134)) goto LAB_7101ef23e4;
        *(undefined4 *)(lVar8 + (long)(int)*(uint *)(lVar8 + 0x134) * 4 + 0x128) = 2;
        *(undefined4 *)(lVar8 + 0x130) = 2;
      }
    }
    if (puVar10[0x7d] < 0x13) {
      puVar10[(long)(int)puVar10[0x7d] + 0x6a] = 2;
      if ((int)puVar10[0x7d] < 0x12) {
        uVar1 = puVar10[0x7d] + 1;
        puVar10[0x7d] = uVar1;
        if (0x12 < uVar1) goto LAB_7101ef23e4;
        puVar10[(long)(int)uVar1 + 0x6a] = 4;
      }
      lVar8 = *(long *)(*(long *)(param_1 + 0x278) + 8);
      *(undefined8 *)(lVar8 + 0x250) = *(undefined8 *)(lVar8 + 0x248);
      if (*(int *)(*(long *)(lVar8 + 0x2a8) + 0xf0) != -1) {
        FUN_7103776640(&local_40,*(long *)(lVar8 + 0x2a0) + 0x118,(byte ****)"set_part_key_help",
                       param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_txt_help",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377a120((long)&local_50,"mel_team_competition_sort_auto",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        uVar3 = local_48;
        local_50 = &PTR_FUN_710523d9a8;
        local_48 = 0;
        if (uVar3 != 0) {
          FUN_710392eb40(uVar3);
        }
        uVar3 = local_38;
        local_40 = &PTR_FUN_710523d988;
        local_38 = 0;
        if (uVar3 != 0) {
          uVar7 = *(ulong *)(uVar3 + 0x18);
          *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar3 + 0x18) = 0;
          if (uVar7 != 0) {
            FUN_710392eb40(uVar7);
          }
          FUN_710392eb40(uVar3);
        }
        lVar9 = *(long *)(lVar8 + 0x2a0);
        iVar2 = *(int *)(lVar9 + 0x130);
        if (iVar2 != 2) {
          *(undefined4 *)(lVar9 + 0x104) = 0;
          *(undefined8 *)(lVar9 + 0x18) = 0;
          *(undefined8 *)(lVar9 + 0x20) = 0;
          *(undefined8 *)(lVar9 + 0xfc) = 0;
          *(undefined8 *)(lVar9 + 0xf4) = 0;
          *(undefined8 *)(lVar9 + 0xec) = 0;
          *(undefined8 *)(lVar9 + 0xe4) = 0;
          *(undefined8 *)(lVar9 + 0xdc) = 0;
          *(undefined8 *)(lVar9 + 0xd4) = 0;
          *(undefined8 *)(lVar9 + 0xcc) = 0;
          *(undefined8 *)(lVar9 + 0xc4) = 0;
          *(undefined8 *)(lVar9 + 0xbc) = 0;
          *(undefined8 *)(lVar9 + 0x108) = 0xffffffff;
          *(undefined4 *)(lVar9 + 0x110) = 0xffffffff;
          *(undefined1 *)(lVar9 + 0x114) = 0;
          *(undefined4 *)(lVar9 + 0xb8) = 0;
          if (iVar2 == 3) {
            *(undefined4 *)(lVar9 + 0x104) = 3;
            *(undefined8 *)(lVar9 + 0xbc) = 0x300000004;
            *(undefined4 *)(lVar9 + 0xc4) = 7;
          }
          else if (iVar2 == 1) {
            *(undefined8 *)(lVar9 + 0xbc) = 0x300000004;
            *(undefined4 *)(lVar9 + 0x104) = 2;
          }
          else if (iVar2 == 0) {
            *(undefined4 *)(lVar9 + 0x104) = 1;
            *(undefined4 *)(lVar9 + 0xbc) = 4;
          }
          if (1 < *(uint *)(lVar9 + 0x134)) goto LAB_7101ef23e4;
          *(undefined4 *)(lVar9 + (long)(int)*(uint *)(lVar9 + 0x134) * 4 + 0x128) = 2;
          *(undefined4 *)(lVar9 + 0x130) = 2;
        }
      }
      if (*(uint *)(lVar8 + 500) < 0x13) {
        *(undefined4 *)(lVar8 + (long)(int)*(uint *)(lVar8 + 500) * 4 + 0x1a8) = 2;
        if (0x11 < *(int *)(lVar8 + 500)) {
          return;
        }
        uVar1 = *(int *)(lVar8 + 500) + 1;
        *(uint *)(lVar8 + 500) = uVar1;
        if (uVar1 < 0x13) {
          *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x1a8) = 4;
          return;
        }
      }
    }
  }
  else {
    if ((*(int *)(*(long *)(puVar10 + 0xaa) + 0xf0) == -1) &&
       (*(char *)((long)puVar10 + 0x2b9) != '\0')) {
      if ((char)puVar10[0xae] == '\0') {
        bVar6 = FUN_7101f06470(puVar10,0);
        bVar6 = !bVar6;
        bVar4 = true;
      }
      else {
        bVar6 = false;
        bVar4 = false;
      }
    }
    else {
      bVar4 = puVar10[0x7e] == 0;
      bVar6 = false;
    }
    puVar10 = *(uint **)(*(long *)(param_1 + 0x278) + 8);
    if ((*(int *)(*(long *)(puVar10 + 0xaa) + 0xf0) == -1) &&
       (*(char *)((long)puVar10 + 0x2b9) != '\0')) {
      if ((char)puVar10[0xae] != '\0') {
        return;
      }
      bVar5 = FUN_7101f06470(puVar10,0);
      if (!bVar4) {
        return;
      }
      bVar6 = (bool)(bVar6 | !bVar5);
    }
    else if (!(bool)(bVar4 & puVar10[0x7e] == 0)) {
      return;
    }
    if (*(uint *)(param_1 + 0x244) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x244) * 4 + 0x1f8) = 4;
      if ((bVar6) && (*(int *)(param_1 + 0x244) < 0x12)) {
        uVar1 = *(int *)(param_1 + 0x244) + 1;
        *(uint *)(param_1 + 0x244) = uVar1;
        if (0x12 < uVar1) goto LAB_7101ef23e4;
        *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x1f8) = 3;
      }
      return;
    }
  }
LAB_7101ef23e4:
                    /* WARNING: Subroutine does not return */
  abort();
}

