// addr:      7100026170
// offset:    0x26170
// name:      FUN_7100026170
// mangled:   
// signature: int __cdecl FUN_7100026170(long * param_1, int param_2, char * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


int FUN_7100026170(long *param_1,int param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = (long)param_2;
  if (((*(char *)((long)param_1 + lVar4 + 0x831) != '\0') &&
      (*(int *)((long)param_1 + lVar4 * 0x120 + 0x294) == 2)) &&
     ((char)param_1[lVar4 * 0x24 + 0x9a] == '\0')) {
    return 4;
  }
  lVar2 = *param_1;
  if (*(ulong *)(lVar2 + 0x498) < 8) {
    if ((*(ulong *)(lVar2 + 0x4a0) | 0x10000) == 0x10000 ||
        (long)*(ulong *)(lVar2 + 0x498) <= (long)*(ulong *)(lVar2 + 0x4a0) >> 0x10) {
      *(undefined1 *)(param_1 + lVar4 * 0x24 + 0x52) = 1;
      iVar1 = FUN_71000265b0(param_1,param_2,param_3);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (*param_3 != '\0') {
        FUN_7100015020(*param_1,5);
      }
      return 0;
    }
    pcVar3 = "CURL_SSLVERSION_MAX incompatible with CURL_SSLVERSION";
  }
  else {
    pcVar3 = "Unrecognized parameter value passed via CURLOPT_SSLVERSION";
  }
  FUN_7100016040(lVar2,(byte *)pcVar3,param_3,param_4,param_5,param_6,param_7,param_8);
  return 0x23;
}

