// addr:      7102366d30
// offset:    0x2366d30
// name:      FUN_7102366d30
// mangled:   
// signature: undefined8 __cdecl FUN_7102366d30(long param_1, uint * param_2)


undefined8 FUN_7102366d30(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *__s1;
  undefined4 uVar3;
  char *pcVar4;
  
  __s1 = param_2 + 2;
  uVar1 = *param_2;
  if (uVar1 < 0x4d1b6eab) {
    return 0;
  }
  if (uVar1 == 0xe6c44dfe) {
    iVar2 = strcmp((char *)__s1,"OptionButtonScene");
    if (iVar2 != 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
    uVar3 = 4;
    goto LAB_7102366de0;
  }
  if (uVar1 == 0x4d1b6eab) {
    iVar2 = strcmp((char *)__s1,"OptionTopScene");
    if (iVar2 != 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
    uVar3 = 3;
    goto LAB_7102366de0;
  }
  if (uVar1 < 0xbc861f42) {
    if ((int)uVar1 < 0x5108b424) {
      if (uVar1 == 0xb7a388d9) {
        iVar2 = strcmp((char *)__s1,"OptionVideoScene");
        if (iVar2 != 0) {
          return 0;
        }
        *(undefined8 *)(param_1 + 0x160) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
        uVar3 = 0xd;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x158) = 0;
        goto LAB_7102366de0;
      }
      if (uVar1 != 0x4e29d243) {
        return 0;
      }
      pcVar4 = "OptionSoundScene";
    }
    else {
      if (uVar1 != 0x535c066e) {
        if (uVar1 != 0x5108b424) {
          return 0;
        }
        pcVar4 = "OptionMeleeScene";
LAB_7102366fc8:
        iVar2 = strcmp((char *)__s1,pcVar4);
        if (iVar2 != 0) {
          return 0;
        }
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x158) = 0;
        *(undefined8 *)(param_1 + 0x160) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
        uVar3 = 6;
        goto LAB_7102366de0;
      }
      pcVar4 = "SoundTestScene";
    }
  }
  else {
    if (uVar1 == 0xbc861f42) {
      iVar2 = strcmp((char *)__s1,"OptionLanguageScene");
      if (iVar2 != 0) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
      uVar3 = 5;
      goto LAB_7102366de0;
    }
    if (0xf8973ff8 < uVar1) {
      if (uVar1 == 0xff126b7a) {
        pcVar4 = "CharaSelectScene";
      }
      else {
        if (uVar1 != 0xf8973ff9) {
          return 0;
        }
        pcVar4 = "MeleeRuleScene";
      }
      goto LAB_7102366fc8;
    }
    if (uVar1 < 0xe33b8f27) {
      if (uVar1 != 0xbe42ef4f) {
        return 0;
      }
      iVar2 = strcmp((char *)__s1,"OptionOnlineScene");
      if (iVar2 != 0) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
      uVar3 = 0xc;
      goto LAB_7102366de0;
    }
    if (uVar1 != 0xe33b8f27) {
      return 0;
    }
    pcVar4 = "StageSelectScene";
  }
  iVar2 = strcmp((char *)__s1,pcVar4);
  if (iVar2 != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
  uVar3 = 9;
LAB_7102366de0:
  *(undefined1 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x110) = uVar3;
  *(undefined4 *)(param_1 + 0x15c) = 1;
  *(undefined4 *)(param_1 + 0x114) = 2;
  return 1;
}

