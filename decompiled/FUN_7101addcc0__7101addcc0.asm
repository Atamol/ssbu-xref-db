// addr:      7101addcc0
// offset:    0x1addcc0
// name:      FUN_7101addcc0
// mangled:   
// size:      268

7101addcc0  sub sp,sp,#0x30
7101addcc4  str x19,[sp, #0x10]
7101addcc8  stp x29,x30,[sp, #0x20]
7101addccc  add x29,sp,#0x20
7101addcd0  mov x19,x0
7101addcd4  cmp w1,#0x6
7101addcd8  b.hi 0x7101addd24
7101addcdc  mov w8,w1
7101addce0  adrp x9,0x71044f8000
7101addce4  add x9,x9,#0x3ec
7101addce8  ldrsw x8,[x9, x8, LSL #0x2]
7101addcec  add x8,x8,x9
7101addcf0  br x8
7101addcf4  adrp x1,0x7104329000
7101addcf8  add x1,x1,#0xb5b
7101addcfc  b 0x7101adddb4
7101addd00  adrp x1,0x710424e000
7101addd04  add x1,x1,#0xffa
7101addd08  b 0x7101adddb4
7101addd0c  adrp x1,0x71042f7000
7101addd10  add x1,x1,#0xdfd
7101addd14  b 0x7101adddb4
7101addd18  adrp x1,0x7104454000
7101addd1c  add x1,x1,#0x5a5
7101addd20  b 0x7101adddb4
7101addd24  adrp x8,0x710523d000
7101addd28  add x8,x8,#0x9a8
7101addd2c  mov w0,#0x10
7101addd30  mov w1,#0x20
7101addd34  str x8,[x19]
7101addd38  bl 0x710392e290
7101addd3c  cbnz x0,0x7101addd84
7101addd40  adrp x8,0x7105332000
7101addd44  ldr x0,[x8, #0xf00]
7101addd48  cbz x0,0x7101addd80
7101addd4c  mov w8,#0x20
7101addd50  stur wzr,[x29, #-0x4]
7101addd54  sub x1,x29,#0x4
7101addd58  str x8,[sp, #0x8]
7101addd5c  ldr x8,[x0]
7101addd60  ldr x8,[x8, #0x30]
7101addd64  add x2,sp,#0x8
7101addd68  blr x8
7101addd6c  tbz w0,#0x0,0x7101addd80
7101addd70  mov w0,#0x10
7101addd74  mov w1,#0x20
7101addd78  bl 0x710392e290
7101addd7c  cbnz x0,0x7101addd84
7101addd80  mov x0,xzr
7101addd84  stp xzr,xzr,[x0, #0x10]
7101addd88  stp xzr,xzr,[x0]
7101addd8c  str x0,[x19, #0x8]
7101addd90  ldp x29,x30,[sp, #0x20]
7101addd94  ldr x19,[sp, #0x10]
7101addd98  add sp,sp,#0x30
7101addd9c  ret
7101addda0  adrp x1,0x7104318000
7101addda4  add x1,x1,#0xa18
7101addda8  b 0x7101adddb4
7101adddac  adrp x1,0x7104443000
7101adddb0  add x1,x1,#0x127
7101adddb4  mov x8,x19
7101adddb8  ldp x29,x30,[sp, #0x20]
7101adddbc  ldr x19,[sp, #0x10]
7101adddc0  mov x0,x2
7101adddc4  add sp,sp,#0x30
7101adddc8  b 0x7103776910
