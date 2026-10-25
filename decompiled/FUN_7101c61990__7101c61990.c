// addr:      7101c61990
// offset:    0x1c61990
// name:      FUN_7101c61990
// mangled:   
// signature: undefined __cdecl FUN_7101c61990(long param_1, byte param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c61990(long param_1,byte param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long ****pppplVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  char local_90 [64];
  
  lVar4 = DAT_710532f8d0;
  lVar6 = DAT_7105329f38;
  lVar9 = *(long *)(DAT_710532f8d0 + 8);
  pppplVar5 = param_3;
  std::recursive_mutex::lock();
  plVar2 = &DAT_7104465568;
  if (*(char *)(*(long *)(lVar6 + 0x28) + 0x58) != '\0') {
    plVar2 = (long *)(*(long *)(lVar6 + 0x28) + 0x68);
  }
  lVar10 = *plVar2;
  std::recursive_mutex::unlock();
  lVar6 = *(long *)(lVar9 + 0x18);
  uVar1 = (uint)(lVar6 == lVar10 && lVar6 != 0);
  if ((uVar1 == 0 && ((ulong)param_3 & 1) == 0) || ((param_2 & 1) == 0)) {
    if (((uVar1 & ((uint)param_3 ^ 1)) == 0) && ((param_2 & 1) == 0)) {
      pppplVar5 = (long ****)0x1;
      FUN_71033145d0(lVar4,*(ulong *)(param_1 + 0x128),1,param_4,param_5,param_6,param_7,param_8);
    }
  }
  else {
    FUN_7103313da0(*(undefined8 **)(lVar4 + 8),0,pppplVar5,param_4,param_5,param_6,param_7,param_8);
  }
  pcVar8 = "bgm_off";
  if ((param_2 & 1) == 0) {
    pcVar8 = "bgm_on";
  }
  *(byte *)(param_1 + 0x130) = param_2 & 1;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x50),(long)pcVar8);
  lVar6 = *(long *)(param_1 + 0xb8);
  if (lVar6 != 0) {
    uVar7 = 0;
    pcVar8 = "mnu_online_room_inside_change_bgm";
    if (*(char *)(param_1 + 0x130) != '\0') {
      pcVar8 = "mnu_online_room_inside_change_bgm_2";
    }
    while( true ) {
      cVar3 = pcVar8[uVar7];
      if (cVar3 == '\0') break;
      local_90[uVar7] = cVar3;
      if (0x3e < (int)uVar7 + 1U) {
        uVar7 = (ulong)((int)uVar7 + 1);
        break;
      }
      cVar3 = (pcVar8 + uVar7)[1];
      if (cVar3 == '\0') {
        uVar7 = uVar7 + 1;
        break;
      }
      local_90[uVar7 + 1] = cVar3;
      uVar7 = uVar7 + 2;
    }
    local_90[uVar7 & 0xffffffff] = '\0';
    if (local_90[0] != '\0') {
      pcVar8 = local_90;
      do {
        pcVar8 = pcVar8 + 1;
      } while (*pcVar8 != '\0');
    }
    FUN_710377a120(*(long *)(lVar6 + 8) + 0x10,local_90,pppplVar5,param_4,param_5,param_6,param_7,
                   param_8);
    if ((*(char *)(param_1 + 0x132) != '\0') && (*(char *)(param_1 + 0x133) == '\x02')) {
      lVar6 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
      if (*(char *)(lVar6 + 0x2d) != '\0') {
        if (*(char *)(lVar6 + 0x2e) == '\0') {
          FUN_7103778300(0x3f800000,*(long *)(lVar6 + 8),0x710428ff7d);
        }
        *(undefined4 *)(lVar6 + 0x28) = 0;
        *(undefined2 *)(lVar6 + 0x2d) = 0;
        lVar6 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
        if (*(char *)(lVar6 + 0x2d) != '\0') {
          return;
        }
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar6 + 8),0x7104421055);
      *(undefined4 *)(lVar6 + 0x28) = 0;
      *(undefined2 *)(lVar6 + 0x2d) = 1;
    }
  }
  return;
}

