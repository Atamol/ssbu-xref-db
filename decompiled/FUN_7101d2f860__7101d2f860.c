// addr:      7101d2f860
// offset:    0x1d2f860
// name:      FUN_7101d2f860
// mangled:   
// signature: undefined __cdecl FUN_7101d2f860(long param_1)


void FUN_7101d2f860(long param_1)

{
  uint local_78 [2];
  char local_70 [64];
  
  if (*(long *)(param_1 + 0x40) != 0) {
    local_70[0] = '\0';
    local_78[0] = 0;
    local_78[1] = 0;
    FUN_710062dc20(local_78,"%s_is_connected");
    if ((long *)**(undefined8 **)(param_1 + 0x40) != (long *)0x0) {
      FUN_7103375650((long *)**(undefined8 **)(param_1 + 0x40),local_70,&DAT_71043cdb7b);
    }
    FUN_710062dc20(local_78,"%s_is_edited");
    if ((long *)**(undefined8 **)(param_1 + 0x40) != (long *)0x0) {
      FUN_7103375650((long *)**(undefined8 **)(param_1 + 0x40),local_70,&DAT_71043cdb7b);
    }
    FUN_710062dc20(local_78,"%s_vibe_enable");
    if ((long *)**(undefined8 **)(param_1 + 0x40) != (long *)0x0) {
      FUN_7103375650((long *)**(undefined8 **)(param_1 + 0x40),local_70,&DAT_71043cdb7b);
    }
  }
  return;
}

