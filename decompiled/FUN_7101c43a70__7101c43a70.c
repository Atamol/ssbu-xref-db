// addr:      7101c43a70
// offset:    0x1c43a70
// name:      FUN_7101c43a70
// mangled:   
// signature: undefined __cdecl FUN_7101c43a70(long param_1, undefined8 param_2, uint param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c43a70(long param_1,undefined8 param_2,uint param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x80);
  if (*(undefined8 **)(lVar7 + 0x40) != (undefined8 *)0x0) {
    plVar3 = (long *)**(undefined8 **)(lVar7 + 0x40);
    if (plVar3 != (long *)0x0) {
      FUN_7103375650(plVar3,"IS_BACK",&DAT_71043cdb7b);
    }
    uVar4 = FUN_7101797350(0);
    uVar1 = (uint)uVar4 & 1;
    param_4 = (byte ****)(ulong)uVar1;
    if (((param_3 != 2) || (uVar6 = 0, (uVar4 & 1) != 0)) &&
       (uVar6 = 2, (param_3 == 0 & uVar1) == 0)) {
      uVar6 = param_3;
    }
    if ((long *)**(undefined8 **)(lVar7 + 0x40) != (long *)0x0) {
      FUN_7103375650((long *)**(undefined8 **)(lVar7 + 0x40),"MODE_INIT",&DAT_71042b2a84);
      if ((long *)**(undefined8 **)(lVar7 + 0x40) != (long *)0x0) {
        param_4 = (byte ****)(ulong)uVar6;
        FUN_7103375650((long *)**(undefined8 **)(lVar7 + 0x40),"BUTTON_ID_INIT",&DAT_71042b2a84);
      }
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    puVar5 = (undefined8 *)0x0;
    if ((long *)**(undefined8 **)(lVar7 + 0x40) != (long *)0x0) {
      param_4 = (byte ****)(ulong)(byte)DAT_7105306970;
      FUN_7103375650((long *)**(undefined8 **)(lVar7 + 0x40),"PRIORITY_RULE",&DAT_71043cdb7b);
      puVar5 = (undefined8 *)**(undefined8 **)(lVar7 + 0x40);
    }
    FUN_7103376980(puVar5);
  }
  if (*(undefined8 **)(lVar7 + 0x18) == *(undefined8 **)(lVar7 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_7103775dc0((long *)**(undefined8 **)**(undefined8 **)(lVar7 + 0x10),0,(long ****)&DAT_00001000
                 ,param_4,param_5,param_6,param_7,param_8);
  if (*(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x268) + 0x84ea) == '\0') {
    *(undefined8 *)(lVar7 + 0x50) = 0;
    *(undefined8 *)(lVar7 + 0x58) = 0;
    *(undefined4 *)(lVar7 + 0xec) = 0;
    *(undefined8 *)(lVar7 + 0xe4) = 0;
    *(undefined8 *)(lVar7 + 0xdc) = 0;
    *(undefined8 *)(lVar7 + 0xd4) = 0;
    *(undefined8 *)(lVar7 + 0xcc) = 0;
    *(undefined8 *)(lVar7 + 0xc4) = 0;
    *(undefined8 *)(lVar7 + 0xbc) = 0;
    *(undefined8 *)(lVar7 + 0xb4) = 0;
    *(undefined8 *)(lVar7 + 0xac) = 0;
    *(undefined8 *)(lVar7 + 0xa4) = 0;
    *(undefined8 *)(lVar7 + 0xf0) = 0xffffffff;
    *(undefined4 *)(lVar7 + 0xf8) = 0xffffffff;
    *(undefined1 *)(lVar7 + 0xfc) = 0;
    *(undefined4 *)(lVar7 + 0xa0) = 0;
  }
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}

