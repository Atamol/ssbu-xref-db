// addr:      710317ed70
// offset:    0x317ed70
// name:      FUN_710317ed70
// mangled:   
// signature: undefined __cdecl FUN_710317ed70(long * * * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710317ed70(long ***param_1,long *param_2,long ****param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long ****pppplVar2;
  ulong uVar3;
  Fiber *this;
  long **pplVar4;
  code *pcVar5;
  long ***ppplVar6;
  Fiber *this_00;
  long ***ppplVar7;
  long local_110 [4];
  long *local_f0;
  long ***local_e0 [4];
  long ****local_c0;
  long ***local_b0;
  long **applStack_a0 [4];
  long ***local_80;
  long ***appplStack_70 [4];
  long ****local_50;
  undefined4 local_34;
  
  local_f0 = local_110;
  plVar1 = (long *)param_2[4];
  ppplVar7 = param_1;
  local_b0 = param_1;
  if (plVar1 == (long *)0x0) {
    local_f0 = (long *)0x0;
LAB_710317eddc:
    local_80 = (long ***)0x0;
  }
  else {
    if (param_2 == plVar1) {
      (**(code **)(*plVar1 + 0x18))(plVar1,local_110);
    }
    else {
      param_2[4] = 0;
      local_f0 = plVar1;
    }
    if (local_f0 == (long *)0x0) goto LAB_710317eddc;
    if (local_110 == local_f0) {
      local_80 = applStack_a0;
      (**(code **)(*local_f0 + 0x18))();
      ppplVar7 = local_b0;
    }
    else {
      local_80 = (long ***)(**(code **)(*local_f0 + 0x10))();
    }
  }
  ppplVar6 = local_80;
  local_50 = (long ****)0x0;
  pppplVar2 = (long ****)FUN_710392e290(0x10,0x50,param_3,param_4,param_5,param_6,param_7,param_8);
  if (pppplVar2 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_e0[0] = (long ***)&DAT_00000050;
      param_3 = local_e0;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (pppplVar2 = (long ****)
                      FUN_710392e290(0x10,0x50,param_3,param_4,param_5,param_6,param_7,param_8),
         pppplVar2 != (long ****)0x0)) goto LAB_710317ee94;
    }
    pppplVar2 = (long ****)0x0;
  }
LAB_710317ee94:
  *pppplVar2 = (long ***)&PTR_FUN_710517d200;
  pppplVar2[2] = ppplVar7;
  if (ppplVar6 == (long ***)0x0) {
    pppplVar2[8] = (long ***)0x0;
    ppplVar6 = applStack_a0;
LAB_710317eef0:
    if (ppplVar6 == local_80) {
      pcVar5 = (code *)(*local_80)[4];
    }
    else {
      local_50 = pppplVar2;
      if (local_80 == (long ***)0x0) goto LAB_710317ef1c;
      pcVar5 = (code *)(*local_80)[5];
    }
    local_50 = pppplVar2;
    (*pcVar5)();
  }
  else {
    if (applStack_a0 == ppplVar6) {
      pppplVar2[8] = (long ***)(pppplVar2 + 4);
      (*(code *)(*ppplVar6)[3])(ppplVar6);
      goto LAB_710317eef0;
    }
    pppplVar2[8] = ppplVar6;
    local_80 = (long ***)0x0;
    local_50 = pppplVar2;
  }
LAB_710317ef1c:
  this = (Fiber *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (this == (Fiber *)0x0) {
    local_34 = 0;
    local_e0[0] = (long ***)&DAT_00000008;
    pppplVar2 = local_e0;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
    this = (Fiber *)FUN_710392e290(0x10,8,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  }
  *(long **)this = (long *)0x0;
  this_00 = (Fiber *)param_1[1];
  param_1[1] = (long **)this;
  if (this_00 != (Fiber *)0x0) {
    phx::Fiber::~Fiber(this_00);
    FUN_710392eb40((ulong)this_00);
    this = (Fiber *)param_1[1];
  }
  if (local_50 == (long ****)0x0) {
    local_c0 = (long ****)0x0;
  }
  else if (appplStack_70 == local_50) {
    local_c0 = local_e0;
    (*(code *)(*local_50)[3])(local_50,local_e0);
  }
  else {
    local_c0 = local_50;
    local_50 = (long ****)0x0;
  }
  phx::Fiber::setup(this,(long *)local_e0,(Fiber **)"StageFiberedProcess",(Fiber *)0x10000,param_5,
                    param_6,param_7,param_8);
  if (local_e0 == local_c0) {
    pplVar4 = (*local_c0)[4];
LAB_710317f00c:
    (*(code *)pplVar4)();
  }
  else if (local_c0 != (long ****)0x0) {
    pplVar4 = (*local_c0)[5];
    goto LAB_710317f00c;
  }
  *(undefined4 *)param_1 = 1;
  if (appplStack_70 == local_50) {
    pplVar4 = (*local_50)[4];
  }
  else {
    if (local_50 == (long ****)0x0) goto LAB_710317f044;
    pplVar4 = (*local_50)[5];
  }
  (*(code *)pplVar4)();
LAB_710317f044:
  if (local_110 == local_f0) {
    pcVar5 = *(code **)(*local_f0 + 0x20);
  }
  else {
    if (local_f0 == (long *)0x0) {
      return;
    }
    pcVar5 = *(code **)(*local_f0 + 0x28);
  }
  (*pcVar5)();
  return;
}

