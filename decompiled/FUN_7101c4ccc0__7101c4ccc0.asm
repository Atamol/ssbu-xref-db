// addr:      7101c4ccc0
// offset:    0x1c4ccc0
// name:      FUN_7101c4ccc0
// mangled:   
// size:      292

7101c4ccc0  sub sp,sp,#0x60
7101c4ccc4  stp x20,x19,[sp, #0x40]
7101c4ccc8  stp x29,x30,[sp, #0x50]
7101c4cccc  add x29,sp,#0x50
7101c4ccd0  ldr x8,[x0, #0xc8]
7101c4ccd4  str wzr,[x0, #0xd0]
7101c4ccd8  mov x19,x0
7101c4ccdc  ldr x0,[x8, #0x8]
7101c4cce0  fmov s0,0x3f800000
7101c4cce4  adrp x1,0x71042d6000
7101c4cce8  add x1,x1,#0x2be
7101c4ccec  bl 0x7103778300
7101c4ccf0  adrp x8,0x710532f000
7101c4ccf4  ldr x8,[x8, #0x8d0]
7101c4ccf8  ldr x0,[x8, #0x8]
7101c4ccfc  ldrb w8,[x0, #0x191]
7101c4cd00  cbnz w8,0x7101c4cd80
7101c4cd04  mov x20,#0x4630
7101c4cd08  movk x20,#0xd2d, LSL #16
7101c4cd0c  movk x20,#0x1a, LSL #32
7101c4cd10  mov w2,#0x4
7101c4cd14  mov x1,x20
7101c4cd18  bl 0x7103313f20
7101c4cd1c  tbz w0,#0x0,0x7101c4cd80
7101c4cd20  mov x0,sp
7101c4cd24  mov x1,x20
7101c4cd28  bl 0x71024076d0
7101c4cd2c  ldr x8,[sp, #0x10]
7101c4cd30  adrp x9,0x7104f73000
7101c4cd34  add x9,x9,#0xd50
7101c4cd38  str x9,[sp, #0x8]
7101c4cd3c  cbz x8,0x7101c4cdac
7101c4cd40  adrp x8,0x7106dd5000
7101c4cd44  ldrb w8,[x8, #0x3a8]
7101c4cd48  cmp w8,#0x1
7101c4cd4c  b.ne 0x7101c4cdac
7101c4cd50  adrp x9,0x7106dd5000
7101c4cd54  ldr w8,[sp, #0x18]
7101c4cd58  ldr w9,[x9, #0x3ac]
7101c4cd5c  cmp w8,w9
7101c4cd60  b.ne 0x7101c4cdac
7101c4cd64  ldr x8,[sp, #0x10]
7101c4cd68  ldr wzr,[x8, #0x38]!
7101c4cd6c  ldaxr w9,[x8]
7101c4cd70  sub w9,w9,#0x1
7101c4cd74  stlxr w10,w9,[x8]
7101c4cd78  cbnz w10,0x7101c4cd6c
7101c4cd7c  b 0x7101c4cdac
7101c4cd80  mov x8,#0x650000000000
7101c4cd84  movk x8,#0x87, LSL #48
7101c4cd88  strb wzr,[sp, #0x20]
7101c4cd8c  stp xzr,x8,[sp, #0x10]
7101c4cd90  mov x8,#-0x1
7101c4cd94  stp x8,xzr,[sp, #0x28]
7101c4cd98  adrp x8,0x7104f73000
7101c4cd9c  add x8,x8,#0xd50
7101c4cda0  str wzr,[sp]
7101c4cda4  str xzr,[sp, #0x38]
7101c4cda8  str x8,[sp, #0x8]
7101c4cdac  str xzr,[sp, #0x10]
7101c4cdb0  strb wzr,[sp, #0x20]
7101c4cdb4  ldrsw x8,[x19, #0xb4]
7101c4cdb8  cmp w8,#0x13
7101c4cdbc  b.cs 0x7101c4cde0
7101c4cdc0  add x8,x19,x8, LSL #0x2
7101c4cdc4  ldr w9,[x8, #0x68]
7101c4cdc8  add w9,w9,#0x1
7101c4cdcc  str w9,[x8, #0x68]
7101c4cdd0  ldp x29,x30,[sp, #0x50]
7101c4cdd4  ldp x20,x19,[sp, #0x40]
7101c4cdd8  add sp,sp,#0x60
7101c4cddc  ret
7101c4cde0  bl 0x71039c2650
