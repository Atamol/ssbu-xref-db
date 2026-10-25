// addr:      7102367240
// offset:    0x2367240
// name:      FUN_7102367240
// mangled:   
// signature: undefined __cdecl FUN_7102367240(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102367240(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long ****pppplVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long ***local_50;
  undefined4 local_44;
  
  pppplVar7 = &local_50;
  plVar4 = (long *)FUN_710392e290(0x10,0x2310,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)0x2310;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar5 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x2310,pppplVar7,param_4,param_5,param_6,param_7,
                                          param_8), plVar4 != (long *)0x0)) goto LAB_71023672c0;
    }
    plVar4 = (long *)0x0;
  }
LAB_71023672c0:
  plVar4[3] = 0;
  *plVar4 = param_1 + 0x50;
  plVar4[1] = (long)plVar4;
  plVar4[2] = 0;
  *(undefined4 *)((long)plVar4 + 0x15c) = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[0x2c] = 0xffffffff;
  *(undefined4 *)(plVar4 + 0x2d) = 0xffffffff;
  *(undefined1 *)((long)plVar4 + 0x16c) = 0;
  memset(plVar4 + 6,0,300);
  *(undefined2 *)(plVar4 + 0x2e) = 0;
  *(undefined4 *)((long)plVar4 + 0x174) = 0;
  lVar10 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  *(undefined2 *)(plVar4 + 0x31) = 0x100;
  plVar4[0x2f] = lVar10;
  plVar4[0x30] = 0;
  *(undefined8 *)((long)plVar4 + 0x18c) = 0x100000000;
  *(undefined1 *)((long)plVar4 + 0x19c) = 0;
  *(undefined8 *)((long)plVar4 + 0x194) = 0;
  *(undefined1 *)((long)plVar4 + 0x1e4) = 0;
  *(undefined8 *)((long)plVar4 + 0x1dc) = 0;
  *(undefined1 *)((long)plVar4 + 0x22c) = 0;
  *(undefined8 *)((long)plVar4 + 0x224) = 0;
  memset((void *)((long)plVar4 + 0x26c),0,0x1000);
  *(undefined1 *)((long)plVar4 + 0x126c) = 1;
  *(undefined4 *)(plVar4 + 0x24e) = 0;
  *(undefined1 *)((long)plVar4 + 0x1274) = 1;
  *(undefined1 *)(plVar4 + 0x250) = 0;
  ppuVar8 = (undefined **)&DAT_00001000;
  plVar4[0x24f] = 0;
  *(undefined4 *)(plVar4 + 600) = 0x20;
  memset(plVar4 + 0x262,0,0x1000);
  *(undefined8 *)((long)plVar4 + 0x12c9) = 0;
  *(undefined8 *)((long)plVar4 + 0x12c4) = 0;
  FUN_7103723a90(param_1 + 0x50,&DAT_7105329228,(long ****)ppuVar8,param_4,param_5,param_6,param_7,
                 param_8);
  plVar4[6] = (long)FUN_7102364560;
  plVar4[7] = 0;
  plVar4[8] = (long)FUN_71023646a0;
  plVar4[9] = 0;
  plVar4[10] = (long)FUN_7102364840;
  plVar4[0xb] = 0;
  plVar4[0xe] = (long)FUN_71023651c0;
  plVar4[0xf] = 0;
  plVar4[0x10] = (long)FUN_7102365460;
  plVar4[0x11] = 0;
  plVar4[0x14] = (long)FUN_7102365b70;
  plVar4[0x15] = 0;
  plVar4[0x16] = (long)FUN_7102365d30;
  plVar4[0x17] = 0;
  plVar4[0x1a] = (long)FUN_7102366370;
  plVar4[0x1b] = 0;
  plVar4[0x1c] = (long)FUN_71023665b0;
  plVar4[0x1d] = 0;
  plVar4[0xc] = (long)FUN_7102364880;
  plVar4[0xd] = 0;
  plVar4[0x12] = (long)FUN_7102365670;
  plVar4[0x13] = 0;
  plVar4[0x18] = (long)FUN_7102365ef0;
  plVar4[0x19] = 0;
  plVar4[0x1e] = (long)FUN_71023668f0;
  plVar4[0x1f] = 0;
  plVar4[0x20] = (long)FUN_7102366ba0;
  plVar4[0x21] = 0;
  if (*(uint *)((long)plVar4 + 0x15c) < 0x13) {
    *(undefined4 *)((long)plVar4 + (long)(int)*(uint *)((long)plVar4 + 0x15c) * 4 + 0x110) = 3;
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      ppuVar8 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    DAT_71053050f0 = 0x6000000;
    puVar11 = *(undefined8 **)(param_2 + 0xa8);
    if (puVar11 != (undefined8 *)0x0) {
      if (((DAT_7105328150 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_7105328150), iVar3 != 0))
      {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&DAT_7105324750), iVar3 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105328158 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105328150);
      }
      for (puVar6 = (undefined8 *)(**(code **)*puVar11)(puVar11); puVar6 != (undefined8 *)0x0;
          puVar6 = (undefined8 *)*puVar6) {
        if ((undefined8 **)puVar6 == &DAT_7105328158) {
          uVar5 = FUN_7102366d30((long)plVar4,(uint *)(puVar11 + 1));
          if ((uVar5 & 1) == 0) {
            plVar4[2] = 0;
            plVar4[3] = 0;
            plVar4[0x2c] = 0xffffffff;
            *(undefined4 *)(plVar4 + 0x2d) = 0xffffffff;
            *(undefined1 *)((long)plVar4 + 0x16c) = 0;
            plVar4[0x2a] = 0;
            plVar4[0x2b] = 0;
            plVar4[0x28] = 0;
            plVar4[0x29] = 0;
            plVar4[0x26] = 0;
            plVar4[0x27] = 0;
            plVar4[0x24] = 0;
            plVar4[0x25] = 0;
            plVar4[0x22] = 0;
            plVar4[0x23] = 0;
            iVar3 = *(int *)((long)puVar11 + 0x54);
            *(int *)((long)plVar4 + 0x174) = iVar3;
            if (iVar3 == 3) {
              uVar9 = 0xc;
LAB_710236754c:
              DAT_7105308130 = 1;
            }
            else {
              if (iVar3 == 2) {
                uVar9 = 4;
                goto LAB_710236754c;
              }
              if (iVar3 == 1) {
                uVar9 = 6;
                goto LAB_710236754c;
              }
              DAT_7105308130 = 0;
              uVar9 = 3;
            }
            *(undefined4 *)(plVar4 + 0x22) = uVar9;
            *(undefined4 *)((long)plVar4 + 0x15c) = 1;
            *(undefined4 *)((long)plVar4 + 0x114) = 2;
          }
          if (*(uint *)(puVar11 + 1) == 0xbe42ef4f) {
            iVar3 = strcmp((char *)(puVar11 + 2),"OptionOnlineScene");
            bVar2 = iVar3 == 0;
          }
          else {
            bVar2 = false;
          }
          *(bool *)((long)plVar4 + 0x171) = bVar2;
          *(undefined1 *)(plVar4 + 0x2e) = *(undefined1 *)(puVar11 + 10);
          break;
        }
      }
    }
    if (*(int *)((long)plVar4 + 0x15c) < 0x12) {
      uVar1 = *(int *)((long)plVar4 + 0x15c) + 1;
      *(uint *)((long)plVar4 + 0x15c) = uVar1;
      if (0x12 < uVar1) goto LAB_71023676ac;
      *(undefined4 *)((long)plVar4 + (long)(int)uVar1 * 4 + 0x110) = 0;
    }
    plVar12 = *(long **)(param_1 + 0xe8);
    *(long **)(param_1 + 0xe8) = plVar4;
    if (plVar12 != (long *)0x0) {
      FUN_7103723e70(*plVar12,&DAT_7105329228,(long ****)ppuVar8,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_710392eb40((ulong)plVar12);
      return;
    }
    return;
  }
LAB_71023676ac:
                    /* WARNING: Subroutine does not return */
  abort();
}

