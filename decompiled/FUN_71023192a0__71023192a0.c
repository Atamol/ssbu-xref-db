// addr:      71023192a0
// offset:    0x23192a0
// name:      FUN_71023192a0
// mangled:   
// signature: undefined8 __cdecl FUN_71023192a0(long * param_1, undefined8 param_2, long * param_3)


undefined8 FUN_71023192a0(long *param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  long lVar7;
  
  lVar7 = param_1[0x1d];
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 == 0xc7ba50f1d) {
    return 1;
  }
  if (((((lVar4 != 0xbcd1970ce) || ((int)param_3[1] != -0x306e0e51)) ||
       (iVar3 = strcmp((char *)(param_3 + 2),"IngameCallSequenceScene"), iVar3 != 0)) ||
      (((int)param_3[10] != 0x64769d67 ||
       (iVar3 = strcmp((char *)(param_3 + 0xb),"MeleeScene"), iVar3 != 0)))) ||
     ((*(int *)(lVar7 + 0x178) != 4 || (DAT_71052c3760 == (long *)0x0)))) goto LAB_710231945c;
  cVar2 = *(char *)(*DAT_71052c3760 + 10);
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  bVar1 = DAT_710530e394 != '\0';
  DAT_710530e394 = cVar2;
  if ((bVar1) || (cVar2 == '\0')) goto LAB_710231945c;
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_710530a97c - 1 < 4) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      lVar4 = 0x239e0;
LAB_71023195e4:
      puVar6 = (undefined2 *)((long)&DAT_71052c5180 + lVar4);
    }
    else {
      puVar6 = &DAT_71052e8b60;
    }
  }
  else {
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      lVar4 = 0x7458;
      goto LAB_71023195e4;
    }
    puVar6 = (undefined2 *)&DAT_71052cc5d8;
  }
  DAT_71053083dc._0_4_ = (undefined4)*(undefined8 *)(puVar6 + 0x1bbc);
  DAT_71053083dc._4_4_ = (undefined4)*(undefined8 *)(puVar6 + 0x37ec);
  DAT_71053083e4._0_4_ = (undefined4)*(undefined8 *)(puVar6 + 0x541c);
  DAT_71053083e4._4_4_ = (undefined4)*(undefined8 *)(puVar6 + 0x704c);
  DAT_71053083ec._0_4_ = (undefined4)*(undefined8 *)(puVar6 + 0x8c7c);
  DAT_71053083ec._4_4_ = (undefined4)*(undefined8 *)(puVar6 + 0xa8ac);
  DAT_71053083f4._0_4_ = (undefined4)*(undefined8 *)(puVar6 + 0xc4dc);
  DAT_71053083f4._4_4_ = (undefined4)*(undefined8 *)(puVar6 + 0xe10c);
LAB_710231945c:
                    /* WARNING: Could not recover jumptable at 0x007102319480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3);
  return uVar5;
}

