// addr:      7101b8cfa0
// offset:    0x1b8cfa0
// name:      FUN_7101b8cfa0
// mangled:   
// size:      1120

7101b8cfa0  sub sp,sp,#0x90
7101b8cfa4  str x23,[sp, #0x50]
7101b8cfa8  stp x22,x21,[sp, #0x60]
7101b8cfac  stp x20,x19,[sp, #0x70]
7101b8cfb0  stp x29,x30,[sp, #0x80]
7101b8cfb4  add x29,sp,#0x80
7101b8cfb8  ldr x8,[x0]
7101b8cfbc  ldr x8,[x8]
7101b8cfc0  ldr x8,[x8]
7101b8cfc4  ldr x8,[x8, #0x600]
7101b8cfc8  ldrb w9,[x8, #0x4aa]
7101b8cfcc  mov x19,x0
7101b8cfd0  cbz w9,0x7101b8cfdc
7101b8cfd4  ldrb w10,[x8, #0x1a8]
7101b8cfd8  tbnz w10,#0x1,0x7101b8cffc
7101b8cfdc  ldr w10,[x19, #0x124]
7101b8cfe0  cbz w10,0x7101b8cffc
7101b8cfe4  cbz w9,0x7101b8cff0
7101b8cfe8  ldrb w8,[x8, #0x1ac]
7101b8cfec  tbnz w8,#0x1,0x7101b8d1e8
7101b8cff0  sub w8,w10,#0x1
7101b8cff4  str w8,[x19, #0x124]
7101b8cff8  b 0x7101b8d1a4
7101b8cffc  add x0,x19,#0x18
7101b8d000  adrp x1,0x710432a000
7101b8d004  add x1,x1,#0x87b
7101b8d008  add x8,sp,#0x40
7101b8d00c  bl 0x71037780e0
7101b8d010  ldr x20,[sp, #0x48]
7101b8d014  ldr x21,[x20, #0x8]
7101b8d018  cbz x21,0x7101b8d108
7101b8d01c  ldrb w8,[x20, #0x10]
7101b8d020  cbz w8,0x7101b8d0e8
7101b8d024  ldr x8,[x20]
7101b8d028  ldr x23,[x8, #0x80]
7101b8d02c  add x22,x8,#0x88
7101b8d030  cmp x23,x22
7101b8d034  b.eq 0x7101b8d0e8
7101b8d038  ldr x0,[x23, #0x68]
7101b8d03c  ldr x8,[x0]
7101b8d040  ldr x8,[x8, #0x148]
7101b8d044  blr x8
7101b8d048  tbz w0,#0x0,0x7101b8d088
7101b8d04c  ldr x8,[x21]
7101b8d050  ldr x1,[x23, #0x68]
7101b8d054  mov x0,x21
7101b8d058  ldr x8,[x8, #0x120]
7101b8d05c  blr x8
7101b8d060  tbz w0,#0x0,0x7101b8d088
7101b8d064  ldr x0,[x23, #0x68]
7101b8d068  ldr x8,[x0]
7101b8d06c  ldr x8,[x8, #0x178]
7101b8d070  blr x8
7101b8d074  ldr x0,[x23, #0x68]
7101b8d078  ldr x8,[x0]
7101b8d07c  ldr x8,[x8, #0x140]
7101b8d080  mov w1,wzr
7101b8d084  blr x8
7101b8d088  ldr x8,[x23, #0x8]
7101b8d08c  cbz x8,0x7101b8d0a0
7101b8d090  mov x23,x8
7101b8d094  ldr x8,[x8]
7101b8d098  cbnz x8,0x7101b8d090
7101b8d09c  b 0x7101b8d0cc
7101b8d0a0  mov x8,x23
7101b8d0a4  ldr x9,[x8, #0x10]!
7101b8d0a8  ldr x10,[x9]
7101b8d0ac  cmp x10,x23
7101b8d0b0  b.eq 0x7101b8d0d8
7101b8d0b4  ldr x9,[x8]
7101b8d0b8  mov x8,x9
7101b8d0bc  ldr x23,[x8, #0x10]!
7101b8d0c0  ldr x10,[x23]
7101b8d0c4  cmp x10,x9
7101b8d0c8  b.ne 0x7101b8d0b4
7101b8d0cc  cmp x23,x22
7101b8d0d0  b.ne 0x7101b8d038
7101b8d0d4  b 0x7101b8d0e4
7101b8d0d8  mov x23,x9
7101b8d0dc  cmp x23,x22
7101b8d0e0  b.ne 0x7101b8d038
7101b8d0e4  ldr x21,[x20, #0x8]
7101b8d0e8  ldr x8,[x21]
7101b8d0ec  ldr x8,[x8, #0x178]
7101b8d0f0  mov x0,x21
7101b8d0f4  blr x8
7101b8d0f8  adrp x8,0x710523d000
7101b8d0fc  add x8,x8,#0x9e8
7101b8d100  stp x8,xzr,[sp, #0x40]
7101b8d104  b 0x7101b8d118
7101b8d108  adrp x8,0x710523d000
7101b8d10c  add x8,x8,#0x9e8
7101b8d110  stp x8,xzr,[sp, #0x40]
7101b8d114  cbz x20,0x7101b8d120
7101b8d118  mov x0,x20
7101b8d11c  bl 0x710392eb40
7101b8d120  add x0,x19,#0x8
7101b8d124  adrp x1,0x710435b000
7101b8d128  add x1,x1,#0x46b
7101b8d12c  add x8,sp,#0x40
7101b8d130  bl 0x7103776640
7101b8d134  ldr x20,[sp, #0x48]
7101b8d138  ldr x8,[x20, #0x8]
7101b8d13c  cbz x8,0x7101b8d154
7101b8d140  ldr x8,[x8, #0x18]
7101b8d144  cbz x8,0x7101b8d154
7101b8d148  ldrb w9,[x8, #0x58]
7101b8d14c  and w9,w9,#0xfe
7101b8d150  strb w9,[x8, #0x58]
7101b8d154  adrp x8,0x710523d000
7101b8d158  add x8,x8,#0x988
7101b8d15c  stp x8,xzr,[sp, #0x40]
7101b8d160  cbz x20,0x7101b8d184
7101b8d164  ldr x0,[x20, #0x18]
7101b8d168  adrp x8,0x710523d000
7101b8d16c  add x8,x8,#0x9a8
7101b8d170  stp x8,xzr,[x20, #0x10]
7101b8d174  cbz x0,0x7101b8d17c
7101b8d178  bl 0x710392eb40
7101b8d17c  mov x0,x20
7101b8d180  bl 0x710392eb40
7101b8d184  mov w8,#0x1
7101b8d188  str w8,[x19, #0x120]
7101b8d18c  ldrsw x8,[x19, #0x10c]
7101b8d190  cmp w8,#0x13
7101b8d194  b.cs 0x7101b8d3fc
7101b8d198  add x8,x19,x8, LSL #0x2
7101b8d19c  orr w9,wzr,#0x3
7101b8d1a0  str w9,[x8, #0xc0]
7101b8d1a4  ldr w8,[x19, #0x124]
7101b8d1a8  add w8,w8,#0x3b
7101b8d1ac  mov w9,#0x8889
7101b8d1b0  movk w9,#0x8888, LSL #16
7101b8d1b4  umull x8,w8,w9
7101b8d1b8  add x0,x19,#0x28
7101b8d1bc  adrp x1,0x71043cf000
7101b8d1c0  add x1,x1,#0x1be
7101b8d1c4  mov w2,#0x1
7101b8d1c8  lsr x3,x8,#0x25
7101b8d1cc  bl 0x710377a280
7101b8d1d0  ldp x29,x30,[sp, #0x80]
7101b8d1d4  ldr x23,[sp, #0x50]
7101b8d1d8  ldp x20,x19,[sp, #0x70]
7101b8d1dc  ldp x22,x21,[sp, #0x60]
7101b8d1e0  add sp,sp,#0x90
7101b8d1e4  ret
7101b8d1e8  adrp x8,0x710532f000
7101b8d1ec  ldr x8,[x8, #0x8d0]
7101b8d1f0  ldr x0,[x8, #0x8]
7101b8d1f4  ldrb w8,[x0, #0x191]
7101b8d1f8  cbnz w8,0x7101b8d278
7101b8d1fc  mov x20,#0xfe8c
7101b8d200  movk x20,#0x53df, LSL #16
7101b8d204  movk x20,#0x10, LSL #32
7101b8d208  mov w2,#0x4
7101b8d20c  mov x1,x20
7101b8d210  bl 0x7103313f20
7101b8d214  tbz w0,#0x0,0x7101b8d278
7101b8d218  mov x0,sp
7101b8d21c  mov x1,x20
7101b8d220  bl 0x71024076d0
7101b8d224  ldr x8,[sp, #0x10]
7101b8d228  adrp x9,0x7104f73000
7101b8d22c  add x9,x9,#0xd50
7101b8d230  str x9,[sp, #0x8]
7101b8d234  cbz x8,0x7101b8d2a4
7101b8d238  adrp x8,0x7106dd5000
7101b8d23c  ldrb w8,[x8, #0x3a8]
7101b8d240  cmp w8,#0x1
7101b8d244  b.ne 0x7101b8d2a4
7101b8d248  adrp x9,0x7106dd5000
7101b8d24c  ldr w8,[sp, #0x18]
7101b8d250  ldr w9,[x9, #0x3ac]
7101b8d254  cmp w8,w9
7101b8d258  b.ne 0x7101b8d2a4
7101b8d25c  ldr x8,[sp, #0x10]
7101b8d260  ldr wzr,[x8, #0x38]!
7101b8d264  ldaxr w9,[x8]
7101b8d268  sub w9,w9,#0x1
7101b8d26c  stlxr w10,w9,[x8]
7101b8d270  cbnz w10,0x7101b8d264
7101b8d274  b 0x7101b8d2a4
7101b8d278  mov x8,#0x650000000000
7101b8d27c  movk x8,#0x87, LSL #48
7101b8d280  strb wzr,[sp, #0x20]
7101b8d284  stp xzr,x8,[sp, #0x10]
7101b8d288  mov x8,#-0x1
7101b8d28c  stp x8,xzr,[sp, #0x28]
7101b8d290  adrp x8,0x7104f73000
7101b8d294  add x8,x8,#0xd50
7101b8d298  str wzr,[sp]
7101b8d29c  str xzr,[sp, #0x38]
7101b8d2a0  str x8,[sp, #0x8]
7101b8d2a4  add x0,x19,#0x18
7101b8d2a8  adrp x1,0x710432a000
7101b8d2ac  add x1,x1,#0x87b
7101b8d2b0  add x8,sp,#0x40
7101b8d2b4  str xzr,[sp, #0x10]
7101b8d2b8  strb wzr,[sp, #0x20]
7101b8d2bc  bl 0x71037780e0
7101b8d2c0  ldr x20,[sp, #0x48]
7101b8d2c4  ldr x21,[x20, #0x8]
7101b8d2c8  cbz x21,0x7101b8d3b8
7101b8d2cc  ldrb w8,[x20, #0x10]
7101b8d2d0  cbz w8,0x7101b8d398
7101b8d2d4  ldr x8,[x20]
7101b8d2d8  ldr x23,[x8, #0x80]
7101b8d2dc  add x22,x8,#0x88
7101b8d2e0  cmp x23,x22
7101b8d2e4  b.eq 0x7101b8d398
7101b8d2e8  ldr x0,[x23, #0x68]
7101b8d2ec  ldr x8,[x0]
7101b8d2f0  ldr x8,[x8, #0x148]
7101b8d2f4  blr x8
7101b8d2f8  tbz w0,#0x0,0x7101b8d338
7101b8d2fc  ldr x8,[x21]
7101b8d300  ldr x1,[x23, #0x68]
7101b8d304  mov x0,x21
7101b8d308  ldr x8,[x8, #0x120]
7101b8d30c  blr x8
7101b8d310  tbz w0,#0x0,0x7101b8d338
7101b8d314  ldr x0,[x23, #0x68]
7101b8d318  ldr x8,[x0]
7101b8d31c  ldr x8,[x8, #0x178]
7101b8d320  blr x8
7101b8d324  ldr x0,[x23, #0x68]
7101b8d328  ldr x8,[x0]
7101b8d32c  ldr x8,[x8, #0x140]
7101b8d330  mov w1,wzr
7101b8d334  blr x8
7101b8d338  ldr x8,[x23, #0x8]
7101b8d33c  cbz x8,0x7101b8d350
7101b8d340  mov x23,x8
7101b8d344  ldr x8,[x8]
7101b8d348  cbnz x8,0x7101b8d340
7101b8d34c  b 0x7101b8d37c
7101b8d350  mov x8,x23
7101b8d354  ldr x9,[x8, #0x10]!
7101b8d358  ldr x10,[x9]
7101b8d35c  cmp x10,x23
7101b8d360  b.eq 0x7101b8d388
7101b8d364  ldr x9,[x8]
7101b8d368  mov x8,x9
7101b8d36c  ldr x23,[x8, #0x10]!
7101b8d370  ldr x10,[x23]
7101b8d374  cmp x10,x9
7101b8d378  b.ne 0x7101b8d364
7101b8d37c  cmp x23,x22
7101b8d380  b.ne 0x7101b8d2e8
7101b8d384  b 0x7101b8d394
7101b8d388  mov x23,x9
7101b8d38c  cmp x23,x22
7101b8d390  b.ne 0x7101b8d2e8
7101b8d394  ldr x21,[x20, #0x8]
7101b8d398  ldr x8,[x21]
7101b8d39c  ldr x8,[x8, #0x178]
7101b8d3a0  mov x0,x21
7101b8d3a4  blr x8
7101b8d3a8  adrp x8,0x710523d000
7101b8d3ac  add x8,x8,#0x9e8
7101b8d3b0  stp x8,xzr,[sp, #0x40]
7101b8d3b4  b 0x7101b8d3c8
7101b8d3b8  adrp x8,0x710523d000
7101b8d3bc  add x8,x8,#0x9e8
7101b8d3c0  stp x8,xzr,[sp, #0x40]
7101b8d3c4  cbz x20,0x7101b8d3d0
7101b8d3c8  mov x0,x20
7101b8d3cc  bl 0x710392eb40
7101b8d3d0  mov w8,#0x2
7101b8d3d4  str w8,[x19, #0x120]
7101b8d3d8  ldrsw x8,[x19, #0x10c]
7101b8d3dc  cmp w8,#0x13
7101b8d3e0  b.cs 0x7101b8d3fc
7101b8d3e4  ldrb w9,[x19, #0x129]
7101b8d3e8  cmp w9,#0x0
7101b8d3ec  mov w9,#0x4
7101b8d3f0  add x8,x19,x8, LSL #0x2
7101b8d3f4  cinc w9,w9,eq
7101b8d3f8  b 0x7101b8d1a0
7101b8d3fc  bl 0x71039c2650
