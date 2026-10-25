// addr:      710001eed0
// offset:    0x1eed0
// name:      FUN_710001eed0
// mangled:   
// signature: undefined __cdecl FUN_710001eed0(long * param_1)


void FUN_710001eed0(long *param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar1;
  
  if (*(char *)(*param_1 + 0x6c8) == '\0') {
    return;
  }
  if (*(char *)((long)param_1 + 0x817) == '\0') {
    if (*(char *)((long)param_1 + 0x816) == '\0') {
      plVar1 = param_1 + 0x1c;
      if (*(char *)((long)param_1 + 0x813) != '\0') {
        plVar1 = param_1 + 0x21;
      }
    }
    else {
      plVar1 = param_1 + 0x2d;
    }
  }
  else {
    plVar1 = param_1 + 0x25;
  }
  FUN_7100015de0(*param_1,(byte *)"Connected to %s (%s) port %ld (#%ld)\n",*plVar1,param_1 + 0x12,
                 param_1[0x32],param_1[0xd],in_x6,in_x7);
  return;
}

