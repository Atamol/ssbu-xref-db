// addr:      71038fa1b0
// offset:    0x38fa1b0
// name:      FUN_71038fa1b0
// mangled:   
// size:      168

71038fa1b0  str x21,[sp, #-0x30]!
71038fa1b4  stp x20,x19,[sp, #0x10]
71038fa1b8  stp x29,x30,[sp, #0x20]
71038fa1bc  add x29,sp,#0x20
71038fa1c0  adrp x8,0x71052a3000
71038fa1c4  ldr x8,[x8, #0x210]
71038fa1c8  ldr x19,[x8]
71038fa1cc  ldr x8,[x0, #0x10]
71038fa1d0  sub x21,x8,#0x10
71038fa1d4  ldur w8,[x8, #-0x8]
71038fa1d8  and w8,w8,#0xf
71038fa1dc  cmp w8,#0x4
71038fa1e0  b.eq 0x71038fa21c
71038fa1e4  cmp w8,#0x3
71038fa1e8  b.ne 0x71038fa228
71038fa1ec  ldr x8,[x0, #0x18]
71038fa1f0  ldr x8,[x8, #0x18]
71038fa1f4  mov x20,x0
71038fa1f8  cmp x8,#0x1
71038fa1fc  b.lt 0x71038fa210
71038fa200  mov x0,x20
71038fa204  bl 0x71038fec40
71038fa208  ldr x8,[x20, #0x10]
71038fa20c  sub x21,x8,#0x10
71038fa210  mov x0,x20
71038fa214  mov x1,x21
71038fa218  bl 0x71039080b0
71038fa21c  ldr x8,[x21]
71038fa220  add x2,x8,#0x18
71038fa224  b 0x71038fa22c
71038fa228  mov x2,xzr
71038fa22c  adrp x1,0x710425d000
71038fa230  add x1,x1,#0xf33
71038fa234  mov x0,x19
71038fa238  bl 0x71039c8210
71038fa23c  mov x0,x19
71038fa240  bl 0x71039c8220
71038fa244  ldp x29,x30,[sp, #0x20]
71038fa248  mov w0,wzr
71038fa24c  ldp x20,x19,[sp, #0x10]
71038fa250  ldr x21,[sp], #0x30
71038fa254  ret
