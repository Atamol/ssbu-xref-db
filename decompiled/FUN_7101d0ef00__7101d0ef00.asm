// addr:      7101d0ef00
// offset:    0x1d0ef00
// name:      FUN_7101d0ef00
// mangled:   
// size:      1204

7101d0ef00  sub sp,sp,#0x80
7101d0ef04  str d8,[sp, #0x10]
7101d0ef08  stp x28,x27,[sp, #0x20]
7101d0ef0c  stp x26,x25,[sp, #0x30]
7101d0ef10  stp x24,x23,[sp, #0x40]
7101d0ef14  stp x22,x21,[sp, #0x50]
7101d0ef18  stp x20,x19,[sp, #0x60]
7101d0ef1c  stp x29,x30,[sp, #0x70]
7101d0ef20  add x29,sp,#0x70
7101d0ef24  mov x21,x0
7101d0ef28  adrp x8,0x71050ae000
7101d0ef2c  add x8,x8,#0xa78
7101d0ef30  str x8,[x21], #0x8
7101d0ef34  mov x19,x0
7101d0ef38  mov x0,x21
7101d0ef3c  mov w23,w4
7101d0ef40  mov w22,w3
7101d0ef44  mov w20,w2
7101d0ef48  bl 0x7103776390
7101d0ef4c  adrp x24,0x710523d000
7101d0ef50  add x24,x24,#0x9a8
7101d0ef54  mov x25,x19
7101d0ef58  str x24,[x25, #0x50]!
7101d0ef5c  mov w0,#0x10
7101d0ef60  mov w1,#0x20
7101d0ef64  stur xzr,[x25, #-0x38]
7101d0ef68  stp xzr,xzr,[x25, #-0x10]
7101d0ef6c  stp xzr,xzr,[x25, #-0x20]
7101d0ef70  stp xzr,xzr,[x25, #-0x30]
7101d0ef74  bl 0x710392e290
7101d0ef78  cbnz x0,0x7101d0efc0
7101d0ef7c  adrp x8,0x7105332000
7101d0ef80  ldr x0,[x8, #0xf00]
7101d0ef84  cbz x0,0x7101d0efbc
7101d0ef88  mov w8,#0x20
7101d0ef8c  str wzr,[sp, #0x1c]
7101d0ef90  add x1,sp,#0x1c
7101d0ef94  str x8,[sp]
7101d0ef98  ldr x8,[x0]
7101d0ef9c  ldr x8,[x8, #0x30]
7101d0efa0  mov x2,sp
7101d0efa4  blr x8
7101d0efa8  tbz w0,#0x0,0x7101d0efbc
7101d0efac  mov w0,#0x10
7101d0efb0  mov w1,#0x20
7101d0efb4  bl 0x710392e290
7101d0efb8  cbnz x0,0x7101d0efc0
7101d0efbc  mov x0,xzr
7101d0efc0  mov x26,x19
7101d0efc4  stp xzr,xzr,[x0, #0x10]
7101d0efc8  stp xzr,xzr,[x0]
7101d0efcc  mov w1,#0x20
7101d0efd0  str x24,[x26, #0x60]!
7101d0efd4  stur x0,[x26, #-0x8]
7101d0efd8  mov w0,#0x10
7101d0efdc  bl 0x710392e290
7101d0efe0  cbnz x0,0x7101d0f028
7101d0efe4  adrp x8,0x7105332000
7101d0efe8  ldr x0,[x8, #0xf00]
7101d0efec  cbz x0,0x7101d0f024
7101d0eff0  mov w8,#0x20
7101d0eff4  str wzr,[sp, #0x1c]
7101d0eff8  add x1,sp,#0x1c
7101d0effc  str x8,[sp]
7101d0f000  ldr x8,[x0]
7101d0f004  ldr x8,[x8, #0x30]
7101d0f008  mov x2,sp
7101d0f00c  blr x8
7101d0f010  tbz w0,#0x0,0x7101d0f024
7101d0f014  mov w0,#0x10
7101d0f018  mov w1,#0x20
7101d0f01c  bl 0x710392e290
7101d0f020  cbnz x0,0x7101d0f028
7101d0f024  mov x0,xzr
7101d0f028  mov x27,x19
7101d0f02c  stp xzr,xzr,[x0, #0x10]
7101d0f030  stp xzr,xzr,[x0]
7101d0f034  mov w1,#0x20
7101d0f038  str x24,[x27, #0x70]!
7101d0f03c  stur x0,[x27, #-0x8]
7101d0f040  mov w0,#0x10
7101d0f044  bl 0x710392e290
7101d0f048  cbnz x0,0x7101d0f090
7101d0f04c  adrp x8,0x7105332000
7101d0f050  ldr x0,[x8, #0xf00]
7101d0f054  cbz x0,0x7101d0f08c
7101d0f058  mov w8,#0x20
7101d0f05c  str wzr,[sp, #0x1c]
7101d0f060  add x1,sp,#0x1c
7101d0f064  str x8,[sp]
7101d0f068  ldr x8,[x0]
7101d0f06c  ldr x8,[x8, #0x30]
7101d0f070  mov x2,sp
7101d0f074  blr x8
7101d0f078  tbz w0,#0x0,0x7101d0f08c
7101d0f07c  mov w0,#0x10
7101d0f080  mov w1,#0x20
7101d0f084  bl 0x710392e290
7101d0f088  cbnz x0,0x7101d0f090
7101d0f08c  mov x0,xzr
7101d0f090  mov x28,x19
7101d0f094  stp xzr,xzr,[x0, #0x10]
7101d0f098  stp xzr,xzr,[x0]
7101d0f09c  mov w1,#0x20
7101d0f0a0  str x24,[x28, #0x80]!
7101d0f0a4  stur x0,[x28, #-0x8]
7101d0f0a8  mov w0,#0x10
7101d0f0ac  bl 0x710392e290
7101d0f0b0  cbnz x0,0x7101d0f0f8
7101d0f0b4  adrp x8,0x7105332000
7101d0f0b8  ldr x0,[x8, #0xf00]
7101d0f0bc  cbz x0,0x7101d0f0f4
7101d0f0c0  mov w8,#0x20
7101d0f0c4  str wzr,[sp, #0x1c]
7101d0f0c8  add x1,sp,#0x1c
7101d0f0cc  str x8,[sp]
7101d0f0d0  ldr x8,[x0]
7101d0f0d4  ldr x8,[x8, #0x30]
7101d0f0d8  mov x2,sp
7101d0f0dc  blr x8
7101d0f0e0  tbz w0,#0x0,0x7101d0f0f4
7101d0f0e4  mov w0,#0x10
7101d0f0e8  mov w1,#0x20
7101d0f0ec  bl 0x710392e290
7101d0f0f0  cbnz x0,0x7101d0f0f8
7101d0f0f4  mov x0,xzr
7101d0f0f8  stp xzr,xzr,[x0, #0x10]
7101d0f0fc  stp xzr,xzr,[x0]
7101d0f100  ldr x8,[x19, #0x10]
7101d0f104  str x0,[x19, #0x88]
7101d0f108  ldr x8,[x8, #0x18]
7101d0f10c  ldr x0,[x8]
7101d0f110  cbz x0,0x7101d0f144
7101d0f114  adrp x1,0x7104422000
7101d0f118  add x1,x1,#0x5bc
7101d0f11c  bl 0x71000598d0
7101d0f120  cbz x0,0x7101d0f144
7101d0f124  ldrb w8,[x0, #0xa]
7101d0f128  cmp w8,#0x1
7101d0f12c  b.ne 0x7101d0f144
7101d0f130  ldrh w8,[x0, #0x8]
7101d0f134  cbz w8,0x7101d0f148
7101d0f138  ldr w8,[x0, #0x4]
7101d0f13c  ldr w8,[x0, x8, LSL #0x0]
7101d0f140  b 0x7101d0f148
7101d0f144  mov w8,wzr
7101d0f148  str w8,[x19, #0x18]
7101d0f14c  ldr x8,[x19, #0x10]
7101d0f150  ldr x8,[x8, #0x18]
7101d0f154  ldr x0,[x8]
7101d0f158  cbz x0,0x7101d0f18c
7101d0f15c  adrp x1,0x710439d000
7101d0f160  add x1,x1,#0x63e
7101d0f164  bl 0x71000598d0
7101d0f168  cbz x0,0x7101d0f18c
7101d0f16c  ldrb w8,[x0, #0xa]
7101d0f170  cmp w8,#0x1
7101d0f174  b.ne 0x7101d0f18c
7101d0f178  ldrh w8,[x0, #0x8]
7101d0f17c  cbz w8,0x7101d0f190
7101d0f180  ldr w8,[x0, #0x4]
7101d0f184  ldr w8,[x0, x8, LSL #0x0]
7101d0f188  b 0x7101d0f190
7101d0f18c  mov w8,wzr
7101d0f190  str w8,[x19, #0x1c]
7101d0f194  ldr x8,[x19, #0x10]
7101d0f198  ldr x8,[x8, #0x18]
7101d0f19c  ldr x0,[x8]
7101d0f1a0  str w23,[sp, #0x18]
7101d0f1a4  cbz x0,0x7101d0f1dc
7101d0f1a8  adrp x1,0x71043f0000
7101d0f1ac  add x1,x1,#0xbb9
7101d0f1b0  bl 0x71000598d0
7101d0f1b4  cbz x0,0x7101d0f1dc
7101d0f1b8  ldrb w8,[x0, #0xa]
7101d0f1bc  cmp w8,#0x1
7101d0f1c0  b.ne 0x7101d0f1dc
7101d0f1c4  ldrh w8,[x0, #0x8]
7101d0f1c8  mov w23,w20
7101d0f1cc  cbz w8,0x7101d0f1e0
7101d0f1d0  ldr w8,[x0, #0x4]
7101d0f1d4  ldr w2,[x0, x8, LSL #0x0]
7101d0f1d8  b 0x7101d0f1e4
7101d0f1dc  mov w23,w20
7101d0f1e0  mov w2,wzr
7101d0f1e4  adrp x1,0x710438c000
7101d0f1e8  add x1,x1,#0xcdd
7101d0f1ec  mov x8,sp
7101d0f1f0  mov x0,x21
7101d0f1f4  str w2,[x19, #0x20]
7101d0f1f8  mov x20,sp
7101d0f1fc  bl 0x7103776910
7101d0f200  cmp x25,x20
7101d0f204  b.eq 0x7101d0f220
7101d0f208  ldr x8,[sp, #0x8]
7101d0f20c  str xzr,[sp, #0x8]
7101d0f210  ldr x0,[x19, #0x58]
7101d0f214  str x8,[x19, #0x58]
7101d0f218  cbz x0,0x7101d0f220
7101d0f21c  bl 0x710392eb40
7101d0f220  ldr x0,[sp, #0x8]
7101d0f224  stp x24,xzr,[sp]
7101d0f228  cbz x0,0x7101d0f230
7101d0f22c  bl 0x710392eb40
7101d0f230  ldr w2,[x19, #0x20]
7101d0f234  adrp x1,0x71043f0000
7101d0f238  add x1,x1,#0xbbd
7101d0f23c  mov x8,sp
7101d0f240  mov x0,x21
7101d0f244  mov x20,sp
7101d0f248  bl 0x7103776910
7101d0f24c  cmp x26,x20
7101d0f250  b.eq 0x7101d0f26c
7101d0f254  ldr x8,[sp, #0x8]
7101d0f258  str xzr,[sp, #0x8]
7101d0f25c  ldr x0,[x19, #0x68]
7101d0f260  str x8,[x19, #0x68]
7101d0f264  cbz x0,0x7101d0f26c
7101d0f268  bl 0x710392eb40
7101d0f26c  ldr x0,[sp, #0x8]
7101d0f270  stp x24,xzr,[sp]
7101d0f274  cbz x0,0x7101d0f27c
7101d0f278  bl 0x710392eb40
7101d0f27c  adrp x1,0x7104280000
7101d0f280  add x1,x1,#0xbc8
7101d0f284  mov x8,sp
7101d0f288  mov x0,x21
7101d0f28c  mov x20,sp
7101d0f290  bl 0x7103776910
7101d0f294  cmp x27,x20
7101d0f298  b.eq 0x7101d0f2b4
7101d0f29c  ldr x8,[sp, #0x8]
7101d0f2a0  str xzr,[sp, #0x8]
7101d0f2a4  ldr x0,[x19, #0x78]
7101d0f2a8  str x8,[x19, #0x78]
7101d0f2ac  cbz x0,0x7101d0f2b4
7101d0f2b0  bl 0x710392eb40
7101d0f2b4  ldr x0,[sp, #0x8]
7101d0f2b8  stp x24,xzr,[sp]
7101d0f2bc  cbz x0,0x7101d0f2c4
7101d0f2c0  bl 0x710392eb40
7101d0f2c4  adrp x1,0x710438c000
7101d0f2c8  add x1,x1,#0xcf6
7101d0f2cc  mov x8,sp
7101d0f2d0  mov x0,x21
7101d0f2d4  mov x20,sp
7101d0f2d8  bl 0x7103776910
7101d0f2dc  cmp x28,x20
7101d0f2e0  b.eq 0x7101d0f2fc
7101d0f2e4  ldr x8,[sp, #0x8]
7101d0f2e8  str xzr,[sp, #0x8]
7101d0f2ec  ldr x0,[x19, #0x88]
7101d0f2f0  str x8,[x19, #0x88]
7101d0f2f4  cbz x0,0x7101d0f2fc
7101d0f2f8  bl 0x710392eb40
7101d0f2fc  ldr x0,[sp, #0x8]
7101d0f300  stp x24,xzr,[sp]
7101d0f304  cbz x0,0x7101d0f30c
7101d0f308  bl 0x710392eb40
7101d0f30c  ldr w8,[sp, #0x18]
7101d0f310  sub w8,w8,w22
7101d0f314  adrp x1,0x71042f8000
7101d0f318  add x1,x1,#0x509
7101d0f31c  mov x0,x21
7101d0f320  mov w2,w22
7101d0f324  str w8,[x19, #0x24]
7101d0f328  bl 0x7103778430
7101d0f32c  ldr w2,[x19, #0x1c]
7101d0f330  adrp x1,0x71043be000
7101d0f334  add x1,x1,#0x882
7101d0f338  mov x0,x21
7101d0f33c  bl 0x7103778430
7101d0f340  ldr x0,[x19, #0x10]
7101d0f344  tbz w23,#0x0,0x7101d0f354
7101d0f348  adrp x1,0x71042a3000
7101d0f34c  add x1,x1,#0x278
7101d0f350  b 0x7101d0f35c
7101d0f354  adrp x1,0x71043e0000
7101d0f358  add x1,x1,#0x32f
7101d0f35c  fmov s0,0x3f800000
7101d0f360  bl 0x7103778300
7101d0f364  fmov s8,0x3f800000
7101d0f368  ldr x0,[x19, #0x10]
7101d0f36c  adrp x1,0x71042d6000
7101d0f370  add x1,x1,#0x4bc
7101d0f374  mov v0.16B,v8.16B
7101d0f378  bl 0x7103778300
7101d0f37c  ldr x0,[x19, #0x10]
7101d0f380  mov v0.16B,v8.16B
7101d0f384  adrp x1,0x71042e7000
7101d0f388  add x1,x1,#0x44d
7101d0f38c  bl 0x7103778300
7101d0f390  ldr d8,[sp, #0x10]
7101d0f394  ldp x29,x30,[sp, #0x70]
7101d0f398  ldp x20,x19,[sp, #0x60]
7101d0f39c  ldp x22,x21,[sp, #0x50]
7101d0f3a0  ldp x24,x23,[sp, #0x40]
7101d0f3a4  ldp x26,x25,[sp, #0x30]
7101d0f3a8  ldp x28,x27,[sp, #0x20]
7101d0f3ac  add sp,sp,#0x80
7101d0f3b0  ret
