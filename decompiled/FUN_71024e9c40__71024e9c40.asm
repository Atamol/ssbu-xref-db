// addr:      71024e9c40
// offset:    0x24e9c40
// name:      FUN_71024e9c40
// mangled:   
// size:      3984

71024e9c40  sub sp,sp,#0xe0
71024e9c44  stp x28,x27,[sp, #0x80]
71024e9c48  stp x26,x25,[sp, #0x90]
71024e9c4c  stp x24,x23,[sp, #0xa0]
71024e9c50  stp x22,x21,[sp, #0xb0]
71024e9c54  stp x20,x19,[sp, #0xc0]
71024e9c58  stp x29,x30,[sp, #0xd0]
71024e9c5c  add x29,sp,#0xd0
71024e9c60  mov x19,x0
71024e9c64  ldr x8,[x19, #0xe8]!
71024e9c68  mov x20,x0
71024e9c6c  cbz x8,0x71024e9d00
71024e9c70  mov x0,x19
71024e9c74  bl 0x71035598f0
71024e9c78  ldr x21,[x20, #0xf0]
71024e9c7c  stp xzr,xzr,[x20, #0xe8]
71024e9c80  cbz x21,0x71024e9cfc
71024e9c84  add x8,x21,#0x8
71024e9c88  ldaxr x9,[x8]
71024e9c8c  sub x10,x9,#0x1
71024e9c90  stlxr w11,x10,[x8]
71024e9c94  cbnz w11,0x71024e9c88
71024e9c98  cbnz x9,0x71024e9cb4
71024e9c9c  ldr x8,[x21]
71024e9ca0  ldr x8,[x8, #0x10]
71024e9ca4  mov x0,x21
71024e9ca8  blr x8
71024e9cac  mov x0,x21
71024e9cb0  bl 0x71039c2670
71024e9cb4  ldr x21,[x20, #0xf0]
71024e9cb8  stp xzr,xzr,[x19]
71024e9cbc  cbz x21,0x71024e9d00
71024e9cc0  add x8,x21,#0x8
71024e9cc4  ldaxr x9,[x8]
71024e9cc8  sub x10,x9,#0x1
71024e9ccc  stlxr w11,x10,[x8]
71024e9cd0  cbnz w11,0x71024e9cc4
71024e9cd4  cbnz x9,0x71024e9d00
71024e9cd8  ldr x8,[x21]
71024e9cdc  ldr x8,[x8, #0x10]
71024e9ce0  mov x0,x21
71024e9ce4  blr x8
71024e9ce8  mov x0,x21
71024e9cec  bl 0x71039c2670
71024e9cf0  ldr w8,[x20, #0x10]
71024e9cf4  tbz w8,#0x1f,0x71024e9d08
71024e9cf8  b 0x71024eaa14
71024e9cfc  stp xzr,xzr,[x19]
71024e9d00  ldr w8,[x20, #0x10]
71024e9d04  tbnz w8,#0x1f,0x71024eaa14
71024e9d08  adrp x26,0x710532a000
71024e9d0c  ldr x9,[x26, #0x860]
71024e9d10  ldrb w10,[x20, #0x167]
71024e9d14  ldr x9,[x9]
71024e9d18  cbz w10,0x71024e9d64
71024e9d1c  adrp x10,0x710532a000
71024e9d20  ldr x10,[x10, #0x868]
71024e9d24  ldr x11,[x10]
71024e9d28  ldr x10,[x11, #0x2e8]
71024e9d2c  ldr x11,[x11, #0x2f0]
71024e9d30  cmp x10,x11
71024e9d34  b.eq 0x71024e9d64
71024e9d38  ldr w13,[x9, #0x78]
71024e9d3c  mov w12,wzr
71024e9d40  ldr w14,[x10]
71024e9d44  cmp w14,w13
71024e9d48  b.ne 0x71024e9d58
71024e9d4c  cmp w12,w8
71024e9d50  b.eq 0x71024e9dd0
71024e9d54  add w12,w12,#0x1
71024e9d58  add x10,x10,#0x58
71024e9d5c  cmp x11,x10
71024e9d60  b.ne 0x71024e9d40
71024e9d64  add x8,x9,x8, LSL #0x2
71024e9d68  mov w9,#0xcce0
71024e9d6c  movk w9,#0x3, LSL #16
71024e9d70  ldr w21,[x8, x9, LSL #0x0]
71024e9d74  orr w8,wzr,#0xffffff
71024e9d78  cmp w21,w8
71024e9d7c  str w21,[sp, #0x60]
71024e9d80  b.eq 0x71024e9dfc
71024e9d84  adrp x8,0x7105332000
71024e9d88  ldr x22,[x8, #0xf20]
71024e9d8c  ldr w8,[x22, #0x48]
71024e9d90  cmp w8,w21
71024e9d94  b.ls 0x71024e9dfc
71024e9d98  ldr x23,[x22]
71024e9d9c  mov x0,x23
71024e9da0  bl 0x71039c1a40
71024e9da4  ldr x8,[x22, #0x40]
71024e9da8  mov w9,#0x48
71024e9dac  madd x9,x21,x9,x8
71024e9db0  ldrb w9,[x9, #0x8]
71024e9db4  tbnz w9,#0x0,0x71024e9de8
71024e9db8  mov x0,x23
71024e9dbc  bl 0x71039c1a50
71024e9dc0  mov x0,x22
71024e9dc4  mov w1,w21
71024e9dc8  bl 0x7103540d50
71024e9dcc  b 0x71024e9dfc
71024e9dd0  ldr x10,[x10, #0x20]
71024e9dd4  tst x10,#0xffffffffff
71024e9dd8  b.eq 0x71024e9d64
71024e9ddc  add x8,x9,x8, LSL #0x2
71024e9de0  mov w9,#0xcee0
71024e9de4  b 0x71024e9d6c
71024e9de8  mov w9,#0x48
71024e9dec  madd x0,x21,x9,x8
71024e9df0  bl 0x71035432d0
71024e9df4  mov x0,x23
71024e9df8  bl 0x71039c1a50
71024e9dfc  adrp x2,0x7104328000
71024e9e00  add x2,x2,#0x86f
71024e9e04  add x0,sp,#0x68
71024e9e08  add x1,sp,#0x60
71024e9e0c  bl 0x710353e1d0
71024e9e10  ldr w21,[sp, #0x68]
71024e9e14  orr w22,wzr,#0xffffff
71024e9e18  cmp w21,w22
71024e9e1c  b.eq 0x71024e9e34
71024e9e20  adrp x8,0x7105332000
71024e9e24  ldr x0,[x8, #0xf20]
71024e9e28  mov w1,w21
71024e9e2c  bl 0x7103540b10
71024e9e30  str w22,[sp, #0x68]
71024e9e34  adrp x24,0x7105332000
71024e9e38  ldr x8,[x24, #0xf20]
71024e9e3c  ldr x8,[x8, #0x78]
71024e9e40  cmp w21,w22
71024e9e44  b.eq 0x71024e9e70
71024e9e48  ldr x9,[x8]
71024e9e4c  ldr x10,[x9, #0x40]
71024e9e50  ldr w10,[x10, #0x4]
71024e9e54  cmp w10,w21
71024e9e58  b.ls 0x71024e9e70
71024e9e5c  ldr x9,[x9, #0x60]
71024e9e60  lsl x10,x21,#0x5
71024e9e64  ldr x9,[x9, x10, LSL #0x0]
71024e9e68  and x9,x9,#0xffffffffff
71024e9e6c  b 0x71024e9e74
71024e9e70  mov x9,xzr
71024e9e74  ldr x21,[x8, #0x8]
71024e9e78  str x9,[sp, #0x68]
71024e9e7c  ldr x8,[x21, #0x8]
71024e9e80  ldr x1,[x21, #0x20]
71024e9e84  ldr w2,[x8, #0x8]
71024e9e88  adrp x4,0x7103542000
71024e9e8c  add x4,x4,#0x240
71024e9e90  add x0,sp,#0x68
71024e9e94  mov w3,#0x8
71024e9e98  bl 0x71039c2630
71024e9e9c  orr w8,wzr,#0xffffff
71024e9ea0  cbz x0,0x71024e9ec8
71024e9ea4  ldr x9,[x0]
71024e9ea8  lsr x9,x9,#0x28
71024e9eac  cmp w9,w8
71024e9eb0  b.eq 0x71024e9ec8
71024e9eb4  ldr x8,[x21, #0x8]
71024e9eb8  ldr w8,[x8, #0x4]
71024e9ebc  cmp w8,w9
71024e9ec0  orr w8,wzr,#0xffffff
71024e9ec4  csel w8,w9,w8,hi
71024e9ec8  add x0,sp,#0x68
71024e9ecc  sub x1,x29,#0x58
71024e9ed0  mov w2,#0x4
71024e9ed4  stur w8,[x29, #-0x58]
71024e9ed8  bl 0x71035c2890
71024e9edc  ldp x8,x9,[sp, #0x68]
71024e9ee0  stp xzr,xzr,[sp, #0x68]
71024e9ee4  ldr x21,[x20, #0xf0]
71024e9ee8  stp x8,x9,[x20, #0xe8]
71024e9eec  cbz x21,0x71024e9f20
71024e9ef0  add x8,x21,#0x8
71024e9ef4  ldaxr x9,[x8]
71024e9ef8  sub x10,x9,#0x1
71024e9efc  stlxr w11,x10,[x8]
71024e9f00  cbnz w11,0x71024e9ef4
71024e9f04  cbnz x9,0x71024e9f20
71024e9f08  ldr x8,[x21]
71024e9f0c  ldr x8,[x8, #0x10]
71024e9f10  mov x0,x21
71024e9f14  blr x8
71024e9f18  mov x0,x21
71024e9f1c  bl 0x71039c2670
71024e9f20  ldr x21,[sp, #0x70]
71024e9f24  cbz x21,0x71024e9f58
71024e9f28  add x8,x21,#0x8
71024e9f2c  ldaxr x9,[x8]
71024e9f30  sub x10,x9,#0x1
71024e9f34  stlxr w11,x10,[x8]
71024e9f38  cbnz w11,0x71024e9f2c
71024e9f3c  cbnz x9,0x71024e9f58
71024e9f40  ldr x8,[x21]
71024e9f44  ldr x8,[x8, #0x10]
71024e9f48  mov x0,x21
71024e9f4c  blr x8
71024e9f50  mov x0,x21
71024e9f54  bl 0x71039c2670
71024e9f58  ldr w23,[sp, #0x60]
71024e9f5c  orr w8,wzr,#0xffffff
71024e9f60  cmp w23,w8
71024e9f64  b.eq 0x71024e9fb8
71024e9f68  ldr x21,[x24, #0xf20]
71024e9f6c  ldr w8,[x21, #0x48]
71024e9f70  cmp w8,w23
71024e9f74  b.ls 0x71024e9fb0
71024e9f78  ldr x22,[x21]
71024e9f7c  mov x0,x22
71024e9f80  bl 0x71039c1a40
71024e9f84  ldr x8,[x21, #0x40]
71024e9f88  mov w9,#0x48
71024e9f8c  madd x9,x23,x9,x8
71024e9f90  ldrb w9,[x9, #0x8]
71024e9f94  tbz w9,#0x0,0x71024e9fa8
71024e9f98  mov w9,#0x48
71024e9f9c  madd x1,x23,x9,x8
71024e9fa0  mov x0,x21
71024e9fa4  bl 0x710353f5a0
71024e9fa8  mov x0,x22
71024e9fac  bl 0x71039c1a50
71024e9fb0  orr w8,wzr,#0xffffff
71024e9fb4  str w8,[sp, #0x60]
71024e9fb8  mov x25,x20
71024e9fbc  str xzr,[x25, #0xf8]!
71024e9fc0  ldr x21,[x25, #0x8]
71024e9fc4  str xzr,[x25, #0x8]
71024e9fc8  cbz x21,0x71024e9ffc
71024e9fcc  add x8,x21,#0x8
71024e9fd0  ldaxr x9,[x8]
71024e9fd4  sub x10,x9,#0x1
71024e9fd8  stlxr w11,x10,[x8]
71024e9fdc  cbnz w11,0x71024e9fd0
71024e9fe0  cbnz x9,0x71024e9ffc
71024e9fe4  ldr x8,[x21]
71024e9fe8  ldr x8,[x8, #0x10]
71024e9fec  mov x0,x21
71024e9ff0  blr x8
71024e9ff4  mov x0,x21
71024e9ff8  bl 0x71039c2670
71024e9ffc  ldr x21,[x20, #0x110]
71024ea000  stp xzr,xzr,[x20, #0x108]
71024ea004  cbz x21,0x71024ea038
71024ea008  add x8,x21,#0x8
71024ea00c  ldaxr x9,[x8]
71024ea010  sub x10,x9,#0x1
71024ea014  stlxr w11,x10,[x8]
71024ea018  cbnz w11,0x71024ea00c
71024ea01c  cbnz x9,0x71024ea038
71024ea020  ldr x8,[x21]
71024ea024  ldr x8,[x8, #0x10]
71024ea028  mov x0,x21
71024ea02c  blr x8
71024ea030  mov x0,x21
71024ea034  bl 0x71039c2670
71024ea038  ldr x21,[x20, #0x120]
71024ea03c  stp xzr,xzr,[x20, #0x118]
71024ea040  cbz x21,0x71024ea074
71024ea044  add x8,x21,#0x8
71024ea048  ldaxr x9,[x8]
71024ea04c  sub x10,x9,#0x1
71024ea050  stlxr w11,x10,[x8]
71024ea054  cbnz w11,0x71024ea048
71024ea058  cbnz x9,0x71024ea074
71024ea05c  ldr x8,[x21]
71024ea060  ldr x8,[x8, #0x10]
71024ea064  mov x0,x21
71024ea068  blr x8
71024ea06c  mov x0,x21
71024ea070  bl 0x71039c2670
71024ea074  ldr x21,[x20, #0x130]
71024ea078  stp xzr,xzr,[x20, #0x128]
71024ea07c  cbz x21,0x71024ea0b0
71024ea080  add x8,x21,#0x8
71024ea084  ldaxr x9,[x8]
71024ea088  sub x10,x9,#0x1
71024ea08c  stlxr w11,x10,[x8]
71024ea090  cbnz w11,0x71024ea084
71024ea094  cbnz x9,0x71024ea0b0
71024ea098  ldr x8,[x21]
71024ea09c  ldr x8,[x8, #0x10]
71024ea0a0  mov x0,x21
71024ea0a4  blr x8
71024ea0a8  mov x0,x21
71024ea0ac  bl 0x71039c2670
71024ea0b0  ldr x9,[x26, #0x860]
71024ea0b4  ldr w8,[x20, #0x10]
71024ea0b8  ldrb w10,[x20, #0x167]
71024ea0bc  ldr x9,[x9]
71024ea0c0  cbz w10,0x71024ea10c
71024ea0c4  adrp x10,0x710532a000
71024ea0c8  ldr x10,[x10, #0x868]
71024ea0cc  ldr x11,[x10]
71024ea0d0  ldr x10,[x11, #0x2e8]
71024ea0d4  ldr x11,[x11, #0x2f0]
71024ea0d8  cmp x10,x11
71024ea0dc  b.eq 0x71024ea10c
71024ea0e0  ldr w13,[x9, #0x78]
71024ea0e4  mov w12,wzr
71024ea0e8  ldr w14,[x10]
71024ea0ec  cmp w14,w13
71024ea0f0  b.ne 0x71024ea100
71024ea0f4  cmp w12,w8
71024ea0f8  b.eq 0x71024ea180
71024ea0fc  add w12,w12,#0x1
71024ea100  add x10,x10,#0x58
71024ea104  cmp x11,x10
71024ea108  b.ne 0x71024ea0e8
71024ea10c  add x8,x9,x8, LSL #0x2
71024ea110  mov w9,#0xcde0
71024ea114  movk w9,#0x3, LSL #16
71024ea118  ldr w21,[x8, x9, LSL #0x0]
71024ea11c  orr w8,wzr,#0xffffff
71024ea120  cmp w21,w8
71024ea124  b.eq 0x71024ea9f0
71024ea128  ldr x22,[x24, #0xf20]
71024ea12c  ldr w8,[x22, #0x48]
71024ea130  cmp w8,w21
71024ea134  b.ls 0x71024ea170
71024ea138  ldr x23,[x22]
71024ea13c  mov x0,x23
71024ea140  bl 0x71039c1a40
71024ea144  ldr x8,[x22, #0x40]
71024ea148  mov w9,#0x48
71024ea14c  madd x9,x21,x9,x8
71024ea150  ldrb w9,[x9, #0x8]
71024ea154  tbnz w9,#0x0,0x71024ea198
71024ea158  mov x0,x23
71024ea15c  bl 0x71039c1a50
71024ea160  mov x0,x22
71024ea164  mov w1,w21
71024ea168  bl 0x7103540d50
71024ea16c  b 0x71024ea1ac
71024ea170  orr w8,wzr,#0xffffff
71024ea174  cmp w21,w8
71024ea178  cset w27,eq
71024ea17c  b 0x71024ea1bc
71024ea180  ldr x10,[x10, #0x28]
71024ea184  tst x10,#0xffffffffff
71024ea188  b.eq 0x71024ea10c
71024ea18c  add x8,x9,x8, LSL #0x2
71024ea190  mov w9,#0xcfe0
71024ea194  b 0x71024ea114
71024ea198  mov w9,#0x48
71024ea19c  madd x0,x21,x9,x8
71024ea1a0  bl 0x71035432d0
71024ea1a4  mov x0,x23
71024ea1a8  bl 0x71039c1a50
71024ea1ac  orr w8,wzr,#0xffffff
71024ea1b0  cmp w21,w8
71024ea1b4  cset w27,eq
71024ea1b8  b.eq 0x71024ea9f0
71024ea1bc  ldr x22,[x24, #0xf20]
71024ea1c0  ldr w8,[x22, #0x48]
71024ea1c4  cmp w8,w21
71024ea1c8  b.ls 0x71024ea210
71024ea1cc  ldr x23,[x22]
71024ea1d0  mov x0,x23
71024ea1d4  bl 0x71039c1a40
71024ea1d8  ldr x8,[x22, #0x40]
71024ea1dc  mov w9,#0x48
71024ea1e0  umaddl x22,w21,w9,x8
71024ea1e4  ldrb w28,[x22, #0x8]
71024ea1e8  mov x0,x23
71024ea1ec  bl 0x71039c1a50
71024ea1f0  tbz w28,#0x0,0x71024ea210
71024ea1f4  cbz x22,0x71024ea210
71024ea1f8  ldr w8,[x22]
71024ea1fc  orr w9,wzr,#0xffffff
71024ea200  cmp w8,w9
71024ea204  b.ne 0x71024ea21c
71024ea208  mov w0,#0xffffffff
71024ea20c  b 0x71024ea224
71024ea210  tbnz w27,#0x0,0x71024ea9f0
71024ea214  mov w28,wzr
71024ea218  b 0x71024ea230
71024ea21c  mov x0,x22
71024ea220  bl 0x7103543080
71024ea224  cmp w0,#0x3
71024ea228  cset w28,eq
71024ea22c  tbnz w27,#0x0,0x71024ea284
71024ea230  ldr x23,[x24, #0xf20]
71024ea234  ldr w8,[x23, #0x48]
71024ea238  cmp w8,w21
71024ea23c  b.ls 0x71024ea284
71024ea240  ldr x22,[x23]
71024ea244  mov x0,x22
71024ea248  bl 0x71039c1a40
71024ea24c  ldr x8,[x23, #0x40]
71024ea250  mov w9,#0x48
71024ea254  umaddl x9,w21,w9,x8
71024ea258  ldrb w9,[x9, #0x8]
71024ea25c  tbz w9,#0x0,0x71024ea274
71024ea260  mov w9,w21
71024ea264  mov w10,#0x48
71024ea268  madd x1,x9,x10,x8
71024ea26c  mov x0,x23
71024ea270  bl 0x710353f5a0
71024ea274  mov x0,x22
71024ea278  bl 0x71039c1a50
71024ea27c  tbnz w28,#0x0,0x71024ea288
71024ea280  b 0x71024ea9f0
71024ea284  cbz w28,0x71024ea9f0
71024ea288  mov w0,#0x10
71024ea28c  orr w1,wzr,#0x30
71024ea290  bl 0x710392e290
71024ea294  mov x21,x0
71024ea298  cbnz x0,0x71024ea2e4
71024ea29c  adrp x8,0x7105332000
71024ea2a0  ldr x0,[x8, #0xf00]
71024ea2a4  cbz x0,0x71024ea2e0
71024ea2a8  orr w8,wzr,#0x30
71024ea2ac  stur wzr,[x29, #-0x58]
71024ea2b0  sub x1,x29,#0x58
71024ea2b4  str x8,[sp, #0x68]
71024ea2b8  ldr x8,[x0]
71024ea2bc  ldr x8,[x8, #0x30]
71024ea2c0  add x2,sp,#0x68
71024ea2c4  blr x8
71024ea2c8  tbz w0,#0x0,0x71024ea2e0
71024ea2cc  mov w0,#0x10
71024ea2d0  orr w1,wzr,#0x30
71024ea2d4  bl 0x710392e290
71024ea2d8  mov x21,x0
71024ea2dc  cbnz x0,0x71024ea2e4
71024ea2e0  mov x21,xzr
71024ea2e4  adrp x8,0x7105239000
71024ea2e8  add x8,x8,#0x200
71024ea2ec  mov w0,#0x10
71024ea2f0  str x8,[x21]
71024ea2f4  orr w8,wzr,#0x3f800000
71024ea2f8  mov w1,#0x20
71024ea2fc  stp xzr,xzr,[x21, #0x18]
71024ea300  str w8,[x21, #0x28]
71024ea304  stp xzr,xzr,[x21, #0x8]
71024ea308  bl 0x710392e290
71024ea30c  cbnz x0,0x71024ea354
71024ea310  adrp x8,0x7105332000
71024ea314  ldr x0,[x8, #0xf00]
71024ea318  cbz x0,0x71024ea350
71024ea31c  mov w8,#0x20
71024ea320  stur wzr,[x29, #-0x58]
71024ea324  sub x1,x29,#0x58
71024ea328  str x8,[sp, #0x68]
71024ea32c  ldr x8,[x0]
71024ea330  ldr x8,[x8, #0x30]
71024ea334  add x2,sp,#0x68
71024ea338  blr x8
71024ea33c  tbz w0,#0x0,0x71024ea350
71024ea340  mov w0,#0x10
71024ea344  mov w1,#0x20
71024ea348  bl 0x710392e290
71024ea34c  cbnz x0,0x71024ea354
71024ea350  mov x0,xzr
71024ea354  adrp x8,0x7105239000
71024ea358  add x8,x8,#0x240
71024ea35c  stp x8,xzr,[x0]
71024ea360  stp xzr,x21,[x0, #0x10]
71024ea364  str x21,[x20, #0xf8]
71024ea368  ldr x21,[x20, #0x100]
71024ea36c  str x0,[x20, #0x100]
71024ea370  cbz x21,0x71024ea3a4
71024ea374  add x8,x21,#0x8
71024ea378  ldaxr x9,[x8]
71024ea37c  sub x10,x9,#0x1
71024ea380  stlxr w11,x10,[x8]
71024ea384  cbnz w11,0x71024ea378
71024ea388  cbnz x9,0x71024ea3a4
71024ea38c  ldr x8,[x21]
71024ea390  ldr x8,[x8, #0x10]
71024ea394  mov x0,x21
71024ea398  blr x8
71024ea39c  mov x0,x21
71024ea3a0  bl 0x71039c2670
71024ea3a4  mov w1,#0xc8
71024ea3a8  mov w0,#0x10
71024ea3ac  bl 0x710392e290
71024ea3b0  mov x22,x0
71024ea3b4  cbnz x0,0x71024ea400
71024ea3b8  adrp x8,0x7105332000
71024ea3bc  ldr x0,[x8, #0xf00]
71024ea3c0  cbz x0,0x71024ea3fc
71024ea3c4  mov w8,#0xc8
71024ea3c8  stur wzr,[x29, #-0x58]
71024ea3cc  sub x1,x29,#0x58
71024ea3d0  str x8,[sp, #0x68]
71024ea3d4  ldr x8,[x0]
71024ea3d8  ldr x8,[x8, #0x30]
71024ea3dc  add x2,sp,#0x68
71024ea3e0  blr x8
71024ea3e4  tbz w0,#0x0,0x71024ea3fc
71024ea3e8  mov w1,#0xc8
71024ea3ec  mov w0,#0x10
71024ea3f0  bl 0x710392e290
71024ea3f4  mov x22,x0
71024ea3f8  cbnz x0,0x71024ea400
71024ea3fc  mov x22,xzr
71024ea400  add x21,x22,#0x18
71024ea404  adrp x8,0x7104f76000
71024ea408  add x8,x8,#0x0
71024ea40c  mov x0,x21
71024ea410  stp xzr,xzr,[x22, #0x8]
71024ea414  str x8,[x22]
71024ea418  bl 0x710367adf0
71024ea41c  str x21,[x20, #0x108]
71024ea420  ldr x21,[x20, #0x110]
71024ea424  str x22,[x20, #0x110]
71024ea428  cbz x21,0x71024ea45c
71024ea42c  add x8,x21,#0x8
71024ea430  ldaxr x9,[x8]
71024ea434  sub x10,x9,#0x1
71024ea438  stlxr w11,x10,[x8]
71024ea43c  cbnz w11,0x71024ea430
71024ea440  cbnz x9,0x71024ea45c
71024ea444  ldr x8,[x21]
71024ea448  ldr x8,[x8, #0x10]
71024ea44c  mov x0,x21
71024ea450  blr x8
71024ea454  mov x0,x21
71024ea458  bl 0x71039c2670
71024ea45c  mov w1,#0xa8
71024ea460  mov w0,#0x10
71024ea464  bl 0x710392e290
71024ea468  mov x22,x0
71024ea46c  cbnz x0,0x71024ea4b8
71024ea470  adrp x8,0x7105332000
71024ea474  ldr x0,[x8, #0xf00]
71024ea478  cbz x0,0x71024ea4b4
71024ea47c  mov w8,#0xa8
71024ea480  stur wzr,[x29, #-0x58]
71024ea484  sub x1,x29,#0x58
71024ea488  str x8,[sp, #0x68]
71024ea48c  ldr x8,[x0]
71024ea490  ldr x8,[x8, #0x30]
71024ea494  add x2,sp,#0x68
71024ea498  blr x8
71024ea49c  tbz w0,#0x0,0x71024ea4b4
71024ea4a0  mov w1,#0xa8
71024ea4a4  mov w0,#0x10
71024ea4a8  bl 0x710392e290
71024ea4ac  mov x22,x0
71024ea4b0  cbnz x0,0x71024ea4b8
71024ea4b4  mov x22,xzr
71024ea4b8  add x21,x22,#0x18
71024ea4bc  adrp x8,0x71050c0000
71024ea4c0  add x8,x8,#0x538
71024ea4c4  mov x0,x21
71024ea4c8  stp xzr,xzr,[x22, #0x8]
71024ea4cc  str x8,[x22]
71024ea4d0  bl 0x7103680c00
71024ea4d4  str x21,[x20, #0x118]
71024ea4d8  ldr x21,[x20, #0x120]
71024ea4dc  str x22,[x20, #0x120]
71024ea4e0  cbz x21,0x71024ea514
71024ea4e4  add x8,x21,#0x8
71024ea4e8  ldaxr x9,[x8]
71024ea4ec  sub x10,x9,#0x1
71024ea4f0  stlxr w11,x10,[x8]
71024ea4f4  cbnz w11,0x71024ea4e8
71024ea4f8  cbnz x9,0x71024ea514
71024ea4fc  ldr x8,[x21]
71024ea500  ldr x8,[x8, #0x10]
71024ea504  mov x0,x21
71024ea508  blr x8
71024ea50c  mov x0,x21
71024ea510  bl 0x71039c2670
71024ea514  mov w1,#0xa8
71024ea518  mov w0,#0x10
71024ea51c  bl 0x710392e290
71024ea520  mov x22,x0
71024ea524  cbnz x0,0x71024ea570
71024ea528  adrp x8,0x7105332000
71024ea52c  ldr x0,[x8, #0xf00]
71024ea530  cbz x0,0x71024ea56c
71024ea534  mov w8,#0xa8
71024ea538  stur wzr,[x29, #-0x58]
71024ea53c  sub x1,x29,#0x58
71024ea540  str x8,[sp, #0x68]
71024ea544  ldr x8,[x0]
71024ea548  ldr x8,[x8, #0x30]
71024ea54c  add x2,sp,#0x68
71024ea550  blr x8
71024ea554  tbz w0,#0x0,0x71024ea56c
71024ea558  mov w1,#0xa8
71024ea55c  mov w0,#0x10
71024ea560  bl 0x710392e290
71024ea564  mov x22,x0
71024ea568  cbnz x0,0x71024ea570
71024ea56c  mov x22,xzr
71024ea570  add x21,x22,#0x18
71024ea574  adrp x8,0x71050c0000
71024ea578  add x8,x8,#0x570
71024ea57c  mov x0,x21
71024ea580  stp xzr,xzr,[x22, #0x8]
71024ea584  str x8,[x22]
71024ea588  bl 0x710367c690
71024ea58c  str x21,[x20, #0x128]
71024ea590  ldr x21,[x20, #0x130]
71024ea594  str x22,[x20, #0x130]
71024ea598  cbz x21,0x71024ea5cc
71024ea59c  add x8,x21,#0x8
71024ea5a0  ldaxr x9,[x8]
71024ea5a4  sub x10,x9,#0x1
71024ea5a8  stlxr w11,x10,[x8]
71024ea5ac  cbnz w11,0x71024ea5a0
71024ea5b0  cbnz x9,0x71024ea5cc
71024ea5b4  ldr x8,[x21]
71024ea5b8  ldr x8,[x8, #0x10]
71024ea5bc  mov x0,x21
71024ea5c0  blr x8
71024ea5c4  mov x0,x21
71024ea5c8  bl 0x71039c2670
71024ea5cc  ldr x8,[x20, #0xe8]
71024ea5d0  str x8,[sp, #0x50]
71024ea5d4  ldr x8,[x20, #0xf0]
71024ea5d8  str x8,[sp, #0x58]
71024ea5dc  cbz x8,0x71024ea5f4
71024ea5e0  add x8,x8,#0x8
71024ea5e4  ldxr x9,[x8]
71024ea5e8  add x9,x9,#0x1
71024ea5ec  stxr w10,x9,[x8]
71024ea5f0  cbnz w10,0x71024ea5e4
71024ea5f4  ldr x9,[x26, #0x860]
71024ea5f8  ldr w8,[x20, #0x10]
71024ea5fc  ldrb w10,[x20, #0x167]
71024ea600  ldr x9,[x9]
71024ea604  cbz w10,0x71024ea650
71024ea608  adrp x10,0x710532a000
71024ea60c  ldr x10,[x10, #0x868]
71024ea610  ldr x11,[x10]
71024ea614  ldr x10,[x11, #0x2e8]
71024ea618  ldr x11,[x11, #0x2f0]
71024ea61c  cmp x10,x11
71024ea620  b.eq 0x71024ea650
71024ea624  ldr w13,[x9, #0x78]
71024ea628  mov w12,wzr
71024ea62c  ldr w14,[x10]
71024ea630  cmp w14,w13
71024ea634  b.ne 0x71024ea644
71024ea638  cmp w12,w8
71024ea63c  b.eq 0x71024ea6b8
71024ea640  add w12,w12,#0x1
71024ea644  add x10,x10,#0x58
71024ea648  cmp x11,x10
71024ea64c  b.ne 0x71024ea62c
71024ea650  add x8,x9,x8, LSL #0x2
71024ea654  mov w9,#0xcde0
71024ea658  movk w9,#0x3, LSL #16
71024ea65c  ldr w21,[x8, x9, LSL #0x0]
71024ea660  orr w8,wzr,#0xffffff
71024ea664  cmp w21,w8
71024ea668  str w21,[sp, #0x48]
71024ea66c  b.eq 0x71024ea6e4
71024ea670  ldr x22,[x24, #0xf20]
71024ea674  ldr w8,[x22, #0x48]
71024ea678  cmp w8,w21
71024ea67c  b.ls 0x71024ea6e4
71024ea680  ldr x23,[x22]
71024ea684  mov x0,x23
71024ea688  bl 0x71039c1a40
71024ea68c  ldr x8,[x22, #0x40]
71024ea690  mov w9,#0x48
71024ea694  madd x9,x21,x9,x8
71024ea698  ldrb w9,[x9, #0x8]
71024ea69c  tbnz w9,#0x0,0x71024ea6d0
71024ea6a0  mov x0,x23
71024ea6a4  bl 0x71039c1a50
71024ea6a8  mov x0,x22
71024ea6ac  mov w1,w21
71024ea6b0  bl 0x7103540d50
71024ea6b4  b 0x71024ea6e4
71024ea6b8  ldr x10,[x10, #0x28]
71024ea6bc  tst x10,#0xffffffffff
71024ea6c0  b.eq 0x71024ea650
71024ea6c4  add x8,x9,x8, LSL #0x2
71024ea6c8  mov w9,#0xcfe0
71024ea6cc  b 0x71024ea658
71024ea6d0  mov w9,#0x48
71024ea6d4  madd x0,x21,x9,x8
71024ea6d8  bl 0x71035432d0
71024ea6dc  mov x0,x23
71024ea6e0  bl 0x71039c1a50
71024ea6e4  ldr x8,[x20, #0xf8]
71024ea6e8  str x8,[sp, #0x38]
71024ea6ec  ldr x8,[x20, #0x100]
71024ea6f0  str x8,[sp, #0x40]
71024ea6f4  cbz x8,0x71024ea70c
71024ea6f8  add x8,x8,#0x8
71024ea6fc  ldxr x9,[x8]
71024ea700  add x9,x9,#0x1
71024ea704  stxr w10,x9,[x8]
71024ea708  cbnz w10,0x71024ea6fc
71024ea70c  ldr x8,[x20, #0x108]
71024ea710  str x8,[sp, #0x28]
71024ea714  ldr x8,[x20, #0x110]
71024ea718  str x8,[sp, #0x30]
71024ea71c  cbz x8,0x71024ea734
71024ea720  add x8,x8,#0x8
71024ea724  ldxr x9,[x8]
71024ea728  add x9,x9,#0x1
71024ea72c  stxr w10,x9,[x8]
71024ea730  cbnz w10,0x71024ea724
71024ea734  ldr x8,[x20, #0x118]
71024ea738  str x8,[sp, #0x18]
71024ea73c  ldr x8,[x20, #0x120]
71024ea740  str x8,[sp, #0x20]
71024ea744  cbz x8,0x71024ea75c
71024ea748  add x8,x8,#0x8
71024ea74c  ldxr x9,[x8]
71024ea750  add x9,x9,#0x1
71024ea754  stxr w10,x9,[x8]
71024ea758  cbnz w10,0x71024ea74c
71024ea75c  ldp x8,x21,[x20, #0x128]
71024ea760  stp x8,x21,[sp, #0x8]
71024ea764  cbz x21,0x71024ea7d0
71024ea768  add x22,x21,#0x8
71024ea76c  ldxr x8,[x22]
71024ea770  add x8,x8,#0x1
71024ea774  stxr w9,x8,[x22]
71024ea778  cbnz w9,0x71024ea76c
71024ea77c  add x0,sp,#0x50
71024ea780  add x1,sp,#0x48
71024ea784  add x2,sp,#0x38
71024ea788  add x3,sp,#0x28
71024ea78c  add x4,sp,#0x18
71024ea790  add x5,sp,#0x8
71024ea794  bl 0x71024cc230
71024ea798  ldaxr x8,[x22]
71024ea79c  sub x9,x8,#0x1
71024ea7a0  stlxr w10,x9,[x22]
71024ea7a4  cbnz w10,0x71024ea798
71024ea7a8  cbnz x8,0x71024ea7ec
71024ea7ac  ldr x8,[x21]
71024ea7b0  ldr x8,[x8, #0x10]
71024ea7b4  mov x0,x21
71024ea7b8  blr x8
71024ea7bc  mov x0,x21
71024ea7c0  bl 0x71039c2670
71024ea7c4  ldr x21,[sp, #0x20]
71024ea7c8  cbnz x21,0x71024ea7f4
71024ea7cc  b 0x71024ea824
71024ea7d0  add x0,sp,#0x50
71024ea7d4  add x1,sp,#0x48
71024ea7d8  add x2,sp,#0x38
71024ea7dc  add x3,sp,#0x28
71024ea7e0  add x4,sp,#0x18
71024ea7e4  add x5,sp,#0x8
71024ea7e8  bl 0x71024cc230
71024ea7ec  ldr x21,[sp, #0x20]
71024ea7f0  cbz x21,0x71024ea824
71024ea7f4  add x8,x21,#0x8
71024ea7f8  ldaxr x9,[x8]
71024ea7fc  sub x10,x9,#0x1
71024ea800  stlxr w11,x10,[x8]
71024ea804  cbnz w11,0x71024ea7f8
71024ea808  cbnz x9,0x71024ea824
71024ea80c  ldr x8,[x21]
71024ea810  ldr x8,[x8, #0x10]
71024ea814  mov x0,x21
71024ea818  blr x8
71024ea81c  mov x0,x21
71024ea820  bl 0x71039c2670
71024ea824  ldr x21,[sp, #0x30]
71024ea828  cbz x21,0x71024ea85c
71024ea82c  add x8,x21,#0x8
71024ea830  ldaxr x9,[x8]
71024ea834  sub x10,x9,#0x1
71024ea838  stlxr w11,x10,[x8]
71024ea83c  cbnz w11,0x71024ea830
71024ea840  cbnz x9,0x71024ea85c
71024ea844  ldr x8,[x21]
71024ea848  ldr x8,[x8, #0x10]
71024ea84c  mov x0,x21
71024ea850  blr x8
71024ea854  mov x0,x21
71024ea858  bl 0x71039c2670
71024ea85c  ldr x21,[sp, #0x40]
71024ea860  cbz x21,0x71024ea894
71024ea864  add x8,x21,#0x8
71024ea868  ldaxr x9,[x8]
71024ea86c  sub x10,x9,#0x1
71024ea870  stlxr w11,x10,[x8]
71024ea874  cbnz w11,0x71024ea868
71024ea878  cbnz x9,0x71024ea894
71024ea87c  ldr x8,[x21]
71024ea880  ldr x8,[x8, #0x10]
71024ea884  mov x0,x21
71024ea888  blr x8
71024ea88c  mov x0,x21
71024ea890  bl 0x71039c2670
71024ea894  ldr w23,[sp, #0x48]
71024ea898  orr w8,wzr,#0xffffff
71024ea89c  cmp w23,w8
71024ea8a0  b.eq 0x71024ea8f4
71024ea8a4  ldr x21,[x24, #0xf20]
71024ea8a8  ldr w8,[x21, #0x48]
71024ea8ac  cmp w8,w23
71024ea8b0  b.ls 0x71024ea8ec
71024ea8b4  ldr x22,[x21]
71024ea8b8  mov x0,x22
71024ea8bc  bl 0x71039c1a40
71024ea8c0  ldr x8,[x21, #0x40]
71024ea8c4  mov w9,#0x48
71024ea8c8  madd x9,x23,x9,x8
71024ea8cc  ldrb w9,[x9, #0x8]
71024ea8d0  tbz w9,#0x0,0x71024ea8e4
71024ea8d4  mov w9,#0x48
71024ea8d8  madd x1,x23,x9,x8
71024ea8dc  mov x0,x21
71024ea8e0  bl 0x710353f5a0
71024ea8e4  mov x0,x22
71024ea8e8  bl 0x71039c1a50
71024ea8ec  orr w8,wzr,#0xffffff
71024ea8f0  str w8,[sp, #0x48]
71024ea8f4  ldr x21,[sp, #0x58]
71024ea8f8  cbz x21,0x71024ea92c
71024ea8fc  add x8,x21,#0x8
71024ea900  ldaxr x9,[x8]
71024ea904  sub x10,x9,#0x1
71024ea908  stlxr w11,x10,[x8]
71024ea90c  cbnz w11,0x71024ea900
71024ea910  cbnz x9,0x71024ea92c
71024ea914  ldr x8,[x21]
71024ea918  ldr x8,[x8, #0x10]
71024ea91c  mov x0,x21
71024ea920  blr x8
71024ea924  mov x0,x21
71024ea928  bl 0x71039c2670
71024ea92c  ldr x0,[x25]
71024ea930  ldr x8,[x0]
71024ea934  ldr x8,[x8, #0x28]
71024ea938  add x22,x20,#0x108
71024ea93c  blr x8
71024ea940  tbz w0,#0x0,0x71024ea9c4
71024ea944  ldr x21,[x20, #0x100]
71024ea948  stp xzr,xzr,[x20, #0xf8]
71024ea94c  cbz x21,0x71024ea9c0
71024ea950  add x8,x21,#0x8
71024ea954  ldaxr x9,[x8]
71024ea958  sub x10,x9,#0x1
71024ea95c  stlxr w11,x10,[x8]
71024ea960  cbnz w11,0x71024ea954
71024ea964  cbnz x9,0x71024ea980
71024ea968  ldr x8,[x21]
71024ea96c  ldr x8,[x8, #0x10]
71024ea970  mov x0,x21
71024ea974  blr x8
71024ea978  mov x0,x21
71024ea97c  bl 0x71039c2670
71024ea980  ldr x21,[x20, #0x100]
71024ea984  stp xzr,xzr,[x25]
71024ea988  cbz x21,0x71024ea9c4
71024ea98c  add x8,x21,#0x8
71024ea990  ldaxr x9,[x8]
71024ea994  sub x10,x9,#0x1
71024ea998  stlxr w11,x10,[x8]
71024ea99c  cbnz w11,0x71024ea990
71024ea9a0  cbnz x9,0x71024ea9c4
71024ea9a4  ldr x8,[x21]
71024ea9a8  ldr x8,[x8, #0x10]
71024ea9ac  mov x0,x21
71024ea9b0  blr x8
71024ea9b4  mov x0,x21
71024ea9b8  bl 0x71039c2670
71024ea9bc  b 0x71024ea9c4
71024ea9c0  stp xzr,xzr,[x25]
71024ea9c4  ldr x8,[x22]
71024ea9c8  ldrb w8,[x8, #0xa8]
71024ea9cc  add x23,x20,#0x118
71024ea9d0  cbz w8,0x71024eaa34
71024ea9d4  ldr x8,[x23]
71024ea9d8  ldrb w8,[x8, #0x88]
71024ea9dc  add x22,x20,#0x128
71024ea9e0  cbz w8,0x71024eaab0
71024ea9e4  ldr x8,[x22]
71024ea9e8  ldrb w8,[x8, #0x88]
71024ea9ec  cbz w8,0x71024eab2c
71024ea9f0  ldrb w8,[x20, #0x164]
71024ea9f4  cbz w8,0x71024eaa14
71024ea9f8  mov x0,x19
71024ea9fc  bl 0x71035597d0
71024eaa00  ldr x0,[x19]
71024eaa04  ldr x8,[x0]
71024eaa08  ldr x8,[x8, #0xa8]
71024eaa0c  mov w1,#0x1
71024eaa10  blr x8
71024eaa14  ldp x29,x30,[sp, #0xd0]
71024eaa18  ldp x20,x19,[sp, #0xc0]
71024eaa1c  ldp x22,x21,[sp, #0xb0]
71024eaa20  ldp x24,x23,[sp, #0xa0]
71024eaa24  ldp x26,x25,[sp, #0x90]
71024eaa28  ldp x28,x27,[sp, #0x80]
71024eaa2c  add sp,sp,#0xe0
71024eaa30  ret
71024eaa34  ldr x21,[x20, #0x110]
71024eaa38  stp xzr,xzr,[x20, #0x108]
71024eaa3c  cbz x21,0x71024eabb0
71024eaa40  add x8,x21,#0x8
71024eaa44  ldaxr x9,[x8]
71024eaa48  sub x10,x9,#0x1
71024eaa4c  stlxr w11,x10,[x8]
71024eaa50  cbnz w11,0x71024eaa44
71024eaa54  cbnz x9,0x71024eaa70
71024eaa58  ldr x8,[x21]
71024eaa5c  ldr x8,[x8, #0x10]
71024eaa60  mov x0,x21
71024eaa64  blr x8
71024eaa68  mov x0,x21
71024eaa6c  bl 0x71039c2670
71024eaa70  ldr x21,[x20, #0x110]
71024eaa74  stp xzr,xzr,[x22]
71024eaa78  cbz x21,0x71024ea9d4
71024eaa7c  add x8,x21,#0x8
71024eaa80  ldaxr x9,[x8]
71024eaa84  sub x10,x9,#0x1
71024eaa88  stlxr w11,x10,[x8]
71024eaa8c  cbnz w11,0x71024eaa80
71024eaa90  cbnz x9,0x71024ea9d4
71024eaa94  ldr x8,[x21]
71024eaa98  ldr x8,[x8, #0x10]
71024eaa9c  mov x0,x21
71024eaaa0  blr x8
71024eaaa4  mov x0,x21
71024eaaa8  bl 0x71039c2670
71024eaaac  b 0x71024ea9d4
71024eaab0  ldr x21,[x20, #0x120]
71024eaab4  stp xzr,xzr,[x20, #0x118]
71024eaab8  cbz x21,0x71024eabb8
71024eaabc  add x8,x21,#0x8
71024eaac0  ldaxr x9,[x8]
71024eaac4  sub x10,x9,#0x1
71024eaac8  stlxr w11,x10,[x8]
71024eaacc  cbnz w11,0x71024eaac0
71024eaad0  cbnz x9,0x71024eaaec
71024eaad4  ldr x8,[x21]
71024eaad8  ldr x8,[x8, #0x10]
71024eaadc  mov x0,x21
71024eaae0  blr x8
71024eaae4  mov x0,x21
71024eaae8  bl 0x71039c2670
71024eaaec  ldr x21,[x20, #0x120]
71024eaaf0  stp xzr,xzr,[x23]
71024eaaf4  cbz x21,0x71024ea9e4
71024eaaf8  add x8,x21,#0x8
71024eaafc  ldaxr x9,[x8]
71024eab00  sub x10,x9,#0x1
71024eab04  stlxr w11,x10,[x8]
71024eab08  cbnz w11,0x71024eaafc
71024eab0c  cbnz x9,0x71024ea9e4
71024eab10  ldr x8,[x21]
71024eab14  ldr x8,[x8, #0x10]
71024eab18  mov x0,x21
71024eab1c  blr x8
71024eab20  mov x0,x21
71024eab24  bl 0x71039c2670
71024eab28  b 0x71024ea9e4
71024eab2c  ldr x21,[x20, #0x130]
71024eab30  stp xzr,xzr,[x20, #0x128]
71024eab34  cbz x21,0x71024eabc0
71024eab38  add x8,x21,#0x8
71024eab3c  ldaxr x9,[x8]
71024eab40  sub x10,x9,#0x1
71024eab44  stlxr w11,x10,[x8]
71024eab48  cbnz w11,0x71024eab3c
71024eab4c  cbnz x9,0x71024eab68
71024eab50  ldr x8,[x21]
71024eab54  ldr x8,[x8, #0x10]
71024eab58  mov x0,x21
71024eab5c  blr x8
71024eab60  mov x0,x21
71024eab64  bl 0x71039c2670
71024eab68  ldr x21,[x20, #0x130]
71024eab6c  stp xzr,xzr,[x22]
71024eab70  cbz x21,0x71024ea9f0
71024eab74  add x8,x21,#0x8
71024eab78  ldaxr x9,[x8]
71024eab7c  sub x10,x9,#0x1
71024eab80  stlxr w11,x10,[x8]
71024eab84  cbnz w11,0x71024eab78
71024eab88  cbnz x9,0x71024ea9f0
71024eab8c  ldr x8,[x21]
71024eab90  ldr x8,[x8, #0x10]
71024eab94  mov x0,x21
71024eab98  blr x8
71024eab9c  mov x0,x21
71024eaba0  bl 0x71039c2670
71024eaba4  ldrb w8,[x20, #0x164]
71024eaba8  cbnz w8,0x71024ea9f8
71024eabac  b 0x71024eaa14
71024eabb0  stp xzr,xzr,[x22]
71024eabb4  b 0x71024ea9d4
71024eabb8  stp xzr,xzr,[x23]
71024eabbc  b 0x71024ea9e4
71024eabc0  stp xzr,xzr,[x22]
71024eabc4  ldrb w8,[x20, #0x164]
71024eabc8  cbnz w8,0x71024ea9f8
71024eabcc  b 0x71024eaa14
