// addr:      7101a19eb0
// offset:    0x1a19eb0
// name:      FUN_7101a19eb0
// mangled:   
// size:      472

7101a19eb0  str x25,[sp, #-0x50]!
7101a19eb4  stp x24,x23,[sp, #0x10]
7101a19eb8  stp x22,x21,[sp, #0x20]
7101a19ebc  stp x20,x19,[sp, #0x30]
7101a19ec0  stp x29,x30,[sp, #0x40]
7101a19ec4  add x29,sp,#0x40
7101a19ec8  ldr x10,[x0, #0x258]
7101a19ecc  ldr x9,[x0, #0x250]
7101a19ed0  mov w21,w1
7101a19ed4  sxtw x8,w21
7101a19ed8  mov x20,x0
7101a19edc  sub x10,x10,x9
7101a19ee0  asr x10,x10,#0x4
7101a19ee4  cmp x10,x8
7101a19ee8  b.ls 0x7101a1a080
7101a19eec  add x23,x9,x8, LSL #0x4
7101a19ef0  ldr x8,[x23, #0x8]!
7101a19ef4  ldr x8,[x8, #0x5e8]
7101a19ef8  ldr x0,[x8, #0x10]
7101a19efc  fmov s0,0x3f800000
7101a19f00  adrp x1,0x71042b4000
7101a19f04  add x1,x1,#0x86
7101a19f08  bl 0x7103778300
7101a19f0c  ldr x8,[x23]
7101a19f10  ldr w9,[x8, #0x1f8]
7101a19f14  ldr x19,[x8, #0x200]
7101a19f18  cmp w9,#0x3
7101a19f1c  mov x25,#-0x3f00000000000000
7101a19f20  and x9,x19,#-0x100000000000000
7101a19f24  and x8,x19,#0xffffffffff
7101a19f28  ccmp x9,x25,#0x0,ne
7101a19f2c  ccmp x8,#0x0,#0x4,eq
7101a19f30  b.ne 0x7101a19f4c
7101a19f34  ldp x29,x30,[sp, #0x40]
7101a19f38  ldp x20,x19,[sp, #0x30]
7101a19f3c  ldp x22,x21,[sp, #0x20]
7101a19f40  ldp x24,x23,[sp, #0x10]
7101a19f44  ldr x25,[sp], #0x50
7101a19f48  ret
7101a19f4c  adrp x24,0x710532f000
7101a19f50  ldr x8,[x24, #0x730]
7101a19f54  ldr x8,[x8, #0x8]
7101a19f58  ldr x22,[x8, #0x168]
7101a19f5c  mov x1,#0xfa78
7101a19f60  movk x1,#0xd5f7, LSL #16
7101a19f64  movk x1,#0xf, LSL #32
7101a19f68  mov x0,x22
7101a19f6c  bl 0x71032631a0
7101a19f70  and x8,x0,#-0x100000000000000
7101a19f74  and x9,x0,#0xffffffffff
7101a19f78  cmp x8,x25
7101a19f7c  ccmp x9,#0x0,#0x4,eq
7101a19f80  b.ne 0x7101a19f94
7101a19f84  cbz x9,0x7101a19fa0
7101a19f88  cmp x8,x25
7101a19f8c  b.eq 0x7101a19f34
7101a19f90  b 0x7101a19fa0
7101a19f94  eor x8,x0,x19
7101a19f98  tst x8,#0xffffffffff
7101a19f9c  b.eq 0x7101a19f34
7101a19fa0  ldr w8,[x20, #0x16c]
7101a19fa4  cmp w8,#0xa
7101a19fa8  b.eq 0x7101a19ff8
7101a19fac  cmp w8,#0x9
7101a19fb0  b.ne 0x7101a19f34
7101a19fb4  ldr w0,[x20, #0x160]
7101a19fb8  mov x1,x19
7101a19fbc  bl 0x7101a0dd00
7101a19fc0  cbnz w21,0x7101a19f34
7101a19fc4  tbz w0,#0x0,0x7101a19f34
7101a19fc8  ldr x8,[x23]
7101a19fcc  ldr x8,[x8, #0x5e8]
7101a19fd0  ldr x0,[x8, #0x10]
7101a19fd4  adrp x1,0x7104421000
7101a19fd8  add x1,x1,#0xc92
7101a19fdc  ldp x29,x30,[sp, #0x40]
7101a19fe0  fmov s0,0x3f800000
7101a19fe4  ldp x20,x19,[sp, #0x30]
7101a19fe8  ldp x22,x21,[sp, #0x20]
7101a19fec  ldp x24,x23,[sp, #0x10]
7101a19ff0  ldr x25,[sp], #0x50
7101a19ff4  b 0x7103778300
7101a19ff8  ldr w8,[x20, #0x164]
7101a19ffc  cbnz w8,0x7101a19f34
7101a1a000  ldr w8,[x20, #0x170]
7101a1a004  cbnz w8,0x7101a19f34
7101a1a008  ldr w8,[x20, #0x160]
7101a1a00c  cmp w8,#0x1
7101a1a010  b.ne 0x7101a19f34
7101a1a014  mov x0,x22
7101a1a018  mov x1,x19
7101a1a01c  bl 0x7103264270
7101a1a020  cmn w0,#0x1
7101a1a024  b.eq 0x7101a19f34
7101a1a028  adrp x8,0x7105314000
7101a1a02c  ldr x8,[x8, #0x510]
7101a1a030  ldr x8,[x8]
7101a1a034  ldr x20,[x8, #0x208]
7101a1a038  ldr x8,[x24, #0x730]
7101a1a03c  ldr x8,[x8, #0x8]
7101a1a040  ldr x0,[x8, #0x168]
7101a1a044  mov x1,x19
7101a1a048  bl 0x7103264270
7101a1a04c  tbnz w0,#0x1f,0x7101a19f34
7101a1a050  ldr x8,[x20]
7101a1a054  ldr x8,[x8]
7101a1a058  add x8,x8,w0, SXTW  #0x3
7101a1a05c  mov w9,#0x1296
7101a1a060  ldrb w8,[x8, x9, LSL ]
7101a1a064  cbz w8,0x7101a19f34
7101a1a068  ldr x8,[x23]
7101a1a06c  ldr x8,[x8, #0x5e8]
7101a1a070  ldr x0,[x8, #0x10]
7101a1a074  adrp x1,0x7104329000
7101a1a078  add x1,x1,#0x9f8
7101a1a07c  b 0x7101a19fdc
7101a1a080  add x0,x20,#0x250
7101a1a084  bl 0x71039c1330
