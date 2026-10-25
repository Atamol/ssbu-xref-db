// addr:      71000175d0
// offset:    0x175d0
// name:      FUN_71000175d0
// mangled:   
// signature: char * __cdecl FUN_71000175d0(long param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


char * FUN_71000175d0(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *__dest;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  __dest = (char *)(param_1 + 0x938);
  *(undefined1 *)(param_1 + 0x938) = 0;
  pcVar3 = strerror(param_2);
  if (pcVar3 == (char *)0x0) {
    FUN_7100007ef0(__dest,0xff,"Unknown error %d",(ulong)param_2,param_5,param_6,param_7,param_8);
  }
  else {
    strncpy(__dest,pcVar3,0xff);
  }
  *(undefined1 *)(param_1 + 0xa37) = 0;
  pcVar3 = strrchr(__dest,10);
  if ((pcVar3 != (char *)0x0) && (1 < (long)pcVar3 - (long)__dest)) {
    *pcVar3 = '\0';
  }
  pcVar3 = strrchr(__dest,0xd);
  if ((pcVar3 != (char *)0x0) && (0 < (long)pcVar3 - (long)__dest)) {
    *pcVar3 = '\0';
  }
  piVar2 = __errno_location();
  if (*piVar2 != iVar1) {
    piVar2 = __errno_location();
    *piVar2 = iVar1;
  }
  return __dest;
}

