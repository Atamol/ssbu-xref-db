// addr:      7102f0c680
// offset:    0x2f0c680
// name:      FUN_7102f0c680
// mangled:   
// signature: undefined __cdecl FUN_7102f0c680(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


void FUN_7102f0c680(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  FUN_71025d9250(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (2 < *(uint *)(param_1 + 0x17)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = *(long *)(DAT_710532a9d0 + (ulong)*(uint *)(param_1 + 0x17) * 8);
  puVar4 = *(uint **)(lVar6 + 0x228);
  do {
    if (puVar4 == *(uint **)(lVar6 + 0x230)) {
      FUN_7103720ec0(param_1 + 0xe7,0xffffff,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                     param_7,param_8);
LAB_7102f0c72c:
      plVar5 = (long *)**(long **)(param_1[0x60] + 0x18);
      while ((*(ulong *)(*plVar5 + 0xa0) & 0xffffffffff) != 0x7b569df99) {
        plVar5 = plVar5 + 1;
      }
      puVar7 = *(undefined8 **)(*plVar5 + 0x130);
      if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      puVar1 = (undefined8 *)*puVar7;
      puVar7 = (undefined8 *)puVar7[1];
      if (DAT_71052c51ba == '\0') {
        FUN_71025f55b0(puVar1,puVar7,"IPP0005");
      }
      else {
        FUN_71025f5420(puVar1,puVar7,"IPP0005");
      }
      FUN_7102f10a80(param_1 + 0x105,(long ****)"knuckles",(long ****)"silver",(byte ****)"tails",
                     (long ****)"S68_greenhill_RunPosition",6,7,5);
      return;
    }
    uVar2 = *puVar4;
    if (((uVar2 != 0xffffff) &&
        (uVar2 < *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4))) &&
       (*(long *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) + (ulong)uVar2 * 0x20 + 0x18)
        == 0x154e73159b)) {
      FUN_7103540a00(DAT_7105332f20,uVar2);
      FUN_7103720ec0(param_1 + 0xe7,uVar2,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                     param_7,param_8);
      FUN_7103540b10(DAT_7105332f20,uVar2,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                     param_7,param_8);
      goto LAB_7102f0c72c;
    }
    puVar4 = puVar4 + 1;
  } while( true );
}

