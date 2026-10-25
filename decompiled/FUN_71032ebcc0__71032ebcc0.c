// addr:      71032ebcc0
// offset:    0x32ebcc0
// name:      FUN_71032ebcc0
// mangled:   
// signature: undefined __cdecl FUN_71032ebcc0(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71032ebcc0(long param_1,ulong param_2,long *********param_3,byte ****param_4,ulong param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long *********ppppppppplVar6;
  byte ****ppppbVar7;
  long ****pppplVar8;
  long lVar9;
  uint local_68 [2];
  uint local_58 [2];
  
  lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x80);
  bVar3 = ((ulong)param_4 & 0xffffffffff) == 0;
  bVar4 = (ulong)param_4 >> 0x38 != 0xc1;
  pcVar1 = "waitingplayer_2";
  if (bVar4 || bVar3) {
    pcVar1 = "waitingplayer_1";
  }
  ppppppppplVar6 = param_3;
  ppppbVar7 = param_4;
  pppplVar8 = (long ****)param_5;
  FUN_7103778300(0x3f800000,*(long *)(lVar9 + 0x168),(long)pcVar1);
  FUN_71037790a0(*(long *)(lVar9 + 0x198),1,ppppppppplVar6,ppppbVar7,pppplVar8,param_6,param_7,
                 param_8);
  FUN_71037790a0(*(long *)(lVar9 + 0x1a8),1,ppppppppplVar6,ppppbVar7,pppplVar8,param_6,param_7,
                 param_8);
  if ((param_2 >> 0x38 == 0xc1) && ((param_2 & 0xffffffffff) != 0)) {
    ppppppppplVar6 = (long *********)0x2;
    uVar5 = FUN_7103238a70(param_2,(ulong)param_3 & 0xffffffff,2);
    if ((uVar5 & 0xffffffffff) == 0) {
      local_58[0] = 0xffffff;
      FUN_7103778c70(*(long *)(lVar9 + 0x198),local_58,ppppppppplVar6,ppppbVar7,pppplVar8,param_6,
                     param_7,param_8);
    }
    else {
      FUN_710353da30(local_58,uVar5);
      uVar2 = local_58[0];
      FUN_7103778c70(*(long *)(lVar9 + 0x198),local_58,ppppppppplVar6,ppppbVar7,pppplVar8,param_6,
                     param_7,param_8);
      if (uVar2 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,uVar2,ppppppppplVar6,ppppbVar7,pppplVar8,param_6,param_7,
                       param_8);
        local_58[0] = 0xffffff;
      }
    }
  }
  if (!bVar4 && !bVar3) {
    ppppppppplVar6 = (long *********)0x2;
    uVar5 = FUN_7103238a70((ulong)param_4,param_5 & 0xffffffff,2);
    if ((uVar5 & 0xffffffffff) == 0) {
      local_68[0] = 0xffffff;
      FUN_7103778c70(*(long *)(lVar9 + 0x1a8),local_68,ppppppppplVar6,ppppbVar7,pppplVar8,param_6,
                     param_7,param_8);
    }
    else {
      FUN_710353da30(local_68,uVar5);
      FUN_7103778c70(*(long *)(lVar9 + 0x1a8),local_68,ppppppppplVar6,ppppbVar7,pppplVar8,param_6,
                     param_7,param_8);
      if (local_68[0] != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,local_68[0],ppppppppplVar6,ppppbVar7,pppplVar8,param_6,param_7
                       ,param_8);
      }
    }
  }
  *(ulong *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x18) = (int)param_3;
  *(byte *****)(param_1 + 0x20) = param_4;
  *(int *)(param_1 + 0x28) = (int)param_5;
  return;
}

