// addr:      7101f04b60
// offset:    0x1f04b60
// name:      FUN_7101f04b60
// mangled:   
// signature: undefined __cdecl FUN_7101f04b60(uint * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f04b60(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  if (*(int *)(*(long *)(param_1 + 0xaa) + 0xf0) != -1) {
    FUN_7103776640(&local_40,*(long *)(param_1 + 0xa8) + 0x118,(byte ****)"set_part_key_help",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_txt_help",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_50,"mel_team_competition_submenu_txt_0",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar6 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    uVar6 = local_38;
    local_40 = &PTR_FUN_710523d988;
    local_38 = 0;
    if (uVar6 != 0) {
      uVar4 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar6);
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    puVar1 = &DAT_710530a9c8;
    if (*param_1 != 0) {
      puVar1 = &DAT_710530bdf0;
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    lVar5 = *(long *)(param_1 + 0xa8);
    iVar3 = *(int *)(lVar5 + 0x130);
    if ((DAT_710530a975 == '\x02') || (*(short *)(puVar1 + 0x4a) != 0)) {
      if (iVar3 != 3) {
        *(undefined4 *)(lVar5 + 0x104) = 0;
        *(undefined8 *)(lVar5 + 0x18) = 0;
        *(undefined8 *)(lVar5 + 0x20) = 0;
        *(undefined8 *)(lVar5 + 0xfc) = 0;
        *(undefined8 *)(lVar5 + 0xf4) = 0;
        *(undefined8 *)(lVar5 + 0xec) = 0;
        *(undefined8 *)(lVar5 + 0xe4) = 0;
        *(undefined8 *)(lVar5 + 0xdc) = 0;
        *(undefined8 *)(lVar5 + 0xd4) = 0;
        *(undefined8 *)(lVar5 + 0xcc) = 0;
        *(undefined8 *)(lVar5 + 0xc4) = 0;
        *(undefined8 *)(lVar5 + 0xbc) = 0;
        *(undefined8 *)(lVar5 + 0x108) = 0xffffffff;
        *(undefined4 *)(lVar5 + 0x110) = 0xffffffff;
        *(undefined1 *)(lVar5 + 0x114) = 0;
        *(undefined4 *)(lVar5 + 0xb8) = 0;
        if (iVar3 == 2) {
          *(undefined4 *)(lVar5 + 0x104) = 3;
          *(undefined8 *)(lVar5 + 0xbc) = 0x200000006;
          *(undefined4 *)(lVar5 + 0xc4) = 5;
        }
        else if (iVar3 == 1) {
          *(undefined4 *)(lVar5 + 0x104) = 1;
          *(undefined4 *)(lVar5 + 0xbc) = 6;
        }
        else if (iVar3 == 0) {
          *(undefined8 *)(lVar5 + 0xbc) = 0x200000006;
          *(undefined4 *)(lVar5 + 0x104) = 2;
        }
        uVar2 = *(uint *)(lVar5 + 0x134);
        if (1 < uVar2) goto LAB_7101f04fdc;
        uVar7 = 3;
        goto LAB_7101f04dcc;
      }
    }
    else if (iVar3 != 2) {
      *(undefined4 *)(lVar5 + 0x104) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x20) = 0;
      *(undefined8 *)(lVar5 + 0xfc) = 0;
      *(undefined8 *)(lVar5 + 0xf4) = 0;
      *(undefined8 *)(lVar5 + 0xec) = 0;
      *(undefined8 *)(lVar5 + 0xe4) = 0;
      *(undefined8 *)(lVar5 + 0xdc) = 0;
      *(undefined8 *)(lVar5 + 0xd4) = 0;
      *(undefined8 *)(lVar5 + 0xcc) = 0;
      *(undefined8 *)(lVar5 + 0xc4) = 0;
      *(undefined8 *)(lVar5 + 0xbc) = 0;
      *(undefined8 *)(lVar5 + 0x108) = 0xffffffff;
      *(undefined4 *)(lVar5 + 0x110) = 0xffffffff;
      *(undefined1 *)(lVar5 + 0x114) = 0;
      *(undefined4 *)(lVar5 + 0xb8) = 0;
      if (iVar3 == 3) {
        *(undefined4 *)(lVar5 + 0x104) = 3;
        *(undefined8 *)(lVar5 + 0xbc) = 0x300000004;
        *(undefined4 *)(lVar5 + 0xc4) = 7;
      }
      else if (iVar3 == 1) {
        *(undefined8 *)(lVar5 + 0xbc) = 0x300000004;
        *(undefined4 *)(lVar5 + 0x104) = 2;
      }
      else if (iVar3 == 0) {
        *(undefined4 *)(lVar5 + 0x104) = 1;
        *(undefined4 *)(lVar5 + 0xbc) = 4;
      }
      uVar2 = *(uint *)(lVar5 + 0x134);
      if (1 < uVar2) goto LAB_7101f04fdc;
      uVar7 = 2;
LAB_7101f04dcc:
      *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x128) = uVar7;
      *(undefined4 *)(lVar5 + 0x130) = uVar7;
    }
  }
  if (0x12 < param_1[0x7d]) {
LAB_7101f04fdc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1[(long)(int)param_1[0x7d] + 0x6a] = 0;
  if (*(int *)(*DAT_7105328e18 + 0x39c) == 0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_710530a976 != '\0') {
      if (*param_1 < 2) {
        lVar8 = *(long *)(param_1 + 0x8e);
        lVar5 = *(long *)(param_1 + 0x8c);
        if (lVar8 != lVar5) {
          iVar3 = *(int *)(*DAT_7105328e18 + (ulong)*param_1 * 0x1b8 + 0x2c);
          uVar6 = 0;
          do {
            if (iVar3 != (int)uVar6) {
              *(undefined1 *)(**(long **)(lVar5 + uVar6 * 0x10) + 0x274) = 0;
              lVar8 = *(long *)(param_1 + 0x8e);
              lVar5 = *(long *)(param_1 + 0x8c);
            }
            uVar6 = (ulong)((int)uVar6 + 1);
            uVar4 = lVar8 - lVar5 >> 4;
          } while (uVar6 < uVar4);
          if ((ulong)(long)iVar3 < uVar4) {
            lVar8 = **(long **)(lVar5 + (long)iVar3 * 0x10);
            lVar5 = **(long **)(lVar8 + 0x238);
            if (lVar5 == 0) {
              return;
            }
            lVar9 = *(long *)(lVar5 + 0x18);
            if (lVar9 == 0) {
              return;
            }
            FUN_7100058290(lVar9,lVar5);
            FUN_7100058250(lVar9,**(long **)(lVar8 + 0x238));
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      goto LAB_7101f04fdc;
    }
  }
  else if ((int)param_1[0x7d] < 0x12) {
    uVar2 = param_1[0x7d] + 1;
    param_1[0x7d] = uVar2;
    if (0x12 < uVar2) goto LAB_7101f04fdc;
    param_1[(long)(int)uVar2 + 0x6a] = 0x14;
  }
  return;
}

