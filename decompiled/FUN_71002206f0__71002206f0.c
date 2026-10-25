// addr:      71002206f0
// offset:    0x2206f0
// name:      FUN_71002206f0
// mangled:   
// signature: undefined __cdecl FUN_71002206f0(long param_1, undefined8 param_2, undefined8 param_3, long param_4, char * param_5, undefined1 * param_6, char * param_7, long param_8)


void FUN_71002206f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,char *param_5,
                   undefined1 *param_6,char *param_7,long param_8)

{
  long *plVar1;
  char *param2;
  long lVar2;
  long lVar3;
  undefined **local_c0;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined8 local_a0;
  
  (**(code **)(*(long *)(param_1 + 0x1b8) + 0x10))(param_1 + 0x1b8);
  if (*(int *)(param_1 + 8) == 2) {
    FUN_7100000a00(*(long *)(param_1 + 400),0x2f,0xffffffffffffffff,param_4,param_5,param_6,param_7,
                   param_8);
    if (*(char *)(param_1 + 0x20) == '\0') {
      lVar2 = FUN_71001b6170(param_1 + 0x50);
      if (lVar2 == 0) {
        FUN_7100000a00(*(long *)(param_1 + 400),0x2728,*(undefined8 *)(param_1 + 0x220),param_4,
                       param_5,param_6,param_7,param_8);
      }
      else {
        local_b8[0] = 0;
        local_a8 = local_b8;
        local_a0 = 0x10;
        local_c0 = &PTR_FUN_710509cc08;
        FUN_71001b47e0((long)&local_c0,*(char **)(param_1 + 0x58),-1);
        FUN_71001b2b10((long)&local_c0,(undefined8 *)(param_1 + 0x178));
        FUN_7100000a00(*(long *)(param_1 + 400),0x271f,*(undefined8 *)(param_1 + 0x178),param_4,
                       param_5,param_6,param_7,param_8);
        lVar3 = *(long *)(param_1 + 400);
        lVar2 = FUN_71001b6170(param_1 + 0x50);
        FUN_7100000a00(lVar3,0x3c,lVar2,param_4,param_5,param_6,param_7,param_8);
        local_c0 = &PTR_FUN_710509cc08;
        FUN_71001b4910((long)&local_c0);
      }
    }
    else {
      if (*(char *)(param_1 + 0x210) == '\0') {
        plVar1 = FUN_7100016c00(*(long **)(param_1 + 0x180));
        *(long **)(param_1 + 0x180) = plVar1;
      }
      sprintf((char *)&local_c0,"Content-Length: %u",*(uint *)(param_1 + 0x208));
      plVar1 = FUN_7100016c00(*(long **)(param_1 + 0x180));
      *(long **)(param_1 + 0x180) = plVar1;
      param2 = FUN_71002209b0(param_1);
      sprintf((char *)&local_c0,"Content-Type: multipart/form-data; boundary=%s",param2);
      plVar1 = FUN_7100016c00(*(long **)(param_1 + 0x180));
      *(long **)(param_1 + 0x180) = plVar1;
      FUN_7100000a00(*(long *)(param_1 + 400),0x4e2c,FUN_710021f840,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_7100000a00(*(long *)(param_1 + 400),0x2719,param_1,param_4,param_5,param_6,param_7,param_8
                    );
      *(undefined1 *)(param_1 + 0x204) = 0;
      *(undefined1 *)(param_1 + 0x203) = *(undefined1 *)(param_1 + 0x204);
    }
  }
  FUN_7100000a00(*(long *)(param_1 + 400),0x2727,*(undefined8 *)(param_1 + 0x180),param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7100000a00(*(long *)(param_1 + 400),0x4e6f,FUN_710021f9b0,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7100000a00(*(long *)(param_1 + 400),0x272d,param_1,param_4,param_5,param_6,param_7,param_8);
  FUN_7100000a00(*(long *)(param_1 + 400),0x4e2b,FUN_710021f6c0,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7100000a00(*(long *)(param_1 + 400),0x2711,param_1,param_4,param_5,param_6,param_7,param_8);
  FUN_7100000a00(*(long *)(param_1 + 400),0x2b,0,param_4,param_5,param_6,param_7,param_8);
  FUN_7100000a00(*(long *)(param_1 + 400),0x4e58,FUN_710021fcf0,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7100000a00(*(long *)(param_1 + 400),0x2749,param_1,param_4,param_5,param_6,param_7,param_8);
  FUN_7100000a00(*(long *)(param_1 + 400),0x4eb4,FUN_7100220b20,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7100000a00(*(long *)(param_1 + 400),0x27a5,param_1,param_4,param_5,param_6,param_7,param_8);
  FUN_7100000a00(*(long *)(param_1 + 400),99,1,param_4,param_5,param_6,param_7,param_8);
  FUN_7100000a00(*(long *)(param_1 + 400),0x13,1,param_4,param_5,param_6,param_7,param_8);
  FUN_7100000a00(*(long *)(param_1 + 400),0x14,0x78,param_4,param_5,param_6,param_7,param_8);
  FUN_7100000a00(*(long *)(param_1 + 400),0x4e8c,FUN_710021fd50,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7100000a00(*(long *)(param_1 + 400),0x277d,param_1,param_4,param_5,param_6,param_7,param_8);
  (**(code **)(*(long *)(param_1 + 0x1b8) + 0x20))(param_1 + 0x1b8);
  return;
}

