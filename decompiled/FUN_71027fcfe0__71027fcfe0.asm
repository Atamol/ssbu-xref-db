// addr:      71027fcfe0
// offset:    0x27fcfe0
// name:      FUN_71027fcfe0
// mangled:   
// size:      780

71027fcfe0  str x21,[sp, #-0x30]!
71027fcfe4  stp x20,x19,[sp, #0x10]
71027fcfe8  stp x29,x30,[sp, #0x20]
71027fcfec  add x29,sp,#0x20
71027fcff0  mov w8,#0xffffffff
71027fcff4  str xzr,[x0]
71027fcff8  str xzr,[x0, #0x10]
71027fcffc  str w8,[x0, #0x8]
71027fd000  mov x19,x0
71027fd004  mov x20,x1
71027fd008  str w8,[x0, #0x18]
71027fd00c  str xzr,[x0, #0x20]
71027fd010  str w8,[x0, #0x28]
71027fd014  str xzr,[x0, #0x30]
71027fd018  ldr x0,[x1, #0x310]
71027fd01c  ldp x1,x8,[x0, #0xd0]
71027fd020  cmp x1,x8
71027fd024  b.eq 0x71027fd05c
71027fd028  mov x9,#0x93
71027fd02c  movk x9,#0x4362, LSL #16
71027fd030  movk x9,#0x9, LSL #32
71027fd034  ldr w10,[x1, #0x8]
71027fd038  cmp w10,#0x1
71027fd03c  b.hi 0x71027fd050
71027fd040  ldr x10,[x1]
71027fd044  ldr x10,[x10, #0x68]
71027fd048  cmp x10,x9
71027fd04c  b.eq 0x71027fd0f4
71027fd050  add x1,x1,#0x10
71027fd054  cmp x8,x1
71027fd058  b.ne 0x71027fd034
71027fd05c  ldr x0,[x20, #0x310]
71027fd060  ldp x1,x8,[x0, #0xd0]
71027fd064  cmp x1,x8
71027fd068  b.eq 0x71027fd0a0
71027fd06c  mov x9,#0x2923
71027fd070  movk x9,#0x7e02, LSL #16
71027fd074  movk x9,#0x9, LSL #32
71027fd078  ldr w10,[x1, #0x8]
71027fd07c  cmp w10,#0x1
71027fd080  b.hi 0x71027fd094
71027fd084  ldr x10,[x1]
71027fd088  ldr x10,[x10, #0x68]
71027fd08c  cmp x10,x9
71027fd090  b.eq 0x71027fd19c
71027fd094  add x1,x1,#0x10
71027fd098  cmp x8,x1
71027fd09c  b.ne 0x71027fd078
71027fd0a0  ldr x0,[x20, #0x310]
71027fd0a4  ldp x1,x8,[x0, #0xd0]
71027fd0a8  cmp x1,x8
71027fd0ac  b.eq 0x71027fd0e4
71027fd0b0  mov x9,#0x2970
71027fd0b4  movk x9,#0x9cb2, LSL #16
71027fd0b8  movk x9,#0x9, LSL #32
71027fd0bc  ldr w10,[x1, #0x8]
71027fd0c0  cmp w10,#0x1
71027fd0c4  b.hi 0x71027fd0d8
71027fd0c8  ldr x10,[x1]
71027fd0cc  ldr x10,[x10, #0x68]
71027fd0d0  cmp x10,x9
71027fd0d4  b.eq 0x71027fd244
71027fd0d8  add x1,x1,#0x10
71027fd0dc  cmp x8,x1
71027fd0e0  b.ne 0x71027fd0bc
71027fd0e4  ldp x29,x30,[sp, #0x20]
71027fd0e8  ldp x20,x19,[sp, #0x10]
71027fd0ec  ldr x21,[sp], #0x30
71027fd0f0  ret
71027fd0f4  bl 0x710262fb80
71027fd0f8  cbz x0,0x71027fd05c
71027fd0fc  ldrb w8,[x0, #0xe0]
71027fd100  mov x21,x0
71027fd104  cbz w8,0x71027fd118
71027fd108  ldr x8,[x21, #0xc8]
71027fd10c  cbz x8,0x71027fd118
71027fd110  mov w9,#0x101
71027fd114  strh w9,[x8, #0x30]
71027fd118  ldr x8,[x21, #0xd8]
71027fd11c  cbz x8,0x71027fd128
71027fd120  mov w9,#0x1
71027fd124  strb w9,[x8, #0x21]
71027fd128  ldrb w8,[x21, #0xe0]
71027fd12c  cbz w8,0x71027fd138
71027fd130  ldr x8,[x21, #0xb0]
71027fd134  strb wzr,[x8, #0x10]
71027fd138  ldrb w8,[x21, #0xe0]
71027fd13c  cbz w8,0x71027fd14c
71027fd140  ldr x8,[x21, #0xc8]
71027fd144  cbz x8,0x71027fd14c
71027fd148  strh wzr,[x8, #0x32]
71027fd14c  ldr x8,[x21, #0xd8]
71027fd150  cbz x8,0x71027fd158
71027fd154  strb wzr,[x8, #0x22]
71027fd158  add x0,x21,#0x108
71027fd15c  strb wzr,[x21, #0x110]
71027fd160  bl 0x71025e9d50
71027fd164  ldr x8,[x21, #0xd8]
71027fd168  cbz x8,0x71027fd05c
71027fd16c  ldr x8,[x8, #0x8]
71027fd170  ldr x0,[x8, #0x8]
71027fd174  ldr x8,[x0]
71027fd178  ldr x8,[x8, #0x18]
71027fd17c  adrp x1,0x71043bc000
71027fd180  add x1,x1,#0x588
71027fd184  blr x8
71027fd188  cmn w0,#0x1
71027fd18c  b.eq 0x71027fd05c
71027fd190  str x21,[x19]
71027fd194  str w0,[x19, #0x8]
71027fd198  b 0x71027fd05c
71027fd19c  bl 0x710262fb80
71027fd1a0  cbz x0,0x71027fd0a0
71027fd1a4  ldrb w8,[x0, #0xe0]
71027fd1a8  mov x21,x0
71027fd1ac  cbz w8,0x71027fd1c0
71027fd1b0  ldr x8,[x21, #0xc8]
71027fd1b4  cbz x8,0x71027fd1c0
71027fd1b8  mov w9,#0x101
71027fd1bc  strh w9,[x8, #0x30]
71027fd1c0  ldr x8,[x21, #0xd8]
71027fd1c4  cbz x8,0x71027fd1d0
71027fd1c8  mov w9,#0x1
71027fd1cc  strb w9,[x8, #0x21]
71027fd1d0  ldrb w8,[x21, #0xe0]
71027fd1d4  cbz w8,0x71027fd1e0
71027fd1d8  ldr x8,[x21, #0xb0]
71027fd1dc  strb wzr,[x8, #0x10]
71027fd1e0  ldrb w8,[x21, #0xe0]
71027fd1e4  cbz w8,0x71027fd1f4
71027fd1e8  ldr x8,[x21, #0xc8]
71027fd1ec  cbz x8,0x71027fd1f4
71027fd1f0  strh wzr,[x8, #0x32]
71027fd1f4  ldr x8,[x21, #0xd8]
71027fd1f8  cbz x8,0x71027fd200
71027fd1fc  strb wzr,[x8, #0x22]
71027fd200  add x0,x21,#0x108
71027fd204  strb wzr,[x21, #0x110]
71027fd208  bl 0x71025e9d50
71027fd20c  ldr x8,[x21, #0xd8]
71027fd210  cbz x8,0x71027fd0a0
71027fd214  ldr x8,[x8, #0x8]
71027fd218  ldr x0,[x8, #0x8]
71027fd21c  ldr x8,[x0]
71027fd220  ldr x8,[x8, #0x18]
71027fd224  adrp x1,0x710439b000
71027fd228  add x1,x1,#0x23c
71027fd22c  blr x8
71027fd230  cmn w0,#0x1
71027fd234  b.eq 0x71027fd0a0
71027fd238  str x21,[x19, #0x10]
71027fd23c  str w0,[x19, #0x18]
71027fd240  b 0x71027fd0a0
71027fd244  bl 0x710262fb80
71027fd248  cbz x0,0x71027fd0e4
71027fd24c  ldrb w8,[x0, #0xe0]
71027fd250  mov x20,x0
71027fd254  cbz w8,0x71027fd268
71027fd258  ldr x8,[x20, #0xc8]
71027fd25c  cbz x8,0x71027fd268
71027fd260  mov w9,#0x101
71027fd264  strh w9,[x8, #0x30]
71027fd268  ldr x8,[x20, #0xd8]
71027fd26c  cbz x8,0x71027fd278
71027fd270  mov w9,#0x1
71027fd274  strb w9,[x8, #0x21]
71027fd278  ldrb w8,[x20, #0xe0]
71027fd27c  cbz w8,0x71027fd288
71027fd280  ldr x8,[x20, #0xb0]
71027fd284  strb wzr,[x8, #0x10]
71027fd288  ldrb w8,[x20, #0xe0]
71027fd28c  cbz w8,0x71027fd29c
71027fd290  ldr x8,[x20, #0xc8]
71027fd294  cbz x8,0x71027fd29c
71027fd298  strh wzr,[x8, #0x32]
71027fd29c  ldr x8,[x20, #0xd8]
71027fd2a0  cbz x8,0x71027fd2a8
71027fd2a4  strb wzr,[x8, #0x22]
71027fd2a8  add x0,x20,#0x108
71027fd2ac  strb wzr,[x20, #0x110]
71027fd2b0  bl 0x71025e9d50
71027fd2b4  ldr x8,[x20, #0xd8]
71027fd2b8  cbz x8,0x71027fd0e4
71027fd2bc  ldr x8,[x8, #0x8]
71027fd2c0  ldr x0,[x8, #0x8]
71027fd2c4  ldr x8,[x0]
71027fd2c8  ldr x8,[x8, #0x18]
71027fd2cc  adrp x1,0x710439b000
71027fd2d0  add x1,x1,#0x23c
71027fd2d4  blr x8
71027fd2d8  cmn w0,#0x1
71027fd2dc  b.eq 0x71027fd0e4
71027fd2e0  str x20,[x19, #0x20]
71027fd2e4  str w0,[x19, #0x28]
71027fd2e8  b 0x71027fd0e4
