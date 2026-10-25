// addr:      7100099560
// offset:    0x99560
// name:      FUN_7100099560
// mangled:   
// signature: undefined __cdecl FUN_7100099560(undefined8 * param_1, undefined8 param_2, undefined8 param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined4 param_8, undefined8 param_9, byte param_10, undefined8 param_11)


/* WARNING: Type propagation algorithm not settling */

void FUN_7100099560(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                   undefined8 param_9,byte param_10,undefined8 param_11)

{
  char cVar1;
  short sVar2;
  ulong uVar3;
  
  *param_1 = &PTR_FUN_7104f49cd8;
  FUN_7100031850(param_1 + 0x1e);
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_71000338f0(param_1 + 0x29);
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  FUN_7100031850(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0x5e) = 0;
  FUN_71000338f0(param_1 + 0x5f);
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = &DAT_7104f49d08;
  FUN_710009c9c0((undefined1 *)(param_1 + 0x98));
  FUN_710009ce30((undefined1 *)(param_1 + 0xa1));
  param_1[7] = param_9;
  param_1[8] = param_4;
  param_1[5] = param_7;
  param_1[6] = 0;
  param_1[2] = param_2;
  param_1[3] = param_5;
  *(undefined4 *)(param_1 + 9) = param_8;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)((long)param_1 + 9) = 1;
  param_1[0x95] = param_11;
  param_1[4] = param_6;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x11] = 0;
  *(byte *)(param_1 + 1) = param_10 & 1;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x96] = 0;
  param_1[0x9f] = 0;
  param_1[0x97] = 0;
  param_1[0xa0] = 0;
  param_1[0xa7] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x8b] = param_3;
  uVar3 = nn::util::BinaryFileHeader::IsSignatureValid(param_4);
  if ((uVar3 & 1) == 0) {
    FUN_7100093530();
    sVar2 = *(short *)(param_4 + 10);
  }
  else {
    sVar2 = *(short *)(param_4 + 10);
  }
  if (sVar2 == 0x16) {
    cVar1 = *(char *)(param_4 + 9);
  }
  else {
    FUN_7100093900();
    FUN_7100093900();
    FUN_7100093530();
    cVar1 = *(char *)(param_4 + 9);
  }
  if (cVar1 == '\x04') {
    uVar3 = nn::util::BinaryFileHeader::IsAlignmentValid();
  }
  else {
    FUN_7100093900();
    FUN_7100093900();
    FUN_7100093530();
    uVar3 = nn::util::BinaryFileHeader::IsAlignmentValid();
  }
  if ((uVar3 & 1) == 0) {
    nn::util::BinaryFileHeader::GetAlignment();
    FUN_7100093900();
    nn::util::BinaryFileHeader::GetAlignment();
    FUN_7100093900();
    FUN_7100093530();
  }
  FUN_71000997f0((long)param_1,(int *)(param_1[8] + (ulong)*(ushort *)(param_4 + 0x16)));
  return;
}

