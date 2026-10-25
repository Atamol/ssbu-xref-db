// addr:      71013a2580
// offset:    0x13a2580
// name:      FUN_71013a2580
// mangled:   
// signature: undefined __cdecl FUN_71013a2580(long * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71013a2580(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long *plVar6;
  
  plVar6 = param_1 + 0x1c;
  if ((int)*plVar6 != 0) {
    *(undefined8 *)((long)param_1 + 0xf6) = *(undefined8 *)((long)param_1 + 0xe6);
    param_1[0x1e] = *plVar6;
    *(undefined8 *)((long)param_1 + 0xe6) = 0;
    *plVar6 = 0;
  }
  if (3 < *(uint *)(param_1 + 0x1e)) goto switchD_71013a26b4_default;
  plVar6 = (long *)(**(long **)(*param_1 + 8) + 0xce0);
  switch(*(uint *)(param_1 + 0x1e)) {
  case 0:
    goto switchD_71013a25ec_caseD_0;
  case 1:
    if (*(char *)((long)param_1 + 0xfc) == '\0') {
      uVar5 = 1;
      (**(code **)(*plVar6 + 0x20))(plVar6,0xe);
      uVar1 = *(int *)((long)param_1 + 0xf4) - 1;
      if (uVar1 < 6) {
        pcVar4 = (&PTR_s_mel_info_final_arts_fox_01_71050645e0)[(int)uVar1];
      }
      else {
        pcVar4 = (char *)0x0;
      }
      FUN_710377a120(*(long *)(param_1[2] + 0x80) + 0xd0,pcVar4,uVar5,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_710377aee0(0x3f800000,*(long *)(param_1[2] + 0x80) + 0x80);
      if (*(int *)((long)param_1 + 0xcc) < 0x12) {
        uVar1 = *(int *)((long)param_1 + 0xcc) + 1;
        *(uint *)((long)param_1 + 0xcc) = uVar1;
        if (0x12 < uVar1) goto LAB_71013a2904;
        *(undefined4 *)((long)param_1 + (long)(int)uVar1 * 4 + 0x80) = 2;
      }
      *(undefined1 *)((long)param_1 + 0x101) = 1;
    }
    else {
      (**(code **)(*plVar6 + 0x20))(plVar6,0xe,0);
      if (*(char *)((long)param_1 + 0x101) != '\0') {
        FUN_710377aee0(0x3f800000,*(long *)(param_1[2] + 0x80) + 0x90);
        *(undefined1 *)((long)param_1 + 0x101) = 0;
      }
LAB_71013a2658:
      *(undefined4 *)(param_1 + 0x19) = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(undefined1 *)((long)param_1 + 0xdc) = 0;
      param_1[0x10] = 0x200000003;
      *(undefined8 *)((long)param_1 + 0xd4) = 0xffffffff00000000;
      *(undefined8 *)((long)param_1 + 0xcc) = 0xffffffff00000001;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
    }
    break;
  case 2:
    if (*(char *)((long)param_1 + 0xfc) != '\0') {
      if ((char)param_1[0x20] != '\0') {
        FUN_710377aee0(0x3f800000,*(long *)(param_1[2] + 0x80) + 0x30);
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      goto LAB_71013a2658;
    }
    lVar3 = 0x80;
    if (*(char *)((long)param_1 + 0xfd) != '\0') {
      lVar3 = 0x90;
    }
    lVar2 = *(long *)(param_1[2] + 0x80) + 0x20;
    FUN_710377aee0(0x3f800000,lVar2 + lVar3);
    FUN_710377aee0(0x3f800000,lVar2);
    if (*(int *)((long)param_1 + 0xcc) < 0x12) {
      uVar1 = *(int *)((long)param_1 + 0xcc) + 1;
      *(uint *)((long)param_1 + 0xcc) = uVar1;
      if (0x12 < uVar1) goto LAB_71013a2904;
      *(undefined4 *)((long)param_1 + (long)(int)uVar1 * 4 + 0x80) = 2;
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
    break;
  case 3:
    switch((int)param_1[0x1f]) {
    case 1:
      (**(code **)(*plVar6 + 0x20))(plVar6,0xf,1);
      FUN_710377aee0(0x3f800000,*(long *)(param_1[2] + 0x80) + 0x40);
      if (*(int *)((long)param_1 + 0xcc) < 0x12) {
        uVar1 = *(int *)((long)param_1 + 0xcc) + 1;
        *(uint *)((long)param_1 + 0xcc) = uVar1;
        if (0x12 < uVar1) goto LAB_71013a2904;
        *(undefined4 *)((long)param_1 + (long)(int)uVar1 * 4 + 0x80) = 2;
      }
      *(undefined1 *)((long)param_1 + 0x102) = 1;
      break;
    case 2:
      (**(code **)(*plVar6 + 0x20))(plVar6,0xf,0);
      if (*(char *)((long)param_1 + 0x102) != '\0') {
        FUN_710377aee0(0x3f800000,*(long *)(param_1[2] + 0x80) + 0x50);
        *(undefined1 *)((long)param_1 + 0x102) = 0;
      }
      if (*(char *)((long)param_1 + 0x103) != '\0') {
        FUN_710377aee0(0x3f800000,*(long *)(param_1[2] + 0x80) + 0x70);
        *(undefined1 *)((long)param_1 + 0x103) = 0;
      }
      goto LAB_71013a2658;
    case 3:
    case 4:
    case 5:
      FUN_710377a120(*(long *)(param_1[2] + 0x80) + 0xc0,
                     (&PTR_s_mel_info_fighter_ptrainer_final__71050645c0)[(int)param_1[0x1f] + -3],
                     param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_710377aee0(0x3f800000,*(long *)(param_1[2] + 0x80) + 0x60);
      *(undefined1 *)((long)param_1 + 0x103) = 1;
      goto LAB_71013a26f4;
    case 6:
      if (*(char *)((long)param_1 + 0x103) != '\0') {
        FUN_710377aee0(0x3f800000,*(long *)(param_1[2] + 0x80) + 0x70);
        *(undefined1 *)((long)param_1 + 0x103) = 0;
      }
LAB_71013a26f4:
      if (*(int *)((long)param_1 + 0xcc) < 0x12) {
        uVar1 = *(int *)((long)param_1 + 0xcc) + 1;
        *(uint *)((long)param_1 + 0xcc) = uVar1;
        if (0x12 < uVar1) {
LAB_71013a2904:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined4 *)((long)param_1 + (long)(int)uVar1 * 4 + 0x80) = 2;
      }
    }
  }
switchD_71013a26b4_default:
  *(undefined8 *)((long)param_1 + 0xf6) = 0;
  param_1[0x1e] = 0;
switchD_71013a25ec_caseD_0:
  return;
}

