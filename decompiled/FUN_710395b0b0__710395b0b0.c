// addr:      710395b0b0
// offset:    0x395b0b0
// name:      FUN_710395b0b0
// mangled:   
// signature: undefined __cdecl FUN_710395b0b0(long param_1, undefined4 param_2, uint * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710395b0b0(long param_1,undefined4 param_2,uint *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_154 [256];
  byte abStack_54 [12];
  ulong local_48;
  uint *local_40;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  long local_28;
  
  local_2c = 2;
  local_30 = 0xffffffff;
  local_40 = param_3;
  local_34 = param_2;
  local_28 = param_1;
  switch(param_2) {
  case 0:
    uVar3 = 0xffffffff;
    FUN_710395b300((long)abStack_54,&DAT_71042d5020,2,0xffffffff,param_5,param_6,param_7,param_8);
    pcVar1 = "true";
    if ((*local_40 & 1) == 0) {
      pcVar1 = "false";
    }
    FUN_710395aa50(local_28,abStack_54,pcVar1,uVar3,param_5,param_6,param_7,param_8);
    break;
  case 1:
    uVar3 = 0xffffffff;
    FUN_710395b300((long)abStack_54,&DAT_71044000d8,2,0xffffffff,param_5,param_6,param_7,param_8);
    FUN_710395aa50(local_28,abStack_54,(ulong)*local_40,uVar3,param_5,param_6,param_7,param_8);
    break;
  case 2:
    uVar3 = 0xffffffff;
    FUN_710395b300((long)abStack_54,&DAT_710433901f,2,0xffffffff,param_5,param_6,param_7,param_8);
    FUN_710395aa50(local_28,abStack_54,(ulong)*local_40,uVar3,param_5,param_6,param_7,param_8);
    break;
  case 3:
    uVar3 = 0xffffffff;
    FUN_710395b300((long)abStack_54,&DAT_710433901f,2,0xffffffff,param_5,param_6,param_7,param_8);
    FUN_710395aa50(local_28,abStack_54,(ulong)*local_40,uVar3,param_5,param_6,param_7,param_8);
    break;
  case 4:
    uVar3 = 0xffffffff;
    FUN_710395b300((long)abStack_54,&DAT_71042d5022,2,0xffffffff,param_5,param_6,param_7,param_8);
    FUN_710395aa50(local_28,abStack_54,*(undefined8 *)local_40,uVar3,param_5,param_6,param_7,param_8
                  );
    break;
  case 5:
    uVar3 = 0xffffffff;
    FUN_710395b300((long)abStack_54,&DAT_710425e0a4,2,0xffffffff,param_5,param_6,param_7,param_8);
    FUN_710395aa50(local_28,abStack_54,*(undefined8 *)local_40,uVar3,param_5,param_6,param_7,param_8
                  );
    break;
  case 6:
    uVar3 = 0xffffffff;
    FUN_710395b300((long)abStack_54,&DAT_71042a1d22,2,0xffffffff,param_5,param_6,param_7,param_8);
    FUN_710395aa50(local_28,abStack_54,*(undefined8 *)local_40,uVar3,param_5,param_6,param_7,param_8
                  );
    break;
  case 7:
    local_48 = FUN_71039573e0((long)auStack_154,0x100,&DAT_7104339021,*(undefined8 *)param_3,param_5
                              ,param_6,param_7,param_8);
    uVar2 = (ulong)local_30;
    FUN_710395b300((long)abStack_54,&DAT_71042d5020,local_2c,local_30,param_5,param_6,param_7,
                   param_8);
    FUN_710395aa50(local_28,abStack_54,auStack_154,uVar2,param_5,param_6,param_7,param_8);
    break;
  case 8:
    uVar3 = 0xffffffff;
    FUN_710395b300((long)abStack_54,&DAT_71042d5020,2,0xffffffff,param_5,param_6,param_7,param_8);
    FUN_710395aa50(local_28,abStack_54,*(undefined8 *)local_40,uVar3,param_5,param_6,param_7,param_8
                  );
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}

