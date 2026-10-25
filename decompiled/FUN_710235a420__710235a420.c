// addr:      710235a420
// offset:    0x235a420
// name:      FUN_710235a420
// mangled:   
// signature: undefined __cdecl FUN_710235a420(long param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710235a420(long param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char *__s1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long ****pppplVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long ***local_50;
  undefined4 local_44;
  
  pppplVar6 = &local_50;
  plVar3 = (long *)FUN_710392e290(0x10,0xf0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&DAT_000000f0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      param_3 = (undefined **)pppplVar6;
      if (((uVar4 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,0xf0,pppplVar6,param_4,param_5,param_6,param_7,
                                          param_8), param_3 = (undefined **)pppplVar6,
         plVar3 != (long *)0x0)) goto LAB_710235a4a0;
    }
    plVar3 = (long *)0x0;
  }
LAB_710235a4a0:
  *(undefined4 *)(plVar3 + 0x1d) = 0xffffffff;
  *plVar3 = param_1 + 0x50;
  plVar3[1] = (long)plVar3;
  *(undefined1 *)((long)plVar3 + 0xec) = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[6] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x1c] = 0xffffffff;
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
  FUN_7103723a90(param_1 + 0x50,&DAT_7105329118,(long ****)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  plVar3[6] = (long)FUN_7102359850;
  plVar3[7] = 0;
  plVar3[10] = (long)FUN_71023599d0;
  plVar3[0xb] = 0;
  plVar3[0xc] = (long)FUN_7102359c90;
  plVar3[0xd] = 0;
  *(undefined4 *)((long)plVar3 + 0xdc) = 0;
  plVar3[8] = (long)FUN_71023599c0;
  plVar3[9] = 0;
  *(undefined8 *)((long)plVar3 + 0xd4) = 0;
  *(undefined8 *)((long)plVar3 + 0xcc) = 0;
  *(undefined8 *)((long)plVar3 + 0xc4) = 0;
  *(undefined8 *)((long)plVar3 + 0xbc) = 0;
  *(undefined8 *)((long)plVar3 + 0xb4) = 0;
  *(undefined8 *)((long)plVar3 + 0xac) = 0;
  *(undefined8 *)((long)plVar3 + 0xa4) = 0;
  *(undefined8 *)((long)plVar3 + 0x9c) = 0;
  *(undefined8 *)((long)plVar3 + 0x94) = 0;
  plVar3[0x1c] = 0xffffffff;
  *(undefined4 *)(plVar3 + 0x1d) = 0xffffffff;
  *(undefined1 *)((long)plVar3 + 0xec) = 0;
  plVar3[0x10] = (long)FUN_710235a080;
  plVar3[0x11] = 0;
  *(undefined4 *)(plVar3 + 0x12) = 2;
  plVar3[0xe] = (long)FUN_7102359e80;
  plVar3[0xf] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  FUN_710235a280(plVar3 + 1);
  if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  DAT_71053050f0 = 0x8000000;
  puVar9 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar9 != (undefined8 *)0x0) {
    if (((DAT_7105328150 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_7105328150), iVar2 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_7105324750), iVar2 != 0))
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
        uVar1 = *(uint *)(puVar9 + 1);
        __s1 = (char *)(puVar9 + 2);
        if (uVar1 < 0x31d55d5d) {
          if ((uVar1 != 0x25318213) || (iVar2 = strcmp(__s1,"DlcStaffRollScene"), iVar2 != 0))
          break;
          if (0x11 < *(int *)((long)plVar3 + 0xdc)) goto LAB_710235a6f8;
          uVar1 = *(int *)((long)plVar3 + 0xdc) + 1;
          *(uint *)((long)plVar3 + 0xdc) = uVar1;
          if (0x12 < uVar1) goto LAB_710235a7c8;
          lVar7 = (long)plVar3 + (long)(int)uVar1 * 4;
          uVar8 = 5;
        }
        else if (uVar1 == 0x31d55d5d) {
          iVar2 = strcmp(__s1,"TechnicScene");
          if (iVar2 != 0) break;
          if (0x11 < *(int *)((long)plVar3 + 0xdc)) goto LAB_710235a6f8;
          uVar1 = *(int *)((long)plVar3 + 0xdc) + 1;
          *(uint *)((long)plVar3 + 0xdc) = uVar1;
          if (0x12 < uVar1) goto LAB_710235a7c8;
          lVar7 = (long)plVar3 + (long)(int)uVar1 * 4;
          uVar8 = 3;
        }
        else {
          if ((uVar1 != 0xa1361928) || (iVar2 = strcmp(__s1,"SkillListScene"), iVar2 != 0)) break;
          if (0x11 < *(int *)((long)plVar3 + 0xdc)) goto LAB_710235a6f8;
          uVar1 = *(int *)((long)plVar3 + 0xdc) + 1;
          *(uint *)((long)plVar3 + 0xdc) = uVar1;
          if (0x12 < uVar1) goto LAB_710235a7c8;
          lVar7 = (long)plVar3 + (long)(int)uVar1 * 4;
          uVar8 = 4;
        }
        *(undefined4 *)(lVar7 + 0x90) = uVar8;
        break;
      }
    }
  }
  if (*(int *)((long)plVar3 + 0xdc) < 0x12) {
    uVar1 = *(int *)((long)plVar3 + 0xdc) + 1;
    *(uint *)((long)plVar3 + 0xdc) = uVar1;
    if (0x12 < uVar1) {
LAB_710235a7c8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)((long)plVar3 + (long)(int)uVar1 * 4 + 0x90) = 0;
  }
LAB_710235a6f8:
  plVar10 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar3;
  if (plVar10 != (long *)0x0) {
    FUN_7103723e70(*plVar10,&DAT_7105329118,(long ****)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_710392eb40((ulong)plVar10);
    return;
  }
  return;
}

