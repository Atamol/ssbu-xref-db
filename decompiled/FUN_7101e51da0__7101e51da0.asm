// addr:      7101e51da0
// offset:    0x1e51da0
// name:      FUN_7101e51da0
// mangled:   
// size:      396

7101e51da0  sub sp,sp,#0x50
7101e51da4  stp d9,d8,[sp, #0x10]
7101e51da8  str x21,[sp, #0x20]
7101e51dac  stp x20,x19,[sp, #0x30]
7101e51db0  stp x29,x30,[sp, #0x40]
7101e51db4  add x29,sp,#0x40
7101e51db8  ldr x21,[x0, #0x8]
7101e51dbc  mov x19,x0
7101e51dc0  ldr x0,[x21, #0x8]
7101e51dc4  mov v8.16B,v0.16B
7101e51dc8  fmov s9,wzr
7101e51dcc  mov w20,w1
7101e51dd0  cbz x0,0x7101e51df8
7101e51dd4  adrp x1,0x71043cf000
7101e51dd8  add x1,x1,#0xbba
7101e51ddc  bl 0x71037964b0
7101e51de0  cbz x0,0x7101e51df8
7101e51de4  ldr x8,[x0]
7101e51de8  ldr x8,[x8, #0x1a8]
7101e51dec  blr x8
7101e51df0  ldr x21,[x19, #0x8]
7101e51df4  mov v9.16B,v0.16B
7101e51df8  fmul s0,s9,s8
7101e51dfc  adrp x1,0x71043cf000
7101e51e00  add x1,x1,#0xbba
7101e51e04  mov x0,x21
7101e51e08  bl 0x7103778630
7101e51e0c  tbz w20,#0x0,0x7101e51e58
7101e51e10  adrp x1,0x71042b4000
7101e51e14  add x1,x1,#0xab5
7101e51e18  mov x8,sp
7101e51e1c  mov x0,x19
7101e51e20  bl 0x71037780e0
7101e51e24  ldr x20,[sp, #0x8]
7101e51e28  ldr x0,[x20, #0x8]
7101e51e2c  cbz x0,0x7101e51e40
7101e51e30  ldr x8,[x0]
7101e51e34  ldr x8,[x8, #0x138]
7101e51e38  blr x8
7101e51e3c  tbz w0,#0x0,0x7101e51ec4
7101e51e40  ldr x0,[x19, #0x8]
7101e51e44  fmov s0,0x3f800000
7101e51e48  adrp x1,0x71043be000
7101e51e4c  add x1,x1,#0xc46
7101e51e50  bl 0x7103778300
7101e51e54  b 0x7101e51ee8
7101e51e58  ldr x20,[x19, #0x8]
7101e51e5c  ldr x0,[x20, #0x8]
7101e51e60  cbz x0,0x7101e51e88
7101e51e64  adrp x1,0x71042d6000
7101e51e68  add x1,x1,#0x9e0
7101e51e6c  bl 0x71037964b0
7101e51e70  cbz x0,0x7101e51e88
7101e51e74  ldr x8,[x0]
7101e51e78  ldr x8,[x8, #0x130]
7101e51e7c  blr x8
7101e51e80  tbnz w0,#0x0,0x7101e51e9c
7101e51e84  ldr x20,[x19, #0x8]
7101e51e88  fmov s0,0x3f800000
7101e51e8c  adrp x1,0x71042d6000
7101e51e90  add x1,x1,#0x9e0
7101e51e94  mov x0,x20
7101e51e98  bl 0x7103778300
7101e51e9c  ldp d9,d8,[sp, #0x10]
7101e51ea0  ldr x0,[x19, #0x8]
7101e51ea4  ldp x29,x30,[sp, #0x40]
7101e51ea8  adrp x1,0x71042f8000
7101e51eac  add x1,x1,#0x93e
7101e51eb0  ldp x20,x19,[sp, #0x30]
7101e51eb4  ldr x21,[sp, #0x20]
7101e51eb8  fmov s0,0x3f800000
7101e51ebc  add sp,sp,#0x50
7101e51ec0  b 0x7103778300
7101e51ec4  ldr x0,[x20, #0x8]
7101e51ec8  cbz x0,0x7101e51edc
7101e51ecc  ldr x8,[x0]
7101e51ed0  ldr x8,[x8, #0x130]
7101e51ed4  blr x8
7101e51ed8  tbnz w0,#0x0,0x7101e51ee8
7101e51edc  fmov s0,0x3f800000
7101e51ee0  mov x0,sp
7101e51ee4  bl 0x710377aee0
7101e51ee8  ldr x0,[x19, #0x8]
7101e51eec  fmov s0,0x3f800000
7101e51ef0  adrp x1,0x710433a000
7101e51ef4  add x1,x1,#0x73c
7101e51ef8  bl 0x7103778300
7101e51efc  adrp x8,0x710523d000
7101e51f00  add x8,x8,#0x9e8
7101e51f04  stp x8,xzr,[sp]
7101e51f08  cbz x20,0x7101e51f14
7101e51f0c  mov x0,x20
7101e51f10  bl 0x710392eb40
7101e51f14  ldp d9,d8,[sp, #0x10]
7101e51f18  ldr x21,[sp, #0x20]
7101e51f1c  ldp x29,x30,[sp, #0x40]
7101e51f20  ldp x20,x19,[sp, #0x30]
7101e51f24  add sp,sp,#0x50
7101e51f28  ret
