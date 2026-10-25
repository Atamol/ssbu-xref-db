// addr:      71002a3f50
// offset:    0x2a3f50
// name:      FUN_71002a3f50
// mangled:   
// signature: undefined __cdecl FUN_71002a3f50(long param_1)


void FUN_71002a3f50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_158;
  char *local_150;
  
  FUN_71001b6080(&uStack_158);
  lVar1 = FUN_71001b0ab0((long)&uStack_158,"HAC-NEX/");
  uVar2 = FUN_71001dc780();
  lVar1 = FUN_71001b6470(lVar1,(ulong)((uint)uVar2 & 0xffff));
  lVar1 = FUN_71001b0ab0(lVar1,".");
  uVar2 = FUN_71001dc790();
  lVar1 = FUN_71001b6470(lVar1,(ulong)((uint)uVar2 & 0xffff));
  lVar1 = FUN_71001b0ab0(lVar1,".");
  uVar2 = FUN_71001dc7a0();
  lVar1 = FUN_71001b6470(lVar1,(ulong)((uint)uVar2 & 0xffff));
  FUN_71001b0ab0(lVar1," (");
  lVar1 = FUN_71001b0ab0((long)&uStack_158,"SDK ");
  lVar1 = FUN_71001b6470(lVar1,8);
  lVar1 = FUN_71001b0ab0(lVar1,".");
  lVar1 = FUN_71001b6470(lVar1,2);
  lVar1 = FUN_71001b0ab0(lVar1,".");
  lVar1 = FUN_71001b6470(lVar1,0);
  lVar1 = FUN_71001b0ab0(lVar1,".");
  FUN_71001b6470(lVar1,0);
  lVar1 = FUN_71001b0ab0((long)&uStack_158,"; ");
  lVar1 = FUN_71001b0ab0(lVar1,"Add-on ");
  lVar1 = FUN_71001b6470(lVar1,8);
  lVar1 = FUN_71001b0ab0(lVar1,".");
  lVar1 = FUN_71001b6470(lVar1,2);
  lVar1 = FUN_71001b0ab0(lVar1,".");
  lVar1 = FUN_71001b6470(lVar1,0);
  lVar1 = FUN_71001b0ab0(lVar1,".");
  FUN_71001b6470(lVar1,0);
  FUN_71001b0ab0((long)&uStack_158,")");
  FUN_71001b3cb0(param_1,local_150);
  FUN_71001b60c0(&uStack_158);
  return;
}

