// addr:      7101eb5850
// offset:    0x1eb5850
// name:      FUN_7101eb5850
// mangled:   
// size:      124

7101eb5850  str x19,[sp, #-0x20]!
7101eb5854  stp x29,x30,[sp, #0x10]
7101eb5858  add x29,sp,#0x10
7101eb585c  ldr x8,[x0, #0x8]
7101eb5860  ldr x8,[x8]
7101eb5864  ldr w9,[x0, #0x270]
7101eb5868  mov x19,x0
7101eb586c  ldr x0,[x8, #0x10]
7101eb5870  cmp w9,#0x1
7101eb5874  b.ne 0x7101eb58a8
7101eb5878  ldr x0,[x0, #0x8]
7101eb587c  cbz x0,0x7101eb58a0
7101eb5880  adrp x1,0x71043cf000
7101eb5884  add x1,x1,#0xc04
7101eb5888  bl 0x71037964b0
7101eb588c  cbz x0,0x7101eb58a0
7101eb5890  ldr x8,[x0]
7101eb5894  ldr x8,[x8, #0x138]
7101eb5898  blr x8
7101eb589c  tbz w0,#0x0,0x7101eb58c0
7101eb58a0  stp xzr,xzr,[x19, #0x10]
7101eb58a4  b 0x7101eb58c0
7101eb58a8  fmov s0,0x3f800000
7101eb58ac  adrp x1,0x71043cf000
7101eb58b0  add x1,x1,#0xc04
7101eb58b4  bl 0x7103778300
7101eb58b8  mov w8,#0x1
7101eb58bc  str w8,[x19, #0x270]
7101eb58c0  ldp x29,x30,[sp, #0x10]
7101eb58c4  ldr x19,[sp], #0x20
7101eb58c8  ret
