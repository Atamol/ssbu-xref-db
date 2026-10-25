// addr:      7102328100
// offset:    0x2328100
// name:      FUN_7102328100
// mangled:   
// signature: undefined __cdecl FUN_7102328100(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102328100(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *__s1;
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long ***local_48;
  undefined4 local_34;
  
  plVar2 = (long *)FUN_710392e290(0x10,0xf0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ***)&DAT_000000f0;
      param_3 = &local_48;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,0xf0,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar2 != (long *)0x0)) goto LAB_7102328180;
    }
    plVar2 = (long *)0x0;
  }
LAB_7102328180:
  plVar2[5] = 0;
  *plVar2 = param_1 + 0x50;
  plVar2[1] = (long)plVar2;
  plVar7 = plVar2 + 2;
  *plVar7 = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *(undefined4 *)(plVar2 + 0x1d) = 0xffffffff;
  *(undefined1 *)((long)plVar2 + 0xec) = 0;
  plVar2[6] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1c] = 0xffffffff;
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
  FUN_7103723a90(param_1 + 0x50,&DAT_7105328878,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar2[6] = (long)FUN_71023273b0;
  plVar2[7] = 0;
  plVar2[8] = (long)FUN_7102327650;
  plVar2[9] = 0;
  plVar2[10] = (long)FUN_71023278d0;
  plVar2[0xb] = 0;
  plVar2[0xe] = (long)FUN_7102327d60;
  plVar2[0xf] = 0;
  plVar2[0xc] = (long)FUN_7102327ae0;
  plVar2[0xd] = 0;
  plVar2[0x10] = (long)FUN_7102327f00;
  plVar2[0x11] = 0;
  puVar6 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar6 != (undefined8 *)0x0) {
    if (((DAT_7105328150 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328150), iVar1 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324750), iVar1 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105328158 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105328150);
    }
    for (puVar4 = (undefined8 *)(**(code **)*puVar6)(puVar6); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)*puVar4) {
      if ((undefined8 **)puVar4 == &DAT_7105328158) {
        iVar1 = *(int *)(puVar6 + 1);
        __s1 = (char *)(puVar6 + 2);
        if (iVar1 == 0x6d144d02) {
          iVar1 = strcmp(__s1,"SpiritsForceReturnScene");
          if (iVar1 != 0) break;
          *plVar7 = 0;
          plVar2[3] = 0;
          *(undefined8 *)((long)plVar2 + 0xdc) = 0xffffffff00000000;
          *(undefined8 *)((long)plVar2 + 0xe4) = 0xffffffff00000000;
          uVar5 = 3;
        }
        else {
          if (iVar1 == 0x4b905e5c) {
            iVar1 = strcmp(__s1,"UnlockSequenceScene");
            if (iVar1 == 0) {
              if (0x12 < *(uint *)((long)plVar2 + 0xdc)) goto LAB_71023283f4;
              *(undefined4 *)((long)plVar2 + (long)(int)*(uint *)((long)plVar2 + 0xdc) * 4 + 0x90) =
                   4;
              goto LAB_7102328320;
            }
            break;
          }
          if ((iVar1 != -0xed9486) || (iVar1 = strcmp(__s1,"CharaSelectScene"), iVar1 != 0)) break;
          *plVar7 = 0;
          plVar2[3] = 0;
          *(undefined8 *)((long)plVar2 + 0xdc) = 0xffffffff00000000;
          *(undefined8 *)((long)plVar2 + 0xe4) = 0xffffffff00000000;
          uVar5 = 1;
        }
        *(undefined8 *)((long)plVar2 + 0xd4) = 0;
        *(undefined8 *)((long)plVar2 + 0xcc) = 0;
        *(undefined8 *)((long)plVar2 + 0xc4) = 0;
        *(undefined8 *)((long)plVar2 + 0xbc) = 0;
        *(undefined8 *)((long)plVar2 + 0xb4) = 0;
        *(undefined8 *)((long)plVar2 + 0xac) = 0;
        *(undefined8 *)((long)plVar2 + 0xa4) = 0;
        *(undefined8 *)((long)plVar2 + 0x9c) = 0;
        *(undefined8 *)((long)plVar2 + 0x94) = 0;
        *(undefined1 *)((long)plVar2 + 0xec) = 0;
        *(undefined4 *)(plVar2 + 0x12) = uVar5;
        goto LAB_7102328320;
      }
    }
  }
  if (0x12 < *(uint *)((long)plVar2 + 0xdc)) {
LAB_71023283f4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)plVar2 + (long)(int)*(uint *)((long)plVar2 + 0xdc) * 4 + 0x90) = 0;
LAB_7102328320:
  plVar7 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar2;
  if (plVar7 != (long *)0x0) {
    FUN_7103723e70(*plVar7,&DAT_7105328878,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_710392eb40((ulong)plVar7);
    return;
  }
  return;
}

