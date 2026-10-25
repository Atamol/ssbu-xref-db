// addr:      7101b31890
// offset:    0x1b31890
// name:      FUN_7101b31890
// mangled:   
// signature: undefined __cdecl FUN_7101b31890(long param_1, char * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b31890(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  if (*(undefined8 **)(param_1 + 0x18) != *(undefined8 **)(param_1 + 0x10)) {
    FUN_7103776640(&local_40,**(long **)**(undefined8 **)(param_1 + 0x10) + 8,
                   (byte ****)"set_parts_rule",param_3,param_4,param_5,param_6,param_7,param_8);
    uVar1 = local_38;
    bVar4 = *(byte *)(param_1 + 0x1f0);
    if ((*(long *)(local_38 + 8) != 0) &&
       (lVar5 = *(long *)(*(long *)(local_38 + 8) + 0x18), lVar5 != 0)) {
      *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | bVar4;
      bVar4 = *(byte *)(param_1 + 0x1f0);
    }
    if (bVar4 != 0) {
      FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_txt_00",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7101c0a210((long)&local_50,*param_2,param_2[1],*(short *)(param_2 + 4),
                     (ulong)(byte)param_2[6],(ulong)(byte)param_2[7],param_2[2]);
      if (param_2[1] == '\x02') {
        pcVar3 = "hp";
      }
      else if (param_2[1] == '\x01') {
        pcVar3 = "stock";
      }
      else {
        pcVar3 = "time";
      }
      FUN_7103778300(0x3f800000,local_38,(long)pcVar3);
      if (param_2[0x11] == '\0') {
        pcVar3 = "off_gimmick";
      }
      else {
        pcVar3 = "on_gimmick";
      }
      FUN_7103778300(0x3f800000,local_38,(long)pcVar3);
      uVar2 = local_48;
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
    }
    local_40 = &PTR_FUN_710523d988;
    local_38 = 0;
    if (uVar1 != 0) {
      uVar2 = *(ulong *)(uVar1 + 0x18);
      *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar1 + 0x18) = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_710392eb40(uVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

