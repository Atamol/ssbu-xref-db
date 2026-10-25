// addr:      71013e6a40
// offset:    0x13e6a40
// name:      FUN_71013e6a40
// mangled:   
// signature: undefined __cdecl FUN_71013e6a40(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71013e6a40(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined **local_30;
  long *local_28;
  
  if (*(char *)(param_1 + 0x22a) == '\0') {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    if (*(char *)(lVar3 + 0x182) == '\0') {
      if (*(char *)(lVar3 + 0x181) != '\0') {
        *(undefined4 *)(param_1 + 0x234) = 2;
        if (0 < *(int *)(param_1 + 0x1fc)) {
          *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + -1;
        }
        lVar3 = DAT_710532f7f0;
        if (DAT_710532f7f0 != 0) {
          lVar8 = *(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80);
          if (*(char *)(lVar8 + 0x1f5) == '\0') {
            lVar4 = *(long *)(lVar8 + 0x100);
            lVar6 = *(long *)(lVar8 + 0x108);
            uVar1 = 0;
            if (lVar6 - lVar4 != 0) {
              uVar1 = (lVar6 - lVar4 >> 3) * 0x155 - 1;
            }
            uVar7 = *(long *)(lVar8 + 0x120) + *(long *)(lVar8 + 0x118);
            if (uVar1 == uVar7) {
              FUN_7101afbf30((ulong *)(lVar8 + 0xf8),param_2,param_3,param_4,param_5,param_6,param_7
                             ,param_8);
              uVar7 = *(long *)(lVar8 + 0x118) + *(long *)(lVar8 + 0x120);
              lVar4 = *(long *)(lVar8 + 0x100);
              lVar6 = *(long *)(lVar8 + 0x108);
            }
            if (lVar6 == lVar4) {
              puVar5 = (undefined8 *)0x0;
            }
            else {
              puVar5 = (undefined8 *)
                       (*(long *)(lVar4 + (uVar7 / 0x155) * 8) + (uVar7 % 0x155) * 0xc);
            }
            *puVar5 = 0x100000007;
            *(undefined4 *)(puVar5 + 1) = 0;
            *(long *)(lVar8 + 0x120) = *(long *)(lVar8 + 0x120) + 1;
            lVar8 = *(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 0x80);
          }
          FUN_7103776910(&local_30,**(long **)(lVar8 + 0x130) + 8,(long ****)"set_txt_key",param_3,
                         param_4,param_5,param_6,param_7,param_8);
          plVar2 = local_28;
          lVar3 = *local_28;
          if (lVar3 != 0) {
            *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
          }
          local_30 = &PTR_FUN_710523d9a8;
          local_28 = (long *)0x0;
          if (plVar2 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar2);
          }
          *(undefined1 *)(lVar8 + 0x200) = 1;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 500) = 0;
      *(undefined8 *)(param_1 + 0x1ec) = 0;
      *(undefined8 *)(param_1 + 0x1e4) = 0;
      *(undefined8 *)(param_1 + 0x1dc) = 0;
      *(undefined8 *)(param_1 + 0x1d4) = 0;
      *(undefined8 *)(param_1 + 0x1cc) = 0;
      *(undefined8 *)(param_1 + 0x1c4) = 0;
      *(undefined8 *)(param_1 + 0x1b4) = 0;
      *(undefined8 *)(param_1 + 0x1bc) = 0;
      *(undefined8 *)(param_1 + 0x200) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1fc) = 0;
      *(undefined1 *)(param_1 + 0x20c) = 0;
      *(undefined4 *)(param_1 + 0x1b0) = 0x15;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x22a) = 0;
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x50) + 0x183) = 1;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x204) = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0x20c) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0x1300000015;
    *(undefined8 *)(param_1 + 0x1fc) = 0xffffffff00000001;
  }
  return;
}

