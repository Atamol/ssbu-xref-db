// addr:      71033845c0
// offset:    0x33845c0
// name:      FUN_71033845c0
// mangled:   
// signature: undefined __cdecl FUN_71033845c0(uint * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


void FUN_71033845c0(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9)

{
  uint uVar1;
  byte *pbVar2;
  uint *__s;
  uint uVar3;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  
  param_1[0] = 0;
  param_1[1] = 0;
  local_40 = auStack_b0;
  local_48 = &stack0xffffffffffffff90;
  uVar3 = 0x811c9dc5;
  __s = param_1 + 2;
  *(byte *)__s = 0;
  local_38 = 0xffffff80ffffffc8;
  local_a8 = param_3;
  local_a0 = param_4;
  uStack_98 = param_5;
  local_90 = param_6;
  uStack_88 = param_7;
  local_80 = param_8;
  uStack_78 = param_9;
  local_50 = (undefined1 *)register0x00000008;
  uVar1 = vsnprintf((char *)__s,0xff,"contents.htdocs/help/html/%s/online_terms.html",&local_50);
  param_1[1] = uVar1;
  uVar1 = (uint)(byte)*__s;
  if ((byte)*__s != 0) {
    pbVar2 = (byte *)((long)param_1 + 9);
    do {
      uVar3 = uVar3 * 0x89 ^ uVar1;
      uVar1 = (uint)*pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (uVar1 != 0);
  }
  *param_1 = uVar3;
  return;
}

