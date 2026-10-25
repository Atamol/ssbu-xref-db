// addr:      71030d4d50
// offset:    0x30d4d50
// name:      FUN_71030d4d50
// mangled:   
// size:      8556

71030d4d50  stp x28,x27,[sp, #-0x60]!
71030d4d54  stp x26,x25,[sp, #0x10]
71030d4d58  stp x24,x23,[sp, #0x20]
71030d4d5c  stp x22,x21,[sp, #0x30]
71030d4d60  stp x20,x19,[sp, #0x40]
71030d4d64  stp x29,x30,[sp, #0x50]
71030d4d68  add x29,sp,#0x50
71030d4d6c  sub sp,sp,#0x280
71030d4d70  ldrb w8,[x0, #0x18]
71030d4d74  eor w8,w8,#0x1
71030d4d78  mov x19,x0
71030d4d7c  orr w1,wzr,#0xc0
71030d4d80  strb w8,[x0, #0xc75]
71030d4d84  mov w0,#0x10
71030d4d88  bl 0x710392e290
71030d4d8c  mov x21,x0
71030d4d90  cbnz x0,0x71030d4ddc
71030d4d94  adrp x8,0x7105332000
71030d4d98  ldr x0,[x8, #0xf00]
71030d4d9c  cbz x0,0x71030d4dd8
71030d4da0  orr w8,wzr,#0xc0
71030d4da4  str wzr,[sp, #0x40]
71030d4da8  add x1,sp,#0x40
71030d4dac  str x8,[sp, #0x170]
71030d4db0  ldr x8,[x0]
71030d4db4  ldr x8,[x8, #0x30]
71030d4db8  add x2,sp,#0x170
71030d4dbc  blr x8
71030d4dc0  tbz w0,#0x0,0x71030d4dd8
71030d4dc4  mov w0,#0x10
71030d4dc8  orr w1,wzr,#0xc0
71030d4dcc  bl 0x710392e290
71030d4dd0  mov x21,x0
71030d4dd4  cbnz x0,0x71030d4ddc
71030d4dd8  mov x21,xzr
71030d4ddc  mov x20,#0xfab4
71030d4de0  movk x20,#0xbd35, LSL #16
71030d4de4  movk x20,#0x1e, LSL #32
71030d4de8  mov x0,x21
71030d4dec  mov x1,x19
71030d4df0  mov x2,x20
71030d4df4  mov w3,wzr
71030d4df8  bl 0x71030dbbc0
71030d4dfc  adrp x8,0x7104468000
71030d4e00  adrp x9,0x710446a000
71030d4e04  ldr q1,[x8, #0xca0]
71030d4e08  ldr q0,[x9, #0x360]
71030d4e0c  adrp x8,0x7104465000
71030d4e10  str x21,[x19, #0x888]
71030d4e14  stp q1,q0,[sp, #0x20]
71030d4e18  stp q1,q0,[sp, #0x40]
71030d4e1c  ldr q0,[x8, #0x6b0]
71030d4e20  adrp x8,0x710446a000
71030d4e24  str q0,[sp, #0x10]
71030d4e28  str q0,[sp, #0x60]
71030d4e2c  ldr q0,[x8, #0x350]
71030d4e30  str q0,[sp, #0x70]
71030d4e34  ldr x21,[x21, #0x48]
71030d4e38  str q0,[sp]
71030d4e3c  cbz x21,0x71030d4ec4
71030d4e40  ldr x0,[x21, #0x90]
71030d4e44  ldr x8,[x0]
71030d4e48  ldr x8,[x8, #0x148]
71030d4e4c  add x1,sp,#0x40
71030d4e50  blr x8
71030d4e54  ldr x21,[x21, #0xd8]
71030d4e58  cbz x21,0x71030d4ec4
71030d4e5c  ldr x8,[sp, #0x58]
71030d4e60  str x8,[sp, #0x188]
71030d4e64  ldr x8,[sp, #0x50]
71030d4e68  str x8,[sp, #0x180]
71030d4e6c  ldr x8,[sp, #0x48]
71030d4e70  str x8,[sp, #0x178]
71030d4e74  ldr x8,[sp, #0x40]
71030d4e78  str x8,[sp, #0x170]
71030d4e7c  ldr x8,[sp, #0x78]
71030d4e80  str x8,[sp, #0x1a8]
71030d4e84  ldr x8,[sp, #0x70]
71030d4e88  str x8,[sp, #0x1a0]
71030d4e8c  ldr x8,[sp, #0x68]
71030d4e90  str x8,[sp, #0x198]
71030d4e94  ldr x8,[sp, #0x60]
71030d4e98  str x8,[sp, #0x190]
71030d4e9c  ldr x8,[x21, #0x8]
71030d4ea0  ldrb w9,[x8, #0xa8]
71030d4ea4  cbz w9,0x71030d4ebc
71030d4ea8  ldr x0,[x8, #0x48]
71030d4eac  ldr x8,[x0]
71030d4eb0  ldr x8,[x8, #0x20]
71030d4eb4  add x1,sp,#0x170
71030d4eb8  blr x8
71030d4ebc  mov w8,#0x1
71030d4ec0  strb w8,[x21, #0x20]
71030d4ec4  ldrb w8,[x19, #0xc75]
71030d4ec8  cbnz w8,0x71030d4f94
71030d4ecc  mov w0,#0x10
71030d4ed0  orr w1,wzr,#0xc0
71030d4ed4  bl 0x710392e290
71030d4ed8  mov x21,x0
71030d4edc  cbnz x0,0x71030d4f28
71030d4ee0  adrp x8,0x7105332000
71030d4ee4  ldr x0,[x8, #0xf00]
71030d4ee8  cbz x0,0x71030d4f24
71030d4eec  orr w8,wzr,#0xc0
71030d4ef0  str wzr,[sp, #0x40]
71030d4ef4  add x1,sp,#0x40
71030d4ef8  str x8,[sp, #0x170]
71030d4efc  ldr x8,[x0]
71030d4f00  ldr x8,[x8, #0x30]
71030d4f04  add x2,sp,#0x170
71030d4f08  blr x8
71030d4f0c  tbz w0,#0x0,0x71030d4f24
71030d4f10  mov w0,#0x10
71030d4f14  orr w1,wzr,#0xc0
71030d4f18  bl 0x710392e290
71030d4f1c  mov x21,x0
71030d4f20  cbnz x0,0x71030d4f28
71030d4f24  mov x21,xzr
71030d4f28  mov x2,#0x1e6
71030d4f2c  movk x2,#0x4d07, LSL #16
71030d4f30  movk x2,#0x1c, LSL #32
71030d4f34  mov x0,x21
71030d4f38  mov x1,x19
71030d4f3c  mov w3,wzr
71030d4f40  bl 0x71030dbbc0
71030d4f44  ldr x9,[x19, #0x310]
71030d4f48  str x21,[x19, #0x890]
71030d4f4c  ldp x8,x9,[x9, #0xd0]
71030d4f50  cmp x8,x9
71030d4f54  b.eq 0x71030d4f8c
71030d4f58  mov x10,#0xe11d
71030d4f5c  movk x10,#0xb2c6, LSL #16
71030d4f60  movk x10,#0x22, LSL #32
71030d4f64  ldr w11,[x8, #0x8]
71030d4f68  cmp w11,#0x1
71030d4f6c  b.hi 0x71030d4f80
71030d4f70  ldr x11,[x8]
71030d4f74  ldr x12,[x11, #0x68]
71030d4f78  cmp x12,x10
71030d4f7c  b.eq 0x71030d4f90
71030d4f80  add x8,x8,#0x10
71030d4f84  cmp x9,x8
71030d4f88  b.ne 0x71030d4f64
71030d4f8c  mov x11,xzr
71030d4f90  str x11,[x19, #0x898]
71030d4f94  ldr x8,[x19, #0x300]
71030d4f98  ldr x10,[x8, #0x18]
71030d4f9c  ldp x9,x10,[x10]
71030d4fa0  cmp x9,x10
71030d4fa4  b.eq 0x71030d50a8
71030d4fa8  ldr x11,[x9], #0x8
71030d4fac  ldr x12,[x11, #0xa0]
71030d4fb0  and x12,x12,#0xffffffffff
71030d4fb4  cmp x12,x20
71030d4fb8  b.eq 0x71030d4fc8
71030d4fbc  cmp x10,x9
71030d4fc0  b.ne 0x71030d4fa8
71030d4fc4  b 0x71030d50a8
71030d4fc8  cbz x11,0x71030d50a8
71030d4fcc  ldr x9,[x11, #0x110]
71030d4fd0  str x9,[x19, #0x8e8]
71030d4fd4  ldr x9,[x8, #0x18]
71030d4fd8  ldp x8,x9,[x9]
71030d4fdc  cmp x8,x9
71030d4fe0  b.eq 0x71030d50a8
71030d4fe4  mov x10,#0x8749
71030d4fe8  movk x10,#0x9752, LSL #16
71030d4fec  movk x10,#0x1a, LSL #32
71030d4ff0  ldr x11,[x8], #0x8
71030d4ff4  ldr x12,[x11, #0xa0]
71030d4ff8  and x12,x12,#0xffffffffff
71030d4ffc  cmp x12,x10
71030d5000  b.eq 0x71030d5010
71030d5004  cmp x9,x8
71030d5008  b.ne 0x71030d4ff0
71030d500c  b 0x71030d50a8
71030d5010  cbz x11,0x71030d50a8
71030d5014  ldr x8,[x11, #0x110]
71030d5018  str x8,[x19, #0x8f0]
71030d501c  ldp x21,x23,[x8, #0x18]
71030d5020  cmp x21,x23
71030d5024  b.eq 0x71030d50a8
71030d5028  mov w22,#0xf5ac
71030d502c  movk w22,#0x4f55, LSL #16
71030d5030  mov x24,x21
71030d5034  adrp x20,0x71043ab000
71030d5038  add x20,x20,#0xf32
71030d503c  ldr x25,[x24]
71030d5040  ldr w8,[x25, #0x18]
71030d5044  cmp w8,w22
71030d5048  b.ne 0x71030d505c
71030d504c  add x0,x25,#0x20
71030d5050  mov x1,x20
71030d5054  bl 0x71039c0060
71030d5058  cbz w0,0x71030d5aa8
71030d505c  add x24,x24,#0x8
71030d5060  cmp x23,x24
71030d5064  b.ne 0x71030d503c
71030d5068  cmp x21,x23
71030d506c  b.eq 0x71030d50a8
71030d5070  adrp x20,0x7104328000
71030d5074  add x20,x20,#0x552
71030d5078  ldr x24,[x21]
71030d507c  ldr w8,[x24, #0x18]
71030d5080  add w9,w22,#0x1b0
71030d5084  cmp w8,w9
71030d5088  b.ne 0x71030d509c
71030d508c  add x0,x24,#0x20
71030d5090  mov x1,x20
71030d5094  bl 0x71039c0060
71030d5098  cbz w0,0x71030d5c58
71030d509c  add x21,x21,#0x8
71030d50a0  cmp x23,x21
71030d50a4  b.ne 0x71030d5078
71030d50a8  ldrb w8,[x19, #0xc75]
71030d50ac  cbnz w8,0x71030d6538
71030d50b0  mov w8,#0x4
71030d50b4  mov x9,#0x100000001
71030d50b8  mov w1,#0x48
71030d50bc  stp x8,x9,[sp, #0x170]
71030d50c0  mov x8,#0x1
71030d50c4  movk x8,#0x10, LSL #32
71030d50c8  mov w0,#0x10
71030d50cc  add x21,sp,#0x170
71030d50d0  str x8,[sp, #0x180]
71030d50d4  bl 0x710392e290
71030d50d8  mov x20,x0
71030d50dc  cbnz x0,0x71030d5128
71030d50e0  adrp x8,0x7105332000
71030d50e4  ldr x0,[x8, #0xf00]
71030d50e8  cbz x0,0x71030d5124
71030d50ec  mov w8,#0x48
71030d50f0  str wzr,[sp, #0x140]
71030d50f4  add x1,sp,#0x140
71030d50f8  str x8,[sp, #0x40]
71030d50fc  ldr x8,[x0]
71030d5100  ldr x8,[x8, #0x30]
71030d5104  add x2,sp,#0x40
71030d5108  blr x8
71030d510c  tbz w0,#0x0,0x71030d5124
71030d5110  mov w1,#0x48
71030d5114  mov w0,#0x10
71030d5118  bl 0x710392e290
71030d511c  mov x20,x0
71030d5120  cbnz x0,0x71030d5128
71030d5124  mov x20,xzr
71030d5128  mov x24,#0x2b3
71030d512c  movk x24,#0xa2c5, LSL #16
71030d5130  mov x27,#0x7a80
71030d5134  movk x27,#0xfb99, LSL #16
71030d5138  mov x26,#0xfc4f
71030d513c  movk x26,#0x25cb, LSL #16
71030d5140  mov x25,#0x1fca
71030d5144  movk x25,#0x1ed9, LSL #16
71030d5148  add x2,sp,#0x170
71030d514c  mov x0,x20
71030d5150  mov x1,x19
71030d5154  movk x24,#0x15, LSL #32
71030d5158  movk x27,#0x7, LSL #32
71030d515c  movk x26,#0x4, LSL #32
71030d5160  movk x25,#0x3, LSL #32
71030d5164  bl 0x710313e6a0
71030d5168  str x20,[x19, #0x8e0]
71030d516c  str wzr,[sp, #0x210]
71030d5170  adrp x22,0x71052a8000
71030d5174  strb wzr,[sp, #0x216]
71030d5178  ldr x22,[x22, #0xa88]
71030d517c  ldr q0,[x22]
71030d5180  fmov s2,wzr
71030d5184  strh wzr,[sp, #0x214]
71030d5188  adrp x11,0x71052a8000
71030d518c  ldr x11,[x11, #0xa80]
71030d5190  orr x8,xzr,#0x3f8000003f800000
71030d5194  str x8,[sp, #0x218]
71030d5198  orr w8,wzr,#0x3f800000
71030d519c  orr w9,wzr,#0xe
71030d51a0  mov w13,#0xbf800000
71030d51a4  mov w10,#0xffffffff
71030d51a8  strb w9,[sp, #0x1e6]
71030d51ac  adrp x9,0x7104469000
71030d51b0  str w8,[sp, #0x1a8]
71030d51b4  str x25,[sp, #0x1b8]
71030d51b8  ext v1.16B,v0.16B,v0.16B,0x8
71030d51bc  mov v1.S[0x1],v2.S[0x0]
71030d51c0  orr w12,wzr,#0x3
71030d51c4  mov v0.D[0x1],v1.D[0x0]
71030d51c8  strh wzr,[sp, #0x1e4]
71030d51cc  str q0,[sp, #0x180]
71030d51d0  ldr q0,[x11]
71030d51d4  mov x11,#0x3c
71030d51d8  movk x11,#0x1, LSL #32
71030d51dc  stur wzr,[x21, #0x6f]
71030d51e0  str x11,[sp, #0x1e8]
71030d51e4  str x25,[sp, #0x1f8]
71030d51e8  str q0,[sp, #0x200]
71030d51ec  strh wzr,[sp, #0x1f0]
71030d51f0  str wzr,[sp, #0x220]
71030d51f4  str x26,[sp, #0x228]
71030d51f8  str x27,[sp, #0x230]
71030d51fc  strh wzr,[sp, #0x238]
71030d5200  strh wzr,[sp, #0x23c]
71030d5204  str w13,[sp, #0x240]
71030d5208  stur xzr,[x21, #0xe4]
71030d520c  stur xzr,[x21, #0xdc]
71030d5210  stur xzr,[x21, #0xd4]
71030d5214  str w10,[sp, #0x25c]
71030d5218  strh w12,[sp, #0x260]
71030d521c  str w8,[sp, #0x264]
71030d5220  strh wzr,[sp, #0x268]
71030d5224  strb wzr,[sp, #0x26a]
71030d5228  ldr w8,[x19, #0x7bc]
71030d522c  ldr q0,[x9, #0xf50]
71030d5230  ldr w9,[x19, #0x7b8]
71030d5234  str w8,[sp, #0x190]
71030d5238  ldr w8,[x19, #0x7c0]
71030d523c  str w8,[sp, #0x198]
71030d5240  ldr w8,[x19, #0x7c4]
71030d5244  str w8,[sp, #0x19c]
71030d5248  ldr w8,[x19, #0x7c8]
71030d524c  str w8,[sp, #0x1a0]
71030d5250  ldr w8,[x19, #0x7cc]
71030d5254  str w8,[sp, #0x1a4]
71030d5258  ldr w8,[x19, #0x7d0]
71030d525c  str w8,[sp, #0x1ac]
71030d5260  ldr w8,[x19, #0x7d4]
71030d5264  str w8,[sp, #0x1b0]
71030d5268  mov w8,#0x100
71030d526c  str w9,[sp, #0x194]
71030d5270  str q0,[sp, #0x170]
71030d5274  str x24,[sp, #0x1c8]
71030d5278  strb wzr,[sp, #0x1d2]
71030d527c  strh wzr,[sp, #0x1d0]
71030d5280  str q0,[sp, #0x40]
71030d5284  sturh w8,[x21, #0x67]
71030d5288  mov w8,#0x3f
71030d528c  movk w8,#0x7, LSL #16
71030d5290  str w8,[sp, #0x1c0]
71030d5294  orr w8,wzr,#0x1f
71030d5298  strb w8,[sp, #0x1c4]
71030d529c  mov w8,#0x1
71030d52a0  stur wzr,[x21, #0x63]
71030d52a4  strb w8,[sp, #0x1d9]
71030d52a8  adrp x8,0x710446a000
71030d52ac  ldr q0,[x8, #0xce0]
71030d52b0  mov w8,#0x2
71030d52b4  strb wzr,[sp, #0x1de]
71030d52b8  stur wzr,[x21, #0x6a]
71030d52bc  strb w8,[sp, #0x1e3]
71030d52c0  str q0,[sp, #0x50]
71030d52c4  stp w9,w8,[sp, #0x60]
71030d52c8  ldr x0,[x19, #0x8e0]
71030d52cc  ldr x8,[x0, #0x38]
71030d52d0  add x20,x19,#0x8e0
71030d52d4  cbz x8,0x71030d5328
71030d52d8  ldr x0,[x8, #0x130]
71030d52dc  ldr x8,[x0]
71030d52e0  ldr x8,[x8, #0x100]
71030d52e4  add x2,sp,#0x40
71030d52e8  mov w1,wzr
71030d52ec  mov w3,wzr
71030d52f0  mov w4,wzr
71030d52f4  mov w5,wzr
71030d52f8  blr x8
71030d52fc  ldr x0,[x19, #0x8e0]
71030d5300  ldr x8,[x0, #0x38]
71030d5304  cbz x8,0x71030d5328
71030d5308  ldr x0,[x8, #0xa0]
71030d530c  ldr x8,[x0]
71030d5310  ldr x8,[x8, #0x68]
71030d5314  add x3,sp,#0x170
71030d5318  mov w1,wzr
71030d531c  mov w2,wzr
71030d5320  blr x8
71030d5324  ldr x0,[x20]
71030d5328  bl 0x710313ef20
71030d532c  ldr x8,[x20]
71030d5330  ldr x8,[x8, #0x38]
71030d5334  cbz x8,0x71030d534c
71030d5338  ldr x0,[x8, #0x130]
71030d533c  ldr x8,[x0]
71030d5340  ldr x8,[x8, #0x120]
71030d5344  mov w1,wzr
71030d5348  blr x8
71030d534c  str xzr,[sp, #0x170]
71030d5350  ldr x8,[x19, #0x338]
71030d5354  ldr x8,[x8]
71030d5358  ldr x0,[x8, #0x8]
71030d535c  mov w23,#0xffffffff
71030d5360  cbz x0,0x71030d5374
71030d5364  add x1,sp,#0x170
71030d5368  mov w2,wzr
71030d536c  bl 0x7102405040
71030d5370  b 0x71030d5378
71030d5374  mov w0,w23
71030d5378  ldrb w8,[x19, #0xc75]
71030d537c  str w0,[x19, #0xbf0]
71030d5380  cbnz w8,0x71030d6538
71030d5384  mov w0,#0x10
71030d5388  orr w1,wzr,#0xc0
71030d538c  bl 0x710392e290
71030d5390  mov x20,x0
71030d5394  cbnz x0,0x71030d53e0
71030d5398  adrp x8,0x7105332000
71030d539c  ldr x0,[x8, #0xf00]
71030d53a0  cbz x0,0x71030d53dc
71030d53a4  orr w8,wzr,#0xc0
71030d53a8  str wzr,[sp, #0x40]
71030d53ac  add x1,sp,#0x40
71030d53b0  str x8,[sp, #0x170]
71030d53b4  ldr x8,[x0]
71030d53b8  ldr x8,[x8, #0x30]
71030d53bc  add x2,sp,#0x170
71030d53c0  blr x8
71030d53c4  tbz w0,#0x0,0x71030d53dc
71030d53c8  mov w0,#0x10
71030d53cc  orr w1,wzr,#0xc0
71030d53d0  bl 0x710392e290
71030d53d4  mov x20,x0
71030d53d8  cbnz x0,0x71030d53e0
71030d53dc  mov x20,xzr
71030d53e0  mov x2,#0x1551
71030d53e4  movk x2,#0x9392, LSL #16
71030d53e8  movk x2,#0x16, LSL #32
71030d53ec  mov x0,x20
71030d53f0  mov x1,x19
71030d53f4  mov w3,wzr
71030d53f8  bl 0x71030dbbc0
71030d53fc  str x20,[x19, #0x8a0]
71030d5400  ldr x8,[x20, #0x48]
71030d5404  cbz x8,0x71030d5414
71030d5408  add x0,x8,#0x108
71030d540c  strb wzr,[x8, #0x110]
71030d5410  bl 0x71025e9d50
71030d5414  ldrb w8,[x19, #0xc75]
71030d5418  cbnz w8,0x71030d6538
71030d541c  mov w0,#0x10
71030d5420  orr w1,wzr,#0xc0
71030d5424  mov x28,x27
71030d5428  bl 0x710392e290
71030d542c  mov x20,x0
71030d5430  cbnz x0,0x71030d547c
71030d5434  adrp x8,0x7105332000
71030d5438  ldr x0,[x8, #0xf00]
71030d543c  cbz x0,0x71030d5478
71030d5440  orr w8,wzr,#0xc0
71030d5444  str wzr,[sp, #0x40]
71030d5448  add x1,sp,#0x40
71030d544c  str x8,[sp, #0x170]
71030d5450  ldr x8,[x0]
71030d5454  ldr x8,[x8, #0x30]
71030d5458  add x2,sp,#0x170
71030d545c  blr x8
71030d5460  tbz w0,#0x0,0x71030d5478
71030d5464  mov w0,#0x10
71030d5468  orr w1,wzr,#0xc0
71030d546c  bl 0x710392e290
71030d5470  mov x20,x0
71030d5474  cbnz x0,0x71030d547c
71030d5478  mov x20,xzr
71030d547c  mov x2,#0x6a34
71030d5480  movk x2,#0x1242, LSL #16
71030d5484  movk x2,#0x17, LSL #32
71030d5488  mov x0,x20
71030d548c  mov x1,x19
71030d5490  mov w3,wzr
71030d5494  mov x27,x24
71030d5498  bl 0x71030dbbc0
71030d549c  str x20,[x19, #0x8a8]
71030d54a0  ldr x8,[x20, #0x48]
71030d54a4  cbz x8,0x71030d54c0
71030d54a8  ldr x0,[x8, #0xd0]
71030d54ac  adrp x1,0x710425d000
71030d54b0  add x1,x1,#0x941
71030d54b4  bl 0x71025ee6c0
71030d54b8  cbz x0,0x71030d54c0
71030d54bc  str x0,[x20, #0x50]
71030d54c0  ldr x24,[x20, #0x48]
71030d54c4  cbz x24,0x71030d5508
71030d54c8  ldr x0,[x24, #0xd0]
71030d54cc  adrp x1,0x7104441000
71030d54d0  add x1,x1,#0xecf
71030d54d4  bl 0x71025ee6c0
71030d54d8  cbz x0,0x71030d54ec
71030d54dc  str x0,[x20, #0x58]
71030d54e0  ldr x20,[x19, #0x8a8]
71030d54e4  ldr x24,[x20, #0x48]
71030d54e8  cbz x24,0x71030d5508
71030d54ec  ldr x0,[x24, #0xd0]
71030d54f0  adrp x1,0x7104420000
71030d54f4  add x1,x1,#0x9a7
71030d54f8  bl 0x71025ee6c0
71030d54fc  cbz x0,0x71030d5508
71030d5500  str x0,[x20, #0x60]
71030d5504  ldr x20,[x19, #0x8a8]
71030d5508  ldr x8,[x20, #0x48]
71030d550c  cbz x8,0x71030d5534
71030d5510  ldr x0,[x8, #0xd0]
71030d5514  adrp x1,0x7104452000
71030d5518  add x1,x1,#0xdc4
71030d551c  bl 0x71025ee6c0
71030d5520  mov x24,x27
71030d5524  cbz x0,0x71030d5538
71030d5528  str x0,[x20, #0x68]
71030d552c  ldr x20,[x19, #0x8a8]
71030d5530  b 0x71030d5538
71030d5534  mov x24,x27
71030d5538  ldr x8,[x20, #0x48]
71030d553c  mov x27,x28
71030d5540  mov x28,x26
71030d5544  cbz x8,0x71030d5564
71030d5548  ldr x0,[x8, #0xd0]
71030d554c  adrp x1,0x710427f000
71030d5550  add x1,x1,#0x57
71030d5554  bl 0x71025ee6c0
71030d5558  cbz x0,0x71030d5564
71030d555c  str x0,[x20, #0x70]
71030d5560  ldr x20,[x19, #0x8a8]
71030d5564  adrp x8,0x7104469000
71030d5568  ldr q0,[x8, #0x730]
71030d556c  mov x8,#0x40a00000
71030d5570  stp xzr,xzr,[sp, #0x170]
71030d5574  movk x8,#0x2, LSL #32
71030d5578  str x8,[sp, #0x190]
71030d557c  str q0,[sp, #0x180]
71030d5580  ldr x8,[x20, #0x38]
71030d5584  cbz x8,0x71030d55f0
71030d5588  ldr x0,[x8, #0x130]
71030d558c  ldr x8,[x0]
71030d5590  ldr x8,[x8, #0x58]
71030d5594  add x2,sp,#0x170
71030d5598  mov w1,wzr
71030d559c  mov w3,wzr
71030d55a0  mov w4,wzr
71030d55a4  mov w5,wzr
71030d55a8  blr x8
71030d55ac  adrp x8,0x7104467000
71030d55b0  adrp x9,0x710446a000
71030d55b4  ldr q0,[x8, #0xca0]
71030d55b8  ldr q1,[x9, #0x500]
71030d55bc  ldr x8,[x20, #0x38]
71030d55c0  stp q0,q1,[sp, #0x170]
71030d55c4  cbz x8,0x71030d5604
71030d55c8  ldr x0,[x8, #0x130]
71030d55cc  ldr x8,[x0]
71030d55d0  ldr x8,[x8, #0x58]
71030d55d4  add x2,sp,#0x170
71030d55d8  mov w3,#0x1
71030d55dc  mov w1,wzr
71030d55e0  mov w4,wzr
71030d55e4  mov w5,wzr
71030d55e8  blr x8
71030d55ec  b 0x71030d5604
71030d55f0  adrp x8,0x7104467000
71030d55f4  adrp x9,0x710446a000
71030d55f8  ldr q0,[x8, #0xca0]
71030d55fc  ldr q1,[x9, #0x500]
71030d5600  stp q0,q1,[sp, #0x170]
71030d5604  ldr x0,[x19, #0x8a8]
71030d5608  bl 0x710313ef20
71030d560c  ldr x8,[x19, #0x8a8]
71030d5610  ldr x8,[x8, #0x38]
71030d5614  cbz x8,0x71030d562c
71030d5618  ldr x0,[x8, #0x130]
71030d561c  ldr x8,[x0]
71030d5620  ldr x8,[x8, #0x78]
71030d5624  mov w1,wzr
71030d5628  blr x8
71030d562c  mov w8,#0x4
71030d5630  str x8,[sp, #0x170]
71030d5634  mov x8,#0x100000001
71030d5638  str x8,[sp, #0x178]
71030d563c  mov x8,#0x1
71030d5640  movk x8,#0x10, LSL #32
71030d5644  mov w1,#0x48
71030d5648  mov w0,#0x10
71030d564c  str x8,[sp, #0x180]
71030d5650  bl 0x710392e290
71030d5654  mov x20,x0
71030d5658  cbnz x0,0x71030d56a4
71030d565c  adrp x8,0x7105332000
71030d5660  ldr x0,[x8, #0xf00]
71030d5664  cbz x0,0x71030d56a0
71030d5668  mov w8,#0x48
71030d566c  str wzr,[sp, #0x140]
71030d5670  add x1,sp,#0x140
71030d5674  str x8,[sp, #0x40]
71030d5678  ldr x8,[x0]
71030d567c  ldr x8,[x8, #0x30]
71030d5680  add x2,sp,#0x40
71030d5684  blr x8
71030d5688  tbz w0,#0x0,0x71030d56a0
71030d568c  mov w1,#0x48
71030d5690  mov w0,#0x10
71030d5694  bl 0x710392e290
71030d5698  mov x20,x0
71030d569c  cbnz x0,0x71030d56a4
71030d56a0  mov x20,xzr
71030d56a4  mov x26,#0x8a42
71030d56a8  movk x26,#0x99ff, LSL #16
71030d56ac  add x2,sp,#0x170
71030d56b0  mov x0,x20
71030d56b4  mov x1,x19
71030d56b8  movk x26,#0x13, LSL #32
71030d56bc  bl 0x710313e6a0
71030d56c0  str x20,[x19, #0x8c8]
71030d56c4  adrp x8,0x71052a8000
71030d56c8  ldr x8,[x8, #0xa80]
71030d56cc  ldr q1,[x22]
71030d56d0  ext v2.16B,v1.16B,v1.16B,0x8
71030d56d4  fmov s3,wzr
71030d56d8  mov v2.S[0x1],v3.S[0x0]
71030d56dc  ldr q0,[x8]
71030d56e0  mov v1.D[0x1],v2.D[0x0]
71030d56e4  mov w9,#0x3f
71030d56e8  movk w9,#0x3, LSL #16
71030d56ec  str w9,[sp, #0x1c0]
71030d56f0  mov w9,#0x19
71030d56f4  orr w8,wzr,#0x3f800000
71030d56f8  strb w9,[sp, #0x1c4]
71030d56fc  orr w9,wzr,#0xe
71030d5700  strb wzr,[sp, #0x216]
71030d5704  strh wzr,[sp, #0x214]
71030d5708  str wzr,[sp, #0x210]
71030d570c  str w8,[sp, #0x218]
71030d5710  str w8,[sp, #0x194]
71030d5714  str x25,[sp, #0x1b8]
71030d5718  stp q1,q1,[sp, #0x170]
71030d571c  strb wzr,[sp, #0x1d0]
71030d5720  strh wzr,[sp, #0x1d2]
71030d5724  sturh wzr,[x21, #0x65]
71030d5728  strb w9,[sp, #0x1e6]
71030d572c  mov w9,#0xbf800000
71030d5730  orr w20,wzr,#0x3
71030d5734  strh wzr,[sp, #0x1e4]
71030d5738  strh wzr,[sp, #0x1f0]
71030d573c  strb wzr,[sp, #0x1e2]
71030d5740  strh wzr,[sp, #0x1e0]
71030d5744  str xzr,[sp, #0x1d8]
71030d5748  str xzr,[sp, #0x1e8]
71030d574c  str x25,[sp, #0x1f8]
71030d5750  str q0,[sp, #0x200]
71030d5754  str wzr,[sp, #0x210]
71030d5758  movi v2.2D,#0x0
71030d575c  mov v1.16B,v2.16B
71030d5760  strh wzr,[sp, #0x214]
71030d5764  stur x8,[x21, #0xac]
71030d5768  str x28,[sp, #0x228]
71030d576c  str x27,[sp, #0x230]
71030d5770  strh wzr,[sp, #0x238]
71030d5774  strh wzr,[sp, #0x23c]
71030d5778  str w9,[sp, #0x240]
71030d577c  stur xzr,[x21, #0xe4]
71030d5780  stur xzr,[x21, #0xdc]
71030d5784  stur xzr,[x21, #0xd4]
71030d5788  str w23,[sp, #0x25c]
71030d578c  strh w20,[sp, #0x260]
71030d5790  str w8,[sp, #0x264]
71030d5794  strh wzr,[sp, #0x268]
71030d5798  strb wzr,[sp, #0x26a]
71030d579c  str wzr,[sp, #0x190]
71030d57a0  ldr w8,[x19, #0x840]
71030d57a4  str w8,[sp, #0x1a8]
71030d57a8  ldr w8,[x19, #0x844]
71030d57ac  str w8,[sp, #0x1ac]
71030d57b0  ldr w8,[x19, #0x848]
71030d57b4  str w8,[sp, #0x1b0]
71030d57b8  ldr w8,[x19, #0x84c]
71030d57bc  str w8,[sp, #0x19c]
71030d57c0  ldr w8,[x19, #0x850]
71030d57c4  str w8,[sp, #0x1a0]
71030d57c8  ldr w8,[x19, #0x854]
71030d57cc  str w8,[sp, #0x1a4]
71030d57d0  ldr w8,[x19, #0x858]
71030d57d4  str w8,[sp, #0x1e8]
71030d57d8  mov w8,#0x1
71030d57dc  str x26,[sp, #0x1c8]
71030d57e0  mov w26,#0x101
71030d57e4  strb wzr,[sp, #0x1d4]
71030d57e8  strb w8,[sp, #0x1d7]
71030d57ec  strb wzr,[sp, #0x1d1]
71030d57f0  sturh w26,[x21, #0x6d]
71030d57f4  strb w8,[sp, #0x1e0]
71030d57f8  mov w8,#0x2
71030d57fc  strb w8,[sp, #0x1e3]
71030d5800  strb w20,[sp, #0x1da]
71030d5804  ldr w9,[x19, #0x85c]
71030d5808  str w9,[sp, #0x198]
71030d580c  ldr s0,[x19, #0x830]
71030d5810  fneg s0,s0
71030d5814  mov v1.S[0x0],v0.S[0x0]
71030d5818  mov v0.16B,v2.16B
71030d581c  add x9,x19,#0x834
71030d5820  ld1 {v1.S}[1],[x9]
71030d5824  add x9,x19,#0x838
71030d5828  ld1 {v0.S}[1],[x9]
71030d582c  ldr w9,[x19, #0x83c]
71030d5830  stp w9,w8,[sp, #0x60]
71030d5834  stp q1,q0,[sp, #0x40]
71030d5838  ldr x0,[x19, #0x8c8]
71030d583c  ldr x8,[x0, #0x38]
71030d5840  cbz x8,0x71030d5894
71030d5844  ldr x0,[x8, #0x130]
71030d5848  ldr x8,[x0]
71030d584c  ldr x8,[x8, #0x100]
71030d5850  add x2,sp,#0x40
71030d5854  orr w4,wzr,#0x6
71030d5858  orr w5,wzr,#0x3f
71030d585c  mov w1,wzr
71030d5860  mov w3,wzr
71030d5864  blr x8
71030d5868  ldr x0,[x19, #0x8c8]
71030d586c  ldr x8,[x0, #0x38]
71030d5870  cbz x8,0x71030d5894
71030d5874  ldr x0,[x8, #0xa0]
71030d5878  ldr x8,[x0]
71030d587c  ldr x8,[x8, #0x68]
71030d5880  add x3,sp,#0x170
71030d5884  mov w1,wzr
71030d5888  mov w2,wzr
71030d588c  blr x8
71030d5890  ldr x0,[x19, #0x8c8]
71030d5894  strb w20,[sp, #0x1da]
71030d5898  ldr w8,[x19, #0x860]
71030d589c  str w8,[sp, #0x198]
71030d58a0  ldr x8,[x0, #0x38]
71030d58a4  cbz x8,0x71030d58f8
71030d58a8  ldr x0,[x8, #0x130]
71030d58ac  ldr x8,[x0]
71030d58b0  ldr x8,[x8, #0x100]
71030d58b4  add x2,sp,#0x40
71030d58b8  mov w3,#0x1
71030d58bc  orr w4,wzr,#0x6
71030d58c0  orr w5,wzr,#0x3f
71030d58c4  mov w1,wzr
71030d58c8  blr x8
71030d58cc  ldr x0,[x19, #0x8c8]
71030d58d0  ldr x8,[x0, #0x38]
71030d58d4  cbz x8,0x71030d58f8
71030d58d8  ldr x0,[x8, #0xa0]
71030d58dc  ldr x8,[x0]
71030d58e0  ldr x8,[x8, #0x68]
71030d58e4  mov w1,#0x1
71030d58e8  add x3,sp,#0x170
71030d58ec  mov w2,wzr
71030d58f0  blr x8
71030d58f4  ldr x0,[x19, #0x8c8]
71030d58f8  bl 0x710313ef20
71030d58fc  ldr x8,[x19, #0x8c8]
71030d5900  ldr x8,[x8, #0x38]
71030d5904  cbz x8,0x71030d591c
71030d5908  ldr x0,[x8, #0x130]
71030d590c  ldr x8,[x0]
71030d5910  ldr x8,[x8, #0x120]
71030d5914  mov w1,wzr
71030d5918  blr x8
71030d591c  add x8,x19,#0xc40
71030d5920  str x8,[sp, #0x140]
71030d5924  ldr x8,[x19, #0x338]
71030d5928  ldr x8,[x8]
71030d592c  ldr x0,[x8, #0x8]
71030d5930  cbz x0,0x71030d5944
71030d5934  add x1,sp,#0x140
71030d5938  mov w2,wzr
71030d593c  bl 0x7102405040
71030d5940  b 0x71030d5948
71030d5944  mov w0,#0xffffffff
71030d5948  ldrb w8,[x19, #0xc75]
71030d594c  str w0,[x19, #0xc30]
71030d5950  cbnz w8,0x71030d6538
71030d5954  mov w0,#0x10
71030d5958  orr w1,wzr,#0xc0
71030d595c  bl 0x710392e290
71030d5960  mov x20,x0
71030d5964  cbnz x0,0x71030d59b0
71030d5968  adrp x8,0x7105332000
71030d596c  ldr x0,[x8, #0xf00]
71030d5970  cbz x0,0x71030d59ac
71030d5974  orr w8,wzr,#0xc0
71030d5978  str wzr,[sp, #0x40]
71030d597c  add x1,sp,#0x40
71030d5980  str x8,[sp, #0x170]
71030d5984  ldr x8,[x0]
71030d5988  ldr x8,[x8, #0x30]
71030d598c  add x2,sp,#0x170
71030d5990  blr x8
71030d5994  tbz w0,#0x0,0x71030d59ac
71030d5998  mov w0,#0x10
71030d599c  orr w1,wzr,#0xc0
71030d59a0  bl 0x710392e290
71030d59a4  mov x20,x0
71030d59a8  cbnz x0,0x71030d59b0
71030d59ac  mov x20,xzr
71030d59b0  mov x2,#0xbea9
71030d59b4  movk x2,#0xf194, LSL #16
71030d59b8  movk x2,#0x1b, LSL #32
71030d59bc  mov x0,x20
71030d59c0  mov x1,x19
71030d59c4  mov w3,wzr
71030d59c8  bl 0x71030dbbc0
71030d59cc  str x20,[x19, #0x8b0]
71030d59d0  ldr x8,[x20, #0x48]
71030d59d4  cbz x8,0x71030d59f0
71030d59d8  ldr x0,[x8, #0xd0]
71030d59dc  adrp x1,0x710426e000
71030d59e0  add x1,x1,#0x3ae
71030d59e4  bl 0x71025ee6c0
71030d59e8  cbz x0,0x71030d59f0
71030d59ec  str x0,[x20, #0x50]
71030d59f0  ldr x8,[x20, #0x48]
71030d59f4  cbz x8,0x71030d5a14
71030d59f8  ldr x0,[x8, #0xd0]
71030d59fc  adrp x1,0x7104464000
71030d5a00  add x1,x1,#0x126
71030d5a04  bl 0x71025ee6c0
71030d5a08  cbz x0,0x71030d5a14
71030d5a0c  str x0,[x20, #0x58]
71030d5a10  ldr x20,[x19, #0x8b0]
71030d5a14  adrp x8,0x7104468000
71030d5a18  ldr q0,[x8, #0x610]
71030d5a1c  adrp x8,0x710446a000
71030d5a20  str q0,[sp, #0x170]
71030d5a24  ldr q0,[x8, #0xcf0]
71030d5a28  mov x8,#0x40d00000
71030d5a2c  movk x8,#0x2, LSL #32
71030d5a30  str x8,[sp, #0x190]
71030d5a34  str q0,[sp, #0x180]
71030d5a38  ldr x8,[x20, #0x38]
71030d5a3c  cbz x8,0x71030d5ad0
71030d5a40  ldr x0,[x8, #0x130]
71030d5a44  ldr x8,[x0]
71030d5a48  ldr x8,[x8, #0x58]
71030d5a4c  add x2,sp,#0x170
71030d5a50  mov w1,wzr
71030d5a54  mov w3,wzr
71030d5a58  mov w4,wzr
71030d5a5c  mov w5,wzr
71030d5a60  blr x8
71030d5a64  adrp x8,0x7104469000
71030d5a68  adrp x9,0x710446a000
71030d5a6c  ldr q0,[x8, #0x4b0]
71030d5a70  ldr q1,[x9, #0x770]
71030d5a74  ldr x8,[x20, #0x38]
71030d5a78  stp q0,q1,[sp, #0x170]
71030d5a7c  cbz x8,0x71030d5ae4
71030d5a80  ldr x0,[x8, #0x130]
71030d5a84  ldr x8,[x0]
71030d5a88  ldr x8,[x8, #0x58]
71030d5a8c  add x2,sp,#0x170
71030d5a90  mov w3,#0x1
71030d5a94  mov w1,wzr
71030d5a98  mov w4,wzr
71030d5a9c  mov w5,wzr
71030d5aa0  blr x8
71030d5aa4  b 0x71030d5ae4
71030d5aa8  cbz x25,0x71030d5068
71030d5aac  ldr x8,[x25, #0x8]
71030d5ab0  ldr x8,[x8, #0x108]
71030d5ab4  cbz x8,0x71030d5068
71030d5ab8  strb wzr,[x8, #0x44]
71030d5abc  ldr x8,[x19, #0x8f0]
71030d5ac0  ldp x21,x23,[x8, #0x18]
71030d5ac4  cmp x21,x23
71030d5ac8  b.ne 0x71030d5070
71030d5acc  b 0x71030d50a8
71030d5ad0  adrp x8,0x7104469000
71030d5ad4  adrp x9,0x710446a000
71030d5ad8  ldr q0,[x8, #0x4b0]
71030d5adc  ldr q1,[x9, #0x770]
71030d5ae0  stp q0,q1,[sp, #0x170]
71030d5ae4  ldr x0,[x19, #0x8b0]
71030d5ae8  bl 0x710313ef20
71030d5aec  ldr x8,[x19, #0x8b0]
71030d5af0  ldr x8,[x8, #0x38]
71030d5af4  cbz x8,0x71030d5b0c
71030d5af8  ldr x0,[x8, #0x130]
71030d5afc  ldr x8,[x0]
71030d5b00  ldr x8,[x8, #0x78]
71030d5b04  mov w1,wzr
71030d5b08  blr x8
71030d5b0c  add x8,x19,#0xc00
71030d5b10  str x8,[sp, #0x170]
71030d5b14  ldr x8,[x19, #0x338]
71030d5b18  ldr x8,[x8]
71030d5b1c  ldr x0,[x8, #0x8]
71030d5b20  mov w8,#0xffffffff
71030d5b24  cbz x0,0x71030d5b38
71030d5b28  add x1,sp,#0x170
71030d5b2c  mov w2,wzr
71030d5b30  bl 0x7102405040
71030d5b34  b 0x71030d5b3c
71030d5b38  mov w0,w8
71030d5b3c  ldrb w8,[x19, #0xc75]
71030d5b40  str w0,[x19, #0xbf4]
71030d5b44  cbnz w8,0x71030d6538
71030d5b48  mov w0,#0x10
71030d5b4c  orr w1,wzr,#0xc0
71030d5b50  bl 0x710392e290
71030d5b54  mov x20,x0
71030d5b58  cbnz x0,0x71030d5ba4
71030d5b5c  adrp x8,0x7105332000
71030d5b60  ldr x0,[x8, #0xf00]
71030d5b64  cbz x0,0x71030d5ba0
71030d5b68  orr w8,wzr,#0xc0
71030d5b6c  str wzr,[sp, #0x40]
71030d5b70  add x1,sp,#0x40
71030d5b74  str x8,[sp, #0x170]
71030d5b78  ldr x8,[x0]
71030d5b7c  ldr x8,[x8, #0x30]
71030d5b80  add x2,sp,#0x170
71030d5b84  blr x8
71030d5b88  tbz w0,#0x0,0x71030d5ba0
71030d5b8c  mov w0,#0x10
71030d5b90  orr w1,wzr,#0xc0
71030d5b94  bl 0x710392e290
71030d5b98  mov x20,x0
71030d5b9c  cbnz x0,0x71030d5ba4
71030d5ba0  mov x20,xzr
71030d5ba4  mov x2,#0x720a
71030d5ba8  movk x2,#0xf073, LSL #16
71030d5bac  movk x2,#0x1a, LSL #32
71030d5bb0  mov x0,x20
71030d5bb4  mov x1,x19
71030d5bb8  mov w3,wzr
71030d5bbc  bl 0x71030dbbc0
71030d5bc0  adrp x8,0x7104466000
71030d5bc4  ldr q0,[x8, #0xd60]
71030d5bc8  adrp x8,0x7104468000
71030d5bcc  str x20,[x19, #0x8b8]
71030d5bd0  str q0,[sp, #0x170]
71030d5bd4  ldr q0,[x8, #0x480]
71030d5bd8  mov x8,#0x41300000
71030d5bdc  movk x8,#0x2, LSL #32
71030d5be0  str x8,[sp, #0x190]
71030d5be4  str q0,[sp, #0x180]
71030d5be8  ldr x8,[x20, #0x38]
71030d5bec  cbz x8,0x71030d5c78
71030d5bf0  ldr x0,[x8, #0x130]
71030d5bf4  ldr x8,[x0]
71030d5bf8  ldr x8,[x8, #0x58]
71030d5bfc  add x2,sp,#0x170
71030d5c00  mov w1,wzr
71030d5c04  mov w3,wzr
71030d5c08  mov w4,wzr
71030d5c0c  mov w5,wzr
71030d5c10  blr x8
71030d5c14  adrp x8,0x7104465000
71030d5c18  adrp x9,0x7104467000
71030d5c1c  ldr q0,[x8, #0x8d0]
71030d5c20  ldr q1,[x9, #0x700]
71030d5c24  ldr x8,[x20, #0x38]
71030d5c28  stp q0,q1,[sp, #0x170]
71030d5c2c  cbz x8,0x71030d5c8c
71030d5c30  ldr x0,[x8, #0x130]
71030d5c34  ldr x8,[x0]
71030d5c38  ldr x8,[x8, #0x58]
71030d5c3c  add x2,sp,#0x170
71030d5c40  mov w3,#0x1
71030d5c44  mov w1,wzr
71030d5c48  mov w4,wzr
71030d5c4c  mov w5,wzr
71030d5c50  blr x8
71030d5c54  b 0x71030d5c8c
71030d5c58  cbz x24,0x71030d50a8
71030d5c5c  ldr x8,[x24, #0x8]
71030d5c60  ldr x8,[x8, #0x108]
71030d5c64  cbz x8,0x71030d50a8
71030d5c68  strb wzr,[x8, #0x44]
71030d5c6c  ldrb w8,[x19, #0xc75]
71030d5c70  cbnz w8,0x71030d6538
71030d5c74  b 0x71030d50b0
71030d5c78  adrp x8,0x7104465000
71030d5c7c  adrp x9,0x7104467000
71030d5c80  ldr q0,[x8, #0x8d0]
71030d5c84  ldr q1,[x9, #0x700]
71030d5c88  stp q0,q1,[sp, #0x170]
71030d5c8c  ldr x0,[x19, #0x8b8]
71030d5c90  bl 0x710313ef20
71030d5c94  ldr x8,[x19, #0x8b8]
71030d5c98  ldr x9,[x8, #0x38]
71030d5c9c  cbz x9,0x71030d5cb8
71030d5ca0  ldr x0,[x9, #0x130]
71030d5ca4  ldr x8,[x0]
71030d5ca8  ldr x8,[x8, #0x78]
71030d5cac  mov w1,wzr
71030d5cb0  blr x8
71030d5cb4  ldr x8,[x19, #0x8b8]
71030d5cb8  ldr x8,[x8, #0x48]
71030d5cbc  cbz x8,0x71030d5ccc
71030d5cc0  ldrb w9,[x8, #0x118]
71030d5cc4  orr w9,w9,#0x1
71030d5cc8  strb w9,[x8, #0x118]
71030d5ccc  adrp x8,0x7104467000
71030d5cd0  ldr q0,[x8, #0x290]
71030d5cd4  mov w8,#0x4
71030d5cd8  str q0,[x19, #0x9c0]
71030d5cdc  str x8,[sp, #0x170]
71030d5ce0  mov x8,#0x100000001
71030d5ce4  str x8,[sp, #0x178]
71030d5ce8  mov x8,#0x1
71030d5cec  movk x8,#0x10, LSL #32
71030d5cf0  mov w1,#0x48
71030d5cf4  mov w0,#0x10
71030d5cf8  str x8,[sp, #0x180]
71030d5cfc  bl 0x710392e290
71030d5d00  mov x20,x0
71030d5d04  cbnz x0,0x71030d5d50
71030d5d08  adrp x8,0x7105332000
71030d5d0c  ldr x0,[x8, #0xf00]
71030d5d10  cbz x0,0x71030d5d4c
71030d5d14  mov w8,#0x48
71030d5d18  str wzr,[sp, #0x140]
71030d5d1c  add x1,sp,#0x140
71030d5d20  str x8,[sp, #0x40]
71030d5d24  ldr x8,[x0]
71030d5d28  ldr x8,[x8, #0x30]
71030d5d2c  add x2,sp,#0x40
71030d5d30  blr x8
71030d5d34  tbz w0,#0x0,0x71030d5d4c
71030d5d38  mov w1,#0x48
71030d5d3c  mov w0,#0x10
71030d5d40  bl 0x710392e290
71030d5d44  mov x20,x0
71030d5d48  cbnz x0,0x71030d5d50
71030d5d4c  mov x20,xzr
71030d5d50  add x2,sp,#0x170
71030d5d54  mov x0,x20
71030d5d58  mov x1,x19
71030d5d5c  add x23,sp,#0x40
71030d5d60  bl 0x710313e6a0
71030d5d64  str x20,[x19, #0x8d0]
71030d5d68  ldr q0,[x22]
71030d5d6c  ext v1.16B,v0.16B,v0.16B,0x8
71030d5d70  fmov s2,wzr
71030d5d74  mov v1.S[0x1],v2.S[0x0]
71030d5d78  mov v2.16B,v0.16B
71030d5d7c  mov v2.D[0x1],v1.D[0x0]
71030d5d80  orr x8,xzr,#0x3f8000003f800000
71030d5d84  str wzr,[sp, #0x210]
71030d5d88  strb wzr,[sp, #0x216]
71030d5d8c  str x8,[sp, #0x218]
71030d5d90  adrp x8,0x71052a8000
71030d5d94  orr w9,wzr,#0xe
71030d5d98  str q2,[sp, #0x180]
71030d5d9c  ldr x8,[x8, #0xa80]
71030d5da0  ldr q1,[x8]
71030d5da4  orr w8,wzr,#0x3f800000
71030d5da8  strb w9,[sp, #0x1e6]
71030d5dac  mov w9,#0x5a
71030d5db0  str x25,[sp, #0x1b8]
71030d5db4  strh wzr,[sp, #0x1e4]
71030d5db8  str w8,[sp, #0x1a8]
71030d5dbc  stur wzr,[x21, #0x6f]
71030d5dc0  str x9,[sp, #0x1e8]
71030d5dc4  mov w9,#0xbf800000
71030d5dc8  str w9,[sp, #0x240]
71030d5dcc  mov w20,#0xffffffff
71030d5dd0  orr w9,wzr,#0x3
71030d5dd4  str x25,[sp, #0x1f8]
71030d5dd8  str q1,[sp, #0x200]
71030d5ddc  strh wzr,[sp, #0x1f0]
71030d5de0  strh wzr,[sp, #0x214]
71030d5de4  str wzr,[sp, #0x220]
71030d5de8  str x28,[sp, #0x228]
71030d5dec  str x27,[sp, #0x230]
71030d5df0  strh wzr,[sp, #0x238]
71030d5df4  strh wzr,[sp, #0x23c]
71030d5df8  stur xzr,[x21, #0xe4]
71030d5dfc  stur xzr,[x21, #0xdc]
71030d5e00  stur xzr,[x21, #0xd4]
71030d5e04  str w20,[sp, #0x25c]
71030d5e08  strh w9,[sp, #0x260]
71030d5e0c  str w8,[sp, #0x264]
71030d5e10  strh wzr,[sp, #0x268]
71030d5e14  strb wzr,[sp, #0x26a]
71030d5e18  ldr w10,[x19, #0x77c]
71030d5e1c  ldr w8,[x19, #0x778]
71030d5e20  str w10,[sp, #0x190]
71030d5e24  ldr w10,[x19, #0x780]
71030d5e28  str w10,[sp, #0x198]
71030d5e2c  ldr w10,[x19, #0x784]
71030d5e30  str w10,[sp, #0x19c]
71030d5e34  ldr w10,[x19, #0x788]
71030d5e38  str w10,[sp, #0x1a0]
71030d5e3c  ldr w10,[x19, #0x78c]
71030d5e40  str w10,[sp, #0x1a4]
71030d5e44  ldr w10,[x19, #0x790]
71030d5e48  str w10,[sp, #0x1ac]
71030d5e4c  ldr w10,[x19, #0x794]
71030d5e50  str w10,[sp, #0x1b0]
71030d5e54  mov x10,#0x63a
71030d5e58  movk x10,#0x860b, LSL #16
71030d5e5c  movk x10,#0x14, LSL #32
71030d5e60  str q2,[sp, #0x170]
71030d5e64  stp q0,q0,[sp, #0x140]
71030d5e68  str x10,[sp, #0x1c8]
71030d5e6c  mov x10,#0x202
71030d5e70  movk x10,#0x1, LSL #32
71030d5e74  str x10,[sp, #0x1d0]
71030d5e78  mov w10,#0x3f
71030d5e7c  movk w10,#0x7, LSL #16
71030d5e80  str w10,[sp, #0x1c0]
71030d5e84  orr w10,wzr,#0x1f
71030d5e88  str w8,[sp, #0x194]
71030d5e8c  strb w10,[sp, #0x1c4]
71030d5e90  strh wzr,[sp, #0x1d8]
71030d5e94  strb w9,[sp, #0x1da]
71030d5e98  strb wzr,[sp, #0x1e3]
71030d5e9c  stur wzr,[x21, #0x6b]
71030d5ea0  str w8,[sp, #0x160]
71030d5ea4  str wzr,[sp, #0x164]
71030d5ea8  ldr x8,[x19, #0x8d0]
71030d5eac  ldr x8,[x8, #0x38]
71030d5eb0  cbz x8,0x71030d5f6c
71030d5eb4  ldr x0,[x8, #0x130]
71030d5eb8  ldr x8,[x0]
71030d5ebc  ldr x8,[x8, #0x100]
71030d5ec0  add x2,sp,#0x140
71030d5ec4  orr w4,wzr,#0x6
71030d5ec8  orr w5,wzr,#0x3f
71030d5ecc  mov w1,wzr
71030d5ed0  mov w3,wzr
71030d5ed4  blr x8
71030d5ed8  ldr x8,[x19, #0x8d0]
71030d5edc  ldr x8,[x8, #0x38]
71030d5ee0  cbz x8,0x71030d5f6c
71030d5ee4  ldr x0,[x8, #0xa0]
71030d5ee8  ldr x8,[x0]
71030d5eec  ldr x8,[x8, #0x68]
71030d5ef0  add x3,sp,#0x170
71030d5ef4  mov w1,wzr
71030d5ef8  mov w2,wzr
71030d5efc  blr x8
71030d5f00  ldr x8,[x19, #0x8d0]
71030d5f04  ldr x8,[x8, #0x38]
71030d5f08  cbz x8,0x71030d5f6c
71030d5f0c  ldr x0,[x8, #0x130]
71030d5f10  ldr x8,[x0]
71030d5f14  ldr x8,[x8, #0x100]
71030d5f18  add x2,sp,#0x140
71030d5f1c  mov w3,#0x1
71030d5f20  orr w4,wzr,#0x6
71030d5f24  orr w5,wzr,#0x3f
71030d5f28  mov w1,wzr
71030d5f2c  blr x8
71030d5f30  ldr x8,[x19, #0x8d0]
71030d5f34  ldr w9,[x19, #0x780]
71030d5f38  mov w10,#0xb4
71030d5f3c  ldr x8,[x8, #0x38]
71030d5f40  sub w9,w10,w9
71030d5f44  str w9,[sp, #0x198]
71030d5f48  cbz x8,0x71030d5f7c
71030d5f4c  ldr x0,[x8, #0xa0]
71030d5f50  ldr x8,[x0]
71030d5f54  ldr x8,[x8, #0x68]
71030d5f58  mov w1,#0x1
71030d5f5c  add x3,sp,#0x170
71030d5f60  mov w2,wzr
71030d5f64  blr x8
71030d5f68  b 0x71030d5f7c
71030d5f6c  ldr w8,[x19, #0x780]
71030d5f70  mov w9,#0xb4
71030d5f74  sub w8,w9,w8
71030d5f78  str w8,[sp, #0x198]
71030d5f7c  ldr q0,[x22]
71030d5f80  ext v1.16B,v0.16B,v0.16B,0x8
71030d5f84  fmov s2,wzr
71030d5f88  mov v1.S[0x1],v2.S[0x0]
71030d5f8c  orr w8,wzr,#0x3f800000
71030d5f90  mov v0.D[0x1],v1.D[0x0]
71030d5f94  strb wzr,[sp, #0xe6]
71030d5f98  strh wzr,[sp, #0xe4]
71030d5f9c  str wzr,[sp, #0xe0]
71030d5fa0  str w8,[sp, #0xe8]
71030d5fa4  stp q0,q0,[sp, #0x40]
71030d5fa8  adrp x9,0x71052a8000
71030d5fac  ldr x9,[x9, #0xa80]
71030d5fb0  ldr q0,[x9]
71030d5fb4  mov w9,#0x3f
71030d5fb8  movk w9,#0x3, LSL #16
71030d5fbc  str w9,[sp, #0x90]
71030d5fc0  mov w9,#0x19
71030d5fc4  strb w9,[sp, #0x94]
71030d5fc8  orr w9,wzr,#0xe
71030d5fcc  strb w9,[sp, #0xb6]
71030d5fd0  mov w9,#0xbf800000
71030d5fd4  str w8,[sp, #0x64]
71030d5fd8  str x25,[sp, #0x88]
71030d5fdc  strb wzr,[sp, #0xa0]
71030d5fe0  strh wzr,[sp, #0xa2]
71030d5fe4  sturh wzr,[sp, #0xa5]
71030d5fe8  strh wzr,[sp, #0xb4]
71030d5fec  strh wzr,[sp, #0xc0]
71030d5ff0  strb wzr,[sp, #0xb2]
71030d5ff4  strh wzr,[sp, #0xb0]
71030d5ff8  str xzr,[sp, #0xa8]
71030d5ffc  str xzr,[sp, #0xb8]
71030d6000  str x25,[sp, #0xc8]
71030d6004  str wzr,[sp, #0xe0]
71030d6008  strh wzr,[sp, #0xe4]
71030d600c  str q0,[sp, #0xd0]
71030d6010  stur x8,[x23, #0xac]
71030d6014  str w9,[sp, #0x110]
71030d6018  orr w9,wzr,#0x3
71030d601c  stp x28,x27,[sp, #0xf8]
71030d6020  strh wzr,[sp, #0x108]
71030d6024  strh wzr,[sp, #0x10c]
71030d6028  stur xzr,[x23, #0xe4]
71030d602c  stur xzr,[x23, #0xdc]
71030d6030  stur xzr,[x23, #0xd4]
71030d6034  mov x10,#0x8a42
71030d6038  movk x10,#0x99ff, LSL #16
71030d603c  movk x10,#0x13, LSL #32
71030d6040  movi v2.2D,#0x0
71030d6044  mov v1.16B,v2.16B
71030d6048  str w20,[sp, #0x12c]
71030d604c  add x20,x19,#0x8d0
71030d6050  str w8,[sp, #0x134]
71030d6054  strh wzr,[sp, #0x138]
71030d6058  strb wzr,[sp, #0x13a]
71030d605c  str wzr,[sp, #0x60]
71030d6060  strh w9,[sp, #0x130]
71030d6064  ldr w8,[x19, #0x80c]
71030d6068  str w8,[sp, #0x78]
71030d606c  ldr w8,[x19, #0x810]
71030d6070  str w8,[sp, #0x7c]
71030d6074  ldr w8,[x19, #0x814]
71030d6078  str w8,[sp, #0x80]
71030d607c  ldr w8,[x19, #0x818]
71030d6080  str w8,[sp, #0x6c]
71030d6084  ldr w8,[x19, #0x81c]
71030d6088  str w8,[sp, #0x70]
71030d608c  ldr w8,[x19, #0x820]
71030d6090  str w8,[sp, #0x74]
71030d6094  ldr w8,[x19, #0x824]
71030d6098  str w8,[sp, #0xb8]
71030d609c  mov w8,#0x1
71030d60a0  strb w8,[sp, #0xa7]
71030d60a4  strb w8,[sp, #0xb0]
71030d60a8  mov w8,#0x2
71030d60ac  strb wzr,[sp, #0xa4]
71030d60b0  str x10,[sp, #0x98]
71030d60b4  strb wzr,[sp, #0xa1]
71030d60b8  sturh w26,[sp, #0xad]
71030d60bc  strb w8,[sp, #0xb3]
71030d60c0  strb w9,[sp, #0xaa]
71030d60c4  ldr w9,[x19, #0x828]
71030d60c8  str w9,[sp, #0x68]
71030d60cc  ldr s0,[x19, #0x7fc]
71030d60d0  fneg s0,s0
71030d60d4  add x9,x19,#0x800
71030d60d8  mov v1.S[0x0],v0.S[0x0]
71030d60dc  ld1 {v1.S}[1],[x9]
71030d60e0  add x9,x19,#0x804
71030d60e4  ld1 {v2.S}[1],[x9]
71030d60e8  ldr w9,[x19, #0x808]
71030d60ec  str w9,[sp, #0x160]
71030d60f0  str w8,[sp, #0x164]
71030d60f4  stp q1,q2,[sp, #0x140]
71030d60f8  ldr x0,[x19, #0x8d0]
71030d60fc  ldr x8,[x0, #0x38]
71030d6100  cbz x8,0x71030d61b8
71030d6104  ldr x0,[x8, #0x130]
71030d6108  ldr x8,[x0]
71030d610c  ldr x8,[x8, #0x100]
71030d6110  add x2,sp,#0x140
71030d6114  mov w3,#0x2
71030d6118  orr w4,wzr,#0x6
71030d611c  orr w5,wzr,#0x3f
71030d6120  mov w1,wzr
71030d6124  blr x8
71030d6128  ldr x0,[x19, #0x8d0]
71030d612c  ldr x8,[x0, #0x38]
71030d6130  cbz x8,0x71030d61b8
71030d6134  ldr x0,[x8, #0xa0]
71030d6138  ldr x8,[x0]
71030d613c  ldr x8,[x8, #0x68]
71030d6140  mov w1,#0x2
71030d6144  add x3,sp,#0x40
71030d6148  mov w2,wzr
71030d614c  blr x8
71030d6150  ldr x0,[x19, #0x8d0]
71030d6154  ldr x8,[x0, #0x38]
71030d6158  ldr w9,[x19, #0x82c]
71030d615c  str w9,[sp, #0x68]
71030d6160  cbz x8,0x71030d61c0
71030d6164  ldr x0,[x8, #0x130]
71030d6168  ldr x8,[x0]
71030d616c  ldr x8,[x8, #0x100]
71030d6170  add x2,sp,#0x140
71030d6174  orr w3,wzr,#0x3
71030d6178  orr w4,wzr,#0x6
71030d617c  orr w5,wzr,#0x3f
71030d6180  mov w1,wzr
71030d6184  blr x8
71030d6188  ldr x0,[x19, #0x8d0]
71030d618c  ldr x8,[x0, #0x38]
71030d6190  cbz x8,0x71030d61c0
71030d6194  ldr x0,[x8, #0xa0]
71030d6198  ldr x8,[x0]
71030d619c  ldr x8,[x8, #0x68]
71030d61a0  orr w1,wzr,#0x3
71030d61a4  add x3,sp,#0x40
71030d61a8  mov w2,wzr
71030d61ac  blr x8
71030d61b0  ldr x0,[x20]
71030d61b4  b 0x71030d61c0
71030d61b8  ldr w8,[x19, #0x82c]
71030d61bc  str w8,[sp, #0x68]
71030d61c0  bl 0x710313ef20
71030d61c4  ldr x8,[x20]
71030d61c8  ldr x8,[x8, #0x38]
71030d61cc  cbz x8,0x71030d61e4
71030d61d0  ldr x0,[x8, #0x130]
71030d61d4  ldr x8,[x0]
71030d61d8  ldr x8,[x8, #0x120]
71030d61dc  mov w1,wzr
71030d61e0  blr x8
71030d61e4  str xzr,[sp, #0x170]
71030d61e8  ldr x8,[x19, #0x338]
71030d61ec  ldr x9,[x8]
71030d61f0  ldr x0,[x9, #0x8]
71030d61f4  cbz x0,0x71030d620c
71030d61f8  add x1,sp,#0x170
71030d61fc  mov w2,wzr
71030d6200  bl 0x7102405040
71030d6204  ldr x8,[x19, #0x338]
71030d6208  b 0x71030d6210
71030d620c  mov w0,#0xffffffff
71030d6210  add x9,x19,#0xc20
71030d6214  str w0,[x19, #0xbd4]
71030d6218  str x9,[sp, #0x40]
71030d621c  ldr x8,[x8]
71030d6220  ldr x0,[x8, #0x8]
71030d6224  mov w23,#0xffffffff
71030d6228  cbz x0,0x71030d623c
71030d622c  add x1,sp,#0x40
71030d6230  mov w2,wzr
71030d6234  bl 0x7102405040
71030d6238  b 0x71030d6240
71030d623c  mov w0,w23
71030d6240  ldrb w8,[x19, #0xc75]
71030d6244  str w0,[x19, #0xc10]
71030d6248  cbnz w8,0x71030d6538
71030d624c  mov w0,#0x10
71030d6250  orr w1,wzr,#0xc0
71030d6254  bl 0x710392e290
71030d6258  mov x20,x0
71030d625c  cbnz x0,0x71030d62a8
71030d6260  adrp x8,0x7105332000
71030d6264  ldr x0,[x8, #0xf00]
71030d6268  cbz x0,0x71030d62a4
71030d626c  orr w8,wzr,#0xc0
71030d6270  str wzr,[sp, #0x40]
71030d6274  add x1,sp,#0x40
71030d6278  str x8,[sp, #0x170]
71030d627c  ldr x8,[x0]
71030d6280  ldr x8,[x8, #0x30]
71030d6284  add x2,sp,#0x170
71030d6288  blr x8
71030d628c  tbz w0,#0x0,0x71030d62a4
71030d6290  mov w0,#0x10
71030d6294  orr w1,wzr,#0xc0
71030d6298  bl 0x710392e290
71030d629c  mov x20,x0
71030d62a0  cbnz x0,0x71030d62a8
71030d62a4  mov x20,xzr
71030d62a8  mov x2,#0x57d8
71030d62ac  movk x2,#0xbebb, LSL #16
71030d62b0  movk x2,#0x14, LSL #32
71030d62b4  mov x0,x20
71030d62b8  mov x1,x19
71030d62bc  mov w3,wzr
71030d62c0  bl 0x71030dbbc0
71030d62c4  mov w8,#0x4
71030d62c8  str x20,[x19, #0x8c0]
71030d62cc  str x8,[sp, #0x170]
71030d62d0  mov x8,#0x100000001
71030d62d4  str x8,[sp, #0x178]
71030d62d8  mov x8,#0x1
71030d62dc  movk x8,#0x10, LSL #32
71030d62e0  mov w1,#0x48
71030d62e4  mov w0,#0x10
71030d62e8  str x8,[sp, #0x180]
71030d62ec  bl 0x710392e290
71030d62f0  mov x20,x0
71030d62f4  cbnz x0,0x71030d6340
71030d62f8  adrp x8,0x7105332000
71030d62fc  ldr x0,[x8, #0xf00]
71030d6300  cbz x0,0x71030d633c
71030d6304  mov w8,#0x48
71030d6308  str wzr,[sp, #0x140]
71030d630c  add x1,sp,#0x140
71030d6310  str x8,[sp, #0x40]
71030d6314  ldr x8,[x0]
71030d6318  ldr x8,[x8, #0x30]
71030d631c  add x2,sp,#0x40
71030d6320  blr x8
71030d6324  tbz w0,#0x0,0x71030d633c
71030d6328  mov w1,#0x48
71030d632c  mov w0,#0x10
71030d6330  bl 0x710392e290
71030d6334  mov x20,x0
71030d6338  cbnz x0,0x71030d6340
71030d633c  mov x20,xzr
71030d6340  add x2,sp,#0x170
71030d6344  mov x0,x20
71030d6348  mov x1,x19
71030d634c  bl 0x710313e6a0
71030d6350  str x20,[x19, #0x8d8]
71030d6354  ldr q0,[x22]
71030d6358  ext v1.16B,v0.16B,v0.16B,0x8
71030d635c  fmov s2,wzr
71030d6360  mov v1.S[0x1],v2.S[0x0]
71030d6364  mov v2.16B,v0.16B
71030d6368  mov v2.D[0x1],v1.D[0x0]
71030d636c  orr x8,xzr,#0x3f8000003f800000
71030d6370  str wzr,[sp, #0x210]
71030d6374  strb wzr,[sp, #0x216]
71030d6378  str x8,[sp, #0x218]
71030d637c  adrp x8,0x71052a8000
71030d6380  orr w9,wzr,#0xe
71030d6384  str q2,[sp, #0x180]
71030d6388  ldr x8,[x8, #0xa80]
71030d638c  ldr q1,[x8]
71030d6390  orr w8,wzr,#0x3f800000
71030d6394  strb w9,[sp, #0x1e6]
71030d6398  orr w9,wzr,#0x3c
71030d639c  str x25,[sp, #0x1b8]
71030d63a0  strh wzr,[sp, #0x1e4]
71030d63a4  str w8,[sp, #0x1a8]
71030d63a8  stur wzr,[x21, #0x6f]
71030d63ac  str x9,[sp, #0x1e8]
71030d63b0  mov w9,#0xbf800000
71030d63b4  str w9,[sp, #0x240]
71030d63b8  orr w9,wzr,#0x3
71030d63bc  str x25,[sp, #0x1f8]
71030d63c0  strh wzr,[sp, #0x1f0]
71030d63c4  str q1,[sp, #0x200]
71030d63c8  strh wzr,[sp, #0x214]
71030d63cc  str wzr,[sp, #0x220]
71030d63d0  str x28,[sp, #0x228]
71030d63d4  str x27,[sp, #0x230]
71030d63d8  strh wzr,[sp, #0x238]
71030d63dc  strh wzr,[sp, #0x23c]
71030d63e0  stur xzr,[x21, #0xe4]
71030d63e4  stur xzr,[x21, #0xdc]
71030d63e8  stur xzr,[x21, #0xd4]
71030d63ec  str w23,[sp, #0x25c]
71030d63f0  strh w9,[sp, #0x260]
71030d63f4  str w8,[sp, #0x264]
71030d63f8  strh wzr,[sp, #0x268]
71030d63fc  strb wzr,[sp, #0x26a]
71030d6400  ldr w9,[x19, #0x79c]
71030d6404  ldr w8,[x19, #0x798]
71030d6408  str w9,[sp, #0x190]
71030d640c  ldr w9,[x19, #0x7a0]
71030d6410  str w9,[sp, #0x198]
71030d6414  ldr w9,[x19, #0x7a4]
71030d6418  str w9,[sp, #0x19c]
71030d641c  ldr w9,[x19, #0x7a8]
71030d6420  str w9,[sp, #0x1a0]
71030d6424  ldr w9,[x19, #0x7ac]
71030d6428  str w9,[sp, #0x1a4]
71030d642c  ldr w9,[x19, #0x7b0]
71030d6430  str w9,[sp, #0x1ac]
71030d6434  ldr w9,[x19, #0x7b4]
71030d6438  str w9,[sp, #0x1b0]
71030d643c  mov x9,#0xb00
71030d6440  str q2,[sp, #0x170]
71030d6444  stp q0,q0,[sp, #0x40]
71030d6448  movk x9,#0x1, LSL #32
71030d644c  stp x24,x9,[sp, #0x1c8]
71030d6450  mov w9,#0x3f
71030d6454  movk w9,#0x7, LSL #16
71030d6458  str w9,[sp, #0x1c0]
71030d645c  orr w9,wzr,#0x1f
71030d6460  str w8,[sp, #0x194]
71030d6464  strb w9,[sp, #0x1c4]
71030d6468  strb wzr,[sp, #0x1e3]
71030d646c  strb wzr,[sp, #0x1de]
71030d6470  strh wzr,[sp, #0x1dc]
71030d6474  str wzr,[sp, #0x1d8]
71030d6478  stp w8,wzr,[sp, #0x60]
71030d647c  ldr x0,[x19, #0x8d8]
71030d6480  ldr x8,[x0, #0x38]
71030d6484  add x20,x19,#0x8d8
71030d6488  cbz x8,0x71030d64dc
71030d648c  ldr x0,[x8, #0x130]
71030d6490  ldr x8,[x0]
71030d6494  ldr x8,[x8, #0x100]
71030d6498  add x2,sp,#0x40
71030d649c  orr w4,wzr,#0x6
71030d64a0  orr w5,wzr,#0x3f
71030d64a4  mov w1,wzr
71030d64a8  mov w3,wzr
71030d64ac  blr x8
71030d64b0  ldr x0,[x19, #0x8d8]
71030d64b4  ldr x8,[x0, #0x38]
71030d64b8  cbz x8,0x71030d64dc
71030d64bc  ldr x0,[x8, #0xa0]
71030d64c0  ldr x8,[x0]
71030d64c4  ldr x8,[x8, #0x68]
71030d64c8  add x3,sp,#0x170
71030d64cc  mov w1,wzr
71030d64d0  mov w2,wzr
71030d64d4  blr x8
71030d64d8  ldr x0,[x20]
71030d64dc  bl 0x710313ef20
71030d64e0  ldr x8,[x20]
71030d64e4  ldr x8,[x8, #0x38]
71030d64e8  cbz x8,0x71030d6500
71030d64ec  ldr x0,[x8, #0x130]
71030d64f0  ldr x8,[x0]
71030d64f4  ldr x8,[x8, #0x120]
71030d64f8  mov w1,wzr
71030d64fc  blr x8
71030d6500  add x8,x19,#0xbe0
71030d6504  str x8,[sp, #0x170]
71030d6508  ldr x8,[x19, #0x338]
71030d650c  ldr x8,[x8]
71030d6510  ldr x0,[x8, #0x8]
71030d6514  cbz x0,0x71030d6528
71030d6518  add x1,sp,#0x170
71030d651c  mov w2,wzr
71030d6520  bl 0x7102405040
71030d6524  b 0x71030d652c
71030d6528  mov w0,#0xffffffff
71030d652c  ldrb w8,[x19, #0xc75]
71030d6530  str w0,[x19, #0xbdc]
71030d6534  cbz w8,0x71030d699c
71030d6538  ldr x9,[x19, #0x310]
71030d653c  ldp x8,x9,[x9, #0xd0]
71030d6540  cmp x8,x9
71030d6544  b.eq 0x71030d65d4
71030d6548  mov x10,#0x1e6
71030d654c  movk x10,#0x4d07, LSL #16
71030d6550  movk x10,#0x1c, LSL #32
71030d6554  ldr w11,[x8, #0x8]
71030d6558  cmp w11,#0x1
71030d655c  b.hi 0x71030d6570
71030d6560  ldr x20,[x8]
71030d6564  ldr x11,[x20, #0x68]
71030d6568  cmp x11,x10
71030d656c  b.eq 0x71030d6580
71030d6570  add x8,x8,#0x10
71030d6574  cmp x9,x8
71030d6578  b.ne 0x71030d6554
71030d657c  b 0x71030d65d4
71030d6580  cbz x20,0x71030d65d4
71030d6584  ldrb w8,[x20, #0xe0]
71030d6588  cbz w8,0x71030d659c
71030d658c  ldr x8,[x20, #0xc8]
71030d6590  cbz x8,0x71030d659c
71030d6594  mov w9,#0x101
71030d6598  strh w9,[x8, #0x30]
71030d659c  ldr x8,[x20, #0xd8]
71030d65a0  cbz x8,0x71030d65ac
71030d65a4  mov w9,#0x1
71030d65a8  strb w9,[x8, #0x21]
71030d65ac  ldrb w8,[x20, #0xe0]
71030d65b0  cbz w8,0x71030d65bc
71030d65b4  ldr x8,[x20, #0xb0]
71030d65b8  strb wzr,[x8, #0x10]
71030d65bc  add x0,x20,#0x108
71030d65c0  strb wzr,[x20, #0x110]
71030d65c4  bl 0x71025e9d50
71030d65c8  ldrb w8,[x20, #0x118]
71030d65cc  orr w8,w8,#0x1
71030d65d0  strb w8,[x20, #0x118]
71030d65d4  ldr x9,[x19, #0x310]
71030d65d8  ldp x8,x9,[x9, #0xd0]
71030d65dc  cmp x8,x9
71030d65e0  b.eq 0x71030d6670
71030d65e4  mov x10,#0xe11d
71030d65e8  movk x10,#0xb2c6, LSL #16
71030d65ec  movk x10,#0x22, LSL #32
71030d65f0  ldr w11,[x8, #0x8]
71030d65f4  cmp w11,#0x1
71030d65f8  b.hi 0x71030d660c
71030d65fc  ldr x20,[x8]
71030d6600  ldr x11,[x20, #0x68]
71030d6604  cmp x11,x10
71030d6608  b.eq 0x71030d661c
71030d660c  add x8,x8,#0x10
71030d6610  cmp x9,x8
71030d6614  b.ne 0x71030d65f0
71030d6618  b 0x71030d6670
71030d661c  cbz x20,0x71030d6670
71030d6620  ldrb w8,[x20, #0xe0]
71030d6624  cbz w8,0x71030d6638
71030d6628  ldr x8,[x20, #0xc8]
71030d662c  cbz x8,0x71030d6638
71030d6630  mov w9,#0x101
71030d6634  strh w9,[x8, #0x30]
71030d6638  ldr x8,[x20, #0xd8]
71030d663c  cbz x8,0x71030d6648
71030d6640  mov w9,#0x1
71030d6644  strb w9,[x8, #0x21]
71030d6648  ldrb w8,[x20, #0xe0]
71030d664c  cbz w8,0x71030d6658
71030d6650  ldr x8,[x20, #0xb0]
71030d6654  strb wzr,[x8, #0x10]
71030d6658  add x0,x20,#0x108
71030d665c  strb wzr,[x20, #0x110]
71030d6660  bl 0x71025e9d50
71030d6664  ldrb w8,[x20, #0x118]
71030d6668  orr w8,w8,#0x1
71030d666c  strb w8,[x20, #0x118]
71030d6670  ldr x9,[x19, #0x310]
71030d6674  ldp x8,x9,[x9, #0xd0]
71030d6678  cmp x8,x9
71030d667c  b.eq 0x71030d670c
71030d6680  mov x10,#0x1551
71030d6684  movk x10,#0x9392, LSL #16
71030d6688  movk x10,#0x16, LSL #32
71030d668c  ldr w11,[x8, #0x8]
71030d6690  cmp w11,#0x1
71030d6694  b.hi 0x71030d66a8
71030d6698  ldr x20,[x8]
71030d669c  ldr x11,[x20, #0x68]
71030d66a0  cmp x11,x10
71030d66a4  b.eq 0x71030d66b8
71030d66a8  add x8,x8,#0x10
71030d66ac  cmp x9,x8
71030d66b0  b.ne 0x71030d668c
71030d66b4  b 0x71030d670c
71030d66b8  cbz x20,0x71030d670c
71030d66bc  ldrb w8,[x20, #0xe0]
71030d66c0  cbz w8,0x71030d66d4
71030d66c4  ldr x8,[x20, #0xc8]
71030d66c8  cbz x8,0x71030d66d4
71030d66cc  mov w9,#0x101
71030d66d0  strh w9,[x8, #0x30]
71030d66d4  ldr x8,[x20, #0xd8]
71030d66d8  cbz x8,0x71030d66e4
71030d66dc  mov w9,#0x1
71030d66e0  strb w9,[x8, #0x21]
71030d66e4  ldrb w8,[x20, #0xe0]
71030d66e8  cbz w8,0x71030d66f4
71030d66ec  ldr x8,[x20, #0xb0]
71030d66f0  strb wzr,[x8, #0x10]
71030d66f4  add x0,x20,#0x108
71030d66f8  strb wzr,[x20, #0x110]
71030d66fc  bl 0x71025e9d50
71030d6700  ldrb w8,[x20, #0x118]
71030d6704  orr w8,w8,#0x1
71030d6708  strb w8,[x20, #0x118]
71030d670c  ldr x9,[x19, #0x310]
71030d6710  ldp x8,x9,[x9, #0xd0]
71030d6714  cmp x8,x9
71030d6718  b.eq 0x71030d67a8
71030d671c  mov x10,#0x6a34
71030d6720  movk x10,#0x1242, LSL #16
71030d6724  movk x10,#0x17, LSL #32
71030d6728  ldr w11,[x8, #0x8]
71030d672c  cmp w11,#0x1
71030d6730  b.hi 0x71030d6744
71030d6734  ldr x20,[x8]
71030d6738  ldr x11,[x20, #0x68]
71030d673c  cmp x11,x10
71030d6740  b.eq 0x71030d6754
71030d6744  add x8,x8,#0x10
71030d6748  cmp x9,x8
71030d674c  b.ne 0x71030d6728
71030d6750  b 0x71030d67a8
71030d6754  cbz x20,0x71030d67a8
71030d6758  ldrb w8,[x20, #0xe0]
71030d675c  cbz w8,0x71030d6770
71030d6760  ldr x8,[x20, #0xc8]
71030d6764  cbz x8,0x71030d6770
71030d6768  mov w9,#0x101
71030d676c  strh w9,[x8, #0x30]
71030d6770  ldr x8,[x20, #0xd8]
71030d6774  cbz x8,0x71030d6780
71030d6778  mov w9,#0x1
71030d677c  strb w9,[x8, #0x21]
71030d6780  ldrb w8,[x20, #0xe0]
71030d6784  cbz w8,0x71030d6790
71030d6788  ldr x8,[x20, #0xb0]
71030d678c  strb wzr,[x8, #0x10]
71030d6790  add x0,x20,#0x108
71030d6794  strb wzr,[x20, #0x110]
71030d6798  bl 0x71025e9d50
71030d679c  ldrb w8,[x20, #0x118]
71030d67a0  orr w8,w8,#0x1
71030d67a4  strb w8,[x20, #0x118]
71030d67a8  ldr x9,[x19, #0x310]
71030d67ac  ldp x8,x9,[x9, #0xd0]
71030d67b0  cmp x8,x9
71030d67b4  b.eq 0x71030d6844
71030d67b8  mov x10,#0xbea9
71030d67bc  movk x10,#0xf194, LSL #16
71030d67c0  movk x10,#0x1b, LSL #32
71030d67c4  ldr w11,[x8, #0x8]
71030d67c8  cmp w11,#0x1
71030d67cc  b.hi 0x71030d67e0
71030d67d0  ldr x20,[x8]
71030d67d4  ldr x11,[x20, #0x68]
71030d67d8  cmp x11,x10
71030d67dc  b.eq 0x71030d67f0
71030d67e0  add x8,x8,#0x10
71030d67e4  cmp x9,x8
71030d67e8  b.ne 0x71030d67c4
71030d67ec  b 0x71030d6844
71030d67f0  cbz x20,0x71030d6844
71030d67f4  ldrb w8,[x20, #0xe0]
71030d67f8  cbz w8,0x71030d680c
71030d67fc  ldr x8,[x20, #0xc8]
71030d6800  cbz x8,0x71030d680c
71030d6804  mov w9,#0x101
71030d6808  strh w9,[x8, #0x30]
71030d680c  ldr x8,[x20, #0xd8]
71030d6810  cbz x8,0x71030d681c
71030d6814  mov w9,#0x1
71030d6818  strb w9,[x8, #0x21]
71030d681c  ldrb w8,[x20, #0xe0]
71030d6820  cbz w8,0x71030d682c
71030d6824  ldr x8,[x20, #0xb0]
71030d6828  strb wzr,[x8, #0x10]
71030d682c  add x0,x20,#0x108
71030d6830  strb wzr,[x20, #0x110]
71030d6834  bl 0x71025e9d50
71030d6838  ldrb w8,[x20, #0x118]
71030d683c  orr w8,w8,#0x1
71030d6840  strb w8,[x20, #0x118]
71030d6844  ldr x9,[x19, #0x310]
71030d6848  ldp x8,x9,[x9, #0xd0]
71030d684c  cmp x8,x9
71030d6850  b.eq 0x71030d68e0
71030d6854  mov x10,#0x720a
71030d6858  movk x10,#0xf073, LSL #16
71030d685c  movk x10,#0x1a, LSL #32
71030d6860  ldr w11,[x8, #0x8]
71030d6864  cmp w11,#0x1
71030d6868  b.hi 0x71030d687c
71030d686c  ldr x20,[x8]
71030d6870  ldr x11,[x20, #0x68]
71030d6874  cmp x11,x10
71030d6878  b.eq 0x71030d688c
71030d687c  add x8,x8,#0x10
71030d6880  cmp x9,x8
71030d6884  b.ne 0x71030d6860
71030d6888  b 0x71030d68e0
71030d688c  cbz x20,0x71030d68e0
71030d6890  ldrb w8,[x20, #0xe0]
71030d6894  cbz w8,0x71030d68a8
71030d6898  ldr x8,[x20, #0xc8]
71030d689c  cbz x8,0x71030d68a8
71030d68a0  mov w9,#0x101
71030d68a4  strh w9,[x8, #0x30]
71030d68a8  ldr x8,[x20, #0xd8]
71030d68ac  cbz x8,0x71030d68b8
71030d68b0  mov w9,#0x1
71030d68b4  strb w9,[x8, #0x21]
71030d68b8  ldrb w8,[x20, #0xe0]
71030d68bc  cbz w8,0x71030d68c8
71030d68c0  ldr x8,[x20, #0xb0]
71030d68c4  strb wzr,[x8, #0x10]
71030d68c8  add x0,x20,#0x108
71030d68cc  strb wzr,[x20, #0x110]
71030d68d0  bl 0x71025e9d50
71030d68d4  ldrb w8,[x20, #0x118]
71030d68d8  orr w8,w8,#0x1
71030d68dc  strb w8,[x20, #0x118]
71030d68e0  ldr x9,[x19, #0x310]
71030d68e4  ldp x8,x9,[x9, #0xd0]
71030d68e8  cmp x8,x9
71030d68ec  b.eq 0x71030d697c
71030d68f0  mov x10,#0x57d8
71030d68f4  movk x10,#0xbebb, LSL #16
71030d68f8  movk x10,#0x14, LSL #32
71030d68fc  ldr w11,[x8, #0x8]
71030d6900  cmp w11,#0x1
71030d6904  b.hi 0x71030d6918
71030d6908  ldr x19,[x8]
71030d690c  ldr x11,[x19, #0x68]
71030d6910  cmp x11,x10
71030d6914  b.eq 0x71030d6928
71030d6918  add x8,x8,#0x10
71030d691c  cmp x9,x8
71030d6920  b.ne 0x71030d68fc
71030d6924  b 0x71030d697c
71030d6928  cbz x19,0x71030d697c
71030d692c  ldrb w8,[x19, #0xe0]
71030d6930  cbz w8,0x71030d6944
71030d6934  ldr x8,[x19, #0xc8]
71030d6938  cbz x8,0x71030d6944
71030d693c  mov w9,#0x101
71030d6940  strh w9,[x8, #0x30]
71030d6944  ldr x8,[x19, #0xd8]
71030d6948  cbz x8,0x71030d6954
71030d694c  mov w9,#0x1
71030d6950  strb w9,[x8, #0x21]
71030d6954  ldrb w8,[x19, #0xe0]
71030d6958  cbz w8,0x71030d6964
71030d695c  ldr x8,[x19, #0xb0]
71030d6960  strb wzr,[x8, #0x10]
71030d6964  add x0,x19,#0x108
71030d6968  strb wzr,[x19, #0x110]
71030d696c  bl 0x71025e9d50
71030d6970  ldrb w8,[x19, #0x118]
71030d6974  orr w8,w8,#0x1
71030d6978  strb w8,[x19, #0x118]
71030d697c  add sp,sp,#0x280
71030d6980  ldp x29,x30,[sp, #0x50]
71030d6984  ldp x20,x19,[sp, #0x40]
71030d6988  ldp x22,x21,[sp, #0x30]
71030d698c  ldp x24,x23,[sp, #0x20]
71030d6990  ldp x26,x25,[sp, #0x10]
71030d6994  ldp x28,x27,[sp], #0x60
71030d6998  ret
71030d699c  mov w8,#0x64
71030d69a0  strb w8,[x19, #0xa70]
71030d69a4  mov w8,#0x1
71030d69a8  strh w8,[x19, #0xa78]
71030d69ac  ldr w8,[x19, #0x740]
71030d69b0  str w8,[x19, #0xa74]
71030d69b4  ldr x8,[x19, #0x8b8]
71030d69b8  strb wzr,[x19, #0x8fa]
71030d69bc  ldr x8,[x8, #0x48]
71030d69c0  cbz x8,0x71030d6a10
71030d69c4  add x0,x8,#0x108
71030d69c8  strb wzr,[x8, #0x110]
71030d69cc  bl 0x71025e9d50
71030d69d0  ldr x8,[x19, #0x8b8]
71030d69d4  ldr x8,[x8, #0x48]
71030d69d8  cbz x8,0x71030d6a10
71030d69dc  ldrb w9,[x8, #0xe0]
71030d69e0  cbz w9,0x71030d69f0
71030d69e4  ldr x9,[x8, #0xc8]
71030d69e8  cbz x9,0x71030d69f0
71030d69ec  strh w26,[x9, #0x30]
71030d69f0  ldr x9,[x8, #0xd8]
71030d69f4  cbz x9,0x71030d6a00
71030d69f8  mov w10,#0x1
71030d69fc  strb w10,[x9, #0x21]
71030d6a00  ldrb w9,[x8, #0xe0]
71030d6a04  cbz w9,0x71030d6a10
71030d6a08  ldr x8,[x8, #0xb0]
71030d6a0c  strb wzr,[x8, #0x10]
71030d6a10  ldr x8,[x19, #0x8b8]
71030d6a14  ldr x8,[x8, #0x38]
71030d6a18  cbz x8,0x71030d6a30
71030d6a1c  ldr x0,[x8, #0x130]
71030d6a20  ldr x8,[x0]
71030d6a24  ldr x8,[x8, #0x78]
71030d6a28  mov w1,wzr
71030d6a2c  blr x8
71030d6a30  ldr x8,[x19, #0x8d0]
71030d6a34  ldr x8,[x8, #0x38]
71030d6a38  cbz x8,0x71030d6a50
71030d6a3c  ldr x0,[x8, #0x130]
71030d6a40  ldr x8,[x0]
71030d6a44  ldr x8,[x8, #0x120]
71030d6a48  mov w1,wzr
71030d6a4c  blr x8
71030d6a50  ldr x8,[x19, #0x8b0]
71030d6a54  ldr x8,[x8, #0x48]
71030d6a58  cbz x8,0x71030d6aa8
71030d6a5c  add x0,x8,#0x108
71030d6a60  strb wzr,[x8, #0x110]
71030d6a64  bl 0x71025e9d50
71030d6a68  ldr x8,[x19, #0x8b0]
71030d6a6c  ldr x8,[x8, #0x48]
71030d6a70  cbz x8,0x71030d6aa8
71030d6a74  ldrb w9,[x8, #0xe0]
71030d6a78  cbz w9,0x71030d6a88
71030d6a7c  ldr x9,[x8, #0xc8]
71030d6a80  cbz x9,0x71030d6a88
71030d6a84  strh w26,[x9, #0x30]
71030d6a88  ldr x9,[x8, #0xd8]
71030d6a8c  cbz x9,0x71030d6a98
71030d6a90  mov w10,#0x1
71030d6a94  strb w10,[x9, #0x21]
71030d6a98  ldrb w9,[x8, #0xe0]
71030d6a9c  cbz w9,0x71030d6aa8
71030d6aa0  ldr x8,[x8, #0xb0]
71030d6aa4  strb wzr,[x8, #0x10]
71030d6aa8  ldr x8,[x19, #0x8b0]
71030d6aac  ldr x8,[x8, #0x38]
71030d6ab0  cbz x8,0x71030d6ac8
71030d6ab4  ldr x0,[x8, #0x130]
71030d6ab8  ldr x8,[x0]
71030d6abc  ldr x8,[x8, #0x78]
71030d6ac0  mov w1,wzr
71030d6ac4  blr x8
71030d6ac8  ldr x8,[x19, #0x9d8]
71030d6acc  ldr x8,[x8, #0x8]
71030d6ad0  mov w9,#0x1
71030d6ad4  str w9,[x8, #0x10]
71030d6ad8  ldr x8,[x19, #0x8a8]
71030d6adc  strh wzr,[x19, #0xa84]
71030d6ae0  ldr x8,[x8, #0x48]
71030d6ae4  cbz x8,0x71030d6b34
71030d6ae8  add x0,x8,#0x108
71030d6aec  strb wzr,[x8, #0x110]
71030d6af0  bl 0x71025e9d50
71030d6af4  ldr x8,[x19, #0x8a8]
71030d6af8  ldr x8,[x8, #0x48]
71030d6afc  cbz x8,0x71030d6b34
71030d6b00  ldrb w9,[x8, #0xe0]
71030d6b04  cbz w9,0x71030d6b14
71030d6b08  ldr x9,[x8, #0xc8]
71030d6b0c  cbz x9,0x71030d6b14
71030d6b10  strh w26,[x9, #0x30]
71030d6b14  ldr x9,[x8, #0xd8]
71030d6b18  cbz x9,0x71030d6b24
71030d6b1c  mov w10,#0x1
71030d6b20  strb w10,[x9, #0x21]
71030d6b24  ldrb w9,[x8, #0xe0]
71030d6b28  cbz w9,0x71030d6b34
71030d6b2c  ldr x8,[x8, #0xb0]
71030d6b30  strb wzr,[x8, #0x10]
71030d6b34  ldr x8,[x19, #0x8a8]
71030d6b38  ldr x8,[x8, #0x38]
71030d6b3c  cbz x8,0x71030d6b54
71030d6b40  ldr x0,[x8, #0x130]
71030d6b44  ldr x8,[x0]
71030d6b48  ldr x8,[x8, #0x78]
71030d6b4c  mov w1,wzr
71030d6b50  blr x8
71030d6b54  ldr x8,[x19, #0x8c8]
71030d6b58  ldr x8,[x8, #0x38]
71030d6b5c  cbz x8,0x71030d6b74
71030d6b60  ldr x0,[x8, #0x130]
71030d6b64  ldr x8,[x0]
71030d6b68  ldr x8,[x8, #0x120]
71030d6b6c  mov w1,wzr
71030d6b70  blr x8
71030d6b74  ldr w8,[x19, #0x76c]
71030d6b78  str w8,[x19, #0xb10]
71030d6b7c  ldr x8,[x19, #0x8c0]
71030d6b80  str wzr,[x19, #0xb20]
71030d6b84  strb wzr,[x19, #0xb30]
71030d6b88  ldr x8,[x8, #0x48]
71030d6b8c  cbz x8,0x71030d6bdc
71030d6b90  add x0,x8,#0x108
71030d6b94  strb wzr,[x8, #0x110]
71030d6b98  bl 0x71025e9d50
71030d6b9c  ldr x8,[x19, #0x8c0]
71030d6ba0  ldr x8,[x8, #0x48]
71030d6ba4  cbz x8,0x71030d6bdc
71030d6ba8  ldrb w9,[x8, #0xe0]
71030d6bac  cbz w9,0x71030d6bbc
71030d6bb0  ldr x9,[x8, #0xc8]
71030d6bb4  cbz x9,0x71030d6bbc
71030d6bb8  strh w26,[x9, #0x30]
71030d6bbc  ldr x9,[x8, #0xd8]
71030d6bc0  cbz x9,0x71030d6bcc
71030d6bc4  mov w10,#0x1
71030d6bc8  strb w10,[x9, #0x21]
71030d6bcc  ldrb w9,[x8, #0xe0]
71030d6bd0  cbz w9,0x71030d6bdc
71030d6bd4  ldr x8,[x8, #0xb0]
71030d6bd8  strb wzr,[x8, #0x10]
71030d6bdc  ldr x8,[x19, #0x8d8]
71030d6be0  ldr x8,[x8, #0x38]
71030d6be4  cbz x8,0x71030d6bfc
71030d6be8  ldr x0,[x8, #0x130]
71030d6bec  ldr x8,[x0]
71030d6bf0  ldr x8,[x8, #0x120]
71030d6bf4  mov w1,wzr
71030d6bf8  blr x8
71030d6bfc  ldr x8,[x19, #0xb50]
71030d6c00  ldr q0,[sp, #0x20]
71030d6c04  mov w9,#0x1
71030d6c08  ldr x8,[x8, #0x8]
71030d6c0c  str w9,[x8, #0x10]
71030d6c10  str q0,[sp, #0x40]
71030d6c14  ldr q0,[sp, #0x30]
71030d6c18  str q0,[sp, #0x50]
71030d6c1c  ldr q0,[sp, #0x10]
71030d6c20  str q0,[sp, #0x60]
71030d6c24  ldr q0,[sp]
71030d6c28  str q0,[sp, #0x70]
71030d6c2c  strb wzr,[x19, #0xbb0]
71030d6c30  ldr x8,[x19, #0x888]
71030d6c34  ldr x20,[x8, #0x48]
71030d6c38  cbz x20,0x71030d6cc0
71030d6c3c  ldr x0,[x20, #0x90]
71030d6c40  ldr x8,[x0]
71030d6c44  ldr x8,[x8, #0x148]
71030d6c48  add x1,sp,#0x40
71030d6c4c  blr x8
71030d6c50  ldr x20,[x20, #0xd8]
71030d6c54  cbz x20,0x71030d6cc0
71030d6c58  ldr x8,[sp, #0x58]
71030d6c5c  str x8,[sp, #0x188]
71030d6c60  ldr x8,[sp, #0x50]
71030d6c64  str x8,[sp, #0x180]
71030d6c68  ldr x8,[sp, #0x48]
71030d6c6c  str x8,[sp, #0x178]
71030d6c70  ldr x8,[sp, #0x40]
71030d6c74  str x8,[sp, #0x170]
71030d6c78  ldr x8,[sp, #0x78]
71030d6c7c  str x8,[sp, #0x1a8]
71030d6c80  ldr x8,[sp, #0x70]
71030d6c84  str x8,[sp, #0x1a0]
71030d6c88  ldr x8,[sp, #0x68]
71030d6c8c  str x8,[sp, #0x198]
71030d6c90  ldr x8,[sp, #0x60]
71030d6c94  str x8,[sp, #0x190]
71030d6c98  ldr x8,[x20, #0x8]
71030d6c9c  ldrb w9,[x8, #0xa8]
71030d6ca0  cbz w9,0x71030d6cb8
71030d6ca4  ldr x0,[x8, #0x48]
71030d6ca8  ldr x8,[x0]
71030d6cac  ldr x8,[x8, #0x20]
71030d6cb0  add x1,sp,#0x170
71030d6cb4  blr x8
71030d6cb8  mov w8,#0x1
71030d6cbc  strb w8,[x20, #0x20]
71030d6cc0  ldr x20,[x19, #0x888]
71030d6cc4  ldr x8,[x20, #0x48]
71030d6cc8  cbz x8,0x71030d6cf0
71030d6ccc  ldrb w9,[x8, #0xe0]
71030d6cd0  cbz w9,0x71030d6ce0
71030d6cd4  ldr x9,[x8, #0xc8]
71030d6cd8  cbz x9,0x71030d6ce0
71030d6cdc  strh w26,[x9, #0x32]
71030d6ce0  ldr x8,[x8, #0xd8]
71030d6ce4  cbz x8,0x71030d6cf0
71030d6ce8  mov w9,#0x1
71030d6cec  strb w9,[x8, #0x22]
71030d6cf0  ldr x0,[x20, #0x48]
71030d6cf4  fmov s0,wzr
71030d6cf8  mov w1,#0x1
71030d6cfc  bl 0x710260fdd0
71030d6d00  ldr x8,[x20, #0x48]
71030d6d04  cbz x8,0x71030d6d3c
71030d6d08  ldrb w9,[x8, #0xe0]
71030d6d0c  cbz w9,0x71030d6d1c
71030d6d10  ldr x9,[x8, #0xc8]
71030d6d14  cbz x9,0x71030d6d1c
71030d6d18  strh wzr,[x9, #0x30]
71030d6d1c  ldr x9,[x8, #0xd8]
71030d6d20  cbz x9,0x71030d6d28
71030d6d24  strb wzr,[x9, #0x21]
71030d6d28  ldrb w9,[x8, #0xe0]
71030d6d2c  cbz w9,0x71030d6d3c
71030d6d30  ldr x8,[x8, #0xb0]
71030d6d34  mov w9,#0x1
71030d6d38  strb w9,[x8, #0x10]
71030d6d3c  ldr x8,[x19, #0x890]
71030d6d40  ldr x20,[x8, #0x48]
71030d6d44  cbz x20,0x71030d6dcc
71030d6d48  ldr x0,[x20, #0x90]
71030d6d4c  ldr x8,[x0]
71030d6d50  ldr x8,[x8, #0x148]
71030d6d54  add x1,sp,#0x40
71030d6d58  blr x8
71030d6d5c  ldr x20,[x20, #0xd8]
71030d6d60  cbz x20,0x71030d6dcc
71030d6d64  ldr x8,[sp, #0x58]
71030d6d68  str x8,[sp, #0x188]
71030d6d6c  ldr x8,[sp, #0x50]
71030d6d70  str x8,[sp, #0x180]
71030d6d74  ldr x8,[sp, #0x48]
71030d6d78  str x8,[sp, #0x178]
71030d6d7c  ldr x8,[sp, #0x40]
71030d6d80  str x8,[sp, #0x170]
71030d6d84  ldr x8,[sp, #0x78]
71030d6d88  str x8,[sp, #0x1a8]
71030d6d8c  ldr x8,[sp, #0x70]
71030d6d90  str x8,[sp, #0x1a0]
71030d6d94  ldr x8,[sp, #0x68]
71030d6d98  str x8,[sp, #0x198]
71030d6d9c  ldr x8,[sp, #0x60]
71030d6da0  str x8,[sp, #0x190]
71030d6da4  ldr x8,[x20, #0x8]
71030d6da8  ldrb w9,[x8, #0xa8]
71030d6dac  cbz w9,0x71030d6dc4
71030d6db0  ldr x0,[x8, #0x48]
71030d6db4  ldr x8,[x0]
71030d6db8  ldr x8,[x8, #0x20]
71030d6dbc  add x1,sp,#0x170
71030d6dc0  blr x8
71030d6dc4  mov w8,#0x1
71030d6dc8  strb w8,[x20, #0x20]
71030d6dcc  ldr x8,[x19, #0x890]
71030d6dd0  ldr x8,[x8, #0x48]
71030d6dd4  cbz x8,0x71030d6e0c
71030d6dd8  ldrb w9,[x8, #0xe0]
71030d6ddc  cbz w9,0x71030d6dec
71030d6de0  ldr x9,[x8, #0xc8]
71030d6de4  cbz x9,0x71030d6dec
71030d6de8  strh w26,[x9, #0x30]
71030d6dec  ldr x9,[x8, #0xd8]
71030d6df0  cbz x9,0x71030d6dfc
71030d6df4  mov w10,#0x1
71030d6df8  strb w10,[x9, #0x21]
71030d6dfc  ldrb w9,[x8, #0xe0]
71030d6e00  cbz w9,0x71030d6e0c
71030d6e04  ldr x8,[x8, #0xb0]
71030d6e08  strb wzr,[x8, #0x10]
71030d6e0c  ldr x8,[x19, #0x890]
71030d6e10  ldr x8,[x8, #0x48]
71030d6e14  cbz x8,0x71030d6e24
71030d6e18  add x0,x8,#0x108
71030d6e1c  strb wzr,[x8, #0x110]
71030d6e20  bl 0x71025e9d50
71030d6e24  ldr x8,[x19, #0x898]
71030d6e28  cbz x8,0x71030d6e9c
71030d6e2c  ldrb w9,[x8, #0xe0]
71030d6e30  cbz w9,0x71030d6e40
71030d6e34  ldr x9,[x8, #0xc8]
71030d6e38  cbz x9,0x71030d6e40
71030d6e3c  strh wzr,[x9, #0x32]
71030d6e40  ldr x8,[x8, #0xd8]
71030d6e44  cbz x8,0x71030d6e4c
71030d6e48  strb wzr,[x8, #0x22]
71030d6e4c  ldr x8,[x19, #0x898]
71030d6e50  cbz x8,0x71030d6e9c
71030d6e54  ldrb w9,[x8, #0xe0]
71030d6e58  cbz w9,0x71030d6e68
71030d6e5c  ldr x9,[x8, #0xc8]
71030d6e60  cbz x9,0x71030d6e68
71030d6e64  strh w26,[x9, #0x30]
71030d6e68  ldr x9,[x8, #0xd8]
71030d6e6c  cbz x9,0x71030d6e78
71030d6e70  mov w10,#0x1
71030d6e74  strb w10,[x9, #0x21]
71030d6e78  ldrb w9,[x8, #0xe0]
71030d6e7c  cbz w9,0x71030d6e88
71030d6e80  ldr x8,[x8, #0xb0]
71030d6e84  strb wzr,[x8, #0x10]
71030d6e88  ldr x8,[x19, #0x898]
71030d6e8c  cbz x8,0x71030d6e9c
71030d6e90  add x0,x8,#0x108
71030d6e94  strb wzr,[x8, #0x110]
71030d6e98  bl 0x71025e9d50
71030d6e9c  ldr x8,[x19, #0xbb8]
71030d6ea0  ldr x8,[x8, #0x8]
71030d6ea4  mov w9,#0x1
71030d6ea8  str w9,[x8, #0x10]
71030d6eac  ldr x8,[x19, #0xbc0]
71030d6eb0  ldr x8,[x8, #0x8]
71030d6eb4  str w9,[x8, #0x10]
71030d6eb8  b 0x71030d697c
