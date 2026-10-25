// addr:      7102336c90
// offset:    0x2336c90
// name:      FUN_7102336c90
// mangled:   
// signature: undefined __cdecl FUN_7102336c90(long param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102336c90(long param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *__s1;
  bool bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x1;
  uint uVar7;
  undefined4 uVar8;
  long *plVar9;
  long ********local_68;
  undefined4 local_54;
  
  plVar3 = (long *)FUN_710392e290(0x10,0x140,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_68 = (long ********)&DAT_00000140;
      param_3 = (undefined **)&local_68;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar4 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,0x140,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), plVar3 != (long *)0x0))
      goto LAB_7102336d18;
    }
    plVar3 = (long *)0x0;
  }
LAB_7102336d18:
  *plVar3 = param_1 + 0x50;
  plVar3[1] = (long)plVar3;
  *(undefined4 *)(plVar3 + 0x25) = 0xffffffff;
  plVar3[2] = 0;
  plVar3[3] = 0;
  *(undefined1 *)((long)plVar3 + 300) = 0;
  plVar3[6] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[0x23] = 0;
  plVar3[0x24] = 0xffffffff;
  plVar3[0x21] = 0;
  plVar3[0x22] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x20] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x1e] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1a] = 0;
  plVar3[0x17] = 0;
  plVar3[0x18] = 0;
  plVar3[0x15] = 0;
  plVar3[0x16] = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_68 = (long ********)&DAT_00000080;
      param_3 = (undefined **)&local_68;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar4 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar5 != (undefined8 *)0x0)) goto LAB_7102336dc4;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7102336dc4:
  *puVar5 = &PTR_FUN_7105181b40;
  puVar5[2] = 0;
  puVar5[1] = puVar5 + 2;
  puVar5[5] = 0;
  puVar5[3] = 0;
  puVar5[4] = puVar5 + 5;
  puVar5[8] = 0;
  puVar5[6] = 0;
  puVar5[7] = puVar5 + 8;
  puVar5[0xb] = 0;
  puVar5[9] = 0;
  puVar5[10] = puVar5 + 0xb;
  *(undefined4 *)(puVar5 + 0xd) = 3;
  puVar5[0xc] = 0;
  *(undefined4 *)(puVar5 + 0xf) = 0;
  puVar5[0xe] = 0;
  *(undefined2 *)(puVar5 + 0xf) = 0x101;
  plVar3[0x26] = (long)puVar5;
  *(undefined2 *)(plVar3 + 0x27) = 0;
  *(undefined1 *)((long)plVar3 + 0x13a) = 0;
  *(undefined4 *)((long)plVar3 + 0x13c) = 0;
  FUN_7103723a90(*plVar3,&DAT_7105328ad0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if ((*(int *)(param_2 + 0x5c) == 0x7db37975) &&
     (iVar2 = strcmp((char *)(param_2 + 100),"AmiiboSequenceScene"), iVar2 == 0)) {
    DAT_71053050f0 = 0x2010000;
    *(undefined1 *)((long)plVar3 + 0x139) = 1;
  }
  *(bool *)(plVar3 + 0x27) = DAT_71053050f0 == 0x2030100;
  plVar3[0x18] = (long)FUN_71023367c0;
  plVar3[0x19] = 0;
  plVar3[6] = (long)FUN_71023341a0;
  plVar3[7] = 0;
  plVar3[10] = (long)FUN_7102334830;
  plVar3[0xb] = 0;
  plVar3[8] = (long)FUN_71023342b0;
  plVar3[9] = 0;
  plVar3[0x10] = (long)FUN_71023353a0;
  plVar3[0x11] = 0;
  plVar3[0xc] = (long)FUN_7102334ed0;
  plVar3[0xd] = 0;
  plVar3[0xe] = (long)FUN_7102335820;
  plVar3[0xf] = 0;
  plVar3[0x12] = (long)FUN_7102336040;
  plVar3[0x13] = 0;
  plVar3[0x14] = (long)FUN_7102336340;
  plVar3[0x15] = 0;
  plVar3[0x16] = (long)FUN_7102336560;
  plVar3[0x17] = 0;
  plVar9 = (long *)**(undefined8 **)(DAT_710532f7d0 + 8);
  if ((plVar9 != (long *)0x0) && (uVar4 = (**(code **)(*plVar9 + 0x48))(plVar9), (uVar4 & 1) == 0))
  {
    (**(code **)(*plVar9 + 0x28))(plVar9,1);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_71053050f4 != '\0') {
    *(undefined1 *)((long)plVar3 + 0x13a) = 1;
  }
  puVar5 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar5 != (undefined8 *)0x0) {
    if (((DAT_7105328150 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_7105328150), iVar2 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_7105324750), iVar2 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105328158 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105328150);
    }
    for (puVar6 = (undefined8 *)(**(code **)*puVar5)(puVar5); puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)*puVar6) {
      if ((undefined8 **)puVar6 == &DAT_7105328158) {
        uVar7 = *(uint *)(puVar5 + 1);
        __s1 = (char *)(puVar5 + 2);
        if (uVar7 == 0x41240e3f) {
          iVar2 = strcmp(__s1,"SpecialVariousScene");
          if (iVar2 == 0) {
            uVar7 = *(uint *)((long)plVar3 + 0x11c);
            if (0x12 < uVar7) goto LAB_7102337300;
            uVar8 = 3;
            goto LAB_7102336fcc;
          }
        }
        else if (uVar7 == 0xf8973ff9) {
          iVar2 = strcmp(__s1,"MeleeRuleScene");
          if (iVar2 == 0) {
            uVar7 = *(uint *)((long)plVar3 + 0x11c);
            if (0x12 < uVar7) goto LAB_7102337300;
            uVar8 = 2;
            goto LAB_7102336fcc;
          }
        }
        else if (0xe33b8f26 < uVar7) {
          if (uVar7 == 0xff126b7a) {
            iVar2 = strcmp(__s1,"CharaSelectScene");
            if (iVar2 == 0) {
              uVar7 = *(uint *)((long)plVar3 + 0x11c);
              if (0x12 < uVar7) goto LAB_7102337300;
              uVar8 = 5;
              goto LAB_7102336fcc;
            }
          }
          else if ((uVar7 == 0xe33b8f27) && (iVar2 = strcmp(__s1,"StageSelectScene"), iVar2 == 0)) {
            uVar7 = *(uint *)((long)plVar3 + 0x11c);
            if (0x12 < uVar7) goto LAB_7102337300;
            uVar8 = 4;
            goto LAB_7102336fcc;
          }
        }
        break;
      }
    }
  }
  uVar7 = *(uint *)((long)plVar3 + 0x11c);
  if (0x12 < uVar7) {
LAB_7102337300:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar8 = 0;
LAB_7102336fcc:
  *(undefined4 *)((long)plVar3 + (long)(int)uVar7 * 4 + 0xd0) = uVar8;
  plVar9 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar3;
  if (plVar9 != (long *)0x0) {
    plVar3 = (long *)**(undefined8 **)(DAT_710532f7d0 + 8);
    if ((plVar3 != (long *)0x0) && (uVar4 = (**(code **)(*plVar3 + 0x48))(plVar3), (uVar4 & 1) != 0)
       ) {
      (**(code **)(*plVar3 + 0x30))(plVar3);
    }
    FUN_7103723e70(*plVar9,&DAT_7105328ad0,(long ****)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    puVar5 = *(undefined8 **)(DAT_710593b990 + 8);
    puVar5[2] = 0xffffffffffffffff;
    puVar5[3] = 0xffffffffffffffff;
    *puVar5 = 0xffffffffffffffff;
    puVar5[1] = 0xffffffffffffffff;
    FUN_710323b9e0(plVar9[0x26],extraout_x1,(long *********)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    plVar3 = (long *)plVar9[0x26];
    plVar9[0x26] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    FUN_710392eb40((ulong)plVar9);
  }
  if ((*(int *)(param_2 + 0x5c) == -0x2e04f471) &&
     (iVar2 = strcmp((char *)(param_2 + 100),"MenuSequenceScene"), iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(*(long *)(param_1 + 0xe8) + 0x139) == '\0';
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053050f0 & 0x7f000000) != 0x7000000) && (!bVar1 && DAT_71053050f4 == '\0')) {
    FUN_710178c070(&DAT_71053050f0);
    return;
  }
  return;
}

