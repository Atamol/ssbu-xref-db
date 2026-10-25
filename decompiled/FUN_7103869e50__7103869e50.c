// addr:      7103869e50
// offset:    0x3869e50
// name:      FUN_7103869e50
// mangled:   
// signature: undefined __cdecl FUN_7103869e50(undefined2 * param_1, long * param_2, uint param_3)


void FUN_7103869e50(undefined2 *param_1,long *param_2,uint param_3)

{
  int iVar1;
  locale *this;
  
  if (param_3 == 4) {
LAB_7103869e6c:
    *param_2 = (long)&PTR_DAT_710526f068;
    *(undefined2 *)(param_2 + 1) = 0;
    return;
  }
  if (param_3 < 2) {
    this = (locale *)(param_1 + 4);
    *(undefined2 *)param_2 = *param_1;
    std::locale::locale((locale *)(param_2 + 1),this);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 8);
    if (param_3 != 1) {
      return;
    }
  }
  else {
    if (param_3 == 3) {
      if ((*(char **)(*param_2 + 8) !=
           "N5boost9algorithm6detail13token_finderFINS1_14is_classifiedFEEE") &&
         (iVar1 = strcmp(*(char **)(*param_2 + 8),
                         "N5boost9algorithm6detail13token_finderFINS1_14is_classifiedFEEE"),
         iVar1 != 0)) {
        *param_2 = 0;
        return;
      }
      *param_2 = (long)param_1;
      return;
    }
    if (param_3 != 2) goto LAB_7103869e6c;
    this = (locale *)(param_2 + 1);
  }
  std::locale::~locale(this);
  return;
}

