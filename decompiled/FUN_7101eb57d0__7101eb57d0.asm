// addr:      7101eb57d0
// offset:    0x1eb57d0
// name:      FUN_7101eb57d0
// mangled:   
// size:      124

7101eb57d0  str x19,[sp, #-0x20]!
7101eb57d4  stp x29,x30,[sp, #0x10]
7101eb57d8  add x29,sp,#0x10
7101eb57dc  ldr x8,[x0, #0x8]
7101eb57e0  ldr x8,[x8]
7101eb57e4  ldr w9,[x0, #0x270]
7101eb57e8  mov x19,x0
7101eb57ec  ldr x0,[x8, #0x10]
7101eb57f0  cmp w9,#0x1
7101eb57f4  b.ne 0x7101eb5828
7101eb57f8  ldr x0,[x0, #0x8]
7101eb57fc  cbz x0,0x7101eb5820
7101eb5800  adrp x1,0x71043cf000
7101eb5804  add x1,x1,#0xc04
7101eb5808  bl 0x71037964b0
7101eb580c  cbz x0,0x7101eb5820
7101eb5810  ldr x8,[x0]
7101eb5814  ldr x8,[x8, #0x138]
7101eb5818  blr x8
7101eb581c  tbz w0,#0x0,0x7101eb5840
7101eb5820  stp xzr,xzr,[x19, #0x10]
7101eb5824  b 0x7101eb5840
7101eb5828  fmov s0,0xbf800000
7101eb582c  adrp x1,0x71043cf000
7101eb5830  add x1,x1,#0xc04
7101eb5834  bl 0x7103778300
7101eb5838  mov w8,#0x1
7101eb583c  str w8,[x19, #0x270]
7101eb5840  ldp x29,x30,[sp, #0x10]
7101eb5844  ldr x19,[sp], #0x20
7101eb5848  ret
