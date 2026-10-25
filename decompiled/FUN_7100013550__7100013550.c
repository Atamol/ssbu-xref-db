// addr:      7100013550
// offset:    0x13550
// name:      FUN_7100013550
// mangled:   
// signature: ulong __cdecl FUN_7100013550(long * param_1, ulong param_2, undefined8 param_3, char * param_4)


ulong FUN_7100013550(long *param_1,ulong param_2,undefined8 param_3,char *param_4)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  size_t sStack_70;
  undefined8 local_68;
  
  bVar5 = (param_2 & 1) != 0;
  lVar7 = *param_1;
  plVar1 = param_1 + 0x43;
  plVar4 = param_1 + 0x112;
  if (bVar5) {
    plVar1 = param_1 + 0x31;
    plVar4 = param_1 + 0x10f;
  }
  pcVar9 = (char *)*plVar1;
  plVar1 = param_1 + 0x42;
  if (bVar5) {
    plVar1 = param_1 + 0x30;
  }
  pcVar8 = (char *)*plVar1;
  lVar2 = lVar7 + 0x4cc0;
  plVar1 = (long *)(lVar7 + 0x4c40);
  if (bVar5) {
    lVar2 = lVar7 + 0x4ce0;
    plVar1 = (long *)(lVar7 + 0x4c80);
  }
  FUN_71000272a0();
  *plVar4 = 0;
  pcVar3 = "";
  if (pcVar8 != (char *)0x0) {
    pcVar3 = pcVar8;
  }
  pcVar8 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar8 = pcVar9;
  }
  if (*plVar1 == 0) {
    *(undefined1 *)(lVar2 + 0x18) = 0;
    return 0;
  }
  if ((*(char *)(lVar2 + 0x1a) == '\0') || (pcVar9 = strchr(param_4,0x3f), pcVar9 == (char *)0x0)) {
    pcVar9 = (char *)FUN_71000272c0();
  }
  else {
    pcVar9 = (char *)FUN_7100007fd0(&DAT_710426eeba);
  }
  if (pcVar9 != (char *)0x0) {
    uVar6 = FUN_7100024b80(lVar7,pcVar3,pcVar8,param_3,pcVar9,plVar1,&local_68,&sStack_70);
    FUN_71000272a0();
    if ((int)uVar6 != 0) {
      return uVar6 & 0xffffffff;
    }
    lVar7 = FUN_7100007fd0((byte *)"%sAuthorization: Digest %s\r\n");
    *plVar4 = lVar7;
    FUN_71000272a0();
    if (*plVar4 != 0) {
      *(undefined1 *)(lVar2 + 0x18) = 1;
      return 0;
    }
  }
  return 0x1b;
}

