// addr:      7101ad5ed0
// offset:    0x1ad5ed0
// name:      FUN_7101ad5ed0
// mangled:   
// size:      400

7101ad5ed0  sub sp,sp,#0xf0
7101ad5ed4  str d10,[sp, #0x70]
7101ad5ed8  stp d9,d8,[sp, #0x80]
7101ad5edc  stp x28,x27,[sp, #0x90]
7101ad5ee0  stp x26,x25,[sp, #0xa0]
7101ad5ee4  stp x24,x23,[sp, #0xb0]
7101ad5ee8  stp x22,x21,[sp, #0xc0]
7101ad5eec  stp x20,x19,[sp, #0xd0]
7101ad5ef0  stp x29,x30,[sp, #0xe0]
7101ad5ef4  add x29,sp,#0xe0
7101ad5ef8  fmov s9,wzr
7101ad5efc  fmov s10,0x41000000
7101ad5f00  add x8,sp,#0x28
7101ad5f04  mov x19,x0
7101ad5f08  mov x20,xzr
7101ad5f0c  add x21,x8,#0x8
7101ad5f10  adrp x23,0x71042c5000
7101ad5f14  add x23,x23,#0x15
7101ad5f18  add x8,x0,#0x10
7101ad5f1c  adrp x24,0x7104422000
7101ad5f20  add x24,x24,#0x5ea
7101ad5f24  stur x8,[x29, #-0x68]
7101ad5f28  mov w26,#0x1
7101ad5f2c  adrp x27,0x710523d000
7101ad5f30  add x27,x27,#0x9e8
7101ad5f34  adrp x28,0x710523d000
7101ad5f38  add x28,x28,#0x988
7101ad5f3c  add x8,x19,x20
7101ad5f40  ldrb w8,[x8, #0x560]
7101ad5f44  cbz w8,0x7101ad6008
7101ad5f48  add x0,sp,#0x28
7101ad5f4c  mov x1,x23
7101ad5f50  mov w2,w20
7101ad5f54  strb wzr,[sp, #0x30]
7101ad5f58  str xzr,[sp, #0x28]
7101ad5f5c  bl 0x710062dc20
7101ad5f60  ldp x8,x9,[x19, #0x10]
7101ad5f64  cmp x9,x8
7101ad5f68  b.eq 0x7101ad6058
7101ad5f6c  ldr x8,[x8]
7101ad5f70  ldr x8,[x8]
7101ad5f74  ldr x8,[x8]
7101ad5f78  add x0,x8,#0x8
7101ad5f7c  add x8,sp,#0x18
7101ad5f80  mov x1,x21
7101ad5f84  bl 0x7103776640
7101ad5f88  add x8,sp,#0x8
7101ad5f8c  add x0,sp,#0x18
7101ad5f90  mov x1,x24
7101ad5f94  bl 0x71037780e0
7101ad5f98  ldr x25,[sp, #0x10]
7101ad5f9c  ldr x0,[x25, #0x8]
7101ad5fa0  mov v8.16B,v9.16B
7101ad5fa4  cbz x0,0x7101ad5fb8
7101ad5fa8  ldr x8,[x0]
7101ad5fac  ldr x8,[x8, #0x198]
7101ad5fb0  blr x8
7101ad5fb4  mov v8.16B,v0.16B
7101ad5fb8  fcmp s8,s10
7101ad5fbc  cset w22,pl
7101ad5fc0  stp x27,xzr,[sp, #0x8]
7101ad5fc4  cbz x25,0x7101ad5fd0
7101ad5fc8  mov x0,x25
7101ad5fcc  bl 0x710392eb40
7101ad5fd0  ldr x25,[sp, #0x20]
7101ad5fd4  and w26,w26,w22
7101ad5fd8  stp x28,xzr,[sp, #0x18]
7101ad5fdc  cbz x25,0x7101ad6000
7101ad5fe0  ldr x0,[x25, #0x18]
7101ad5fe4  adrp x8,0x710523d000
7101ad5fe8  add x8,x8,#0x9a8
7101ad5fec  stp x8,xzr,[x25, #0x10]
7101ad5ff0  cbz x0,0x7101ad5ff8
7101ad5ff4  bl 0x710392eb40
7101ad5ff8  mov x0,x25
7101ad5ffc  bl 0x710392eb40
7101ad6000  fcmp s8,s10
7101ad6004  b.mi 0x7101ad6014
7101ad6008  add x20,x20,#0x1
7101ad600c  cmp x20,#0xa
7101ad6010  b.cc 0x7101ad5f3c
7101ad6014  tbz w26,#0x0,0x7101ad6030
7101ad6018  mov x0,x19
7101ad601c  bl 0x7101ad8100
7101ad6020  ldr w8,[x19, #0x15c]
7101ad6024  subs w8,w8,#0x1
7101ad6028  b.lt 0x7101ad6030
7101ad602c  str w8,[x19, #0x15c]
7101ad6030  ldp d9,d8,[sp, #0x80]
7101ad6034  ldr d10,[sp, #0x70]
7101ad6038  ldp x29,x30,[sp, #0xe0]
7101ad603c  ldp x20,x19,[sp, #0xd0]
7101ad6040  ldp x22,x21,[sp, #0xc0]
7101ad6044  ldp x24,x23,[sp, #0xb0]
7101ad6048  ldp x26,x25,[sp, #0xa0]
7101ad604c  ldp x28,x27,[sp, #0x90]
7101ad6050  add sp,sp,#0xf0
7101ad6054  ret
7101ad6058  ldur x0,[x29, #-0x68]
7101ad605c  bl 0x71039c1330
