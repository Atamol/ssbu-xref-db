// addr:      7101eb3dc0
// offset:    0x1eb3dc0
// name:      FUN_7101eb3dc0
// mangled:   
// size:      460

7101eb3dc0  str d8,[sp, #-0x30]!
7101eb3dc4  str x21,[sp, #0x8]
7101eb3dc8  stp x20,x19,[sp, #0x10]
7101eb3dcc  stp x29,x30,[sp, #0x20]
7101eb3dd0  add x29,sp,#0x20
7101eb3dd4  ldr x8,[x0, #0x8]
7101eb3dd8  ldr x21,[x8]
7101eb3ddc  ldr x8,[x0, #0x318]
7101eb3de0  ldrb w9,[x8, #0x161]
7101eb3de4  ldr w8,[x0, #0x270]
7101eb3de8  mov x19,x0
7101eb3dec  ldr x0,[x21, #0x10]
7101eb3df0  cmp w8,#0x1
7101eb3df4  cbz w9,0x7101eb3ea0
7101eb3df8  b.ne 0x7101eb3f08
7101eb3dfc  ldr x20,[x0, #0x8]
7101eb3e00  cbz x20,0x7101eb3e58
7101eb3e04  adrp x1,0x710435b000
7101eb3e08  add x1,x1,#0xefc
7101eb3e0c  mov x0,x20
7101eb3e10  bl 0x71037964b0
7101eb3e14  cbz x0,0x7101eb3e34
7101eb3e18  ldr x8,[x0]
7101eb3e1c  ldr x8,[x8, #0x138]
7101eb3e20  blr x8
7101eb3e24  tbz w0,#0x0,0x7101eb3f78
7101eb3e28  ldr x8,[x21, #0x10]
7101eb3e2c  ldr x20,[x8, #0x8]
7101eb3e30  cbz x20,0x7101eb3e58
7101eb3e34  adrp x1,0x7104401000
7101eb3e38  add x1,x1,#0xc9e
7101eb3e3c  mov x0,x20
7101eb3e40  bl 0x71037964b0
7101eb3e44  cbz x0,0x7101eb3e58
7101eb3e48  ldr x8,[x0]
7101eb3e4c  ldr x8,[x8, #0x138]
7101eb3e50  blr x8
7101eb3e54  tbz w0,#0x0,0x7101eb3f78
7101eb3e58  ldr x8,[x19, #0x358]
7101eb3e5c  ldrb w9,[x8, #0x1ec]
7101eb3e60  cbz w9,0x7101eb3e80
7101eb3e64  ldr x8,[x8, #0x1e0]
7101eb3e68  ldr x0,[x8, #0x8]
7101eb3e6c  cbz x0,0x7101eb3e80
7101eb3e70  ldr x8,[x0]
7101eb3e74  ldr x8,[x8, #0x138]
7101eb3e78  blr x8
7101eb3e7c  tbz w0,#0x0,0x7101eb3f78
7101eb3e80  stp xzr,xzr,[x19, #0x10]
7101eb3e84  ldr x0,[x19, #0x318]
7101eb3e88  ldp x29,x30,[sp, #0x20]
7101eb3e8c  ldr x21,[sp, #0x8]
7101eb3e90  ldp x20,x19,[sp, #0x10]
7101eb3e94  mov w1,wzr
7101eb3e98  ldr d8,[sp], #0x30
7101eb3e9c  b 0x7101ec5050
7101eb3ea0  b.ne 0x7101eb3f48
7101eb3ea4  ldr x20,[x0, #0x8]
7101eb3ea8  cbz x20,0x7101eb3f00
7101eb3eac  adrp x1,0x710435b000
7101eb3eb0  add x1,x1,#0xefc
7101eb3eb4  mov x0,x20
7101eb3eb8  bl 0x71037964b0
7101eb3ebc  cbz x0,0x7101eb3edc
7101eb3ec0  ldr x8,[x0]
7101eb3ec4  ldr x8,[x8, #0x138]
7101eb3ec8  blr x8
7101eb3ecc  tbz w0,#0x0,0x7101eb3f78
7101eb3ed0  ldr x8,[x21, #0x10]
7101eb3ed4  ldr x20,[x8, #0x8]
7101eb3ed8  cbz x20,0x7101eb3f00
7101eb3edc  adrp x1,0x71043cf000
7101eb3ee0  add x1,x1,#0xc04
7101eb3ee4  mov x0,x20
7101eb3ee8  bl 0x71037964b0
7101eb3eec  cbz x0,0x7101eb3f00
7101eb3ef0  ldr x8,[x0]
7101eb3ef4  ldr x8,[x8, #0x138]
7101eb3ef8  blr x8
7101eb3efc  tbz w0,#0x0,0x7101eb3f78
7101eb3f00  stp xzr,xzr,[x19, #0x10]
7101eb3f04  b 0x7101eb3f78
7101eb3f08  fmov s0,0xbf800000
7101eb3f0c  adrp x1,0x710435b000
7101eb3f10  add x1,x1,#0xefc
7101eb3f14  bl 0x7103778300
7101eb3f18  ldr x0,[x21, #0x10]
7101eb3f1c  fmov s0,0x3f800000
7101eb3f20  adrp x1,0x7104401000
7101eb3f24  add x1,x1,#0xc9e
7101eb3f28  bl 0x7103778300
7101eb3f2c  ldr x8,[x19, #0x358]
7101eb3f30  ldrb w9,[x8, #0x1ec]
7101eb3f34  cbz w9,0x7101eb3f70
7101eb3f38  fmov s0,0xbf800000
7101eb3f3c  add x0,x8,#0x1d8
7101eb3f40  bl 0x710377aee0
7101eb3f44  b 0x7101eb3f70
7101eb3f48  fmov s8,0xbf800000
7101eb3f4c  mov v0.16B,v8.16B
7101eb3f50  adrp x1,0x710435b000
7101eb3f54  add x1,x1,#0xefc
7101eb3f58  bl 0x7103778300
7101eb3f5c  ldr x0,[x21, #0x10]
7101eb3f60  mov v0.16B,v8.16B
7101eb3f64  adrp x1,0x71043cf000
7101eb3f68  add x1,x1,#0xc04
7101eb3f6c  bl 0x7103778300
7101eb3f70  mov w8,#0x1
7101eb3f74  str w8,[x19, #0x270]
7101eb3f78  ldp x29,x30,[sp, #0x20]
7101eb3f7c  ldr x21,[sp, #0x8]
7101eb3f80  ldp x20,x19,[sp, #0x10]
7101eb3f84  ldr d8,[sp], #0x30
7101eb3f88  ret
