// addr:      710148c970
// offset:    0x148c970
// name:      FUN_710148c970
// mangled:   
// signature: undefined __cdecl FUN_710148c970(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710148c970(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  long ***ppplVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  long ****pppplVar7;
  byte ****ppppbVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long ***local_48;
  long ***local_40;
  long ***local_38;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x1dc) == 0) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x1f0) + 0x80);
    *(undefined4 *)(lVar10 + 0x3c) =
         *(undefined4 *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24);
    FUN_7103776640(&local_48,lVar10 + 0x18,(byte ****)"set_parts_sp",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_7103399950(*(undefined1 **)(lVar10 + 0x40),(long)&local_48,(long ****)"set_txt_num_sp",
                   0x71043cf8dc,param_5,param_6,param_7,param_8);
    pcVar6 = "anim_count";
    FUN_7103399a70(*(long *)(lVar10 + 0x40),(long)&local_48,(long ****)"anim_count",
                   (byte ****)"anim_stop",param_5,param_6,param_7,param_8);
    lVar11 = *(long *)(lVar10 + 0x40);
    *(undefined8 *)(lVar11 + 0x58) = 0x205bf6fc80;
    *(undefined8 *)(lVar11 + 0x60) = 0x257123f4dd;
    lVar11 = *(long *)(lVar10 + 0x40);
    *(undefined8 *)(lVar11 + 0x68) = 0x21fc221a56;
    *(undefined8 *)(lVar11 + 0x70) = 0x26ef44d702;
    lVar11 = *(long *)(lVar10 + 0x40);
    uVar2 = *(uint *)(lVar10 + 0x3c);
    ppppbVar8 = (byte ****)(ulong)uVar2;
    if (*(uint *)(lVar11 + 0x94) != uVar2) {
      pcVar6 = (char *)0x1;
      *(uint *)(lVar11 + 0x94) = uVar2;
      FUN_710377a280(lVar11,(byte *)(lVar11 + 0x18),1);
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar10 + 0x20),0x71044227e2);
    ppplVar3 = local_40;
    local_48 = (long ***)&PTR_FUN_710523d988;
    local_40 = (long ***)0x0;
    if (ppplVar3 != (long ***)0x0) {
      uVar5 = *(ulong *)((long)ppplVar3 + 0x18);
      *(undefined ***)((long)ppplVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)ppplVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40((ulong)ppplVar3);
    }
    uVar2 = *(uint *)(param_1 + 0x210);
    local_48 = (long ***)
               FUN_710392e290(0x10,8,(long ****)pcVar6,ppppbVar8,param_5,param_6,param_7,param_8);
    if (local_48 == (long ***)0x0) {
      local_24 = 0;
      local_48 = (long ***)&DAT_00000008;
      pppplVar7 = &local_48;
      (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_24);
      local_48 = (long ***)
                 FUN_710392e290(0x10,8,pppplVar7,ppppbVar8,param_5,param_6,param_7,param_8);
    }
    local_40 = local_48 + 1;
    *local_48 = (long **)(ulong)uVar2;
    local_38 = local_40;
    FUN_71032f29a0(DAT_710532f820,0x58ffff1eb2fdccf3,&local_48,ppppbVar8,param_5,param_6,param_7,
                   param_8);
    if (local_48 != (long ***)0x0) {
      local_40 = local_48;
      FUN_710392eb40((ulong)local_48);
    }
  }
  else {
    lVar11 = *(long *)(DAT_710532f820 + 8);
    uVar4 = FUN_7101eefe30(*(long *)(*(long *)(lVar11 + 0x110) + 0x80));
    if ((*(int *)(lVar11 + 0xf8) == 0 && (((uint)uVar4 ^ 0xffffffff) & 1) == 0) &&
        *(char *)(lVar11 + 0x142) == '\0') {
      if (*(int *)(*(long *)(DAT_710532f820 + 8) + 0x118) == 2) {
        uVar1 = *(uint *)(param_1 + 0x210);
        uVar2 = *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24);
        if (uVar2 <= uVar1) {
          uVar2 = uVar1;
        }
        *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24) = uVar2 - uVar1;
        *(undefined1 *)(param_1 + 0x1fd) = 1;
        uVar2 = *(uint *)(param_1 + 0x1d4);
        if (0x12 < uVar2) {
LAB_710148cc18:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar9 = 0x11;
      }
      else {
        *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(*DAT_7105329fa0 + 0x298);
        uVar2 = *(uint *)(param_1 + 0x1d4);
        if (0x12 < uVar2) goto LAB_710148cc18;
        uVar9 = 0x12;
      }
      *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x188) = uVar9;
    }
  }
  return;
}

