// addr:      710235ab70
// offset:    0x235ab70
// name:      FUN_710235ab70
// mangled:   
// signature: undefined __cdecl FUN_710235ab70(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


void FUN_710235ab70(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong extraout_x1;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *********ppppppppplVar11;
  undefined **local_40;
  long *local_38;
  
  if (*(int *)(param_1 + 0x114) == 0) {
    FUN_710240b440(2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar8 = DAT_710532f8b8;
    *(undefined8 *)(*(long *)(*(long *)(DAT_710532f8b8 + 8) + 0x68) + 0x70) = 1;
    lVar4 = *(long *)(*(long *)(lVar8 + 8) + 0x68);
    param_3 = (undefined **)(long)*(int *)(lVar4 + 0x70);
    param_4 = (byte ****)(ulong)*(uint *)(lVar4 + 0x68);
    FUN_710323c1c0(lVar4,(ulong *)&DAT_710455da98,(long *********)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    *(undefined8 *)(*(long *)(*(long *)(lVar8 + 8) + 0x68) + 0x70) = 0;
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    FUN_71017a3ae0();
  }
  bVar2 = FUN_710240bf50(2);
  if ((bVar2 & 1) == 0) {
    return;
  }
  uVar5 = FUN_710323d010(*(long *)(*(long *)(DAT_710532f8b8 + 8) + 0x68),1,(long *********)param_3,
                         param_4,param_5,param_6,param_7,param_8);
  if ((uVar5 & 1) == 0) {
    return;
  }
  FUN_710240c410(2,extraout_x1,(long *********)param_3,param_4,param_5,param_6,param_7,param_8);
  lVar8 = DAT_710532f8b8;
  lVar4 = *(long *)(*(long *)(DAT_710532f8b8 + 8) + 0x68);
  if (((DAT_710532f4d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710532f4d8), iVar3 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    lVar10 = *(long *)(lVar4 + 0x28);
  }
  else {
    lVar10 = *(long *)(lVar4 + 0x28);
  }
  if (lVar10 != 0) {
    lVar9 = lVar4 + 0x28;
    do {
      bVar1 = (*(ulong *)(lVar10 + 0x20) & 0xfffffffffe) < 0xea88dcf86;
      if (!bVar1) {
        lVar9 = lVar10;
      }
      lVar10 = *(long *)(lVar10 + (ulong)bVar1 * 8);
    } while (lVar10 != 0);
    if ((lVar9 != lVar4 + 0x28) && ((*(ulong *)(lVar9 + 0x20) & 0xffffffffff) < 0xea88dcf87)) {
      ppppppppplVar11 = (long *********)(lVar9 + 0x28);
      goto LAB_710235ac8c;
    }
  }
  ppppppppplVar11 = (long *********)&DAT_710532f4a4;
LAB_710235ac8c:
  if ((*(int *)ppppppppplVar11 != 0xffffff) &&
     (iVar3 = FUN_710330a8f0(*(long **)(lVar8 + 8),(ulong *)&DAT_710455da98,(long ****)0x0,param_4,
                             param_5,param_6,param_7,param_8), iVar3 != 0)) {
    FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar3,ppppppppplVar11,param_4,
                   param_5,param_6,param_7,param_8);
  }
  uVar7 = 0;
  FUN_7101aff780(*(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80),0,(long ****)0x0,
                 param_4,param_5,param_6,param_7,param_8);
  lVar4 = *(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80);
  FUN_7103776910(&local_40,**(long **)(lVar4 + 0x130) + 8,(long ****)"set_txt_key",uVar7,param_4,
                 param_5,param_6,param_7,param_8);
  plVar6 = local_38;
  lVar8 = *local_38;
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
  }
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar6);
  }
  *(undefined1 *)(lVar4 + 0x200) = 1;
  plVar6 = FUN_710356a030((long *)(DAT_7105338018 + 0x18),&DAT_71053395f8);
  lVar8 = *(long *)(plVar6[5] + 0x10);
  *(undefined8 *)(lVar8 + 0x58) = 0x3f80000000000000;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  lVar8 = DAT_7105335e90;
  if (*(char *)(DAT_7105337ce8 + 0x58d) == '\0') {
    *(undefined4 *)(*(long *)(DAT_7105335e90 + 8) + 0x1158) = 0;
    *(undefined1 *)(**(long **)(*(long *)(lVar8 + 8) + 0x20b8) + 0x321) = 1;
  }
  DAT_710593b448 = 0;
  if (0 < *(int *)(param_1 + 0x10c)) {
    *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + -1;
  }
  return;
}

