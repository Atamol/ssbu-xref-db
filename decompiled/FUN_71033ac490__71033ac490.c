// addr:      71033ac490
// offset:    0x33ac490
// name:      FUN_71033ac490
// mangled:   
// signature: undefined8 __cdecl FUN_71033ac490(long param_1, undefined8 param_2, undefined8 param_3)


undefined8 FUN_71033ac490(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  uint local_88 [2];
  byte local_80;
  byte abStack_7f [63];
  
  if (((DAT_710532f938 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710532f938), iVar3 != 0)) {
    __cxa_guard_release(&DAT_710532f938);
  }
  iVar3 = *(int *)(param_1 + 0xc);
  cVar2 = (&DAT_710455e57c)[iVar3];
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = 0;
  FUN_710062dc20(local_88,"%s_%s");
  uVar9 = (uint)local_80;
  if (local_80 == 0) {
    uVar7 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar6 = 0xffffffff;
    pbVar8 = abStack_7f;
    do {
      uVar1 = uVar9 + 0x20;
      if (0x19 < uVar9 - 0x41) {
        uVar1 = uVar9;
      }
      uVar6 = (&DAT_7104754084)[(uVar1 ^ uVar6) & 0xff] ^ uVar6 >> 8;
      uVar9 = (uint)*pbVar8;
      uVar5 = uVar5 + 0x100000000;
      pbVar8 = pbVar8 + 1;
    } while (uVar9 != 0);
    uVar7 = (ulong)~uVar6;
    uVar5 = uVar5 & 0xff00000000;
  }
  if (cVar2 == '\0') {
    uVar5 = uVar5 | uVar7;
    uVar7 = 0xdde617190;
    if (uVar5 == 0xdde617190) {
switchD_71033ac60c_caseD_75:
      uVar4 = lua2cpp::create_agent_fighter_status_script_element(uVar7,param_1,param_2,param_3);
      return uVar4;
    }
    uVar7 = uVar5;
    switch(*(undefined4 *)(&DAT_710455e7e4 + (long)iVar3 * 4)) {
    case 0:
      uVar4 = lua2cpp::create_agent_fighter_status_script_mario(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 1:
      uVar4 = lua2cpp::create_agent_fighter_status_script_donkey(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 2:
      uVar4 = lua2cpp::create_agent_fighter_status_script_link(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 3:
      uVar4 = lua2cpp::create_agent_fighter_status_script_samus(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 4:
      uVar4 = lua2cpp::create_agent_fighter_status_script_samusd(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 5:
      uVar4 = lua2cpp::create_agent_fighter_status_script_yoshi(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 6:
      uVar4 = lua2cpp::create_agent_fighter_status_script_kirby(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 7:
      uVar4 = lua2cpp::create_agent_fighter_status_script_fox(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 8:
      uVar4 = lua2cpp::create_agent_fighter_status_script_pikachu(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 9:
      uVar4 = lua2cpp::create_agent_fighter_status_script_luigi(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 10:
      uVar4 = lua2cpp::create_agent_fighter_status_script_ness(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0xb:
      uVar4 = lua2cpp::create_agent_fighter_status_script_captain(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0xc:
      uVar4 = lua2cpp::create_agent_fighter_status_script_purin(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0xd:
      uVar4 = lua2cpp::create_agent_fighter_status_script_peach(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0xe:
      uVar4 = lua2cpp::create_agent_fighter_status_script_daisy(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0xf:
      uVar4 = lua2cpp::create_agent_fighter_status_script_koopa(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x10:
      uVar4 = lua2cpp::create_agent_fighter_status_script_sheik(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x11:
      uVar4 = lua2cpp::create_agent_fighter_status_script_zelda(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x12:
      uVar4 = lua2cpp::create_agent_fighter_status_script_mariod(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x13:
      uVar4 = lua2cpp::create_agent_fighter_status_script_pichu(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x14:
      uVar4 = lua2cpp::create_agent_fighter_status_script_falco(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x15:
      uVar4 = lua2cpp::create_agent_fighter_status_script_marth(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x16:
      uVar4 = lua2cpp::create_agent_fighter_status_script_lucina(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x17:
      uVar4 = lua2cpp::create_agent_fighter_status_script_younglink(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x18:
      uVar4 = lua2cpp::create_agent_fighter_status_script_ganon(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x19:
      uVar4 = lua2cpp::create_agent_fighter_status_script_mewtwo(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x1a:
      uVar4 = lua2cpp::create_agent_fighter_status_script_roy(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x1b:
      uVar4 = lua2cpp::create_agent_fighter_status_script_chrom(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x1c:
      uVar4 = lua2cpp::create_agent_fighter_status_script_gamewatch(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x1d:
      uVar4 = lua2cpp::create_agent_fighter_status_script_metaknight(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x1e:
      uVar4 = lua2cpp::create_agent_fighter_status_script_pit(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x1f:
      uVar4 = lua2cpp::create_agent_fighter_status_script_pitb(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x20:
      uVar4 = lua2cpp::create_agent_fighter_status_script_szerosuit(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x21:
      uVar4 = lua2cpp::create_agent_fighter_status_script_wario(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x22:
      uVar4 = lua2cpp::create_agent_fighter_status_script_snake(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x23:
      uVar4 = lua2cpp::create_agent_fighter_status_script_ike(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x24:
      uVar4 = lua2cpp::create_agent_fighter_status_script_pzenigame(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x25:
      uVar4 = lua2cpp::create_agent_fighter_status_script_pfushigisou(uVar5,param_1,param_2,param_3)
      ;
      return uVar4;
    case 0x26:
      uVar4 = lua2cpp::create_agent_fighter_status_script_plizardon(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x27:
      uVar4 = lua2cpp::create_agent_fighter_status_script_diddy(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x28:
      uVar4 = lua2cpp::create_agent_fighter_status_script_lucas(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x29:
      uVar4 = lua2cpp::create_agent_fighter_status_script_sonic(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x2a:
      uVar4 = lua2cpp::create_agent_fighter_status_script_dedede(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x2b:
      uVar4 = lua2cpp::create_agent_fighter_status_script_pikmin(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x2c:
      uVar4 = lua2cpp::create_agent_fighter_status_script_lucario(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x2d:
      uVar4 = lua2cpp::create_agent_fighter_status_script_robot(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x2e:
      uVar4 = lua2cpp::create_agent_fighter_status_script_toonlink(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x2f:
      uVar4 = lua2cpp::create_agent_fighter_status_script_wolf(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x30:
      uVar4 = lua2cpp::create_agent_fighter_status_script_murabito(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x31:
      uVar4 = lua2cpp::create_agent_fighter_status_script_rockman(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x32:
      uVar4 = lua2cpp::create_agent_fighter_status_script_wiifit(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x33:
      uVar4 = lua2cpp::create_agent_fighter_status_script_rosetta(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x34:
      uVar4 = lua2cpp::create_agent_fighter_status_script_littlemac(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x35:
      uVar4 = lua2cpp::create_agent_fighter_status_script_gekkouga(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x36:
      uVar4 = lua2cpp::create_agent_fighter_status_script_palutena(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x37:
      uVar4 = lua2cpp::create_agent_fighter_status_script_pacman(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x38:
      uVar4 = lua2cpp::create_agent_fighter_status_script_reflet(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x39:
      uVar4 = lua2cpp::create_agent_fighter_status_script_shulk(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x3a:
      uVar4 = lua2cpp::create_agent_fighter_status_script_koopajr(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x3b:
      uVar4 = lua2cpp::create_agent_fighter_status_script_duckhunt(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x3c:
      uVar4 = lua2cpp::create_agent_fighter_status_script_ryu(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x3d:
      uVar4 = lua2cpp::create_agent_fighter_status_script_ken(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x3e:
      uVar4 = lua2cpp::create_agent_fighter_status_script_cloud(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x3f:
      uVar4 = lua2cpp::create_agent_fighter_status_script_kamui(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x40:
      uVar4 = lua2cpp::create_agent_fighter_status_script_bayonetta(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x41:
      uVar4 = lua2cpp::create_agent_fighter_status_script_inkling(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x42:
      uVar4 = lua2cpp::create_agent_fighter_status_script_ridley(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x43:
      uVar4 = lua2cpp::create_agent_fighter_status_script_simon(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x44:
      uVar4 = lua2cpp::create_agent_fighter_status_script_richter(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x45:
      uVar4 = lua2cpp::create_agent_fighter_status_script_krool(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x46:
      uVar4 = lua2cpp::create_agent_fighter_status_script_shizue(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x47:
      uVar4 = lua2cpp::create_agent_fighter_status_script_gaogaen(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x48:
      uVar4 = lua2cpp::create_agent_fighter_status_script_miifighter(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x49:
      uVar4 = lua2cpp::create_agent_fighter_status_script_miiswordsman
                        (uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x4a:
      uVar4 = lua2cpp::create_agent_fighter_status_script_miigunner(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x4b:
      uVar4 = lua2cpp::create_agent_fighter_status_script_popo(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x4c:
      uVar4 = lua2cpp::create_agent_fighter_status_script_nana(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x4d:
      uVar4 = lua2cpp::create_agent_fighter_status_script_koopag(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x4e:
      uVar4 = lua2cpp::create_agent_fighter_status_script_miienemyf(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x4f:
      uVar4 = lua2cpp::create_agent_fighter_status_script_miienemys(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x50:
      uVar4 = lua2cpp::create_agent_fighter_status_script_miienemyg(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x51:
      uVar4 = lua2cpp::create_agent_fighter_status_script_packun(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x52:
      uVar4 = lua2cpp::create_agent_fighter_status_script_jack(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x53:
      uVar4 = lua2cpp::create_agent_fighter_status_script_brave(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x54:
      uVar4 = lua2cpp::create_agent_fighter_status_script_buddy(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x55:
      uVar4 = lua2cpp::create_agent_fighter_status_script_dolly(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x56:
      uVar4 = lua2cpp::create_agent_fighter_status_script_master(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x57:
      uVar4 = lua2cpp::create_agent_fighter_status_script_tantan(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x58:
      uVar4 = lua2cpp::create_agent_fighter_status_script_pickel(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x59:
      uVar4 = lua2cpp::create_agent_fighter_status_script_edge(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x5a:
      uVar4 = lua2cpp::create_agent_fighter_status_script_eflame(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x5b:
      uVar4 = lua2cpp::create_agent_fighter_status_script_elight(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x5c:
      uVar4 = lua2cpp::create_agent_fighter_status_script_demon(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x5d:
      uVar4 = lua2cpp::create_agent_fighter_status_script_trail(uVar5,param_1,param_2,param_3);
      return uVar4;
    default:
      break;
    case 0x72:
      uVar4 = lua2cpp::create_agent_fighter_status_script_ptrainer(uVar5,param_1,param_2,param_3);
      return uVar4;
    case 0x75:
      goto switchD_71033ac60c_caseD_75;
    }
  }
  return 0;
}

