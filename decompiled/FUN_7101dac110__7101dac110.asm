// addr:      7101dac110
// offset:    0x1dac110
// name:      FUN_7101dac110
// mangled:   
// size:      560

7101dac110  sub sp,sp,#0x50
7101dac114  stp x22,x21,[sp, #0x20]
7101dac118  stp x20,x19,[sp, #0x30]
7101dac11c  stp x29,x30,[sp, #0x40]
7101dac120  add x29,sp,#0x40
7101dac124  add x20,x0,#0x50
7101dac128  mov x19,x0
7101dac12c  adrp x1,0x710438d000
7101dac130  add x1,x1,#0x7
7101dac134  add x8,sp,#0x10
7101dac138  mov x0,x20
7101dac13c  bl 0x7103776640
7101dac140  ldr x21,[sp, #0x18]
7101dac144  fmov s0,0x3f800000
7101dac148  adrp x1,0x71043cf000
7101dac14c  add x1,x1,#0x882
7101dac150  mov x0,x21
7101dac154  bl 0x7103778300
7101dac158  adrp x22,0x710523d000
7101dac15c  add x22,x22,#0x988
7101dac160  stp x22,xzr,[sp, #0x10]
7101dac164  cbz x21,0x7101dac188
7101dac168  ldr x0,[x21, #0x18]
7101dac16c  adrp x8,0x710523d000
7101dac170  add x8,x8,#0x9a8
7101dac174  stp x8,xzr,[x21, #0x10]
7101dac178  cbz x0,0x7101dac180
7101dac17c  bl 0x710392eb40
7101dac180  mov x0,x21
7101dac184  bl 0x710392eb40
7101dac188  adrp x1,0x7104433000
7101dac18c  add x1,x1,#0x603
7101dac190  add x8,sp,#0x10
7101dac194  mov x0,x20
7101dac198  bl 0x7103776640
7101dac19c  adrp x1,0x7104292000
7101dac1a0  add x1,x1,#0x1bb
7101dac1a4  mov x8,sp
7101dac1a8  add x0,sp,#0x10
7101dac1ac  bl 0x7103776640
7101dac1b0  ldr x21,[sp, #0x8]
7101dac1b4  fmov s0,0x3f800000
7101dac1b8  adrp x1,0x71043cf000
7101dac1bc  add x1,x1,#0x882
7101dac1c0  mov x0,x21
7101dac1c4  bl 0x7103778300
7101dac1c8  stp x22,xzr,[sp]
7101dac1cc  cbz x21,0x7101dac1f0
7101dac1d0  ldr x0,[x21, #0x18]
7101dac1d4  adrp x8,0x710523d000
7101dac1d8  add x8,x8,#0x9a8
7101dac1dc  stp x8,xzr,[x21, #0x10]
7101dac1e0  cbz x0,0x7101dac1e8
7101dac1e4  bl 0x710392eb40
7101dac1e8  mov x0,x21
7101dac1ec  bl 0x710392eb40
7101dac1f0  adrp x1,0x710432a000
7101dac1f4  add x1,x1,#0x5d7
7101dac1f8  mov x8,sp
7101dac1fc  add x0,sp,#0x10
7101dac200  bl 0x7103776640
7101dac204  ldr x21,[sp, #0x8]
7101dac208  fmov s0,0x3f800000
7101dac20c  adrp x1,0x71043cf000
7101dac210  add x1,x1,#0x882
7101dac214  mov x0,x21
7101dac218  bl 0x7103778300
7101dac21c  stp x22,xzr,[sp]
7101dac220  cbz x21,0x7101dac244
7101dac224  ldr x0,[x21, #0x18]
7101dac228  adrp x8,0x710523d000
7101dac22c  add x8,x8,#0x9a8
7101dac230  stp x8,xzr,[x21, #0x10]
7101dac234  cbz x0,0x7101dac23c
7101dac238  bl 0x710392eb40
7101dac23c  mov x0,x21
7101dac240  bl 0x710392eb40
7101dac244  adrp x1,0x7104270000
7101dac248  add x1,x1,#0x503
7101dac24c  mov x8,sp
7101dac250  add x0,sp,#0x10
7101dac254  bl 0x7103776640
7101dac258  ldr x21,[sp, #0x8]
7101dac25c  fmov s0,0x3f800000
7101dac260  adrp x1,0x71043cf000
7101dac264  add x1,x1,#0x882
7101dac268  mov x0,x21
7101dac26c  bl 0x7103778300
7101dac270  stp x22,xzr,[sp]
7101dac274  cbz x21,0x7101dac298
7101dac278  ldr x0,[x21, #0x18]
7101dac27c  adrp x8,0x710523d000
7101dac280  add x8,x8,#0x9a8
7101dac284  stp x8,xzr,[x21, #0x10]
7101dac288  cbz x0,0x7101dac290
7101dac28c  bl 0x710392eb40
7101dac290  mov x0,x21
7101dac294  bl 0x710392eb40
7101dac298  ldrb w8,[x19, #0xdd]
7101dac29c  cbz w8,0x7101dac300
7101dac2a0  ldrb w8,[x19, #0xde]
7101dac2a4  cbz w8,0x7101dac300
7101dac2a8  adrp x1,0x710433a000
7101dac2ac  add x1,x1,#0x587
7101dac2b0  mov x8,sp
7101dac2b4  mov x0,x20
7101dac2b8  bl 0x7103776640
7101dac2bc  ldr x20,[sp, #0x8]
7101dac2c0  fmov s0,0x3f800000
7101dac2c4  adrp x1,0x710424f000
7101dac2c8  add x1,x1,#0x975
7101dac2cc  mov x0,x20
7101dac2d0  bl 0x7103778300
7101dac2d4  strb wzr,[x19, #0xde]
7101dac2d8  stp x22,xzr,[sp]
7101dac2dc  cbz x20,0x7101dac300
7101dac2e0  ldr x0,[x20, #0x18]
7101dac2e4  adrp x8,0x710523d000
7101dac2e8  add x8,x8,#0x9a8
7101dac2ec  stp x8,xzr,[x20, #0x10]
7101dac2f0  cbz x0,0x7101dac2f8
7101dac2f4  bl 0x710392eb40
7101dac2f8  mov x0,x20
7101dac2fc  bl 0x710392eb40
7101dac300  ldr x19,[sp, #0x18]
7101dac304  stp x22,xzr,[sp, #0x10]
7101dac308  cbz x19,0x7101dac32c
7101dac30c  ldr x0,[x19, #0x18]
7101dac310  adrp x8,0x710523d000
7101dac314  add x8,x8,#0x9a8
7101dac318  stp x8,xzr,[x19, #0x10]
7101dac31c  cbz x0,0x7101dac324
7101dac320  bl 0x710392eb40
7101dac324  mov x0,x19
7101dac328  bl 0x710392eb40
7101dac32c  ldp x29,x30,[sp, #0x40]
7101dac330  ldp x20,x19,[sp, #0x30]
7101dac334  ldp x22,x21,[sp, #0x20]
7101dac338  add sp,sp,#0x50
7101dac33c  ret
