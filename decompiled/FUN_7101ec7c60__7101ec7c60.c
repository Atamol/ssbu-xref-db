// addr:      7101ec7c60
// offset:    0x1ec7c60
// name:      FUN_7101ec7c60
// mangled:   
// signature: undefined __cdecl FUN_7101ec7c60(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ec7c60(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  long ****pppplVar5;
  long *plVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_48;
  uint *local_40;
  uint *local_38;
  
  pppplVar5 = (long ****)&local_90;
  local_40 = (uint *)FUN_710392e290(0x10,0x48,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_40 == (uint *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_48 = (uint *)((ulong)local_48._4_4_ << 0x20);
      local_90 = (undefined **)&DAT_00000048;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_48);
      if (((uVar2 & 1) != 0) &&
         (local_40 = (uint *)FUN_710392e290(0x10,0x48,pppplVar5,param_4,param_5,param_6,param_7,
                                            param_8), local_40 != (uint *)0x0)) goto LAB_7101ec7ccc;
    }
    local_40 = (uint *)0x0;
  }
LAB_7101ec7ccc:
  uVar7 = 0x811c9dc5;
  local_88 = 0x5f6e74625f746573;
  local_80 = 0x6b636162;
  local_38 = local_40 + 0x12;
  uVar9 = 0x73;
  local_7c = 0;
  local_48 = local_40;
  pbVar8 = (byte *)((long)&local_88 + 1);
  uVar10 = uVar7;
  do {
    uVar10 = uVar10 * 0x89 ^ uVar9;
    uVar9 = (uint)*pbVar8;
    pbVar8 = pbVar8 + 1;
  } while (uVar9 != 0);
  local_90 = (undefined **)CONCAT44(0xc,uVar10);
  uVar2 = 0;
  cVar11 = 's';
  *local_40 = 0;
  do {
    *(char *)((long)local_40 + uVar2 + 8) = cVar11;
    if (0x3e < (int)uVar2 + 1U) {
      uVar2 = (ulong)((int)uVar2 + 1);
      break;
    }
    cVar11 = *(char *)((long)&local_88 + uVar2 + 1);
    uVar2 = uVar2 + 1;
  } while (cVar11 != '\0');
  *(undefined1 *)((long)local_40 + (uVar2 & 0xffffffff) + 8) = 0;
  uVar10 = (uint)(byte)local_40[2];
  local_40[1] = (uint)uVar2;
  if ((byte)local_40[2] != 0) {
    pbVar8 = (byte *)((long)local_40 + 9);
    do {
      uVar7 = uVar7 * 0x89 ^ uVar10;
      uVar10 = (uint)*pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (uVar10 != 0);
  }
  *local_40 = uVar7;
  plVar6 = &local_48;
  local_40 = local_40 + 0x12;
  FUN_7101ec4640(param_1,(long ****)"selector_back",plVar6,param_4,param_5,param_6,param_7,param_8);
  FUN_7101ec7250((long)param_1,0,plVar6,param_4,param_5,param_6,param_7,param_8);
  FUN_71037780e0(&local_90,param_1[1],(long ****)"back_in",plVar6,param_4,param_5,param_6,param_7,
                 param_8);
  uVar2 = local_88;
  if (param_1 + 7 != &local_90) {
    local_88 = 0;
    uVar3 = param_1[8];
    param_1[8] = uVar2;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar2 = local_88;
  local_90 = &PTR_FUN_710523d9e8;
  local_88 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_90,param_1[1],(long ****)"back_out",plVar6,param_4,param_5,param_6,param_7,
                 param_8);
  uVar2 = local_88;
  if (param_1 + 9 != &local_90) {
    local_88 = 0;
    uVar3 = param_1[10];
    param_1[10] = uVar2;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar2 = local_88;
  local_90 = &PTR_FUN_710523d9e8;
  local_88 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_710377b140((long)(param_1 + 9));
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_7103776640(&local_90,param_1[1],(byte ****)"set_btn_back",plVar6,param_4,param_5,param_6,
                 param_7,param_8);
  if (((DAT_71053144d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053144d8), iVar1 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar2 = local_88;
  switch((DAT_71053050f0 & 0x7f000000) + 0xfe000000 >> 0x18) {
  case 0:
    pcVar4 = "color_melee";
    break;
  case 1:
    pcVar4 = "color_spirits";
    break;
  default:
    pcVar4 = "color_other";
    break;
  case 3:
    pcVar4 = "color_colle";
    break;
  case 4:
    pcVar4 = "color_option";
    break;
  case 5:
    pcVar4 = "color_online";
    break;
  case 6:
    pcVar4 = "color_help";
  }
  FUN_7103778300(0x3f800000,local_88,(long)pcVar4);
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

