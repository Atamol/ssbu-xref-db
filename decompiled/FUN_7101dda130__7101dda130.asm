// addr:      7101dda130
// offset:    0x1dda130
// name:      FUN_7101dda130
// mangled:   
// size:      400

7101dda130  sub sp,sp,#0x50
7101dda134  stp x24,x23,[sp, #0x10]
7101dda138  stp x22,x21,[sp, #0x20]
7101dda13c  stp x20,x19,[sp, #0x30]
7101dda140  stp x29,x30,[sp, #0x40]
7101dda144  add x29,sp,#0x40
7101dda148  ldr x23,[x0, #0x80]
7101dda14c  ldr x8,[x23, #0x50]
7101dda150  mov x19,x0
7101dda154  ldr x0,[x8]
7101dda158  mov w20,w1
7101dda15c  mov w2,#0x100c
7101dda160  mov w1,wzr
7101dda164  bl 0x7103775dc0
7101dda168  ldr x8,[x23, #0x58]
7101dda16c  ldr x0,[x8]
7101dda170  mov w2,#0x1005
7101dda174  mov w1,wzr
7101dda178  bl 0x7103775dc0
7101dda17c  mov w8,#0x1
7101dda180  add x21,x23,#0x60
7101dda184  adrp x1,0x71042b4000
7101dda188  add x1,x1,#0x824
7101dda18c  str w8,[x23, #0x80]
7101dda190  mov x8,sp
7101dda194  mov x0,x21
7101dda198  mov w2,wzr
7101dda19c  bl 0x7103776640
7101dda1a0  ldr x22,[sp, #0x8]
7101dda1a4  ldr x8,[x22, #0x8]
7101dda1a8  cbz x8,0x7101dda1c0
7101dda1ac  ldr x8,[x8, #0x18]
7101dda1b0  cbz x8,0x7101dda1c0
7101dda1b4  ldrb w9,[x8, #0x58]
7101dda1b8  and w9,w9,#0xfe
7101dda1bc  strb w9,[x8, #0x58]
7101dda1c0  adrp x24,0x710523d000
7101dda1c4  add x24,x24,#0x988
7101dda1c8  stp x24,xzr,[sp]
7101dda1cc  cbz x22,0x7101dda1f0
7101dda1d0  ldr x0,[x22, #0x18]
7101dda1d4  adrp x8,0x710523d000
7101dda1d8  add x8,x8,#0x9a8
7101dda1dc  stp x8,xzr,[x22, #0x10]
7101dda1e0  cbz x0,0x7101dda1e8
7101dda1e4  bl 0x710392eb40
7101dda1e8  mov x0,x22
7101dda1ec  bl 0x710392eb40
7101dda1f0  adrp x1,0x71042b4000
7101dda1f4  add x1,x1,#0x824
7101dda1f8  mov x8,sp
7101dda1fc  mov w2,#0x1
7101dda200  mov x0,x21
7101dda204  bl 0x7103776640
7101dda208  ldr x22,[sp, #0x8]
7101dda20c  ldr x8,[x22, #0x8]
7101dda210  cbz x8,0x7101dda228
7101dda214  ldr x8,[x8, #0x18]
7101dda218  cbz x8,0x7101dda228
7101dda21c  ldrb w9,[x8, #0x58]
7101dda220  and w9,w9,#0xfe
7101dda224  strb w9,[x8, #0x58]
7101dda228  stp x24,xzr,[sp]
7101dda22c  cbz x22,0x7101dda250
7101dda230  ldr x0,[x22, #0x18]
7101dda234  adrp x8,0x710523d000
7101dda238  add x8,x8,#0x9a8
7101dda23c  stp x8,xzr,[x22, #0x10]
7101dda240  cbz x0,0x7101dda248
7101dda244  bl 0x710392eb40
7101dda248  mov x0,x22
7101dda24c  bl 0x710392eb40
7101dda250  adrp x1,0x71043e0000
7101dda254  add x1,x1,#0x732
7101dda258  mov x8,sp
7101dda25c  mov x0,x21
7101dda260  bl 0x7103776910
7101dda264  ldr x21,[sp, #0x8]
7101dda268  ldr x0,[x21]
7101dda26c  mov w1,wzr
7101dda270  bl 0x710377aa20
7101dda274  adrp x8,0x710523d000
7101dda278  add x8,x8,#0x9a8
7101dda27c  stp x8,xzr,[sp]
7101dda280  cbz x21,0x7101dda28c
7101dda284  mov x0,x21
7101dda288  bl 0x710392eb40
7101dda28c  ldr x0,[x23, #0x78]
7101dda290  fmov s0,0x3f800000
7101dda294  adrp x1,0x710436c000
7101dda298  add x1,x1,#0x918
7101dda29c  bl 0x7103778300
7101dda2a0  str w20,[x23, #0xa0]
7101dda2a4  strb wzr,[x19, #0x70]
7101dda2a8  ldp x29,x30,[sp, #0x40]
7101dda2ac  ldp x20,x19,[sp, #0x30]
7101dda2b0  ldp x22,x21,[sp, #0x20]
7101dda2b4  ldp x24,x23,[sp, #0x10]
7101dda2b8  add sp,sp,#0x50
7101dda2bc  ret
