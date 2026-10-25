// addr:      71020edc20
// offset:    0x20edc20
// name:      FUN_71020edc20
// mangled:   
// size:      504

71020edc20  sub sp,sp,#0x80
71020edc24  stp x22,x21,[sp, #0x50]
71020edc28  stp x20,x19,[sp, #0x60]
71020edc2c  stp x29,x30,[sp, #0x70]
71020edc30  add x29,sp,#0x70
71020edc34  ldr x8,[x0, #0x18]
71020edc38  ldr x8,[x8, #0x18]
71020edc3c  mov x19,x0
71020edc40  cmp x8,#0x1
71020edc44  b.lt 0x71020edc50
71020edc48  mov x0,x19
71020edc4c  bl 0x71038fec40
71020edc50  mov x0,x19
71020edc54  bl 0x710391e050
71020edc58  ldr x8,[x19, #0x10]
71020edc5c  mov w22,#0x45
71020edc60  str w22,[x8, #0x8]
71020edc64  str x0,[x8]
71020edc68  ldr x8,[x19, #0x10]
71020edc6c  mov x1,x0
71020edc70  orr w3,wzr,#0x3
71020edc74  mov x0,x19
71020edc78  mov w2,wzr
71020edc7c  orr w20,wzr,#0x3
71020edc80  add x8,x8,#0x10
71020edc84  str x8,[x19, #0x10]
71020edc88  bl 0x710391d4c0
71020edc8c  adrp x8,0x71052a8000
71020edc90  ldr x8,[x8, #0xa80]
71020edc94  ldr q0,[x8]
71020edc98  mov x9,#0x1
71020edc9c  mov x8,#0x44
71020edca0  movk x9,#0x5000, LSL #48
71020edca4  orr w21,wzr,#0x3f800000
71020edca8  add x0,sp,#0x10
71020edcac  mov w2,#0x1
71020edcb0  str q0,[sp]
71020edcb4  movk x8,#0x5000, LSL #48
71020edcb8  stp x9,x8,[sp, #0x18]
71020edcbc  adrp x8,0x71050b4000
71020edcc0  add x8,x8,#0xd28
71020edcc4  mov x1,x19
71020edcc8  str x8,[sp, #0x10]
71020edccc  str w21,[sp, #0x40]
71020edcd0  str q0,[sp, #0x30]
71020edcd4  bl 0x71020d4810
71020edcd8  ldr x8,[x19, #0x10]
71020edcdc  adrp x9,0x71020ed000
71020edce0  add x9,x9,#0xe20
71020edce4  str x9,[x8]
71020edce8  mov w9,#0x2
71020edcec  str w9,[x8, #0x8]
71020edcf0  ldr x8,[x19, #0x10]
71020edcf4  add x9,x8,#0x10
71020edcf8  sub x1,x8,#0x10
71020edcfc  adrp x2,0x710430c000
71020edd00  add x2,x2,#0x66a
71020edd04  mov x0,x19
71020edd08  str x9,[x19, #0x10]
71020edd0c  bl 0x71038f5390
71020edd10  ldr x8,[x19, #0x18]
71020edd14  ldr x8,[x8, #0x18]
71020edd18  cmp x8,#0x1
71020edd1c  b.lt 0x71020edd28
71020edd20  mov x0,x19
71020edd24  bl 0x71038fec40
71020edd28  mov x0,x19
71020edd2c  bl 0x710391e050
71020edd30  ldr x8,[x19, #0x10]
71020edd34  str x0,[x8]
71020edd38  str w22,[x8, #0x8]
71020edd3c  ldr x8,[x19, #0x10]
71020edd40  mov x1,x0
71020edd44  orr w3,wzr,#0x3
71020edd48  mov x0,x19
71020edd4c  mov w2,wzr
71020edd50  add x8,x8,#0x10
71020edd54  str x8,[x19, #0x10]
71020edd58  bl 0x710391d4c0
71020edd5c  ldr q0,[sp]
71020edd60  ldr x8,[x19, #0x10]
71020edd64  str w20,[x8, #0x8]
71020edd68  str s0,[x8]
71020edd6c  ldr x8,[x19, #0x10]
71020edd70  add x9,x8,#0x10
71020edd74  sub x1,x8,#0x10
71020edd78  adrp x2,0x71043d7000
71020edd7c  add x2,x2,#0xeae
71020edd80  mov x0,x19
71020edd84  str x9,[x19, #0x10]
71020edd88  bl 0x71038f5390
71020edd8c  ldr q0,[sp]
71020edd90  ldr x8,[x19, #0x10]
71020edd94  st1 {v0.S}[1],[x8]
71020edd98  str w20,[x8, #0x8]
71020edd9c  ldr x8,[x19, #0x10]
71020edda0  add x9,x8,#0x10
71020edda4  sub x1,x8,#0x10
71020edda8  adrp x2,0x71042ab000
71020eddac  add x2,x2,#0xc20
71020eddb0  mov x0,x19
71020eddb4  str x9,[x19, #0x10]
71020eddb8  bl 0x71038f5390
71020eddbc  ldr x8,[x19, #0x10]
71020eddc0  sub x1,x8,#0x20
71020eddc4  adrp x2,0x71043ae000
71020eddc8  add x2,x2,#0xc31
71020eddcc  mov x0,x19
71020eddd0  bl 0x71038f5390
71020eddd4  ldr x8,[x19, #0x10]
71020eddd8  str w21,[x8]
71020edddc  str w20,[x8, #0x8]
71020edde0  ldr x8,[x19, #0x10]
71020edde4  add x9,x8,#0x10
71020edde8  sub x1,x8,#0x10
71020eddec  adrp x2,0x7104271000
71020eddf0  add x2,x2,#0x1b4
71020eddf4  mov x0,x19
71020eddf8  str x9,[x19, #0x10]
71020eddfc  bl 0x71038f5390
71020ede00  ldp x29,x30,[sp, #0x70]
71020ede04  mov w0,#0x1
71020ede08  ldp x20,x19,[sp, #0x60]
71020ede0c  ldp x22,x21,[sp, #0x50]
71020ede10  add sp,sp,#0x80
71020ede14  ret
