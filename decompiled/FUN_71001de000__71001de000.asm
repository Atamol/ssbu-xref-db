// addr:      71001de000
// offset:    0x1de000
// name:      FUN_71001de000
// mangled:   
// size:      704

71001de000  stp x22,x21,[sp, #-0x30]!
71001de004  stp x20,x19,[sp, #0x10]
71001de008  stp x29,x30,[sp, #0x20]
71001de00c  add x29,sp,#0x20
71001de010  adrp x20,0x71052a6000
71001de014  ldr x20,[x20, #0xda0]
71001de018  adrp x1,0x71052a6000
71001de01c  ldr x1,[x1, #0xc20]
71001de020  adrp x9,0x71043ac000
71001de024  add x9,x9,#0xc0c
71001de028  add x8,x20,#0x10
71001de02c  stp x8,xzr,[x1]
71001de030  mov w8,#0x64
71001de034  stp xzr,x9,[x1, #0x10]
71001de038  strb wzr,[x1, #0x24]
71001de03c  str w8,[x1, #0x20]
71001de040  adrp x21,0x71052af000
71001de044  add x21,x21,#0x230
71001de048  ldarb w8,[x21]
71001de04c  tbz w8,#0x0,0x71001de100
71001de050  adrp x22,0x71052af000
71001de054  add x22,x22,#0x240
71001de058  ldr x8,[x22]
71001de05c  ldr x9,[x22, #0x10]
71001de060  cmp x8,x9
71001de064  b.eq 0x71001de080
71001de068  adrp x8,0x71052af000
71001de06c  ldr x9,[x8, #0x248]
71001de070  str x1,[x9, #0x8]
71001de074  ldr x8,[x8, #0x248]
71001de078  str x8,[x1, #0x10]
71001de07c  b 0x71001de088
71001de080  adrp x8,0x71052af000
71001de084  str x1,[x8, #0x240]
71001de088  ldr x8,[x21, #0x28]
71001de08c  add x8,x8,#0x1
71001de090  str x1,[x21, #0x18]
71001de094  adrp x0,0x71052a6000
71001de098  adrp x2,0x7104f17000
71001de09c  add x2,x2,#0x0
71001de0a0  str x8,[x21, #0x28]
71001de0a4  ldr x0,[x0, #0xdb0]
71001de0a8  bl 0x71000001c0
71001de0ac  adrp x1,0x71052a6000
71001de0b0  ldr x1,[x1, #0xdb8]
71001de0b4  add x8,x20,#0x10
71001de0b8  adrp x9,0x7104411000
71001de0bc  add x9,x9,#0xe1e
71001de0c0  str wzr,[x1, #0x20]
71001de0c4  stp x8,xzr,[x1]
71001de0c8  strb wzr,[x1, #0x24]
71001de0cc  stp xzr,x9,[x1, #0x10]
71001de0d0  ldarb w8,[x21]
71001de0d4  tbz w8,#0x0,0x71001de15c
71001de0d8  ldr x8,[x22]
71001de0dc  ldr x9,[x22, #0x10]
71001de0e0  cmp x8,x9
71001de0e4  b.eq 0x71001de1c4
71001de0e8  adrp x8,0x71052af000
71001de0ec  ldr x9,[x8, #0x248]
71001de0f0  str x1,[x9, #0x8]
71001de0f4  ldr x8,[x8, #0x248]
71001de0f8  str x8,[x1, #0x10]
71001de0fc  b 0x71001de1cc
71001de100  adrp x19,0x71052af000
71001de104  add x19,x19,#0x230
71001de108  mov x0,x19
71001de10c  mov x22,x1
71001de110  bl 0x71039c06b0
71001de114  mov x1,x22
71001de118  cbz w0,0x71001de050
71001de11c  adrp x8,0x71052a6000
71001de120  ldr x8,[x8, #0xd98]
71001de124  mov x1,x19
71001de128  adrp x0,0x71052a6000
71001de12c  add x8,x8,#0x10
71001de130  adrp x2,0x7104f17000
71001de134  add x2,x2,#0x0
71001de138  str x8,[x1, #0x8]!
71001de13c  stp xzr,xzr,[x19, #0x10]
71001de140  stp xzr,xzr,[x19, #0x20]
71001de144  ldr x0,[x0, #0xda8]
71001de148  bl 0x71000001c0
71001de14c  mov x0,x19
71001de150  bl 0x71039c06c0
71001de154  mov x1,x22
71001de158  b 0x71001de050
71001de15c  adrp x19,0x71052af000
71001de160  add x19,x19,#0x230
71001de164  mov x0,x19
71001de168  mov x20,x1
71001de16c  bl 0x71039c06b0
71001de170  mov x1,x20
71001de174  cbz w0,0x71001de0d8
71001de178  adrp x8,0x71052a6000
71001de17c  ldr x8,[x8, #0xd98]
71001de180  mov x1,x19
71001de184  adrp x0,0x71052a6000
71001de188  add x8,x8,#0x10
71001de18c  adrp x2,0x7104f17000
71001de190  add x2,x2,#0x0
71001de194  str x8,[x1, #0x8]!
71001de198  stp xzr,xzr,[x19, #0x10]
71001de19c  stp xzr,xzr,[x19, #0x20]
71001de1a0  ldr x0,[x0, #0xda8]
71001de1a4  bl 0x71000001c0
71001de1a8  mov x0,x19
71001de1ac  bl 0x71039c06c0
71001de1b0  mov x1,x20
71001de1b4  ldr x8,[x22]
71001de1b8  ldr x9,[x22, #0x10]
71001de1bc  cmp x8,x9
71001de1c0  b.ne 0x71001de0e8
71001de1c4  adrp x8,0x71052af000
71001de1c8  str x1,[x8, #0x240]
71001de1cc  adrp x8,0x71052af000
71001de1d0  add x8,x8,#0x248
71001de1d4  ldr x9,[x8, #0x10]
71001de1d8  add x9,x9,#0x1
71001de1dc  str x1,[x8]
71001de1e0  str x9,[x8, #0x10]
71001de1e4  adrp x0,0x71052a6000
71001de1e8  ldr x0,[x0, #0xdb0]
71001de1ec  adrp x19,0x7104f17000
71001de1f0  add x19,x19,#0x0
71001de1f4  mov x2,x19
71001de1f8  bl 0x71000001c0
71001de1fc  adrp x1,0x71052a4000
71001de200  ldr x1,[x1, #0xdb0]
71001de204  adrp x8,0x71052a6000
71001de208  stp xzr,xzr,[x1, #0x10]
71001de20c  adrp x9,0x71052a6000
71001de210  ldr x8,[x8, #0xcb8]
71001de214  ldr x9,[x9, #0xcc0]
71001de218  str xzr,[x1, #0x90]
71001de21c  stp xzr,xzr,[x1, #0x20]
71001de220  str xzr,[x1, #0xa0]
71001de224  stp xzr,xzr,[x1, #0x30]
71001de228  add x8,x8,#0x10
71001de22c  add x9,x9,#0x10
71001de230  stp x8,x9,[x1]
71001de234  mov w8,#0x1
71001de238  stp xzr,xzr,[x1, #0x40]
71001de23c  stp xzr,xzr,[x1, #0x50]
71001de240  adrp x0,0x71052a6000
71001de244  mov x2,x19
71001de248  strb w8,[x1, #0x98]
71001de24c  stp xzr,xzr,[x1, #0x60]
71001de250  stp xzr,xzr,[x1, #0x70]
71001de254  stp xzr,xzr,[x1, #0x80]
71001de258  ldr x0,[x0, #0xdc0]
71001de25c  bl 0x71000001c0
71001de260  adrp x8,0x71052a6000
71001de264  ldr x8,[x8, #0xdc8]
71001de268  adrp x1,0x71052a6000
71001de26c  ldr x1,[x1, #0xa30]
71001de270  adrp x0,0x71052a6000
71001de274  add x8,x8,#0x10
71001de278  str x8,[x1]
71001de27c  ldr x0,[x0, #0xdd0]
71001de280  mov x2,x19
71001de284  bl 0x71000001c0
71001de288  adrp x20,0x71052a6000
71001de28c  ldr x20,[x20, #0xbf0]
71001de290  mov w1,#0x2
71001de294  mov w2,#0x1
71001de298  mov x0,x20
71001de29c  bl 0x71001b0350
71001de2a0  adrp x0,0x71052a6000
71001de2a4  ldr x0,[x0, #0xdd8]
71001de2a8  mov x1,x20
71001de2ac  mov x2,x19
71001de2b0  ldp x29,x30,[sp, #0x20]
71001de2b4  ldp x20,x19,[sp, #0x10]
71001de2b8  ldp x22,x21,[sp], #0x30
71001de2bc  b 0x71000001c0
