// addr:      710000edf0
// offset:    0xedf0
// name:      FUN_710000edf0
// mangled:   
// signature: ulong __cdecl FUN_710000edf0(long * param_1, long param_2, undefined8 param_3, char * param_4, uint param_5, ulong param_6, ulong param_7, undefined8 param_8)


ulong FUN_710000edf0(long *param_1,long param_2,undefined8 param_3,char *param_4,uint param_5,
                    ulong param_6,ulong param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined1 *puVar2;
  bool bVar3;
  ulong uVar4;
  char *pcVar5;
  size_t sVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long local_58;
  size_t local_48;
  
  lVar10 = *param_1;
  if (*(long *)(param_2 + 8) != 1) {
    if (*(long *)(param_2 + 8) == 2) {
      uVar4 = FUN_7100013550(param_1,(ulong)(param_5 & 1),param_3,param_4);
      if ((int)uVar4 != 0) {
        return uVar4 & 0xffffffff;
      }
      pcVar5 = "Digest";
      goto LAB_710000f014;
    }
    goto LAB_710000efe8;
  }
  if ((param_5 & 1) == 0) {
    if ((char)param_1[0x103] != '\0') {
      for (plVar12 = *(long **)(*param_1 + 0x408); plVar12 != (long *)0x0;
          plVar12 = (long *)plVar12[1]) {
        bVar3 = FUN_71000173b0((byte *)*plVar12,(byte *)"Authorization:",0xe);
        if (bVar3) {
          lVar9 = *plVar12;
          goto joined_r0x00710000eef4;
        }
      }
LAB_710000eef8:
      lVar9 = 0x878;
      if ((param_5 & 1) == 0) {
        lVar9 = 0x890;
      }
      local_48 = 0;
      local_58 = 0;
      lVar11 = *param_1;
      pcVar5 = (char *)FUN_7100007fd0((byte *)"%s:%s");
      if (pcVar5 == (char *)0x0) {
        return 0x1b;
      }
      sVar6 = strlen(pcVar5);
      uVar7 = FUN_7100012750(lVar11,pcVar5,sVar6,&local_58,&local_48,param_6,param_7,param_8);
      uVar4 = uVar7 & 0xffffffff;
      if ((int)uVar7 == 0) {
        if (local_58 == 0) {
          uVar4 = 9;
          goto LAB_710000eff8;
        }
        FUN_71000272a0();
        lVar11 = FUN_7100007fd0((byte *)"%sAuthorization: Basic %s\r\n");
        *(long *)((long)param_1 + lVar9) = lVar11;
        FUN_71000272a0();
        uVar8 = 0x1b;
        if (*(long *)((long)param_1 + lVar9) != 0) {
          uVar8 = 0;
        }
        uVar4 = (ulong)uVar8;
        FUN_71000272a0();
      }
      else {
LAB_710000eff8:
        FUN_71000272a0();
        uVar8 = (uint)uVar4;
      }
      if (uVar8 != 0) {
        return uVar4;
      }
      pcVar5 = "Basic";
      *(undefined1 *)(param_2 + 0x18) = 1;
LAB_710000f014:
      bVar3 = (param_5 & 1) == 0;
      lVar9 = 0x180;
      if (bVar3) {
        lVar9 = 0x210;
      }
      pcVar1 = "Proxy";
      if (bVar3) {
        pcVar1 = "Server";
      }
      puVar2 = &DAT_71044114cc;
      if (*(undefined1 **)((long)param_1 + lVar9) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)((long)param_1 + lVar9);
      }
      FUN_7100015de0(lVar10,(byte *)"%s auth using %s with user \'%s\'\n",pcVar1,pcVar5,puVar2,
                     param_6,param_7,param_8);
      *(byte *)(param_2 + 0x19) = *(byte *)(param_2 + 0x18) ^ 1;
      return 0;
    }
  }
  else if (*(char *)((long)param_1 + 0x819) != '\0') {
    if ((*(char *)((long)param_1 + 0x815) == '\0') || (*(char *)(lVar10 + 0x420) == '\0')) {
      plVar12 = *(long **)(lVar10 + 0x408);
    }
    else {
      plVar12 = *(long **)(lVar10 + 0x410);
    }
joined_r0x00710000ee74:
    if (plVar12 != (long *)0x0) {
      bVar3 = FUN_71000173b0((byte *)*plVar12,(byte *)"Proxy-authorization:",0x14);
      if (!bVar3) goto code_r0x00710000eee4;
      lVar9 = *plVar12;
joined_r0x00710000eef4:
      if (lVar9 == 0) goto LAB_710000eef8;
      goto LAB_710000efe0;
    }
    goto LAB_710000eef8;
  }
LAB_710000efe0:
  *(undefined1 *)(param_2 + 0x18) = 1;
LAB_710000efe8:
  *(undefined1 *)(param_2 + 0x19) = 0;
  return 0;
code_r0x00710000eee4:
  plVar12 = (long *)plVar12[1];
  goto joined_r0x00710000ee74;
}

