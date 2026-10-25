// addr:      7103098540
// offset:    0x3098540
// name:      FUN_7103098540
// mangled:   
// signature: undefined __cdecl FUN_7103098540(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103098540(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined **ppuVar4;
  ulong uVar5;
  
  if (7 < *(uint *)(param_1 + 0x7e0)) goto LAB_7103098688;
  uVar5 = (ulong)*(uint *)(&DAT_7104470fc0 + (long)(int)*(uint *)(param_1 + 0x7e0) * 4);
  FUN_710260fdd0(uVar5,*(long *)(param_1 + 0x7c8),1);
  FUN_710260fdd0(uVar5,*(long *)(param_1 + 0x7d8),1);
  FUN_710260fdd0(uVar5,*(long *)(param_1 + 2000),1);
  uVar2 = *(uint *)(param_1 + 0x7e0);
  FUN_7102633910(*(long *)(param_1 + 0x318),(long *********)"render_param",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7102633800(*(long *)(param_1 + 0x318),(long *********)"reflection_cubemap",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  if (*(uint *)(param_1 + 8) < 0x16c) {
    lVar3 = *(long *)(param_1 + 0x318);
    if ((&DAT_710454a7f0)[(long)(int)*(uint *)(param_1 + 8) * 0x12] != 2) {
      if (7 < uVar2) goto LAB_7103098688;
      goto LAB_7103098618;
    }
    if (7 < uVar2) goto LAB_7103098688;
    ppuVar4 = &PTR_s_B_chara_spring_710516ad68;
  }
  else {
    if (7 < uVar2) goto LAB_7103098688;
    lVar3 = *(long *)(param_1 + 0x318);
LAB_7103098618:
    ppuVar4 = &PTR_s_E_chara_spring_710516ada8;
  }
  FUN_7102633a10(lVar3,(long *********)ppuVar4[(int)uVar2],1,param_4,param_5,param_6,param_7,param_8
                );
  FUN_7102633b90(*(long *)(param_1 + 0x318),
                 (long *********)(&PTR_s_stage_spring_710516b730)[(int)uVar2],1,param_4,param_5,
                 param_6,param_7,param_8);
  uVar2 = *(uint *)(param_1 + 0x7e0);
  lVar3 = *(long *)(*(long *)(param_1 + 0x318) + 0x10);
  *(undefined1 *)(lVar3 + 0x25) = 1;
  if (uVar2 < 8) {
    uVar1 = *(undefined4 *)(&DAT_710455c64c + (long)(int)uVar2 * 8);
    *(undefined4 *)(lVar3 + 0x48) = uVar1;
    *(undefined4 *)(param_1 + 0x7e8) = uVar1;
    return;
  }
LAB_7103098688:
                    /* WARNING: Subroutine does not return */
  abort();
}

