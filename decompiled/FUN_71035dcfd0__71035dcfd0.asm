// addr:      71035dcfd0
// offset:    0x35dcfd0
// name:      FUN_71035dcfd0
// mangled:   
// size:      4076

71035dcfd0  sub sp,sp,#0x150
71035dcfd4  stp x28,x27,[sp, #0xf0]
71035dcfd8  stp x26,x25,[sp, #0x100]
71035dcfdc  stp x24,x23,[sp, #0x110]
71035dcfe0  stp x22,x21,[sp, #0x120]
71035dcfe4  stp x20,x19,[sp, #0x130]
71035dcfe8  stp x29,x30,[sp, #0x140]
71035dcfec  add x29,sp,#0x140
71035dcff0  ldr x8,[x0]
71035dcff4  ldr x8,[x8, #0x4b8]
71035dcff8  mov x19,x0
71035dcffc  blr x8
71035dd000  tbz w0,#0x0,0x71035ddf9c
71035dd004  mov w0,#0x10
71035dd008  orr w1,wzr,#0x78
71035dd00c  bl 0x710392e290
71035dd010  mov x20,x0
71035dd014  cbnz x0,0x71035dd060
71035dd018  adrp x8,0x7105332000
71035dd01c  ldr x0,[x8, #0xf00]
71035dd020  cbz x0,0x71035dd05c
71035dd024  orr w8,wzr,#0x78
71035dd028  str wzr,[sp, #0x28]
71035dd02c  add x1,sp,#0x28
71035dd030  str x8,[sp, #0x78]
71035dd034  ldr x8,[x0]
71035dd038  ldr x8,[x8, #0x30]
71035dd03c  add x2,sp,#0x78
71035dd040  blr x8
71035dd044  tbz w0,#0x0,0x71035dd05c
71035dd048  mov w0,#0x10
71035dd04c  orr w1,wzr,#0x78
71035dd050  bl 0x710392e290
71035dd054  mov x20,x0
71035dd058  cbnz x0,0x71035dd060
71035dd05c  mov x20,xzr
71035dd060  adrp x8,0x7105233000
71035dd064  add x8,x8,#0x338
71035dd068  orr x9,xzr,#-0x100000000
71035dd06c  stp x8,x9,[x20]
71035dd070  adrp x8,0x7105233000
71035dd074  add x8,x8,#0x358
71035dd078  str wzr,[x20, #0x10]
71035dd07c  stp xzr,xzr,[x20, #0x28]
71035dd080  stp x8,xzr,[x20, #0x18]
71035dd084  stp xzr,xzr,[x20, #0x68]
71035dd088  stp xzr,xzr,[x20, #0x58]
71035dd08c  stp xzr,xzr,[x20, #0x48]
71035dd090  stp xzr,xzr,[x20, #0x38]
71035dd094  ldr x0,[x19, #0x818]
71035dd098  str x20,[x19, #0x818]
71035dd09c  cbz x0,0x71035dd0b0
71035dd0a0  ldr x8,[x0]
71035dd0a4  ldr x8,[x8, #0x8]
71035dd0a8  blr x8
71035dd0ac  ldr x20,[x19, #0x818]
71035dd0b0  ldp x8,x27,[x20, #0x38]
71035dd0b4  sub x9,x27,x8
71035dd0b8  mov x26,#0x83e1
71035dd0bc  movk x26,#0x3e0f, LSL #16
71035dd0c0  movk x26,#0xe0f8, LSL #32
71035dd0c4  movk x26,#0xf83, LSL #48
71035dd0c8  asr x10,x9,#0x2
71035dd0cc  mul x23,x10,x26
71035dd0d0  mov w25,#0xf400
71035dd0d4  movk w25,#0x1, LSL #16
71035dd0d8  cmp x23,#0x3e7
71035dd0dc  b.hi 0x71035dd140
71035dd0e0  mov w9,#0x3e8
71035dd0e4  sub x10,x9,x23
71035dd0e8  ldr x9,[x20, #0x48]
71035dd0ec  sub x11,x9,x27
71035dd0f0  asr x11,x11,#0x2
71035dd0f4  mul x11,x11,x26
71035dd0f8  cmp x11,x10
71035dd0fc  b.cs 0x71035dd160
71035dd100  sub x8,x9,x8
71035dd104  mov x9,#0xf83d
71035dd108  movk x9,#0x83e0, LSL #16
71035dd10c  asr x8,x8,#0x2
71035dd110  mul x8,x8,x26
71035dd114  movk x9,#0x3e0f, LSL #32
71035dd118  movk x9,#0xf8, LSL #48
71035dd11c  cmp x8,x9
71035dd120  b.hi 0x71035dd1c8
71035dd124  lsl x8,x8,#0x1
71035dd128  cmp x8,#0x3e8
71035dd12c  mov w9,#0x3e8
71035dd130  csel x22,x8,x9,hi
71035dd134  cbnz x22,0x71035dd1d8
71035dd138  mov x8,xzr
71035dd13c  b 0x71035dd24c
71035dd140  add x10,x25,#0xfa0
71035dd144  cmp x9,x10
71035dd148  b.eq 0x71035dd32c
71035dd14c  mov w9,#0x3a0
71035dd150  movk w9,#0x2, LSL #16
71035dd154  add x27,x8,x9
71035dd158  str x27,[x20, #0x40]
71035dd15c  b 0x71035dd32c
71035dd160  sub x8,x23,#0x3e8
71035dd164  orr w9,wzr,#0x3f800000
71035dd168  orr x10,xzr,#0x3f8000003f800000
71035dd16c  stp w9,wzr,[x27, #0x7c]
71035dd170  str w9,[x27]
71035dd174  adds x8,x8,#0x1
71035dd178  stur xzr,[x27, #0xc]
71035dd17c  stur xzr,[x27, #0x4]
71035dd180  str w9,[x27, #0x14]
71035dd184  str w9,[x27, #0x28]
71035dd188  stur xzr,[x27, #0x34]
71035dd18c  stur xzr,[x27, #0x2c]
71035dd190  stur x10,[x27, #0x3c]
71035dd194  stur xzr,[x27, #0x4c]
71035dd198  stur xzr,[x27, #0x44]
71035dd19c  str w9,[x27, #0x54]
71035dd1a0  str w9,[x27, #0x68]
71035dd1a4  stur xzr,[x27, #0x74]
71035dd1a8  stur xzr,[x27, #0x6c]
71035dd1ac  stp xzr,xzr,[x27, #0x18]
71035dd1b0  stp xzr,xzr,[x27, #0x58]
71035dd1b4  ldr x11,[x20, #0x40]
71035dd1b8  add x27,x11,#0x84
71035dd1bc  str x27,[x20, #0x40]
71035dd1c0  b.ne 0x71035dd16c
71035dd1c4  b 0x71035dd328
71035dd1c8  mov x22,#0xf07c
71035dd1cc  movk x22,#0x7c1, LSL #16
71035dd1d0  movk x22,#0x7c1f, LSL #32
71035dd1d4  movk x22,#0x1f0, LSL #48
71035dd1d8  add x8,x22,x22, LSL #0x5
71035dd1dc  lsl x21,x8,#0x2
71035dd1e0  add x0,sp,#0x28
71035dd1e4  mov w1,#0x10
71035dd1e8  mov x2,x21
71035dd1ec  bl 0x710392e1f0
71035dd1f0  cmp w0,#0xc
71035dd1f4  b.ne 0x71035dd22c
71035dd1f8  adrp x8,0x710593d000
71035dd1fc  ldr x0,[x8, #0x2b0]
71035dd200  cbz x0,0x71035dd22c
71035dd204  str x21,[sp, #0x78]
71035dd208  ldr x8,[x0]
71035dd20c  ldr x8,[x8, #0x30]
71035dd210  add x1,sp,#0x78
71035dd214  blr x8
71035dd218  tbz w0,#0x0,0x71035dd22c
71035dd21c  add x0,sp,#0x28
71035dd220  mov w1,#0x10
71035dd224  mov x2,x21
71035dd228  bl 0x710392e1f0
71035dd22c  adrp x8,0x71052a8000
71035dd230  ldr x8,[x8, #0xa78]
71035dd234  cbz x8,0x71035dd248
71035dd238  ldr x2,[sp, #0x28]
71035dd23c  mov w1,#0x10
71035dd240  mov x0,x21
71035dd244  bl 0x71039c19e0
71035dd248  ldr x8,[sp, #0x28]
71035dd24c  mov w9,#0x84
71035dd250  madd x21,x23,x9,x8
71035dd254  sub x9,x23,#0x3e8
71035dd258  add x10,x21,#0x40
71035dd25c  orr w11,wzr,#0x3f800000
71035dd260  orr x12,xzr,#0x3f8000003f800000
71035dd264  stp w11,wzr,[x10, #0x3c]
71035dd268  stur w11,[x10, #-0x40]
71035dd26c  adds x9,x9,#0x1
71035dd270  stur xzr,[x10, #-0x34]
71035dd274  stur xzr,[x10, #-0x3c]
71035dd278  stur w11,[x10, #-0x2c]
71035dd27c  stur w11,[x10, #-0x18]
71035dd280  stur xzr,[x10, #-0xc]
71035dd284  stur xzr,[x10, #-0x14]
71035dd288  stur x12,[x10, #-0x4]
71035dd28c  stur xzr,[x10, #0xc]
71035dd290  stur xzr,[x10, #0x4]
71035dd294  str w11,[x10, #0x14]
71035dd298  str w11,[x10, #0x28]
71035dd29c  stur xzr,[x10, #0x34]
71035dd2a0  stur xzr,[x10, #0x2c]
71035dd2a4  stp xzr,xzr,[x10, #-0x28]
71035dd2a8  stp xzr,xzr,[x10, #0x18]
71035dd2ac  add x10,x10,#0x84
71035dd2b0  b.ne 0x71035dd264
71035dd2b4  mov w9,#0x84
71035dd2b8  madd x28,x22,x9,x8
71035dd2bc  mov w9,#0x3a0
71035dd2c0  movk w9,#0x2, LSL #16
71035dd2c4  ldp x22,x23,[x20, #0x38]
71035dd2c8  add x27,x8,x9
71035dd2cc  cmp x23,x22
71035dd2d0  b.eq 0x71035dd2fc
71035dd2d4  mov w24,#0x84
71035dd2d8  sub x21,x21,#0x84
71035dd2dc  sub x23,x23,#0x84
71035dd2e0  mov x0,x21
71035dd2e4  mov x1,x23
71035dd2e8  mov x2,x24
71035dd2ec  bl 0x71039c00e0
71035dd2f0  cmp x22,x23
71035dd2f4  b.ne 0x71035dd2d8
71035dd2f8  ldr x22,[x20, #0x38]
71035dd2fc  stp x21,x27,[x20, #0x38]
71035dd300  str x28,[x20, #0x48]
71035dd304  cbz x22,0x71035dd328
71035dd308  adrp x8,0x71052a8000
71035dd30c  ldr x8,[x8, #0xa70]
71035dd310  cbz x8,0x71035dd31c
71035dd314  mov x0,x22
71035dd318  bl 0x71039c19b0
71035dd31c  mov x0,x22
71035dd320  bl 0x710392eb40
71035dd324  ldr x27,[x20, #0x40]
71035dd328  ldr x8,[x20, #0x38]
71035dd32c  sub x9,x27,x8
71035dd330  cmp x9,#0x1
71035dd334  b.lt 0x71035dd3a4
71035dd338  umulh x9,x9,x26
71035dd33c  lsr x9,x9,#0x3
71035dd340  add x9,x9,#0x1
71035dd344  orr w10,wzr,#0x3f800000
71035dd348  orr x11,xzr,#0x3f8000003f800000
71035dd34c  sub x9,x9,#0x1
71035dd350  str w10,[x8]
71035dd354  stur xzr,[x8, #0xc]
71035dd358  stur xzr,[x8, #0x4]
71035dd35c  cmp x9,#0x1
71035dd360  str w10,[x8, #0x14]
71035dd364  str w10,[x8, #0x28]
71035dd368  stur xzr,[x8, #0x34]
71035dd36c  stur xzr,[x8, #0x2c]
71035dd370  stur x11,[x8, #0x3c]
71035dd374  stur xzr,[x8, #0x4c]
71035dd378  stur xzr,[x8, #0x44]
71035dd37c  str w10,[x8, #0x54]
71035dd380  str w10,[x8, #0x68]
71035dd384  stur xzr,[x8, #0x74]
71035dd388  stur xzr,[x8, #0x6c]
71035dd38c  str w10,[x8, #0x7c]
71035dd390  strb wzr,[x8, #0x80]
71035dd394  stp xzr,xzr,[x8, #0x18]
71035dd398  stp xzr,xzr,[x8, #0x58]
71035dd39c  add x8,x8,#0x84
71035dd3a0  b.gt 0x71035dd34c
71035dd3a4  ldp x9,x8,[x20, #0x50]
71035dd3a8  sub x10,x8,x9
71035dd3ac  asr x22,x10,#0x7
71035dd3b0  cmp x22,#0x3e7
71035dd3b4  b.hi 0x71035dd404
71035dd3b8  mov w10,#0x3e8
71035dd3bc  sub x11,x10,x22
71035dd3c0  ldr x10,[x20, #0x60]
71035dd3c4  sub x12,x10,x8
71035dd3c8  asr x12,x12,#0x7
71035dd3cc  cmp x12,x11
71035dd3d0  b.cs 0x71035dd420
71035dd3d4  sub x8,x10,x9
71035dd3d8  asr x9,x8,#0x7
71035dd3dc  orr x10,xzr,#0xfffffffffffffe
71035dd3e0  cmp x9,x10
71035dd3e4  b.hi 0x71035dd488
71035dd3e8  asr x8,x8,#0x6
71035dd3ec  cmp x8,#0x3e8
71035dd3f0  mov w9,#0x3e8
71035dd3f4  csel x23,x8,x9,hi
71035dd3f8  cbnz x23,0x71035dd48c
71035dd3fc  mov x9,xzr
71035dd400  b 0x71035dd4fc
71035dd404  cmp x10,x25
71035dd408  b.eq 0x71035ddb14
71035dd40c  mov w8,#0xf400
71035dd410  movk w8,#0x1, LSL #16
71035dd414  add x8,x9,x8
71035dd418  str x8,[x20, #0x58]
71035dd41c  b 0x71035ddb14
71035dd420  sub x9,x22,#0x3e8
71035dd424  orr w10,wzr,#0x3f800000
71035dd428  orr x11,xzr,#0x3f8000003f800000
71035dd42c  str w10,[x8]
71035dd430  stur xzr,[x8, #0xc]
71035dd434  adds x9,x9,#0x1
71035dd438  stur xzr,[x8, #0x4]
71035dd43c  str w10,[x8, #0x14]
71035dd440  str w10,[x8, #0x28]
71035dd444  stur xzr,[x8, #0x34]
71035dd448  stur xzr,[x8, #0x2c]
71035dd44c  stur x11,[x8, #0x3c]
71035dd450  stur xzr,[x8, #0x4c]
71035dd454  stur xzr,[x8, #0x44]
71035dd458  str w10,[x8, #0x54]
71035dd45c  str w10,[x8, #0x68]
71035dd460  stur xzr,[x8, #0x74]
71035dd464  stur xzr,[x8, #0x6c]
71035dd468  str w10,[x8, #0x7c]
71035dd46c  stp xzr,xzr,[x8, #0x18]
71035dd470  stp xzr,xzr,[x8, #0x58]
71035dd474  ldr x8,[x20, #0x58]
71035dd478  add x8,x8,#0x80
71035dd47c  str x8,[x20, #0x58]
71035dd480  b.ne 0x71035dd42c
71035dd484  b 0x71035ddb10
71035dd488  orr x23,xzr,#0x1ffffffffffffff
71035dd48c  lsl x21,x23,#0x7
71035dd490  add x0,sp,#0x28
71035dd494  mov w1,#0x10
71035dd498  mov x2,x21
71035dd49c  bl 0x710392e1f0
71035dd4a0  cmp w0,#0xc
71035dd4a4  b.ne 0x71035dd4dc
71035dd4a8  adrp x8,0x710593d000
71035dd4ac  ldr x0,[x8, #0x2b0]
71035dd4b0  cbz x0,0x71035dd4dc
71035dd4b4  str x21,[sp, #0x78]
71035dd4b8  ldr x8,[x0]
71035dd4bc  ldr x8,[x8, #0x30]
71035dd4c0  add x1,sp,#0x78
71035dd4c4  blr x8
71035dd4c8  tbz w0,#0x0,0x71035dd4dc
71035dd4cc  add x0,sp,#0x28
71035dd4d0  mov w1,#0x10
71035dd4d4  mov x2,x21
71035dd4d8  bl 0x710392e1f0
71035dd4dc  adrp x8,0x71052a8000
71035dd4e0  ldr x8,[x8, #0xa78]
71035dd4e4  cbz x8,0x71035dd4f8
71035dd4e8  ldr x2,[sp, #0x28]
71035dd4ec  mov w1,#0x10
71035dd4f0  mov x0,x21
71035dd4f4  bl 0x71039c19e0
71035dd4f8  ldr x9,[sp, #0x28]
71035dd4fc  add x13,x9,x22, LSL #0x7
71035dd500  sub x8,x22,#0x3e8
71035dd504  orr w10,wzr,#0x3f800000
71035dd508  orr x11,xzr,#0x3f8000003f800000
71035dd50c  mov x12,x13
71035dd510  str w10,[x12]
71035dd514  stur xzr,[x12, #0xc]
71035dd518  adds x8,x8,#0x1
71035dd51c  stur xzr,[x12, #0x4]
71035dd520  str w10,[x12, #0x14]
71035dd524  str w10,[x12, #0x28]
71035dd528  stur xzr,[x12, #0x34]
71035dd52c  stur xzr,[x12, #0x2c]
71035dd530  stur x11,[x12, #0x3c]
71035dd534  stur xzr,[x12, #0x4c]
71035dd538  stur xzr,[x12, #0x44]
71035dd53c  str w10,[x12, #0x54]
71035dd540  str w10,[x12, #0x68]
71035dd544  stur xzr,[x12, #0x74]
71035dd548  stur xzr,[x12, #0x6c]
71035dd54c  str w10,[x12, #0x7c]
71035dd550  stp xzr,xzr,[x12, #0x18]
71035dd554  stp xzr,xzr,[x12, #0x58]
71035dd558  add x12,x12,#0x80
71035dd55c  b.ne 0x71035dd510
71035dd560  ldp x21,x11,[x20, #0x50]
71035dd564  add x10,x9,x23, LSL #0x7
71035dd568  mov w8,#0xf400
71035dd56c  movk w8,#0x1, LSL #16
71035dd570  add x8,x9,x8
71035dd574  cmp x11,x21
71035dd578  b.eq 0x71035ddae4
71035dd57c  sub x15,x11,#0x80
71035dd580  sub x14,x15,x21
71035dd584  lsr x16,x14,#0x7
71035dd588  mvn x12,x16
71035dd58c  add w16,w16,#0x1
71035dd590  ands x16,x16,#0x7
71035dd594  b.eq 0x71035dd600
71035dd598  sub x17,x22,x16
71035dd59c  neg x16,x16
71035dd5a0  sub x13,x13,#0x80
71035dd5a4  mov x18,x16
71035dd5a8  ldp x0,x1,[x15]
71035dd5ac  adds x18,x18,#0x1
71035dd5b0  ldp x2,x3,[x15, #0x10]
71035dd5b4  stp x2,x3,[x13, #0x10]
71035dd5b8  stp x0,x1,[x13]
71035dd5bc  ldp x0,x1,[x15, #0x20]
71035dd5c0  ldp x2,x3,[x15, #0x30]
71035dd5c4  stp x2,x3,[x13, #0x30]
71035dd5c8  stp x0,x1,[x13, #0x20]
71035dd5cc  ldp x0,x1,[x15, #0x40]
71035dd5d0  ldp x2,x3,[x15, #0x50]
71035dd5d4  stp x2,x3,[x13, #0x50]
71035dd5d8  stp x0,x1,[x13, #0x40]
71035dd5dc  ldp x0,x1,[x15, #0x60]
71035dd5e0  ldp x2,x3,[x15, #0x70]
71035dd5e4  sub x15,x15,#0x80
71035dd5e8  stp x2,x3,[x13, #0x70]
71035dd5ec  stp x0,x1,[x13, #0x60]
71035dd5f0  sub x13,x13,#0x80
71035dd5f4  b.ne 0x71035dd5a8
71035dd5f8  add x13,x9,x17, LSL #0x7
71035dd5fc  add x11,x11,x16, LSL #0x7
71035dd600  add x12,x22,x12
71035dd604  cmp x14,#0x380
71035dd608  b.cc 0x71035ddadc
71035dd60c  sub x13,x13,#0x400
71035dd610  ldp x14,x15,[x11, #-0x80]
71035dd614  sub x18,x11,#0x340
71035dd618  ldp x16,x17,[x11, #-0x70]
71035dd61c  str x17,[x13, #0x398]
71035dd620  str x16,[x13, #0x390]
71035dd624  str x15,[x13, #0x388]
71035dd628  str x14,[x13, #0x380]
71035dd62c  ldp x14,x15,[x11, #-0x60]
71035dd630  sub x0,x11,#0x338
71035dd634  ldp x16,x17,[x11, #-0x50]
71035dd638  str x17,[x13, #0x3b8]
71035dd63c  str x16,[x13, #0x3b0]
71035dd640  str x15,[x13, #0x3a8]
71035dd644  str x14,[x13, #0x3a0]
71035dd648  ldp x14,x15,[x11, #-0x40]
71035dd64c  sub x1,x11,#0x310
71035dd650  ldp x16,x17,[x11, #-0x30]
71035dd654  str x17,[x13, #0x3d8]
71035dd658  str x16,[x13, #0x3d0]
71035dd65c  str x15,[x13, #0x3c8]
71035dd660  str x14,[x13, #0x3c0]
71035dd664  ldp x14,x15,[x11, #-0x20]
71035dd668  sub x2,x11,#0x308
71035dd66c  ldp x16,x17,[x11, #-0x10]
71035dd670  str x17,[x13, #0x3f8]
71035dd674  str x16,[x13, #0x3f0]
71035dd678  str x15,[x13, #0x3e8]
71035dd67c  str x14,[x13, #0x3e0]
71035dd680  ldp x14,x15,[x11, #-0x100]
71035dd684  sub x3,x11,#0x3f8
71035dd688  ldp x16,x17,[x11, #-0xf0]
71035dd68c  str x17,[x13, #0x318]
71035dd690  str x16,[x13, #0x310]
71035dd694  str x15,[x13, #0x308]
71035dd698  str x14,[x13, #0x300]
71035dd69c  ldp x14,x15,[x11, #-0xe0]
71035dd6a0  sub x4,x11,#0x3f0
71035dd6a4  ldp x16,x17,[x11, #-0xd0]
71035dd6a8  str x17,[x13, #0x338]
71035dd6ac  str x16,[x13, #0x330]
71035dd6b0  str x15,[x13, #0x328]
71035dd6b4  str x14,[x13, #0x320]
71035dd6b8  ldp x14,x15,[x11, #-0xc0]
71035dd6bc  sub x5,x11,#0x3e8
71035dd6c0  ldp x16,x17,[x11, #-0xb0]
71035dd6c4  str x17,[x13, #0x358]
71035dd6c8  str x16,[x13, #0x350]
71035dd6cc  str x15,[x13, #0x348]
71035dd6d0  str x14,[x13, #0x340]
71035dd6d4  ldp x14,x15,[x11, #-0xa0]
71035dd6d8  sub x6,x11,#0x3e0
71035dd6dc  ldp x16,x17,[x11, #-0x90]
71035dd6e0  str x17,[x13, #0x378]
71035dd6e4  str x16,[x13, #0x370]
71035dd6e8  str x15,[x13, #0x368]
71035dd6ec  str x14,[x13, #0x360]
71035dd6f0  sub x14,x11,#0x180
71035dd6f4  sub x15,x11,#0x178
71035dd6f8  sub x16,x11,#0x170
71035dd6fc  sub x17,x11,#0x168
71035dd700  ldr x14,[x14]
71035dd704  ldr x15,[x15]
71035dd708  ldr x16,[x16]
71035dd70c  ldr x17,[x17]
71035dd710  str x17,[x13, #0x298]
71035dd714  str x16,[x13, #0x290]
71035dd718  str x15,[x13, #0x288]
71035dd71c  str x14,[x13, #0x280]
71035dd720  sub x14,x11,#0x160
71035dd724  sub x15,x11,#0x158
71035dd728  sub x16,x11,#0x150
71035dd72c  sub x17,x11,#0x148
71035dd730  ldr x14,[x14]
71035dd734  ldr x15,[x15]
71035dd738  ldr x16,[x16]
71035dd73c  ldr x17,[x17]
71035dd740  str x17,[x13, #0x2b8]
71035dd744  str x16,[x13, #0x2b0]
71035dd748  str x15,[x13, #0x2a8]
71035dd74c  str x14,[x13, #0x2a0]
71035dd750  sub x14,x11,#0x140
71035dd754  sub x15,x11,#0x138
71035dd758  sub x16,x11,#0x130
71035dd75c  sub x17,x11,#0x128
71035dd760  ldr x14,[x14]
71035dd764  ldr x15,[x15]
71035dd768  ldr x16,[x16]
71035dd76c  ldr x17,[x17]
71035dd770  str x17,[x13, #0x2d8]
71035dd774  str x16,[x13, #0x2d0]
71035dd778  str x15,[x13, #0x2c8]
71035dd77c  str x14,[x13, #0x2c0]
71035dd780  sub x14,x11,#0x120
71035dd784  sub x15,x11,#0x118
71035dd788  sub x16,x11,#0x110
71035dd78c  sub x17,x11,#0x108
71035dd790  ldr x14,[x14]
71035dd794  ldr x15,[x15]
71035dd798  ldr x16,[x16]
71035dd79c  ldr x17,[x17]
71035dd7a0  str x17,[x13, #0x2f8]
71035dd7a4  str x16,[x13, #0x2f0]
71035dd7a8  str x15,[x13, #0x2e8]
71035dd7ac  str x14,[x13, #0x2e0]
71035dd7b0  sub x14,x11,#0x200
71035dd7b4  sub x15,x11,#0x1f8
71035dd7b8  sub x16,x11,#0x1f0
71035dd7bc  sub x17,x11,#0x1e8
71035dd7c0  ldr x14,[x14]
71035dd7c4  ldr x15,[x15]
71035dd7c8  ldr x16,[x16]
71035dd7cc  ldr x17,[x17]
71035dd7d0  str x17,[x13, #0x218]
71035dd7d4  str x16,[x13, #0x210]
71035dd7d8  str x15,[x13, #0x208]
71035dd7dc  str x14,[x13, #0x200]
71035dd7e0  sub x14,x11,#0x1e0
71035dd7e4  sub x15,x11,#0x1d8
71035dd7e8  sub x16,x11,#0x1d0
71035dd7ec  sub x17,x11,#0x1c8
71035dd7f0  ldr x14,[x14]
71035dd7f4  ldr x15,[x15]
71035dd7f8  ldr x16,[x16]
71035dd7fc  ldr x17,[x17]
71035dd800  str x17,[x13, #0x238]
71035dd804  str x16,[x13, #0x230]
71035dd808  str x15,[x13, #0x228]
71035dd80c  str x14,[x13, #0x220]
71035dd810  sub x14,x11,#0x1c0
71035dd814  sub x15,x11,#0x1b8
71035dd818  sub x16,x11,#0x1b0
71035dd81c  sub x17,x11,#0x1a8
71035dd820  ldr x14,[x14]
71035dd824  ldr x15,[x15]
71035dd828  ldr x16,[x16]
71035dd82c  ldr x17,[x17]
71035dd830  str x17,[x13, #0x258]
71035dd834  str x16,[x13, #0x250]
71035dd838  str x15,[x13, #0x248]
71035dd83c  str x14,[x13, #0x240]
71035dd840  sub x14,x11,#0x1a0
71035dd844  sub x15,x11,#0x198
71035dd848  sub x16,x11,#0x190
71035dd84c  sub x17,x11,#0x188
71035dd850  ldr x14,[x14]
71035dd854  ldr x15,[x15]
71035dd858  ldr x16,[x16]
71035dd85c  ldr x17,[x17]
71035dd860  str x17,[x13, #0x278]
71035dd864  str x16,[x13, #0x270]
71035dd868  str x15,[x13, #0x268]
71035dd86c  str x14,[x13, #0x260]
71035dd870  sub x14,x11,#0x280
71035dd874  sub x15,x11,#0x278
71035dd878  sub x16,x11,#0x270
71035dd87c  sub x17,x11,#0x268
71035dd880  ldr x14,[x14]
71035dd884  ldr x15,[x15]
71035dd888  ldr x16,[x16]
71035dd88c  ldr x17,[x17]
71035dd890  sub x7,x11,#0x3b8
71035dd894  stp x16,x17,[x13, #0x190]
71035dd898  sub x16,x11,#0x250
71035dd89c  stp x14,x15,[x13, #0x180]
71035dd8a0  sub x14,x11,#0x260
71035dd8a4  sub x15,x11,#0x258
71035dd8a8  sub x17,x11,#0x248
71035dd8ac  ldr x14,[x14]
71035dd8b0  ldr x15,[x15]
71035dd8b4  ldr x16,[x16]
71035dd8b8  ldr x17,[x17]
71035dd8bc  stp x16,x17,[x13, #0x1b0]
71035dd8c0  sub x16,x11,#0x230
71035dd8c4  stp x14,x15,[x13, #0x1a0]
71035dd8c8  sub x14,x11,#0x240
71035dd8cc  sub x15,x11,#0x238
71035dd8d0  sub x17,x11,#0x228
71035dd8d4  ldr x14,[x14]
71035dd8d8  ldr x15,[x15]
71035dd8dc  ldr x16,[x16]
71035dd8e0  ldr x17,[x17]
71035dd8e4  stp x16,x17,[x13, #0x1d0]
71035dd8e8  sub x16,x11,#0x210
71035dd8ec  stp x14,x15,[x13, #0x1c0]
71035dd8f0  sub x14,x11,#0x220
71035dd8f4  sub x15,x11,#0x218
71035dd8f8  sub x17,x11,#0x208
71035dd8fc  ldr x14,[x14]
71035dd900  ldr x15,[x15]
71035dd904  ldr x16,[x16]
71035dd908  ldr x17,[x17]
71035dd90c  stp x16,x17,[x13, #0x1f0]
71035dd910  sub x16,x11,#0x2f0
71035dd914  stp x14,x15,[x13, #0x1e0]
71035dd918  sub x14,x11,#0x300
71035dd91c  sub x15,x11,#0x2f8
71035dd920  sub x17,x11,#0x2e8
71035dd924  ldr x14,[x14]
71035dd928  ldr x15,[x15]
71035dd92c  ldr x16,[x16]
71035dd930  ldr x17,[x17]
71035dd934  stp x16,x17,[x13, #0x110]
71035dd938  sub x16,x11,#0x2d0
71035dd93c  stp x14,x15,[x13, #0x100]
71035dd940  sub x14,x11,#0x2e0
71035dd944  sub x15,x11,#0x2d8
71035dd948  sub x17,x11,#0x2c8
71035dd94c  ldr x14,[x14]
71035dd950  ldr x15,[x15]
71035dd954  ldr x16,[x16]
71035dd958  ldr x17,[x17]
71035dd95c  stp x16,x17,[x13, #0x130]
71035dd960  sub x16,x11,#0x2b0
71035dd964  stp x14,x15,[x13, #0x120]
71035dd968  sub x14,x11,#0x2c0
71035dd96c  sub x15,x11,#0x2b8
71035dd970  sub x17,x11,#0x2a8
71035dd974  ldr x14,[x14]
71035dd978  ldr x15,[x15]
71035dd97c  ldr x16,[x16]
71035dd980  ldr x17,[x17]
71035dd984  stp x16,x17,[x13, #0x150]
71035dd988  sub x16,x11,#0x290
71035dd98c  stp x14,x15,[x13, #0x140]
71035dd990  sub x14,x11,#0x2a0
71035dd994  sub x15,x11,#0x298
71035dd998  sub x17,x11,#0x288
71035dd99c  ldr x14,[x14]
71035dd9a0  ldr x15,[x15]
71035dd9a4  ldr x16,[x16]
71035dd9a8  ldr x17,[x17]
71035dd9ac  stp x16,x17,[x13, #0x170]
71035dd9b0  sub x16,x11,#0x370
71035dd9b4  stp x14,x15,[x13, #0x160]
71035dd9b8  sub x14,x11,#0x380
71035dd9bc  sub x15,x11,#0x378
71035dd9c0  sub x17,x11,#0x368
71035dd9c4  ldr x14,[x14]
71035dd9c8  ldr x15,[x15]
71035dd9cc  ldr x16,[x16]
71035dd9d0  ldr x17,[x17]
71035dd9d4  stp x16,x17,[x13, #0x90]
71035dd9d8  sub x16,x11,#0x350
71035dd9dc  stp x14,x15,[x13, #0x80]
71035dd9e0  sub x14,x11,#0x360
71035dd9e4  sub x15,x11,#0x358
71035dd9e8  sub x17,x11,#0x348
71035dd9ec  ldr x14,[x14]
71035dd9f0  ldr x15,[x15]
71035dd9f4  ldr x16,[x16]
71035dd9f8  ldr x17,[x17]
71035dd9fc  stp x16,x17,[x13, #0xb0]
71035dda00  sub x16,x11,#0x330
71035dda04  stp x14,x15,[x13, #0xa0]
71035dda08  sub x14,x11,#0x328
71035dda0c  ldr x0,[x0]
71035dda10  ldr x17,[x18]
71035dda14  ldr x16,[x16]
71035dda18  ldr x14,[x14]
71035dda1c  sub x15,x11,#0x320
71035dda20  sub x18,x11,#0x318
71035dda24  stp x16,x14,[x13, #0xd0]
71035dda28  sub x14,x11,#0x3d8
71035dda2c  stp x17,x0,[x13, #0xc0]
71035dda30  ldr x15,[x15]
71035dda34  ldr x18,[x18]
71035dda38  ldr x1,[x1]
71035dda3c  ldr x2,[x2]
71035dda40  sub x16,x11,#0x3d0
71035dda44  sub x17,x11,#0x3c8
71035dda48  sub x0,x11,#0x3c0
71035dda4c  sub x22,x11,#0x3b0
71035dda50  sub x23,x11,#0x3a8
71035dda54  sub x24,x11,#0x3a0
71035dda58  sub x26,x11,#0x398
71035dda5c  sub x27,x11,#0x390
71035dda60  stp x1,x2,[x13, #0xf0]
71035dda64  sub x1,x11,#0x388
71035dda68  stp x15,x18,[x13, #0xe0]
71035dda6c  sub x11,x11,#0x400
71035dda70  ldr x15,[x11]
71035dda74  ldr x18,[x3]
71035dda78  ldr x2,[x4]
71035dda7c  ldr x3,[x5]
71035dda80  stp x2,x3,[x13, #0x10]
71035dda84  stp x15,x18,[x13]
71035dda88  ldr x15,[x6]
71035dda8c  ldr x14,[x14]
71035dda90  ldr x16,[x16]
71035dda94  ldr x17,[x17]
71035dda98  stp x16,x17,[x13, #0x30]
71035dda9c  cmp x21,x11
71035ddaa0  stp x15,x14,[x13, #0x20]
71035ddaa4  ldr x14,[x0]
71035ddaa8  ldr x15,[x7]
71035ddaac  ldr x16,[x22]
71035ddab0  ldr x17,[x23]
71035ddab4  stp x16,x17,[x13, #0x50]
71035ddab8  stp x14,x15,[x13, #0x40]
71035ddabc  ldr x14,[x24]
71035ddac0  ldr x15,[x26]
71035ddac4  ldr x16,[x27]
71035ddac8  ldr x17,[x1]
71035ddacc  stp x16,x17,[x13, #0x70]
71035ddad0  stp x14,x15,[x13, #0x60]
71035ddad4  sub x13,x13,#0x400
71035ddad8  b.ne 0x71035dd610
71035ddadc  ldr x21,[x20, #0x50]
71035ddae0  add x13,x9,x12, LSL #0x7
71035ddae4  stp x13,x8,[x20, #0x50]
71035ddae8  str x10,[x20, #0x60]
71035ddaec  cbz x21,0x71035ddb10
71035ddaf0  adrp x8,0x71052a8000
71035ddaf4  ldr x8,[x8, #0xa70]
71035ddaf8  cbz x8,0x71035ddb04
71035ddafc  mov x0,x21
71035ddb00  bl 0x71039c19b0
71035ddb04  mov x0,x21
71035ddb08  bl 0x710392eb40
71035ddb0c  ldr x8,[x20, #0x58]
71035ddb10  ldr x9,[x20, #0x50]
71035ddb14  sub x8,x8,x9
71035ddb18  cmp x8,#0x1
71035ddb1c  b.lt 0x71035ddb84
71035ddb20  lsr x8,x8,#0x7
71035ddb24  add x8,x8,#0x1
71035ddb28  orr w10,wzr,#0x3f800000
71035ddb2c  orr x11,xzr,#0x3f8000003f800000
71035ddb30  sub x8,x8,#0x1
71035ddb34  str w10,[x9]
71035ddb38  stur xzr,[x9, #0xc]
71035ddb3c  stur xzr,[x9, #0x4]
71035ddb40  cmp x8,#0x1
71035ddb44  str w10,[x9, #0x14]
71035ddb48  str w10,[x9, #0x28]
71035ddb4c  stur xzr,[x9, #0x34]
71035ddb50  stur xzr,[x9, #0x2c]
71035ddb54  stur x11,[x9, #0x3c]
71035ddb58  stur xzr,[x9, #0x4c]
71035ddb5c  stur xzr,[x9, #0x44]
71035ddb60  str w10,[x9, #0x54]
71035ddb64  str w10,[x9, #0x68]
71035ddb68  stur xzr,[x9, #0x74]
71035ddb6c  stur xzr,[x9, #0x6c]
71035ddb70  str w10,[x9, #0x7c]
71035ddb74  stp xzr,xzr,[x9, #0x18]
71035ddb78  stp xzr,xzr,[x9, #0x58]
71035ddb7c  add x9,x9,#0x80
71035ddb80  b.gt 0x71035ddb30
71035ddb84  str w25,[x20, #0x10]
71035ddb88  str xzr,[sp, #0x90]
71035ddb8c  mov w2,#0xf20
71035ddb90  strb wzr,[sp, #0xd9]
71035ddb94  sub x0,x29,#0x60
71035ddb98  mov w1,#0x10
71035ddb9c  strb wzr,[sp, #0x98]
71035ddba0  str wzr,[sp, #0x88]
71035ddba4  stp xzr,xzr,[sp, #0x78]
71035ddba8  ldr w8,[x20, #0x10]
71035ddbac  str x8,[sp, #0x80]
71035ddbb0  mov w8,#0x80
71035ddbb4  str x8,[sp, #0x90]
71035ddbb8  mov w8,#0x2
71035ddbbc  str w8,[sp, #0x88]
71035ddbc0  bl 0x710392e1f0
71035ddbc4  cmp w0,#0xc
71035ddbc8  b.ne 0x71035ddc04
71035ddbcc  adrp x8,0x710593d000
71035ddbd0  ldr x0,[x8, #0x2b0]
71035ddbd4  cbz x0,0x71035ddc04
71035ddbd8  mov w8,#0xf20
71035ddbdc  str x8,[sp, #0x28]
71035ddbe0  ldr x8,[x0]
71035ddbe4  ldr x8,[x8, #0x30]
71035ddbe8  add x1,sp,#0x28
71035ddbec  blr x8
71035ddbf0  tbz w0,#0x0,0x71035ddc04
71035ddbf4  mov w2,#0xf20
71035ddbf8  sub x0,x29,#0x60
71035ddbfc  mov w1,#0x10
71035ddc00  bl 0x710392e1f0
71035ddc04  adrp x8,0x71052a8000
71035ddc08  ldr x8,[x8, #0xa78]
71035ddc0c  cbz x8,0x71035ddc20
71035ddc10  ldur x2,[x29, #-0x60]
71035ddc14  mov w0,#0xf20
71035ddc18  mov w1,#0x10
71035ddc1c  bl 0x71039c19e0
71035ddc20  ldur x21,[x29, #-0x60]
71035ddc24  mov x0,x21
71035ddc28  bl 0x71037c3a70
71035ddc2c  mov w8,#0x1
71035ddc30  str w8,[x21, #0x10]
71035ddc34  adrp x8,0x7105243000
71035ddc38  add x8,x8,#0x5b8
71035ddc3c  strb wzr,[x21, #0x14]
71035ddc40  str xzr,[x21, #0xf18]
71035ddc44  str x8,[x21]
71035ddc48  cbz x21,0x71035ddc58
71035ddc4c  ldr x8,[x21, #0x8]
71035ddc50  ldr x9,[x8]
71035ddc54  b 0x71035ddc60
71035ddc58  mov x8,xzr
71035ddc5c  mov x9,xzr
71035ddc60  ldp x0,x10,[x20, #0x20]
71035ddc64  stp x21,x8,[x20, #0x20]
71035ddc68  ldr x8,[x20, #0x30]
71035ddc6c  str x9,[x20, #0x30]
71035ddc70  cbz x10,0x71035ddc94
71035ddc74  cbz x0,0x71035ddc94
71035ddc78  ldr x9,[x10]
71035ddc7c  cmp x9,x8
71035ddc80  b.ne 0x71035ddc94
71035ddc84  ldr x8,[x0]
71035ddc88  ldr x8,[x8, #0x8]
71035ddc8c  blr x8
71035ddc90  ldr x21,[x20, #0x20]
71035ddc94  ldr x8,[x21]
71035ddc98  ldr x9,[x8, #0x10]
71035ddc9c  sub x8,x29,#0x60
71035ddca0  add x1,sp,#0x78
71035ddca4  mov x0,x21
71035ddca8  blr x9
71035ddcac  ldur w8,[x29, #-0x60]
71035ddcb0  tbnz w8,#0x1f,0x71035ddd2c
71035ddcb4  mov w8,#0x131
71035ddcb8  add x9,sp,#0x28
71035ddcbc  orr w2,wzr,#0xe
71035ddcc0  str w8,[sp, #0x28]
71035ddcc4  mov w8,#0x3e8
71035ddcc8  add x0,x9,#0x38
71035ddccc  adrp x1,0x7104497000
71035ddcd0  add x1,x1,#0x6f4
71035ddcd4  str xzr,[sp, #0x30]
71035ddcd8  stp xzr,xzr,[sp, #0x68]
71035ddcdc  stp xzr,xzr,[sp, #0x58]
71035ddce0  stp xzr,xzr,[sp, #0x48]
71035ddce4  stp x8,xzr,[sp, #0x38]
71035ddce8  bl 0x71002c51f0
71035ddcec  ldr x0,[x20, #0x20]
71035ddcf0  ldr x8,[x0]
71035ddcf4  ldr x8,[x8, #0x98]
71035ddcf8  add x1,sp,#0x28
71035ddcfc  blr x8
71035ddd00  str w0,[x20, #0xc]
71035ddd04  ldrb w8,[sp, #0x60]
71035ddd08  tbz w8,#0x0,0x71035ddd2c
71035ddd0c  adrp x8,0x71052a8000
71035ddd10  ldr x20,[sp, #0x70]
71035ddd14  ldr x8,[x8, #0xa70]
71035ddd18  cbz x8,0x71035ddd24
71035ddd1c  mov x0,x20
71035ddd20  bl 0x71039c19b0
71035ddd24  mov x0,x20
71035ddd28  bl 0x710392eb40
71035ddd2c  ldr x8,[x19, #0x480]
71035ddd30  ldr x8,[x8]
71035ddd34  ldr x8,[x8]
71035ddd38  add x9,x8,#0x78
71035ddd3c  ldr x8,[x8, #0xf8]
71035ddd40  adrp x10,0x7105337000
71035ddd44  add x10,x10,#0x370
71035ddd48  cmp x8,#0x0
71035ddd4c  csel x8,x10,x9,eq
71035ddd50  ldr x9,[x8, #0x10]
71035ddd54  cbz x9,0x71035dde04
71035ddd58  ldr x9,[x9]
71035ddd5c  ldr x10,[x8, #0x18]
71035ddd60  cmp x9,x10
71035ddd64  b.ne 0x71035dde04
71035ddd68  ldr x8,[x8, #0x8]
71035ddd6c  ldr x8,[x8, #0x28]
71035ddd70  ldp x20,x21,[x8, #0xc8]
71035ddd74  cmp x20,x21
71035ddd78  b.eq 0x71035dde04
71035ddd7c  ldr x8,[x19, #0x818]
71035ddd80  ldr x0,[x8, #0x20]
71035ddd84  ldr w1,[x8, #0xc]
71035ddd88  ldr x8,[x0]
71035ddd8c  ldr x9,[x8, #0x28]
71035ddd90  ldr x22,[x20, #0x8]
71035ddd94  add x8,sp,#0x8
71035ddd98  blr x9
71035ddd9c  ldr x8,[x22, #0x388]
71035ddda0  cbz x8,0x71035ddde8
71035ddda4  ldr x9,[sp, #0x18]
71035ddda8  cbz x9,0x71035dddd8
71035dddac  ldr x9,[x9]
71035dddb0  ldr x10,[sp, #0x20]
71035dddb4  cmp x9,x10
71035dddb8  b.ne 0x71035dddd8
71035dddbc  ldr x9,[sp, #0x10]
71035dddc0  str x9,[x8, #0x8]
71035dddc4  cbz x9,0x71035ddddc
71035dddc8  ldr x9,[x9, #0x8]
71035dddcc  str x9,[x8, #0x10]
71035dddd0  ldr x9,[x9]
71035dddd4  b 0x71035ddde4
71035dddd8  str xzr,[x8, #0x8]
71035ddddc  mov x9,xzr
71035ddde0  str xzr,[x8, #0x10]
71035ddde4  str x9,[x8, #0x18]
71035ddde8  ldr x8,[x20, #0x8]
71035dddec  ldr x8,[x8, #0x388]
71035dddf0  cbz x8,0x71035dddf8
71035dddf4  str wzr,[x8, #0x20]
71035dddf8  add x20,x20,#0x20
71035dddfc  cmp x21,x20
71035dde00  b.ne 0x71035ddd7c
71035dde04  ldr x8,[x19, #0x440]
71035dde08  cbz x8,0x71035ddf9c
71035dde0c  ldrb w8,[x8, #0x38]
71035dde10  cmp w8,#0x19
71035dde14  b.ne 0x71035ddf9c
71035dde18  ldr x22,[x19, #0x818]
71035dde1c  mov w0,#0x10
71035dde20  orr w1,wzr,#0x60
71035dde24  bl 0x710392e290
71035dde28  mov x20,x0
71035dde2c  cbnz x0,0x71035dde78
71035dde30  adrp x8,0x7105332000
71035dde34  ldr x0,[x8, #0xf00]
71035dde38  cbz x0,0x71035dde74
71035dde3c  orr w8,wzr,#0x60
71035dde40  str wzr,[sp, #0x28]
71035dde44  add x1,sp,#0x28
71035dde48  str x8,[sp, #0x78]
71035dde4c  ldr x8,[x0]
71035dde50  ldr x8,[x8, #0x30]
71035dde54  add x2,sp,#0x78
71035dde58  blr x8
71035dde5c  tbz w0,#0x0,0x71035dde74
71035dde60  mov w0,#0x10
71035dde64  orr w1,wzr,#0x60
71035dde68  bl 0x710392e290
71035dde6c  mov x20,x0
71035dde70  cbnz x0,0x71035dde78
71035dde74  mov x20,xzr
71035dde78  mov x8,x20
71035dde7c  adrp x9,0x7105238000
71035dde80  add x9,x9,#0x3d0
71035dde84  str xzr,[x8, #0x8]!
71035dde88  str x9,[x20]
71035dde8c  mov x9,x20
71035dde90  str xzr,[x20, #0x10]
71035dde94  str xzr,[x9, #0x20]!
71035dde98  stp xzr,xzr,[x20, #0x50]
71035dde9c  str xzr,[x20, #0x28]
71035ddea0  stp xzr,xzr,[x20, #0x40]
71035ddea4  stp xzr,xzr,[x20, #0x30]
71035ddea8  cbz x20,0x71035ddebc
71035ddeac  ldxr x10,[x8]
71035ddeb0  add x10,x10,#0x1
71035ddeb4  stxr w11,x10,[x8]
71035ddeb8  cbnz w11,0x71035ddeac
71035ddebc  ldr x21,[x22, #0x70]
71035ddec0  stp x9,x20,[x22, #0x68]
71035ddec4  cbz x21,0x71035ddef8
71035ddec8  add x8,x21,#0x8
71035ddecc  ldaxr x9,[x8]
71035dded0  sub x10,x9,#0x1
71035dded4  stlxr w11,x10,[x8]
71035dded8  cbnz w11,0x71035ddecc
71035ddedc  cbnz x9,0x71035ddef8
71035ddee0  ldr x8,[x21]
71035ddee4  ldr x8,[x8, #0x10]
71035ddee8  mov x0,x21
71035ddeec  blr x8
71035ddef0  mov x0,x21
71035ddef4  bl 0x71039c2670
71035ddef8  cbz x20,0x71035ddf2c
71035ddefc  add x8,x20,#0x8
71035ddf00  ldaxr x9,[x8]
71035ddf04  sub x10,x9,#0x1
71035ddf08  stlxr w11,x10,[x8]
71035ddf0c  cbnz w11,0x71035ddf00
71035ddf10  cbnz x9,0x71035ddf2c
71035ddf14  ldr x8,[x20]
71035ddf18  ldr x8,[x8, #0x10]
71035ddf1c  mov x0,x20
71035ddf20  blr x8
71035ddf24  mov x0,x20
71035ddf28  bl 0x71039c2670
71035ddf2c  adrp x8,0x7105338000
71035ddf30  ldr x0,[x8, #0xe40]
71035ddf34  ldr x8,[x19, #0x818]
71035ddf38  ldp x9,x19,[x8, #0x68]
71035ddf3c  stp x9,x19,[sp, #0x78]
71035ddf40  cbz x19,0x71035ddf94
71035ddf44  add x8,x19,#0x8
71035ddf48  ldxr x9,[x8]
71035ddf4c  add x9,x9,#0x1
71035ddf50  stxr w10,x9,[x8]
71035ddf54  cbnz w10,0x71035ddf48
71035ddf58  add x1,sp,#0x78
71035ddf5c  bl 0x7103636bd0
71035ddf60  add x8,x19,#0x8
71035ddf64  ldaxr x9,[x8]
71035ddf68  sub x10,x9,#0x1
71035ddf6c  stlxr w11,x10,[x8]
71035ddf70  cbnz w11,0x71035ddf64
71035ddf74  cbnz x9,0x71035ddf9c
71035ddf78  ldr x8,[x19]
71035ddf7c  ldr x8,[x8, #0x10]
71035ddf80  mov x0,x19
71035ddf84  blr x8
71035ddf88  mov x0,x19
71035ddf8c  bl 0x71039c2670
71035ddf90  b 0x71035ddf9c
71035ddf94  add x1,sp,#0x78
71035ddf98  bl 0x7103636bd0
71035ddf9c  ldp x29,x30,[sp, #0x140]
71035ddfa0  ldp x20,x19,[sp, #0x130]
71035ddfa4  ldp x22,x21,[sp, #0x120]
71035ddfa8  ldp x24,x23,[sp, #0x110]
71035ddfac  ldp x26,x25,[sp, #0x100]
71035ddfb0  ldp x28,x27,[sp, #0xf0]
71035ddfb4  add sp,sp,#0x150
71035ddfb8  ret
