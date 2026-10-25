// addr:      7102d09dc0
// offset:    0x2d09dc0
// name:      FUN_7102d09dc0
// mangled:   
// signature: undefined __cdecl FUN_7102d09dc0(long param_1, uint param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102d09dc0(long param_1,uint param_2,ulong param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x300);
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  FUN_710262bb40(lVar5,uVar1);
  FUN_710262beb0(lVar5,~uVar1);
  FUN_710262c200(*(long *)(param_1 + 0x300),param_2);
  if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((param_2 != 3) && (param_2 != 0 || DAT_71052c51ba == '\0')) && ((param_3 & 1) == 0)) {
    return;
  }
  uVar1 = (int)(*(int *)(*(long *)(param_1 + 0xb68) + 0x18) - (uint)(param_2 == 0)) % 4;
  uVar4 = (ulong)uVar1;
  if (uVar1 < 4) {
    FUN_71025f7350(*(long *)(*(long *)(param_1 + 0x318) + 0x10),
                   *(byte **)(&DAT_7105131ba0 + uVar4 * 8));
    FUN_7102633a10(*(long *)(param_1 + 0x318),(long *********)(&PTR_s_chara00_7105131bc0)[uVar4],1,
                   param_4,param_5,param_6,param_7,param_8);
    uVar3 = 1;
    FUN_7102633b90(*(long *)(param_1 + 0x318),(long *********)(&PTR_s_stage00_7105131be0)[uVar4],1,
                   param_4,param_5,param_6,param_7,param_8);
    FUN_7102633800(*(long *)(param_1 + 0x318),
                   (long *********)(&PTR_s_reflection_cubemap00_7105131c00)[uVar4],uVar3,param_4,
                   param_5,param_6,param_7,param_8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

