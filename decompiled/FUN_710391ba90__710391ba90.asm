// addr:      710391ba90
// offset:    0x391ba90
// name:      FUN_710391ba90
// mangled:   
// size:      832

710391ba90  stp x29,x30,[sp, #-0x10]!
710391ba94  mov x29,sp
710391ba98  ldr x8,[x1]
710391ba9c  add x9,x8,#0x1
710391baa0  str x9,[x1]
710391baa4  ldrb w9,[x8]
710391baa8  str wzr,[x2]
710391baac  sub w10,w9,#0x20
710391bab0  cmp w10,#0x5a
710391bab4  b.hi 0x710391bd60
710391bab8  adrp x11,0x7104536000
710391babc  add x11,x11,#0xd80
710391bac0  mov w8,#0x5
710391bac4  ldrsw x10,[x11, x10, LSL #0x2]
710391bac8  add x10,x10,x11
710391bacc  br x10
710391bad0  mov w8,#0x8
710391bad4  b 0x710391bc5c
710391bad8  mov w8,#0x4
710391badc  b 0x710391bb1c
710391bae0  mov w8,#0x1
710391bae4  str w8,[x0, #0x8]
710391bae8  b 0x710391bcb0
710391baec  mov w9,#0x8
710391baf0  b 0x710391bd4c
710391baf4  orr w8,wzr,#0x7
710391baf8  b 0x710391bd54
710391bafc  mov w8,#0x2
710391bb00  b 0x710391bc5c
710391bb04  str wzr,[x0, #0x8]
710391bb08  b 0x710391bcb0
710391bb0c  mov w8,#0x1
710391bb10  str w8,[x2]
710391bb14  b 0x710391bd54
710391bb18  mov w8,#0x8
710391bb1c  str w8,[x2]
710391bb20  mov w8,#0x2
710391bb24  b 0x710391bd54
710391bb28  ldr x10,[x1]
710391bb2c  ldrb w8,[x10]
710391bb30  sub w8,w8,#0x30
710391bb34  cmp w8,#0x9
710391bb38  b.ls 0x710391bc18
710391bb3c  mov w8,#0x4
710391bb40  b 0x710391bc5c
710391bb44  ldr x9,[x1]
710391bb48  ldrb w8,[x9]
710391bb4c  sub w8,w8,#0x30
710391bb50  cmp w8,#0x9
710391bb54  b.ls 0x710391bc68
710391bb58  mov w2,#0x8
710391bb5c  b 0x710391bcac
710391bb60  mov w9,#0x1
710391bb64  b 0x710391bd4c
710391bb68  mov w9,#0x2
710391bb6c  b 0x710391bd4c
710391bb70  ldr x10,[x1]
710391bb74  ldrb w8,[x10]
710391bb78  sub w8,w8,#0x30
710391bb7c  cmp w8,#0x9
710391bb80  b.ls 0x710391bcb8
710391bb84  mov w8,#0x8
710391bb88  b 0x710391bcfc
710391bb8c  ldr x10,[x1]
710391bb90  ldrb w8,[x10]
710391bb94  sub w8,w8,#0x30
710391bb98  cmp w8,#0x9
710391bb9c  b.hi 0x710391bd74
710391bba0  mov w8,wzr
710391bba4  mov w9,#0xcccc
710391bba8  movk w9,#0xccc, LSL #16
710391bbac  add x10,x10,#0x1
710391bbb0  mov w11,#0xa
710391bbb4  str x10,[x1]
710391bbb8  ldurb w12,[x10, #-0x1]
710391bbbc  madd w8,w8,w11,w12
710391bbc0  ldrb w12,[x10], #0x1
710391bbc4  sub w12,w12,#0x30
710391bbc8  sub w8,w8,#0x30
710391bbcc  cmp w8,w9
710391bbd0  ccmp w12,#0xa,#0x2,lt
710391bbd4  b.cc 0x710391bbb4
710391bbd8  cmn w8,#0x1
710391bbdc  str w8,[x2]
710391bbe0  b.eq 0x710391bd7c
710391bbe4  orr w8,wzr,#0x3
710391bbe8  b 0x710391bd54
710391bbec  ldr x10,[x1]
710391bbf0  ldrb w8,[x10]
710391bbf4  sub w8,w8,#0x30
710391bbf8  cmp w8,#0x9
710391bbfc  b.ls 0x710391bd08
710391bc00  mov w9,#0x4
710391bc04  b 0x710391bd4c
710391bc08  mov w8,#0x1
710391bc0c  str w8,[x2]
710391bc10  orr w8,wzr,#0x6
710391bc14  b 0x710391bd54
710391bc18  mov w8,wzr
710391bc1c  mov w9,#0xcccc
710391bc20  movk w9,#0xccc, LSL #16
710391bc24  add x10,x10,#0x1
710391bc28  mov w11,#0xa
710391bc2c  str x10,[x1]
710391bc30  ldurb w12,[x10, #-0x1]
710391bc34  madd w8,w8,w11,w12
710391bc38  ldrb w12,[x10], #0x1
710391bc3c  sub w12,w12,#0x30
710391bc40  sub w8,w8,#0x30
710391bc44  cmp w8,w9
710391bc48  ccmp w12,#0xa,#0x2,lt
710391bc4c  b.cc 0x710391bc2c
710391bc50  sub w9,w8,#0x1
710391bc54  cmp w9,#0x10
710391bc58  b.cs 0x710391bd8c
710391bc5c  str w8,[x2]
710391bc60  mov w8,#0x1
710391bc64  b 0x710391bd54
710391bc68  mov w2,wzr
710391bc6c  mov w8,#0xcccc
710391bc70  movk w8,#0xccc, LSL #16
710391bc74  add x9,x9,#0x1
710391bc78  mov w10,#0xa
710391bc7c  str x9,[x1]
710391bc80  ldurb w11,[x9, #-0x1]
710391bc84  madd w11,w2,w10,w11
710391bc88  sub w2,w11,#0x30
710391bc8c  ldrb w11,[x9], #0x1
710391bc90  sub w11,w11,#0x30
710391bc94  cmp w2,w8
710391bc98  ccmp w11,#0xa,#0x2,lt
710391bc9c  b.cc 0x710391bc7c
710391bca0  sub w8,w2,#0x1
710391bca4  cmp w8,#0x10
710391bca8  b.cs 0x710391bda4
710391bcac  str w2,[x0, #0xc]
710391bcb0  mov w8,#0x8
710391bcb4  b 0x710391bd54
710391bcb8  mov w8,wzr
710391bcbc  mov w9,#0xcccc
710391bcc0  movk w9,#0xccc, LSL #16
710391bcc4  add x10,x10,#0x1
710391bcc8  mov w11,#0xa
710391bccc  str x10,[x1]
710391bcd0  ldurb w12,[x10, #-0x1]
710391bcd4  madd w8,w8,w11,w12
710391bcd8  ldrb w12,[x10], #0x1
710391bcdc  sub w12,w12,#0x30
710391bce0  sub w8,w8,#0x30
710391bce4  cmp w8,w9
710391bce8  ccmp w12,#0xa,#0x2,lt
710391bcec  b.cc 0x710391bccc
710391bcf0  sub w9,w8,#0x1
710391bcf4  cmp w9,#0x10
710391bcf8  b.cs 0x710391bd8c
710391bcfc  str w8,[x2]
710391bd00  mov w8,#0x4
710391bd04  b 0x710391bd54
710391bd08  mov w9,wzr
710391bd0c  mov w8,#0xcccc
710391bd10  movk w8,#0xccc, LSL #16
710391bd14  add x10,x10,#0x1
710391bd18  mov w11,#0xa
710391bd1c  str x10,[x1]
710391bd20  ldurb w12,[x10, #-0x1]
710391bd24  madd w9,w9,w11,w12
710391bd28  ldrb w12,[x10], #0x1
710391bd2c  sub w12,w12,#0x30
710391bd30  sub w9,w9,#0x30
710391bd34  cmp w9,w8
710391bd38  ccmp w12,#0xa,#0x2,lt
710391bd3c  b.cc 0x710391bd1c
710391bd40  sub w8,w9,#0x1
710391bd44  cmp w8,#0x10
710391bd48  b.cs 0x710391bdb8
710391bd4c  mov w8,wzr
710391bd50  str w9,[x2]
710391bd54  mov w0,w8
710391bd58  ldp x29,x30,[sp], #0x10
710391bd5c  ret
710391bd60  ldr x0,[x0]
710391bd64  adrp x1,0x7104442000
710391bd68  add x1,x1,#0x502
710391bd6c  mov w2,w9
710391bd70  bl 0x71038f6c50
710391bd74  mov w8,#0xffffffff
710391bd78  str w8,[x2]
710391bd7c  ldr x0,[x0]
710391bd80  adrp x1,0x710439b000
710391bd84  add x1,x1,#0xdf8
710391bd88  bl 0x71038f6c50
710391bd8c  ldr x0,[x0]
710391bd90  adrp x1,0x710439b000
710391bd94  add x1,x1,#0xdd0
710391bd98  mov w3,#0x10
710391bd9c  mov w2,w8
710391bda0  bl 0x71038f6c50
710391bda4  ldr x0,[x0]
710391bda8  adrp x1,0x710439b000
710391bdac  add x1,x1,#0xdd0
710391bdb0  mov w3,#0x10
710391bdb4  bl 0x71038f6c50
710391bdb8  ldr x0,[x0]
710391bdbc  adrp x1,0x710439b000
710391bdc0  add x1,x1,#0xdd0
710391bdc4  mov w3,#0x10
710391bdc8  mov w2,w9
710391bdcc  bl 0x71038f6c50
