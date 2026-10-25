// addr:      71000177d0
// offset:    0x177d0
// name:      FUN_71000177d0
// mangled:   
// signature: undefined8 __cdecl FUN_71000177d0(long * param_1, int param_2, uint * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_71000177d0(long *param_1,int param_2,uint *param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *__dest;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auStack_5c [12];
  
  lVar8 = *param_1;
  uVar9 = (ulong)param_2;
  if (*(char *)(lVar8 + 0x251) == '\0') {
    lVar7 = *(long *)(lVar8 + 0x248);
  }
  else {
    uVar9 = uVar9 - 0xc;
    lVar7 = *(long *)(lVar8 + 0x248) + 10;
    *(long *)(lVar8 + 0x248) = lVar7;
  }
  plVar10 = (long *)(lVar8 + 0x248);
  uVar6 = *(undefined8 *)(lVar8 + 0x4fd8);
  uVar5 = uVar9;
  uVar1 = (**(code **)(lVar8 + 0x4fd0))(lVar7,1);
  if (uVar1 == 0x10000001) {
    if ((*(byte *)(param_1[0x10b] + 0x84) >> 4 & 1) == 0) {
      *(uint *)(lVar8 + 0x224) = *(uint *)(lVar8 + 0x224) | 0x20;
      if (*(char *)(lVar8 + 0x251) != '\0') {
        *plVar10 = *plVar10 + -10;
      }
      *param_3 = 0;
      return 0;
    }
    pcVar4 = "Read callback asked for PAUSE when not supported!";
  }
  else {
    if (uVar1 == 0x10000000) {
      FUN_7100016040(lVar8,(byte *)"operation aborted by callback",uVar5,uVar6,param_5,param_6,
                     param_7,param_8);
      *param_3 = 0;
      return 0x2a;
    }
    if ((ulong)(long)(int)uVar1 <= uVar9) {
      if ((*(char *)(lVar8 + 0x253) == '\0') && (*(char *)(lVar8 + 0x251) != '\0')) {
        pcVar4 = "\n";
        if ((*(char *)(lVar8 + 0x6b3) == '\0') &&
           (pcVar4 = "\r\n", *(char *)(lVar8 + 0x422) != '\0')) {
          pcVar4 = "\n";
        }
        iVar2 = FUN_7100007ef0(auStack_5c,0xb,&DAT_7104328dcc,(ulong)uVar1,pcVar4,param_6,param_7,
                               param_8);
        __dest = (void *)(*plVar10 - (long)iVar2);
        *plVar10 = (long)__dest;
        memcpy(__dest,auStack_5c,(long)iVar2);
        lVar7 = *plVar10;
        sVar3 = strlen(pcVar4);
        memcpy((void *)(lVar7 + (int)(iVar2 + uVar1)),pcVar4,sVar3);
        if (uVar1 == 0) {
          *(undefined1 *)(lVar8 + 0x228) = 1;
        }
        sVar3 = strlen(pcVar4);
        uVar1 = iVar2 + uVar1 + (int)sVar3;
      }
      *param_3 = uVar1;
      return 0;
    }
    *param_3 = 0;
    pcVar4 = "read function returned funny value";
  }
  FUN_7100016040(lVar8,(byte *)pcVar4,uVar5,uVar6,param_5,param_6,param_7,param_8);
  return 0x1a;
}

