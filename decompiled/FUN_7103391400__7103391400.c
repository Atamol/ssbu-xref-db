// addr:      7103391400
// offset:    0x3391400
// name:      FUN_7103391400
// mangled:   
// signature: undefined8 __cdecl FUN_7103391400(undefined8 param_1, undefined8 param_2, long * param_3, ushort * param_4)


undefined8 FUN_7103391400(undefined8 param_1,undefined8 param_2,long *param_3,ushort *param_4)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  
  iVar1 = nn::ngc::CountNumbers(param_4);
  if (iVar1 < 6) {
    if ((param_4 != (ushort *)0x0) && (uVar5 = *param_4, uVar5 != 0)) {
      uVar4 = 0;
      iVar1 = 1;
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
          iVar6 = 1;
          if (uVar5 == 10) {
            iVar1 = iVar1 + 1;
          }
        }
        uVar4 = iVar6 + uVar4;
        puVar7 = param_4 + uVar4;
        uVar5 = *puVar7;
      } while (uVar5 != 0);
      if (2 < iVar1) {
        pcVar3 = "mnu_replay_movie_edit_cap_line_num_over_error";
        goto LAB_7103391434;
      }
    }
    uVar2 = 0;
  }
  else {
    pcVar3 = "pop_sys_overflow_digit";
LAB_7103391434:
    iVar1 = FUN_71037ab600(param_2,500,(byte *)pcVar3,0);
    uVar2 = 1;
    *param_3 = (long)iVar1;
  }
  return uVar2;
}

