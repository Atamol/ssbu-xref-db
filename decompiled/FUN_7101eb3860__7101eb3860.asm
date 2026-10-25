// addr:      7101eb3860
// offset:    0x1eb3860
// name:      FUN_7101eb3860
// mangled:   
// size:      228

7101eb3860  stp x20,x19,[sp, #-0x20]!
7101eb3864  stp x29,x30,[sp, #0x10]
7101eb3868  add x29,sp,#0x10
7101eb386c  ldr x9,[x0, #0x328]
7101eb3870  ldr x8,[x0, #0x8]
7101eb3874  mov x19,x0
7101eb3878  ldr w9,[x9, #0x30]
7101eb387c  ldr x8,[x8]
7101eb3880  sub w9,w9,#0x1
7101eb3884  cmp w9,#0x6
7101eb3888  b.hi 0x7101eb389c
7101eb388c  adrp x10,0x71050b2000
7101eb3890  add x10,x10,#0xa30
7101eb3894  ldr x1,[x10, w9, SXTW #0x3]
7101eb3898  b 0x7101eb38a4
7101eb389c  adrp x1,0x710435b000
7101eb38a0  add x1,x1,#0xf08
7101eb38a4  ldr w9,[x19, #0x270]
7101eb38a8  ldr x0,[x8, #0x10]
7101eb38ac  cmp w9,#0x1
7101eb38b0  b.ne 0x7101eb3904
7101eb38b4  ldr x0,[x0, #0x8]
7101eb38b8  cbz x0,0x7101eb38d4
7101eb38bc  bl 0x71037964b0
7101eb38c0  cbz x0,0x7101eb38d4
7101eb38c4  ldr x8,[x0]
7101eb38c8  ldr x8,[x8, #0x138]
7101eb38cc  blr x8
7101eb38d0  tbz w0,#0x0,0x7101eb3938
7101eb38d4  ldr x8,[x19, #0x358]
7101eb38d8  ldrb w9,[x8, #0x1ec]
7101eb38dc  cbz w9,0x7101eb38fc
7101eb38e0  ldr x8,[x8, #0x1d0]
7101eb38e4  ldr x0,[x8, #0x8]
7101eb38e8  cbz x0,0x7101eb38fc
7101eb38ec  ldr x8,[x0]
7101eb38f0  ldr x8,[x8, #0x138]
7101eb38f4  blr x8
7101eb38f8  tbz w0,#0x0,0x7101eb3938
7101eb38fc  stp xzr,xzr,[x19, #0x10]
7101eb3900  b 0x7101eb3938
7101eb3904  fmov s0,0x3f800000
7101eb3908  bl 0x7103778300
7101eb390c  ldr x0,[x19, #0x318]
7101eb3910  mov w1,#0x1
7101eb3914  mov w20,#0x1
7101eb3918  bl 0x7101ec5050
7101eb391c  ldr x8,[x19, #0x358]
7101eb3920  ldrb w9,[x8, #0x1ec]
7101eb3924  cbz w9,0x7101eb3934
7101eb3928  fmov s0,0x3f800000
7101eb392c  add x0,x8,#0x1c8
7101eb3930  bl 0x710377aee0
7101eb3934  str w20,[x19, #0x270]
7101eb3938  ldp x29,x30,[sp, #0x10]
7101eb393c  ldp x20,x19,[sp], #0x20
7101eb3940  ret
