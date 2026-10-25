// addr:      7101ef03b0
// offset:    0x1ef03b0
// name:      FUN_7101ef03b0
// mangled:   
// signature: undefined __cdecl FUN_7101ef03b0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


void FUN_7101ef03b0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *********ppppppppplVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined **local_50;
  ulong local_48;
  
  lVar11 = DAT_710532f8b8;
  puVar10 = *(undefined8 **)(param_1 + 0x80);
  if (*(char *)(puVar10 + 1) != '\0') goto LAB_7101ef0490;
  lVar8 = **(long **)(param_1 + 0x78);
  if (((DAT_710532f4d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710532f4d8), iVar3 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    lVar7 = *(long *)(lVar8 + 0x28);
    if (lVar7 == 0) goto LAB_7101ef0440;
LAB_7101ef03fc:
    lVar6 = lVar8 + 0x28;
    do {
      bVar2 = (*(ulong *)(lVar7 + 0x20) & 0xffffffffff) < 0x1145a829f5;
      if (!bVar2) {
        lVar6 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + (ulong)bVar2 * 8);
    } while (lVar7 != 0);
    if ((lVar6 == lVar8 + 0x28) || (0x1145a829f5 < (*(ulong *)(lVar6 + 0x20) & 0xfffffffffe)))
    goto LAB_7101ef0440;
    ppppppppplVar9 = (long *********)(lVar6 + 0x28);
  }
  else {
    lVar7 = *(long *)(lVar8 + 0x28);
    if (lVar7 != 0) goto LAB_7101ef03fc;
LAB_7101ef0440:
    ppppppppplVar9 = (long *********)&DAT_710532f4a4;
  }
  if ((*(int *)ppppppppplVar9 != 0xffffff) &&
     (iVar3 = FUN_710330a8f0(*(long **)(lVar11 + 8),(ulong *)&DAT_7104545de0,
                             (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8),
     iVar3 != 0)) {
    FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar3,ppppppppplVar9,param_4,
                   param_5,param_6,param_7,param_8);
  }
  *(undefined1 *)(puVar10 + 1) = 1;
LAB_7101ef0490:
  uVar5 = 0xffe;
  FUN_7103775dc0(*(long **)*puVar10,0,(long ****)0xffe,param_4,param_5,param_6,param_7,param_8);
  FUN_71037760f0(**(long **)*puVar10,0);
  lVar11 = *(long *)*puVar10;
  FUN_7103776640(&local_50,lVar11 + 8,(byte ****)"set_part_bg",uVar5,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar1 = local_48;
  FUN_7103778300(0x3f800000,local_48,0x71042707a1);
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar1 != 0) {
    uVar4 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar1);
  }
  FUN_7103776640(&local_50,lVar11 + 8,(byte ****)"set_part_bg",uVar5,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar1 = local_48;
  FUN_7103778300(0x3f800000,local_48,0x71044552b7);
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar1 != 0) {
    uVar4 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar1);
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),0x710438d31d);
  FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),0x71044552b7);
  FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),0x7104421055);
  FUN_7103778630(0x3f800000,*(long *)(lVar11 + 0x10),0x71043e099d);
  FUN_7103778760(*(long *)(lVar11 + 0x10),0x71042707a9);
  FUN_7103778760(*(long *)(lVar11 + 0x10),0x710425fcff);
  FUN_7103778760(*(long *)(lVar11 + 0x10),0x710437cd49);
  FUN_7103778760(*(long *)(lVar11 + 0x10),0x710433a9e6);
  FUN_7103778760(*(long *)(lVar11 + 0x10),0x71042d4aad);
  return;
}

