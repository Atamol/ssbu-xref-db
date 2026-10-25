// addr:      7101c09380
// offset:    0x1c09380
// name:      FUN_7101c09380
// mangled:   
// signature: undefined __cdecl FUN_7101c09380(long param_1, undefined1 param_2, ulong param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c09380(long param_1,undefined1 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  char *pcVar4;
  long *plVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 uStack_54;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined2 uStack_48;
  undefined1 local_46;
  undefined1 uStack_45;
  int local_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar5 = *(long **)(param_1 + 8);
  uVar2 = (uint)param_3;
  if (((int)uVar2 < 0) || (*plVar5 == 0)) {
switchD_7101c093c0_caseD_c:
    plVar5 = (long *)plVar5[2];
    if (plVar5 == (long *)0x0) {
      return;
    }
    uVar2 = 0;
    local_68 = local_68 & 0xffffffff00000000;
    goto LAB_7101c093e8;
  }
  switch(param_2) {
  case 2:
    if ((uVar2 & 0xff) == 2) {
      local_68._4_4_ = 0x15;
      local_58 = 0x6c75725f;
      uStack_54 = 0x5f65;
      uStack_52 = 0x73;
      uStack_51 = 0x74;
      uStack_50 = 0x6d61;
      uStack_4e = 0x69;
      uStack_4d = 0x6e;
      uStack_4c = 0x61;
      uStack_4b = 0;
      uVar2 = 0x811c9dc5;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
    }
    else if ((uVar2 & 0xff) == 1) {
      local_68._4_4_ = 0x13;
      local_58 = 0x6c75725f;
      uStack_54 = 0x5f65;
      uStack_52 = 0x73;
      uStack_51 = 0x74;
      uStack_50 = 0x636f;
      uStack_4e = 0x6b;
      uStack_4d = 0;
      uVar2 = 0x811c9dc5;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
    }
    else {
      if ((param_3 & 0xff) != 0) {
LAB_7101c09934:
        local_60 = (ulong)local_60._1_7_ << 8;
        local_68 = 0x811c9dc5;
        FUN_710377a120(param_1,(char *)&local_60,param_3,param_4,param_5,param_6,param_7,param_8);
        return;
      }
      uStack_4e = 0;
      local_68._4_4_ = 0x12;
      local_58 = 0x6c75725f;
      uStack_54 = 0x5f65;
      uStack_52 = 0x74;
      uStack_51 = 0x69;
      uStack_50 = 0x656d;
      uVar2 = 0x811c9dc5;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
    }
    goto LAB_7101c0a200;
  case 3:
    if ((uVar2 & 0xff) == 2) {
      local_68._4_4_ = 0x17;
      local_58 = 0x6165745f;
      uStack_54 = 0x5f6d;
      uStack_52 = 0x66;
      uStack_51 = 0x6f;
      uStack_50 = 0x6d72;
      uStack_4e = 0x61;
      uStack_4d = 0x74;
      uStack_4c = 0x5f;
      uStack_4b = 0x30;
      uVar2 = 0x811c9dc5;
      uStack_4a = 0x32;
      uStack_49 = 0;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
    }
    else if ((uVar2 & 0xff) == 1) {
      local_68._4_4_ = 0x17;
      local_58 = 0x6165745f;
      uStack_54 = 0x5f6d;
      uStack_52 = 0x66;
      uStack_51 = 0x6f;
      uStack_50 = 0x6d72;
      uStack_4e = 0x61;
      uStack_4d = 0x74;
      uStack_4c = 0x5f;
      uStack_4b = 0x30;
      uVar2 = 0x811c9dc5;
      uStack_4a = 0x31;
      uStack_49 = 0;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
    }
    else {
      if ((param_3 & 0xff) != 0) goto LAB_7101c09934;
      local_68._4_4_ = 0x17;
      local_58 = 0x6165745f;
      uStack_54 = 0x5f6d;
      uStack_52 = 0x66;
      uStack_51 = 0x6f;
      uStack_50 = 0x6d72;
      uStack_4e = 0x61;
      uStack_4d = 0x74;
      uStack_4c = 0x5f;
      uStack_4b = 0x30;
      uVar2 = 0x811c9dc5;
      uStack_4a = 0x30;
      uStack_49 = 0;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
    }
    goto LAB_7101c0a200;
  case 4:
    uVar6 = 0;
    uVar8 = 1;
    sVar3 = 0x3c;
    do {
      if (uVar6 == uVar2) goto LAB_7101c09d2c;
      uVar1 = uVar6 + 1;
      if (uVar8 < 3) {
        if (uVar6 + 1 == uVar2) {
          sVar3 = sVar3 + 0x1e;
          goto LAB_7101c09d2c;
        }
        uVar1 = uVar6 + 2;
      }
      uVar6 = uVar1;
      uVar8 = uVar8 + 1;
      sVar3 = sVar3 + 0x3c;
    } while (uVar8 < 100);
    sVar3 = 0;
LAB_7101c09d2c:
    FUN_7101c09200(param_1,sVar3,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  case 5:
  case 0x13:
  case 0x1b:
    plVar5 = (long *)plVar5[2];
    if (plVar5 == (long *)0x0) {
      return;
    }
    uVar2 = uVar2 + 1;
    goto LAB_7101c0a0c8;
  case 6:
    if ((uVar2 & 0xff) < 0xc) {
      uVar2 = *(uint *)(&DAT_7104ada690 + (long)(char)param_3 * 4);
      plVar5 = (long *)plVar5[2];
    }
    else {
      uVar2 = 0x96;
      plVar5 = (long *)plVar5[2];
    }
    goto joined_r0x007101c0a074;
  case 7:
    uVar8 = uVar2 + 1 & 0xff;
    if (3 < (uVar2 - 1 & 0xff)) {
      uVar8 = 1;
    }
    FUN_710377a120(param_1,"mel_rule_cond_%d",(ulong)uVar8,param_4,param_5,param_6,param_7,param_8);
    return;
  case 8:
    if (uVar2 == 0) {
      pcVar4 = "mel_rule_spirit_without";
    }
    else {
      pcVar4 = "mel_rule_spirit_with";
    }
    break;
  case 9:
    param_4 = 1;
    switch(param_3 & 0xff) {
    case 1:
      uVar2 = 2;
      plVar5 = (long *)plVar5[2];
      break;
    default:
      uVar2 = 3;
      plVar5 = (long *)plVar5[2];
      break;
    case 3:
      uVar2 = 4;
      plVar5 = (long *)plVar5[2];
      break;
    case 4:
      uVar2 = 5;
      plVar5 = (long *)plVar5[2];
joined_r0x007101c0a084:
      if (plVar5 == (long *)0x0) {
        return;
      }
      goto LAB_7101c0a0c8;
    case 5:
      uVar2 = 6;
      plVar5 = (long *)plVar5[2];
      break;
    case 6:
      uVar2 = 7;
      plVar5 = (long *)plVar5[2];
      break;
    case 7:
      uVar2 = 8;
      plVar5 = (long *)plVar5[2];
      break;
    case 8:
      param_4 = 9;
    case 0:
      uVar2 = (uint)param_4;
      plVar5 = (long *)plVar5[2];
      goto joined_r0x007101c0a084;
    case 9:
      pcVar4 = "mel_rule_edit_tournament_random";
      goto LAB_7101c0a12c;
    }
joined_r0x007101c0a074:
    if (plVar5 == (long *)0x0) {
      return;
    }
LAB_7101c0a0c8:
    local_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    local_46 = 0;
    uStack_45 = 0;
    local_44 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_52 = 0;
    uStack_51 = 0;
    uStack_50 = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    local_68 = 0;
    local_60 = 0;
    uVar2 = FUN_71037ad940((long)&local_68,0x20,0,uVar2,0,0);
LAB_7101c093e8:
    FUN_71037a2270(plVar5,(ushort *)&local_68,uVar2,0);
    return;
  case 10:
    if ((param_3 & 0xff) == 0) {
      local_68._4_4_ = 0x19;
      local_58 = 0x6e61685f;
      uStack_54 = 0x6964;
      uStack_52 = 99;
      uStack_51 = 0x61;
      uStack_50 = 0x5f70;
      uStack_4e = 0x77;
      uStack_4d = 0x69;
      uStack_4c = 0x74;
      uStack_4b = 0x68;
      uStack_4a = 0x6f;
      uStack_49 = 0x75;
      uStack_48 = 0x74;
      uVar2 = 0x811c9dc5;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
    }
    else if ((uVar2 & 0xff) == 1) {
      uStack_4a = 0;
      local_68._4_4_ = 0x16;
      local_58 = 0x6e61685f;
      uStack_54 = 0x6964;
      uStack_52 = 99;
      uStack_51 = 0x61;
      uStack_50 = 0x5f70;
      uStack_4e = 0x61;
      uStack_4d = 0x75;
      uStack_4c = 0x74;
      uStack_4b = 0x6f;
      uVar2 = 0x811c9dc5;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
    }
    else {
      if ((uVar2 & 0xff) != 2) goto switchD_7101c094f8_default;
      uStack_4a = 0;
      local_68._4_4_ = 0x16;
      local_58 = 0x6e61685f;
      uStack_54 = 0x6964;
      uStack_52 = 99;
      uStack_51 = 0x61;
      uStack_50 = 0x5f70;
      uStack_4e = 0x77;
      uStack_4d = 0x69;
      uStack_4c = 0x74;
      uStack_4b = 0x68;
      uVar2 = 0x811c9dc5;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
    }
    goto LAB_7101c0a200;
  case 0xb:
    switch(param_3 & 0xff) {
    case 0:
      local_58 = 0x6174735f;
      uVar2 = 0x811c9dc5;
      uStack_54 = 0x6567;
      uStack_52 = 0x5f;
      if ((param_4 & 1) == 0) {
        uStack_51 = 99;
        uStack_50 = 0x6f68;
        uStack_4e = 0x6f;
        uStack_4d = 0x73;
        uStack_4c = 0x65;
        uVar8 = 0x6d;
        uStack_4b = 0;
        local_68._4_4_ = 0x15;
        pbVar7 = (byte *)((long)&local_60 + 1);
        do {
          uVar2 = uVar2 * 0x89 ^ uVar8;
          uVar8 = (uint)*pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (uVar8 != 0);
      }
      else {
        uStack_49 = 0;
        uStack_51 = 0x62;
        uStack_50 = 0x6d79;
        uStack_4e = 0x79;
        uStack_4d = 0x73;
        uStack_4c = 0x65;
        uStack_4b = 0x6c;
        uStack_4a = 0x66;
        uVar8 = 0x6d;
        local_68._4_4_ = 0x17;
        pbVar7 = (byte *)((long)&local_60 + 1);
        do {
          uVar2 = uVar2 * 0x89 ^ uVar8;
          uVar8 = (uint)*pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (uVar8 != 0);
      }
      break;
    case 1:
      uStack_4c = 0;
      local_68._4_4_ = 0x14;
      local_58 = 0x6174735f;
      uStack_54 = 0x6567;
      uStack_52 = 0x5f;
      uStack_51 = 0x74;
      uVar2 = 0x811c9dc5;
      uStack_50 = 0x7275;
      uStack_4e = 0x6e;
      uStack_4d = 0x73;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
      break;
    case 2:
      uStack_4c = 0;
      local_68._4_4_ = 0x14;
      local_58 = 0x6174735f;
      uStack_54 = 0x6567;
      uStack_52 = 0x5f;
      uStack_51 = 0x6c;
      uVar2 = 0x811c9dc5;
      uStack_50 = 0x736f;
      uStack_4e = 0x65;
      uStack_4d = 0x72;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
      break;
    case 3:
      uStack_4c = 0;
      local_68._4_4_ = 0x14;
      local_58 = 0x6174735f;
      uStack_54 = 0x6567;
      uStack_52 = 0x5f;
      uStack_51 = 0x6f;
      uVar2 = 0x811c9dc5;
      uStack_50 = 0x6472;
      uStack_4e = 0x65;
      uStack_4d = 0x72;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
      break;
    case 4:
      local_68._4_4_ = 0x15;
      local_58 = 0x6174735f;
      uStack_54 = 0x6567;
      uStack_52 = 0x5f;
      uStack_51 = 0x72;
      uStack_50 = 0x6e61;
      uStack_4e = 100;
      uStack_4d = 0x6f;
      uStack_4c = 0x6d;
      uStack_4b = 0;
      uVar2 = 0x811c9dc5;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
      break;
    case 5:
      local_68._4_4_ = 0x13;
      local_58 = 0x6174735f;
      uStack_54 = 0x6567;
      uStack_52 = 0x5f;
      uStack_51 = 0x62;
      uStack_50 = 0x746f;
      uStack_4e = 0x68;
      uStack_4d = 0;
      uVar2 = 0x811c9dc5;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
      break;
    case 6:
      local_46 = 0;
      local_68._4_4_ = 0x1a;
      local_58 = 0x6174735f;
      uStack_54 = 0x6567;
      uStack_52 = 0x5f;
      uStack_51 = 0x62;
      uStack_50 = 0x7461;
      uStack_4e = 0x74;
      uStack_4d = 0x6c;
      uStack_4c = 0x65;
      uStack_4b = 0x66;
      uStack_4a = 0x69;
      uStack_49 = 0x65;
      uStack_48 = 0x646c;
      uVar2 = 0x811c9dc5;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
      break;
    case 7:
      uStack_4e = 0;
      local_68._4_4_ = 0x12;
      local_58 = 0x6174735f;
      uStack_54 = 0x6567;
      uStack_52 = 0x5f;
      uStack_51 = 0x65;
      uStack_50 = 0x646e;
      uVar2 = 0x811c9dc5;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
      break;
    default:
switchD_7101c094f8_default:
      local_60 = (ulong)local_60._1_7_ << 8;
      local_68 = 0;
      FUN_710377a120(param_1,(char *)&local_60,param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    }
    goto LAB_7101c0a200;
  default:
    goto switchD_7101c093c0_caseD_c;
  case 0xe:
    if (uVar2 == 0) {
      pcVar4 = "mel_rule_team_attack_without";
    }
    else {
      pcVar4 = "mel_rule_team_attack_with";
    }
    break;
  case 0xf:
    FUN_710377a280(param_1,(byte *)"mel_rule_launch_launch_rate_unit",2);
    return;
  case 0x10:
    if (uVar2 == 0) {
      pcVar4 = "mel_rule_charge_without";
    }
    else {
      pcVar4 = "mel_rule_charge_with";
    }
    break;
  case 0x11:
    if ((uVar2 & 0xff) == 1) {
      local_68._4_4_ = 0x1c;
      local_44 = (uint)local_44._1_3_ << 8;
      local_58 = 0x6e61685f;
      uStack_54 = 0x6964;
      uStack_52 = 99;
      uStack_51 = 0x61;
      uStack_50 = 0x5f70;
      uStack_4e = 0x62;
      uStack_4d = 0x6f;
      uStack_4c = 0x6f;
      uStack_4b = 0x73;
      uStack_4a = 0x74;
      uStack_49 = 0x5f;
      uStack_48 = 26999;
      uVar2 = 0x811c9dc5;
      local_46 = 0x74;
      uStack_45 = 0x68;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
    }
    else {
      if ((param_3 & 0xff) != 0) goto switchD_7101c094f8_default;
      local_68._4_4_ = 0x1c;
      local_44 = (uint)local_44._1_3_ << 8;
      local_58 = 0x6e61685f;
      uStack_54 = 0x6964;
      uStack_52 = 99;
      uStack_51 = 0x61;
      uStack_50 = 0x5f70;
      uStack_4e = 0x62;
      uStack_4d = 0x6f;
      uStack_4c = 0x6f;
      uStack_4b = 0x73;
      uStack_4a = 0x74;
      uStack_49 = 0x5f;
      uStack_48 = 0x6f6e;
      uVar2 = 0x811c9dc5;
      local_46 = 0x6e;
      uStack_45 = 0x65;
      uVar8 = 0x6d;
      pbVar7 = (byte *)((long)&local_60 + 1);
      do {
        uVar2 = uVar2 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
    }
LAB_7101c0a200:
    local_60 = 0x656c75725f6c656d;
    local_68 = CONCAT44(local_68._4_4_,uVar2);
    FUN_710377a120(param_1,(char *)&local_60,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  case 0x12:
    if (uVar2 == 0) {
      pcVar4 = "mel_rule_stage_gimmick_without";
    }
    else {
      pcVar4 = "mel_rule_stage_gimmick_with";
    }
    break;
  case 0x14:
    switch(param_3 & 0xff) {
    case 0:
      pcVar4 = "mel_rule_stage_change_without";
      goto LAB_7101c0a12c;
    case 1:
      pcVar4 = "mel_rule_stage_change_any";
      goto LAB_7101c0a12c;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      break;
    case 9:
      break;
    case 10:
      break;
    default:
    }
    FUN_710377a280(param_1,(byte *)"mel_rule_stage_change_time",1);
    return;
  case 0x15:
    FUN_710377a280(param_1,(byte *)"mel_rule_recovery_percent",1);
    return;
  case 0x16:
    if (uVar2 == 0) {
      pcVar4 = "mel_rule_pause_without";
    }
    else {
      pcVar4 = "mel_rule_pause_with";
    }
    break;
  case 0x17:
    if (uVar2 == 0) {
      pcVar4 = "mel_rule_score_without";
    }
    else {
      pcVar4 = "mel_rule_score_with";
    }
    break;
  case 0x18:
    if (uVar2 == 0) {
      pcVar4 = "mel_rule_damage_without";
    }
    else {
      pcVar4 = "mel_rule_damage_with";
    }
    break;
  case 0x1c:
    if (uVar2 == 0) {
      pcVar4 = "mel_rule_edit_allbattle_unreversal_without";
    }
    else {
      pcVar4 = "mel_rule_edit_allbattle_unreversal_with";
    }
    break;
  case 0x1d:
    if (uVar2 == 0) {
      pcVar4 = "mel_rule_edit_suddendeath_shrink_without";
    }
    else {
      pcVar4 = "mel_rule_edit_suddendeath_shrink_with";
    }
    break;
  case 0x1e:
    if (uVar2 == 0) {
      pcVar4 = "mel_rule_edit_suddendeath_bomb_without";
    }
    else {
      pcVar4 = "mel_rule_edit_suddendeath_bomb_with";
    }
  }
LAB_7101c0a12c:
  FUN_710377a120(param_1,pcVar4,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

