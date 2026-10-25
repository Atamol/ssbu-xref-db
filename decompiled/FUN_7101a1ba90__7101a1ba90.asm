// addr:      7101a1ba90
// offset:    0x1a1ba90
// name:      FUN_7101a1ba90
// mangled:   
// size:      396

7101a1ba90  sub sp,sp,#0x60
7101a1ba94  str x21,[sp, #0x30]
7101a1ba98  stp x20,x19,[sp, #0x40]
7101a1ba9c  stp x29,x30,[sp, #0x50]
7101a1baa0  add x29,sp,#0x50
7101a1baa4  ldr w8,[x1]
7101a1baa8  mov x19,x1
7101a1baac  mov x20,x0
7101a1bab0  cbz w8,0x7101a1bad0
7101a1bab4  ldr w8,[x19, #0xc]
7101a1bab8  add w2,w8,#0x2
7101a1babc  adrp x1,0x7104318000
7101a1bac0  add x1,x1,#0x90a
7101a1bac4  mov x0,x20
7101a1bac8  bl 0x7103778430
7101a1bacc  b 0x7101a1bae4
7101a1bad0  ldr x0,[x20, #0x8]
7101a1bad4  fmov s0,0x3f800000
7101a1bad8  adrp x1,0x71042c4000
7101a1badc  add x1,x1,#0x7bc
7101a1bae0  bl 0x7103778300
7101a1bae4  adrp x1,0x71042f7000
7101a1bae8  add x1,x1,#0xc68
7101a1baec  add x8,sp,#0x10
7101a1baf0  mov x0,x20
7101a1baf4  bl 0x7103776910
7101a1baf8  adrp x1,0x71042e6000
7101a1bafc  add x1,x1,#0xadd
7101a1bb00  mov x8,sp
7101a1bb04  mov x0,x20
7101a1bb08  bl 0x7103776910
7101a1bb0c  ldr w8,[x19]
7101a1bb10  cbz w8,0x7101a1bb48
7101a1bb14  ldr w3,[x19, #0x4]
7101a1bb18  adrp x21,0x710438c000
7101a1bb1c  add x21,x21,#0x303
7101a1bb20  add x0,sp,#0x10
7101a1bb24  mov w2,#0x1
7101a1bb28  mov x1,x21
7101a1bb2c  bl 0x710377a280
7101a1bb30  ldr w3,[x19, #0x4]
7101a1bb34  mov x0,sp
7101a1bb38  mov w2,#0x1
7101a1bb3c  mov x1,x21
7101a1bb40  bl 0x710377a280
7101a1bb44  b 0x7101a1bb68
7101a1bb48  adrp x21,0x7104412000
7101a1bb4c  add x21,x21,#0x2f4
7101a1bb50  add x0,sp,#0x10
7101a1bb54  mov x1,x21
7101a1bb58  bl 0x710377a120
7101a1bb5c  mov x0,sp
7101a1bb60  mov x1,x21
7101a1bb64  bl 0x710377a120
7101a1bb68  adrp x1,0x7104339000
7101a1bb6c  add x1,x1,#0xb9e
7101a1bb70  add x8,sp,#0x20
7101a1bb74  mov x0,x20
7101a1bb78  bl 0x7103776910
7101a1bb7c  ldr w8,[x19]
7101a1bb80  cbz w8,0x7101a1bbb0
7101a1bb84  ldr w8,[x19, #0xc]
7101a1bb88  cmp w8,#0x1
7101a1bb8c  b.ne 0x7101a1bbb0
7101a1bb90  ldr w3,[x19, #0x10]
7101a1bb94  adrp x1,0x71042d5000
7101a1bb98  add x1,x1,#0xc40
7101a1bb9c  add x0,sp,#0x20
7101a1bba0  mov w2,#0x1
7101a1bba4  bl 0x710377a280
7101a1bba8  ldr x19,[sp, #0x28]
7101a1bbac  b 0x7101a1bbd0
7101a1bbb0  ldr x19,[sp, #0x28]
7101a1bbb4  ldr x0,[x19, #0x10]
7101a1bbb8  cbz x0,0x7101a1bbd0
7101a1bbbc  sub x1,x29,#0x14
7101a1bbc0  mov w2,wzr
7101a1bbc4  mov w3,wzr
7101a1bbc8  stur wzr,[x29, #-0x14]
7101a1bbcc  bl 0x71037a2270
7101a1bbd0  adrp x20,0x710523d000
7101a1bbd4  add x20,x20,#0x9a8
7101a1bbd8  stp x20,xzr,[sp, #0x20]
7101a1bbdc  cbz x19,0x7101a1bbe8
7101a1bbe0  mov x0,x19
7101a1bbe4  bl 0x710392eb40
7101a1bbe8  ldr x0,[sp, #0x8]
7101a1bbec  stp x20,xzr,[sp]
7101a1bbf0  cbz x0,0x7101a1bbf8
7101a1bbf4  bl 0x710392eb40
7101a1bbf8  ldr x0,[sp, #0x18]
7101a1bbfc  stp x20,xzr,[sp, #0x10]
7101a1bc00  cbz x0,0x7101a1bc08
7101a1bc04  bl 0x710392eb40
7101a1bc08  ldp x29,x30,[sp, #0x50]
7101a1bc0c  ldr x21,[sp, #0x30]
7101a1bc10  ldp x20,x19,[sp, #0x40]
7101a1bc14  add sp,sp,#0x60
7101a1bc18  ret
