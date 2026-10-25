// addr:      7101a1be30
// offset:    0x1a1be30
// name:      FUN_7101a1be30
// mangled:   
// size:      568

7101a1be30  sub sp,sp,#0x70
7101a1be34  str x23,[sp, #0x30]
7101a1be38  stp x22,x21,[sp, #0x40]
7101a1be3c  stp x20,x19,[sp, #0x50]
7101a1be40  stp x29,x30,[sp, #0x60]
7101a1be44  add x29,sp,#0x60
7101a1be48  ldr w8,[x1]
7101a1be4c  mov x19,x1
7101a1be50  mov x20,x0
7101a1be54  cbz w8,0x7101a1be74
7101a1be58  ldr w8,[x19, #0xc]
7101a1be5c  add w2,w8,#0x2
7101a1be60  adrp x1,0x7104318000
7101a1be64  add x1,x1,#0x90a
7101a1be68  mov x0,x20
7101a1be6c  bl 0x7103778430
7101a1be70  b 0x7101a1be88
7101a1be74  ldr x0,[x20, #0x8]
7101a1be78  fmov s0,0x3f800000
7101a1be7c  adrp x1,0x71042c4000
7101a1be80  add x1,x1,#0x7bc
7101a1be84  bl 0x7103778300
7101a1be88  adrp x1,0x71042f7000
7101a1be8c  add x1,x1,#0xc68
7101a1be90  add x8,sp,#0x10
7101a1be94  mov x0,x20
7101a1be98  bl 0x7103776910
7101a1be9c  adrp x1,0x71042e6000
7101a1bea0  add x1,x1,#0xadd
7101a1bea4  mov x8,sp
7101a1bea8  mov x0,x20
7101a1beac  bl 0x7103776910
7101a1beb0  ldr w8,[x19]
7101a1beb4  cbz w8,0x7101a1bf5c
7101a1beb8  cmp w8,#0x2
7101a1bebc  b.ne 0x7101a1bf80
7101a1bec0  ldr w8,[x19, #0x8]
7101a1bec4  mov w9,#0x8889
7101a1bec8  movk w9,#0x8888, LSL #16
7101a1becc  mul x10,x8,x9
7101a1bed0  lsr x10,x10,#0x25
7101a1bed4  mov w11,#0xb3c5
7101a1bed8  movk w11,#0x91a2, LSL #16
7101a1bedc  mul x11,x8,x11
7101a1bee0  lsr x11,x11,#0x2b
7101a1bee4  orr w13,wzr,#0x3c
7101a1bee8  adrp x23,0x7104412000
7101a1beec  add x23,x23,#0x315
7101a1bef0  mov x1,x23
7101a1bef4  mul x12,x10,x9
7101a1bef8  lsr x12,x12,#0x25
7101a1befc  msub w12,w12,w13,w10
7101a1bf00  cmp w11,#0x3e7
7101a1bf04  mov w13,#0x3e7
7101a1bf08  csel x11,x11,x13,cc
7101a1bf0c  mov w13,#0x3e8
7101a1bf10  madd x21,x11,x13,x12
7101a1bf14  mov w11,#0xffffffc4
7101a1bf18  madd w8,w10,w11,w8
7101a1bf1c  mov w10,#0x64
7101a1bf20  mul w8,w8,w10
7101a1bf24  umull x8,w8,w9
7101a1bf28  lsr x22,x8,#0x25
7101a1bf2c  add x0,sp,#0x10
7101a1bf30  mov w2,#0x2
7101a1bf34  mov x3,x21
7101a1bf38  mov w4,w22
7101a1bf3c  bl 0x710377a280
7101a1bf40  mov x0,sp
7101a1bf44  mov w2,#0x2
7101a1bf48  mov x1,x23
7101a1bf4c  mov x3,x21
7101a1bf50  mov w4,w22
7101a1bf54  bl 0x710377a280
7101a1bf58  b 0x7101a1bfb0
7101a1bf5c  adrp x21,0x7104412000
7101a1bf60  add x21,x21,#0x2f4
7101a1bf64  add x0,sp,#0x10
7101a1bf68  mov x1,x21
7101a1bf6c  bl 0x710377a120
7101a1bf70  mov x0,sp
7101a1bf74  mov x1,x21
7101a1bf78  bl 0x710377a120
7101a1bf7c  b 0x7101a1bfb0
7101a1bf80  ldr w3,[x19, #0x4]
7101a1bf84  adrp x21,0x7104454000
7101a1bf88  add x21,x21,#0x489
7101a1bf8c  add x0,sp,#0x10
7101a1bf90  mov w2,#0x1
7101a1bf94  mov x1,x21
7101a1bf98  bl 0x710377a280
7101a1bf9c  ldr w3,[x19, #0x4]
7101a1bfa0  mov x0,sp
7101a1bfa4  mov w2,#0x1
7101a1bfa8  mov x1,x21
7101a1bfac  bl 0x710377a280
7101a1bfb0  adrp x1,0x7104339000
7101a1bfb4  add x1,x1,#0xb9e
7101a1bfb8  add x8,sp,#0x20
7101a1bfbc  mov x0,x20
7101a1bfc0  bl 0x7103776910
7101a1bfc4  ldr w8,[x19]
7101a1bfc8  cbz w8,0x7101a1bff8
7101a1bfcc  ldr w8,[x19, #0xc]
7101a1bfd0  cmp w8,#0x1
7101a1bfd4  b.ne 0x7101a1bff8
7101a1bfd8  ldr w3,[x19, #0x10]
7101a1bfdc  adrp x1,0x71042d5000
7101a1bfe0  add x1,x1,#0xc40
7101a1bfe4  add x0,sp,#0x20
7101a1bfe8  mov w2,#0x1
7101a1bfec  bl 0x710377a280
7101a1bff0  ldr x19,[sp, #0x28]
7101a1bff4  b 0x7101a1c018
7101a1bff8  ldr x19,[sp, #0x28]
7101a1bffc  ldr x0,[x19, #0x10]
7101a1c000  cbz x0,0x7101a1c018
7101a1c004  sub x1,x29,#0x24
7101a1c008  mov w2,wzr
7101a1c00c  mov w3,wzr
7101a1c010  stur wzr,[x29, #-0x24]
7101a1c014  bl 0x71037a2270
7101a1c018  adrp x20,0x710523d000
7101a1c01c  add x20,x20,#0x9a8
7101a1c020  stp x20,xzr,[sp, #0x20]
7101a1c024  cbz x19,0x7101a1c030
7101a1c028  mov x0,x19
7101a1c02c  bl 0x710392eb40
7101a1c030  ldr x0,[sp, #0x8]
7101a1c034  stp x20,xzr,[sp]
7101a1c038  cbz x0,0x7101a1c040
7101a1c03c  bl 0x710392eb40
7101a1c040  ldr x0,[sp, #0x18]
7101a1c044  stp x20,xzr,[sp, #0x10]
7101a1c048  cbz x0,0x7101a1c050
7101a1c04c  bl 0x710392eb40
7101a1c050  ldp x29,x30,[sp, #0x60]
7101a1c054  ldr x23,[sp, #0x30]
7101a1c058  ldp x20,x19,[sp, #0x50]
7101a1c05c  ldp x22,x21,[sp, #0x40]
7101a1c060  add sp,sp,#0x70
7101a1c064  ret
