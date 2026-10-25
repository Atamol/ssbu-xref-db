// addr:      71020edee0
// offset:    0x20edee0
// name:      FUN_71020edee0
// mangled:   
// size:      408

71020edee0  stp x22,x21,[sp, #-0x30]!
71020edee4  stp x20,x19,[sp, #0x10]
71020edee8  stp x29,x30,[sp, #0x20]
71020edeec  add x29,sp,#0x20
71020edef0  mov w21,w2
71020edef4  and w2,w2,#0x1
71020edef8  mov x19,x1
71020edefc  mov x20,x0
71020edf00  bl 0x71020d4810
71020edf04  ldr x8,[x19, #0x10]
71020edf08  adrp x9,0x71020ed000
71020edf0c  add x9,x9,#0xe20
71020edf10  str x9,[x8]
71020edf14  mov w9,#0x2
71020edf18  str w9,[x8, #0x8]
71020edf1c  ldr x8,[x19, #0x10]
71020edf20  add x9,x8,#0x10
71020edf24  sub x1,x8,#0x10
71020edf28  adrp x2,0x710430c000
71020edf2c  add x2,x2,#0x66a
71020edf30  mov x0,x19
71020edf34  str x9,[x19, #0x10]
71020edf38  bl 0x71038f5390
71020edf3c  tbz w21,#0x0,0x71020edf94
71020edf40  ldr x8,[x19, #0x18]
71020edf44  ldr x8,[x8, #0x18]
71020edf48  cmp x8,#0x1
71020edf4c  b.lt 0x71020edf58
71020edf50  mov x0,x19
71020edf54  bl 0x71038fec40
71020edf58  mov x0,x19
71020edf5c  bl 0x710391e050
71020edf60  ldr x8,[x19, #0x10]
71020edf64  mov w9,#0x45
71020edf68  str w9,[x8, #0x8]
71020edf6c  str x0,[x8]
71020edf70  ldr x8,[x19, #0x10]
71020edf74  mov x1,x0
71020edf78  orr w3,wzr,#0x3
71020edf7c  mov x0,x19
71020edf80  mov w2,wzr
71020edf84  add x8,x8,#0x10
71020edf88  str x8,[x19, #0x10]
71020edf8c  bl 0x710391d4c0
71020edf90  b 0x71020edfac
71020edf94  ldr x8,[x19, #0x10]
71020edf98  sub x1,x8,#0x10
71020edf9c  adrp x2,0x71043ae000
71020edfa0  add x2,x2,#0xc31
71020edfa4  mov x0,x19
71020edfa8  bl 0x71038f4d40
71020edfac  ldr s0,[x20, #0x20]
71020edfb0  ldr x8,[x19, #0x10]
71020edfb4  orr w22,wzr,#0x3
71020edfb8  str w22,[x8, #0x8]
71020edfbc  str s0,[x8]
71020edfc0  ldr x8,[x19, #0x10]
71020edfc4  add x9,x8,#0x10
71020edfc8  sub x1,x8,#0x10
71020edfcc  adrp x2,0x71043d7000
71020edfd0  add x2,x2,#0xeae
71020edfd4  mov x0,x19
71020edfd8  str x9,[x19, #0x10]
71020edfdc  bl 0x71038f5390
71020edfe0  ldr s0,[x20, #0x24]
71020edfe4  ldr x8,[x19, #0x10]
71020edfe8  str w22,[x8, #0x8]
71020edfec  str s0,[x8]
71020edff0  ldr x8,[x19, #0x10]
71020edff4  add x9,x8,#0x10
71020edff8  sub x1,x8,#0x10
71020edffc  adrp x2,0x71042ab000
71020ee000  add x2,x2,#0xc20
71020ee004  mov x0,x19
71020ee008  str x9,[x19, #0x10]
71020ee00c  bl 0x71038f5390
71020ee010  ldr x8,[x19, #0x10]
71020ee014  tbz w21,#0x0,0x71020ee034
71020ee018  sub x1,x8,#0x20
71020ee01c  adrp x2,0x71043ae000
71020ee020  add x2,x2,#0xc31
71020ee024  mov x0,x19
71020ee028  bl 0x71038f5390
71020ee02c  ldr x8,[x19, #0x10]
71020ee030  b 0x71020ee03c
71020ee034  sub x8,x8,#0x10
71020ee038  str x8,[x19, #0x10]
71020ee03c  ldr w9,[x20, #0x30]
71020ee040  orr w10,wzr,#0x3
71020ee044  str w10,[x8, #0x8]
71020ee048  adrp x2,0x7104271000
71020ee04c  add x2,x2,#0x1b4
71020ee050  str w9,[x8]
71020ee054  ldr x8,[x19, #0x10]
71020ee058  add x9,x8,#0x10
71020ee05c  str x9,[x19, #0x10]
71020ee060  mov x0,x19
71020ee064  ldp x20,x19,[sp, #0x10]
71020ee068  ldp x29,x30,[sp, #0x20]
71020ee06c  sub x1,x8,#0x10
71020ee070  ldp x22,x21,[sp], #0x30
71020ee074  b 0x71038f5390
