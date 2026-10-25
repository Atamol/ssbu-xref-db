// addr:      7101b1b9d0
// offset:    0x1b1b9d0
// name:      FUN_7101b1b9d0
// mangled:   
// size:      212

7101b1b9d0  sub sp,sp,#0x30
7101b1b9d4  stp x20,x19,[sp, #0x10]
7101b1b9d8  stp x29,x30,[sp, #0x20]
7101b1b9dc  add x29,sp,#0x20
7101b1b9e0  mov x19,x0
7101b1b9e4  ldr x8,[x0, #0x38]!
7101b1b9e8  ldr x10,[x0, #0x8]
7101b1b9ec  sub x10,x10,x8
7101b1b9f0  sxtw x9,w1
7101b1b9f4  str x3,[x0, #0x30]
7101b1b9f8  str w1,[x0, #0x40]
7101b1b9fc  asr x10,x10,#0x5
7101b1ba00  cmp x10,x9
7101b1ba04  b.ls 0x7101b1baa0
7101b1ba08  add x20,x8,x9, LSL #0x5
7101b1ba0c  add x0,x19,#0x50
7101b1ba10  cmp x0,x20
7101b1ba14  b.eq 0x7101b1ba20
7101b1ba18  ldp x1,x2,[x20]
7101b1ba1c  bl 0x7101b1bfe0
7101b1ba20  ldr w8,[x20, #0x18]
7101b1ba24  stp w8,w8,[x19, #0x7c]
7101b1ba28  ldr w8,[x20, #0x1c]
7101b1ba2c  str w8,[x19, #0x84]
7101b1ba30  ldp x8,x9,[x19, #0x50]
7101b1ba34  sub x8,x9,x8
7101b1ba38  lsr x20,x8,#0x4
7101b1ba3c  ldr x8,[x19, #0x8]
7101b1ba40  ldr x8,[x8]
7101b1ba44  ldr x8,[x8]
7101b1ba48  add x0,x8,#0x8
7101b1ba4c  adrp x1,0x71043be000
7101b1ba50  add x1,x1,#0x9c4
7101b1ba54  mov x8,sp
7101b1ba58  bl 0x7103776910
7101b1ba5c  sub w3,w20,#0x1
7101b1ba60  adrp x1,0x7104421000
7101b1ba64  add x1,x1,#0xf15
7101b1ba68  mov x0,sp
7101b1ba6c  mov w2,#0x1
7101b1ba70  bl 0x710377a280
7101b1ba74  ldr x0,[sp, #0x8]
7101b1ba78  adrp x8,0x710523d000
7101b1ba7c  add x8,x8,#0x9a8
7101b1ba80  stp x8,xzr,[sp]
7101b1ba84  cbz x0,0x7101b1ba8c
7101b1ba88  bl 0x710392eb40
7101b1ba8c  mov w0,w20
7101b1ba90  ldp x29,x30,[sp, #0x20]
7101b1ba94  ldp x20,x19,[sp, #0x10]
7101b1ba98  add sp,sp,#0x30
7101b1ba9c  ret
7101b1baa0  bl 0x71039c1330
