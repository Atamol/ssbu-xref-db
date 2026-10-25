// addr:      71025b32d0
// offset:    0x25b32d0
// name:      FUN_71025b32d0
// mangled:   
// signature: char * __cdecl FUN_71025b32d0(undefined1 param_1, ulong param_2)


char * FUN_71025b32d0(undefined1 param_1,ulong param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  
  pcVar4 = "nam_spirits_rule_pokemon_fix";
  switch(param_1) {
  case 1:
    lVar5 = *(long *)(*DAT_7105329fa0 + 0x2f8);
    uVar7 = *(long *)(*DAT_7105329fa0 + 0x300) - lVar5 >> 4;
    uVar6 = (uint)uVar7;
    if (uVar6 != 0) {
      uVar3 = 0;
      do {
        uVar9 = (ulong)uVar3;
        if (uVar7 <= uVar9) goto LAB_71025b3930;
        if (((*(ulong *)(lVar5 + uVar9 * 0x10) ^ param_2) & 0xffffffffff) == 0) {
          lVar1 = lVar5 + uVar9 * 0x10;
          if (*(int *)(lVar1 + 0xc) < 1) {
            if (*(int *)(lVar1 + 0xc) < 0) {
              pcVar4 = "nam_spirits_rule_attack_down";
              pcVar8 = "nam_spirits_rule_defense_down";
              pcVar10 = "nam_spirits_rule_mov_down";
              switch(*(undefined1 *)(lVar1 + 10)) {
              case 0:
                goto switchD_71025b33ec_caseD_0;
              case 1:
                return "nam_spirits_rule_jump_down";
              case 2:
                goto switchD_71025b33ec_caseD_2;
              case 5:
                goto switchD_71025b33ec_caseD_5;
              }
            }
          }
          else {
            pcVar4 = "nam_spirits_rule_attack_up";
            pcVar8 = "nam_spirits_rule_defense_up";
            pcVar10 = "nam_spirits_rule_mov_up";
            switch(*(undefined1 *)(lVar1 + 10)) {
            case 0:
switchD_71025b33ec_caseD_0:
              return pcVar10;
            case 1:
              return "nam_spirits_rule_jump_up";
            case 2:
              goto switchD_71025b33ec_caseD_2;
            case 5:
switchD_71025b33ec_caseD_5:
              return pcVar8;
            }
          }
        }
        uVar3 = uVar3 + 1;
        pcVar4 = "";
      } while (uVar3 < uVar6);
switchD_71025b33ec_caseD_2:
      return pcVar4;
    }
    goto LAB_71025b37f4;
  case 2:
    lVar5 = *(long *)(*DAT_7105329fa0 + 0x310);
    uVar7 = *(long *)(*DAT_7105329fa0 + 0x318) - lVar5 >> 4;
    uVar6 = (uint)uVar7;
    if (uVar6 != 0) {
      uVar3 = 0;
      while (uVar9 = (ulong)uVar3, uVar9 < uVar7) {
        if (((*(ulong *)(lVar5 + uVar9 * 0x10) ^ param_2) & 0xffffffffff) == 0) {
          lVar5 = lVar5 + uVar9 * 0x10;
          pcVar4 = "nam_spirits_rule_big";
          pcVar8 = "nam_spirits_rule_small";
LAB_71025b38d4:
          if (*(char *)(lVar5 + 10) == '\0') {
            return pcVar8;
          }
          return pcVar4;
        }
        uVar3 = uVar3 + 1;
        if (uVar6 <= uVar3) {
          return "";
        }
      }
LAB_71025b3930:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    goto LAB_71025b37f4;
  case 3:
    pcVar4 = "nam_spirits_rule_damage";
    break;
  case 4:
    pcVar4 = "nam_spirits_rule_suddendeath";
    break;
  case 5:
    pcVar4 = "nam_spirits_rule_invincible";
    break;
  case 6:
    pcVar4 = "nam_spirits_rule_heal";
    break;
  case 7:
    lVar5 = *(long *)(*DAT_7105329fa0 + 0x5e0);
    uVar7 = (*(long *)(*DAT_7105329fa0 + 0x5e8) - lVar5 >> 3) * -0x5555555555555555;
    if ((uint)uVar7 != 0) {
      uVar3 = 0;
      uVar6 = 0;
      while (uVar9 = (ulong)uVar6, uVar9 <= uVar7 && uVar7 - uVar9 != 0) {
        if (((*(ulong *)(lVar5 + uVar9 * 0x18) ^ param_2) & 0xffffffffff) == 0) {
          uVar3 = *(uint *)(lVar5 + uVar9 * 0x18 + 0x14);
        }
        uVar6 = uVar6 + 1;
        if ((uint)uVar7 <= uVar6) {
          if (1 < uVar3) {
            return "nam_spirits_rule_item_outbreak";
          }
          return (char *)0x0;
        }
      }
      goto LAB_71025b3930;
    }
  default:
    pcVar4 = (char *)0x0;
    break;
  case 8:
    pcVar4 = "nam_spirits_rule_bomb";
    break;
  case 9:
    pcVar4 = "nam_spirits_rule_charge_max";
    break;
  case 10:
    pcVar4 = "nam_spirits_rule_metal";
    break;
  case 0xb:
    pcVar4 = "nam_spirits_rule_dark";
    break;
  case 0xc:
    pcVar4 = "nam_spirits_rule_wind_suddenly";
    break;
  case 0xe:
    lVar5 = *(long *)(*DAT_7105329fa0 + 0x5c8);
    uVar7 = *(long *)(*DAT_7105329fa0 + 0x5d0) - lVar5 >> 4;
    uVar6 = (uint)uVar7;
    if (uVar6 != 0) {
      uVar3 = 0;
      while (uVar9 = (ulong)uVar3, uVar9 < uVar7) {
        if (((*(ulong *)(lVar5 + uVar9 * 0x10) ^ param_2) & 0xffffffffff) == 0) {
          lVar1 = lVar5 + uVar9 * 0x10;
          cVar2 = *(char *)(lVar1 + 8);
          if (*(char *)(lVar1 + 9) == '\0') {
            if (cVar2 == '\x01') {
              return "nam_spirits_rule_type_attack_down";
            }
            if (cVar2 == '\0') {
              return "nam_spirits_rule_type_none_down";
            }
            if (cVar2 == '\x02') {
              return "nam_spirits_rule_type_throw_down";
            }
            if (cVar2 == '\x03') {
              return "nam_spirits_rule_type_guard_down";
            }
          }
          else {
            if (cVar2 == '\x01') {
              return "nam_spirits_rule_type_attack_up";
            }
            if (cVar2 == '\0') {
              return "nam_spirits_rule_type_none_up";
            }
            if (cVar2 == '\x02') {
              return "nam_spirits_rule_type_throw_up";
            }
            if (cVar2 == '\x03') {
              return "nam_spirits_rule_type_guard_up";
            }
          }
        }
        uVar3 = uVar3 + 1;
        if (uVar6 <= uVar3) {
          return "";
        }
      }
      goto LAB_71025b3930;
    }
    goto LAB_71025b37f4;
  case 0xf:
    pcVar4 = "nam_spirits_rule_earthquake";
    break;
  case 0x10:
    pcVar4 = "nam_spirits_rule_flower";
    break;
  case 0x11:
    pcVar4 = "nam_spirits_rule_curry";
    break;
  case 0x12:
    pcVar4 = "nam_spirits_rule_transparence";
    break;
  case 0x13:
    pcVar4 = "nam_spirits_rule_shield_down";
    break;
  case 0x14:
    lVar5 = *(long *)(*DAT_7105329fa0 + 0x3d0);
    uVar7 = *(long *)(*DAT_7105329fa0 + 0x3d8) - lVar5 >> 4;
    uVar6 = (uint)uVar7;
    if (uVar6 != 0) {
      uVar3 = 0;
      while (uVar9 = (ulong)uVar3, uVar9 < uVar7) {
        if (((*(ulong *)(lVar5 + uVar9 * 0x10) ^ param_2) & 0xffffffffff) == 0) {
          pcVar4 = "nam_spirits_rule_gravity_up";
          lVar5 = lVar5 + uVar9 * 0x10;
          pcVar8 = "nam_spirits_rule_gravity_down";
          goto LAB_71025b38d4;
        }
        uVar3 = uVar3 + 1;
        if (uVar6 <= uVar3) {
          return "";
        }
      }
      goto LAB_71025b3930;
    }
    goto LAB_71025b37f4;
  case 0x15:
    pcVar4 = "nam_spirits_rule_speed_wild";
    break;
  case 0x16:
    pcVar4 = "nam_spirits_rule_magic_up";
    break;
  case 0x17:
    pcVar4 = "nam_spirits_rule_energy_charge";
    break;
  case 0x18:
    pcVar4 = "nam_spirits_rule_weapon_offense_up";
    break;
  case 0x19:
    pcVar4 = "nam_spirits_rule_drown_up";
    break;
  case 0x1a:
    pcVar4 = "nam_spirits_rule_advantage_reverse";
    break;
  case 0x1b:
    pcVar4 = "nam_spirits_rule_advantage_double";
    break;
  case 0x1c:
    pcVar4 = "nam_spirits_rule_screen_flip";
    break;
  case 0x1d:
    pcVar4 = "nam_spirits_rule_horizontal_controller_flip";
    break;
  case 0x20:
    lVar5 = *(long *)(*DAT_7105329fa0 + 0x4f0);
    uVar7 = *(long *)(*DAT_7105329fa0 + 0x4f8) - lVar5 >> 4;
    uVar6 = (uint)uVar7;
    if (uVar6 != 0) {
      uVar3 = 0;
      while (uVar9 = (ulong)uVar3, uVar9 < uVar7) {
        if (((*(ulong *)(lVar5 + uVar9 * 0x10) ^ param_2) & 0xffffffffff) == 0) {
          pcVar4 = "nam_spirits_rule_launch_up";
          lVar5 = lVar5 + uVar9 * 0x10;
          pcVar8 = "nam_spirits_rule_launch_down";
          goto LAB_71025b38d4;
        }
        uVar3 = uVar3 + 1;
        if (uVar6 <= uVar3) {
          return "";
        }
      }
      goto LAB_71025b3930;
    }
LAB_71025b37f4:
    pcVar4 = "";
    break;
  case 0x21:
    pcVar4 = "nam_spirits_rule_balloon";
    break;
  case 0x22:
    pcVar4 = "nam_spirits_rule_slippery";
    break;
  case 0x23:
    pcVar4 = "nam_spirits_rule_smash_attack_up";
    break;
  case 0x24:
    pcVar4 = "nam_spirits_rule_no_hold";
    break;
  case 0x25:
    pcVar4 = "nam_spirits_rule_unity_damage";
    break;
  case 0x26:
    pcVar4 = "nam_spirits_rule_heal_seal";
    break;
  case 0x27:
    pcVar4 = "nam_spirits_rule_electric_up";
    break;
  case 0x28:
    pcVar4 = "nam_spirits_rule_reflect_damage_up";
    break;
  case 0x29:
    pcVar4 = "nam_spirits_rule_jump_seal";
    break;
  case 0x2a:
    pcVar4 = "nam_spirits_rule_normal_seal";
    break;
  case 0x2b:
    pcVar4 = "nam_spirits_rule_sp_move_seal";
    break;
  case 0x2c:
    pcVar4 = "nam_spirits_rule_shield_seal";
    break;
  case 0x2d:
    pcVar4 = "nam_spirits_rule_assist";
    break;
  case 0x2e:
    break;
  case 0x2f:
    pcVar4 = "nam_spirits_rule_sleep";
  }
  return pcVar4;
}

