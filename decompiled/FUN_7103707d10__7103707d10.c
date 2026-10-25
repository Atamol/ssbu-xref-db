// addr:      7103707d10
// offset:    0x3707d10
// name:      FUN_7103707d10
// mangled:   
// signature: undefined8 __cdecl FUN_7103707d10(long param_1, undefined4 * param_2)


undefined8 FUN_7103707d10(long param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 local_860;
  undefined2 local_858;
  undefined8 auStack_278 [64];
  uint local_78 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint auStack_50 [4];
  
  lVar3 = DAT_71052adb38;
  if (DAT_71052adb38 == 0) {
    return 0;
  }
  local_78[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_78 | 4));
  local_8b8._0_4_ = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)&local_8b8);
  memset((void *)(param_1 + 0x48),0,0x108);
  memset(auStack_278,0,0x200);
  std::recursive_mutex::lock();
  uVar2 = *(byte *)(param_1 + 0x14) - 1;
  uVar4 = 0;
  if (uVar2 < 3) {
    uVar4 = *(uint *)(&DAT_7104742d78 + (long)(char)uVar2 * 4);
  }
  uVar4 = FUN_7103703c10(param_1 + 400,auStack_278,0x200,uVar4);
  if (*(ushort *)(param_1 + 0x1ac) < 2) {
    *(undefined1 *)(param_1 + 0x289) = 0;
  }
  std::recursive_mutex::unlock();
  cVar1 = *(char *)(param_1 + 0x14);
  if (cVar1 == '\x03') {
    FUN_7100116960(&local_8b8);
    FUN_7100116bd0((long)&local_8b8,*param_2);
    FUN_7100116c10((long)&local_8b8,0);
    FUN_7100116d20((long)&local_8b8,*(byte *)(param_2 + 0x12));
    if (*(short *)(param_2 + 2) != 0) {
      (**(code **)(CONCAT44(local_8b8._4_4_,(int)local_8b8) + 0x10))(&local_8b8);
    }
    if (*(short *)((long)param_2 + 10) != 0) {
      (**(code **)(CONCAT44(local_8b8._4_4_,(int)local_8b8) + 0x18))(&local_8b8);
    }
    if (*(char *)(param_2 + 0x16) != '\0') {
      FUN_7100116c50((int *)&local_68,(long)&local_8b8,0,param_2[0x13]);
    }
    if (*(char *)(param_2 + 0x1a) != '\0') {
      FUN_7100116c50((int *)&local_68,(long)&local_8b8,1,param_2[0x17]);
    }
    if (*(char *)(param_2 + 0x1e) != '\0') {
      FUN_7100116c50((int *)&local_68,(long)&local_8b8,2,param_2[0x1b]);
    }
    if (*(char *)(param_2 + 0x22) != '\0') {
      FUN_7100116c50((int *)&local_68,(long)&local_8b8,3,param_2[0x1f]);
    }
    if (*(char *)(param_2 + 0x26) != '\0') {
      FUN_7100116c50((int *)&local_68,(long)&local_8b8,4,param_2[0x23]);
    }
    if (*(char *)(param_2 + 0x2a) != '\0') {
      FUN_7100116c50((int *)&local_68,(long)&local_8b8,5,param_2[0x27]);
    }
    if (uVar4 == 0) {
LAB_7103708030:
      FUN_7100145dc0((int *)&local_68,lVar3,(long)&local_8b8);
      FUN_71000bcf30((int *)local_78,(int *)&local_68);
      if (local_78[0] == 0) {
        thunk_FUN_710013dc10();
        goto joined_r0x0071037081b0;
      }
    }
    else {
      FUN_7100116a50((int *)&local_68,(long)&local_8b8,auStack_278,uVar4);
      FUN_71000bcf30((int *)local_78,(int *)&local_68);
      if (local_78[0] == 0) goto LAB_7103708030;
    }
    nex_error_info_init((int *)&local_68,local_78,2);
    nex_error_info_init((int *)&local_68,local_78,2);
    *(undefined8 *)(param_1 + 0x38) = uStack_60;
    *(undefined8 *)(param_1 + 0x40) = local_58;
    *(undefined8 *)(param_1 + 0x30) = local_68;
    thunk_FUN_710013dc10();
    uVar5 = 0;
  }
  else {
    if (cVar1 == '\x02') {
      FUN_71000c08f0(&local_8b8);
      FUN_7103707790(&local_8b8,param_2);
      if (uVar4 != 0) {
        FUN_71000c11c0((int *)&local_68,(long)&local_8b8,auStack_278,uVar4);
        FUN_71000bcf30((int *)local_78,(int *)&local_68);
        if (local_78[0] != 0) goto LAB_71037080f8;
      }
      FUN_7100145dc0((int *)&local_68,lVar3,(long)&local_8b8);
      FUN_71000bcf30((int *)local_78,(int *)&local_68);
      if (local_78[0] != 0) {
LAB_71037080f8:
        nex_error_info_init((int *)&local_68,local_78,2);
        nex_error_info_init((int *)&local_68,local_78,2);
        *(undefined8 *)(param_1 + 0x38) = uStack_60;
        *(undefined8 *)(param_1 + 0x40) = local_58;
        *(undefined8 *)(param_1 + 0x30) = local_68;
        FUN_71000c0ce0(&local_8b8);
        return 0;
      }
      FUN_71000c0ce0(&local_8b8);
    }
    else if (cVar1 == '\x01') {
      FUN_7100167640(&local_8b8);
      local_860 = *(undefined8 *)(param_2 + 0x38);
      local_858 = (undefined2)*param_2;
      if (*(short *)(param_2 + 2) != 0) {
        (**(code **)(CONCAT44(local_8b8._4_4_,(int)local_8b8) + 0x10))(&local_8b8);
      }
      if (*(short *)((long)param_2 + 10) != 0) {
        (**(code **)(CONCAT44(local_8b8._4_4_,(int)local_8b8) + 0x18))(&local_8b8);
      }
      (**(code **)(CONCAT44(local_8b8._4_4_,(int)local_8b8) + 0x60))
                (auStack_50,&local_8b8,"session_simple key",0x13);
      nex_error_info_init((int *)&local_68,auStack_50,2);
      if (uVar4 != 0) {
        FUN_7100167810((int *)&local_68,(long)&local_8b8,auStack_278,uVar4);
        FUN_71000bcf30((int *)local_78,(int *)&local_68);
        if (local_78[0] != 0) goto LAB_7103707ec0;
      }
      FUN_7100145dc0((int *)&local_68,lVar3,(long)&local_8b8);
      FUN_71000bcf30((int *)local_78,(int *)&local_68);
      if (local_78[0] != 0) {
LAB_7103707ec0:
        nex_error_info_init((int *)&local_68,local_78,2);
        nex_error_info_init((int *)&local_68,local_78,2);
        *(undefined8 *)(param_1 + 0x38) = uStack_60;
        *(undefined8 *)(param_1 + 0x40) = local_58;
        *(undefined8 *)(param_1 + 0x30) = local_68;
        thunk_FUN_7100173d20(&local_8b8);
        return 0;
      }
      thunk_FUN_7100173d20(&local_8b8);
    }
joined_r0x0071037081b0:
    if (local_78[0] == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 2;
      uVar5 = 1;
    }
    else {
      nex_error_info_init((int *)&local_8b8,local_78,2);
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x38) = uStack_8b0;
      *(undefined8 *)(param_1 + 0x40) = local_8a8;
      *(ulong *)(param_1 + 0x30) = CONCAT44(local_8b8._4_4_,(int)local_8b8);
    }
  }
  return uVar5;
}

