// addr:      71001ba530
// offset:    0x1ba530
// name:      FUN_71001ba530
// mangled:   
// signature: undefined __cdecl FUN_71001ba530(long * param_1, long * param_2, long param_3)


void FUN_71001ba530(long *param_1,long *param_2,long param_3)

{
  switch(*(char *)*param_2) {
  case '[':
    FUN_71001bafb0((long)param_1,param_2,param_3);
    return;
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'l':
  case 'm':
  case 'o':
  case 'p':
  case 'q':
  case 'r':
  case 's':
  case 'u':
  case 'v':
  case 'w':
  case 'x':
  case 'y':
  case 'z':
    goto switchD_71001ba554_caseD_5c;
  case 'f':
    FUN_71001ba7e0((long)param_1,param_2,param_3);
    return;
  case 'n':
    FUN_71001ba580((long)param_1,param_2,param_3);
    return;
  case 't':
    FUN_71001ba6b0((long)param_1,param_2,param_3);
    return;
  case '{':
    FUN_71001bac90(param_1,param_2,param_3);
    return;
  default:
    if (*(char *)*param_2 == '\"') {
      FUN_71001ba920(param_1,param_2,param_3);
      return;
    }
switchD_71001ba554_caseD_5c:
    FUN_71001bb220((long)param_1,param_2,param_3);
    return;
  }
}

