// addr:      71038f6260
// offset:    0x38f6260
// name:      FUN_71038f6260
// mangled:   
// signature: int __cdecl FUN_71038f6260(long param_1, undefined * param_2, undefined8 param_3, undefined4 param_4)


int FUN_71038f6260(long param_1,undefined *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long local_58;
  code *pcStack_50;
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  undefined8 local_38;
  
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) != 0x46) {
    return 1;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + -0x10) + 0x18);
  local_58 = param_1;
  pcStack_50 = (code *)param_2;
  local_48 = param_3;
  local_40 = param_4;
  local_3c = (*(code *)param_2)(param_1,&DAT_71042f68f9,4,param_3);
  local_38._0_1_ = 0x53;
  if (local_3c == 0) {
    local_3c = (*(code *)param_2)(param_1,&local_38,1,param_3);
    local_38._0_1_ = 0;
    if ((local_3c == 0) && (local_3c = (*pcStack_50)(local_58,&local_38,1,local_48), local_3c == 0))
    {
      local_3c = (*pcStack_50)(local_58,&DAT_7104453653,6,local_48);
      local_38._0_1_ = 4;
      if (local_3c == 0) {
        local_3c = (*pcStack_50)(local_58,&local_38,1,local_48);
        local_38._0_1_ = 8;
        if (local_3c == 0) {
          local_3c = (*pcStack_50)(local_58,&local_38,1,local_48);
          local_38._0_1_ = 4;
          if (local_3c == 0) {
            local_3c = (*pcStack_50)(local_58,&local_38,1,local_48);
            local_38._0_1_ = 8;
            if (local_3c == 0) {
              local_3c = (*pcStack_50)(local_58,&local_38,1,local_48);
              local_38 = CONCAT71(local_38._1_7_,4);
              if (local_3c == 0) {
                local_3c = (*pcStack_50)(local_58,&local_38,1,local_48);
                local_38 = 0x5678;
                if (local_3c == 0) {
                  local_3c = (*pcStack_50)(local_58,&local_38,8,local_48);
                  local_38 = CONCAT44(local_38._4_4_,0x43b94000);
                  if (local_3c == 0) {
                    local_3c = (*pcStack_50)(local_58,&local_38,4,local_48);
                  }
                  goto LAB_71038f6340;
                }
              }
            }
          }
        }
      }
    }
  }
  local_38 = 0x43b94000;
LAB_71038f6340:
  local_38 = CONCAT71(local_38._1_7_,(char)*(undefined4 *)(lVar1 + 0x10));
  if (local_3c == 0) {
    local_3c = (*pcStack_50)(local_58,&local_38,1,local_48);
  }
  FUN_71038fd620(lVar1,0,&local_58);
  return local_3c;
}

