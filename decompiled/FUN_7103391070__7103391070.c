// addr:      7103391070
// offset:    0x3391070
// name:      FUN_7103391070
// mangled:   
// signature: undefined8 __cdecl FUN_7103391070(undefined8 param_1, undefined8 param_2, long * param_3, short * param_4)


undefined8 FUN_7103391070(undefined8 param_1,undefined8 param_2,long *param_3,short *param_4)

{
  short sVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  short *psVar5;
  void *__s2;
  uint uVar6;
  ulong uVar7;
  short local_68 [12];
  
  pcVar4 = (char *)*DAT_7105314510;
  puVar3 = *(undefined8 **)(pcVar4 + 0x58);
  if ((param_4 == (short *)0x0) || (sVar1 = *param_4, sVar1 == 0)) {
    uVar6 = 0;
  }
  else {
    local_68[0] = sVar1;
    if (param_4[1] == 0) {
      uVar6 = 1;
    }
    else {
      local_68[1] = param_4[1];
      if (param_4[2] == 0) {
        uVar6 = 2;
      }
      else {
        local_68[2] = param_4[2];
        if (param_4[3] == 0) {
          uVar6 = 3;
        }
        else {
          local_68[3] = param_4[3];
          if (param_4[4] == 0) {
            uVar6 = 4;
          }
          else {
            local_68[4] = param_4[4];
            if (param_4[5] == 0) {
              uVar6 = 5;
            }
            else {
              local_68[5] = param_4[5];
              if (param_4[6] == 0) {
                uVar6 = 6;
              }
              else {
                local_68[6] = param_4[6];
                if (param_4[7] == 0) {
                  uVar6 = 7;
                }
                else {
                  local_68[7] = param_4[7];
                  if (param_4[8] == 0) {
                    uVar6 = 8;
                  }
                  else {
                    local_68[8] = param_4[8];
                    if (param_4[9] == 0) {
                      uVar6 = 9;
                    }
                    else {
                      local_68[9] = param_4[9];
                      uVar6 = 10;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  local_68[uVar6] = 0;
  if (local_68[0] != 0) {
    psVar5 = local_68;
    do {
      psVar5 = psVar5 + 1;
    } while (*psVar5 != 0);
  }
  if (*pcVar4 == '\0') {
    uVar7 = 1;
    __s2 = (void *)(*(long *)*puVar3 + 0xf7e4);
    do {
      if (((*(char *)((long)__s2 + -0xc) != '\0') && (uVar6 == *(uint *)((long)__s2 + -4))) &&
         (iVar2 = memcmp(local_68,__s2,(ulong)(uVar6 << 1)), iVar2 == 0)) {
        iVar2 = FUN_71037ab600(param_2,500,(byte *)"pop_opt_btn_key_not_create_same_name",0);
        *param_3 = (long)iVar2;
        return 1;
      }
      uVar7 = uVar7 + 1;
      __s2 = (void *)((long)__s2 + 0xf7d8);
    } while (uVar7 < 0x3d);
  }
  return 0;
}

