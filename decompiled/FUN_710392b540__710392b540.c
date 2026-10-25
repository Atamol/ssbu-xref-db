// addr:      710392b540
// offset:    0x392b540
// name:      FUN_710392b540
// mangled:   
// signature: undefined1 __cdecl FUN_710392b540(undefined8 * param_1, long * param_2, long * param_3, long * param_4, long * param_5)


undefined1
FUN_710392b540(undefined8 *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  char *local_50;
  
  local_50 = (char *)*param_1;
  *param_2 = (long)local_50;
  bVar1 = false;
  while (!bVar1) {
    switch(*local_50) {
    case '\0':
      if (local_50 != (char *)*param_1) {
        FUN_71039545b0("<jemalloc>: Conf string ends with key\n");
      }
      return 1;
    default:
      FUN_71039545b0("<jemalloc>: Malformed conf string\n");
      return 1;
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '_':
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
      break;
    case ':':
      *param_3 = (long)local_50 - *param_2;
      *param_4 = (long)(local_50 + 1);
      bVar1 = true;
    }
    local_50 = local_50 + 1;
  }
  bVar1 = false;
  while (!bVar1) {
    if (*local_50 == '\0') {
      *param_5 = (long)local_50 - *param_4;
      bVar1 = true;
    }
    else if (*local_50 == ',') {
      if (local_50[1] == '\0') {
        FUN_71039545b0("<jemalloc>: Conf string ends with comma\n");
      }
      *param_5 = (long)local_50 - *param_4;
      bVar1 = true;
      local_50 = local_50 + 1;
    }
    else {
      local_50 = local_50 + 1;
    }
  }
  *param_1 = local_50;
  return 0;
}

