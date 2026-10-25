// addr:      710233bbc0
// offset:    0x233bbc0
// name:      FUN_710233bbc0
// mangled:   
// signature: undefined __cdecl FUN_710233bbc0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710233bbc0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x1;
  long *plVar6;
  long ********local_48;
  undefined4 local_34;
  
  plVar2 = (long *)FUN_710392e290(0x10,0x120,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ********)&DAT_00000120;
      param_3 = &local_48;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,0x120,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), plVar2 != (long *)0x0))
      goto LAB_710233bc40;
    }
    plVar2 = (long *)0x0;
  }
LAB_710233bc40:
  *plVar2 = param_1 + 0x50;
  plVar2[1] = (long)plVar2;
  *(undefined4 *)(plVar2 + 0x1f) = 0xffffffff;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined1 *)((long)plVar2 + 0xfc) = 0;
  plVar2[6] = 0;
  *(undefined2 *)(plVar2 + 0x21) = 0;
  plVar2[0x20] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1e] = 0xffffffff;
  plVar2[0x1b] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x19] = 0;
  plVar2[0x1a] = 0;
  plVar2[0x17] = 0;
  plVar2[0x18] = 0;
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
  puVar4 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ********)&DAT_00000080;
      param_3 = &local_48;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar4 != (undefined8 *)0x0)) goto LAB_710233bce8;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_710233bce8:
  *puVar4 = &PTR_FUN_7105181b40;
  puVar4[2] = 0;
  puVar4[1] = puVar4 + 2;
  puVar4[5] = 0;
  puVar4[3] = 0;
  puVar4[4] = puVar4 + 5;
  puVar4[8] = 0;
  puVar4[6] = 0;
  puVar4[7] = puVar4 + 8;
  puVar4[0xb] = 0;
  puVar4[9] = 0;
  puVar4[10] = puVar4 + 0xb;
  puVar4[0xc] = 0;
  *(undefined4 *)(puVar4 + 0xd) = 2;
  *(undefined4 *)(puVar4 + 0xf) = 0;
  puVar4[0xe] = 0;
  plVar2[0x22] = (long)puVar4;
  *(undefined1 *)(plVar2 + 0x23) = 0;
  FUN_7103723a90(*plVar2,&DAT_7105328bb0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  plVar2[6] = (long)FUN_710233a720;
  plVar2[7] = 0;
  plVar2[8] = (long)FUN_710233a750;
  plVar2[9] = 0;
  plVar2[0xc] = (long)FUN_710233a980;
  plVar2[0xd] = 0;
  plVar2[0xe] = (long)FUN_710233b450;
  plVar2[0xf] = 0;
  plVar2[10] = (long)FUN_710233a7d0;
  plVar2[0xb] = 0;
  plVar2[0x10] = (long)FUN_710233b710;
  plVar2[0x11] = 0;
  plVar2[0x12] = (long)FUN_710233b960;
  plVar2[0x13] = 0;
  if (0x12 < *(uint *)((long)plVar2 + 0xec)) {
LAB_710233bfcc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)plVar2 + (long)(int)*(uint *)((long)plVar2 + 0xec) * 4 + 0xa0) = 0;
  puVar4 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar4 != (undefined8 *)0x0) {
    if (((DAT_7105324750 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324750), iVar1 != 0)) {
      DAT_7105324758 = 0;
      __cxa_guard_release(&DAT_7105324750);
    }
    for (puVar5 = (undefined8 *)(**(code **)*puVar4)(puVar4); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)*puVar5) {
      if (puVar5 == &DAT_7105324758) {
        *(undefined1 *)(plVar2 + 0x20) = 1;
        *(undefined1 *)((long)plVar2 + 0x101) = *(undefined1 *)(puVar4 + 1);
        *(undefined1 *)((long)plVar2 + 0x102) = *(undefined1 *)((long)puVar4 + 9);
        *(undefined1 *)((long)plVar2 + 0x103) = *(undefined1 *)((long)puVar4 + 10);
        *(undefined1 *)((long)plVar2 + 0x104) = *(undefined1 *)((long)puVar4 + 0xb);
        *(undefined1 *)((long)plVar2 + 0x105) = *(undefined1 *)((long)puVar4 + 0xc);
        *(undefined1 *)((long)plVar2 + 0x106) = *(undefined1 *)((long)puVar4 + 0xd);
        *(undefined1 *)((long)plVar2 + 0x107) = *(undefined1 *)((long)puVar4 + 0xe);
        *(undefined1 *)(plVar2 + 0x21) = *(undefined1 *)((long)puVar4 + 0xf);
        *(undefined1 *)((long)plVar2 + 0x109) = *(undefined1 *)(puVar4 + 2);
        puVar4 = *(undefined8 **)(param_2 + 0xa8);
        goto joined_r0x00710233be5c;
      }
    }
    puVar4 = *(undefined8 **)(param_2 + 0xa8);
joined_r0x00710233be5c:
    if (puVar4 != (undefined8 *)0x0) {
      if (((DAT_7105328150 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328150), iVar1 != 0))
      {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&DAT_7105324750), iVar1 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105328158 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105328150);
      }
      for (puVar5 = (undefined8 *)(**(code **)*puVar4)(puVar4); puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)*puVar5) {
        if ((undefined8 **)puVar5 == &DAT_7105328158) {
          if ((((*(int *)(param_2 + 0x14) == -0x306e0e51) &&
               (iVar1 = strcmp((char *)(param_2 + 0x1c),"IngameCallSequenceScene"), iVar1 == 0)) &&
              (*(int *)(puVar4 + 1) == -0x7ee3623b)) && (*(char *)(puVar4 + 2) == '\0')) {
            if (0x12 < *(uint *)((long)plVar2 + 0xec)) goto LAB_710233bfcc;
            *(undefined4 *)((long)plVar2 + (long)(int)*(uint *)((long)plVar2 + 0xec) * 4 + 0xa0) = 1
            ;
          }
          break;
        }
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar2;
  if (plVar6 == (long *)0x0) {
    return;
  }
  FUN_7103723e70(*plVar6,&DAT_7105328bb0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  FUN_710323b9e0(plVar6[0x22],extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar2 = (long *)plVar6[0x22];
  plVar6[0x22] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_710392eb40((ulong)plVar6);
  return;
}

