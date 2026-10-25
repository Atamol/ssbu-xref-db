// addr:      71001ba530
// offset:    0x1ba530
// name:      FUN_71001ba530
// mangled:   
// size:      80

71001ba530  ldr x8,[x1]
71001ba534  ldrb w9,[x8]
71001ba538  sub w8,w9,#0x5b
71001ba53c  cmp w8,#0x20
71001ba540  b.hi 0x71001ba55c
71001ba544  adrp x9,0x710449a000
71001ba548  add x9,x9,#0x9ec
71001ba54c  ldrsw x8,[x9, x8, LSL #0x2]
71001ba550  add x8,x8,x9
71001ba554  br x8
71001ba558  b 0x71001bafb0
71001ba55c  cmp w9,#0x22
71001ba560  b.ne 0x71001ba56c
71001ba564  mov w3,wzr
71001ba568  b 0x71001ba920
71001ba56c  b 0x71001bb220
71001ba570  b 0x71001ba7e0
71001ba574  b 0x71001ba580
71001ba578  b 0x71001ba6b0
71001ba57c  b 0x71001bac90
