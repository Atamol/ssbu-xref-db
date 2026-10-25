// addr:      7101bddb60
// offset:    0x1bddb60
// name:      FUN_7101bddb60
// mangled:   
// size:      356

7101bddb60  sub sp,sp,#0x40
7101bddb64  str x19,[sp, #0x20]
7101bddb68  stp x29,x30,[sp, #0x30]
7101bddb6c  add x29,sp,#0x30
7101bddb70  ldr x9,[x0, #0xe0]
7101bddb74  ldr x8,[x1]
7101bddb78  mov w19,w2
7101bddb7c  ldp x10,x11,[x9, #0x180]
7101bddb80  ldr x8,[x8]
7101bddb84  sub x11,x11,x10
7101bddb88  lsr x12,x11,#0x3
7101bddb8c  cmp w12,#0x1
7101bddb90  b.lt 0x7101bddba4
7101bddb94  cbz x11,0x7101bddcbc
7101bddb98  ldr x9,[x10]
7101bddb9c  ldr x1,[x9, #0x88]
7101bddba0  b 0x7101bddba8
7101bddba4  mov x1,xzr
7101bddba8  add x0,x8,#0x8
7101bddbac  add x8,sp,#0x10
7101bddbb0  bl 0x7103776640
7101bddbb4  ands w8,w19,#0xff
7101bddbb8  b.eq 0x7101bddc20
7101bddbbc  cmp w8,#0x1
7101bddbc0  b.eq 0x7101bddbe8
7101bddbc4  cmp w8,#0x2
7101bddbc8  b.ne 0x7101bddc78
7101bddbcc  ldr x19,[sp, #0x18]
7101bddbd0  fmov s0,0x3f800000
7101bddbd4  adrp x1,0x7104318000
7101bddbd8  add x1,x1,#0xd94
7101bddbdc  mov x0,x19
7101bddbe0  bl 0x7103778300
7101bddbe4  b 0x7101bddc7c
7101bddbe8  ldr x19,[sp, #0x18]
7101bddbec  fmov s0,0x3f800000
7101bddbf0  adrp x1,0x7104412000
7101bddbf4  add x1,x1,#0x8e0
7101bddbf8  mov x0,x19
7101bddbfc  bl 0x7103778300
7101bddc00  adrp x1,0x7104401000
7101bddc04  add x1,x1,#0x383
7101bddc08  mov x8,sp
7101bddc0c  add x0,sp,#0x10
7101bddc10  bl 0x7103776910
7101bddc14  adrp x1,0x7104329000
7101bddc18  add x1,x1,#0xe80
7101bddc1c  b 0x7101bddc54
7101bddc20  ldr x19,[sp, #0x18]
7101bddc24  fmov s0,0x3f800000
7101bddc28  adrp x1,0x71043cf000
7101bddc2c  add x1,x1,#0x32b
7101bddc30  mov x0,x19
7101bddc34  bl 0x7103778300
7101bddc38  adrp x1,0x7104401000
7101bddc3c  add x1,x1,#0x383
7101bddc40  mov x8,sp
7101bddc44  add x0,sp,#0x10
7101bddc48  bl 0x7103776910
7101bddc4c  adrp x1,0x71042b4000
7101bddc50  add x1,x1,#0x29b
7101bddc54  mov x0,sp
7101bddc58  bl 0x710377a120
7101bddc5c  ldr x0,[sp, #0x8]
7101bddc60  adrp x8,0x710523d000
7101bddc64  add x8,x8,#0x9a8
7101bddc68  stp x8,xzr,[sp]
7101bddc6c  cbz x0,0x7101bddc7c
7101bddc70  bl 0x710392eb40
7101bddc74  b 0x7101bddc7c
7101bddc78  ldr x19,[sp, #0x18]
7101bddc7c  adrp x8,0x710523d000
7101bddc80  add x8,x8,#0x988
7101bddc84  stp x8,xzr,[sp, #0x10]
7101bddc88  cbz x19,0x7101bddcac
7101bddc8c  ldr x0,[x19, #0x18]
7101bddc90  adrp x8,0x710523d000
7101bddc94  add x8,x8,#0x9a8
7101bddc98  stp x8,xzr,[x19, #0x10]
7101bddc9c  cbz x0,0x7101bddca4
7101bddca0  bl 0x710392eb40
7101bddca4  mov x0,x19
7101bddca8  bl 0x710392eb40
7101bddcac  ldp x29,x30,[sp, #0x30]
7101bddcb0  ldr x19,[sp, #0x20]
7101bddcb4  add sp,sp,#0x40
7101bddcb8  ret
7101bddcbc  add x0,x9,#0x180
7101bddcc0  bl 0x71039c1330
