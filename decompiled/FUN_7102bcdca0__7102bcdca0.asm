// addr:      7102bcdca0
// offset:    0x2bcdca0
// name:      FUN_7102bcdca0
// mangled:   
// size:      388

7102bcdca0  str x19,[sp, #-0x20]!
7102bcdca4  stp x29,x30,[sp, #0x10]
7102bcdca8  add x29,sp,#0x10
7102bcdcac  ldr x8,[x0, #0xc0]
7102bcdcb0  cbz x8,0x7102bcddd8
7102bcdcb4  ldr x10,[x0, #0xc8]
7102bcdcb8  ldp x8,x9,[x10]
7102bcdcbc  mov x19,x0
7102bcdcc0  cmp x8,x9
7102bcdcc4  b.eq 0x7102bcdd44
7102bcdcc8  mov w10,#0x1
7102bcdccc  ldr x12,[x8]
7102bcdcd0  ldrb w11,[x12, #0x20]
7102bcdcd4  cbnz w11,0x7102bcdd34
7102bcdcd8  ldp x14,x11,[x12, #0x8]
7102bcdcdc  ldr x13,[x12]
7102bcdce0  strb w10,[x12, #0x20]
7102bcdce4  str x13,[x14]
7102bcdce8  str x14,[x13, #0x8]
7102bcdcec  ldr x13,[x11, #0x30]
7102bcdcf0  sub x13,x13,#0x1
7102bcdcf4  str x13,[x11, #0x30]
7102bcdcf8  stp xzr,xzr,[x12]
7102bcdcfc  ldr x14,[x11, #0x28]
7102bcdd00  add x13,x11,#0x20
7102bcdd04  stp x13,x14,[x12]
7102bcdd08  str x12,[x11, #0x28]
7102bcdd0c  str x12,[x14]
7102bcdd10  ldr x13,[x11, #0x18]
7102bcdd14  add x13,x13,#0x1
7102bcdd18  str x13,[x11, #0x18]
7102bcdd1c  ldr x12,[x12, #0x18]
7102bcdd20  cbz x12,0x7102bcdd28
7102bcdd24  ldr w12,[x12, #0x110]
7102bcdd28  ldr w13,[x11, #0x48]
7102bcdd2c  add w12,w13,w12
7102bcdd30  str w12,[x11, #0x48]
7102bcdd34  add x8,x8,#0x8
7102bcdd38  cmp x9,x8
7102bcdd3c  b.ne 0x7102bcdccc
7102bcdd40  ldr x10,[x19, #0xc8]
7102bcdd44  ldr w8,[x19, #0x60]
7102bcdd48  ldp x0,x1,[x10]
7102bcdd4c  adrp x2,0x71043bc000
7102bcdd50  add x2,x2,#0xb6c
7102bcdd54  cbz w8,0x7102bcdd74
7102bcdd58  bl 0x71025f5420
7102bcdd5c  ldr x8,[x19, #0xc8]
7102bcdd60  ldp x0,x1,[x8]
7102bcdd64  adrp x2,0x710436a000
7102bcdd68  add x2,x2,#0x9e7
7102bcdd6c  bl 0x71025f55b0
7102bcdd70  b 0x7102bcdd8c
7102bcdd74  bl 0x71025f55b0
7102bcdd78  ldr x8,[x19, #0xc8]
7102bcdd7c  ldp x0,x1,[x8]
7102bcdd80  adrp x2,0x710436a000
7102bcdd84  add x2,x2,#0x9e7
7102bcdd88  bl 0x71025f5420
7102bcdd8c  adrp x8,0x7105314000
7102bcdd90  add x8,x8,#0x4d8
7102bcdd94  ldarb w8,[x8]
7102bcdd98  tbz w8,#0x0,0x7102bcdde4
7102bcdd9c  adrp x8,0x71052c5000
7102bcdda0  ldrb w8,[x8, #0x1ba]
7102bcdda4  cbz w8,0x7102bcddd8
7102bcdda8  ldr x8,[x19, #0xc0]
7102bcddac  ldp x0,x1,[x8]
7102bcddb0  adrp x2,0x71042a1000
7102bcddb4  add x2,x2,#0x676
7102bcddb8  bl 0x71025f5420
7102bcddbc  ldr x8,[x19, #0xc0]
7102bcddc0  ldp x0,x1,[x8]
7102bcddc4  ldp x29,x30,[sp, #0x10]
7102bcddc8  adrp x2,0x7104441000
7102bcddcc  add x2,x2,#0xec7
7102bcddd0  ldr x19,[sp], #0x20
7102bcddd4  b 0x71025f5420
7102bcddd8  ldp x29,x30,[sp, #0x10]
7102bcdddc  ldr x19,[sp], #0x20
7102bcdde0  ret
7102bcdde4  adrp x0,0x7105314000
7102bcdde8  add x0,x0,#0x4d8
7102bcddec  bl 0x71039c06b0
7102bcddf0  cbz w0,0x7102bcdd9c
7102bcddf4  bl 0x7101764000
7102bcddf8  adrp x0,0x7101763000
7102bcddfc  add x0,x0,#0xc40
7102bcde00  adrp x1,0x71052c5000
7102bcde04  add x1,x1,#0x180
7102bcde08  adrp x2,0x7104f17000
7102bcde0c  add x2,x2,#0x0
7102bcde10  bl 0x71000001c0
7102bcde14  adrp x0,0x7105314000
7102bcde18  add x0,x0,#0x4d8
7102bcde1c  bl 0x71039c06c0
7102bcde20  b 0x7102bcdd9c
