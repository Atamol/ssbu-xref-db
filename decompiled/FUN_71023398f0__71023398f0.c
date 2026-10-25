// addr:      71023398f0
// offset:    0x23398f0
// name:      FUN_71023398f0
// mangled:   
// signature: undefined __cdecl FUN_71023398f0(long param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71023398f0(long param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  long ***local_58;
  undefined4 local_44;
  
  plVar2 = (long *)FUN_710392e290(0x10,0xd8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&DAT_000000d8;
      param_3 = (undefined **)&local_58;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar3 & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,0xd8,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), plVar2 != (long *)0x0))
      goto LAB_7102339974;
    }
    plVar2 = (long *)0x0;
  }
LAB_7102339974:
  *plVar2 = param_1 + 0x50;
  plVar2[1] = (long)plVar2;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 0x19) = 0xffffffff;
  *(undefined1 *)((long)plVar2 + 0xcc) = 0;
  plVar2[6] = 0;
  *(undefined4 *)(plVar2 + 0x1a) = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[0x17] = 0;
  plVar2[0x18] = 0xffffffff;
  plVar2[0x15] = 0;
  plVar2[0x16] = 0;
  plVar2[0x13] = 0;
  plVar2[0x14] = 0;
  plVar2[0x11] = 0;
  plVar2[0x12] = 0;
  plVar2[0xf] = 0;
  plVar2[0x10] = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  FUN_7103723a90(param_1 + 0x50,&DAT_7105328b88,(long ****)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  plVar2[6] = (long)FUN_7102339430;
  plVar2[7] = 0;
  plVar2[8] = (long)FUN_7102339460;
  plVar2[9] = 0;
  plVar2[10] = (long)FUN_71023394a0;
  plVar2[0xb] = 0;
  plVar2[0xc] = (long)FUN_71023395c0;
  plVar2[0xd] = 0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053144d8), iVar1 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71052c51b0 & 0xfe) != 10) || (DAT_71052c36c8 != (long *)0x0)) goto LAB_7102339a90;
  plVar4 = (long *)FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  uVar6 = extraout_x1;
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&DAT_00000010;
      param_3 = (undefined **)&local_58;
      auVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      uVar6 = auVar10._8_8_;
      if (((auVar10._0_8_ & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), uVar6 = extraout_x1_00,
         plVar4 != (long *)0x0)) goto LAB_7102339a84;
    }
    plVar4 = (long *)0x0;
  }
LAB_7102339a84:
  FUN_71014cd420(plVar4,uVar6,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  DAT_71052c36c8 = plVar4;
LAB_7102339a90:
  puVar9 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar9 != (undefined8 *)0x0) {
    if (((DAT_7105328150 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328150), iVar1 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324750), iVar1 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105328158 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105328150);
    }
    for (puVar5 = (undefined8 *)(**(code **)*puVar9)(puVar9); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)*puVar5) {
      if ((undefined8 **)puVar5 == &DAT_7105328158) {
        if ((*(int *)(puVar9 + 1) == 0x64769d67) &&
           (iVar1 = strcmp((char *)(puVar9 + 2),"MeleeScene"), iVar1 == 0)) {
          *(undefined4 *)(plVar2 + 0x1a) = 2;
          uVar7 = *(uint *)((long)plVar2 + 0xbc);
          if (0x12 < uVar7) goto LAB_7102339c7c;
          uVar8 = 1;
          goto LAB_7102339b10;
        }
        break;
      }
    }
  }
  uVar7 = *(uint *)((long)plVar2 + 0xbc);
  if (0x12 < uVar7) {
LAB_7102339c7c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar8 = 0;
LAB_7102339b10:
  *(undefined4 *)((long)plVar2 + (long)(int)uVar7 * 4 + 0x70) = uVar8;
  plVar4 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar2;
  if (plVar4 != (long *)0x0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053144d8), iVar1 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (((DAT_71052c51b0 & 0xfe) == 10) && (DAT_71052c36c8 != (long *)0x0)) {
      (**(code **)(*DAT_71052c36c8 + 8))();
      DAT_71052c36c8 = (long *)0x0;
    }
    FUN_7103723e70(*plVar4,&DAT_7105328b88,(long ****)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_710392eb40((ulong)plVar4);
    return;
  }
  return;
}

