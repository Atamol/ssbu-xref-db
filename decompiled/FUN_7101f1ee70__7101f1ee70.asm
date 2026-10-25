// addr:      7101f1ee70
// offset:    0x1f1ee70
// name:      FUN_7101f1ee70
// mangled:   
// size:      12796

7101f1ee70  sub sp,sp,#0x1d0
7101f1ee74  str d12,[sp, #0x140]
7101f1ee78  stp d11,d10,[sp, #0x150]
7101f1ee7c  stp d9,d8,[sp, #0x160]
7101f1ee80  stp x28,x27,[sp, #0x170]
7101f1ee84  stp x26,x25,[sp, #0x180]
7101f1ee88  stp x24,x23,[sp, #0x190]
7101f1ee8c  stp x22,x21,[sp, #0x1a0]
7101f1ee90  stp x20,x19,[sp, #0x1b0]
7101f1ee94  stp x29,x30,[sp, #0x1c0]
7101f1ee98  add x29,sp,#0x1c0
7101f1ee9c  ldr x8,[x0, #0x360]
7101f1eea0  mov x27,x0
7101f1eea4  add x28,x0,#0x3f8
7101f1eea8  add x25,x0,#0x410
7101f1eeac  add x20,x0,#0x440
7101f1eeb0  ldr x0,[x0, #0x340]
7101f1eeb4  mov x1,x28
7101f1eeb8  mov x2,x25
7101f1eebc  mov x3,x20
7101f1eec0  ldr w4,[x8, #0x17c]
7101f1eec4  bl 0x7101f3a040
7101f1eec8  ldrsw x8,[x27, #0x2a4]
7101f1eecc  cmp w8,#0x13
7101f1eed0  b.cs 0x7101f22044
7101f1eed4  add x8,x27,x8, LSL #0x2
7101f1eed8  ldr w8,[x8, #0x258]
7101f1eedc  ldr w9,[x27, #0x2a8]
7101f1eee0  cmp w9,w8
7101f1eee4  b.eq 0x7101f1ef34
7101f1eee8  cmp w8,#0x23
7101f1eeec  str w9,[x27, #0x2b0]
7101f1eef0  str w8,[x27, #0x2a8]
7101f1eef4  b.cs 0x7101f22044
7101f1eef8  sxtw x8,w8
7101f1eefc  add x8,x27,x8, LSL #0x4
7101f1ef00  ldp x9,x8,[x8, #0x28]
7101f1ef04  stp x9,x8,[x27, #0x8]
7101f1ef08  ldp x8,x10,[x27, #0x18]
7101f1ef0c  and x9,x10,#0x1
7101f1ef10  orr x11,x9,x8
7101f1ef14  cbz x11,0x7101f1ef30
7101f1ef18  ldr x11,[x27]
7101f1ef1c  add x0,x11,x10, ASR #0x1
7101f1ef20  cbz x9,0x7101f1ef2c
7101f1ef24  ldr x9,[x0]
7101f1ef28  ldr x8,[x9, x8, LSL #0x0]
7101f1ef2c  blr x8
7101f1ef30  str wzr,[x27, #0x2ac]
7101f1ef34  ldrb w8,[x27, #0x2b4]
7101f1ef38  cbz w8,0x7101f1ef6c
7101f1ef3c  ldp x8,x10,[x27, #0x18]
7101f1ef40  and x9,x10,#0x1
7101f1ef44  orr x11,x9,x8
7101f1ef48  cbz x11,0x7101f1ef64
7101f1ef4c  ldr x11,[x27]
7101f1ef50  add x0,x11,x10, ASR #0x1
7101f1ef54  cbz x9,0x7101f1ef60
7101f1ef58  ldr x9,[x0]
7101f1ef5c  ldr x8,[x9, x8, LSL #0x0]
7101f1ef60  blr x8
7101f1ef64  str wzr,[x27, #0x2ac]
7101f1ef68  strb wzr,[x27, #0x2b4]
7101f1ef6c  ldr x9,[x27]
7101f1ef70  cbz x9,0x7101f1ef98
7101f1ef74  ldp x8,x11,[x27, #0x8]
7101f1ef78  and x10,x11,#0x1
7101f1ef7c  orr x12,x10,x8
7101f1ef80  cbz x12,0x7101f1ef98
7101f1ef84  add x0,x9,x11, ASR #0x1
7101f1ef88  cbz x10,0x7101f1ef94
7101f1ef8c  ldr x9,[x0]
7101f1ef90  ldr x8,[x9, x8, LSL #0x0]
7101f1ef94  blr x8
7101f1ef98  ldr w8,[x27, #0x2ac]
7101f1ef9c  ldr w19,[x27, #0x328]
7101f1efa0  str x20,[sp, #0x48]
7101f1efa4  add w8,w8,#0x1
7101f1efa8  str w8,[x27, #0x2ac]
7101f1efac  str x25,[sp, #0x30]
7101f1efb0  cbz w19,0x7101f1f064
7101f1efb4  ldr x8,[x27, #0x350]
7101f1efb8  ldr x8,[x8]
7101f1efbc  ldr x0,[x8]
7101f1efc0  bl 0x7103775fa0
7101f1efc4  cmp w19,#0x13
7101f1efc8  b.ne 0x7101f1f0a0
7101f1efcc  ldr x8,[x27, #0x360]
7101f1efd0  ldr x8,[x8]
7101f1efd4  ldr x0,[x8]
7101f1efd8  bl 0x7103775fa0
7101f1efdc  ldr x8,[x27, #0x370]
7101f1efe0  ldr x8,[x8, #0xd0]
7101f1efe4  ldr x0,[x8]
7101f1efe8  bl 0x7103775fa0
7101f1efec  ldr x8,[x27, #0x380]
7101f1eff0  ldr x8,[x8, #0xe8]
7101f1eff4  ldr x0,[x8]
7101f1eff8  bl 0x7103775fa0
7101f1effc  ldr x8,[x27, #0x390]
7101f1f000  ldr x8,[x8, #0x178]
7101f1f004  ldr x0,[x8]
7101f1f008  bl 0x7103775fa0
7101f1f00c  ldr x8,[x27, #0x3a0]
7101f1f010  ldr x8,[x8, #0xb8]
7101f1f014  ldr x0,[x8]
7101f1f018  bl 0x7103775fa0
7101f1f01c  adrp x21,0x7105326000
7101f1f020  add x21,x21,#0x3d8
7101f1f024  ldp x8,x9,[x21]
7101f1f028  sub x9,x9,x8
7101f1f02c  asr x9,x9,#0x2
7101f1f030  cmp x9,#0x6
7101f1f034  b.ls 0x7101f22048
7101f1f038  ldr w9,[x8, #0x18]
7101f1f03c  ldr x8,[x27, #0x3b0]
7101f1f040  mov w20,#0xfff7
7101f1f044  movk w20,#0x4f, LSL #16
7101f1f048  add w10,w20,#0x2
7101f1f04c  ldr x8,[x8]
7101f1f050  add w2,w9,#0x6
7101f1f054  cmp w9,w10
7101f1f058  b.le 0x7101f1f10c
7101f1f05c  mov w1,#0x9
7101f1f060  b 0x7101f1f364
7101f1f064  adrp x9,0x7105326000
7101f1f068  add x9,x9,#0x3d8
7101f1f06c  ldp x8,x9,[x9]
7101f1f070  cmp x9,x8
7101f1f074  b.eq 0x7101f22048
7101f1f078  ldr w2,[x8]
7101f1f07c  ldr x8,[x27, #0x350]
7101f1f080  mov w9,#0xfff7
7101f1f084  movk w9,#0x4f, LSL #16
7101f1f088  add w9,w9,#0x8
7101f1f08c  ldr x8,[x8]
7101f1f090  cmp w2,w9
7101f1f094  b.le 0x7101f1f0f0
7101f1f098  mov w1,#0x9
7101f1f09c  b 0x7101f1f2fc
7101f1f0a0  adrp x22,0x7105326000
7101f1f0a4  add x22,x22,#0x3d8
7101f1f0a8  ldp x8,x9,[x22]
7101f1f0ac  sub x9,x9,x8
7101f1f0b0  asr x9,x9,#0x2
7101f1f0b4  cmp x9,#0x1
7101f1f0b8  b.ls 0x7101f22048
7101f1f0bc  ldr w9,[x8, #0x4]
7101f1f0c0  ldr x8,[x27, #0x360]
7101f1f0c4  mov w21,#0xfff7
7101f1f0c8  movk w21,#0x4f, LSL #16
7101f1f0cc  add w10,w21,#0x7
7101f1f0d0  mov w20,#0xfff8
7101f1f0d4  movk w20,#0x24, LSL #16
7101f1f0d8  ldr x8,[x8]
7101f1f0dc  add w2,w9,#0x1
7101f1f0e0  cmp w9,w10
7101f1f0e4  b.le 0x7101f1f128
7101f1f0e8  mov w1,#0x9
7101f1f0ec  b 0x7101f1f44c
7101f1f0f0  mov w9,#0xfff8
7101f1f0f4  movk w9,#0x24, LSL #16
7101f1f0f8  add w9,w9,#0x7
7101f1f0fc  cmp w2,w9
7101f1f100  b.le 0x7101f1f13c
7101f1f104  orr w1,wzr,#0x7
7101f1f108  b 0x7101f1f2fc
7101f1f10c  mov w10,#0xfff8
7101f1f110  movk w10,#0x24, LSL #16
7101f1f114  add w10,w10,#0x1
7101f1f118  cmp w9,w10
7101f1f11c  b.le 0x7101f1f14c
7101f1f120  orr w1,wzr,#0x7
7101f1f124  b 0x7101f1f364
7101f1f128  add w10,w20,#0x6
7101f1f12c  cmp w9,w10
7101f1f130  b.le 0x7101f1f168
7101f1f134  orr w1,wzr,#0x7
7101f1f138  b 0x7101f1f44c
7101f1f13c  cmp w2,#0x200, LSL #12
7101f1f140  b.lt 0x7101f1f17c
7101f1f144  mov w1,#0x5
7101f1f148  b 0x7101f1f2fc
7101f1f14c  mov w10,#0xfff7
7101f1f150  movk w10,#0x1f, LSL #16
7101f1f154  add w10,w10,#0x2
7101f1f158  cmp w9,w10
7101f1f15c  b.le 0x7101f1f198
7101f1f160  mov w1,#0x5
7101f1f164  b 0x7101f1f364
7101f1f168  orr w10,wzr,#0x1ffffe
7101f1f16c  cmp w9,w10
7101f1f170  b.le 0x7101f1f1b4
7101f1f174  mov w1,#0x5
7101f1f178  b 0x7101f1f44c
7101f1f17c  mov w9,#0xfff8
7101f1f180  movk w9,#0x14, LSL #16
7101f1f184  add w9,w9,#0x7
7101f1f188  cmp w2,w9
7101f1f18c  b.le 0x7101f1f1d0
7101f1f190  orr w1,wzr,#0x6
7101f1f194  b 0x7101f1f2fc
7101f1f198  mov w10,#0xfff8
7101f1f19c  movk w10,#0x14, LSL #16
7101f1f1a0  add w10,w10,#0x1
7101f1f1a4  cmp w9,w10
7101f1f1a8  b.le 0x7101f1f1e0
7101f1f1ac  orr w1,wzr,#0x6
7101f1f1b0  b 0x7101f1f364
7101f1f1b4  mov w10,#0xfff8
7101f1f1b8  movk w10,#0x14, LSL #16
7101f1f1bc  add w10,w10,#0x6
7101f1f1c0  cmp w9,w10
7101f1f1c4  b.le 0x7101f1f1fc
7101f1f1c8  orr w1,wzr,#0x6
7101f1f1cc  b 0x7101f1f44c
7101f1f1d0  cmp w2,#0x100, LSL #12
7101f1f1d4  b.lt 0x7101f1f210
7101f1f1d8  mov w1,#0x4
7101f1f1dc  b 0x7101f1f2fc
7101f1f1e0  mov w10,#0xfff7
7101f1f1e4  movk w10,#0xf, LSL #16
7101f1f1e8  add w10,w10,#0x2
7101f1f1ec  cmp w9,w10
7101f1f1f0  b.le 0x7101f1f22c
7101f1f1f4  mov w1,#0x4
7101f1f1f8  b 0x7101f1f364
7101f1f1fc  orr w10,wzr,#0xffffe
7101f1f200  cmp w9,w10
7101f1f204  b.le 0x7101f1f248
7101f1f208  mov w1,#0x4
7101f1f20c  b 0x7101f1f44c
7101f1f210  mov w9,#0xdff8
7101f1f214  movk w9,#0xf, LSL #16
7101f1f218  add w9,w9,#0x7
7101f1f21c  cmp w2,w9
7101f1f220  b.le 0x7101f1f264
7101f1f224  mov w1,#0x8
7101f1f228  b 0x7101f1f2fc
7101f1f22c  mov w10,#0xdff8
7101f1f230  movk w10,#0xf, LSL #16
7101f1f234  add w10,w10,#0x1
7101f1f238  cmp w9,w10
7101f1f23c  b.le 0x7101f1f280
7101f1f240  mov w1,#0x8
7101f1f244  b 0x7101f1f364
7101f1f248  mov w10,#0xdff8
7101f1f24c  movk w10,#0xf, LSL #16
7101f1f250  add w10,w10,#0x6
7101f1f254  cmp w9,w10
7101f1f258  b.le 0x7101f1f29c
7101f1f25c  mov w1,#0x8
7101f1f260  b 0x7101f1f44c
7101f1f264  mov w9,#0xfff7
7101f1f268  movk w9,#0x4, LSL #16
7101f1f26c  add w9,w9,#0x8
7101f1f270  cmp w2,w9
7101f1f274  b.le 0x7101f1f2b8
7101f1f278  mov w1,#0x2
7101f1f27c  b 0x7101f1f2fc
7101f1f280  mov w10,#0xfff7
7101f1f284  movk w10,#0x4, LSL #16
7101f1f288  add w10,w10,#0x2
7101f1f28c  cmp w9,w10
7101f1f290  b.le 0x7101f1f2c8
7101f1f294  mov w1,#0x2
7101f1f298  b 0x7101f1f364
7101f1f29c  mov w10,#0xfff7
7101f1f2a0  movk w10,#0x4, LSL #16
7101f1f2a4  add w10,w10,#0x7
7101f1f2a8  cmp w9,w10
7101f1f2ac  b.le 0x7101f1f2dc
7101f1f2b0  mov w1,#0x2
7101f1f2b4  b 0x7101f1f44c
7101f1f2b8  cmp w2,#0x10, LSL #12
7101f1f2bc  b.lt 0x7101f1f2f0
7101f1f2c0  mov w1,#0x1
7101f1f2c4  b 0x7101f1f2fc
7101f1f2c8  mov w10,#0xfff9
7101f1f2cc  cmp w9,w10
7101f1f2d0  b.le 0x7101f1f358
7101f1f2d4  mov w1,#0x1
7101f1f2d8  b 0x7101f1f364
7101f1f2dc  orr w10,wzr,#0xfffe
7101f1f2e0  cmp w9,w10
7101f1f2e4  b.le 0x7101f1f444
7101f1f2e8  mov w1,#0x1
7101f1f2ec  b 0x7101f1f44c
7101f1f2f0  cmp w2,#0x1
7101f1f2f4  orr w9,wzr,#0x3
7101f1f2f8  csel w1,w9,wzr,lt
7101f1f2fc  ldr x0,[x8]
7101f1f300  bl 0x7103775dc0
7101f1f304  ldr x8,[x27, #0x360]
7101f1f308  ldr x8,[x8]
7101f1f30c  ldr x0,[x8]
7101f1f310  bl 0x7103775fa0
7101f1f314  ldr x8,[x27, #0x370]
7101f1f318  ldr x8,[x8, #0xd0]
7101f1f31c  ldr x0,[x8]
7101f1f320  bl 0x7103775fa0
7101f1f324  ldr x8,[x27, #0x380]
7101f1f328  ldr x8,[x8, #0xe8]
7101f1f32c  ldr x0,[x8]
7101f1f330  bl 0x7103775fa0
7101f1f334  ldr x8,[x27, #0x390]
7101f1f338  ldr x8,[x8, #0x178]
7101f1f33c  ldr x0,[x8]
7101f1f340  bl 0x7103775fa0
7101f1f344  ldr x8,[x27, #0x3a0]
7101f1f348  ldr x8,[x8, #0xb8]
7101f1f34c  ldr x0,[x8]
7101f1f350  bl 0x7103775fa0
7101f1f354  b 0x7101f1f958
7101f1f358  cmn w9,#0x5
7101f1f35c  orr w9,wzr,#0x3
7101f1f360  csel w1,w9,wzr,lt
7101f1f364  ldr x0,[x8]
7101f1f368  bl 0x7103775dc0
7101f1f36c  ldp x8,x9,[x21]
7101f1f370  sub x9,x9,x8
7101f1f374  asr x9,x9,#0x2
7101f1f378  cmp x9,#0x7
7101f1f37c  b.ls 0x7101f22048
7101f1f380  ldr w9,[x8, #0x1c]
7101f1f384  ldr x8,[x27, #0x3c0]
7101f1f388  add w10,w20,#0x1
7101f1f38c  ldr x8,[x8]
7101f1f390  add w2,w9,#0x7
7101f1f394  cmp w9,w10
7101f1f398  b.le 0x7101f1f3a4
7101f1f39c  mov w1,#0x9
7101f1f3a0  b 0x7101f1f55c
7101f1f3a4  mov w10,#0xfff8
7101f1f3a8  movk w10,#0x24, LSL #16
7101f1f3ac  cmp w9,w10
7101f1f3b0  b.le 0x7101f1f3bc
7101f1f3b4  orr w1,wzr,#0x7
7101f1f3b8  b 0x7101f1f55c
7101f1f3bc  orr w10,wzr,#0x1ffff8
7101f1f3c0  cmp w9,w10
7101f1f3c4  b.le 0x7101f1f3d0
7101f1f3c8  mov w1,#0x5
7101f1f3cc  b 0x7101f1f55c
7101f1f3d0  mov w10,#0xfff8
7101f1f3d4  movk w10,#0x14, LSL #16
7101f1f3d8  cmp w9,w10
7101f1f3dc  b.le 0x7101f1f3e8
7101f1f3e0  orr w1,wzr,#0x6
7101f1f3e4  b 0x7101f1f55c
7101f1f3e8  orr w10,wzr,#0xffff8
7101f1f3ec  cmp w9,w10
7101f1f3f0  b.le 0x7101f1f3fc
7101f1f3f4  mov w1,#0x4
7101f1f3f8  b 0x7101f1f55c
7101f1f3fc  mov w10,#0xdff8
7101f1f400  movk w10,#0xf, LSL #16
7101f1f404  cmp w9,w10
7101f1f408  b.le 0x7101f1f414
7101f1f40c  mov w1,#0x8
7101f1f410  b 0x7101f1f55c
7101f1f414  mov w10,#0xfff7
7101f1f418  movk w10,#0x4, LSL #16
7101f1f41c  add w10,w10,#0x1
7101f1f420  cmp w9,w10
7101f1f424  b.le 0x7101f1f430
7101f1f428  mov w1,#0x2
7101f1f42c  b 0x7101f1f55c
7101f1f430  orr w10,wzr,#0xfff8
7101f1f434  cmp w9,w10
7101f1f438  b.le 0x7101f1f550
7101f1f43c  mov w1,#0x1
7101f1f440  b 0x7101f1f55c
7101f1f444  asr w9,w9,#0x1f
7101f1f448  and w1,w9,#0x3
7101f1f44c  ldr x0,[x8]
7101f1f450  bl 0x7103775dc0
7101f1f454  ldp x8,x9,[x22]
7101f1f458  sub x9,x9,x8
7101f1f45c  asr x9,x9,#0x2
7101f1f460  cmp x9,#0x2
7101f1f464  b.ls 0x7101f22048
7101f1f468  cmp x9,#0xa
7101f1f46c  b.ls 0x7101f22048
7101f1f470  ldr w9,[x8, #0x8]
7101f1f474  ldr w8,[x8, #0x28]
7101f1f478  add w23,w8,#0xa
7101f1f47c  ldr x24,[x27, #0x370]
7101f1f480  ldr x8,[x24, #0xd0]
7101f1f484  add w10,w21,#0x6
7101f1f488  add w2,w9,#0x2
7101f1f48c  cmp w9,w10
7101f1f490  b.le 0x7101f1f49c
7101f1f494  mov w1,#0x9
7101f1f498  b 0x7101f1f63c
7101f1f49c  add w10,w20,#0x5
7101f1f4a0  cmp w9,w10
7101f1f4a4  b.le 0x7101f1f4b0
7101f1f4a8  orr w1,wzr,#0x7
7101f1f4ac  b 0x7101f1f63c
7101f1f4b0  mov w10,#0xfff7
7101f1f4b4  movk w10,#0x1f, LSL #16
7101f1f4b8  add w10,w10,#0x6
7101f1f4bc  cmp w9,w10
7101f1f4c0  b.le 0x7101f1f4cc
7101f1f4c4  mov w1,#0x5
7101f1f4c8  b 0x7101f1f63c
7101f1f4cc  mov w10,#0xfff8
7101f1f4d0  movk w10,#0x14, LSL #16
7101f1f4d4  add w10,w10,#0x5
7101f1f4d8  cmp w9,w10
7101f1f4dc  b.le 0x7101f1f4e8
7101f1f4e0  orr w1,wzr,#0x6
7101f1f4e4  b 0x7101f1f63c
7101f1f4e8  mov w10,#0xfff7
7101f1f4ec  movk w10,#0xf, LSL #16
7101f1f4f0  add w10,w10,#0x6
7101f1f4f4  cmp w9,w10
7101f1f4f8  b.le 0x7101f1f504
7101f1f4fc  mov w1,#0x4
7101f1f500  b 0x7101f1f63c
7101f1f504  mov w10,#0xdff8
7101f1f508  movk w10,#0xf, LSL #16
7101f1f50c  add w10,w10,#0x5
7101f1f510  cmp w9,w10
7101f1f514  b.le 0x7101f1f520
7101f1f518  mov w1,#0x8
7101f1f51c  b 0x7101f1f63c
7101f1f520  mov w10,#0xfff7
7101f1f524  movk w10,#0x4, LSL #16
7101f1f528  add w10,w10,#0x6
7101f1f52c  cmp w9,w10
7101f1f530  b.le 0x7101f1f53c
7101f1f534  mov w1,#0x2
7101f1f538  b 0x7101f1f63c
7101f1f53c  mov w10,#0xfffd
7101f1f540  cmp w9,w10
7101f1f544  b.le 0x7101f1f630
7101f1f548  mov w1,#0x1
7101f1f54c  b 0x7101f1f63c
7101f1f550  cmn w9,#0x6
7101f1f554  orr w9,wzr,#0x3
7101f1f558  csel w1,w9,wzr,lt
7101f1f55c  ldr x0,[x8]
7101f1f560  bl 0x7103775dc0
7101f1f564  ldp x8,x9,[x21]
7101f1f568  sub x9,x9,x8
7101f1f56c  asr x9,x9,#0x2
7101f1f570  cmp x9,#0x8
7101f1f574  b.ls 0x7101f22048
7101f1f578  ldr w9,[x8, #0x20]
7101f1f57c  ldr x8,[x27, #0x3d0]
7101f1f580  add w2,w9,#0x8
7101f1f584  ldr x8,[x8]
7101f1f588  cmp w9,w20
7101f1f58c  b.le 0x7101f1f598
7101f1f590  mov w1,#0x9
7101f1f594  b 0x7101f1f738
7101f1f598  mov w10,#0xfff7
7101f1f59c  movk w10,#0x1f, LSL #16
7101f1f5a0  add w11,w10,#0x50, LSL #12
7101f1f5a4  cmp w9,w11
7101f1f5a8  b.le 0x7101f1f5b4
7101f1f5ac  orr w1,wzr,#0x7
7101f1f5b0  b 0x7101f1f738
7101f1f5b4  cmp w9,w10
7101f1f5b8  b.le 0x7101f1f5c4
7101f1f5bc  mov w1,#0x5
7101f1f5c0  b 0x7101f1f738
7101f1f5c4  mov w10,#0xfff7
7101f1f5c8  movk w10,#0xf, LSL #16
7101f1f5cc  add w11,w10,#0x50, LSL #12
7101f1f5d0  cmp w9,w11
7101f1f5d4  b.le 0x7101f1f5e0
7101f1f5d8  orr w1,wzr,#0x6
7101f1f5dc  b 0x7101f1f738
7101f1f5e0  cmp w9,w10
7101f1f5e4  b.le 0x7101f1f5f0
7101f1f5e8  mov w1,#0x4
7101f1f5ec  b 0x7101f1f738
7101f1f5f0  mov w10,#0xfff7
7101f1f5f4  movk w10,#0x4, LSL #16
7101f1f5f8  add w11,w10,#0xae, LSL #12
7101f1f5fc  cmp w9,w11
7101f1f600  b.le 0x7101f1f60c
7101f1f604  mov w1,#0x8
7101f1f608  b 0x7101f1f738
7101f1f60c  cmp w9,w10
7101f1f610  b.le 0x7101f1f61c
7101f1f614  mov w1,#0x2
7101f1f618  b 0x7101f1f738
7101f1f61c  mov w10,#0xfff7
7101f1f620  cmp w9,w10
7101f1f624  b.le 0x7101f1f72c
7101f1f628  mov w1,#0x1
7101f1f62c  b 0x7101f1f738
7101f1f630  cmn w9,#0x1
7101f1f634  orr w9,wzr,#0x3
7101f1f638  csel w1,w9,wzr,lt
7101f1f63c  ldr x0,[x8]
7101f1f640  bl 0x7103775dc0
7101f1f644  mov w8,#0xe1f0
7101f1f648  movk w8,#0x2, LSL #16
7101f1f64c  str w23,[x24, x8, LSL #0x0]
7101f1f650  ldp x8,x9,[x22]
7101f1f654  sub x9,x9,x8
7101f1f658  asr x9,x9,#0x2
7101f1f65c  cmp x9,#0x3
7101f1f660  b.ls 0x7101f22048
7101f1f664  ldr w9,[x8, #0xc]
7101f1f668  ldr x8,[x27, #0x380]
7101f1f66c  add w10,w21,#0x5
7101f1f670  ldr x8,[x8, #0xe8]
7101f1f674  add w2,w9,#0x3
7101f1f678  cmp w9,w10
7101f1f67c  b.le 0x7101f1f688
7101f1f680  mov w1,#0x9
7101f1f684  b 0x7101f1f750
7101f1f688  add w10,w20,#0x4
7101f1f68c  cmp w9,w10
7101f1f690  b.le 0x7101f1f69c
7101f1f694  orr w1,wzr,#0x7
7101f1f698  b 0x7101f1f750
7101f1f69c  orr w10,wzr,#0x1ffffc
7101f1f6a0  cmp w9,w10
7101f1f6a4  b.le 0x7101f1f6b0
7101f1f6a8  mov w1,#0x5
7101f1f6ac  b 0x7101f1f750
7101f1f6b0  mov w10,#0xfff8
7101f1f6b4  movk w10,#0x14, LSL #16
7101f1f6b8  add w10,w10,#0x4
7101f1f6bc  cmp w9,w10
7101f1f6c0  b.le 0x7101f1f6cc
7101f1f6c4  orr w1,wzr,#0x6
7101f1f6c8  b 0x7101f1f750
7101f1f6cc  orr w10,wzr,#0xffffc
7101f1f6d0  cmp w9,w10
7101f1f6d4  b.le 0x7101f1f6e0
7101f1f6d8  mov w1,#0x4
7101f1f6dc  b 0x7101f1f750
7101f1f6e0  mov w10,#0xdff8
7101f1f6e4  movk w10,#0xf, LSL #16
7101f1f6e8  add w10,w10,#0x4
7101f1f6ec  cmp w9,w10
7101f1f6f0  b.le 0x7101f1f6fc
7101f1f6f4  mov w1,#0x8
7101f1f6f8  b 0x7101f1f750
7101f1f6fc  mov w10,#0xfff7
7101f1f700  movk w10,#0x4, LSL #16
7101f1f704  add w10,w10,#0x5
7101f1f708  cmp w9,w10
7101f1f70c  b.le 0x7101f1f718
7101f1f710  mov w1,#0x2
7101f1f714  b 0x7101f1f750
7101f1f718  orr w10,wzr,#0xfffc
7101f1f71c  cmp w9,w10
7101f1f720  b.le 0x7101f1f744
7101f1f724  mov w1,#0x1
7101f1f728  b 0x7101f1f750
7101f1f72c  cmn w9,#0x7
7101f1f730  orr w9,wzr,#0x3
7101f1f734  csel w1,w9,wzr,lt
7101f1f738  ldr x0,[x8]
7101f1f73c  bl 0x7103775dc0
7101f1f740  b 0x7101f1f988
7101f1f744  cmn w9,#0x2
7101f1f748  orr w9,wzr,#0x3
7101f1f74c  csel w1,w9,wzr,lt
7101f1f750  ldr x0,[x8]
7101f1f754  bl 0x7103775dc0
7101f1f758  ldp x8,x9,[x22]
7101f1f75c  sub x9,x9,x8
7101f1f760  asr x9,x9,#0x2
7101f1f764  cmp x9,#0x4
7101f1f768  b.ls 0x7101f22048
7101f1f76c  ldr w9,[x8, #0x10]
7101f1f770  ldr x8,[x27, #0x390]
7101f1f774  add w10,w21,#0x4
7101f1f778  ldr x8,[x8, #0x178]
7101f1f77c  add w2,w9,#0x4
7101f1f780  cmp w9,w10
7101f1f784  b.le 0x7101f1f790
7101f1f788  mov w1,#0x9
7101f1f78c  b 0x7101f1f850
7101f1f790  add w10,w20,#0x3
7101f1f794  cmp w9,w10
7101f1f798  b.le 0x7101f1f7a4
7101f1f79c  orr w1,wzr,#0x7
7101f1f7a0  b 0x7101f1f850
7101f1f7a4  mov w10,#0xfff7
7101f1f7a8  movk w10,#0x1f, LSL #16
7101f1f7ac  add w10,w10,#0x4
7101f1f7b0  cmp w9,w10
7101f1f7b4  b.le 0x7101f1f7c0
7101f1f7b8  mov w1,#0x5
7101f1f7bc  b 0x7101f1f850
7101f1f7c0  mov w10,#0xfff8
7101f1f7c4  movk w10,#0x14, LSL #16
7101f1f7c8  add w10,w10,#0x3
7101f1f7cc  cmp w9,w10
7101f1f7d0  b.le 0x7101f1f7dc
7101f1f7d4  orr w1,wzr,#0x6
7101f1f7d8  b 0x7101f1f850
7101f1f7dc  mov w10,#0xfff7
7101f1f7e0  movk w10,#0xf, LSL #16
7101f1f7e4  add w10,w10,#0x4
7101f1f7e8  cmp w9,w10
7101f1f7ec  b.le 0x7101f1f7f8
7101f1f7f0  mov w1,#0x4
7101f1f7f4  b 0x7101f1f850
7101f1f7f8  mov w10,#0xdff8
7101f1f7fc  movk w10,#0xf, LSL #16
7101f1f800  add w10,w10,#0x3
7101f1f804  cmp w9,w10
7101f1f808  b.le 0x7101f1f814
7101f1f80c  mov w1,#0x8
7101f1f810  b 0x7101f1f850
7101f1f814  mov w10,#0xfff7
7101f1f818  movk w10,#0x4, LSL #16
7101f1f81c  add w10,w10,#0x4
7101f1f820  cmp w9,w10
7101f1f824  b.le 0x7101f1f830
7101f1f828  mov w1,#0x2
7101f1f82c  b 0x7101f1f850
7101f1f830  mov w10,#0xfffb
7101f1f834  cmp w9,w10
7101f1f838  b.le 0x7101f1f844
7101f1f83c  mov w1,#0x1
7101f1f840  b 0x7101f1f850
7101f1f844  cmn w9,#0x3
7101f1f848  orr w9,wzr,#0x3
7101f1f84c  csel w1,w9,wzr,lt
7101f1f850  ldr x0,[x8]
7101f1f854  bl 0x7103775dc0
7101f1f858  ldp x8,x9,[x22]
7101f1f85c  sub x9,x9,x8
7101f1f860  asr x9,x9,#0x2
7101f1f864  cmp x9,#0x5
7101f1f868  b.ls 0x7101f22048
7101f1f86c  ldr w9,[x8, #0x14]
7101f1f870  ldr x8,[x27, #0x3a0]
7101f1f874  add w10,w21,#0x3
7101f1f878  ldr x8,[x8, #0xb8]
7101f1f87c  add w2,w9,#0x5
7101f1f880  cmp w9,w10
7101f1f884  b.le 0x7101f1f890
7101f1f888  mov w1,#0x9
7101f1f88c  b 0x7101f1f950
7101f1f890  add w10,w20,#0x2
7101f1f894  cmp w9,w10
7101f1f898  b.le 0x7101f1f8a4
7101f1f89c  orr w1,wzr,#0x7
7101f1f8a0  b 0x7101f1f950
7101f1f8a4  mov w10,#0xfff7
7101f1f8a8  movk w10,#0x1f, LSL #16
7101f1f8ac  add w10,w10,#0x3
7101f1f8b0  cmp w9,w10
7101f1f8b4  b.le 0x7101f1f8c0
7101f1f8b8  mov w1,#0x5
7101f1f8bc  b 0x7101f1f950
7101f1f8c0  mov w10,#0xfff8
7101f1f8c4  movk w10,#0x14, LSL #16
7101f1f8c8  add w10,w10,#0x2
7101f1f8cc  cmp w9,w10
7101f1f8d0  b.le 0x7101f1f8dc
7101f1f8d4  orr w1,wzr,#0x6
7101f1f8d8  b 0x7101f1f950
7101f1f8dc  mov w10,#0xfff7
7101f1f8e0  movk w10,#0xf, LSL #16
7101f1f8e4  add w10,w10,#0x3
7101f1f8e8  cmp w9,w10
7101f1f8ec  b.le 0x7101f1f8f8
7101f1f8f0  mov w1,#0x4
7101f1f8f4  b 0x7101f1f950
7101f1f8f8  mov w10,#0xdff8
7101f1f8fc  movk w10,#0xf, LSL #16
7101f1f900  add w10,w10,#0x2
7101f1f904  cmp w9,w10
7101f1f908  b.le 0x7101f1f914
7101f1f90c  mov w1,#0x8
7101f1f910  b 0x7101f1f950
7101f1f914  mov w10,#0xfff7
7101f1f918  movk w10,#0x4, LSL #16
7101f1f91c  add w10,w10,#0x3
7101f1f920  cmp w9,w10
7101f1f924  b.le 0x7101f1f930
7101f1f928  mov w1,#0x2
7101f1f92c  b 0x7101f1f950
7101f1f930  mov w10,#0xfffa
7101f1f934  cmp w9,w10
7101f1f938  b.le 0x7101f1f944
7101f1f93c  mov w1,#0x1
7101f1f940  b 0x7101f1f950
7101f1f944  cmn w9,#0x4
7101f1f948  orr w9,wzr,#0x3
7101f1f94c  csel w1,w9,wzr,lt
7101f1f950  ldr x0,[x8]
7101f1f954  bl 0x7103775dc0
7101f1f958  ldr x8,[x27, #0x3b0]
7101f1f95c  ldr x8,[x8]
7101f1f960  ldr x0,[x8]
7101f1f964  bl 0x7103775fa0
7101f1f968  ldr x8,[x27, #0x3c0]
7101f1f96c  ldr x8,[x8]
7101f1f970  ldr x0,[x8]
7101f1f974  bl 0x7103775fa0
7101f1f978  ldr x8,[x27, #0x3d0]
7101f1f97c  ldr x8,[x8]
7101f1f980  ldr x0,[x8]
7101f1f984  bl 0x7103775fa0
7101f1f988  ldr w20,[x27, #0x328]
7101f1f98c  ldr x21,[x27, #0x360]
7101f1f990  mov w23,#0xa
7101f1f994  orr w8,wzr,#0xf
7101f1f998  adrp x9,0x7101f33000
7101f1f99c  add x9,x9,#0x670
7101f1f9a0  adrp x25,0x71050a8000
7101f1f9a4  add x25,x25,#0x230
7101f1f9a8  sub x19,x29,#0xd0
7101f1f9ac  stur x19,[x29, #-0xb0]
7101f1f9b0  cmp w20,#0x10
7101f1f9b4  csel w22,w8,w23,eq
7101f1f9b8  adrp x8,0x7101f33000
7101f1f9bc  add x8,x8,#0x680
7101f1f9c0  csel x24,x9,x8,eq
7101f1f9c4  stp x25,x24,[x29, #-0xd0]
7101f1f9c8  ldr s0,[x21, #0x178]
7101f1f9cc  scvtf s0,s0
7101f1f9d0  ldrb w8,[x21, #0x280]
7101f1f9d4  cmp w8,#0x0
7101f1f9d8  add x0,x21,#0x190
7101f1f9dc  csel w2,w22,wzr,eq
7101f1f9e0  sub x1,x29,#0xd0
7101f1f9e4  bl 0x7101f336a0
7101f1f9e8  ldur x0,[x29, #-0xb0]
7101f1f9ec  cmp x19,x0
7101f1f9f0  b.eq 0x7101f1fa04
7101f1f9f4  cbz x0,0x7101f1fa10
7101f1f9f8  ldr x8,[x0]
7101f1f9fc  ldr x8,[x8, #0x28]
7101f1fa00  b 0x7101f1fa0c
7101f1fa04  ldr x8,[x0]
7101f1fa08  ldr x8,[x8, #0x20]
7101f1fa0c  blr x8
7101f1fa10  add x19,sp,#0xc0
7101f1fa14  stp x25,x24,[sp, #0xc0]
7101f1fa18  str x19,[sp, #0xe0]
7101f1fa1c  ldr s0,[x21, #0x17c]
7101f1fa20  ldrb w8,[x21, #0x281]
7101f1fa24  cmp w8,#0x0
7101f1fa28  scvtf s0,s0
7101f1fa2c  add x0,x21,#0x1e0
7101f1fa30  csel w2,w22,wzr,eq
7101f1fa34  add x1,sp,#0xc0
7101f1fa38  bl 0x7101f336a0
7101f1fa3c  ldr x0,[sp, #0xe0]
7101f1fa40  cmp x19,x0
7101f1fa44  b.eq 0x7101f1fa58
7101f1fa48  cbz x0,0x7101f1fa64
7101f1fa4c  ldr x8,[x0]
7101f1fa50  ldr x8,[x8, #0x28]
7101f1fa54  b 0x7101f1fa60
7101f1fa58  ldr x8,[x0]
7101f1fa5c  ldr x8,[x8, #0x20]
7101f1fa60  blr x8
7101f1fa64  add x19,sp,#0x90
7101f1fa68  stp x25,x24,[sp, #0x90]
7101f1fa6c  str x19,[sp, #0xb0]
7101f1fa70  ldr s0,[x21, #0x188]
7101f1fa74  ldrb w8,[x21, #0x282]
7101f1fa78  cmp w8,#0x0
7101f1fa7c  scvtf s0,s0
7101f1fa80  add x0,x21,#0x230
7101f1fa84  csel w2,w22,wzr,eq
7101f1fa88  add x1,sp,#0x90
7101f1fa8c  bl 0x7101f336a0
7101f1fa90  ldr x0,[sp, #0xb0]
7101f1fa94  cmp x19,x0
7101f1fa98  b.eq 0x7101f1faac
7101f1fa9c  cbz x0,0x7101f1fab8
7101f1faa0  ldr x8,[x0]
7101f1faa4  ldr x8,[x8, #0x28]
7101f1faa8  b 0x7101f1fab4
7101f1faac  ldr x8,[x0]
7101f1fab0  ldr x8,[x8, #0x20]
7101f1fab4  blr x8
7101f1fab8  ldr x8,[x21]
7101f1fabc  ldr x8,[x8]
7101f1fac0  ldr x9,[x8]
7101f1fac4  ldr x10,[x9, #0x610]
7101f1fac8  ldr x8,[x9, #0x608]
7101f1facc  cmp x10,x8
7101f1fad0  b.eq 0x7101f22054
7101f1fad4  ldr x8,[x8, #0x8]
7101f1fad8  cmp w20,#0x1
7101f1fadc  cset w9,eq
7101f1fae0  strb w9,[x8, #0x4aa]
7101f1fae4  ldr w2,[x27, #0x328]
7101f1fae8  ldr x0,[x27, #0x370]
7101f1faec  add x1,x27,#0x338
7101f1faf0  str x1,[sp, #0x28]
7101f1faf4  bl 0x7101f2ded0
7101f1faf8  ldr x20,[x27, #0x380]
7101f1fafc  ldrsw x8,[x20, #0xd4]
7101f1fb00  cmp w8,#0x13
7101f1fb04  b.cs 0x7101f22044
7101f1fb08  add x8,x20,x8, LSL #0x2
7101f1fb0c  ldr w8,[x8, #0x88]
7101f1fb10  ldr w9,[x20, #0xd8]
7101f1fb14  cmp w9,w8
7101f1fb18  b.eq 0x7101f1fb68
7101f1fb1c  cmp w8,#0x6
7101f1fb20  str w9,[x20, #0xe0]
7101f1fb24  str w8,[x20, #0xd8]
7101f1fb28  b.cs 0x7101f22044
7101f1fb2c  sxtw x8,w8
7101f1fb30  add x8,x20,x8, LSL #0x4
7101f1fb34  ldp x9,x8,[x8, #0x28]
7101f1fb38  stp x9,x8,[x20, #0x8]
7101f1fb3c  ldp x8,x10,[x20, #0x18]
7101f1fb40  and x9,x10,#0x1
7101f1fb44  orr x11,x9,x8
7101f1fb48  cbz x11,0x7101f1fb64
7101f1fb4c  ldr x11,[x20]
7101f1fb50  add x0,x11,x10, ASR #0x1
7101f1fb54  cbz x9,0x7101f1fb60
7101f1fb58  ldr x9,[x0]
7101f1fb5c  ldr x8,[x9, x8, LSL #0x0]
7101f1fb60  blr x8
7101f1fb64  str wzr,[x20, #0xdc]
7101f1fb68  ldrb w8,[x20, #0xe4]
7101f1fb6c  cbz w8,0x7101f1fba0
7101f1fb70  ldp x8,x10,[x20, #0x18]
7101f1fb74  and x9,x10,#0x1
7101f1fb78  orr x11,x9,x8
7101f1fb7c  cbz x11,0x7101f1fb98
7101f1fb80  ldr x11,[x20]
7101f1fb84  add x0,x11,x10, ASR #0x1
7101f1fb88  cbz x9,0x7101f1fb94
7101f1fb8c  ldr x9,[x0]
7101f1fb90  ldr x8,[x9, x8, LSL #0x0]
7101f1fb94  blr x8
7101f1fb98  str wzr,[x20, #0xdc]
7101f1fb9c  strb wzr,[x20, #0xe4]
7101f1fba0  ldr x9,[x20]
7101f1fba4  cbz x9,0x7101f1fbcc
7101f1fba8  ldp x8,x11,[x20, #0x8]
7101f1fbac  and x10,x11,#0x1
7101f1fbb0  orr x12,x10,x8
7101f1fbb4  cbz x12,0x7101f1fbcc
7101f1fbb8  add x0,x9,x11, ASR #0x1
7101f1fbbc  cbz x10,0x7101f1fbc8
7101f1fbc0  ldr x9,[x0]
7101f1fbc4  ldr x8,[x9, x8, LSL #0x0]
7101f1fbc8  blr x8
7101f1fbcc  ldp w8,w9,[x20, #0xd8]
7101f1fbd0  add w9,w9,#0x1
7101f1fbd4  str w9,[x20, #0xdc]
7101f1fbd8  cbz w8,0x7101f2003c
7101f1fbdc  ldr x8,[x20, #0x100]
7101f1fbe0  ldr w8,[x8, #0x25c]
7101f1fbe4  cmp w8,#0x1
7101f1fbe8  b.eq 0x7101f1fcac
7101f1fbec  cbnz w8,0x7101f2003c
7101f1fbf0  mov x0,x20
7101f1fbf4  ldr x8,[x0, #0xf8]!
7101f1fbf8  ldr w8,[x8, #0x254]
7101f1fbfc  subs w9,w8,#0x1
7101f1fc00  cmp w8,#0x3
7101f1fc04  csel w9,wzr,w9,gt
7101f1fc08  cmp w8,#0x1
7101f1fc0c  mov w8,#0x2
7101f1fc10  csel w1,w8,w9,lt
7101f1fc14  mov w2,wzr
7101f1fc18  bl 0x7103771a80
7101f1fc1c  adrp x8,0x710532f000
7101f1fc20  ldr x8,[x8, #0x8d0]
7101f1fc24  ldr x0,[x8, #0x8]
7101f1fc28  ldrb w8,[x0, #0x191]
7101f1fc2c  cbnz w8,0x7101f1fd64
7101f1fc30  mov x21,#0x5170
7101f1fc34  movk x21,#0xc0b6, LSL #16
7101f1fc38  movk x21,#0x10, LSL #32
7101f1fc3c  mov w2,#0x4
7101f1fc40  mov x1,x21
7101f1fc44  bl 0x7103313f20
7101f1fc48  tbz w0,#0x0,0x7101f1fd64
7101f1fc4c  sub x0,x29,#0xd0
7101f1fc50  mov x1,x21
7101f1fc54  bl 0x71024076d0
7101f1fc58  ldur x8,[x29, #-0xc0]
7101f1fc5c  adrp x9,0x7104f73000
7101f1fc60  add x9,x9,#0xd50
7101f1fc64  stur x9,[x29, #-0xc8]
7101f1fc68  cbz x8,0x7101f1fd90
7101f1fc6c  adrp x8,0x7106dd5000
7101f1fc70  ldrb w8,[x8, #0x3a8]
7101f1fc74  cmp w8,#0x1
7101f1fc78  b.ne 0x7101f1fd90
7101f1fc7c  adrp x9,0x7106dd5000
7101f1fc80  ldur w8,[x29, #-0xb8]
7101f1fc84  ldr w9,[x9, #0x3ac]
7101f1fc88  cmp w8,w9
7101f1fc8c  b.ne 0x7101f1fd90
7101f1fc90  ldur x8,[x29, #-0xc0]
7101f1fc94  ldr wzr,[x8, #0x38]!
7101f1fc98  ldaxr w9,[x8]
7101f1fc9c  sub w9,w9,#0x1
7101f1fca0  stlxr w10,w9,[x8]
7101f1fca4  cbnz w10,0x7101f1fc98
7101f1fca8  b 0x7101f1fd90
7101f1fcac  mov x0,x20
7101f1fcb0  ldr x8,[x0, #0xf8]!
7101f1fcb4  ldr w8,[x8, #0x254]
7101f1fcb8  cmp w8,#0x1
7101f1fcbc  csinc w9,wzr,w8,gt
7101f1fcc0  cmn w8,#0x1
7101f1fcc4  mov w8,#0x2
7101f1fcc8  csel w1,w8,w9,lt
7101f1fccc  mov w2,wzr
7101f1fcd0  bl 0x7103771a80
7101f1fcd4  adrp x8,0x710532f000
7101f1fcd8  ldr x8,[x8, #0x8d0]
7101f1fcdc  ldr x0,[x8, #0x8]
7101f1fce0  ldrb w8,[x0, #0x191]
7101f1fce4  cbnz w8,0x7101f1fdd4
7101f1fce8  mov x21,#0x5170
7101f1fcec  movk x21,#0xc0b6, LSL #16
7101f1fcf0  movk x21,#0x10, LSL #32
7101f1fcf4  mov w2,#0x4
7101f1fcf8  mov x1,x21
7101f1fcfc  bl 0x7103313f20
7101f1fd00  tbz w0,#0x0,0x7101f1fdd4
7101f1fd04  sub x0,x29,#0xd0
7101f1fd08  mov x1,x21
7101f1fd0c  bl 0x71024076d0
7101f1fd10  ldur x8,[x29, #-0xc0]
7101f1fd14  adrp x9,0x7104f73000
7101f1fd18  add x9,x9,#0xd50
7101f1fd1c  stur x9,[x29, #-0xc8]
7101f1fd20  cbz x8,0x7101f1fe00
7101f1fd24  adrp x8,0x7106dd5000
7101f1fd28  ldrb w8,[x8, #0x3a8]
7101f1fd2c  cmp w8,#0x1
7101f1fd30  b.ne 0x7101f1fe00
7101f1fd34  adrp x9,0x7106dd5000
7101f1fd38  ldur w8,[x29, #-0xb8]
7101f1fd3c  ldr w9,[x9, #0x3ac]
7101f1fd40  cmp w8,w9
7101f1fd44  b.ne 0x7101f1fe00
7101f1fd48  ldur x8,[x29, #-0xc0]
7101f1fd4c  ldr wzr,[x8, #0x38]!
7101f1fd50  ldaxr w9,[x8]
7101f1fd54  sub w9,w9,#0x1
7101f1fd58  stlxr w10,w9,[x8]
7101f1fd5c  cbnz w10,0x7101f1fd50
7101f1fd60  b 0x7101f1fe00
7101f1fd64  mov x8,#0x650000000000
7101f1fd68  movk x8,#0x87, LSL #48
7101f1fd6c  sturb wzr,[x29, #-0xb0]
7101f1fd70  stp xzr,x8,[x29, #-0xc0]
7101f1fd74  mov x8,#-0x1
7101f1fd78  stp x8,xzr,[x29, #-0xa8]
7101f1fd7c  adrp x8,0x7104f73000
7101f1fd80  add x8,x8,#0xd50
7101f1fd84  stur wzr,[x29, #-0xd0]
7101f1fd88  stur xzr,[x29, #-0x98]
7101f1fd8c  stur x8,[x29, #-0xc8]
7101f1fd90  stur xzr,[x29, #-0xc0]
7101f1fd94  sturb wzr,[x29, #-0xb0]
7101f1fd98  ldr x19,[x20, #0x110]
7101f1fd9c  ldr w8,[x19, #0x130]
7101f1fda0  cbz w8,0x7101f20024
7101f1fda4  sub w8,w8,#0x1
7101f1fda8  cmp w8,#0x11
7101f1fdac  b.cs 0x7101f22044
7101f1fdb0  add x8,x19,w8, SXTW  #0x4
7101f1fdb4  ldr x8,[x8, #0x28]
7101f1fdb8  ldr x0,[x8, #0x8]
7101f1fdbc  cbz x0,0x7101f1fe44
7101f1fdc0  ldr x8,[x0]
7101f1fdc4  ldr x8,[x8, #0x110]
7101f1fdc8  blr x8
7101f1fdcc  mov x1,x0
7101f1fdd0  b 0x7101f1fe4c
7101f1fdd4  mov x8,#0x650000000000
7101f1fdd8  movk x8,#0x87, LSL #48
7101f1fddc  sturb wzr,[x29, #-0xb0]
7101f1fde0  stp xzr,x8,[x29, #-0xc0]
7101f1fde4  mov x8,#-0x1
7101f1fde8  stp x8,xzr,[x29, #-0xa8]
7101f1fdec  adrp x8,0x7104f73000
7101f1fdf0  add x8,x8,#0xd50
7101f1fdf4  stur wzr,[x29, #-0xd0]
7101f1fdf8  stur xzr,[x29, #-0x98]
7101f1fdfc  stur x8,[x29, #-0xc8]
7101f1fe00  stur xzr,[x29, #-0xc0]
7101f1fe04  sturb wzr,[x29, #-0xb0]
7101f1fe08  ldr x19,[x20, #0x110]
7101f1fe0c  ldr w8,[x19, #0x130]
7101f1fe10  cbz w8,0x7101f20024
7101f1fe14  sub w8,w8,#0x1
7101f1fe18  cmp w8,#0x11
7101f1fe1c  b.cs 0x7101f22044
7101f1fe20  add x8,x19,w8, SXTW  #0x4
7101f1fe24  ldr x8,[x8, #0x28]
7101f1fe28  ldr x0,[x8, #0x8]
7101f1fe2c  cbz x0,0x7101f1ff2c
7101f1fe30  ldr x8,[x0]
7101f1fe34  ldr x8,[x8, #0x110]
7101f1fe38  blr x8
7101f1fe3c  mov x1,x0
7101f1fe40  b 0x7101f1ff34
7101f1fe44  adrp x1,0x7104867000
7101f1fe48  add x1,x1,#0xc2e
7101f1fe4c  ldr x19,[x19, #0x8]
7101f1fe50  ldr x0,[x19, #0x8]
7101f1fe54  cbz x0,0x7101f20024
7101f1fe58  bl 0x71037964b0
7101f1fe5c  cbz x0,0x7101f20024
7101f1fe60  ldr x8,[x0]
7101f1fe64  ldr x8,[x8, #0x140]
7101f1fe68  mov w1,#0x1
7101f1fe6c  mov x24,x0
7101f1fe70  blr x8
7101f1fe74  ldr x8,[x19, #0x8]
7101f1fe78  cbz x8,0x7101f20014
7101f1fe7c  ldr x22,[x8, #0x80]
7101f1fe80  add x21,x8,#0x88
7101f1fe84  b 0x7101f1fe8c
7101f1fe88  mov x22,x9
7101f1fe8c  cmp x22,x21
7101f1fe90  b.eq 0x7101f20014
7101f1fe94  ldr x0,[x22, #0x68]
7101f1fe98  ldr x8,[x0]
7101f1fe9c  ldr x8,[x8, #0x148]
7101f1fea0  blr x8
7101f1fea4  tbz w0,#0x0,0x7101f1fee4
7101f1fea8  ldr x8,[x24]
7101f1feac  ldr x1,[x22, #0x68]
7101f1feb0  mov x0,x24
7101f1feb4  ldr x8,[x8, #0x120]
7101f1feb8  blr x8
7101f1febc  tbz w0,#0x0,0x7101f1fee4
7101f1fec0  ldr x0,[x22, #0x68]
7101f1fec4  ldr x8,[x0]
7101f1fec8  ldr x8,[x8, #0x178]
7101f1fecc  blr x8
7101f1fed0  ldr x0,[x22, #0x68]
7101f1fed4  ldr x8,[x0]
7101f1fed8  ldr x8,[x8, #0x140]
7101f1fedc  mov w1,wzr
7101f1fee0  blr x8
7101f1fee4  ldr x8,[x22, #0x8]
7101f1fee8  cbz x8,0x7101f1fefc
7101f1feec  mov x22,x8
7101f1fef0  ldr x8,[x8]
7101f1fef4  cbnz x8,0x7101f1feec
7101f1fef8  b 0x7101f1fe8c
7101f1fefc  mov x8,x22
7101f1ff00  ldr x9,[x8, #0x10]!
7101f1ff04  ldr x10,[x9]
7101f1ff08  cmp x10,x22
7101f1ff0c  b.eq 0x7101f1fe88
7101f1ff10  ldr x9,[x8]
7101f1ff14  mov x8,x9
7101f1ff18  ldr x22,[x8, #0x10]!
7101f1ff1c  ldr x10,[x22]
7101f1ff20  cmp x10,x9
7101f1ff24  b.ne 0x7101f1ff10
7101f1ff28  b 0x7101f1fe8c
7101f1ff2c  adrp x1,0x7104867000
7101f1ff30  add x1,x1,#0xc2e
7101f1ff34  ldr x19,[x19, #0x8]
7101f1ff38  ldr x0,[x19, #0x8]
7101f1ff3c  cbz x0,0x7101f20024
7101f1ff40  bl 0x71037964b0
7101f1ff44  cbz x0,0x7101f20024
7101f1ff48  ldr x8,[x0]
7101f1ff4c  ldr x8,[x8, #0x140]
7101f1ff50  mov w1,#0x1
7101f1ff54  mov x24,x0
7101f1ff58  blr x8
7101f1ff5c  ldr x8,[x19, #0x8]
7101f1ff60  cbz x8,0x7101f20014
7101f1ff64  ldr x22,[x8, #0x80]
7101f1ff68  add x21,x8,#0x88
7101f1ff6c  b 0x7101f1ff74
7101f1ff70  mov x22,x9
7101f1ff74  cmp x22,x21
7101f1ff78  b.eq 0x7101f20014
7101f1ff7c  ldr x0,[x22, #0x68]
7101f1ff80  ldr x8,[x0]
7101f1ff84  ldr x8,[x8, #0x148]
7101f1ff88  blr x8
7101f1ff8c  tbz w0,#0x0,0x7101f1ffcc
7101f1ff90  ldr x8,[x24]
7101f1ff94  ldr x1,[x22, #0x68]
7101f1ff98  mov x0,x24
7101f1ff9c  ldr x8,[x8, #0x120]
7101f1ffa0  blr x8
7101f1ffa4  tbz w0,#0x0,0x7101f1ffcc
7101f1ffa8  ldr x0,[x22, #0x68]
7101f1ffac  ldr x8,[x0]
7101f1ffb0  ldr x8,[x8, #0x178]
7101f1ffb4  blr x8
7101f1ffb8  ldr x0,[x22, #0x68]
7101f1ffbc  ldr x8,[x0]
7101f1ffc0  ldr x8,[x8, #0x140]
7101f1ffc4  mov w1,wzr
7101f1ffc8  blr x8
7101f1ffcc  ldr x8,[x22, #0x8]
7101f1ffd0  cbz x8,0x7101f1ffe4
7101f1ffd4  mov x22,x8
7101f1ffd8  ldr x8,[x8]
7101f1ffdc  cbnz x8,0x7101f1ffd4
7101f1ffe0  b 0x7101f1ff74
7101f1ffe4  mov x8,x22
7101f1ffe8  ldr x9,[x8, #0x10]!
7101f1ffec  ldr x10,[x9]
7101f1fff0  cmp x10,x22
7101f1fff4  b.eq 0x7101f1ff70
7101f1fff8  ldr x9,[x8]
7101f1fffc  mov x8,x9
7101f20000  ldr x22,[x8, #0x10]!
7101f20004  ldr x10,[x22]
7101f20008  cmp x10,x9
7101f2000c  b.ne 0x7101f1fff8
7101f20010  b 0x7101f1ff74
7101f20014  ldr x8,[x24]
7101f20018  ldr x8,[x8, #0x178]
7101f2001c  mov x0,x24
7101f20020  blr x8
7101f20024  ldrsw x8,[x20, #0xd4]
7101f20028  cmp w8,#0x13
7101f2002c  b.cs 0x7101f22044
7101f20030  add x8,x20,x8, LSL #0x2
7101f20034  mov w9,#0x4
7101f20038  str w9,[x8, #0x88]
7101f2003c  ldr x0,[x27, #0x390]
7101f20040  bl 0x7101f37260
7101f20044  ldr x0,[x27, #0x3a0]
7101f20048  bl 0x7101f30ef0
7101f2004c  ldr x19,[x27, #0x3d0]
7101f20050  ldrb w8,[x19, #0x8]
7101f20054  cbz w8,0x7101f20090
7101f20058  ldr x8,[x19]
7101f2005c  ldr x8,[x8]
7101f20060  ldr x8,[x8, #0x10]
7101f20064  ldr x0,[x8, #0x8]
7101f20068  cbz x0,0x7101f2008c
7101f2006c  adrp x1,0x7104421000
7101f20070  add x1,x1,#0x55
7101f20074  bl 0x71037964b0
7101f20078  cbz x0,0x7101f2008c
7101f2007c  ldr x8,[x0]
7101f20080  ldr x8,[x8, #0x138]
7101f20084  blr x8
7101f20088  tbz w0,#0x0,0x7101f20090
7101f2008c  strb wzr,[x19, #0x8]
7101f20090  ldr x9,[x27, #0x2f8]
7101f20094  add x8,x27,#0x300
7101f20098  b 0x7101f200a0
7101f2009c  mov x9,x11
7101f200a0  cmp x9,x8
7101f200a4  b.eq 0x7101f20124
7101f200a8  ldr w10,[x9, #0x2c]
7101f200ac  cbz w10,0x7101f200dc
7101f200b0  ldr x10,[x27, #0x360]
7101f200b4  ldr x10,[x10]
7101f200b8  ldr x10,[x10]
7101f200bc  ldr x10,[x10]
7101f200c0  ldr x10,[x10, #0x600]
7101f200c4  ldrb w11,[x10, #0x4aa]
7101f200c8  cbz w11,0x7101f200dc
7101f200cc  ldr w11,[x9, #0x28]
7101f200d0  add x10,x10,x11, LSL #0x2
7101f200d4  ldrb w10,[x10, #0x264]
7101f200d8  tbnz w10,#0x4,0x7101f202f0
7101f200dc  ldr x10,[x9, #0x8]
7101f200e0  cbz x10,0x7101f200f4
7101f200e4  mov x9,x10
7101f200e8  ldr x10,[x10]
7101f200ec  cbnz x10,0x7101f200e4
7101f200f0  b 0x7101f200a0
7101f200f4  mov x10,x9
7101f200f8  ldr x11,[x10, #0x10]!
7101f200fc  ldr x12,[x11]
7101f20100  cmp x12,x9
7101f20104  b.eq 0x7101f2009c
7101f20108  ldr x11,[x10]
7101f2010c  mov x10,x11
7101f20110  ldr x9,[x10, #0x10]!
7101f20114  ldr x12,[x9]
7101f20118  cmp x12,x11
7101f2011c  b.ne 0x7101f20108
7101f20120  b 0x7101f200a0
7101f20124  mov w22,wzr
7101f20128  ldrb w8,[x27, #0x529]
7101f2012c  cmp w8,w22
7101f20130  b.eq 0x7101f20234
7101f20134  ldr w8,[x27, #0x328]
7101f20138  cmp w8,#0x12
7101f2013c  strb w22,[x27, #0x529]
7101f20140  b.hi 0x7101f20234
7101f20144  mov w9,#0x1
7101f20148  lsl w8,w9,w8
7101f2014c  mov w9,#0x106
7101f20150  movk w9,#0x4, LSL #16
7101f20154  tst w8,w9
7101f20158  b.eq 0x7101f20234
7101f2015c  adrp x8,0x710532f000
7101f20160  ldr x8,[x8, #0x8d0]
7101f20164  ldr x0,[x8, #0x8]
7101f20168  ldrb w8,[x0, #0x191]
7101f2016c  mov x9,#0x8ab6
7101f20170  movk x9,#0x928c, LSL #16
7101f20174  mov x10,#0x632
7101f20178  movk x10,#0xe8c9, LSL #16
7101f2017c  cmp w22,#0x0
7101f20180  movk x9,#0x1c, LSL #32
7101f20184  movk x10,#0x1a, LSL #32
7101f20188  csel x21,x10,x9,ne
7101f2018c  cbnz w8,0x7101f20200
7101f20190  mov w2,#0x4
7101f20194  mov x1,x21
7101f20198  bl 0x7103313f20
7101f2019c  tbz w0,#0x0,0x7101f20200
7101f201a0  add x0,sp,#0x50
7101f201a4  mov x1,x21
7101f201a8  bl 0x71024076d0
7101f201ac  ldr x8,[sp, #0x60]
7101f201b0  adrp x9,0x7104f73000
7101f201b4  add x9,x9,#0xd50
7101f201b8  str x9,[sp, #0x58]
7101f201bc  cbz x8,0x7101f2022c
7101f201c0  adrp x8,0x7106dd5000
7101f201c4  ldrb w8,[x8, #0x3a8]
7101f201c8  cmp w8,#0x1
7101f201cc  b.ne 0x7101f2022c
7101f201d0  adrp x9,0x7106dd5000
7101f201d4  ldr w8,[sp, #0x68]
7101f201d8  ldr w9,[x9, #0x3ac]
7101f201dc  cmp w8,w9
7101f201e0  b.ne 0x7101f2022c
7101f201e4  ldr x8,[sp, #0x60]
7101f201e8  ldr wzr,[x8, #0x38]!
7101f201ec  ldaxr w9,[x8]
7101f201f0  sub w9,w9,#0x1
7101f201f4  stlxr w10,w9,[x8]
7101f201f8  cbnz w10,0x7101f201ec
7101f201fc  b 0x7101f2022c
7101f20200  mov x8,#0x650000000000
7101f20204  movk x8,#0x87, LSL #48
7101f20208  strb wzr,[sp, #0x70]
7101f2020c  stp xzr,x8,[sp, #0x60]
7101f20210  mov x8,#-0x1
7101f20214  stp x8,xzr,[sp, #0x78]
7101f20218  adrp x8,0x7104f73000
7101f2021c  add x8,x8,#0xd50
7101f20220  str wzr,[sp, #0x50]
7101f20224  str xzr,[sp, #0x88]
7101f20228  str x8,[sp, #0x58]
7101f2022c  str xzr,[sp, #0x60]
7101f20230  strb wzr,[sp, #0x70]
7101f20234  ldr x24,[x27, #0x350]
7101f20238  ldr x0,[x24, #0x38]
7101f2023c  ldr x8,[x0]
7101f20240  ldr x8,[x8, #0x68]
7101f20244  sub x26,x29,#0xd0
7101f20248  blr x8
7101f2024c  tbz w0,#0x0,0x7101f20300
7101f20250  mov x0,x24
7101f20254  bl 0x7101f33ab0
7101f20258  ldrb w8,[x24, #0x65]
7101f2025c  cbz w8,0x7101f20300
7101f20260  ldrb w8,[x24, #0x66]
7101f20264  cbz w8,0x7101f20300
7101f20268  ldp x9,x10,[x24, #0x40]
7101f2026c  ldr x8,[x27, #0x340]
7101f20270  ldp x11,x12,[x24, #0x50]
7101f20274  add x19,x8,#0x178
7101f20278  stp x11,x12,[x29, #-0xc0]
7101f2027c  stp x9,x10,[x29, #-0xd0]
7101f20280  ldr x20,[x8, #0x180]
7101f20284  cmp x19,x20
7101f20288  b.eq 0x7101f202c8
7101f2028c  ldr w21,[x24, #0x60]
7101f20290  add x0,x20,#0x18
7101f20294  sub x1,x29,#0xd0
7101f20298  mov w2,#0x20
7101f2029c  bl 0x71039c0250
7101f202a0  cbnz w0,0x7101f202bc
7101f202a4  ldr w8,[x20, #0x10]
7101f202a8  cmp w8,#0x2
7101f202ac  b.eq 0x7101f202cc
7101f202b0  ldr w8,[x20, #0x38]
7101f202b4  cmp w8,w21
7101f202b8  b.eq 0x7101f202cc
7101f202bc  ldr x20,[x20, #0x8]
7101f202c0  cmp x19,x20
7101f202c4  b.ne 0x7101f20290
7101f202c8  mov x20,x19
7101f202cc  cmp x19,x20
7101f202d0  b.eq 0x7101f202f8
7101f202d4  ldr x8,[x20, #0x48]
7101f202d8  ldr x8,[x8]
7101f202dc  cbz x8,0x7101f202f8
7101f202e0  add x0,x24,#0x18
7101f202e4  add x1,x20,#0x40
7101f202e8  bl 0x7103779480
7101f202ec  b 0x7101f20300
7101f202f0  mov w22,#0x1
7101f202f4  b 0x7101f20128
7101f202f8  ldr x0,[x24, #0x20]
7101f202fc  bl 0x7103779650
7101f20300  ldr w19,[x27, #0x328]
7101f20304  sub x8,x29,#0xd0
7101f20308  ldr x25,[x27, #0x5670]
7101f2030c  ldr x21,[x27, #0x56a0]
7101f20310  ldr x20,[x27, #0x360]
7101f20314  stur xzr,[x29, #-0xc0]
7101f20318  stp xzr,xzr,[x29, #-0xd0]
7101f2031c  sturb w23,[x29, #-0xd0]
7101f20320  orr x23,x8,#0x1
7101f20324  mov w8,#0x6f6d
7101f20328  movk w8,#0x6564, LSL #16
7101f2032c  stur w8,[x26, #0x1]
7101f20330  mov w8,#0x5f
7101f20334  sturh w8,[x26, #0x5]
7101f20338  sub w8,w19,#0x2
7101f2033c  cmp w8,#0x10
7101f20340  b.hi 0x7101f20414
7101f20344  adrp x9,0x71044fc000
7101f20348  add x9,x9,#0x57c
7101f2034c  ldrsw x8,[x9, x8, LSL #0x2]
7101f20350  add x8,x8,x9
7101f20354  br x8
7101f20358  adrp x1,0x710433a000
7101f2035c  add x1,x1,#0xa4f
7101f20360  sub x0,x29,#0xd0
7101f20364  bl 0x71039c2880
7101f20368  ldr w8,[x27, #0x4cc]
7101f2036c  ldr x24,[sp, #0x48]
7101f20370  cmp w8,#0x3
7101f20374  b.eq 0x7101f21f8c
7101f20378  cmp w8,#0x2
7101f2037c  b.eq 0x7101f21f4c
7101f20380  cmp w8,#0x1
7101f20384  b.ne 0x7101f20470
7101f20388  ldr x8,[x20]
7101f2038c  ldr x8,[x8]
7101f20390  ldurb w9,[x29, #-0xd0]
7101f20394  tst w9,#0x1
7101f20398  add x0,x8,#0x8
7101f2039c  ldur x8,[x29, #-0xc0]
7101f203a0  csel x2,x23,x8,eq
7101f203a4  adrp x1,0x7104292000
7101f203a8  add x1,x1,#0x507
7101f203ac  bl 0x7103778430
7101f203b0  b 0x7101f20470
7101f203b4  adrp x1,0x7104308000
7101f203b8  add x1,x1,#0xc7e
7101f203bc  sub x0,x29,#0xd0
7101f203c0  bl 0x71039c2880
7101f203c4  ldr x8,[x20, #0x308]
7101f203c8  ldr x8,[x8, #0x38]
7101f203cc  ldr x24,[sp, #0x48]
7101f203d0  cbz x8,0x7101f20400
7101f203d4  ldr w8,[x8, #0x254]
7101f203d8  cmp w8,#0xa
7101f203dc  b.hi 0x7101f20400
7101f203e0  mov w9,#0x1
7101f203e4  lsl w8,w9,w8
7101f203e8  mov w9,#0x610
7101f203ec  tst w8,w9
7101f203f0  b.eq 0x7101f20400
7101f203f4  adrp x1,0x71042f8000
7101f203f8  add x1,x1,#0xc8e
7101f203fc  b 0x7101f20408
7101f20400  adrp x1,0x71042c3000
7101f20404  add x1,x1,#0x80
7101f20408  sub x0,x29,#0xd0
7101f2040c  bl 0x71039c2880
7101f20410  b 0x7101f20470
7101f20414  adrp x1,0x71042f8000
7101f20418  add x1,x1,#0xc8e
7101f2041c  b 0x7101f20428
7101f20420  adrp x1,0x71043f1000
7101f20424  add x1,x1,#0x15d
7101f20428  sub x0,x29,#0xd0
7101f2042c  bl 0x71039c2880
7101f20430  b 0x7101f2046c
7101f20434  adrp x1,0x7104433000
7101f20438  add x1,x1,#0x95e
7101f2043c  sub x0,x29,#0xd0
7101f20440  bl 0x71039c2880
7101f20444  ldr x8,[x20]
7101f20448  ldr x8,[x8]
7101f2044c  ldurb w9,[x29, #-0xd0]
7101f20450  tst w9,#0x1
7101f20454  add x0,x8,#0x8
7101f20458  ldur x8,[x29, #-0xc0]
7101f2045c  csel x2,x23,x8,eq
7101f20460  adrp x1,0x71043e0000
7101f20464  add x1,x1,#0xa17
7101f20468  bl 0x7103778430
7101f2046c  ldr x24,[sp, #0x48]
7101f20470  ldr x8,[x20]
7101f20474  ldr x8,[x8]
7101f20478  ldurb w9,[x29, #-0xd0]
7101f2047c  ldur x10,[x29, #-0xc0]
7101f20480  tst w9,#0x1
7101f20484  csel x1,x23,x10,eq
7101f20488  ldr x0,[x8, #0x10]
7101f2048c  fmov s0,0x3f800000
7101f20490  bl 0x7103778300
7101f20494  mov w8,#0x10
7101f20498  stp xzr,xzr,[sp, #0xc0]
7101f2049c  strb w8,[sp, #0xc0]
7101f204a0  add x8,sp,#0xc0
7101f204a4  orr x23,x8,#0x1
7101f204a8  mov x8,#0x6465
7101f204ac  movk x8,#0x7469, LSL #16
7101f204b0  movk x8,#0x745f, LSL #32
7101f204b4  movk x8,#0x5f6c, LSL #48
7101f204b8  str xzr,[sp, #0xd0]
7101f204bc  strb wzr,[sp, #0xc9]
7101f204c0  stur x8,[sp, #0xc1]
7101f204c4  ldr w8,[x20, #0x174]
7101f204c8  cmp w8,#0x2
7101f204cc  b.eq 0x7101f204f0
7101f204d0  cmp w8,#0x1
7101f204d4  b.eq 0x7101f204e4
7101f204d8  adrp x1,0x710433a000
7101f204dc  add x1,x1,#0xa56
7101f204e0  b 0x7101f204f8
7101f204e4  adrp x1,0x710435c000
7101f204e8  add x1,x1,#0x453
7101f204ec  b 0x7101f204f8
7101f204f0  adrp x1,0x71043f1000
7101f204f4  add x1,x1,#0x165
7101f204f8  add x0,sp,#0xc0
7101f204fc  bl 0x71039c2880
7101f20500  ldr x8,[x20]
7101f20504  ldr x8,[x8]
7101f20508  ldrb w9,[sp, #0xc0]
7101f2050c  ldr x10,[sp, #0xd0]
7101f20510  tst w9,#0x1
7101f20514  csel x1,x23,x10,eq
7101f20518  ldr x0,[x8, #0x10]
7101f2051c  fmov s0,0x3f800000
7101f20520  bl 0x7103778300
7101f20524  ldr w9,[x20, #0x320]
7101f20528  ldr w8,[x20, #0x174]
7101f2052c  cmp w9,w19
7101f20530  b.ne 0x7101f20540
7101f20534  ldr w9,[x20, #0x324]
7101f20538  cmp w8,w9
7101f2053c  b.eq 0x7101f20594
7101f20540  cbz w8,0x7101f2057c
7101f20544  cmp w8,#0x3
7101f20548  b.cs 0x7101f22044
7101f2054c  orr w9,wzr,#0x18
7101f20550  madd x8,x8,x9,x27
7101f20554  ldr x9,[x8, #0x3f8]
7101f20558  ldr x8,[x8, #0x400]
7101f2055c  cmp x9,x8
7101f20560  b.eq 0x7101f2057c
7101f20564  ldr x8,[x20]
7101f20568  ldr x8,[x8]
7101f2056c  add x0,x8,#0x8
7101f20570  adrp x1,0x710434a000
7101f20574  add x1,x1,#0xbf8
7101f20578  b 0x7101f20590
7101f2057c  ldr x8,[x20]
7101f20580  ldr x8,[x8]
7101f20584  add x0,x8,#0x8
7101f20588  adrp x1,0x710425f000
7101f2058c  add x1,x1,#0xda5
7101f20590  bl 0x7103778430
7101f20594  ldr w8,[x20, #0x320]
7101f20598  cmp w8,w19
7101f2059c  b.eq 0x7101f205f0
7101f205a0  ldr x8,[x20]
7101f205a4  ldr x8,[x8]
7101f205a8  ldr x0,[x8, #0x10]
7101f205ac  fmov s0,0x3f800000
7101f205b0  adrp x9,0x71043ae000
7101f205b4  add x9,x9,#0xfb
7101f205b8  adrp x10,0x71042c5000
7101f205bc  add x10,x10,#0x6c7
7101f205c0  cmp w19,#0x10
7101f205c4  csel x1,x10,x9,eq
7101f205c8  bl 0x7103778300
7101f205cc  cmp w19,#0x12
7101f205d0  b.ne 0x7101f205f0
7101f205d4  ldr x8,[x20]
7101f205d8  ldr x8,[x8]
7101f205dc  ldr x0,[x8, #0x10]
7101f205e0  fmov s0,0x3f800000
7101f205e4  adrp x1,0x710435c000
7101f205e8  add x1,x1,#0x63
7101f205ec  bl 0x7103778300
7101f205f0  ldr w8,[x20, #0x174]
7101f205f4  ldr w9,[x20, #0x324]
7101f205f8  cmp w8,w9
7101f205fc  str w19,[x20, #0x320]
7101f20600  b.eq 0x7101f20630
7101f20604  ldr x8,[x20]
7101f20608  ldr x8,[x8]
7101f2060c  ldrb w9,[sp, #0xc0]
7101f20610  tst w9,#0x1
7101f20614  add x0,x8,#0x8
7101f20618  ldr x8,[sp, #0xd0]
7101f2061c  csel x2,x23,x8,eq
7101f20620  adrp x1,0x710425f000
7101f20624  add x1,x1,#0xdb1
7101f20628  bl 0x7103778430
7101f2062c  ldr w8,[x20, #0x174]
7101f20630  str w8,[x20, #0x324]
7101f20634  ldrb w8,[x20, #0x328]
7101f20638  cmp w22,w8
7101f2063c  b.eq 0x7101f2066c
7101f20640  ldr x8,[x20]
7101f20644  ldr x8,[x8]
7101f20648  ldr x0,[x8, #0x10]
7101f2064c  fmov s0,0x3f800000
7101f20650  adrp x9,0x71042b4000
7101f20654  add x9,x9,#0xcb0
7101f20658  adrp x10,0x71043cf000
7101f2065c  add x10,x10,#0xd1d
7101f20660  cmp w22,#0x0
7101f20664  csel x1,x10,x9,ne
7101f20668  bl 0x7103778300
7101f2066c  ldr w2,[x20, #0x180]
7101f20670  ldr w8,[x20, #0x184]
7101f20674  cmp w2,w8
7101f20678  strb w22,[x20, #0x328]
7101f2067c  b.eq 0x7101f2069c
7101f20680  ldr x8,[x20]
7101f20684  ldr x8,[x8]
7101f20688  add x0,x8,#0x8
7101f2068c  adrp x1,0x71042b4000
7101f20690  add x1,x1,#0xc43
7101f20694  bl 0x7103778430
7101f20698  ldr w2,[x20, #0x180]
7101f2069c  ldr x8,[x20]
7101f206a0  str w2,[x20, #0x184]
7101f206a4  ldr x8,[x8]
7101f206a8  fmov s8,0x3f800000
7101f206ac  mov v0.16B,v8.16B
7101f206b0  adrp x9,0x71042f8000
7101f206b4  add x9,x9,#0xc93
7101f206b8  adrp x10,0x71043ae000
7101f206bc  add x10,x10,#0x107
7101f206c0  ldr x0,[x8, #0x10]
7101f206c4  cmp x25,#0x0
7101f206c8  csel x1,x10,x9,eq
7101f206cc  bl 0x7103778300
7101f206d0  ldr x8,[x20]
7101f206d4  ldr x8,[x8]
7101f206d8  ldr x0,[x8, #0x10]
7101f206dc  mov v0.16B,v8.16B
7101f206e0  adrp x9,0x71043f1000
7101f206e4  add x9,x9,#0x16c
7101f206e8  adrp x10,0x710434a000
7101f206ec  add x10,x10,#0xc07
7101f206f0  cmp x21,#0x0
7101f206f4  csel x1,x10,x9,eq
7101f206f8  bl 0x7103778300
7101f206fc  adrp x8,0x7104472000
7101f20700  ldr s0,[x20, #0x190]
7101f20704  ldr s1,[x20, #0x230]
7101f20708  ldr s2,[x20, #0x168]
7101f2070c  fmul s0,s0,s2
7101f20710  ldr s10,[x8, #0xe0c]
7101f20714  ldr x8,[x20, #0x10]
7101f20718  ldr x8,[x8]
7101f2071c  fmul s1,s1,s10
7101f20720  fdiv s0,s0,s1
7101f20724  fneg s1,s0
7101f20728  cbz x8,0x7101f20740
7101f2072c  ldrb w9,[x8, #0x58]
7101f20730  orr w9,w9,#0x10
7101f20734  str s1,[x8, #0x30]
7101f20738  str wzr,[x8, #0x34]
7101f2073c  strb w9,[x8, #0x58]
7101f20740  ldr x8,[x20, #0x20]
7101f20744  ldr x8,[x8]
7101f20748  cbz x8,0x7101f20760
7101f2074c  ldrb w9,[x8, #0x58]
7101f20750  orr w9,w9,#0x10
7101f20754  str s1,[x8, #0x30]
7101f20758  str wzr,[x8, #0x34]
7101f2075c  strb w9,[x8, #0x58]
7101f20760  ldr x8,[x20, #0x30]
7101f20764  ldr x8,[x8]
7101f20768  cbz x8,0x7101f20780
7101f2076c  ldrb w9,[x8, #0x58]
7101f20770  orr w9,w9,#0x10
7101f20774  str s1,[x8, #0x30]
7101f20778  str wzr,[x8, #0x34]
7101f2077c  strb w9,[x8, #0x58]
7101f20780  ldr s1,[x20, #0x168]
7101f20784  bl 0x71039c0810
7101f20788  ldr x8,[x20, #0x40]
7101f2078c  ldr x8,[x8]
7101f20790  cbz x8,0x7101f207ac
7101f20794  ldrb w9,[x8, #0x58]
7101f20798  fneg s0,s0
7101f2079c  str s0,[x8, #0x30]
7101f207a0  str wzr,[x8, #0x34]
7101f207a4  orr w9,w9,#0x10
7101f207a8  strb w9,[x8, #0x58]
7101f207ac  ldr x8,[x20, #0xe0]
7101f207b0  ldr w9,[x24]
7101f207b4  cmp w9,#0x1
7101f207b8  ldr x8,[x8]
7101f207bc  b.ne 0x7101f207f4
7101f207c0  cbz x8,0x7101f20808
7101f207c4  ldr s0,[x27, #0x488]
7101f207c8  scvtf s0,s0
7101f207cc  adrp x9,0x7104473000
7101f207d0  ldr s1,[x20, #0x168]
7101f207d4  ldr s2,[x20, #0x230]
7101f207d8  ldr s3,[x9, #0x928]
7101f207dc  fmul s2,s2,s3
7101f207e0  fmul s3,s1,s0
7101f207e4  fdiv s0,s3,s2
7101f207e8  str wzr,[x8, #0x34]
7101f207ec  str s0,[x8, #0x30]
7101f207f0  b 0x7101f207fc
7101f207f4  cbz x8,0x7101f20808
7101f207f8  str xzr,[x8, #0x30]
7101f207fc  ldrb w9,[x8, #0x58]
7101f20800  orr w9,w9,#0x10
7101f20804  strb w9,[x8, #0x58]
7101f20808  adrp x8,0x7104471000
7101f2080c  ldr s0,[x20, #0x230]
7101f20810  ldr s1,[x20, #0x168]
7101f20814  ldr s8,[x8, #0xd0c]
7101f20818  adrp x8,0x7104473000
7101f2081c  fmul s0,s0,s10
7101f20820  fmul s5,s1,s8
7101f20824  fdiv s2,s5,s0
7101f20828  ldr s3,[x8, #0x680]
7101f2082c  ldr x8,[x20, #0xf0]
7101f20830  ldr x8,[x8]
7101f20834  cbz x8,0x7101f2084c
7101f20838  ldrb w9,[x8, #0x58]
7101f2083c  orr w9,w9,#0x10
7101f20840  str s2,[x8, #0x30]
7101f20844  str wzr,[x8, #0x34]
7101f20848  strb w9,[x8, #0x58]
7101f2084c  ldr x8,[x20, #0x100]
7101f20850  fmul s1,s1,s3
7101f20854  ldr x8,[x8]
7101f20858  cbz x8,0x7101f20870
7101f2085c  ldrb w9,[x8, #0x58]
7101f20860  orr w9,w9,#0x10
7101f20864  str s2,[x8, #0x30]
7101f20868  str wzr,[x8, #0x34]
7101f2086c  strb w9,[x8, #0x58]
7101f20870  fdiv s0,s1,s0
7101f20874  ldr x8,[x20, #0x110]
7101f20878  ldr x8,[x8]
7101f2087c  cbz x8,0x7101f20898
7101f20880  ldr s1,[x8, #0x54]
7101f20884  ldrb w9,[x8, #0x58]
7101f20888  orr w9,w9,#0x10
7101f2088c  fabs s1,s1
7101f20890  stp s0,s1,[x8, #0x50]
7101f20894  strb w9,[x8, #0x58]
7101f20898  ldr x8,[x20, #0x120]
7101f2089c  ldr x8,[x8]
7101f208a0  cbz x8,0x7101f208c0
7101f208a4  ldr s1,[x8, #0x54]
7101f208a8  ldrb w9,[x8, #0x58]
7101f208ac  str s0,[x8, #0x50]
7101f208b0  orr w9,w9,#0x10
7101f208b4  fabs s0,s1
7101f208b8  str s0,[x8, #0x54]
7101f208bc  strb w9,[x8, #0x58]
7101f208c0  ldr x8,[x27, #0x400]
7101f208c4  ldr x10,[x27, #0x3f8]
7101f208c8  subs x9,x8,x10
7101f208cc  b.ne 0x7101f208fc
7101f208d0  ldr x8,[x20]
7101f208d4  ldr x8,[x8]
7101f208d8  ldr x0,[x8, #0x10]
7101f208dc  fmov s0,0x3f800000
7101f208e0  adrp x1,0x71042e7000
7101f208e4  add x1,x1,#0xb35
7101f208e8  bl 0x7103778300
7101f208ec  fmov s0,wzr
7101f208f0  mov w21,wzr
7101f208f4  mov v1.16B,v0.16B
7101f208f8  b 0x7101f2098c
7101f208fc  mov x11,#0x5c29
7101f20900  movk x11,#0xc28f, LSL #16
7101f20904  asr x9,x9,#0x3
7101f20908  movk x11,#0x28f5, LSL #32
7101f2090c  movk x11,#0x8f5c, LSL #48
7101f20910  mul x9,x9,x11
7101f20914  mov x8,xzr
7101f20918  mov w21,wzr
7101f2091c  add x10,x10,#0x2c
7101f20920  ldr w11,[x10], #0xc8
7101f20924  add x8,x8,#0x1
7101f20928  add w21,w11,w21
7101f2092c  cmp x9,x8
7101f20930  b.hi 0x7101f20920
7101f20934  ldr x8,[x20]
7101f20938  ldr x8,[x8]
7101f2093c  ldr x0,[x8, #0x10]
7101f20940  cmp w21,#0xe11
7101f20944  b.lt 0x7101f20960
7101f20948  fmov s0,0x3f800000
7101f2094c  adrp x1,0x7104443000
7101f20950  add x1,x1,#0xfee
7101f20954  bl 0x7103778300
7101f20958  scvtf s0,w21
7101f2095c  b 0x7101f20980
7101f20960  fmov s0,0x3f800000
7101f20964  adrp x1,0x71042e7000
7101f20968  add x1,x1,#0xb35
7101f2096c  bl 0x7103778300
7101f20970  scvtf s0,w21
7101f20974  cmp w21,#0x1
7101f20978  b.lt 0x7101f20da8
7101f2097c  mov v8.16B,v0.16B
7101f20980  ldr s1,[x20, #0x170]
7101f20984  fdiv s1,s1,s0
7101f20988  mov v0.16B,v8.16B
7101f2098c  ldr x8,[x20, #0x50]
7101f20990  fmul s0,s0,s1
7101f20994  ldr x8,[x8]
7101f20998  cbz x8,0x7101f209b4
7101f2099c  ldr s2,[x8, #0x54]
7101f209a0  ldrb w9,[x8, #0x58]
7101f209a4  orr w9,w9,#0x10
7101f209a8  fabs s2,s2
7101f209ac  stp s0,s2,[x8, #0x50]
7101f209b0  strb w9,[x8, #0x58]
7101f209b4  ldr x8,[x20, #0x60]
7101f209b8  ldr x8,[x8]
7101f209bc  cbz x8,0x7101f209e4
7101f209c0  ldr s2,[x20, #0x190]
7101f209c4  str wzr,[x8, #0x34]
7101f209c8  fmul s2,s1,s2
7101f209cc  ldrb w9,[x8, #0x58]
7101f209d0  orr w9,w9,#0x10
7101f209d4  strb w9,[x8, #0x58]
7101f209d8  str s2,[x8, #0x30]
7101f209dc  ldr x8,[x20, #0x60]
7101f209e0  ldr x8,[x8]
7101f209e4  cbz x8,0x7101f20a14
7101f209e8  ldr s2,[x20, #0x230]
7101f209ec  ldr s3,[x20, #0x16c]
7101f209f0  fmul s5,s2,s10
7101f209f4  fmul s2,s5,s3
7101f209f8  ldr s4,[x8, #0x54]
7101f209fc  fabs s4,s4
7101f20a00  fmul s2,s1,s2
7101f20a04  ldrb w9,[x8, #0x58]
7101f20a08  orr w9,w9,#0x10
7101f20a0c  strb w9,[x8, #0x58]
7101f20a10  stp s2,s4,[x8, #0x50]
7101f20a14  ldr x8,[x20, #0x70]
7101f20a18  ldr x8,[x8]
7101f20a1c  cbz x8,0x7101f20a3c
7101f20a20  ldr s2,[x20, #0x1e0]
7101f20a24  str wzr,[x8, #0x34]
7101f20a28  fmul s1,s1,s2
7101f20a2c  ldrb w9,[x8, #0x58]
7101f20a30  orr w9,w9,#0x10
7101f20a34  strb w9,[x8, #0x58]
7101f20a38  str s1,[x8, #0x30]
7101f20a3c  ldr x8,[x20, #0x130]
7101f20a40  ldr x8,[x8]
7101f20a44  cbz x8,0x7101f20a5c
7101f20a48  ldrb w9,[x8, #0x58]
7101f20a4c  orr w9,w9,#0x10
7101f20a50  str s0,[x8, #0x30]
7101f20a54  str wzr,[x8, #0x34]
7101f20a58  strb w9,[x8, #0x58]
7101f20a5c  ldr x8,[x20, #0x140]
7101f20a60  ldr x8,[x8]
7101f20a64  cbz x8,0x7101f20a7c
7101f20a68  ldrb w9,[x8, #0x58]
7101f20a6c  orr w9,w9,#0x10
7101f20a70  str s0,[x8, #0x30]
7101f20a74  str wzr,[x8, #0x34]
7101f20a78  strb w9,[x8, #0x58]
7101f20a7c  mov w12,#0x8889
7101f20a80  movk w12,#0x8888, LSL #16
7101f20a84  smull x10,w21,w12
7101f20a88  add w8,w21,#0x3
7101f20a8c  cmp w21,#0x0
7101f20a90  csel w8,w8,w21,lt
7101f20a94  asr w9,w8,#0x2
7101f20a98  and w8,w8,#0xfffffffc
7101f20a9c  sub w8,w21,w8
7101f20aa0  mov w1,#0x2
7101f20aa4  lsr x10,x10,#0x20
7101f20aa8  add w10,w10,w21
7101f20aac  asr w11,w10,#0x7
7101f20ab0  add w10,w11,w10, LSR #0x1f
7101f20ab4  smull x11,w9,w12
7101f20ab8  lsr x11,x11,#0x20
7101f20abc  add w11,w11,w9
7101f20ac0  asr w12,w11,#0x5
7101f20ac4  add w11,w12,w11, LSR #0x1f
7101f20ac8  orr w12,wzr,#0x3c
7101f20acc  msub w9,w11,w12,w9
7101f20ad0  mov w11,#0x19
7101f20ad4  mul w3,w8,w11
7101f20ad8  sxtw x8,w10
7101f20adc  mov w10,#0x3e7
7101f20ae0  cmp x8,#0x3e7
7101f20ae4  csel x8,x8,x10,lt
7101f20ae8  mov w10,#0x3e8
7101f20aec  mul x8,x8,x10
7101f20af0  add x2,x8,w9, SXTW 
7101f20af4  add x0,x20,#0x148
7101f20af8  bl 0x710377a310
7101f20afc  ldr x9,[x27, #0x400]
7101f20b00  ldr x10,[x27, #0x3f8]
7101f20b04  sub x9,x9,x10
7101f20b08  mov x21,#0x5c29
7101f20b0c  movk x21,#0xc28f, LSL #16
7101f20b10  movk x21,#0x28f5, LSL #32
7101f20b14  movk x21,#0x8f5c, LSL #48
7101f20b18  asr x9,x9,#0x3
7101f20b1c  mul x2,x9,x21
7101f20b20  ldrsw x8,[x20, #0x32c]
7101f20b24  cmp x2,x8
7101f20b28  b.eq 0x7101f20b58
7101f20b2c  ldr x8,[x20, #0x2a8]
7101f20b30  str w2,[x20, #0x32c]
7101f20b34  add x0,x20,#0x78
7101f20b38  ldp x9,x8,[x8, #0x8]
7101f20b3c  sub x8,x8,x9
7101f20b40  mov w9,#0xaaab
7101f20b44  movk w9,#0xaaaa, LSL #16
7101f20b48  lsr x8,x8,#0x3
7101f20b4c  mul w3,w8,w9
7101f20b50  mov w1,#0x2
7101f20b54  bl 0x710377a310
7101f20b58  ldr x9,[x27, #0x418]
7101f20b5c  ldr x10,[x27, #0x410]
7101f20b60  sub x9,x9,x10
7101f20b64  asr x9,x9,#0x3
7101f20b68  mul x2,x9,x21
7101f20b6c  ldrsw x8,[x20, #0x330]
7101f20b70  cmp x2,x8
7101f20b74  b.eq 0x7101f20ba4
7101f20b78  ldr x8,[x20, #0x2b8]
7101f20b7c  str w2,[x20, #0x330]
7101f20b80  add x0,x20,#0x88
7101f20b84  ldp x9,x8,[x8, #0x8]
7101f20b88  sub x8,x8,x9
7101f20b8c  mov w9,#0xaaab
7101f20b90  movk w9,#0xaaaa, LSL #16
7101f20b94  lsr x8,x8,#0x3
7101f20b98  mul w3,w8,w9
7101f20b9c  mov w1,#0x2
7101f20ba0  bl 0x710377a310
7101f20ba4  ldr x9,[x27, #0x430]
7101f20ba8  ldr x10,[x27, #0x428]
7101f20bac  sub x9,x9,x10
7101f20bb0  asr x9,x9,#0x3
7101f20bb4  mul x2,x9,x21
7101f20bb8  ldrsw x8,[x20, #0x334]
7101f20bbc  cmp x2,x8
7101f20bc0  b.eq 0x7101f20bf0
7101f20bc4  ldr x8,[x20, #0x2c8]
7101f20bc8  str w2,[x20, #0x334]
7101f20bcc  add x0,x20,#0x98
7101f20bd0  ldp x9,x8,[x8, #0x8]
7101f20bd4  sub x8,x8,x9
7101f20bd8  mov w9,#0xaaab
7101f20bdc  movk w9,#0xaaaa, LSL #16
7101f20be0  lsr x8,x8,#0x3
7101f20be4  mul w3,w8,w9
7101f20be8  mov w1,#0x2
7101f20bec  bl 0x710377a310
7101f20bf0  cmp w19,#0x8
7101f20bf4  b.ne 0x7101f20e98
7101f20bf8  ldr s0,[x27, #0x46c]
7101f20bfc  scvtf s0,s0
7101f20c00  ldr s1,[x20, #0x230]
7101f20c04  ldr s2,[x20, #0x168]
7101f20c08  fmul s0,s2,s0
7101f20c0c  fmul s1,s1,s10
7101f20c10  fdiv s0,s0,s1
7101f20c14  ldr w8,[x27, #0x4cc]
7101f20c18  cmp w8,#0x5
7101f20c1c  b.eq 0x7101f20cb4
7101f20c20  cmp w8,#0x4
7101f20c24  b.ne 0x7101f20e98
7101f20c28  ldr x8,[x20, #0xb0]
7101f20c2c  ldr x8,[x8]
7101f20c30  cbz x8,0x7101f20c44
7101f20c34  ldrb w9,[x8, #0x58]
7101f20c38  orr w9,w9,#0x10
7101f20c3c  str xzr,[x8, #0x30]
7101f20c40  strb w9,[x8, #0x58]
7101f20c44  ldr x8,[x20, #0xc0]
7101f20c48  ldr x8,[x8]
7101f20c4c  cbz x8,0x7101f20c64
7101f20c50  ldrb w9,[x8, #0x58]
7101f20c54  orr w9,w9,#0x10
7101f20c58  str s0,[x8, #0x30]
7101f20c5c  str wzr,[x8, #0x34]
7101f20c60  strb w9,[x8, #0x58]
7101f20c64  ldr x8,[x20, #0xd0]
7101f20c68  ldr x8,[x8]
7101f20c6c  cbz x8,0x7101f20c80
7101f20c70  ldrb w9,[x8, #0x58]
7101f20c74  orr w9,w9,#0x10
7101f20c78  str xzr,[x8, #0x30]
7101f20c7c  strb w9,[x8, #0x58]
7101f20c80  ldr w8,[x24]
7101f20c84  cmp w8,#0x3
7101f20c88  b.cs 0x7101f22044
7101f20c8c  orr w9,wzr,#0x18
7101f20c90  madd x8,x8,x9,x27
7101f20c94  ldr x10,[x8, #0x400]
7101f20c98  ldr x9,[x8, #0x3f8]
7101f20c9c  subs x10,x10,x9
7101f20ca0  asr x10,x10,#0x3
7101f20ca4  mul x10,x10,x21
7101f20ca8  b.ne 0x7101f20db0
7101f20cac  mov w11,wzr
7101f20cb0  b 0x7101f20e00
7101f20cb4  ldr x8,[x20, #0xb0]
7101f20cb8  ldr x8,[x8]
7101f20cbc  fneg s0,s0
7101f20cc0  cbz x8,0x7101f20cd8
7101f20cc4  ldrb w9,[x8, #0x58]
7101f20cc8  orr w9,w9,#0x10
7101f20ccc  str s0,[x8, #0x30]
7101f20cd0  str wzr,[x8, #0x34]
7101f20cd4  strb w9,[x8, #0x58]
7101f20cd8  ldr x8,[x20, #0xc0]
7101f20cdc  ldr x8,[x8]
7101f20ce0  cbz x8,0x7101f20cf4
7101f20ce4  ldrb w9,[x8, #0x58]
7101f20ce8  orr w9,w9,#0x10
7101f20cec  str xzr,[x8, #0x30]
7101f20cf0  strb w9,[x8, #0x58]
7101f20cf4  ldr x8,[x20, #0xd0]
7101f20cf8  ldr x8,[x8]
7101f20cfc  cbz x8,0x7101f20d14
7101f20d00  ldrb w9,[x8, #0x58]
7101f20d04  orr w9,w9,#0x10
7101f20d08  str s0,[x8, #0x30]
7101f20d0c  str wzr,[x8, #0x34]
7101f20d10  strb w9,[x8, #0x58]
7101f20d14  ldr w8,[x24]
7101f20d18  cmp w8,#0x3
7101f20d1c  b.cs 0x7101f22044
7101f20d20  orr w9,wzr,#0x18
7101f20d24  madd x9,x8,x9,x27
7101f20d28  ldr w8,[x27, #0x468]
7101f20d2c  ldr x10,[x9, #0x400]
7101f20d30  ldr x9,[x9, #0x3f8]
7101f20d34  subs x10,x10,x9
7101f20d38  asr x10,x10,#0x3
7101f20d3c  mul x10,x10,x21
7101f20d40  b.ne 0x7101f20e24
7101f20d44  mov w11,wzr
7101f20d48  cmp x10,w11, SXTW 
7101f20d4c  b.hi 0x7101f20e74
7101f20d50  b 0x7101f20e98
7101f20d54  adrp x1,0x7104401000
7101f20d58  add x1,x1,#0xdfe
7101f20d5c  sub x0,x29,#0xd0
7101f20d60  bl 0x71039c2880
7101f20d64  ldr w8,[x27, #0x4cc]
7101f20d68  ldr x24,[sp, #0x48]
7101f20d6c  cmp w8,#0x5
7101f20d70  b.eq 0x7101f21fd8
7101f20d74  cmp w8,#0x4
7101f20d78  b.ne 0x7101f20470
7101f20d7c  ldr x8,[x20]
7101f20d80  ldr x8,[x8]
7101f20d84  ldurb w9,[x29, #-0xd0]
7101f20d88  tst w9,#0x1
7101f20d8c  add x0,x8,#0x8
7101f20d90  ldur x8,[x29, #-0xc0]
7101f20d94  csel x2,x23,x8,eq
7101f20d98  adrp x1,0x7104455000
7101f20d9c  add x1,x1,#0x364
7101f20da0  bl 0x7103778430
7101f20da4  b 0x7101f20470
7101f20da8  fmov s1,wzr
7101f20dac  b 0x7101f2098c
7101f20db0  ldr w12,[x27, #0x468]
7101f20db4  ldr w13,[x27, #0x46c]
7101f20db8  mov x11,xzr
7101f20dbc  mov w14,wzr
7101f20dc0  add w12,w13,w12
7101f20dc4  add x13,x9,#0x2c
7101f20dc8  ldur w15,[x13, #-0x2c]
7101f20dcc  cbz w15,0x7101f20dd4
7101f20dd0  ldur w14,[x13, #-0x4]
7101f20dd4  ldr w15,[x13]
7101f20dd8  add w15,w15,w14
7101f20ddc  cmp w14,w12
7101f20de0  b.ge 0x7101f20dec
7101f20de4  cmp w15,w12
7101f20de8  b.ge 0x7101f20e00
7101f20dec  add x11,x11,#0x1
7101f20df0  add x13,x13,#0xc8
7101f20df4  cmp x10,x11
7101f20df8  mov w14,w15
7101f20dfc  b.hi 0x7101f20dc8
7101f20e00  sxtw x12,w11
7101f20e04  cmp x10,x12
7101f20e08  b.ls 0x7101f20e98
7101f20e0c  mov w11,#0xc8
7101f20e10  madd x11,x12,x11,x9
7101f20e14  ldr w11,[x11, #0x28]
7101f20e18  tbnz w12,#0x1f,0x7101f22004
7101f20e1c  mov w8,wzr
7101f20e20  b 0x7101f22020
7101f20e24  mov x11,xzr
7101f20e28  mov w14,wzr
7101f20e2c  add w12,w8,#0x1
7101f20e30  add x13,x9,#0x2c
7101f20e34  ldur w15,[x13, #-0x2c]
7101f20e38  cbz w15,0x7101f20e40
7101f20e3c  ldur w14,[x13, #-0x4]
7101f20e40  ldr w15,[x13]
7101f20e44  add w15,w15,w14
7101f20e48  cmp w14,w12
7101f20e4c  b.gt 0x7101f20e58
7101f20e50  cmp w15,w12
7101f20e54  b.gt 0x7101f20e6c
7101f20e58  add x11,x11,#0x1
7101f20e5c  add x13,x13,#0xc8
7101f20e60  cmp x10,x11
7101f20e64  mov w14,w15
7101f20e68  b.hi 0x7101f20e34
7101f20e6c  cmp x10,w11, SXTW 
7101f20e70  b.ls 0x7101f20e98
7101f20e74  sxtw x11,w11
7101f20e78  add x11,x11,#0x1
7101f20e7c  cmp x10,x11
7101f20e80  b.ls 0x7101f21fcc
7101f20e84  mov w10,#0xc8
7101f20e88  madd x9,x11,x10,x9
7101f20e8c  ldr w9,[x9, #0x28]
7101f20e90  sub w9,w9,#0x1
7101f20e94  b 0x7101f21fd0
7101f20e98  str xzr,[sp, #0x8]
7101f20e9c  mov w8,#0x56a8
7101f20ea0  add x8,x27,x8
7101f20ea4  str x8,[sp, #0x20]
7101f20ea8  ldr w8,[x27, #0x444]
7101f20eac  add x16,x27,#0x428
7101f20eb0  str x16,[sp, #0x18]
7101f20eb4  cmp w8,#0x1
7101f20eb8  b.ne 0x7101f20f18
7101f20ebc  ldrb w9,[x27, #0x4fe]
7101f20ec0  ldr w8,[x20, #0x17c]
7101f20ec4  add x15,x20,#0x17c
7101f20ec8  ldr w11,[x27, #0x46c]
7101f20ecc  str x15,[sp, #0x10]
7101f20ed0  cbz w9,0x7101f20f28
7101f20ed4  ldr x9,[x27, #0x410]
7101f20ed8  ldr x10,[x27, #0x418]
7101f20edc  cmp x9,x10
7101f20ee0  b.eq 0x7101f20f64
7101f20ee4  sub w11,w8,w11
7101f20ee8  add w8,w11,w8
7101f20eec  ldr w12,[x9, #0x28]
7101f20ef0  ldp w13,w14,[x9, #0x48]
7101f20ef4  add w12,w13,w12
7101f20ef8  add w13,w12,w14
7101f20efc  cmp w8,w12
7101f20f00  ccmp w13,w11,#0x4,gt
7101f20f04  b.gt 0x7101f20f6c
7101f20f08  add x9,x9,#0xc8
7101f20f0c  cmp x10,x9
7101f20f10  b.ne 0x7101f20eec
7101f20f14  b 0x7101f20f64
7101f20f18  add x8,x20,#0x17c
7101f20f1c  stur wzr,[x29, #-0x78]
7101f20f20  str x8,[sp, #0x10]
7101f20f24  b 0x7101f20f74
7101f20f28  ldr x9,[x27, #0x410]
7101f20f2c  ldr x10,[x27, #0x418]
7101f20f30  cmp x9,x10
7101f20f34  b.eq 0x7101f20f64
7101f20f38  add w11,w11,w8
7101f20f3c  ldr w12,[x9, #0x28]
7101f20f40  ldp w13,w14,[x9, #0x48]
7101f20f44  add w12,w13,w12
7101f20f48  add w13,w12,w14
7101f20f4c  cmp w11,w12
7101f20f50  ccmp w13,w8,#0x4,gt
7101f20f54  b.gt 0x7101f20f6c
7101f20f58  add x9,x9,#0xc8
7101f20f5c  cmp x10,x9
7101f20f60  b.ne 0x7101f20f3c
7101f20f64  stur wzr,[x29, #-0x78]
7101f20f68  b 0x7101f20f74
7101f20f6c  mov w8,#0x1
7101f20f70  stur w8,[x29, #-0x78]
7101f20f74  stp x28,x27,[sp, #0x38]
7101f20f78  ldr x10,[x20, #0x298]
7101f20f7c  ldr w9,[x20, #0x188]
7101f20f80  stur w19,[x29, #-0x74]
7101f20f84  orr w11,wzr,#0x3c
7101f20f88  ldp x27,x23,[x10]
7101f20f8c  mul w9,w9,w11
7101f20f90  scvtf s2,w9
7101f20f94  sub x9,x23,x27
7101f20f98  mov x10,#0x6db7
7101f20f9c  movk x10,#0xb6db, LSL #16
7101f20fa0  movk x10,#0xdb6d, LSL #32
7101f20fa4  movk x10,#0x6db6, LSL #48
7101f20fa8  asr x9,x9,#0x3
7101f20fac  mul x10,x9,x10
7101f20fb0  ldr w9,[x20, #0x178]
7101f20fb4  sub x10,x10,#0x1
7101f20fb8  ldr s0,[x20, #0x190]
7101f20fbc  ucvtf s3,x10
7101f20fc0  adrp x10,0x7104545000
7101f20fc4  add x10,x10,#0xe1c
7101f20fc8  fdiv s3,s2,s3
7101f20fcc  ldr s1,[x20, #0x230]
7101f20fd0  ldr s8,[x20, #0x168]
7101f20fd4  mov x8,xzr
7101f20fd8  ldr w11,[x10, x8, LSL #0x0]
7101f20fdc  lsl w25,w11,#0x2
7101f20fe0  scvtf s2,w25
7101f20fe4  fcmp s3,s2
7101f20fe8  b.ls 0x7101f20ff8
7101f20fec  cmp x8,#0x20
7101f20ff0  add x8,x8,#0x4
7101f20ff4  b.ne 0x7101f20fd8
7101f20ff8  cmp x27,x23
7101f20ffc  b.eq 0x7101f2112c
7101f21000  sdiv w8,w9,w25
7101f21004  fmul s11,s1,s10
7101f21008  fmul s0,s0,s8
7101f2100c  fdiv s12,s0,s11
7101f21010  fmov s9,0x3f800000
7101f21014  str w22,[sp, #0x4]
7101f21018  adrp x22,0x71043cd000
7101f2101c  add x22,x22,#0x335
7101f21020  adrp x28,0x7104292000
7101f21024  add x28,x28,#0x57e
7101f21028  orr w26,wzr,#0x3c
7101f2102c  mov w24,#0x3e7
7101f21030  mov w19,#0x3e8
7101f21034  msub w9,w8,w25,w9
7101f21038  scvtf s1,w9
7101f2103c  fdiv s1,s1,s2
7101f21040  scvtf s2,w8
7101f21044  frintp s1,s1
7101f21048  fadd s1,s1,s2
7101f2104c  fcvtzs w8,s1
7101f21050  mul w21,w25,w8
7101f21054  scvtf s0,w21
7101f21058  fmul s0,s8,s0
7101f2105c  fdiv s0,s0,s11
7101f21060  ldr x8,[x27, #0x18]
7101f21064  ldr x8,[x8]
7101f21068  cbz x8,0x7101f21080
7101f2106c  ldrb w9,[x8, #0x58]
7101f21070  orr w9,w9,#0x10
7101f21074  str s0,[x8, #0x30]
7101f21078  str wzr,[x8, #0x34]
7101f2107c  strb w9,[x8, #0x58]
7101f21080  fcmp s0,s12
7101f21084  ldr x0,[x27, #0x8]
7101f21088  mov v0.16B,v9.16B
7101f2108c  csel x1,x28,x22,ge
7101f21090  bl 0x7103778300
7101f21094  ldr w8,[x27, #0x30]
7101f21098  cmp w21,w8
7101f2109c  b.eq 0x7101f2110c
7101f210a0  mov w9,#0x8889
7101f210a4  movk w9,#0x8888, LSL #16
7101f210a8  mov w11,w9
7101f210ac  smull x9,w21,w9
7101f210b0  add w8,w21,#0x3
7101f210b4  cmp w21,#0x0
7101f210b8  csel w8,w8,w21,lt
7101f210bc  asr w8,w8,#0x2
7101f210c0  str w21,[x27, #0x30]
7101f210c4  lsr x9,x9,#0x20
7101f210c8  add w9,w9,w21
7101f210cc  asr w10,w9,#0x7
7101f210d0  add w9,w10,w9, LSR #0x1f
7101f210d4  smull x10,w8,w11
7101f210d8  sxtw x9,w9
7101f210dc  lsr x10,x10,#0x20
7101f210e0  add w10,w10,w8
7101f210e4  cmp x9,#0x3e7
7101f210e8  csel x9,x9,x24,lt
7101f210ec  asr w11,w10,#0x5
7101f210f0  add w10,w11,w10, LSR #0x1f
7101f210f4  mul x9,x9,x19
7101f210f8  msub w8,w10,w26,w8
7101f210fc  add x2,x9,w8, SXTW 
7101f21100  add x0,x27,#0x20
7101f21104  mov w1,#0x1
7101f21108  bl 0x710377a310
7101f2110c  add x27,x27,#0x38
7101f21110  add w21,w21,w25
7101f21114  cmp x23,x27
7101f21118  b.ne 0x7101f21054
7101f2111c  ldr s1,[x20, #0x230]
7101f21120  ldr s8,[x20, #0x168]
7101f21124  ldr x24,[sp, #0x48]
7101f21128  ldr w22,[sp, #0x4]
7101f2112c  ldp x28,x26,[sp, #0x38]
7101f21130  ldr x8,[x26, #0x340]
7101f21134  add x2,x8,#0x178
7101f21138  ldr x8,[x20, #0x308]
7101f2113c  ldr s0,[x20, #0x1e0]
7101f21140  ldr w3,[x20, #0x17c]
7101f21144  ldr x19,[sp, #0x30]
7101f21148  ldr x8,[x8, #0x38]
7101f2114c  ldur w21,[x29, #-0x74]
7101f21150  ldr x23,[sp, #0x18]
7101f21154  cbz x8,0x7101f21160
7101f21158  ldr w5,[x8, #0x254]
7101f2115c  b 0x7101f21164
7101f21160  mov w5,#0x1
7101f21164  ldr w6,[x20, #0x174]
7101f21168  ldr x0,[x20, #0x2a8]
7101f2116c  mov v2.16B,v8.16B
7101f21170  mov x1,x28
7101f21174  mov w4,w21
7101f21178  mov x7,x19
7101f2117c  bl 0x7101f41a50
7101f21180  ldr x8,[x26, #0x340]
7101f21184  add x2,x8,#0x178
7101f21188  ldr x8,[x20, #0x308]
7101f2118c  ldr s0,[x20, #0x1e0]
7101f21190  ldr s1,[x20, #0x230]
7101f21194  ldr s2,[x20, #0x168]
7101f21198  ldr w3,[x20, #0x17c]
7101f2119c  ldr x8,[x8, #0x38]
7101f211a0  cbz x8,0x7101f211ac
7101f211a4  ldr w5,[x8, #0x254]
7101f211a8  b 0x7101f211b0
7101f211ac  mov w5,#0x1
7101f211b0  ldr w6,[x20, #0x174]
7101f211b4  ldr x0,[x20, #0x2b8]
7101f211b8  mov x1,x19
7101f211bc  mov w4,w21
7101f211c0  mov x7,x19
7101f211c4  bl 0x7101f41a50
7101f211c8  ldr x8,[x26, #0x340]
7101f211cc  add x2,x8,#0x178
7101f211d0  ldr x8,[x20, #0x308]
7101f211d4  ldr s0,[x20, #0x1e0]
7101f211d8  ldr s1,[x20, #0x230]
7101f211dc  ldr s2,[x20, #0x168]
7101f211e0  ldr w3,[x20, #0x17c]
7101f211e4  ldr x8,[x8, #0x38]
7101f211e8  cbz x8,0x7101f211f4
7101f211ec  ldr w5,[x8, #0x254]
7101f211f0  b 0x7101f211f8
7101f211f4  mov w5,#0x1
7101f211f8  ldr w6,[x20, #0x174]
7101f211fc  ldr x0,[x20, #0x2c8]
7101f21200  mov x1,x23
7101f21204  mov w4,w21
7101f21208  mov x7,x19
7101f2120c  bl 0x7101f41a50
7101f21210  ldr x19,[x20, #0x2d8]
7101f21214  ldr s8,[x20, #0x1e0]
7101f21218  ldr s9,[x20, #0x230]
7101f2121c  ldr s11,[x20, #0x168]
7101f21220  ldrb w8,[x19, #0x44]
7101f21224  ldr w21,[x20, #0x17c]
7101f21228  cmp w22,w8
7101f2122c  b.eq 0x7101f21254
7101f21230  ldr x0,[x19, #0x8]
7101f21234  fmov s0,0x3f800000
7101f21238  adrp x8,0x71042b4000
7101f2123c  add x8,x8,#0xcb0
7101f21240  adrp x9,0x71043cf000
7101f21244  add x9,x9,#0xd1d
7101f21248  cmp w22,#0x0
7101f2124c  csel x1,x9,x8,ne
7101f21250  bl 0x7103778300
7101f21254  fmul s0,s8,s11
7101f21258  fmul s1,s9,s10
7101f2125c  fdiv s0,s0,s1
7101f21260  ldr x8,[x19, #0x18]
7101f21264  strb w22,[x19, #0x44]
7101f21268  ldr x8,[x8]
7101f2126c  cbz x8,0x7101f21284
7101f21270  ldrb w9,[x8, #0x58]
7101f21274  orr w9,w9,#0x10
7101f21278  str s0,[x8, #0x30]
7101f2127c  str wzr,[x8, #0x34]
7101f21280  strb w9,[x8, #0x58]
7101f21284  ldr x8,[x19, #0x28]
7101f21288  ldr x8,[x8]
7101f2128c  cbz x8,0x7101f212a4
7101f21290  ldrb w9,[x8, #0x58]
7101f21294  orr w9,w9,#0x10
7101f21298  str s0,[x8, #0x30]
7101f2129c  str wzr,[x8, #0x34]
7101f212a0  strb w9,[x8, #0x58]
7101f212a4  ldr w8,[x19, #0x40]
7101f212a8  cmp w8,w21
7101f212ac  b.eq 0x7101f21338
7101f212b0  mov w10,#0x8889
7101f212b4  movk w10,#0x8888, LSL #16
7101f212b8  mov w12,w10
7101f212bc  smull x10,w21,w10
7101f212c0  add w8,w21,#0x3
7101f212c4  cmp w21,#0x0
7101f212c8  csel w8,w8,w21,lt
7101f212cc  asr w9,w8,#0x2
7101f212d0  str w21,[x19, #0x40]
7101f212d4  mov w1,#0x2
7101f212d8  lsr x10,x10,#0x20
7101f212dc  add w10,w10,w21
7101f212e0  asr w11,w10,#0x7
7101f212e4  add w10,w11,w10, LSR #0x1f
7101f212e8  smull x11,w9,w12
7101f212ec  lsr x11,x11,#0x20
7101f212f0  add w11,w11,w9
7101f212f4  asr w12,w11,#0x5
7101f212f8  add w11,w12,w11, LSR #0x1f
7101f212fc  orr w12,wzr,#0x3c
7101f21300  and w8,w8,#0xfffffffc
7101f21304  sub w8,w21,w8
7101f21308  add x0,x19,#0x30
7101f2130c  msub w9,w11,w12,w9
7101f21310  mov w11,#0x19
7101f21314  mul w3,w8,w11
7101f21318  sxtw x8,w10
7101f2131c  mov w10,#0x3e7
7101f21320  cmp x8,#0x3e7
7101f21324  csel x8,x8,x10,lt
7101f21328  mov w10,#0x3e8
7101f2132c  mul x8,x8,x10
7101f21330  add x2,x8,w9, SXTW 
7101f21334  bl 0x710377a310
7101f21338  ldr w27,[x26, #0x440]
7101f2133c  cmp w27,#0x3
7101f21340  b.cs 0x7101f22044
7101f21344  ldr s2,[x26, #0x46c]
7101f21348  scvtf s2,s2
7101f2134c  ldr s0,[x20, #0x168]
7101f21350  ldr s1,[x20, #0x230]
7101f21354  ldr x25,[x20, #0x2e8]
7101f21358  fmul s3,s0,s2
7101f2135c  fmul s2,s1,s10
7101f21360  fdiv s8,s3,s2
7101f21364  ldr x19,[x26, #0x340]
7101f21368  cbz w27,0x7101f213a8
7101f2136c  ldr s1,[x26, #0x488]
7101f21370  ldr s4,[x26, #0x48c]
7101f21374  orr w8,wzr,#0x18
7101f21378  scvtf s3,s1
7101f2137c  fmul s1,s0,s3
7101f21380  scvtf s4,s4
7101f21384  fadd s3,s3,s4
7101f21388  fmul s0,s3,s0
7101f2138c  fdiv s1,s1,s2
7101f21390  fdiv s2,s0,s2
7101f21394  madd x23,x27,x8,x25
7101f21398  ldr x0,[x23, #0x8]!
7101f2139c  mov v0.16B,v8.16B
7101f213a0  bl 0x7101f3da50
7101f213a4  b 0x7101f213bc
7101f213a8  orr w8,wzr,#0x18
7101f213ac  madd x23,x27,x8,x25
7101f213b0  mov v0.16B,v8.16B
7101f213b4  ldr x0,[x23, #0x8]!
7101f213b8  bl 0x7101f3d820
7101f213bc  ldrb w8,[x26, #0x4fe]
7101f213c0  cmp w8,#0x0
7101f213c4  ldr x8,[x23]
7101f213c8  fneg s0,s8
7101f213cc  fmov s9,wzr
7101f213d0  fcsel s0,s9,s0,eq
7101f213d4  ldr s1,[x8, #0x214]
7101f213d8  fcmp s1,s0
7101f213dc  add x22,x19,#0x178
7101f213e0  b.eq 0x7101f21408
7101f213e4  str s0,[x8, #0x214]
7101f213e8  ldr x8,[x8, #0x18]
7101f213ec  ldr x8,[x8]
7101f213f0  cbz x8,0x7101f21408
7101f213f4  ldrb w9,[x8, #0x58]
7101f213f8  orr w9,w9,#0x10
7101f213fc  str s0,[x8, #0x30]
7101f21400  str wzr,[x8, #0x34]
7101f21404  strb w9,[x8, #0x58]
7101f21408  ldur w9,[x29, #-0x74]
7101f2140c  ldrb w8,[x25, #0x48]
7101f21410  cmp w9,#0x2
7101f21414  b.ne 0x7101f2144c
7101f21418  cbnz w8,0x7101f2146c
7101f2141c  mov w8,#0x1
7101f21420  strb w8,[x25, #0x48]
7101f21424  ldr w8,[x26, #0x4cc]
7101f21428  cmp w8,#0x3
7101f2142c  b.eq 0x7101f21f78
7101f21430  cmp w8,#0x2
7101f21434  b.ne 0x7101f21fb8
7101f21438  ldr x8,[x23]
7101f2143c  ldr x0,[x8, #0x8]
7101f21440  adrp x1,0x71042f8000
7101f21444  add x1,x1,#0xd14
7101f21448  b 0x7101f21464
7101f2144c  cbz w8,0x7101f2146c
7101f21450  strb wzr,[x25, #0x48]
7101f21454  ldr x8,[x23]
7101f21458  ldr x0,[x8, #0x8]
7101f2145c  adrp x1,0x71042c5000
7101f21460  add x1,x1,#0x702
7101f21464  fmov s0,0x3f800000
7101f21468  bl 0x7103778300
7101f2146c  ldp w9,w19,[x29, #-0x78]
7101f21470  ldr x0,[x23]
7101f21474  cmp w27,#0x0
7101f21478  cset w8,eq
7101f2147c  and w4,w8,w9
7101f21480  mov x1,x24
7101f21484  mov x2,x22
7101f21488  mov w3,w19
7101f2148c  bl 0x7101f3d240
7101f21490  ldr s1,[x26, #0x46c]
7101f21494  scvtf s1,s1
7101f21498  ldr s0,[x20, #0x230]
7101f2149c  ldr s2,[x20, #0x168]
7101f214a0  fmul s4,s2,s1
7101f214a4  fmul s3,s0,s10
7101f214a8  ldr s1,[x26, #0x488]
7101f214ac  ldr s5,[x26, #0x48c]
7101f214b0  scvtf s5,s5
7101f214b4  fdiv s0,s4,s3
7101f214b8  scvtf s4,s1
7101f214bc  fmul s1,s2,s4
7101f214c0  fadd s4,s4,s5
7101f214c4  fmul s2,s4,s2
7101f214c8  fdiv s1,s1,s3
7101f214cc  fdiv s2,s2,s3
7101f214d0  ldr x27,[x20, #0x2f8]
7101f214d4  ldr x8,[x26, #0x340]
7101f214d8  ldr x0,[x27, #0x8]
7101f214dc  add x25,x8,#0x178
7101f214e0  bl 0x7101f3da50
7101f214e4  ldrb w8,[x27, #0x20]
7101f214e8  cmp w19,#0x8
7101f214ec  b.ne 0x7101f21798
7101f214f0  cbnz w8,0x7101f21604
7101f214f4  ldr x0,[x27, #0x18]
7101f214f8  str x25,[sp, #0x48]
7101f214fc  ldp x8,x9,[x0, #0x180]
7101f21500  sub x8,x9,x8
7101f21504  lsr x8,x8,#0x3
7101f21508  cmp w8,#0x1
7101f2150c  b.lt 0x7101f215e0
7101f21510  fmov s8,0x3f800000
7101f21514  mov w23,wzr
7101f21518  adrp x28,0x7104328000
7101f2151c  add x28,x28,#0x277
7101f21520  adrp x25,0x710523d000
7101f21524  add x25,x25,#0x988
7101f21528  adrp x22,0x710523d000
7101f2152c  add x22,x22,#0x9a8
7101f21530  ldr x9,[x0, #0x1b8]
7101f21534  cbz x9,0x7101f21588
7101f21538  add x10,x0,#0x1b8
7101f2153c  mov x8,x10
7101f21540  ldr w11,[x9, #0x20]
7101f21544  cmp w11,w23
7101f21548  cset w11,lt
7101f2154c  csel x8,x8,x9,lt
7101f21550  ldr x9,[x9, w11, UXTW #0x3]
7101f21554  cbnz x9,0x7101f21540
7101f21558  cmp x8,x10
7101f2155c  b.eq 0x7101f21588
7101f21560  ldr w9,[x8, #0x20]
7101f21564  cmp w9,w23
7101f21568  b.gt 0x7101f21588
7101f2156c  ldr x8,[x8, #0x28]
7101f21570  cbz x8,0x7101f21588
7101f21574  ldr x1,[x8, #0x88]
7101f21578  add x0,x0,#0x160
7101f2157c  add x8,sp,#0x90
7101f21580  bl 0x7103776640
7101f21584  b 0x7101f21590
7101f21588  add x0,sp,#0x90
7101f2158c  bl 0x7103776290
7101f21590  ldr x21,[sp, #0x98]
7101f21594  mov v0.16B,v8.16B
7101f21598  mov x1,x28
7101f2159c  mov x0,x21
7101f215a0  bl 0x7103778300
7101f215a4  stp x25,xzr,[sp, #0x90]
7101f215a8  cbz x21,0x7101f215c4
7101f215ac  ldr x0,[x21, #0x18]
7101f215b0  stp x22,xzr,[x21, #0x10]
7101f215b4  cbz x0,0x7101f215bc
7101f215b8  bl 0x710392eb40
7101f215bc  mov x0,x21
7101f215c0  bl 0x710392eb40
7101f215c4  ldr x0,[x27, #0x18]
7101f215c8  ldp x8,x9,[x0, #0x180]
7101f215cc  sub x8,x9,x8
7101f215d0  add w23,w23,#0x1
7101f215d4  lsr x8,x8,#0x3
7101f215d8  cmp w23,w8
7101f215dc  b.lt 0x7101f21530
7101f215e0  ldr x8,[x0]
7101f215e4  ldr x8,[x8, #0x70]
7101f215e8  mov w1,#0x1
7101f215ec  mov w19,#0x1
7101f215f0  blr x8
7101f215f4  strb w19,[x27, #0x20]
7101f215f8  ldp x28,x26,[sp, #0x38]
7101f215fc  ldur w19,[x29, #-0x74]
7101f21600  ldr x25,[sp, #0x48]
7101f21604  ldr x1,[x27, #0x18]
7101f21608  add x0,sp,#0x90
7101f2160c  mov w2,wzr
7101f21610  bl 0x7103771d60
7101f21614  ldr x21,[sp, #0x98]
7101f21618  ldr x0,[x21]
7101f2161c  cbz x0,0x7101f21638
7101f21620  ldr w8,[sp, #0x8]
7101f21624  eor w1,w8,#0x1
7101f21628  ldr x8,[x0]
7101f2162c  ldr x8,[x8, #0x388]
7101f21630  mov w2,wzr
7101f21634  blr x8
7101f21638  adrp x23,0x710523d000
7101f2163c  add x23,x23,#0x9c8
7101f21640  stp x23,xzr,[sp, #0x90]
7101f21644  cbz x21,0x7101f21650
7101f21648  mov x0,x21
7101f2164c  bl 0x710392eb40
7101f21650  ldr x1,[x27, #0x18]
7101f21654  ldr x9,[x1, #0x1b8]
7101f21658  cbz x9,0x7101f216cc
7101f2165c  add x10,x1,#0x1b8
7101f21660  mov x8,x10
7101f21664  ldr w11,[x9, #0x20]
7101f21668  cmp w11,#0x0
7101f2166c  cset w11,lt
7101f21670  csel x8,x8,x9,lt
7101f21674  ldr x9,[x9, w11, UXTW #0x3]
7101f21678  cbnz x9,0x7101f21664
7101f2167c  cmp x8,x10
7101f21680  b.eq 0x7101f216cc
7101f21684  ldr w9,[x8, #0x20]
7101f21688  cmp w9,#0x0
7101f2168c  b.gt 0x7101f216cc
7101f21690  ldr x21,[x8, #0x28]
7101f21694  cbz x21,0x7101f216cc
7101f21698  ldr x8,[x21]
7101f2169c  ldr w22,[sp, #0x8]
7101f216a0  mov x0,x21
7101f216a4  ldr x8,[x8, #0x208]
7101f216a8  mov w1,w22
7101f216ac  blr x8
7101f216b0  ldr x8,[x21]
7101f216b4  ldr x8,[x8, #0x388]
7101f216b8  eor w1,w22,#0x1
7101f216bc  mov x0,x21
7101f216c0  mov w2,wzr
7101f216c4  blr x8
7101f216c8  ldr x1,[x27, #0x18]
7101f216cc  add x0,sp,#0x90
7101f216d0  mov w2,#0x1
7101f216d4  bl 0x7103771d60
7101f216d8  ldr x21,[sp, #0x98]
7101f216dc  ldr x0,[x21]
7101f216e0  cbz x0,0x7101f216fc
7101f216e4  ldr w8,[sp, #0xc]
7101f216e8  eor w1,w8,#0x1
7101f216ec  ldr x8,[x0]
7101f216f0  ldr x8,[x8, #0x388]
7101f216f4  mov w2,wzr
7101f216f8  blr x8
7101f216fc  stp x23,xzr,[sp, #0x90]
7101f21700  cbz x21,0x7101f2170c
7101f21704  mov x0,x21
7101f21708  bl 0x710392eb40
7101f2170c  ldr x8,[x27, #0x18]
7101f21710  ldr x9,[x8, #0x1b8]
7101f21714  mov x23,#0x5c29
7101f21718  movk x23,#0xc28f, LSL #16
7101f2171c  movk x23,#0x28f5, LSL #32
7101f21720  movk x23,#0x8f5c, LSL #48
7101f21724  cbz x9,0x7101f217c4
7101f21728  add x10,x8,#0x1b8
7101f2172c  mov x8,x10
7101f21730  ldr w11,[x9, #0x20]
7101f21734  cmp w11,#0x1
7101f21738  cset w11,lt
7101f2173c  csel x8,x8,x9,lt
7101f21740  ldr x9,[x9, w11, UXTW #0x3]
7101f21744  cbnz x9,0x7101f21730
7101f21748  cmp x8,x10
7101f2174c  b.eq 0x7101f217c4
7101f21750  ldr w9,[x8, #0x20]
7101f21754  cmp w9,#0x1
7101f21758  b.gt 0x7101f217c4
7101f2175c  ldr x21,[x8, #0x28]
7101f21760  cbz x21,0x7101f217c4
7101f21764  ldr x8,[x21]
7101f21768  ldr w22,[sp, #0xc]
7101f2176c  mov x0,x21
7101f21770  ldr x8,[x8, #0x208]
7101f21774  mov w1,w22
7101f21778  blr x8
7101f2177c  ldr x8,[x21]
7101f21780  ldr x8,[x8, #0x388]
7101f21784  eor w1,w22,#0x1
7101f21788  mov x0,x21
7101f2178c  mov w2,wzr
7101f21790  blr x8
7101f21794  b 0x7101f217c4
7101f21798  mov x23,#0x5c29
7101f2179c  movk x23,#0xc28f, LSL #16
7101f217a0  movk x23,#0x28f5, LSL #32
7101f217a4  movk x23,#0x8f5c, LSL #48
7101f217a8  cbz w8,0x7101f217c4
7101f217ac  ldr x0,[x27, #0x18]
7101f217b0  ldr x8,[x0]
7101f217b4  ldr x8,[x8, #0x70]
7101f217b8  mov w1,wzr
7101f217bc  blr x8
7101f217c0  strb wzr,[x27, #0x20]
7101f217c4  ldr x0,[x27, #0x8]
7101f217c8  mov x1,x24
7101f217cc  mov x2,x25
7101f217d0  mov w3,w19
7101f217d4  mov w4,wzr
7101f217d8  bl 0x7101f3d240
7101f217dc  ldr x8,[x20, #0x308]
7101f217e0  ldr x9,[x8, #0x18]
7101f217e4  ldr x9,[x9]
7101f217e8  cbz x9,0x7101f21808
7101f217ec  adrp x10,0x71052a8000
7101f217f0  ldr x10,[x10, #0xa80]
7101f217f4  ldr q0,[x10]
7101f217f8  ldrb w10,[x9, #0x58]
7101f217fc  orr w10,w10,#0x10
7101f21800  str d0,[x9, #0x30]
7101f21804  strb w10,[x9, #0x58]
7101f21808  ldr x9,[x8, #0x28]
7101f2180c  ldr x9,[x9]
7101f21810  ldp x27,x25,[sp, #0x20]
7101f21814  cbz x9,0x7101f21878
7101f21818  movi v1.2D,#0x0
7101f2181c  ldr s3,[x9, #0x30]
7101f21820  add x10,x9,#0x34
7101f21824  ldp s0,s5,[x9, #0x50]
7101f21828  add x11,x9,#0x38
7101f2182c  ldp s4,s7,[x9, #0x48]
7101f21830  mov v2.16B,v1.16B
7101f21834  fmul s5,s5,s7
7101f21838  fmul s0,s0,s4
7101f2183c  fabs s0,s0
7101f21840  mov v2.S[0x0],v3.S[0x0]
7101f21844  fmov s4,0x3f000000
7101f21848  fmul s6,s0,s4
7101f2184c  ld1 {v2.S}[1],[x10]
7101f21850  ldrb w10,[x9, #0x5b]
7101f21854  ld1 {v2.S}[2],[x11]
7101f21858  fabs s5,s5
7101f2185c  and w11,w10,#0x3
7101f21860  cmp w11,#0x2
7101f21864  b.eq 0x7101f2188c
7101f21868  cmp w11,#0x1
7101f2186c  b.ne 0x7101f21894
7101f21870  fadd s3,s3,s6
7101f21874  b 0x7101f21890
7101f21878  adrp x9,0x71052a8000
7101f2187c  ldr x9,[x9, #0xa88]
7101f21880  ldr s3,[x9]
7101f21884  fmov s0,wzr
7101f21888  b 0x7101f21908
7101f2188c  fsub s3,s3,s6
7101f21890  mov v2.S[0x0],v3.S[0x0]
7101f21894  fmul s3,s5,s4
7101f21898  ubfx w10,w10,#0x2,#0x2
7101f2189c  cmp w10,#0x2
7101f218a0  b.eq 0x7101f218b8
7101f218a4  cmp w10,#0x1
7101f218a8  b.ne 0x7101f218c4
7101f218ac  dup s4,v2.S[0x1]
7101f218b0  fsub s3,s4,s3
7101f218b4  b 0x7101f218c0
7101f218b8  dup s4,v2.S[0x1]
7101f218bc  fadd s3,s3,s4
7101f218c0  mov v2.S[0x1],v3.S[0x0]
7101f218c4  ldr x9,[x9, #0x18]
7101f218c8  cbz x9,0x7101f21904
7101f218cc  ldp s3,s4,[x9, #0x30]
7101f218d0  fadd s3,s2,s3
7101f218d4  dup s5,v2.S[0x1]
7101f218d8  fadd s4,s5,s4
7101f218dc  dup s6,v2.S[0x2]
7101f218e0  mov v2.16B,v1.16B
7101f218e4  mov v2.S[0x0],v3.S[0x0]
7101f218e8  ldr s5,[x9, #0x38]
7101f218ec  mov v2.S[0x1],v4.S[0x0]
7101f218f0  fadd s5,s6,s5
7101f218f4  mov v2.S[0x2],v5.S[0x0]
7101f218f8  ldr x9,[x9, #0x18]
7101f218fc  cbnz x9,0x7101f218cc
7101f21900  b 0x7101f21908
7101f21904  mov v3.16B,v2.16B
7101f21908  adrp x9,0x7104472000
7101f2190c  ldr s1,[x9, #0x8b8]
7101f21910  fmov s2,0x3f000000
7101f21914  fmul s2,s0,s2
7101f21918  fadd s1,s3,s1
7101f2191c  fsub s0,s1,s2
7101f21920  fcmp s0,#0.0
7101f21924  b.pl 0x7101f21934
7101f21928  fmov s1,wzr
7101f2192c  fsub s9,s1,s0
7101f21930  b 0x7101f21954
7101f21934  adrp x9,0x7104472000
7101f21938  fadd s0,s1,s2
7101f2193c  ldr s1,[x9, #0xd58]
7101f21940  fcmp s0,s1
7101f21944  b.le 0x7101f21954
7101f21948  fsub s0,s1,s0
7101f2194c  fmov s1,wzr
7101f21950  fadd s9,s0,s1
7101f21954  ldr x8,[x8, #0x18]
7101f21958  ldr x8,[x8]
7101f2195c  cbz x8,0x7101f21974
7101f21960  ldrb w9,[x8, #0x58]
7101f21964  orr w9,w9,#0x10
7101f21968  str s9,[x8, #0x30]
7101f2196c  str wzr,[x8, #0x34]
7101f21970  strb w9,[x8, #0x58]
7101f21974  cmp w19,#0x10
7101f21978  b.ne 0x7101f21984
7101f2197c  mov w1,#0x1
7101f21980  b 0x7101f21a1c
7101f21984  ldr x8,[sp, #0x10]
7101f21988  ldr x12,[x26, #0x3f8]
7101f2198c  ldr x9,[x26, #0x400]
7101f21990  cmp x12,x9
7101f21994  ldr w8,[x8]
7101f21998  b.eq 0x7101f219f0
7101f2199c  subs x9,x9,x12
7101f219a0  b.eq 0x7101f2205c
7101f219a4  asr x9,x9,#0x3
7101f219a8  mul x9,x9,x23
7101f219ac  ldr w10,[x12]
7101f219b0  cbz w10,0x7101f219f8
7101f219b4  mov x10,xzr
7101f219b8  add x11,x12,#0x2c
7101f219bc  ldur w12,[x11, #-0x4]
7101f219c0  cmp w12,w8
7101f219c4  b.gt 0x7101f219d8
7101f219c8  ldr w13,[x11]
7101f219cc  add w12,w13,w12
7101f219d0  cmp w12,w8
7101f219d4  b.gt 0x7101f2197c
7101f219d8  add x10,x10,#0x1
7101f219dc  add x11,x11,#0xc8
7101f219e0  cmp x9,x10
7101f219e4  b.hi 0x7101f219bc
7101f219e8  mov w1,wzr
7101f219ec  b 0x7101f21a1c
7101f219f0  mov w10,wzr
7101f219f4  b 0x7101f21a14
7101f219f8  mov x11,xzr
7101f219fc  add x12,x12,#0x2c
7101f21a00  ldr w13,[x12], #0xc8
7101f21a04  add x11,x11,#0x1
7101f21a08  add w10,w13,w10
7101f21a0c  cmp x9,x11
7101f21a10  b.hi 0x7101f21a00
7101f21a14  cmp w10,w8
7101f21a18  cset w1,gt
7101f21a1c  ldr x0,[x20, #0x318]
7101f21a20  mov x2,x28
7101f21a24  mov x3,x25
7101f21a28  mov x4,x27
7101f21a2c  bl 0x7101f3e830
7101f21a30  ldrb w8,[sp, #0xc0]
7101f21a34  tbz w8,#0x0,0x7101f21a44
7101f21a38  ldr x0,[sp, #0xd0]
7101f21a3c  cbz x0,0x7101f21a44
7101f21a40  bl 0x710392eb40
7101f21a44  ldurb w8,[x29, #-0xd0]
7101f21a48  tbz w8,#0x0,0x7101f21a58
7101f21a4c  ldur x0,[x29, #-0xc0]
7101f21a50  cbz x0,0x7101f21a58
7101f21a54  bl 0x710392eb40
7101f21a58  ldr x22,[x26, #0x380]
7101f21a5c  ldr w8,[x22, #0xd8]
7101f21a60  cbz w8,0x7101f21c70
7101f21a64  ldr x9,[x26, #0x400]
7101f21a68  ldr x8,[x26, #0x3f8]
7101f21a6c  subs x9,x9,x8
7101f21a70  asr x9,x9,#0x3
7101f21a74  ldr x21,[x26, #0x340]
7101f21a78  add x20,x21,#0x178
7101f21a7c  mul x9,x9,x23
7101f21a80  b.ne 0x7101f21a8c
7101f21a84  mov w10,wzr
7101f21a88  b 0x7101f21ad8
7101f21a8c  ldr x11,[x26, #0x360]
7101f21a90  ldr w11,[x11, #0x17c]
7101f21a94  mov x10,xzr
7101f21a98  mov w13,wzr
7101f21a9c  add x12,x8,#0x2c
7101f21aa0  ldur w14,[x12, #-0x2c]
7101f21aa4  cbz w14,0x7101f21aac
7101f21aa8  ldur w13,[x12, #-0x4]
7101f21aac  ldr w14,[x12]
7101f21ab0  add w14,w14,w13
7101f21ab4  cmp w13,w11
7101f21ab8  b.gt 0x7101f21ac4
7101f21abc  cmp w14,w11
7101f21ac0  b.gt 0x7101f21ad8
7101f21ac4  add x10,x10,#0x1
7101f21ac8  add x12,x12,#0xc8
7101f21acc  cmp x9,x10
7101f21ad0  mov w13,w14
7101f21ad4  b.hi 0x7101f21aa0
7101f21ad8  sxtw x23,w10
7101f21adc  add x10,x23,#0x1
7101f21ae0  cmp x9,x10
7101f21ae4  b.ls 0x7101f21b78
7101f21ae8  mov w9,#0xc8
7101f21aec  madd x8,x10,x9,x8
7101f21af0  ldp x9,x10,[x8, #0x8]
7101f21af4  ldp x11,x12,[x8, #0x18]
7101f21af8  stp x11,x12,[sp, #0xd0]
7101f21afc  stp x9,x10,[sp, #0xc0]
7101f21b00  ldr x19,[x21, #0x180]
7101f21b04  cmp x20,x19
7101f21b08  b.eq 0x7101f21b48
7101f21b0c  ldr w24,[x8, #0x28]
7101f21b10  add x0,x19,#0x18
7101f21b14  add x1,sp,#0xc0
7101f21b18  mov w2,#0x20
7101f21b1c  bl 0x71039c0250
7101f21b20  cbnz w0,0x7101f21b3c
7101f21b24  ldr w8,[x19, #0x10]
7101f21b28  cmp w8,#0x2
7101f21b2c  b.eq 0x7101f21b4c
7101f21b30  ldr w8,[x19, #0x38]
7101f21b34  cmp w8,w24
7101f21b38  b.eq 0x7101f21b4c
7101f21b3c  ldr x19,[x19, #0x8]
7101f21b40  cmp x20,x19
7101f21b44  b.ne 0x7101f21b10
7101f21b48  mov x19,x20
7101f21b4c  cmp x20,x19
7101f21b50  b.eq 0x7101f21b70
7101f21b54  ldr x8,[x19, #0x48]
7101f21b58  ldr x8,[x8]
7101f21b5c  cbz x8,0x7101f21b70
7101f21b60  add x0,x22,#0x118
7101f21b64  add x1,x19,#0x40
7101f21b68  bl 0x7103779480
7101f21b6c  b 0x7101f21b78
7101f21b70  ldr x0,[x22, #0x120]
7101f21b74  bl 0x7103779650
7101f21b78  ldr x9,[x26, #0x400]
7101f21b7c  ldr x8,[x26, #0x3f8]
7101f21b80  sub x9,x9,x8
7101f21b84  mov x10,#0x5c29
7101f21b88  movk x10,#0xc28f, LSL #16
7101f21b8c  movk x10,#0x28f5, LSL #32
7101f21b90  movk x10,#0x8f5c, LSL #48
7101f21b94  asr x9,x9,#0x3
7101f21b98  mul x9,x9,x10
7101f21b9c  cmp x9,x23
7101f21ba0  b.ls 0x7101f2205c
7101f21ba4  mov w9,#0xc8
7101f21ba8  madd x8,x23,x9,x8
7101f21bac  ldr x22,[x22, #0x110]
7101f21bb0  ldp x9,x10,[x8, #0x8]
7101f21bb4  ldp x11,x12,[x8, #0x18]
7101f21bb8  stp x11,x12,[x29, #-0xc0]
7101f21bbc  stp x9,x10,[x29, #-0xd0]
7101f21bc0  ldr x19,[x21, #0x180]
7101f21bc4  cmp x20,x19
7101f21bc8  b.eq 0x7101f21c30
7101f21bcc  ldp w9,w8,[x8, #0x28]
7101f21bd0  add w8,w9,w8
7101f21bd4  mov x23,#0x5c29
7101f21bd8  movk x23,#0xc28f, LSL #16
7101f21bdc  movk x23,#0x28f5, LSL #32
7101f21be0  movk x23,#0x8f5c, LSL #48
7101f21be4  sub w21,w8,#0x1
7101f21be8  add x0,x19,#0x18
7101f21bec  sub x1,x29,#0xd0
7101f21bf0  mov w2,#0x20
7101f21bf4  bl 0x71039c0250
7101f21bf8  cbnz w0,0x7101f21c14
7101f21bfc  ldr w8,[x19, #0x10]
7101f21c00  cmp w8,#0x2
7101f21c04  b.eq 0x7101f21c24
7101f21c08  ldr w8,[x19, #0x38]
7101f21c0c  cmp w8,w21
7101f21c10  b.eq 0x7101f21c24
7101f21c14  ldr x19,[x19, #0x8]
7101f21c18  cmp x20,x19
7101f21c1c  b.ne 0x7101f21be8
7101f21c20  mov x19,x20
7101f21c24  cmp x20,x19
7101f21c28  b.ne 0x7101f21c4c
7101f21c2c  b 0x7101f21c68
7101f21c30  mov x23,#0x5c29
7101f21c34  movk x23,#0xc28f, LSL #16
7101f21c38  mov x19,x20
7101f21c3c  movk x23,#0x28f5, LSL #32
7101f21c40  movk x23,#0x8f5c, LSL #48
7101f21c44  cmp x20,x19
7101f21c48  b.eq 0x7101f21c68
7101f21c4c  ldr x8,[x19, #0x48]
7101f21c50  ldr x8,[x8]
7101f21c54  cbz x8,0x7101f21c68
7101f21c58  add x0,x22,#0x10
7101f21c5c  add x1,x19,#0x40
7101f21c60  bl 0x7103779480
7101f21c64  b 0x7101f21c70
7101f21c68  ldr x0,[x22, #0x18]
7101f21c6c  bl 0x7103779650
7101f21c70  ldr x0,[x26, #0x390]
7101f21c74  mov x1,x28
7101f21c78  mov x2,x25
7101f21c7c  mov x3,x27
7101f21c80  bl 0x7101f37360
7101f21c84  ldr x0,[x26, #0x3a0]
7101f21c88  mov x1,x28
7101f21c8c  mov x2,x25
7101f21c90  mov x3,x27
7101f21c94  bl 0x7101f30ff0
7101f21c98  ldr x8,[x26, #0x3b0]
7101f21c9c  ldr x0,[x8, #0x10]
7101f21ca0  mov w1,#0x1
7101f21ca4  mov x2,x28
7101f21ca8  mov x3,x25
7101f21cac  mov x4,x27
7101f21cb0  bl 0x7101f3e830
7101f21cb4  ldr x8,[x26, #0x340]
7101f21cb8  ldr x10,[x8, #0x138]
7101f21cbc  ldr x20,[x26, #0x3c0]
7101f21cc0  ldp x9,x10,[x10]
7101f21cc4  subs x12,x10,x9
7101f21cc8  b.ne 0x7101f21cd4
7101f21ccc  mov w21,wzr
7101f21cd0  b 0x7101f21cfc
7101f21cd4  asr x12,x12,#0x3
7101f21cd8  mul x12,x12,x23
7101f21cdc  mov x11,xzr
7101f21ce0  mov w21,wzr
7101f21ce4  add x13,x9,#0x2c
7101f21ce8  ldr w14,[x13], #0xc8
7101f21cec  add x11,x11,#0x1
7101f21cf0  add w21,w14,w21
7101f21cf4  cmp x12,x11
7101f21cf8  b.hi 0x7101f21ce8
7101f21cfc  ldr w11,[x20, #0x28]
7101f21d00  cmp w11,w21
7101f21d04  b.eq 0x7101f21d8c
7101f21d08  mov w9,#0x8889
7101f21d0c  movk w9,#0x8888, LSL #16
7101f21d10  mov w11,w9
7101f21d14  smull x9,w21,w9
7101f21d18  add w8,w21,#0x3
7101f21d1c  cmp w21,#0x0
7101f21d20  csel w8,w8,w21,lt
7101f21d24  asr w8,w8,#0x2
7101f21d28  str w21,[x20, #0x28]
7101f21d2c  lsr x9,x9,#0x20
7101f21d30  add w9,w9,w21
7101f21d34  asr w10,w9,#0x7
7101f21d38  add w9,w10,w9, LSR #0x1f
7101f21d3c  smull x10,w8,w11
7101f21d40  sxtw x9,w9
7101f21d44  lsr x10,x10,#0x20
7101f21d48  add w10,w10,w8
7101f21d4c  asr w11,w10,#0x5
7101f21d50  add w10,w11,w10, LSR #0x1f
7101f21d54  orr w11,wzr,#0x3c
7101f21d58  msub w8,w10,w11,w8
7101f21d5c  cmp x9,#0x3e7
7101f21d60  mov w10,#0x3e7
7101f21d64  csel x9,x9,x10,lt
7101f21d68  mov w10,#0x3e8
7101f21d6c  mul x9,x9,x10
7101f21d70  add x2,x9,w8, SXTW 
7101f21d74  add x0,x20,#0x8
7101f21d78  mov w1,#0x1
7101f21d7c  bl 0x710377a310
7101f21d80  ldr x8,[x26, #0x340]
7101f21d84  ldr x10,[x8, #0x138]
7101f21d88  ldp x9,x10,[x10]
7101f21d8c  sub x10,x10,x9
7101f21d90  asr x10,x10,#0x3
7101f21d94  mul x10,x10,x23
7101f21d98  ldrsw x11,[x8, #0x1b8]
7101f21d9c  cmp x10,x11
7101f21da0  b.ls 0x7101f21dc4
7101f21da4  mov w12,#0xc8
7101f21da8  mul x12,x11,x12
7101f21dac  ldr w12,[x9, x12, LSL #0x0]
7101f21db0  cbz w12,0x7101f21dc4
7101f21db4  mov w10,#0xc8
7101f21db8  madd x9,x11,x10,x9
7101f21dbc  ldr w12,[x9, #0x28]
7101f21dc0  b 0x7101f21dfc
7101f21dc4  cmp w11,#0x1
7101f21dc8  b.lt 0x7101f21df8
7101f21dcc  mov x13,xzr
7101f21dd0  mov w12,wzr
7101f21dd4  add x9,x9,#0x2c
7101f21dd8  cmp x10,x13
7101f21ddc  b.ls 0x7101f21dfc
7101f21de0  ldr w14,[x9], #0xc8
7101f21de4  add x13,x13,#0x1
7101f21de8  add w12,w14,w12
7101f21dec  cmp x13,x11
7101f21df0  b.lt 0x7101f21dd8
7101f21df4  b 0x7101f21dfc
7101f21df8  mov w12,wzr
7101f21dfc  ldr w8,[x8, #0x1bc]
7101f21e00  ldr w9,[x20, #0x2c]
7101f21e04  add w8,w8,w12
7101f21e08  cmp w9,w8
7101f21e0c  b.eq 0x7101f21e88
7101f21e10  mov w10,#0x8889
7101f21e14  movk w10,#0x8888, LSL #16
7101f21e18  mov w11,w10
7101f21e1c  smull x10,w8,w10
7101f21e20  add w9,w8,#0x3
7101f21e24  cmp w8,#0x0
7101f21e28  csel w9,w9,w8,lt
7101f21e2c  asr w9,w9,#0x2
7101f21e30  str w8,[x20, #0x2c]
7101f21e34  lsr x10,x10,#0x20
7101f21e38  add w8,w10,w8
7101f21e3c  asr w10,w8,#0x7
7101f21e40  add w8,w10,w8, LSR #0x1f
7101f21e44  smull x10,w9,w11
7101f21e48  sxtw x8,w8
7101f21e4c  lsr x10,x10,#0x20
7101f21e50  add w10,w10,w9
7101f21e54  asr w11,w10,#0x5
7101f21e58  add w10,w11,w10, LSR #0x1f
7101f21e5c  orr w11,wzr,#0x3c
7101f21e60  msub w9,w10,w11,w9
7101f21e64  cmp x8,#0x3e7
7101f21e68  mov w10,#0x3e7
7101f21e6c  csel x8,x8,x10,lt
7101f21e70  mov w10,#0x3e8
7101f21e74  mul x8,x8,x10
7101f21e78  add x2,x8,w9, SXTW 
7101f21e7c  add x0,x20,#0x18
7101f21e80  mov w1,#0x1
7101f21e84  bl 0x710377a310
7101f21e88  cmp w21,#0x1
7101f21e8c  b.lt 0x7101f21ecc
7101f21e90  ldr x8,[x26, #0x340]
7101f21e94  ldr x0,[x8, #0x138]
7101f21e98  ldr w1,[x8, #0x1b8]
7101f21e9c  bl 0x7101f3b1c0
7101f21ea0  mov w8,#0x4240
7101f21ea4  movk w8,#0xf, LSL #16
7101f21ea8  smull x8,w21,w8
7101f21eac  ucvtf s0,x0
7101f21eb0  lsr x8,x8,#0x2
7101f21eb4  ucvtf s1,x8
7101f21eb8  adrp x8,0x7104473000
7101f21ebc  fdiv s0,s0,s1
7101f21ec0  ldr s1,[x8, #0x91c]
7101f21ec4  fmul s0,s0,s1
7101f21ec8  b 0x7101f21ed0
7101f21ecc  fmov s0,wzr
7101f21ed0  ldr x8,[x20]
7101f21ed4  adrp x9,0x7104473000
7101f21ed8  ldr s1,[x9, #0x91c]
7101f21edc  ldr x8,[x8]
7101f21ee0  fmin s0,s0,s1
7101f21ee4  ldr x0,[x8, #0x10]
7101f21ee8  adrp x1,0x71042a3000
7101f21eec  add x1,x1,#0x845
7101f21ef0  bl 0x7103778630
7101f21ef4  ldr x8,[x26, #0x3f8]
7101f21ef8  ldr x9,[x26, #0x400]
7101f21efc  cmp x8,x9
7101f21f00  b.eq 0x7101f21f20
7101f21f04  ldr w10,[x8, #0x30]
7101f21f08  cmp w10,#0x0
7101f21f0c  cset w10,ne
7101f21f10  strb w10,[x8, #0xc1]
7101f21f14  add x8,x8,#0xc8
7101f21f18  cmp x9,x8
7101f21f1c  b.ne 0x7101f21f04
7101f21f20  ldp d9,d8,[sp, #0x160]
7101f21f24  ldr d12,[sp, #0x140]
7101f21f28  ldp d11,d10,[sp, #0x150]
7101f21f2c  ldp x29,x30,[sp, #0x1c0]
7101f21f30  ldp x20,x19,[sp, #0x1b0]
7101f21f34  ldp x22,x21,[sp, #0x1a0]
7101f21f38  ldp x24,x23,[sp, #0x190]
7101f21f3c  ldp x26,x25,[sp, #0x180]
7101f21f40  ldp x28,x27,[sp, #0x170]
7101f21f44  add sp,sp,#0x1d0
7101f21f48  ret
7101f21f4c  ldr x8,[x20]
7101f21f50  ldr x8,[x8]
7101f21f54  ldurb w9,[x29, #-0xd0]
7101f21f58  tst w9,#0x1
7101f21f5c  add x0,x8,#0x8
7101f21f60  ldur x8,[x29, #-0xc0]
7101f21f64  csel x2,x23,x8,eq
7101f21f68  adrp x1,0x71042f8000
7101f21f6c  add x1,x1,#0xc87
7101f21f70  bl 0x7103778430
7101f21f74  b 0x7101f20470
7101f21f78  ldr x8,[x23]
7101f21f7c  ldr x0,[x8, #0x8]
7101f21f80  adrp x1,0x71043be000
7101f21f84  add x1,x1,#0xef5
7101f21f88  b 0x7101f21464
7101f21f8c  ldr x8,[x20]
7101f21f90  ldr x8,[x8]
7101f21f94  ldurb w9,[x29, #-0xd0]
7101f21f98  tst w9,#0x1
7101f21f9c  add x0,x8,#0x8
7101f21fa0  ldur x8,[x29, #-0xc0]
7101f21fa4  csel x2,x23,x8,eq
7101f21fa8  adrp x1,0x7104319000
7101f21fac  add x1,x1,#0x776
7101f21fb0  bl 0x7103778430
7101f21fb4  b 0x7101f20470
7101f21fb8  ldr x8,[x23]
7101f21fbc  ldr x0,[x8, #0x8]
7101f21fc0  adrp x1,0x710437c000
7101f21fc4  add x1,x1,#0xded
7101f21fc8  b 0x7101f21464
7101f21fcc  orr w9,wzr,#0x1e00
7101f21fd0  add w8,w8,#0x4
7101f21fd4  b 0x7101f22024
7101f21fd8  ldr x8,[x20]
7101f21fdc  ldr x8,[x8]
7101f21fe0  ldurb w9,[x29, #-0xd0]
7101f21fe4  tst w9,#0x1
7101f21fe8  add x0,x8,#0x8
7101f21fec  ldur x8,[x29, #-0xc0]
7101f21ff0  csel x2,x23,x8,eq
7101f21ff4  adrp x1,0x710425f000
7101f21ff8  add x1,x1,#0xd9c
7101f21ffc  bl 0x7103778430
7101f22000  b 0x7101f20470
7101f22004  sub x12,x12,#0x1
7101f22008  cmp x10,x12
7101f2200c  b.ls 0x7101f22064
7101f22010  mov w8,#0xc8
7101f22014  madd x8,x12,x8,x9
7101f22018  ldp w9,w8,[x8, #0x28]
7101f2201c  add w8,w8,w9
7101f22020  sub w9,w11,#0x4
7101f22024  ldr w10,[x20, #0x17c]
7101f22028  cmp w10,w8
7101f2202c  cset w8,gt
7101f22030  cmp w10,w9
7101f22034  str w8,[sp, #0x8]
7101f22038  cset w8,lt
7101f2203c  str w8,[sp, #0xc]
7101f22040  b 0x7101f20e9c
7101f22044  bl 0x71039c2650
7101f22048  adrp x0,0x7105326000
7101f2204c  add x0,x0,#0x3d8
7101f22050  bl 0x71039c1330
7101f22054  add x0,x9,#0x608
7101f22058  bl 0x71039c1330
7101f2205c  mov x0,x28
7101f22060  bl 0x71039c1330
7101f22064  add x0,x8,#0x3f8
7101f22068  bl 0x71039c1330
