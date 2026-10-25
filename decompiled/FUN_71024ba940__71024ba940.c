// addr:      71024ba940
// offset:    0x24ba940
// name:      FUN_71024ba940
// mangled:   
// signature: undefined __cdecl FUN_71024ba940(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


void FUN_71024ba940(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar5;
  
  if (*(int *)(param_1 + 0x24c) == 0) {
    if (((DAT_71053144d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), param_2 = extraout_x1_00, iVar4 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      param_2 = extraout_x1_01;
    }
    FUN_71014e1e90(&DAT_71052c51b0,param_2,param_3,param_4,param_5,param_6,(ulong)param_7,
                   (uint *)param_8);
    lVar5 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20);
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + 0x591b) = 2;
      pbVar1 = (byte *)(lVar5 + 0x5920);
      if (*pbVar1 - 3 < 2) {
        if ((*(byte *)(lVar5 + 0x591f) & 1) != 0) {
          FUN_7100655f60(lVar5,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
          *pbVar1 = 3;
          *(undefined1 *)(lVar5 + 0x5934) = 1;
        }
      }
      else if (*(int *)*DAT_71052c33d8 < 1 || *pbVar1 == 6) {
        FUN_7100655f60(lVar5,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        *pbVar1 = 5;
      }
    }
    *(undefined1 *)(param_1 + 0x2cc) = 0;
    FUN_71004eaa30(*(long *)(lib::Singleton<app::BossManager>::instance_ + 8));
    FUN_71004eb940();
    FUN_71032e4d70(*(long *)(DAT_710532f7c8 + 8),0,1,0,0,0,param_7,param_8);
  }
  else {
    bVar3 = FUN_71004ec3b0();
    if (bVar3) {
      if (0x12 < *(uint *)(param_1 + 0x244)) {
LAB_71024bac28:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x244) * 4 + 0x1f8) = 0x12;
    }
    else {
      if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_71052c51b6 == '\0') {
        uVar2 = DAT_71052c51b0 - 1;
        if ((uVar2 < 0x25) && ((0x1801fee495U >> ((ulong)uVar2 & 0x3f) & 1) != 0)) {
          return;
        }
      }
      else if (DAT_71052c51b0 == 0x19) {
        return;
      }
      lVar5 = *lib::Singleton<app::FighterManager>::instance_;
      if (*(long *)(lVar5 + 0x20) == 0) {
        if (*(long *)(lVar5 + 0x28) == 0) {
          if (*(long *)(lVar5 + 0x30) == 0) {
            if (*(long *)(lVar5 + 0x38) == 0) {
              if (*(long *)(lVar5 + 0x40) == 0) {
                if (*(long *)(lVar5 + 0x48) == 0) {
                  if (*(long *)(lVar5 + 0x50) == 0) {
                    if (*(long *)(lVar5 + 0x58) == 0) {
                      return;
                    }
                    lVar5 = 7;
                  }
                  else {
                    lVar5 = 6;
                  }
                }
                else {
                  lVar5 = 5;
                }
              }
              else {
                lVar5 = 4;
              }
            }
            else {
              lVar5 = 3;
            }
          }
          else {
            lVar5 = 2;
          }
        }
        else {
          lVar5 = 1;
        }
      }
      else {
        lVar5 = 0;
      }
      uVar2 = *(uint *)(DAT_71052c50f0 + lVar5 * 4 + 0x298);
      if (uVar2 != 0xffffffff) {
        if (9 < uVar2) goto LAB_71024bac28;
        if ((*(byte *)(*(long *)(DAT_710593b980 + 8) + (long)(int)uVar2 * 0x30 + 4) >> 6 & 1) != 0)
        {
          *(undefined1 *)(param_1 + 0x2cc) = 1;
          FUN_71004ec2a0();
          return;
        }
      }
    }
  }
  return;
}

