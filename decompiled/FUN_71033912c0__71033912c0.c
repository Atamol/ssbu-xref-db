// addr:      71033912c0
// offset:    0x33912c0
// name:      FUN_71033912c0
// mangled:   
// signature: undefined8 __cdecl FUN_71033912c0(undefined8 param_1, undefined8 param_2, long * param_3, ushort * param_4)


undefined8 FUN_71033912c0(undefined8 param_1,undefined8 param_2,long *param_3,ushort *param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  
  iVar1 = nn::ngc::CountNumbers(param_4);
  if (iVar1 < 6) {
    if ((param_4 == (ushort *)0x0) || (uVar5 = (uint)*param_4, *param_4 == 0)) {
      return 0;
    }
    uVar4 = 0;
    iVar3 = 0;
    iVar1 = 0;
    puVar7 = param_4;
    do {
      if ((uVar5 | 1) == 0xf) {
        if (uVar5 == 0xe) {
          iVar6 = (puVar7[3] >> 1) + 4;
        }
        else {
          iVar6 = 3;
          if (uVar5 != 0xf) {
            iVar6 = 0;
          }
        }
      }
      else {
        if (uVar5 < 0x2002) {
          if ((uVar5 == 0x20) || (uVar5 == 0xa0)) goto LAB_71033913b0;
        }
        else if ((uVar5 - 0x2002 < 2) || ((uVar5 == 0x3164 || (uVar5 == 0x3000)))) {
LAB_71033913b0:
          iVar1 = iVar1 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar6 = 1;
      }
      uVar4 = iVar6 + uVar4;
      puVar7 = param_4 + uVar4;
      uVar5 = (uint)*puVar7;
    } while (uVar5 != 0);
    if (iVar3 < 1) {
      return 0;
    }
    if (iVar3 != iVar1) {
      return 0;
    }
    pcVar2 = "pop_share_upload_name_error";
  }
  else {
    pcVar2 = "pop_sys_overflow_digit";
  }
  iVar1 = FUN_71037ab600(param_2,500,(byte *)pcVar2,0);
  *param_3 = (long)iVar1;
  return 1;
}

