// addr:      7101c93960
// offset:    0x1c93960
// name:      FUN_7101c93960
// mangled:   
// signature: undefined __cdecl FUN_7101c93960(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c93960(long param_1,long param_2,ulong param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined6 uStack_5e;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 uStack_43;
  undefined4 local_42;
  undefined **local_30;
  ulong local_28;
  
  uVar3 = param_3 & 0xffffffff;
  FUN_7103776910(&local_30,param_2,(long ****)"set_txt_help",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  switch(uVar3) {
  case 0:
    pcVar2 = "mnu_online_room_help_setting_player_number";
    goto LAB_7101c93d8c;
  case 1:
    if (4 < (ulong)(long)*(char *)(param_1 + 0x111)) {
LAB_7101c940a0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    switch((&DAT_71045452a2)[*(char *)(param_1 + 0x111)]) {
    case 4:
      local_68 = 0x5f6d6f6f725f656e;
      local_60 = 0x6568;
      uStack_5e = 0x6174735f706c;
      uStack_58 = 0x6567;
      uStack_56 = 0x725f;
      uStack_54 = 0x6e61;
      uStack_52 = 0x6f64;
      uStack_50 = 0x6d;
      pcVar2 = (char *)((long)&local_70 + 1);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      break;
    case 5:
      local_68 = 0x5f6d6f6f725f656e;
      local_60 = 0x6568;
      uStack_5e = 0x6174735f706c;
      uStack_58 = 0x6567;
      uStack_56 = 0x725f;
      uStack_54 = 0x6e61;
      uStack_52 = 0x6f64;
      uStack_50 = 0x5f6d;
      uStack_4e = 0x6162;
      uStack_4c = 0x7474;
      uStack_4a = 0x656c;
      local_48 = 0x6c656966;
      local_44 = 100;
      uStack_43 = 0x5f;
      local_42 = 0x646e65;
      pcVar2 = (char *)((long)&local_70 + 1);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      break;
    case 6:
      local_68 = 0x5f6d6f6f725f656e;
      local_60 = 0x6568;
      uStack_5e = 0x6174735f706c;
      uStack_58 = 0x6567;
      uStack_56 = 0x725f;
      uStack_54 = 0x6e61;
      uStack_52 = 0x6f64;
      uStack_50 = 0x5f6d;
      uStack_4e = 0x6162;
      uStack_4c = 0x7474;
      uStack_4a = 0x656c;
      local_48 = 0x6c656966;
      local_44 = 100;
      uStack_43 = 0;
      pcVar2 = (char *)((long)&local_70 + 1);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      break;
    case 7:
      local_68 = 0x5f6d6f6f725f656e;
      local_60 = 0x6568;
      uStack_5e = 0x6174735f706c;
      uStack_58 = 0x6567;
      uStack_56 = 0x725f;
      uStack_54 = 0x6e61;
      uStack_52 = 0x6f64;
      uStack_50 = 0x5f6d;
      uStack_4e = 0x6e65;
      uStack_4c = 100;
      pcVar2 = (char *)((long)&local_70 + 1);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      break;
    default:
      local_68 = 0x5f6d6f6f725f656e;
      local_60 = 0x6568;
      uStack_5e = 0x6174735f706c;
      uStack_58 = 0x6567;
      uStack_56 = 0x705f;
      uStack_54 = 0x6572;
      uStack_52 = 0x6976;
      uStack_50 = 0x756f;
      uStack_4e = 0x6c73;
      uStack_4c = 0x5f79;
      uStack_4a = 0x6573;
      local_44 = 0;
      local_48 = 0x7463656c;
      pcVar2 = (char *)((long)&local_70 + 1);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    }
    uStack_58 = 0x6567;
    uStack_5e = 0x6174735f706c;
    local_60 = 0x6568;
    local_68 = 0x5f6d6f6f725f656e;
    local_70 = &DAT_696c6e6f5f756e6d;
    pcVar2 = (char *)&local_70;
    goto LAB_7101c93d8c;
  case 2:
    if (1 < (ulong)(long)*(char *)(param_1 + 0x112)) goto LAB_7101c940a0;
    uVar3 = 0;
    pcVar2 = "mnu_online_room_help_stgcreate_on";
    if ((&DAT_7104545280)[*(char *)(param_1 + 0x112)] != '\x02') {
      pcVar2 = "mnu_online_room_help_stgcreate_off";
    }
    while( true ) {
      cVar1 = pcVar2[uVar3];
      if (cVar1 == '\0') break;
      *(char *)((long)&local_70 + uVar3) = cVar1;
      if (0x3e < (int)uVar3 + 1U) {
        uVar3 = (ulong)((int)uVar3 + 1);
        break;
      }
      cVar1 = (pcVar2 + uVar3)[1];
      if (cVar1 == '\0') {
        uVar3 = uVar3 + 1;
        break;
      }
      *(char *)((long)&local_70 + uVar3 + 1) = cVar1;
      uVar3 = uVar3 + 2;
    }
    *(undefined1 *)((long)&local_70 + (uVar3 & 0xffffffff)) = 0;
    if ((char)local_70 != '\0') {
      pcVar2 = (char *)((long)&local_70 + 1);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    }
    break;
  case 3:
    if (1 < (ulong)(long)*(char *)(param_1 + 0x113)) goto LAB_7101c940a0;
    uVar3 = 0;
    pcVar2 = "mnu_online_room_help_amiibo_on";
    if ((&DAT_7104545280)[*(char *)(param_1 + 0x113)] != '\x02') {
      pcVar2 = "mnu_online_room_help_amiibo_off";
    }
    while( true ) {
      cVar1 = pcVar2[uVar3];
      if (cVar1 == '\0') break;
      *(char *)((long)&local_70 + uVar3) = cVar1;
      if (0x3e < (int)uVar3 + 1U) {
        uVar3 = (ulong)((int)uVar3 + 1);
        break;
      }
      cVar1 = (pcVar2 + uVar3)[1];
      if (cVar1 == '\0') {
        uVar3 = uVar3 + 1;
        break;
      }
      *(char *)((long)&local_70 + uVar3 + 1) = cVar1;
      uVar3 = uVar3 + 2;
    }
    *(undefined1 *)((long)&local_70 + (uVar3 & 0xffffffff)) = 0;
    if ((char)local_70 != '\0') {
      pcVar2 = (char *)((long)&local_70 + 1);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    }
    break;
  case 4:
    if (1 < (ulong)(long)*(char *)(param_1 + 0x114)) goto LAB_7101c940a0;
    uVar3 = 0;
    pcVar2 = "mnu_online_room_help_spirits_on";
    if ((&DAT_7104545280)[*(char *)(param_1 + 0x114)] != '\x02') {
      pcVar2 = "mnu_online_room_help_spirits_off";
    }
    while( true ) {
      cVar1 = pcVar2[uVar3];
      if (cVar1 == '\0') break;
      *(char *)((long)&local_70 + uVar3) = cVar1;
      if (0x3e < (int)uVar3 + 1U) {
        uVar3 = (ulong)((int)uVar3 + 1);
        break;
      }
      cVar1 = (pcVar2 + uVar3)[1];
      if (cVar1 == '\0') {
        uVar3 = uVar3 + 1;
        break;
      }
      *(char *)((long)&local_70 + uVar3 + 1) = cVar1;
      uVar3 = uVar3 + 2;
    }
    *(undefined1 *)((long)&local_70 + (uVar3 & 0xffffffff)) = 0;
    if ((char)local_70 != '\0') {
      pcVar2 = (char *)((long)&local_70 + 1);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    }
    break;
  case 5:
    if (1 < (ulong)(long)*(char *)(param_1 + 0x115)) goto LAB_7101c940a0;
    uVar3 = 0;
    pcVar2 = "mnu_online_room_help_voicechat_on";
    if ((&DAT_7104545280)[*(char *)(param_1 + 0x115)] != '\x02') {
      pcVar2 = "mnu_online_room_help_voicechat_off";
    }
    while( true ) {
      cVar1 = pcVar2[uVar3];
      if (cVar1 == '\0') break;
      *(char *)((long)&local_70 + uVar3) = cVar1;
      if (0x3e < (int)uVar3 + 1U) {
        uVar3 = (ulong)((int)uVar3 + 1);
        break;
      }
      cVar1 = (pcVar2 + uVar3)[1];
      if (cVar1 == '\0') {
        uVar3 = uVar3 + 1;
        break;
      }
      *(char *)((long)&local_70 + uVar3 + 1) = cVar1;
      uVar3 = uVar3 + 2;
    }
    *(undefined1 *)((long)&local_70 + (uVar3 & 0xffffffff)) = 0;
    if ((char)local_70 != '\0') {
      pcVar2 = (char *)((long)&local_70 + 1);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    }
    break;
  case 6:
    pcVar2 = "mnu_online_room_help_setting_roombgm";
    goto LAB_7101c93d8c;
  default:
    pcVar2 = "";
    goto LAB_7101c93d8c;
  }
  pcVar2 = (char *)&local_70;
LAB_7101c93d8c:
  FUN_710377a120((long)&local_30,pcVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar3 = local_28;
  local_30 = &PTR_FUN_710523d9a8;
  local_28 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  return;
}

