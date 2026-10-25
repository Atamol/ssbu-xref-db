// addr:      71037c6060
// offset:    0x37c6060
// name:      FUN_71037c6060
// mangled:   
// signature: undefined __cdecl FUN_71037c6060(long * param_1, long * param_2, uint param_3)


void FUN_71037c6060(long *param_1,long *param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 != 4) {
    if (param_3 < 2) {
      *param_2 = *param_1;
      return;
    }
    if (param_3 == 2) {
      return;
    }
    if (param_3 == 3) {
      if ((*(char **)(*param_2 + 8) !=
           "N5boost9algorithm6detail13token_finderFIN2nu15isPathDelimiterIcEEEE") &&
         (iVar1 = strcmp(*(char **)(*param_2 + 8),
                         "N5boost9algorithm6detail13token_finderFIN2nu15isPathDelimiterIcEEEE"),
         iVar1 != 0)) {
        *param_2 = 0;
        return;
      }
      *param_2 = (long)param_1;
      return;
    }
  }
  *param_2 = (long)&PTR_DAT_7105241d08;
  *(undefined2 *)(param_2 + 1) = 0;
  return;
}

