// addr:      7100164960
// offset:    0x164960
// name:      FUN_7100164960
// mangled:   
// signature: undefined FUN_7100164960(void)


void FUN_7100164960(long *param_1,long *param_2)

{
  long lVar1;
  ErrorResultVariant *this;
  int aiStack_88 [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  lVar1 = DAT_71052ad718;
  this = (ErrorResultVariant *)((ulong)aiStack_88 | 4);
  do {
    switch((int)param_1[0x14]) {
    case 1:
    case 3:
      FUN_710013bb20((long)(param_1 + 0xb));
      break;
    case 2:
      (**(code **)(*param_1 + 8))(aiStack_78,param_1);
      if ((param_1[0x17] != 0) && (FUN_71001635a0(aiStack_88,param_1[0x17]), aiStack_88[0] != 0)) {
        FUN_71000bcf30(aiStack_78,aiStack_88);
      }
      if (aiStack_78[0] != 0) {
        aiStack_88[0] = 0x2c03;
        nn::err::ErrorResultVariant::ErrorResultVariant(this);
        auStack_68[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
        if (aiStack_78[0] != aiStack_88[0]) {
          aiStack_88[0] = 0x4c0d;
          nn::err::ErrorResultVariant::ErrorResultVariant(this);
          auStack_68[0] = 0;
          nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
          if (aiStack_78[0] != aiStack_88[0]) {
            aiStack_88[0] = 0x2c09;
            nn::err::ErrorResultVariant::ErrorResultVariant(this);
            auStack_68[0] = 0;
            nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
            if (aiStack_78[0] != aiStack_88[0]) {
              FUN_71000bcf30((int *)(param_1 + 0x15),aiStack_78);
              *(undefined4 *)(param_1 + 0x14) = 3;
              break;
            }
            if (*(int *)((long)param_1 + 0xa4) == 0) break;
          }
          FUN_710013bb30((long)(param_1 + 0xb),(lVar1 * *(int *)((long)param_1 + 0xa4)) / 1000);
          break;
        }
      }
      break;
    case 0x11:
      *(undefined4 *)(param_1 + 0x14) = 1;
      break;
    case 0x12:
      *(undefined4 *)(param_1 + 0x14) = 2;
      break;
    case 0x14:
      (**(code **)(*param_2 + 0x38))(param_2,0);
      *(undefined4 *)(param_1 + 0x14) = 4;
      return;
    }
  } while( true );
}

