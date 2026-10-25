// addr:      71001b0fd0
// offset:    0x1b0fd0
// name:      FUN_71001b0fd0
// mangled:   
// signature: int __cdecl FUN_71001b0fd0(uint * param_1)


int FUN_71001b0fd0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *param_1;
  if (-1 < (int)uVar1) {
    return 0;
  }
  iVar3 = -1;
  switch(uVar1 >> 0x10 & 0x7ff) {
  case 1:
    iVar3 = 2;
    iVar2 = uVar1 + 0x7ffeffff;
    iVar4 = 100;
    break;
  case 2:
    iVar2 = uVar1 + 0x7ffdffff;
    iVar3 = 1;
    iVar4 = 200;
    break;
  case 3:
    iVar3 = 0x7ffcff9e;
    if (-0x7ffcff39 < (int)uVar1) {
      iVar3 = 0x7ffcff4d;
    }
    iVar4 = 300;
    iVar2 = iVar3 + uVar1;
    if ((int)uVar1 < -0x7ffcff9c) {
      iVar2 = uVar1 + 0x7ffcffff;
    }
    iVar3 = 1;
    break;
  case 4:
    iVar3 = 1;
    iVar2 = uVar1 + 0x7ffbffff;
    iVar4 = 400;
    break;
  case 5:
    iVar3 = 1;
    iVar2 = uVar1 + 0x7ffaffff;
    iVar4 = 500;
    break;
  case 6:
    iVar2 = uVar1 + 0x7ff9ffff;
    iVar3 = 2;
    iVar4 = 600;
    break;
  default:
    goto switchD_71001b1004_caseD_7;
  case 0x65:
    iVar2 = uVar1 + 0x7f9b0000;
    iVar3 = 2;
    iVar4 = 700;
    break;
  case 0x67:
    iVar3 = 1;
    iVar2 = uVar1 + 0x7f98ffff;
    iVar4 = 0x44c;
    break;
  case 0x68:
    iVar3 = 1;
    iVar2 = uVar1 + 0x7f97ffff;
    iVar4 = 800;
    break;
  case 0x69:
    iVar3 = 1;
    iVar2 = uVar1 + 0x7f96ffff;
    iVar4 = 0x4b0;
    break;
  case 0x6c:
    iVar3 = 0;
    iVar2 = uVar1 + 0x7f93ffff;
    iVar4 = 0x5dc;
    break;
  case 0x6f:
    iVar3 = 1;
    iVar2 = uVar1 + 0x7f90ffff;
    iVar4 = 0x708;
    break;
  case 0x70:
    iVar3 = 1;
    iVar2 = uVar1 + 0x7f8fffff;
    iVar4 = 0x76c;
    break;
  case 0x71:
    iVar3 = 1;
    iVar2 = uVar1 + 0x7f8effff;
    iVar4 = 2000;
    break;
  case 0x72:
    iVar3 = 1;
    iVar2 = uVar1 + 0x7f8dffff;
    iVar4 = 0x834;
    break;
  case 0x73:
    iVar3 = 1;
    iVar2 = uVar1 + 0x7f8cffff;
    iVar4 = 0x898;
    break;
  case 0x74:
    iVar3 = 1;
    iVar2 = uVar1 + 0x7f8bffff;
    iVar4 = 8000;
    break;
  case 0x75:
    iVar2 = uVar1 + 0x7f8affff;
    iVar3 = 1;
    iVar4 = 0x8fc;
  }
  iVar3 = iVar2 + iVar4 + iVar3;
switchD_71001b1004_caseD_7:
  return iVar3;
}

