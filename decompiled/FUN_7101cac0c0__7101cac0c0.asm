// addr:      7101cac0c0
// offset:    0x1cac0c0
// name:      FUN_7101cac0c0
// mangled:   
// size:      712

7101cac0c0  str d8,[sp, #-0x60]!
7101cac0c4  stp x28,x25,[sp, #0x10]
7101cac0c8  stp x24,x23,[sp, #0x20]
7101cac0cc  stp x22,x21,[sp, #0x30]
7101cac0d0  stp x20,x19,[sp, #0x40]
7101cac0d4  stp x29,x30,[sp, #0x50]
7101cac0d8  add x29,sp,#0x50
7101cac0dc  sub sp,sp,#0x220
7101cac0e0  mov x19,x1
7101cac0e4  ldr x1,[x2, #0x8]
7101cac0e8  mov x21,x2
7101cac0ec  mov x20,x0
7101cac0f0  cbz x1,0x7101cac1b8
7101cac0f4  adrp x23,0x710532f000
7101cac0f8  ldr x8,[x23, #0x8f8]
7101cac0fc  ldr x0,[x8, #0x8]
7101cac100  ldr w2,[x21]
7101cac104  bl 0x710334c7d0
7101cac108  mvn w8,w0
7101cac10c  tst w8,#0xffff
7101cac110  b.eq 0x7101cac1b8
7101cac114  and w24,w0,#0xffff
7101cac118  mov w22,w0
7101cac11c  mov w2,wzr
7101cac120  cmp w24,#0x3
7101cac124  strb wzr,[sp, #0x8]
7101cac128  str xzr,[sp]
7101cac12c  b.hi 0x7101cac140
7101cac130  adrp x8,0x710446a000
7101cac134  add x8,x8,#0x5c0
7101cac138  sxth x9,w22
7101cac13c  ldr w2,[x8, x9, LSL #0x2]
7101cac140  adrp x1,0x710432a000
7101cac144  add x1,x1,#0x1d6
7101cac148  mov x0,sp
7101cac14c  mov x25,sp
7101cac150  bl 0x710062dc20
7101cac154  fmov s8,0x3f800000
7101cac158  ldr x0,[x19, #0x8]
7101cac15c  mov v0.16B,v8.16B
7101cac160  add x1,x25,#0x8
7101cac164  bl 0x7103778300
7101cac168  ldr x0,[x19, #0x8]
7101cac16c  mov v0.16B,v8.16B
7101cac170  adrp x1,0x71042e7000
7101cac174  add x1,x1,#0x3f1
7101cac178  bl 0x7103778300
7101cac17c  cmp w24,#0x3
7101cac180  b.hi 0x7101cac1b8
7101cac184  and x8,x22,#0xffff
7101cac188  adrp x9,0x71044f9000
7101cac18c  add x9,x9,#0xc2c
7101cac190  ldrsw x8,[x9, x8, LSL #0x2]
7101cac194  add x8,x8,x9
7101cac198  br x8
7101cac19c  ldr x0,[x20, #0x178]
7101cac1a0  mov x1,x21
7101cac1a4  mov x2,x19
7101cac1a8  mov w3,wzr
7101cac1ac  bl 0x7101cf2530
7101cac1b0  tbnz w0,#0x0,0x7101cac1d0
7101cac1b4  b 0x7101cac1d8
7101cac1b8  ldr x0,[x20, #0x178]
7101cac1bc  mov x1,x21
7101cac1c0  mov x2,x19
7101cac1c4  mov w3,wzr
7101cac1c8  bl 0x7101cf2800
7101cac1cc  tbz w0,#0x0,0x7101cac1d8
7101cac1d0  mov w8,#0x1
7101cac1d4  str w8,[x20, #0x26b0]
7101cac1d8  ldr w8,[x20, #0x26b0]
7101cac1dc  cmp w8,#0x1
7101cac1e0  b.ne 0x7101cac218
7101cac1e4  adrp x1,0x71043be000
7101cac1e8  add x1,x1,#0xebf
7101cac1ec  mov x8,sp
7101cac1f0  mov x0,x19
7101cac1f4  bl 0x71037780e0
7101cac1f8  ldr x20,[sp, #0x8]
7101cac1fc  ldr x0,[x20, #0x8]
7101cac200  cbz x0,0x7101cac224
7101cac204  ldr x8,[x0]
7101cac208  ldr x8,[x8, #0x148]
7101cac20c  blr x8
7101cac210  mov w21,w0
7101cac214  b 0x7101cac228
7101cac218  mov x0,x19
7101cac21c  bl 0x7101cf2220
7101cac220  b 0x7101cac258
7101cac224  mov w21,wzr
7101cac228  adrp x8,0x710523d000
7101cac22c  add x8,x8,#0x9e8
7101cac230  stp x8,xzr,[sp]
7101cac234  cbz x20,0x7101cac240
7101cac238  mov x0,x20
7101cac23c  bl 0x710392eb40
7101cac240  tbz w21,#0x0,0x7101cac258
7101cac244  ldr x0,[x19, #0x8]
7101cac248  fmov s0,0x3f800000
7101cac24c  adrp x1,0x7104433000
7101cac250  add x1,x1,#0x949
7101cac254  bl 0x7103778300
7101cac258  add sp,sp,#0x220
7101cac25c  ldp x29,x30,[sp, #0x50]
7101cac260  ldp x20,x19,[sp, #0x40]
7101cac264  ldp x22,x21,[sp, #0x30]
7101cac268  ldp x24,x23,[sp, #0x20]
7101cac26c  ldp x28,x25,[sp, #0x10]
7101cac270  ldr d8,[sp], #0x60
7101cac274  ret
7101cac278  ldr x0,[x19, #0x8]
7101cac27c  ldr x22,[x20, #0x178]
7101cac280  fmov s0,0x3f800000
7101cac284  adrp x1,0x710433a000
7101cac288  add x1,x1,#0x322
7101cac28c  bl 0x7103778300
7101cac290  adrp x1,0x71042e7000
7101cac294  add x1,x1,#0x3e2
7101cac298  mov x8,sp
7101cac29c  mov x0,x19
7101cac2a0  bl 0x7103776910
7101cac2a4  ldr x8,[x23, #0x8f8]
7101cac2a8  ldr x2,[x21, #0x8]
7101cac2ac  mov x3,sp
7101cac2b0  ldr x0,[x8, #0x8]
7101cac2b4  mov x1,x22
7101cac2b8  bl 0x710334fb10
7101cac2bc  mov w22,w0
7101cac2c0  ldr x0,[sp, #0x8]
7101cac2c4  adrp x8,0x710523d000
7101cac2c8  add x8,x8,#0x9a8
7101cac2cc  stp x8,xzr,[sp]
7101cac2d0  cbz x0,0x7101cac2d8
7101cac2d4  bl 0x710392eb40
7101cac2d8  cmp w22,#0x3
7101cac2dc  b.ne 0x7101cac1d8
7101cac2e0  mov x8,#0xff0000000000
7101cac2e4  movk x8,#0x13ff, LSL #48
7101cac2e8  ldr x9,[x23, #0x8f8]
7101cac2ec  stp xzr,xzr,[sp]
7101cac2f0  stur xzr,[sp, #0x6d]
7101cac2f4  str x8,[sp, #0x1a8]
7101cac2f8  mov x8,#0xff0000000000
7101cac2fc  mov x2,sp
7101cac300  movk x8,#0x5aff, LSL #48
7101cac304  str x8,[sp, #0x1b0]
7101cac308  mov x8,#0xff0000000000
7101cac30c  stp xzr,xzr,[sp, #0x60]
7101cac310  movk x8,#0xc1ff, LSL #48
7101cac314  mov x1,x21
7101cac318  str wzr,[sp, #0x14]
7101cac31c  strh wzr,[sp, #0x18]
7101cac320  strh wzr,[sp, #0x10]
7101cac324  str xzr,[sp, #0x58]
7101cac328  str xzr,[sp, #0x188]
7101cac32c  strh wzr,[sp, #0x190]
7101cac330  strh wzr,[sp, #0x1bc]
7101cac334  str wzr,[sp, #0x1b8]
7101cac338  str x8,[sp, #0x218]
7101cac33c  ldr x0,[x9, #0x8]
7101cac340  bl 0x710334f120
7101cac344  cmp w0,#0x3
7101cac348  b.ne 0x7101cac1d0
7101cac34c  ldrb w8,[sp, #0x1b8]
7101cac350  cmp w8,#0xb
7101cac354  csel w2,wzr,w8,hi
7101cac358  adrp x1,0x71043f0000
7101cac35c  add x1,x1,#0xb8f
7101cac360  mov x0,x19
7101cac364  bl 0x7103778430
7101cac368  b 0x7101cac1d0
7101cac36c  ldr x0,[x20, #0x178]
7101cac370  mov x1,x21
7101cac374  mov x2,x19
7101cac378  mov w3,wzr
7101cac37c  bl 0x7101cf23e0
7101cac380  tbnz w0,#0x0,0x7101cac1d0
7101cac384  b 0x7101cac1d8
