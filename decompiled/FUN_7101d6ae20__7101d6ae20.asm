// addr:      7101d6ae20
// offset:    0x1d6ae20
// name:      FUN_7101d6ae20
// mangled:   
// size:      13948

7101d6ae20  sub sp,sp,#0xf0
7101d6ae24  str d10,[sp, #0x70]
7101d6ae28  stp d9,d8,[sp, #0x80]
7101d6ae2c  stp x28,x27,[sp, #0x90]
7101d6ae30  stp x26,x25,[sp, #0xa0]
7101d6ae34  stp x24,x23,[sp, #0xb0]
7101d6ae38  stp x22,x21,[sp, #0xc0]
7101d6ae3c  stp x20,x19,[sp, #0xd0]
7101d6ae40  stp x29,x30,[sp, #0xe0]
7101d6ae44  add x29,sp,#0xe0
7101d6ae48  ldr w9,[x0, #0x290]
7101d6ae4c  mov x19,x0
7101d6ae50  cmp w9,#0x4
7101d6ae54  b.hi 0x7101d6aeac
7101d6ae58  adrp x10,0x71044fa000
7101d6ae5c  add x10,x10,#0xfb0
7101d6ae60  ldr x8,[x19]
7101d6ae64  ldrsw x9,[x10, x9, LSL #0x2]
7101d6ae68  add x9,x9,x10
7101d6ae6c  br x9
7101d6ae70  ldr x9,[x8, #0x8]
7101d6ae74  orr w10,wzr,#0x30
7101d6ae78  b 0x7101d6ae98
7101d6ae7c  ldr x9,[x8, #0x38]
7101d6ae80  add x8,x8,#0x30
7101d6ae84  mov w10,#0xc8
7101d6ae88  b 0x7101d6ae98
7101d6ae8c  ldr x9,[x8, #0x20]
7101d6ae90  add x8,x8,#0x18
7101d6ae94  mov w10,#0x58
7101d6ae98  ldr x8,[x8]
7101d6ae9c  sub x8,x9,x8
7101d6aea0  sdiv x8,x8,x10
7101d6aea4  cmp w8,#0x0
7101d6aea8  b.gt 0x7101d6aed8
7101d6aeac  ldr x8,[x19, #0x1c0]
7101d6aeb0  ldr x8,[x8]
7101d6aeb4  ldr x8,[x8]
7101d6aeb8  ldr x8,[x8, #0x600]
7101d6aebc  ldrb w9,[x8, #0x4aa]
7101d6aec0  cbz w9,0x7101d6aec8
7101d6aec4  strb wzr,[x8, #0x4aa]
7101d6aec8  ldr x8,[x19, #0x288]
7101d6aecc  ldrb w9,[x8, #0x4aa]
7101d6aed0  cbz w9,0x7101d6aed8
7101d6aed4  strb wzr,[x8, #0x4aa]
7101d6aed8  ldr w8,[x19, #0x290]
7101d6aedc  cmp w8,#0x4
7101d6aee0  b.eq 0x7101d6aeec
7101d6aee4  cmp w8,#0x2
7101d6aee8  b.ne 0x7101d6af60
7101d6aeec  ldr x9,[x19, #0x278]
7101d6aef0  ldr w24,[x9, #0x25c]
7101d6aef4  mov w8,wzr
7101d6aef8  ldr w9,[x19, #0x290]
7101d6aefc  cmp w9,#0x2
7101d6af00  b.cc 0x7101d6af10
7101d6af04  b.eq 0x7101d6aff8
7101d6af08  cmp w9,#0x4
7101d6af0c  b.ne 0x7101d6cad8
7101d6af10  cmp w24,#0x3
7101d6af14  b.hi 0x7101d6b6d8
7101d6af18  mov w9,w24
7101d6af1c  adrp x10,0x71044fa000
7101d6af20  add x10,x10,#0xfd4
7101d6af24  ldrsw x9,[x10, x9, LSL #0x2]
7101d6af28  add x9,x9,x10
7101d6af2c  br x9
7101d6af30  cbz w8,0x7101d6b190
7101d6af34  ldr w8,[x19, #0x2a0]
7101d6af38  cmp w8,#0x1
7101d6af3c  b.ne 0x7101d6b6d8
7101d6af40  ldr w8,[x19, #0x4d0]
7101d6af44  cmp w8,#0x1
7101d6af48  b.lt 0x7101d6b66c
7101d6af4c  add w8,w8,#0x1f4
7101d6af50  mov w9,#0x3bf6
7101d6af54  cmp w8,w9
7101d6af58  csel w8,w8,w9,lt
7101d6af5c  b 0x7101d6b670
7101d6af60  ldrb w8,[x19, #0x4e3]
7101d6af64  mov w23,#0xffffffff
7101d6af68  mov w24,w23
7101d6af6c  cbnz w8,0x7101d6b8e0
7101d6af70  ldr x1,[x19, #0x278]
7101d6af74  ldr w24,[x1, #0x25c]
7101d6af78  add x0,sp,#0x30
7101d6af7c  mov w2,wzr
7101d6af80  bl 0x7103771d60
7101d6af84  ldr x1,[x19, #0x278]
7101d6af88  add x0,sp,#0x20
7101d6af8c  mov w2,#0x2
7101d6af90  bl 0x7103771d60
7101d6af94  ldr x20,[sp, #0x38]
7101d6af98  ldr x0,[x20]
7101d6af9c  cbz x0,0x7101d6b820
7101d6afa0  ldr x8,[x0]
7101d6afa4  ldr x8,[x8, #0x210]
7101d6afa8  blr x8
7101d6afac  tbz w0,#0x0,0x7101d6b820
7101d6afb0  ldr x21,[x20]
7101d6afb4  cbz x21,0x7101d6b820
7101d6afb8  ldr x8,[x21]
7101d6afbc  ldr x8,[x8, #0x208]
7101d6afc0  mov x0,x21
7101d6afc4  mov w1,wzr
7101d6afc8  blr x8
7101d6afcc  ldr x8,[x21]
7101d6afd0  ldr x8,[x8, #0x200]
7101d6afd4  mov x0,x21
7101d6afd8  blr x8
7101d6afdc  tbz w0,#0x0,0x7101d6b804
7101d6afe0  ldr x8,[x21]
7101d6afe4  ldr x8,[x8, #0x210]
7101d6afe8  mov x0,x21
7101d6afec  blr x8
7101d6aff0  eor w8,w0,#0x1
7101d6aff4  b 0x7101d6b808
7101d6aff8  cmp w24,#0x3
7101d6affc  b.hi 0x7101d6b3e4
7101d6b000  mov w8,w24
7101d6b004  adrp x9,0x71044fa000
7101d6b008  add x9,x9,#0xfc4
7101d6b00c  ldrsw x8,[x9, x8, LSL #0x2]
7101d6b010  add x8,x8,x9
7101d6b014  br x8
7101d6b018  ldr x9,[x19]
7101d6b01c  ldp x8,x9,[x9, #0x30]
7101d6b020  sub x9,x9,x8
7101d6b024  mov x10,#0x5c29
7101d6b028  movk x10,#0xc28f, LSL #16
7101d6b02c  movk x10,#0x28f5, LSL #32
7101d6b030  movk x10,#0x8f5c, LSL #48
7101d6b034  asr x9,x9,#0x3
7101d6b038  mul x9,x9,x10
7101d6b03c  ldrsw x1,[x19, #0x2ac]
7101d6b040  cmp x9,x1
7101d6b044  b.ls 0x7101d6b3e4
7101d6b048  mov w9,#0xc8
7101d6b04c  madd x8,x1,x9,x8
7101d6b050  ldp x9,x8,[x8, #0xa8]
7101d6b054  sub x8,x8,x9
7101d6b058  lsr x8,x8,#0x4
7101d6b05c  cmp w8,#0x1
7101d6b060  b.lt 0x7101d6b3e4
7101d6b064  ldr w9,[x19, #0x2b0]
7101d6b068  sub w9,w9,#0x1
7101d6b06c  sub w9,w9,w8
7101d6b070  adds w9,w9,w8
7101d6b074  b.mi 0x7101d6b070
7101d6b078  b 0x7101d6b220
7101d6b07c  cbz w8,0x7101d6b184
7101d6b080  ldr w8,[x19, #0x2a0]
7101d6b084  cmp w8,#0x1
7101d6b088  b.ne 0x7101d6b6d8
7101d6b08c  ldr w8,[x19, #0x4d0]
7101d6b090  cmp w8,#0x1
7101d6b094  b.lt 0x7101d6b5f8
7101d6b098  add w8,w8,#0x1f4
7101d6b09c  mov w9,#0x393a
7101d6b0a0  cmp w8,w9
7101d6b0a4  csel w8,w8,w9,lt
7101d6b0a8  b 0x7101d6b5fc
7101d6b0ac  ldr w8,[x19, #0x4cc]
7101d6b0b0  cmp w8,#0x3
7101d6b0b4  b.hi 0x7101d6b6d8
7101d6b0b8  adrp x9,0x71044fa000
7101d6b0bc  add x9,x9,#0xfe4
7101d6b0c0  ldrsw x8,[x9, x8, LSL #0x2]
7101d6b0c4  add x8,x8,x9
7101d6b0c8  br x8
7101d6b0cc  mov w8,#0x1
7101d6b0d0  str w8,[x19, #0x4cc]
7101d6b0d4  adrp x8,0x710532f000
7101d6b0d8  ldr x8,[x8, #0x8d0]
7101d6b0dc  ldr x0,[x8, #0x8]
7101d6b0e0  mov w1,wzr
7101d6b0e4  bl 0x71033152c0
7101d6b0e8  ldr x0,[x19, #0x200]
7101d6b0ec  adrp x1,0x7104443000
7101d6b0f0  add x1,x1,#0xbbb
7101d6b0f4  b 0x7101d6b3a4
7101d6b0f8  ldr w8,[x19, #0x298]
7101d6b0fc  cmp w8,#0x1
7101d6b100  b.eq 0x7101d6b10c
7101d6b104  ldrb w8,[x19, #0x350]
7101d6b108  cbz w8,0x7101d6b12c
7101d6b10c  ldr w1,[x19, #0x2a4]
7101d6b110  ldr w8,[x19, #0x2ac]
7101d6b114  cmp w1,w8
7101d6b118  ldr w2,[x19, #0x2a8]
7101d6b11c  b.ne 0x7101d6b16c
7101d6b120  ldr w8,[x19, #0x2b0]
7101d6b124  cmp w2,w8
7101d6b128  b.ne 0x7101d6b2cc
7101d6b12c  ldr w8,[x19, #0x2a0]
7101d6b130  cmp w8,#0x3
7101d6b134  b.hi 0x7101d6b6d8
7101d6b138  adrp x9,0x71044fa000
7101d6b13c  add x9,x9,#0xff4
7101d6b140  ldrsw x8,[x9, x8, LSL #0x2]
7101d6b144  add x8,x8,x9
7101d6b148  br x8
7101d6b14c  ldr w1,[x19, #0x2ac]
7101d6b150  ldr w2,[x19, #0x2b0]
7101d6b154  mov x0,x19
7101d6b158  mov w3,wzr
7101d6b15c  bl 0x7101d6e4a0
7101d6b160  ldr w8,[x19, #0x29c]
7101d6b164  cbnz w8,0x7101d6b6d8
7101d6b168  b 0x7101d6b6d0
7101d6b16c  mov x0,x19
7101d6b170  mov w3,wzr
7101d6b174  bl 0x7101d6e4a0
7101d6b178  mov x0,x19
7101d6b17c  bl 0x7101d70b60
7101d6b180  b 0x7101d6b6d0
7101d6b184  mov x0,x19
7101d6b188  bl 0x7101d70230
7101d6b18c  b 0x7101d6b6d0
7101d6b190  adrp x8,0x710532f000
7101d6b194  ldr x8,[x8, #0x8d0]
7101d6b198  ldr x0,[x8, #0x8]
7101d6b19c  bl 0x7103315750
7101d6b1a0  cmp w0,#0xbb8
7101d6b1a4  b.cc 0x7101d6b3c8
7101d6b1a8  ldr w1,[x19, #0x2ac]
7101d6b1ac  ldr w2,[x19, #0x2b0]
7101d6b1b0  mov x0,x19
7101d6b1b4  mov w3,wzr
7101d6b1b8  bl 0x7101d6e4a0
7101d6b1bc  b 0x7101d6b6d8
7101d6b1c0  ldr x9,[x19]
7101d6b1c4  ldp x8,x9,[x9, #0x30]
7101d6b1c8  sub x9,x9,x8
7101d6b1cc  mov x10,#0x5c29
7101d6b1d0  movk x10,#0xc28f, LSL #16
7101d6b1d4  movk x10,#0x28f5, LSL #32
7101d6b1d8  movk x10,#0x8f5c, LSL #48
7101d6b1dc  asr x9,x9,#0x3
7101d6b1e0  mul x9,x9,x10
7101d6b1e4  ldrsw x1,[x19, #0x2ac]
7101d6b1e8  cmp x9,x1
7101d6b1ec  b.ls 0x7101d6b3e4
7101d6b1f0  mov w9,#0xc8
7101d6b1f4  madd x8,x1,x9,x8
7101d6b1f8  ldp x9,x8,[x8, #0xa8]
7101d6b1fc  sub x8,x8,x9
7101d6b200  lsr x8,x8,#0x4
7101d6b204  cmp w8,#0x1
7101d6b208  b.lt 0x7101d6b3e4
7101d6b20c  ldr w9,[x19, #0x2b0]
7101d6b210  add w9,w9,#0x1
7101d6b214  sub w9,w9,w8
7101d6b218  adds w9,w9,w8
7101d6b21c  b.mi 0x7101d6b218
7101d6b220  sdiv w10,w9,w8
7101d6b224  msub w2,w10,w8,w9
7101d6b228  b 0x7101d6b2ac
7101d6b22c  ldr x9,[x19]
7101d6b230  ldp x8,x9,[x9, #0x30]
7101d6b234  sub x9,x9,x8
7101d6b238  mov x10,#0x5c29
7101d6b23c  movk x10,#0xc28f, LSL #16
7101d6b240  movk x10,#0x28f5, LSL #32
7101d6b244  movk x10,#0x8f5c, LSL #48
7101d6b248  asr x9,x9,#0x3
7101d6b24c  mul x9,x9,x10
7101d6b250  ldrsw x1,[x19, #0x2ac]
7101d6b254  cmp x9,x1
7101d6b258  b.ls 0x7101d6b3e4
7101d6b25c  mov w9,#0xc8
7101d6b260  madd x8,x1,x9,x8
7101d6b264  ldp x9,x8,[x8, #0xa8]
7101d6b268  sub x8,x8,x9
7101d6b26c  lsr x8,x8,#0x4
7101d6b270  cmp w8,#0x1
7101d6b274  b.lt 0x7101d6b3e4
7101d6b278  adrp x9,0x7105239000
7101d6b27c  add x9,x9,#0x1c0
7101d6b280  ldp w10,w11,[x9]
7101d6b284  eor w10,w10,w10, LSL #0xb
7101d6b288  str w11,[x9]
7101d6b28c  ldp w11,w12,[x9, #0x8]
7101d6b290  eor w10,w10,w10, LSR #0x8
7101d6b294  eor w10,w10,w12
7101d6b298  eor w10,w10,w12, LSR #0x13
7101d6b29c  stp w11,w12,[x9, #0x4]
7101d6b2a0  str w10,[x9, #0xc]
7101d6b2a4  udiv w9,w10,w8
7101d6b2a8  msub w2,w9,w8,w10
7101d6b2ac  mov x0,x19
7101d6b2b0  b 0x7101d6b3e0
7101d6b2b4  ldr w8,[x19, #0x298]
7101d6b2b8  cmp w8,#0x1
7101d6b2bc  b.ne 0x7101d6b3d4
7101d6b2c0  ldr w1,[x19, #0x2a4]
7101d6b2c4  ldr w2,[x19, #0x2a8]
7101d6b2c8  b 0x7101d6b3dc
7101d6b2cc  mov x0,x19
7101d6b2d0  mov w3,wzr
7101d6b2d4  bl 0x7101d6e4a0
7101d6b2d8  b 0x7101d6b6d0
7101d6b2dc  orr w8,wzr,#0x3
7101d6b2e0  str w8,[x19, #0x4cc]
7101d6b2e4  adrp x8,0x710532f000
7101d6b2e8  ldr x8,[x8, #0x8d0]
7101d6b2ec  ldr x0,[x8, #0x8]
7101d6b2f0  mov w1,#0x1
7101d6b2f4  bl 0x71033152c0
7101d6b2f8  ldr x0,[x19, #0x200]
7101d6b2fc  fmov s0,0x3f800000
7101d6b300  adrp x1,0x7104422000
7101d6b304  add x1,x1,#0x67d
7101d6b308  bl 0x7103778300
7101d6b30c  mov x0,x19
7101d6b310  bl 0x7101d6fd00
7101d6b314  ldr x8,[x19, #0x270]
7101d6b318  ldr x8,[x8]
7101d6b31c  cbz x8,0x7101d6b3ac
7101d6b320  ldrb w9,[x8, #0x58]
7101d6b324  and w9,w9,#0xfe
7101d6b328  b 0x7101d6b374
7101d6b32c  str wzr,[x19, #0x4cc]
7101d6b330  adrp x8,0x710532f000
7101d6b334  ldr x8,[x8, #0x8d0]
7101d6b338  ldr x0,[x8, #0x8]
7101d6b33c  mov w1,wzr
7101d6b340  bl 0x71033152c0
7101d6b344  ldr x0,[x19, #0x200]
7101d6b348  fmov s0,0x3f800000
7101d6b34c  adrp x1,0x71042d6000
7101d6b350  add x1,x1,#0x5de
7101d6b354  bl 0x7103778300
7101d6b358  mov x0,x19
7101d6b35c  bl 0x7101d6fd00
7101d6b360  ldr x8,[x19, #0x270]
7101d6b364  ldr x8,[x8]
7101d6b368  cbz x8,0x7101d6b3ac
7101d6b36c  ldrb w9,[x8, #0x58]
7101d6b370  orr w9,w9,#0x1
7101d6b374  strb w9,[x8, #0x58]
7101d6b378  b 0x7101d6b3ac
7101d6b37c  mov w8,#0x2
7101d6b380  str w8,[x19, #0x4cc]
7101d6b384  adrp x8,0x710532f000
7101d6b388  ldr x8,[x8, #0x8d0]
7101d6b38c  ldr x0,[x8, #0x8]
7101d6b390  mov w1,wzr
7101d6b394  bl 0x71033152c0
7101d6b398  ldr x0,[x19, #0x200]
7101d6b39c  adrp x1,0x710435b000
7101d6b3a0  add x1,x1,#0xaf8
7101d6b3a4  fmov s0,0x3f800000
7101d6b3a8  bl 0x7103778300
7101d6b3ac  ldrsw x8,[x19, #0x1a4]
7101d6b3b0  cmp w8,#0x13
7101d6b3b4  b.cs 0x7101d6e3f8
7101d6b3b8  add x8,x19,x8, LSL #0x2
7101d6b3bc  mov w9,#0x1
7101d6b3c0  str w9,[x8, #0x158]
7101d6b3c4  b 0x7101d6b6d8
7101d6b3c8  mov x0,x19
7101d6b3cc  mov w1,wzr
7101d6b3d0  b 0x7101d6b6cc
7101d6b3d4  ldr w1,[x19, #0x2ac]
7101d6b3d8  ldr w2,[x19, #0x2b0]
7101d6b3dc  mov x0,x19
7101d6b3e0  bl 0x7101d709f0
7101d6b3e4  ldr w8,[x19, #0x2a0]
7101d6b3e8  cmp w8,#0x1
7101d6b3ec  b.ne 0x7101d6b470
7101d6b3f0  adrp x8,0x710532f000
7101d6b3f4  ldr x8,[x8, #0x8d8]
7101d6b3f8  ldr x20,[x8, #0x8]
7101d6b3fc  ldr x0,[x20, #0x58]
7101d6b400  cbz x0,0x7101d6b468
7101d6b404  ldr x8,[x0]
7101d6b408  ldr x8,[x8, #0x20]
7101d6b40c  blr x8
7101d6b410  tbnz w0,#0x0,0x7101d6b468
7101d6b414  adrp x8,0x710593b000
7101d6b418  ldr x8,[x8, #0x438]
7101d6b41c  ldr x8,[x8]
7101d6b420  ldrb w8,[x8, #0x1]
7101d6b424  cbz w8,0x7101d6b468
7101d6b428  ldr w8,[x20, #0x64]
7101d6b42c  mov w9,#0x6500
7101d6b430  movk w9,#0x87, LSL #16
7101d6b434  cmp w8,w9
7101d6b438  b.ne 0x7101d6b468
7101d6b43c  adrp x8,0x7106dd5000
7101d6b440  ldrb w8,[x8, #0x3a8]
7101d6b444  cmp w8,#0x1
7101d6b448  b.ne 0x7101d6b468
7101d6b44c  adrp x9,0x7106dd5000
7101d6b450  ldr w8,[x20, #0x60]
7101d6b454  ldr w9,[x9, #0x3ac]
7101d6b458  cmp w8,w9
7101d6b45c  b.ne 0x7101d6b468
7101d6b460  ldrb w8,[x20, #0x68]
7101d6b464  cbz w8,0x7101d6c6ac
7101d6b468  orr w8,wzr,#0x3
7101d6b46c  str w8,[x19, #0x2a0]
7101d6b470  ldrb w8,[x19, #0x490]
7101d6b474  cbz w8,0x7101d6cad0
7101d6b478  ldr w8,[x19, #0x4a0]
7101d6b47c  subs w8,w8,#0x1
7101d6b480  str w8,[x19, #0x4a0]
7101d6b484  b.gt 0x7101d6cad0
7101d6b488  adrp x8,0x710532f000
7101d6b48c  ldr x8,[x8, #0x8d8]
7101d6b490  ldr x20,[x8, #0x8]
7101d6b494  mov x9,x20
7101d6b498  ldr x22,[x9, #0x20]!
7101d6b49c  cbz x22,0x7101d6cac4
7101d6b4a0  ldr x24,[x19, #0x498]
7101d6b4a4  and x8,x24,#-0xffff0000000001
7101d6b4a8  mov x10,x9
7101d6b4ac  mov x11,x22
7101d6b4b0  ldr x12,[x11, #0x20]
7101d6b4b4  and x12,x12,#-0xffff0000000001
7101d6b4b8  cmp x12,x8
7101d6b4bc  cset w12,cc
7101d6b4c0  csel x10,x10,x11,cc
7101d6b4c4  ldr x11,[x11, w12, UXTW #0x3]
7101d6b4c8  cbnz x11,0x7101d6b4b0
7101d6b4cc  cmp x10,x9
7101d6b4d0  b.eq 0x7101d6cac4
7101d6b4d4  ldr x9,[x10, #0x20]
7101d6b4d8  and x9,x9,#-0xffff0000000001
7101d6b4dc  cmp x8,x9
7101d6b4e0  b.cc 0x7101d6cac4
7101d6b4e4  mov x23,x20
7101d6b4e8  ldr x9,[x23, #0x38]!
7101d6b4ec  cbz x9,0x7101d6cac4
7101d6b4f0  mov x10,x23
7101d6b4f4  ldr x11,[x9, #0x20]
7101d6b4f8  and x11,x11,#-0xffff0000000001
7101d6b4fc  cmp x11,x8
7101d6b500  cset w11,cc
7101d6b504  csel x10,x10,x9,cc
7101d6b508  ldr x9,[x9, w11, UXTW #0x3]
7101d6b50c  cbnz x9,0x7101d6b4f4
7101d6b510  cmp x10,x23
7101d6b514  b.eq 0x7101d6cac4
7101d6b518  ldr x9,[x10, #0x20]
7101d6b51c  and x9,x9,#-0xffff0000000001
7101d6b520  cmp x8,x9
7101d6b524  b.cc 0x7101d6cac4
7101d6b528  add x25,x20,#0x20
7101d6b52c  b 0x7101d6b534
7101d6b530  mov x22,x9
7101d6b534  ldr x9,[x22, #0x20]
7101d6b538  and x9,x9,#-0xffff0000000001
7101d6b53c  cmp x8,x9
7101d6b540  b.cs 0x7101d6b554
7101d6b544  ldr x9,[x22]
7101d6b548  mov x25,x22
7101d6b54c  cbnz x9,0x7101d6b530
7101d6b550  b 0x7101d6b568
7101d6b554  cmp x9,x8
7101d6b558  b.cs 0x7101d6b568
7101d6b55c  mov x25,x22
7101d6b560  ldr x9,[x25, #0x8]!
7101d6b564  cbnz x9,0x7101d6b530
7101d6b568  ldr x21,[x25]
7101d6b56c  cbnz x21,0x7101d6c6f4
7101d6b570  mov w0,#0x10
7101d6b574  orr w1,wzr,#0x30
7101d6b578  bl 0x710392e290
7101d6b57c  mov x21,x0
7101d6b580  cbnz x0,0x7101d6b5cc
7101d6b584  adrp x8,0x7105332000
7101d6b588  ldr x0,[x8, #0xf00]
7101d6b58c  cbz x0,0x7101d6b5c8
7101d6b590  orr w8,wzr,#0x30
7101d6b594  str wzr,[sp, #0x20]
7101d6b598  add x1,sp,#0x20
7101d6b59c  str x8,[sp, #0x30]
7101d6b5a0  ldr x8,[x0]
7101d6b5a4  ldr x8,[x8, #0x30]
7101d6b5a8  add x2,sp,#0x30
7101d6b5ac  blr x8
7101d6b5b0  tbz w0,#0x0,0x7101d6b5c8
7101d6b5b4  mov w0,#0x10
7101d6b5b8  orr w1,wzr,#0x30
7101d6b5bc  bl 0x710392e290
7101d6b5c0  mov x21,x0
7101d6b5c4  cbnz x0,0x7101d6b5cc
7101d6b5c8  mov x21,xzr
7101d6b5cc  str x24,[x21, #0x20]
7101d6b5d0  str wzr,[x21, #0x28]
7101d6b5d4  str x22,[x21, #0x10]
7101d6b5d8  stp xzr,xzr,[x21]
7101d6b5dc  str x21,[x25]
7101d6b5e0  ldr x8,[x20, #0x18]
7101d6b5e4  ldr x8,[x8]
7101d6b5e8  cbz x8,0x7101d6c6dc
7101d6b5ec  str x8,[x20, #0x18]
7101d6b5f0  ldr x1,[x25]
7101d6b5f4  b 0x7101d6c6e0
7101d6b5f8  mov w8,#0x122a
7101d6b5fc  str w8,[x19, #0x4d0]
7101d6b600  adrp x20,0x710532f000
7101d6b604  ldr x8,[x20, #0x8d0]
7101d6b608  ldr x0,[x8, #0x8]
7101d6b60c  bl 0x7103315750
7101d6b610  ldr w8,[x19, #0x4d0]
7101d6b614  add w1,w8,w0
7101d6b618  ldr w8,[x19, #0x4cc]
7101d6b61c  cmp w8,#0x3
7101d6b620  b.cc 0x7101d6b630
7101d6b624  b.eq 0x7101d6b7f4
7101d6b628  cmp w8,#0x4
7101d6b62c  b.ne 0x7101d6b6d8
7101d6b630  ldr x9,[x20, #0x8d0]
7101d6b634  ldr x0,[x9, #0x8]
7101d6b638  ldr x9,[x0, #0xc8]
7101d6b63c  and x10,x9,#-0x100000000000000
7101d6b640  mov x11,#-0x2700000000000000
7101d6b644  mov w8,wzr
7101d6b648  cmp x10,x11
7101d6b64c  b.ne 0x7101d6b65c
7101d6b650  and x9,x9,#0xffffffffff
7101d6b654  cbz x9,0x7101d6b65c
7101d6b658  ldr w8,[x0, #0xd8]
7101d6b65c  cmp w8,w1
7101d6b660  csel w1,w8,w1,cc
7101d6b664  bl 0x7103315450
7101d6b668  b 0x7101d6b6d8
7101d6b66c  mov w8,#0x14e6
7101d6b670  str w8,[x19, #0x4d0]
7101d6b674  adrp x20,0x710532f000
7101d6b678  ldr x8,[x20, #0x8d0]
7101d6b67c  ldr x0,[x8, #0x8]
7101d6b680  bl 0x7103315750
7101d6b684  ldr w8,[x19, #0x4d0]
7101d6b688  ldr w9,[x19, #0x4cc]
7101d6b68c  sub w8,w0,w8
7101d6b690  bic w1,w8,w8, ASR #0x1f
7101d6b694  sub w10,w9,#0x1
7101d6b698  cmp w10,#0x2
7101d6b69c  b.cc 0x7101d6b7ec
7101d6b6a0  sub w10,w9,#0x3
7101d6b6a4  cmp w10,#0x2
7101d6b6a8  b.cc 0x7101d6b7f4
7101d6b6ac  cbnz w9,0x7101d6b6d8
7101d6b6b0  cmp w8,#0x0
7101d6b6b4  b.gt 0x7101d6b7f4
7101d6b6b8  ldr w8,[x19, #0x2b0]
7101d6b6bc  cmp w8,#0x0
7101d6b6c0  b.le 0x7101d6b7f4
7101d6b6c4  mov w1,#0xffffeb1a
7101d6b6c8  mov x0,x19
7101d6b6cc  bl 0x7101d70070
7101d6b6d0  mov x0,x19
7101d6b6d4  bl 0x7101d6e660
7101d6b6d8  ldr w8,[x19, #0x2a0]
7101d6b6dc  cmp w8,#0x1
7101d6b6e0  b.ne 0x7101d6c058
7101d6b6e4  adrp x8,0x710532f000
7101d6b6e8  ldr x8,[x8, #0x8d0]
7101d6b6ec  ldr x8,[x8, #0x8]
7101d6b6f0  ldr x8,[x8, #0xc8]
7101d6b6f4  and x9,x8,#-0x100000000000000
7101d6b6f8  mov x10,#-0x2700000000000000
7101d6b6fc  cmp x9,x10
7101d6b700  b.ne 0x7101d6b70c
7101d6b704  and x8,x8,#0xffffffffff
7101d6b708  cbnz x8,0x7101d6c058
7101d6b70c  ldr w8,[x19, #0x4cc]
7101d6b710  cmp w8,#0x4
7101d6b714  b.hi 0x7101d6c058
7101d6b718  adrp x9,0x71044fb000
7101d6b71c  add x9,x9,#0x4
7101d6b720  ldrsw x8,[x9, x8, LSL #0x2]
7101d6b724  add x8,x8,x9
7101d6b728  br x8
7101d6b72c  mov x0,x19
7101d6b730  bl 0x7101d70230
7101d6b734  b 0x7101d6c050
7101d6b738  ldr x0,[x19, #0x1e0]
7101d6b73c  fmov s0,0x3f800000
7101d6b740  orr w8,wzr,#0x3
7101d6b744  adrp x1,0x71043f0000
7101d6b748  add x1,x1,#0xced
7101d6b74c  str w8,[x19, #0x2a0]
7101d6b750  bl 0x7103778300
7101d6b754  mov x0,x19
7101d6b758  bl 0x7101d6fd00
7101d6b75c  ldrb w8,[x19, #0x478]
7101d6b760  cbnz w8,0x7101d6c060
7101d6b764  b 0x7101d6c2a8
7101d6b768  ldr w10,[x19, #0x290]
7101d6b76c  mov w20,wzr
7101d6b770  cmp w10,#0x4
7101d6b774  b.hi 0x7101d6c030
7101d6b778  adrp x11,0x71044fb000
7101d6b77c  add x11,x11,#0x18
7101d6b780  ldrsw x8,[x19, #0x2ac]
7101d6b784  ldrsw x10,[x11, x10, LSL #0x2]
7101d6b788  ldr x9,[x19]
7101d6b78c  add x10,x10,x11
7101d6b790  br x10
7101d6b794  ldp x10,x9,[x9]
7101d6b798  sub x9,x9,x10
7101d6b79c  asr x11,x9,#0x4
7101d6b7a0  orr x9,xzr,#-0x5555555555555556
7101d6b7a4  movk x9,#0xaaab
7101d6b7a8  mul x11,x11,x9
7101d6b7ac  cmp x11,x8
7101d6b7b0  b.ls 0x7101d6c02c
7101d6b7b4  orr w11,wzr,#0x30
7101d6b7b8  madd x8,x8,x11,x10
7101d6b7bc  ldp x10,x8,[x8, #0x8]
7101d6b7c0  sub x8,x8,x10
7101d6b7c4  asr x8,x8,#0x3
7101d6b7c8  b 0x7101d6bfe4
7101d6b7cc  ldr w1,[x19, #0x2ac]
7101d6b7d0  ldr w2,[x19, #0x2b0]
7101d6b7d4  mov x0,x19
7101d6b7d8  mov w3,wzr
7101d6b7dc  bl 0x7101d6e4a0
7101d6b7e0  ldrb w8,[x19, #0x478]
7101d6b7e4  cbnz w8,0x7101d6c060
7101d6b7e8  b 0x7101d6c2a8
7101d6b7ec  cmp w8,#0x1
7101d6b7f0  b.lt 0x7101d6b6c4
7101d6b7f4  ldr x8,[x20, #0x8d0]
7101d6b7f8  ldr x0,[x8, #0x8]
7101d6b7fc  bl 0x7103315450
7101d6b800  b 0x7101d6b6d8
7101d6b804  mov w8,#0x1
7101d6b808  ldr x9,[x21]
7101d6b80c  ldr x9,[x9, #0x388]
7101d6b810  and w1,w8,#0x1
7101d6b814  mov x0,x21
7101d6b818  mov w2,wzr
7101d6b81c  blr x9
7101d6b820  ldr x21,[sp, #0x28]
7101d6b824  ldr x0,[x21]
7101d6b828  cbz x0,0x7101d6b884
7101d6b82c  ldr x8,[x0]
7101d6b830  ldr x8,[x8, #0x210]
7101d6b834  blr x8
7101d6b838  tbz w0,#0x0,0x7101d6b884
7101d6b83c  ldr x22,[x21]
7101d6b840  cbz x22,0x7101d6b8b4
7101d6b844  ldr x8,[x22]
7101d6b848  ldr x8,[x8, #0x208]
7101d6b84c  mov x0,x22
7101d6b850  mov w1,wzr
7101d6b854  blr x8
7101d6b858  ldr x8,[x22]
7101d6b85c  ldr x8,[x8, #0x200]
7101d6b860  mov x0,x22
7101d6b864  blr x8
7101d6b868  tbz w0,#0x0,0x7101d6b898
7101d6b86c  ldr x8,[x22]
7101d6b870  ldr x8,[x8, #0x210]
7101d6b874  mov x0,x22
7101d6b878  blr x8
7101d6b87c  eor w8,w0,#0x1
7101d6b880  b 0x7101d6b89c
7101d6b884  adrp x8,0x710523d000
7101d6b888  add x8,x8,#0x9c8
7101d6b88c  stp x8,xzr,[sp, #0x20]
7101d6b890  cbnz x21,0x7101d6b8c0
7101d6b894  b 0x7101d6b8c8
7101d6b898  mov w8,#0x1
7101d6b89c  ldr x9,[x22]
7101d6b8a0  ldr x9,[x9, #0x388]
7101d6b8a4  and w1,w8,#0x1
7101d6b8a8  mov x0,x22
7101d6b8ac  mov w2,wzr
7101d6b8b0  blr x9
7101d6b8b4  adrp x8,0x710523d000
7101d6b8b8  add x8,x8,#0x9c8
7101d6b8bc  stp x8,xzr,[sp, #0x20]
7101d6b8c0  mov x0,x21
7101d6b8c4  bl 0x710392eb40
7101d6b8c8  adrp x8,0x710523d000
7101d6b8cc  add x8,x8,#0x9c8
7101d6b8d0  stp x8,xzr,[sp, #0x30]
7101d6b8d4  cbz x20,0x7101d6b8e0
7101d6b8d8  mov x0,x20
7101d6b8dc  bl 0x710392eb40
7101d6b8e0  adrp x9,0x710593b000
7101d6b8e4  ldr x9,[x9, #0x988]
7101d6b8e8  ldr x8,[x19, #0x288]
7101d6b8ec  ldr w10,[x8, #0x494]
7101d6b8f0  ldr x9,[x9, #0x8]
7101d6b8f4  ldr w9,[x9]
7101d6b8f8  lsr w9,w9,w10
7101d6b8fc  cmp w9,#0x1
7101d6b900  b.hi 0x7101d6b938
7101d6b904  ldrb w9,[x8, #0x4aa]
7101d6b908  cbz w9,0x7101d6b938
7101d6b90c  ldrb w9,[x8, #0x27c]
7101d6b910  ldrb w10,[x8, #0x1b0]
7101d6b914  ubfx w28,w9,#0x4,#0x1
7101d6b918  ldrb w11,[x8, #0x284]
7101d6b91c  ldrb w8,[x8, #0x1b8]
7101d6b920  ubfx w22,w10,#0x2,#0x1
7101d6b924  ubfx w26,w11,#0x4,#0x1
7101d6b928  ubfx w25,w8,#0x2,#0x1
7101d6b92c  ldrb w8,[x19, #0x4e3]
7101d6b930  cbnz w8,0x7101d6bb70
7101d6b934  b 0x7101d6b950
7101d6b938  mov w25,wzr
7101d6b93c  mov w26,wzr
7101d6b940  mov w22,wzr
7101d6b944  mov w28,wzr
7101d6b948  ldrb w8,[x19, #0x4e3]
7101d6b94c  cbnz w8,0x7101d6bb70
7101d6b950  ldr x1,[x19, #0x278]
7101d6b954  add x0,sp,#0x30
7101d6b958  mov w2,wzr
7101d6b95c  str w25,[sp, #0x18]
7101d6b960  bl 0x7103771d60
7101d6b964  ldr x21,[sp, #0x38]
7101d6b968  ldr x0,[x21]
7101d6b96c  cbz x0,0x7101d6b988
7101d6b970  ldr x8,[x0]
7101d6b974  ldr x8,[x8, #0x250]
7101d6b978  mov w27,w23
7101d6b97c  blr x8
7101d6b980  mov w20,w0
7101d6b984  b 0x7101d6b990
7101d6b988  mov w27,w23
7101d6b98c  mov w20,wzr
7101d6b990  mov w25,w22
7101d6b994  adrp x23,0x710523d000
7101d6b998  add x23,x23,#0x9c8
7101d6b99c  stp x23,xzr,[sp, #0x30]
7101d6b9a0  cbz x21,0x7101d6b9ac
7101d6b9a4  mov x0,x21
7101d6b9a8  bl 0x710392eb40
7101d6b9ac  ldr x1,[x19, #0x278]
7101d6b9b0  add x0,sp,#0x30
7101d6b9b4  mov w2,#0x2
7101d6b9b8  bl 0x7103771d60
7101d6b9bc  ldr x22,[sp, #0x38]
7101d6b9c0  ldr x0,[x22]
7101d6b9c4  cbz x0,0x7101d6baa4
7101d6b9c8  ldr x8,[x0]
7101d6b9cc  ldr x8,[x8, #0x250]
7101d6b9d0  blr x8
7101d6b9d4  mov w21,w0
7101d6b9d8  stp x23,xzr,[sp, #0x30]
7101d6b9dc  cbz x22,0x7101d6b9e8
7101d6b9e0  mov x0,x22
7101d6b9e4  bl 0x710392eb40
7101d6b9e8  and w8,w20,#0x1
7101d6b9ec  and w9,w21,#0x1
7101d6b9f0  orr w10,w28,w20
7101d6b9f4  mov w23,w27
7101d6b9f8  tbz w20,#0x0,0x7101d6ba04
7101d6b9fc  mov w11,wzr
7101d6ba00  b 0x7101d6ba10
7101d6ba04  ldrb w11,[x19, #0x4e0]
7101d6ba08  cmp w11,#0x0
7101d6ba0c  cset w11,ne
7101d6ba10  ldr w27,[sp, #0x18]
7101d6ba14  and w20,w10,#0x1
7101d6ba18  orr w10,w26,w21
7101d6ba1c  orr w22,w25,w11
7101d6ba20  and w26,w10,#0x1
7101d6ba24  tbz w21,#0x0,0x7101d6ba30
7101d6ba28  mov w10,wzr
7101d6ba2c  b 0x7101d6ba3c
7101d6ba30  ldrb w10,[x19, #0x4e1]
7101d6ba34  cmp w10,#0x0
7101d6ba38  cset w10,ne
7101d6ba3c  ldr x0,[x19, #0x278]
7101d6ba40  strb w8,[x19, #0x4e0]
7101d6ba44  strb w9,[x19, #0x4e1]
7101d6ba48  ldr x8,[x0]
7101d6ba4c  ldr x8,[x8, #0x78]
7101d6ba50  orr w21,w27,w10
7101d6ba54  blr x8
7101d6ba58  tbz w0,#0x0,0x7101d6bb50
7101d6ba5c  ldr x8,[x19, #0x278]
7101d6ba60  ldr w8,[x8, #0x254]
7101d6ba64  cmp w8,#0x2
7101d6ba68  b.eq 0x7101d6bab4
7101d6ba6c  cbnz w8,0x7101d6bb50
7101d6ba70  ldr x8,[x19, #0x1c0]
7101d6ba74  ldr x8,[x8]
7101d6ba78  ldr x8,[x8]
7101d6ba7c  ldr x8,[x8, #0x600]
7101d6ba80  ldrb w9,[x8, #0x4aa]
7101d6ba84  cbz w9,0x7101d6bb3c
7101d6ba88  ldrb w9,[x8, #0x274]
7101d6ba8c  ldrb w8,[x8, #0x1a8]
7101d6ba90  and w9,w9,#0x10
7101d6ba94  ubfx w8,w8,#0x2,#0x1
7101d6ba98  orr w20,w20,w9, LSR #0x4
7101d6ba9c  orr w22,w22,w8
7101d6baa0  b 0x7101d6bb50
7101d6baa4  mov w21,wzr
7101d6baa8  stp x23,xzr,[sp, #0x30]
7101d6baac  cbnz x22,0x7101d6b9e0
7101d6bab0  b 0x7101d6b9e8
7101d6bab4  ldr x8,[x19, #0x1c0]
7101d6bab8  ldr x8,[x8]
7101d6babc  ldr x8,[x8]
7101d6bac0  ldr x8,[x8, #0x600]
7101d6bac4  ldrb w9,[x8, #0x4aa]
7101d6bac8  cbz w9,0x7101d6bb48
7101d6bacc  ldrb w9,[x8, #0x274]
7101d6bad0  ldrb w8,[x8, #0x1a8]
7101d6bad4  and w9,w9,#0x10
7101d6bad8  orr w26,w26,w9, LSR #0x4
7101d6badc  ubfx w8,w8,#0x2,#0x1
7101d6bae0  b 0x7101d6bb4c
7101d6bae4  adrp x8,0x710532f000
7101d6bae8  ldr x8,[x8, #0x8d0]
7101d6baec  ldr x0,[x8, #0x8]
7101d6baf0  bl 0x71033147c0
7101d6baf4  ldr x0,[x19, #0x1e0]
7101d6baf8  mov w8,#0x2
7101d6bafc  adrp x1,0x71043f0000
7101d6bb00  add x1,x1,#0xced
7101d6bb04  str w8,[x19, #0x2a0]
7101d6bb08  b 0x7101d6bb30
7101d6bb0c  adrp x8,0x710532f000
7101d6bb10  ldr x8,[x8, #0x8d0]
7101d6bb14  ldr x0,[x8, #0x8]
7101d6bb18  bl 0x71033148b0
7101d6bb1c  ldr x0,[x19, #0x1e0]
7101d6bb20  mov w8,#0x1
7101d6bb24  str w8,[x19, #0x2a0]
7101d6bb28  adrp x1,0x71042a3000
7101d6bb2c  add x1,x1,#0x372
7101d6bb30  fmov s0,0x3f800000
7101d6bb34  bl 0x7103778300
7101d6bb38  b 0x7101d6b6d8
7101d6bb3c  mov w8,wzr
7101d6bb40  orr w22,w22,wzr
7101d6bb44  b 0x7101d6bb50
7101d6bb48  mov w8,wzr
7101d6bb4c  orr w21,w21,w8
7101d6bb50  cmp w21,#0x0
7101d6bb54  cset w25,ne
7101d6bb58  cmp w26,#0x0
7101d6bb5c  cset w26,ne
7101d6bb60  cmp w22,#0x0
7101d6bb64  cset w22,ne
7101d6bb68  cmp w20,#0x0
7101d6bb6c  cset w28,ne
7101d6bb70  ldr w8,[x19, #0xe0]
7101d6bb74  cmp w8,#0x5
7101d6bb78  b.eq 0x7101d6bc7c
7101d6bb7c  ldr x8,[x19, #0x1d0]
7101d6bb80  ldr x0,[x8, #0x8]
7101d6bb84  cbz x0,0x7101d6bbac
7101d6bb88  adrp x1,0x71043be000
7101d6bb8c  add x1,x1,#0x99a
7101d6bb90  bl 0x71037964b0
7101d6bb94  cbz x0,0x7101d6bbac
7101d6bb98  ldr x8,[x0]
7101d6bb9c  ldr x8,[x8, #0x130]
7101d6bba0  blr x8
7101d6bba4  mov w20,w0
7101d6bba8  b 0x7101d6bbb0
7101d6bbac  mov w20,wzr
7101d6bbb0  ldr x8,[x19, #0x1f0]
7101d6bbb4  ldr x0,[x8, #0x8]
7101d6bbb8  cbz x0,0x7101d6bbf4
7101d6bbbc  adrp x1,0x71043be000
7101d6bbc0  add x1,x1,#0x99a
7101d6bbc4  bl 0x71037964b0
7101d6bbc8  cbz x0,0x7101d6bbf4
7101d6bbcc  ldr x8,[x0]
7101d6bbd0  ldr x8,[x8, #0x130]
7101d6bbd4  blr x8
7101d6bbd8  mov w21,w0
7101d6bbdc  cbnz w28,0x7101d6bbfc
7101d6bbe0  tbz w20,#0x0,0x7101d6bc14
7101d6bbe4  ldr x0,[x19, #0x1d0]
7101d6bbe8  adrp x1,0x710435b000
7101d6bbec  add x1,x1,#0xb05
7101d6bbf0  b 0x7101d6bc0c
7101d6bbf4  mov w21,wzr
7101d6bbf8  cbz w28,0x7101d6bbe0
7101d6bbfc  tbnz w20,#0x0,0x7101d6bc14
7101d6bc00  ldr x0,[x19, #0x1d0]
7101d6bc04  adrp x1,0x71043be000
7101d6bc08  add x1,x1,#0x99a
7101d6bc0c  fmov s0,0x3f800000
7101d6bc10  bl 0x7103778300
7101d6bc14  cbz w26,0x7101d6bc2c
7101d6bc18  tbnz w21,#0x0,0x7101d6bc44
7101d6bc1c  ldr x0,[x19, #0x1f0]
7101d6bc20  adrp x1,0x71043be000
7101d6bc24  add x1,x1,#0x99a
7101d6bc28  b 0x7101d6bc3c
7101d6bc2c  tbz w21,#0x0,0x7101d6bc44
7101d6bc30  ldr x0,[x19, #0x1f0]
7101d6bc34  adrp x1,0x710435b000
7101d6bc38  add x1,x1,#0xb05
7101d6bc3c  fmov s0,0x3f800000
7101d6bc40  bl 0x7103778300
7101d6bc44  ldr x0,[x19, #0x278]
7101d6bc48  ldr x8,[x0]
7101d6bc4c  ldr x8,[x8, #0x78]
7101d6bc50  blr x8
7101d6bc54  tbz w0,#0x0,0x7101d6bc7c
7101d6bc58  ldr x8,[x19, #0x278]
7101d6bc5c  ldr w8,[x8, #0x254]
7101d6bc60  add x0,x19,#0x278
7101d6bc64  cbz w28,0x7101d6bcd0
7101d6bc68  cbz w8,0x7101d6bc80
7101d6bc6c  mov w1,wzr
7101d6bc70  mov w2,wzr
7101d6bc74  bl 0x7103771a80
7101d6bc78  b 0x7101d6bc80
7101d6bc7c  cbz w28,0x7101d6bcf0
7101d6bc80  ldr w8,[x19, #0x4d8]
7101d6bc84  add w9,w8,#0x1
7101d6bc88  cmp w8,#0x3a
7101d6bc8c  mov w8,#0x6187
7101d6bc90  movk w8,#0x8618, LSL #16
7101d6bc94  umull x8,w9,w8
7101d6bc98  lsr x8,x8,#0x20
7101d6bc9c  sub w11,w9,w8
7101d6bca0  add w8,w8,w11, LSR #0x1
7101d6bca4  mov w11,#0x15
7101d6bca8  lsr w8,w8,#0x4
7101d6bcac  msub w8,w8,w11,w9
7101d6bcb0  cset w10,gt
7101d6bcb4  cmp w8,#0x0
7101d6bcb8  str w9,[x19, #0x4d8]
7101d6bcbc  cset w9,eq
7101d6bcc0  tst w10,w9
7101d6bcc4  and w8,w10,w9
7101d6bcc8  csel w24,wzr,w24,ne
7101d6bccc  b 0x7101d6c68c
7101d6bcd0  cmp w8,#0x2
7101d6bcd4  cset w8,eq
7101d6bcd8  eor w9,w26,#0x1
7101d6bcdc  orr w8,w9,w8
7101d6bce0  tbnz w8,#0x0,0x7101d6bcf0
7101d6bce4  mov w1,#0x2
7101d6bce8  mov w2,wzr
7101d6bcec  bl 0x7103771a80
7101d6bcf0  cbz w26,0x7101d6bd48
7101d6bcf4  ldr w8,[x19, #0x4d8]
7101d6bcf8  add w9,w8,#0x1
7101d6bcfc  cmp w8,#0x3a
7101d6bd00  mov w8,#0x6187
7101d6bd04  movk w8,#0x8618, LSL #16
7101d6bd08  umull x8,w9,w8
7101d6bd0c  lsr x8,x8,#0x20
7101d6bd10  sub w11,w9,w8
7101d6bd14  add w8,w8,w11, LSR #0x1
7101d6bd18  mov w11,#0x15
7101d6bd1c  lsr w8,w8,#0x4
7101d6bd20  msub w8,w8,w11,w9
7101d6bd24  cset w10,gt
7101d6bd28  cmp w8,#0x0
7101d6bd2c  str w9,[x19, #0x4d8]
7101d6bd30  cset w9,eq
7101d6bd34  and w8,w10,w9
7101d6bd38  tst w10,w9
7101d6bd3c  mov w9,#0x2
7101d6bd40  csel w24,w9,w24,ne
7101d6bd44  b 0x7101d6c68c
7101d6bd48  cbz w22,0x7101d6bd90
7101d6bd4c  ldr w8,[x19, #0x4d8]
7101d6bd50  cmp w8,#0x3b
7101d6bd54  b.gt 0x7101d6bf50
7101d6bd58  ldrb w8,[x19, #0x4e3]
7101d6bd5c  cbz w8,0x7101d6bea4
7101d6bd60  adrp x8,0x710532f000
7101d6bd64  ldr x8,[x8, #0x8d0]
7101d6bd68  ldr x0,[x8, #0x8]
7101d6bd6c  ldp x8,x9,[x0, #0x40]
7101d6bd70  sub x9,x9,x8
7101d6bd74  asr x9,x9,#0x3
7101d6bd78  cmp x9,#0x3
7101d6bd7c  b.cc 0x7101d6bdd8
7101d6bd80  ldr x20,[x8, #0x10]
7101d6bd84  ldrb w8,[x0, #0x191]
7101d6bd88  cbnz w8,0x7101d6be54
7101d6bd8c  b 0x7101d6bde4
7101d6bd90  tbz w25,#0x0,0x7101d6c680
7101d6bd94  ldr w8,[x19, #0x4d8]
7101d6bd98  cmp w8,#0x3b
7101d6bd9c  b.gt 0x7101d6c674
7101d6bda0  ldrb w8,[x19, #0x4e3]
7101d6bda4  cbz w8,0x7101d6c5c8
7101d6bda8  adrp x8,0x710532f000
7101d6bdac  ldr x8,[x8, #0x8d0]
7101d6bdb0  ldr x0,[x8, #0x8]
7101d6bdb4  ldp x8,x9,[x0, #0x40]
7101d6bdb8  sub x9,x9,x8
7101d6bdbc  asr x9,x9,#0x3
7101d6bdc0  cmp x9,#0x3
7101d6bdc4  b.cc 0x7101d6c500
7101d6bdc8  ldr x20,[x8, #0x10]
7101d6bdcc  ldrb w8,[x0, #0x191]
7101d6bdd0  cbnz w8,0x7101d6c57c
7101d6bdd4  b 0x7101d6c50c
7101d6bdd8  mov x20,xzr
7101d6bddc  ldrb w8,[x0, #0x191]
7101d6bde0  cbnz w8,0x7101d6be54
7101d6bde4  mov w2,#0x4
7101d6bde8  mov x1,x20
7101d6bdec  bl 0x7103313f20
7101d6bdf0  tbz w0,#0x0,0x7101d6be54
7101d6bdf4  add x0,sp,#0x30
7101d6bdf8  mov x1,x20
7101d6bdfc  bl 0x71024076d0
7101d6be00  ldr x8,[sp, #0x40]
7101d6be04  adrp x9,0x7104f73000
7101d6be08  add x9,x9,#0xd50
7101d6be0c  str x9,[sp, #0x38]
7101d6be10  cbz x8,0x7101d6be80
7101d6be14  adrp x8,0x7106dd5000
7101d6be18  ldrb w8,[x8, #0x3a8]
7101d6be1c  cmp w8,#0x1
7101d6be20  b.ne 0x7101d6be80
7101d6be24  adrp x9,0x7106dd5000
7101d6be28  ldr w8,[sp, #0x48]
7101d6be2c  ldr w9,[x9, #0x3ac]
7101d6be30  cmp w8,w9
7101d6be34  b.ne 0x7101d6be80
7101d6be38  ldr x8,[sp, #0x40]
7101d6be3c  ldr wzr,[x8, #0x38]!
7101d6be40  ldaxr w9,[x8]
7101d6be44  sub w9,w9,#0x1
7101d6be48  stlxr w10,w9,[x8]
7101d6be4c  cbnz w10,0x7101d6be40
7101d6be50  b 0x7101d6be80
7101d6be54  mov x8,#0x650000000000
7101d6be58  movk x8,#0x87, LSL #48
7101d6be5c  strb wzr,[sp, #0x50]
7101d6be60  stp xzr,x8,[sp, #0x40]
7101d6be64  mov x8,#-0x1
7101d6be68  stp x8,xzr,[sp, #0x58]
7101d6be6c  adrp x8,0x7104f73000
7101d6be70  add x8,x8,#0xd50
7101d6be74  str wzr,[sp, #0x30]
7101d6be78  str xzr,[sp, #0x68]
7101d6be7c  str x8,[sp, #0x38]
7101d6be80  str xzr,[sp, #0x40]
7101d6be84  strb wzr,[sp, #0x50]
7101d6be88  ldrb w8,[x19, #0x4e3]
7101d6be8c  cbz w8,0x7101d6bea4
7101d6be90  ldr w8,[x19, #0x4d4]
7101d6be94  str wzr,[x19, #0x4d4]
7101d6be98  cmp w8,#0x0
7101d6be9c  csel w24,wzr,w24,eq
7101d6bea0  b 0x7101d6c67c
7101d6bea4  ldr x1,[x19, #0x278]
7101d6bea8  add x0,sp,#0x20
7101d6beac  mov w2,wzr
7101d6beb0  add x20,x19,#0x278
7101d6beb4  bl 0x7103771d60
7101d6beb8  ldr x21,[sp, #0x28]
7101d6bebc  ldr x22,[x21]
7101d6bec0  cbz x22,0x7101d6bf24
7101d6bec4  ldr x8,[x22]
7101d6bec8  ldr x8,[x8, #0x208]
7101d6becc  mov w1,#0x1
7101d6bed0  mov x0,x22
7101d6bed4  mov w24,w23
7101d6bed8  mov w23,#0x1
7101d6bedc  blr x8
7101d6bee0  ldr x8,[x22]
7101d6bee4  ldr x8,[x8, #0x200]
7101d6bee8  mov x0,x22
7101d6beec  blr x8
7101d6bef0  tbz w0,#0x0,0x7101d6bf08
7101d6bef4  ldr x8,[x22]
7101d6bef8  ldr x8,[x8, #0x210]
7101d6befc  mov x0,x22
7101d6bf00  blr x8
7101d6bf04  eor w23,w0,#0x1
7101d6bf08  ldr x8,[x22]
7101d6bf0c  ldr x8,[x8, #0x388]
7101d6bf10  and w1,w23,#0x1
7101d6bf14  mov x0,x22
7101d6bf18  mov w2,wzr
7101d6bf1c  blr x8
7101d6bf20  mov w23,w24
7101d6bf24  adrp x8,0x710523d000
7101d6bf28  add x8,x8,#0x9c8
7101d6bf2c  stp x8,xzr,[sp, #0x20]
7101d6bf30  cbz x21,0x7101d6bf3c
7101d6bf34  mov x0,x21
7101d6bf38  bl 0x710392eb40
7101d6bf3c  mov x0,x20
7101d6bf40  mov w1,wzr
7101d6bf44  mov w2,wzr
7101d6bf48  bl 0x7103771be0
7101d6bf4c  mov w24,wzr
7101d6bf50  str wzr,[x19, #0x4d4]
7101d6bf54  b 0x7101d6c67c
7101d6bf58  ldp x10,x9,[x9, #0x30]
7101d6bf5c  sub x9,x9,x10
7101d6bf60  mov x11,#0x5c29
7101d6bf64  movk x11,#0xc28f, LSL #16
7101d6bf68  movk x11,#0x28f5, LSL #32
7101d6bf6c  movk x11,#0x8f5c, LSL #48
7101d6bf70  asr x9,x9,#0x3
7101d6bf74  mul x9,x9,x11
7101d6bf78  cmp x9,x8
7101d6bf7c  b.ls 0x7101d6c02c
7101d6bf80  mov w9,#0xc8
7101d6bf84  madd x8,x8,x9,x10
7101d6bf88  ldp x9,x8,[x8, #0xa8]
7101d6bf8c  sub x8,x8,x9
7101d6bf90  lsr x8,x8,#0x4
7101d6bf94  cmp w8,#0x1
7101d6bf98  b.ge 0x7101d6bff0
7101d6bf9c  b 0x7101d6c02c
7101d6bfa0  ldp x10,x9,[x9, #0x18]
7101d6bfa4  sub x9,x9,x10
7101d6bfa8  mov x11,#0x8ba3
7101d6bfac  movk x11,#0xba2e, LSL #16
7101d6bfb0  movk x11,#0xa2e8, LSL #32
7101d6bfb4  movk x11,#0x2e8b, LSL #48
7101d6bfb8  asr x9,x9,#0x3
7101d6bfbc  mul x9,x9,x11
7101d6bfc0  cmp x9,x8
7101d6bfc4  b.ls 0x7101d6c02c
7101d6bfc8  mov w9,#0x58
7101d6bfcc  madd x8,x8,x9,x10
7101d6bfd0  ldp x9,x8,[x8, #0x38]
7101d6bfd4  sub x8,x8,x9
7101d6bfd8  orr x9,xzr,#-0x5555555555555556
7101d6bfdc  asr x8,x8,#0x3
7101d6bfe0  movk x9,#0xaaab
7101d6bfe4  mul x8,x8,x9
7101d6bfe8  cmp w8,#0x1
7101d6bfec  b.lt 0x7101d6c02c
7101d6bff0  mov w9,#0xffffffff
7101d6bff4  str x9,[x19, #0x4a8]
7101d6bff8  ldr x9,[x19, #0x4b0]
7101d6bffc  str x9,[x19, #0x4b8]
7101d6c000  ldr w9,[x19, #0x2b0]
7101d6c004  add w9,w9,#0x1
7101d6c008  sub w9,w9,w8
7101d6c00c  str wzr,[x19, #0x4c8]
7101d6c010  adds w9,w9,w8
7101d6c014  b.mi 0x7101d6c010
7101d6c018  sdiv w10,w9,w8
7101d6c01c  msub w20,w10,w8,w9
7101d6c020  cmp w20,#0x0
7101d6c024  b.gt 0x7101d6b72c
7101d6c028  b 0x7101d6c030
7101d6c02c  mov w20,wzr
7101d6c030  ldr x0,[x19, #0x1e0]
7101d6c034  fmov s0,0x3f800000
7101d6c038  orr w8,wzr,#0x3
7101d6c03c  adrp x1,0x71043f0000
7101d6c040  add x1,x1,#0xced
7101d6c044  str w8,[x19, #0x2a0]
7101d6c048  bl 0x7103778300
7101d6c04c  str w20,[x19, #0x2b0]
7101d6c050  mov x0,x19
7101d6c054  bl 0x7101d6e660
7101d6c058  ldrb w8,[x19, #0x478]
7101d6c05c  cbz w8,0x7101d6c2a8
7101d6c060  ldr w8,[x19, #0x48c]
7101d6c064  subs w8,w8,#0x1
7101d6c068  str w8,[x19, #0x48c]
7101d6c06c  b.gt 0x7101d6c2a8
7101d6c070  adrp x20,0x710532f000
7101d6c074  ldr x0,[x20, #0x8d0]
7101d6c078  ldr x1,[x19, #0x480]
7101d6c07c  bl 0x7103315030
7101d6c080  ldr w8,[x19, #0x488]
7101d6c084  tbnz w8,#0x1f,0x7101d6c0c4
7101d6c088  cbz w8,0x7101d6c0fc
7101d6c08c  ldr x10,[x20, #0x8d0]
7101d6c090  ldr x0,[x10, #0x8]
7101d6c094  ldr x10,[x0, #0xc8]
7101d6c098  and x11,x10,#-0x100000000000000
7101d6c09c  mov x12,#-0x2700000000000000
7101d6c0a0  mov w9,wzr
7101d6c0a4  cmp x11,x12
7101d6c0a8  b.ne 0x7101d6c0b8
7101d6c0ac  and x10,x10,#0xffffffffff
7101d6c0b0  cbz x10,0x7101d6c0b8
7101d6c0b4  ldr w9,[x0, #0xd8]
7101d6c0b8  cmp w9,w8
7101d6c0bc  csel w1,w9,w8,lt
7101d6c0c0  b 0x7101d6c0f8
7101d6c0c4  ldr x10,[x20, #0x8d0]
7101d6c0c8  ldr x0,[x10, #0x8]
7101d6c0cc  ldr x10,[x0, #0xc8]
7101d6c0d0  and x11,x10,#-0x100000000000000
7101d6c0d4  mov x12,#-0x2700000000000000
7101d6c0d8  mov w9,wzr
7101d6c0dc  cmp x11,x12
7101d6c0e0  b.ne 0x7101d6c0f0
7101d6c0e4  and x10,x10,#0xffffffffff
7101d6c0e8  cbz x10,0x7101d6c0f0
7101d6c0ec  ldr w9,[x0, #0xd8]
7101d6c0f0  add w8,w8,w9
7101d6c0f4  bic w1,w8,w8, ASR #0x1f
7101d6c0f8  bl 0x7103315450
7101d6c0fc  ldr x0,[x19, #0x1e0]
7101d6c100  fmov s0,0x3f800000
7101d6c104  mov w8,#0x1
7101d6c108  adrp x1,0x71042a3000
7101d6c10c  add x1,x1,#0x372
7101d6c110  str w8,[x19, #0x2a0]
7101d6c114  bl 0x7103778300
7101d6c118  ldr w8,[x19, #0x290]
7101d6c11c  cmp w8,#0x4
7101d6c120  strb wzr,[x19, #0x478]
7101d6c124  b.ne 0x7101d6c2a8
7101d6c128  ldrb w8,[x19, #0x2b6]
7101d6c12c  cbz w8,0x7101d6c2a8
7101d6c130  ldrb w8,[x19, #0x4e4]
7101d6c134  cbnz w8,0x7101d6c2a8
7101d6c138  ldr x8,[x19, #0x278]
7101d6c13c  ldr x11,[x8, #0x1b8]
7101d6c140  add x9,x8,#0x1b8
7101d6c144  cbz x11,0x7101d6c1b4
7101d6c148  mov x10,x9
7101d6c14c  ldr w12,[x11, #0x20]
7101d6c150  cmp w12,#0x1
7101d6c154  cset w12,lt
7101d6c158  csel x10,x10,x11,lt
7101d6c15c  ldr x11,[x11, w12, UXTW #0x3]
7101d6c160  cbnz x11,0x7101d6c14c
7101d6c164  cmp x10,x9
7101d6c168  b.eq 0x7101d6c1b4
7101d6c16c  ldr w11,[x10, #0x20]
7101d6c170  cmp w11,#0x1
7101d6c174  b.gt 0x7101d6c1b4
7101d6c178  ldr x20,[x10, #0x28]
7101d6c17c  cbz x20,0x7101d6c1b4
7101d6c180  ldr x8,[x20]
7101d6c184  ldr x8,[x8, #0x1f8]
7101d6c188  mov w1,#0x1
7101d6c18c  mov x0,x20
7101d6c190  blr x8
7101d6c194  ldr x8,[x20]
7101d6c198  ldr x8,[x8, #0x388]
7101d6c19c  mov x0,x20
7101d6c1a0  mov w1,wzr
7101d6c1a4  mov w2,wzr
7101d6c1a8  blr x8
7101d6c1ac  ldr x8,[x19, #0x278]
7101d6c1b0  add x9,x8,#0x1b8
7101d6c1b4  mov w10,#0x1
7101d6c1b8  strb w10,[x19, #0x4e4]
7101d6c1bc  ldr x11,[x8, #0x1b8]
7101d6c1c0  cbz x11,0x7101d6c210
7101d6c1c4  mov x10,x9
7101d6c1c8  ldr w12,[x11, #0x20]
7101d6c1cc  cmp w12,#0x1
7101d6c1d0  cset w12,lt
7101d6c1d4  csel x10,x10,x11,lt
7101d6c1d8  ldr x11,[x11, w12, UXTW #0x3]
7101d6c1dc  cbnz x11,0x7101d6c1c8
7101d6c1e0  cmp x10,x9
7101d6c1e4  b.eq 0x7101d6c210
7101d6c1e8  ldr w9,[x10, #0x20]
7101d6c1ec  cmp w9,#0x1
7101d6c1f0  b.gt 0x7101d6c210
7101d6c1f4  ldr x9,[x10, #0x28]
7101d6c1f8  cbz x9,0x7101d6c210
7101d6c1fc  ldr x1,[x9, #0x88]
7101d6c200  add x0,x8,#0x160
7101d6c204  add x8,sp,#0x30
7101d6c208  bl 0x7103776640
7101d6c20c  b 0x7101d6c218
7101d6c210  add x0,sp,#0x30
7101d6c214  bl 0x7103776290
7101d6c218  ldr x20,[sp, #0x38]
7101d6c21c  ldr x8,[x20, #0x18]
7101d6c220  ldr x8,[x8]
7101d6c224  cbz x8,0x7101d6c230
7101d6c228  orr w9,wzr,#0xff
7101d6c22c  strb w9,[x8, #0x59]
7101d6c230  adrp x8,0x710523d000
7101d6c234  add x8,x8,#0x988
7101d6c238  stp x8,xzr,[sp, #0x30]
7101d6c23c  cbz x20,0x7101d6c260
7101d6c240  ldr x0,[x20, #0x18]
7101d6c244  adrp x8,0x710523d000
7101d6c248  add x8,x8,#0x9a8
7101d6c24c  stp x8,xzr,[x20, #0x10]
7101d6c250  cbz x0,0x7101d6c258
7101d6c254  bl 0x710392eb40
7101d6c258  mov x0,x20
7101d6c25c  bl 0x710392eb40
7101d6c260  ldr x8,[x19, #0x1c0]
7101d6c264  ldr x8,[x8]
7101d6c268  add x0,x8,#0x8
7101d6c26c  adrp x1,0x7104270000
7101d6c270  add x1,x1,#0x205
7101d6c274  add x8,sp,#0x30
7101d6c278  bl 0x7103776910
7101d6c27c  ldr x0,[sp, #0x38]
7101d6c280  ldr x8,[x0]
7101d6c284  cbz x8,0x7101d6c294
7101d6c288  ldrb w9,[x8, #0x58]
7101d6c28c  orr w9,w9,#0x1
7101d6c290  strb w9,[x8, #0x58]
7101d6c294  adrp x8,0x710523d000
7101d6c298  add x8,x8,#0x9a8
7101d6c29c  stp x8,xzr,[sp, #0x30]
7101d6c2a0  cbz x0,0x7101d6c2a8
7101d6c2a4  bl 0x710392eb40
7101d6c2a8  mov w1,#0x1
7101d6c2ac  mov x0,x19
7101d6c2b0  bl 0x7101d6f820
7101d6c2b4  mov x0,x19
7101d6c2b8  bl 0x7101d703f0
7101d6c2bc  ldr w8,[x19, #0x2a0]
7101d6c2c0  cmp w8,#0x1
7101d6c2c4  b.ne 0x7101d6c2d0
7101d6c2c8  mov x0,x19
7101d6c2cc  bl 0x7101d6fd00
7101d6c2d0  ldrsw x8,[x19, #0x1a4]
7101d6c2d4  cmp w8,#0x13
7101d6c2d8  b.cs 0x7101d6e3f8
7101d6c2dc  add x8,x19,x8, LSL #0x2
7101d6c2e0  ldr w8,[x8, #0x158]
7101d6c2e4  ldr w9,[x19, #0x1a8]
7101d6c2e8  cmp w9,w8
7101d6c2ec  b.eq 0x7101d6c33c
7101d6c2f0  cmp w8,#0x4
7101d6c2f4  str w9,[x19, #0x1b0]
7101d6c2f8  str w8,[x19, #0x1a8]
7101d6c2fc  b.cs 0x7101d6e3f8
7101d6c300  sxtw x8,w8
7101d6c304  add x8,x19,x8, LSL #0x4
7101d6c308  ldp x9,x8,[x8, #0x118]
7101d6c30c  stp x9,x8,[x19, #0xf8]
7101d6c310  ldp x8,x10,[x19, #0x108]
7101d6c314  and x9,x10,#0x1
7101d6c318  orr x11,x9,x8
7101d6c31c  cbz x11,0x7101d6c338
7101d6c320  ldr x11,[x19, #0xf0]
7101d6c324  add x0,x11,x10, ASR #0x1
7101d6c328  cbz x9,0x7101d6c334
7101d6c32c  ldr x9,[x0]
7101d6c330  ldr x8,[x9, x8, LSL #0x0]
7101d6c334  blr x8
7101d6c338  str wzr,[x19, #0x1ac]
7101d6c33c  ldrb w8,[x19, #0x1b4]
7101d6c340  cbz w8,0x7101d6c374
7101d6c344  ldp x8,x10,[x19, #0x108]
7101d6c348  and x9,x10,#0x1
7101d6c34c  orr x11,x9,x8
7101d6c350  cbz x11,0x7101d6c36c
7101d6c354  ldr x11,[x19, #0xf0]
7101d6c358  add x0,x11,x10, ASR #0x1
7101d6c35c  cbz x9,0x7101d6c368
7101d6c360  ldr x9,[x0]
7101d6c364  ldr x8,[x9, x8, LSL #0x0]
7101d6c368  blr x8
7101d6c36c  str wzr,[x19, #0x1ac]
7101d6c370  strb wzr,[x19, #0x1b4]
7101d6c374  ldr x9,[x19, #0xf0]
7101d6c378  cbz x9,0x7101d6c3a0
7101d6c37c  ldp x8,x11,[x19, #0xf8]
7101d6c380  and x10,x11,#0x1
7101d6c384  orr x12,x10,x8
7101d6c388  cbz x12,0x7101d6c3a0
7101d6c38c  add x0,x9,x11, ASR #0x1
7101d6c390  cbz x10,0x7101d6c39c
7101d6c394  ldr x9,[x0]
7101d6c398  ldr x8,[x9, x8, LSL #0x0]
7101d6c39c  blr x8
7101d6c3a0  ldr w9,[x19, #0x1ac]
7101d6c3a4  ldr w11,[x19, #0x290]
7101d6c3a8  mov w8,wzr
7101d6c3ac  add w9,w9,#0x1
7101d6c3b0  cmp w11,#0x1
7101d6c3b4  str w9,[x19, #0x1ac]
7101d6c3b8  b.hi 0x7101d6c4c0
7101d6c3bc  adrp x9,0x710593b000
7101d6c3c0  ldr w9,[x9, #0x534]
7101d6c3c4  cbnz w9,0x7101d6c4c0
7101d6c3c8  ldr w8,[x19, #0x2b0]
7101d6c3cc  mov w10,wzr
7101d6c3d0  cmp w11,#0x4
7101d6c3d4  b.hi 0x7101d6c4b8
7101d6c3d8  mov w11,w11
7101d6c3dc  adrp x13,0x71044fb000
7101d6c3e0  add x13,x13,#0x2c
7101d6c3e4  ldrsw x11,[x13, x11, LSL #0x2]
7101d6c3e8  ldrsw x9,[x19, #0x2ac]
7101d6c3ec  ldr x12,[x19]
7101d6c3f0  add x11,x11,x13
7101d6c3f4  br x11
7101d6c3f8  ldp x10,x11,[x12]
7101d6c3fc  orr x12,xzr,#-0x5555555555555556
7101d6c400  movk x12,#0xaaab
7101d6c404  sub x11,x11,x10
7101d6c408  asr x11,x11,#0x4
7101d6c40c  mul x11,x11,x12
7101d6c410  cmp x11,x9
7101d6c414  b.ls 0x7101d6c4b4
7101d6c418  orr w11,wzr,#0x30
7101d6c41c  madd x9,x9,x11,x10
7101d6c420  ldp x10,x9,[x9, #0x8]
7101d6c424  b 0x7101d6c49c
7101d6c428  ldp x10,x11,[x12, #0x30]
7101d6c42c  mov x12,#0x5c29
7101d6c430  movk x12,#0xc28f, LSL #16
7101d6c434  movk x12,#0x28f5, LSL #32
7101d6c438  movk x12,#0x8f5c, LSL #48
7101d6c43c  sub x11,x11,x10
7101d6c440  asr x11,x11,#0x3
7101d6c444  mul x11,x11,x12
7101d6c448  cmp x11,x9
7101d6c44c  b.ls 0x7101d6c4b4
7101d6c450  mov w11,#0xc8
7101d6c454  madd x9,x9,x11,x10
7101d6c458  ldp x10,x9,[x9, #0xa8]
7101d6c45c  sub x9,x9,x10
7101d6c460  lsr x10,x9,#0x4
7101d6c464  b 0x7101d6c4b8
7101d6c468  ldp x10,x11,[x12, #0x18]
7101d6c46c  mov x12,#0x8ba3
7101d6c470  movk x12,#0xba2e, LSL #16
7101d6c474  movk x12,#0xa2e8, LSL #32
7101d6c478  movk x12,#0x2e8b, LSL #48
7101d6c47c  sub x11,x11,x10
7101d6c480  asr x11,x11,#0x3
7101d6c484  mul x11,x11,x12
7101d6c488  cmp x11,x9
7101d6c48c  b.ls 0x7101d6c4b4
7101d6c490  mov w11,#0x58
7101d6c494  madd x9,x9,x11,x10
7101d6c498  ldp x10,x9,[x9, #0x38]
7101d6c49c  sub x9,x9,x10
7101d6c4a0  mov w10,#0xaaab
7101d6c4a4  movk w10,#0xaaaa, LSL #16
7101d6c4a8  lsr x9,x9,#0x3
7101d6c4ac  mul w10,w9,w10
7101d6c4b0  b 0x7101d6c4b8
7101d6c4b4  mov w10,wzr
7101d6c4b8  cmp w10,w8
7101d6c4bc  cset w8,gt
7101d6c4c0  ldrb w9,[x19, #0x4e2]
7101d6c4c4  cmp w8,w9
7101d6c4c8  b.eq 0x7101d6cad8
7101d6c4cc  ldr x9,[x19, #0x1c0]
7101d6c4d0  strb w8,[x19, #0x4e2]
7101d6c4d4  ldr x9,[x9]
7101d6c4d8  ldr x0,[x9, #0x10]
7101d6c4dc  fmov s0,0x3f800000
7101d6c4e0  adrp x10,0x710432a000
7101d6c4e4  add x10,x10,#0x3e2
7101d6c4e8  adrp x11,0x71042b4000
7101d6c4ec  add x11,x11,#0x6ae
7101d6c4f0  cmp w8,#0x0
7101d6c4f4  csel x1,x11,x10,ne
7101d6c4f8  bl 0x7103778300
7101d6c4fc  b 0x7101d6cad8
7101d6c500  mov x20,xzr
7101d6c504  ldrb w8,[x0, #0x191]
7101d6c508  cbnz w8,0x7101d6c57c
7101d6c50c  mov w2,#0x4
7101d6c510  mov x1,x20
7101d6c514  bl 0x7103313f20
7101d6c518  tbz w0,#0x0,0x7101d6c57c
7101d6c51c  add x0,sp,#0x30
7101d6c520  mov x1,x20
7101d6c524  bl 0x71024076d0
7101d6c528  ldr x8,[sp, #0x40]
7101d6c52c  adrp x9,0x7104f73000
7101d6c530  add x9,x9,#0xd50
7101d6c534  str x9,[sp, #0x38]
7101d6c538  cbz x8,0x7101d6c5a8
7101d6c53c  adrp x8,0x7106dd5000
7101d6c540  ldrb w8,[x8, #0x3a8]
7101d6c544  cmp w8,#0x1
7101d6c548  b.ne 0x7101d6c5a8
7101d6c54c  adrp x9,0x7106dd5000
7101d6c550  ldr w8,[sp, #0x48]
7101d6c554  ldr w9,[x9, #0x3ac]
7101d6c558  cmp w8,w9
7101d6c55c  b.ne 0x7101d6c5a8
7101d6c560  ldr x8,[sp, #0x40]
7101d6c564  ldr wzr,[x8, #0x38]!
7101d6c568  ldaxr w9,[x8]
7101d6c56c  sub w9,w9,#0x1
7101d6c570  stlxr w10,w9,[x8]
7101d6c574  cbnz w10,0x7101d6c568
7101d6c578  b 0x7101d6c5a8
7101d6c57c  mov x8,#0x650000000000
7101d6c580  movk x8,#0x87, LSL #48
7101d6c584  strb wzr,[sp, #0x50]
7101d6c588  stp xzr,x8,[sp, #0x40]
7101d6c58c  mov x8,#-0x1
7101d6c590  stp x8,xzr,[sp, #0x58]
7101d6c594  adrp x8,0x7104f73000
7101d6c598  add x8,x8,#0xd50
7101d6c59c  str wzr,[sp, #0x30]
7101d6c5a0  str xzr,[sp, #0x68]
7101d6c5a4  str x8,[sp, #0x38]
7101d6c5a8  str xzr,[sp, #0x40]
7101d6c5ac  strb wzr,[sp, #0x50]
7101d6c5b0  ldrb w8,[x19, #0x4e3]
7101d6c5b4  cbz w8,0x7101d6c5c8
7101d6c5b8  ldr w8,[x19, #0x4d4]
7101d6c5bc  cmp w8,#0x2
7101d6c5c0  csel w24,w8,w24,eq
7101d6c5c4  b 0x7101d6c674
7101d6c5c8  ldr x1,[x19, #0x278]
7101d6c5cc  add x0,sp,#0x20
7101d6c5d0  mov w2,#0x2
7101d6c5d4  add x20,x19,#0x278
7101d6c5d8  bl 0x7103771d60
7101d6c5dc  ldr x21,[sp, #0x28]
7101d6c5e0  ldr x22,[x21]
7101d6c5e4  cbz x22,0x7101d6c648
7101d6c5e8  ldr x8,[x22]
7101d6c5ec  ldr x8,[x8, #0x208]
7101d6c5f0  mov w1,#0x1
7101d6c5f4  mov x0,x22
7101d6c5f8  mov w24,w23
7101d6c5fc  mov w23,#0x1
7101d6c600  blr x8
7101d6c604  ldr x8,[x22]
7101d6c608  ldr x8,[x8, #0x200]
7101d6c60c  mov x0,x22
7101d6c610  blr x8
7101d6c614  tbz w0,#0x0,0x7101d6c62c
7101d6c618  ldr x8,[x22]
7101d6c61c  ldr x8,[x8, #0x210]
7101d6c620  mov x0,x22
7101d6c624  blr x8
7101d6c628  eor w23,w0,#0x1
7101d6c62c  ldr x8,[x22]
7101d6c630  ldr x8,[x8, #0x388]
7101d6c634  and w1,w23,#0x1
7101d6c638  mov x0,x22
7101d6c63c  mov w2,wzr
7101d6c640  blr x8
7101d6c644  mov w23,w24
7101d6c648  adrp x8,0x710523d000
7101d6c64c  add x8,x8,#0x9c8
7101d6c650  stp x8,xzr,[sp, #0x20]
7101d6c654  cbz x21,0x7101d6c660
7101d6c658  mov x0,x21
7101d6c65c  bl 0x710392eb40
7101d6c660  mov w1,#0x2
7101d6c664  mov x0,x20
7101d6c668  mov w2,wzr
7101d6c66c  mov w24,#0x2
7101d6c670  bl 0x7103771be0
7101d6c674  mov w8,#0x2
7101d6c678  str w8,[x19, #0x4d4]
7101d6c67c  str wzr,[x19, #0x4dc]
7101d6c680  mov w8,wzr
7101d6c684  str wzr,[x19, #0x4d8]
7101d6c688  str wzr,[x19, #0x4d0]
7101d6c68c  ldr w9,[x19, #0x4dc]
7101d6c690  cmp w9,#0x3b
7101d6c694  b.gt 0x7101d6aef8
7101d6c698  add w9,w9,#0x1
7101d6c69c  str w9,[x19, #0x4dc]
7101d6c6a0  b.ne 0x7101d6aef8
7101d6c6a4  str w23,[x19, #0x4d4]
7101d6c6a8  b 0x7101d6aef8
7101d6c6ac  ldr x0,[x20, #0x58]
7101d6c6b0  cbz x0,0x7101d6b468
7101d6c6b4  ldr x8,[x0]
7101d6c6b8  ldr x8,[x8, #0x20]
7101d6c6bc  blr x8
7101d6c6c0  tbnz w0,#0x0,0x7101d6b468
7101d6c6c4  ldr x0,[x20, #0x58]
7101d6c6c8  ldr x8,[x0]
7101d6c6cc  ldr x8,[x8, #0x68]
7101d6c6d0  blr x8
7101d6c6d4  tbnz w0,#0x0,0x7101d6b468
7101d6c6d8  b 0x7101d6b470
7101d6c6dc  mov x1,x21
7101d6c6e0  ldr x0,[x20, #0x20]
7101d6c6e4  bl 0x71003e59f0
7101d6c6e8  ldr x8,[x20, #0x28]
7101d6c6ec  add x8,x8,#0x1
7101d6c6f0  str x8,[x20, #0x28]
7101d6c6f4  ldp x9,x10,[x20]
7101d6c6f8  ldrsw x8,[x21, #0x28]
7101d6c6fc  sub x10,x10,x9
7101d6c700  asr x10,x10,#0x3
7101d6c704  cmp x10,x8
7101d6c708  b.ls 0x7101d6e494
7101d6c70c  ldr x21,[x9, x8, LSL #0x3]
7101d6c710  ldr x8,[x20, #0x38]
7101d6c714  cbz x8,0x7101d6c770
7101d6c718  ldr x9,[x19, #0x498]
7101d6c71c  add x24,x20,#0x38
7101d6c720  and x9,x9,#-0xffff0000000001
7101d6c724  b 0x7101d6c72c
7101d6c728  mov x8,x10
7101d6c72c  ldr x10,[x8, #0x20]
7101d6c730  and x10,x10,#-0xffff0000000001
7101d6c734  cmp x9,x10
7101d6c738  b.cs 0x7101d6c74c
7101d6c73c  ldr x10,[x8]
7101d6c740  cbz x10,0x7101d6c780
7101d6c744  mov x24,x8
7101d6c748  b 0x7101d6c728
7101d6c74c  cmp x10,x9
7101d6c750  b.cs 0x7101d6c760
7101d6c754  mov x24,x8
7101d6c758  ldr x10,[x24, #0x8]!
7101d6c75c  cbnz x10,0x7101d6c728
7101d6c760  mov x23,x8
7101d6c764  ldr x22,[x24]
7101d6c768  cbnz x22,0x7101d6c834
7101d6c76c  b 0x7101d6c790
7101d6c770  mov x24,x23
7101d6c774  ldr x22,[x24]
7101d6c778  cbnz x22,0x7101d6c834
7101d6c77c  b 0x7101d6c790
7101d6c780  mov x23,x8
7101d6c784  mov x24,x8
7101d6c788  ldr x22,[x24]
7101d6c78c  cbnz x22,0x7101d6c834
7101d6c790  mov w0,#0x10
7101d6c794  orr w1,wzr,#0x30
7101d6c798  bl 0x710392e290
7101d6c79c  mov x22,x0
7101d6c7a0  cbnz x0,0x7101d6c7ec
7101d6c7a4  adrp x8,0x7105332000
7101d6c7a8  ldr x0,[x8, #0xf00]
7101d6c7ac  cbz x0,0x7101d6c7e8
7101d6c7b0  orr w8,wzr,#0x30
7101d6c7b4  str wzr,[sp, #0x20]
7101d6c7b8  add x1,sp,#0x20
7101d6c7bc  str x8,[sp, #0x30]
7101d6c7c0  ldr x8,[x0]
7101d6c7c4  ldr x8,[x8, #0x30]
7101d6c7c8  add x2,sp,#0x30
7101d6c7cc  blr x8
7101d6c7d0  tbz w0,#0x0,0x7101d6c7e8
7101d6c7d4  mov w0,#0x10
7101d6c7d8  orr w1,wzr,#0x30
7101d6c7dc  bl 0x710392e290
7101d6c7e0  mov x22,x0
7101d6c7e4  cbnz x0,0x7101d6c7ec
7101d6c7e8  mov x22,xzr
7101d6c7ec  ldr x8,[x19, #0x498]
7101d6c7f0  str x8,[x22, #0x20]
7101d6c7f4  str wzr,[x22, #0x28]
7101d6c7f8  stp xzr,xzr,[x22]
7101d6c7fc  str x23,[x22, #0x10]
7101d6c800  str x22,[x24]
7101d6c804  ldr x8,[x20, #0x30]
7101d6c808  ldr x8,[x8]
7101d6c80c  cbz x8,0x7101d6c81c
7101d6c810  str x8,[x20, #0x30]
7101d6c814  ldr x1,[x24]
7101d6c818  b 0x7101d6c820
7101d6c81c  mov x1,x22
7101d6c820  ldr x0,[x20, #0x38]
7101d6c824  bl 0x71003e59f0
7101d6c828  ldr x8,[x20, #0x40]
7101d6c82c  add x8,x8,#0x1
7101d6c830  str x8,[x20, #0x40]
7101d6c834  ldr x21,[x21]
7101d6c838  ldrb w10,[x21, #0x99]
7101d6c83c  fmov s8,wzr
7101d6c840  mov x8,xzr
7101d6c844  mov w9,wzr
7101d6c848  mov w23,#0xffffffff
7101d6c84c  cbz w10,0x7101d6c9d0
7101d6c850  ldr w10,[x22, #0x28]
7101d6c854  tbnz w10,#0x1f,0x7101d6c9d0
7101d6c858  ldp x27,x8,[x21]
7101d6c85c  sub x8,x8,x27
7101d6c860  mov x9,#0xcf3d
7101d6c864  movk x9,#0x3cf3, LSL #16
7101d6c868  movk x9,#0xf3cf, LSL #32
7101d6c86c  movk x9,#0xcf3c, LSL #48
7101d6c870  asr x8,x8,#0x4
7101d6c874  mul x8,x8,x9
7101d6c878  sxtw x26,w10
7101d6c87c  cmp x8,x26
7101d6c880  b.ls 0x7101d6c95c
7101d6c884  adrp x28,0x710532f000
7101d6c888  ldr x8,[x28, #0x730]
7101d6c88c  ldr x8,[x8, #0x8]
7101d6c890  ldr x22,[x8, #0x168]
7101d6c894  mov x24,#0x23e6
7101d6c898  movk x24,#0xe4b1, LSL #16
7101d6c89c  ldr x23,[x21, #0x90]
7101d6c8a0  movk x24,#0x11, LSL #32
7101d6c8a4  mov x1,x24
7101d6c8a8  mov x0,x22
7101d6c8ac  mov x25,#-0x3f00000000000000
7101d6c8b0  bl 0x71032631a0
7101d6c8b4  tst x23,#0xffffffffff
7101d6c8b8  and x10,x23,#-0x100000000000000
7101d6c8bc  cset w8,ne
7101d6c8c0  cmp x10,x25
7101d6c8c4  cset w9,eq
7101d6c8c8  and w8,w9,w8
7101d6c8cc  and x9,x0,#0xffffffffff
7101d6c8d0  tbz w8,#0x0,0x7101d6cb00
7101d6c8d4  and x11,x0,#-0x100000000000000
7101d6c8d8  cmp x11,x25
7101d6c8dc  b.ne 0x7101d6cb04
7101d6c8e0  cbz x9,0x7101d6cb04
7101d6c8e4  eor x9,x0,x23
7101d6c8e8  tst x9,#0xffffffffff
7101d6c8ec  b.eq 0x7101d6cb3c
7101d6c8f0  mov w9,#0x150
7101d6c8f4  madd x9,x26,x9,x27
7101d6c8f8  ldr w9,[x9, #0x28]
7101d6c8fc  cmn w9,#0x1
7101d6c900  b.ne 0x7101d6c91c
7101d6c904  mov w9,#0x150
7101d6c908  madd x9,x26,x9,x27
7101d6c90c  ldr w9,[x9, #0x2c]
7101d6c910  cmn w9,#0x1
7101d6c914  b.eq 0x7101d6ccb0
7101d6c918  add w9,w9,#0xa, LSL #12
7101d6c91c  ldr x8,[x21, #0x28]
7101d6c920  cbz x8,0x7101d6ce94
7101d6c924  ldr x10,[x21, #0x20]!
7101d6c928  cbz x10,0x7101d6c95c
7101d6c92c  mov x8,x21
7101d6c930  ldr w11,[x10, #0x20]
7101d6c934  cmp w11,w9
7101d6c938  cset w11,cc
7101d6c93c  csel x8,x8,x10,cc
7101d6c940  ldr x10,[x10, w11, UXTW #0x3]
7101d6c944  cbnz x10,0x7101d6c930
7101d6c948  cmp x8,x21
7101d6c94c  b.eq 0x7101d6c95c
7101d6c950  ldr w10,[x8, #0x20]
7101d6c954  cmp w9,w10
7101d6c958  b.cs 0x7101d6cd30
7101d6c95c  mov w9,wzr
7101d6c960  mov x8,xzr
7101d6c964  mov w23,#0xffffffff
7101d6c968  mov w24,wzr
7101d6c96c  mov w22,wzr
7101d6c970  mov v0.16B,v8.16B
7101d6c974  mov w25,w23
7101d6c978  mov v1.16B,v8.16B
7101d6c97c  str w22,[x20, #0x48]
7101d6c980  cbnz x8,0x7101d6c9ec
7101d6c984  ldr x10,[x20, #0x58]
7101d6c988  cbz x10,0x7101d6c9c4
7101d6c98c  adrp x11,0x7106dd5000
7101d6c990  ldrb w11,[x11, #0x3a8]
7101d6c994  cmp w11,#0x1
7101d6c998  b.ne 0x7101d6c9c4
7101d6c99c  adrp x12,0x7106dd5000
7101d6c9a0  ldr w11,[x20, #0x60]
7101d6c9a4  ldr w12,[x12, #0x3ac]
7101d6c9a8  cmp w11,w12
7101d6c9ac  b.ne 0x7101d6c9c4
7101d6c9b0  ldr wzr,[x10, #0x38]!
7101d6c9b4  ldaxr w11,[x10]
7101d6c9b8  sub w11,w11,#0x1
7101d6c9bc  stlxr w12,w11,[x10]
7101d6c9c0  cbnz w12,0x7101d6c9b4
7101d6c9c4  add x11,x20,#0x68
7101d6c9c8  str xzr,[x20, #0x58]
7101d6c9cc  b 0x7101d6ca78
7101d6c9d0  mov v0.16B,v8.16B
7101d6c9d4  mov w25,w23
7101d6c9d8  mov v1.16B,v8.16B
7101d6c9dc  mov w24,w9
7101d6c9e0  mov w22,w9
7101d6c9e4  str w22,[x20, #0x48]
7101d6c9e8  cbz x8,0x7101d6c984
7101d6c9ec  ldr w10,[x20, #0x64]
7101d6c9f0  mov w11,#0x6500
7101d6c9f4  movk w11,#0x87, LSL #16
7101d6c9f8  cmp w10,w11
7101d6c9fc  b.ne 0x7101d6ca7c
7101d6ca00  adrp x10,0x7106dd5000
7101d6ca04  ldr w10,[x10, #0x3ac]
7101d6ca08  ldr w11,[x20, #0x60]
7101d6ca0c  cmp w11,w10
7101d6ca10  b.ne 0x7101d6ca54
7101d6ca14  mov x10,x20
7101d6ca18  ldr x11,[x10, #0x58]!
7101d6ca1c  cbz x11,0x7101d6ca44
7101d6ca20  adrp x12,0x7106dd5000
7101d6ca24  ldrb w12,[x12, #0x3a8]
7101d6ca28  cmp w12,#0x1
7101d6ca2c  b.ne 0x7101d6ca44
7101d6ca30  ldr wzr,[x11, #0x38]!
7101d6ca34  ldaxr w12,[x11]
7101d6ca38  sub w12,w12,#0x1
7101d6ca3c  stlxr w13,w12,[x11]
7101d6ca40  cbnz w13,0x7101d6ca34
7101d6ca44  mov x11,x20
7101d6ca48  strb wzr,[x11, #0x68]!
7101d6ca4c  stur xzr,[x11, #-0x10]
7101d6ca50  b 0x7101d6ca60
7101d6ca54  str w10,[x20, #0x60]
7101d6ca58  add x10,x20,#0x58
7101d6ca5c  add x11,x20,#0x68
7101d6ca60  str x8,[x10]
7101d6ca64  add x10,x8,#0x38
7101d6ca68  ldaxr w12,[x10]
7101d6ca6c  add w12,w12,#0x1
7101d6ca70  stlxr w13,w12,[x10]
7101d6ca74  cbnz w13,0x7101d6ca68
7101d6ca78  strb wzr,[x11]
7101d6ca7c  stp w25,w23,[x20, #0x70]
7101d6ca80  stp s8,s0,[x20, #0x78]
7101d6ca84  str s1,[x20, #0x80]
7101d6ca88  str w24,[x20, #0x84]
7101d6ca8c  cbz x8,0x7101d6cac4
7101d6ca90  adrp x10,0x7106dd5000
7101d6ca94  ldrb w10,[x10, #0x3a8]
7101d6ca98  cmp w10,#0x1
7101d6ca9c  b.ne 0x7101d6cac4
7101d6caa0  adrp x10,0x7106dd5000
7101d6caa4  ldr w10,[x10, #0x3ac]
7101d6caa8  cmp w9,w10
7101d6caac  b.ne 0x7101d6cac4
7101d6cab0  ldr wzr,[x8, #0x38]!
7101d6cab4  ldaxr w9,[x8]
7101d6cab8  sub w9,w9,#0x1
7101d6cabc  stlxr w10,w9,[x8]
7101d6cac0  cbnz w10,0x7101d6cab4
7101d6cac4  mov w8,#0x1
7101d6cac8  str w8,[x19, #0x2a0]
7101d6cacc  strb wzr,[x19, #0x490]
7101d6cad0  mov x0,x19
7101d6cad4  bl 0x7101d703f0
7101d6cad8  ldp d9,d8,[sp, #0x80]
7101d6cadc  ldr d10,[sp, #0x70]
7101d6cae0  ldp x29,x30,[sp, #0xe0]
7101d6cae4  ldp x20,x19,[sp, #0xd0]
7101d6cae8  ldp x22,x21,[sp, #0xc0]
7101d6caec  ldp x24,x23,[sp, #0xb0]
7101d6caf0  ldp x26,x25,[sp, #0xa0]
7101d6caf4  ldp x28,x27,[sp, #0x90]
7101d6caf8  add sp,sp,#0xf0
7101d6cafc  ret
7101d6cb00  and x11,x0,#-0x100000000000000
7101d6cb04  and x12,x23,#0xffffffffff
7101d6cb08  cmp x10,x25
7101d6cb0c  cset w10,eq
7101d6cb10  cmp x12,#0x0
7101d6cb14  cset w12,ne
7101d6cb18  cmp x9,#0x0
7101d6cb1c  cset w9,ne
7101d6cb20  cmp x11,x25
7101d6cb24  cset w11,eq
7101d6cb28  and w10,w10,w12
7101d6cb2c  and w9,w9,w11
7101d6cb30  eor w9,w9,w10
7101d6cb34  cmp w9,#0x1
7101d6cb38  b.eq 0x7101d6c8f0
7101d6cb3c  mov w8,#0x150
7101d6cb40  madd x21,x26,x8,x27
7101d6cb44  ldr x1,[x21, #0x8]
7101d6cb48  add x0,sp,#0x30
7101d6cb4c  bl 0x71024076d0
7101d6cb50  ldr w21,[x21, #0x38]
7101d6cb54  cbz w21,0x7101d6cc1c
7101d6cb58  ldr w8,[sp, #0x58]
7101d6cb5c  cmn w8,#0x1
7101d6cb60  b.ne 0x7101d6cb70
7101d6cb64  ldr w8,[sp, #0x5c]
7101d6cb68  cmn w8,#0x1
7101d6cb6c  b.eq 0x7101d6cc1c
7101d6cb70  ldr x0,[sp, #0x40]
7101d6cb74  cbz x0,0x7101d6cc1c
7101d6cb78  ldr x8,[x0]
7101d6cb7c  ldr x8,[x8, #0x20]
7101d6cb80  blr x8
7101d6cb84  fmov s8,wzr
7101d6cb88  tbnz w0,#0x0,0x7101d6cba4
7101d6cb8c  adrp x8,0x710593b000
7101d6cb90  ldr x8,[x8, #0x438]
7101d6cb94  ldr x8,[x8]
7101d6cb98  ldrb w8,[x8, #0x1]
7101d6cb9c  cbz w8,0x7101d6cba4
7101d6cba0  ldr s8,[sp, #0x60]
7101d6cba4  ldr x0,[sp, #0x40]
7101d6cba8  cbz x0,0x7101d6cc1c
7101d6cbac  ldr x8,[x0]
7101d6cbb0  ldr x8,[x8, #0x20]
7101d6cbb4  blr x8
7101d6cbb8  tbnz w0,#0x0,0x7101d6cc1c
7101d6cbbc  adrp x8,0x710593b000
7101d6cbc0  ldr x8,[x8, #0x438]
7101d6cbc4  ldr x8,[x8]
7101d6cbc8  ldrb w8,[x8, #0x1]
7101d6cbcc  cbz w8,0x7101d6cc1c
7101d6cbd0  scvtf s0,w21
7101d6cbd4  fadd s8,s8,s0
7101d6cbd8  ldr w8,[sp, #0x4c]
7101d6cbdc  mov w9,#0x6500
7101d6cbe0  movk w9,#0x87, LSL #16
7101d6cbe4  cmp w8,w9
7101d6cbe8  b.ne 0x7101d6cc18
7101d6cbec  adrp x8,0x7106dd5000
7101d6cbf0  ldrb w8,[x8, #0x3a8]
7101d6cbf4  cmp w8,#0x1
7101d6cbf8  b.ne 0x7101d6cc18
7101d6cbfc  adrp x9,0x7106dd5000
7101d6cc00  ldr w8,[sp, #0x48]
7101d6cc04  ldr w9,[x9, #0x3ac]
7101d6cc08  cmp w8,w9
7101d6cc0c  b.ne 0x7101d6cc18
7101d6cc10  ldrb w8,[sp, #0x50]
7101d6cc14  cbz w8,0x7101d6d708
7101d6cc18  str s8,[sp, #0x60]
7101d6cc1c  ldr w22,[sp, #0x30]
7101d6cc20  ldr x8,[sp, #0x40]
7101d6cc24  cbz x8,0x7101d6cc4c
7101d6cc28  adrp x9,0x7106dd5000
7101d6cc2c  ldr w9,[x9, #0x3ac]
7101d6cc30  add x10,x8,#0x38
7101d6cc34  ldaxr w11,[x10]
7101d6cc38  add w11,w11,#0x1
7101d6cc3c  stlxr w12,w11,[x10]
7101d6cc40  cbnz w12,0x7101d6cc34
7101d6cc44  ldr x10,[sp, #0x40]
7101d6cc48  b 0x7101d6cc54
7101d6cc4c  mov x10,xzr
7101d6cc50  mov w9,wzr
7101d6cc54  ldp s8,s0,[sp, #0x60]
7101d6cc58  ldr s1,[sp, #0x68]
7101d6cc5c  ldp w25,w23,[sp, #0x58]
7101d6cc60  adrp x11,0x7104f73000
7101d6cc64  add x11,x11,#0xd50
7101d6cc68  ldr w24,[sp, #0x6c]
7101d6cc6c  str x11,[sp, #0x38]
7101d6cc70  cbz x10,0x7101d6da68
7101d6cc74  adrp x11,0x7106dd5000
7101d6cc78  ldrb w11,[x11, #0x3a8]
7101d6cc7c  cmp w11,#0x1
7101d6cc80  b.ne 0x7101d6da68
7101d6cc84  adrp x12,0x7106dd5000
7101d6cc88  ldr w11,[sp, #0x48]
7101d6cc8c  ldr w12,[x12, #0x3ac]
7101d6cc90  cmp w11,w12
7101d6cc94  b.ne 0x7101d6da68
7101d6cc98  ldr wzr,[x10, #0x38]!
7101d6cc9c  ldaxr w11,[x10]
7101d6cca0  sub w11,w11,#0x1
7101d6cca4  stlxr w12,w11,[x10]
7101d6cca8  cbnz w12,0x7101d6cc9c
7101d6ccac  b 0x7101d6da68
7101d6ccb0  mov w9,#0x150
7101d6ccb4  madd x9,x26,x9,x27
7101d6ccb8  ldrb w9,[x9, #0x3e]
7101d6ccbc  cbz w9,0x7101d6cdc0
7101d6ccc0  mov x8,x21
7101d6ccc4  ldr x9,[x8, #0x38]!
7101d6ccc8  cbz x9,0x7101d6c960
7101d6cccc  mov w10,#0x150
7101d6ccd0  madd x11,x26,x10,x27
7101d6ccd4  ldrsw x10,[x11, #0xc8]!
7101d6ccd8  cbz w10,0x7101d6ce48
7101d6ccdc  mov w12,#0x150
7101d6cce0  madd x12,x26,x12,x27
7101d6cce4  add x11,x11,w10, UXTW 
7101d6cce8  add x11,x11,#0x4
7101d6ccec  add x13,x12,#0xcc
7101d6ccf0  mov w12,#0xffffffff
7101d6ccf4  adrp x14,0x7104754000
7101d6ccf8  add x14,x14,#0x84
7101d6ccfc  ldrb w15,[x13], #0x1
7101d6cd00  sub w16,w15,#0x41
7101d6cd04  add w17,w15,#0x20
7101d6cd08  cmp w16,#0x1a
7101d6cd0c  csel w15,w17,w15,cc
7101d6cd10  eor w15,w15,w12
7101d6cd14  and w15,w15,#0xff
7101d6cd18  cmp x13,x11
7101d6cd1c  ldr w15,[x14, w15, UXTW #0x2]
7101d6cd20  eor w12,w15,w12, LSR #0x8
7101d6cd24  b.cc 0x7101d6ccfc
7101d6cd28  mvn w11,w12
7101d6cd2c  b 0x7101d6ce4c
7101d6cd30  ldr w23,[x8, #0x30]
7101d6cd34  mov w22,#0x6500
7101d6cd38  movk w22,#0x87, LSL #16
7101d6cd3c  cmn w23,#0x1
7101d6cd40  b.eq 0x7101d6cea8
7101d6cd44  add x21,x8,#0x28
7101d6cd48  ldr x24,[x21]
7101d6cd4c  cbz x24,0x7101d6cea8
7101d6cd50  ldrb w8,[x24, #0x58]
7101d6cd54  cbz w8,0x7101d6ce9c
7101d6cd58  ldr w8,[x24]
7101d6cd5c  cmp w8,w23
7101d6cd60  b.ne 0x7101d6cea8
7101d6cd64  ldr x8,[x21]
7101d6cd68  ldr x8,[x8, #0x30]
7101d6cd6c  ldr x8,[x8, #0x8]
7101d6cd70  cbz x8,0x7101d6cea8
7101d6cd74  mov w9,#0x150
7101d6cd78  madd x9,x26,x9,x27
7101d6cd7c  ldr x9,[x9, #0x8]
7101d6cd80  and x9,x9,#0xffffffffff
7101d6cd84  str x9,[sp, #0x30]
7101d6cd88  ldr w2,[x8, #0x4]
7101d6cd8c  add x1,x8,#0x8
7101d6cd90  adrp x4,0x7103741000
7101d6cd94  add x4,x4,#0x6f0
7101d6cd98  add x0,sp,#0x30
7101d6cd9c  mov w3,#0x8
7101d6cda0  bl 0x71039c2630
7101d6cda4  cbz x0,0x7101d6cea8
7101d6cda8  ldr x8,[x0]
7101d6cdac  add x0,sp,#0x30
7101d6cdb0  lsr x2,x8,#0x28
7101d6cdb4  mov x1,x21
7101d6cdb8  bl 0x7103738770
7101d6cdbc  b 0x7101d6cecc
7101d6cdc0  mov w9,#0x150
7101d6cdc4  madd x9,x26,x9,x27
7101d6cdc8  ldr x9,[x9, #0x20]
7101d6cdcc  str x9,[sp, #0x18]
7101d6cdd0  and x9,x9,#-0x100000000000000
7101d6cdd4  cmp x9,x25
7101d6cdd8  b.ne 0x7101d6ce1c
7101d6cddc  ldr x9,[sp, #0x18]
7101d6cde0  and x9,x9,#0xffffffffff
7101d6cde4  cbz x9,0x7101d6ce1c
7101d6cde8  mov x0,x22
7101d6cdec  mov x1,x24
7101d6cdf0  bl 0x71032631a0
7101d6cdf4  and x8,x0,#-0x100000000000000
7101d6cdf8  and x9,x0,#0xffffffffff
7101d6cdfc  cmp x8,x25
7101d6ce00  b.ne 0x7101d6d030
7101d6ce04  cbz x9,0x7101d6d030
7101d6ce08  ldr x8,[sp, #0x18]
7101d6ce0c  eor x8,x0,x8
7101d6ce10  tst x8,#0xffffffffff
7101d6ce14  b.ne 0x7101d6d14c
7101d6ce18  b 0x7101d6d03c
7101d6ce1c  ldr x10,[x21, #0x88]
7101d6ce20  and x9,x10,#0xffffffffff
7101d6ce24  cbz w8,0x7101d6d198
7101d6ce28  and x8,x10,#-0x100000000000000
7101d6ce2c  cmp x8,x25
7101d6ce30  b.ne 0x7101d6d1a8
7101d6ce34  cbz x9,0x7101d6d1a8
7101d6ce38  eor x8,x10,x23
7101d6ce3c  tst x8,#0xffffffffff
7101d6ce40  b.ne 0x7101d6d1a8
7101d6ce44  b 0x7101d6d298
7101d6ce48  mov x11,xzr
7101d6ce4c  bfm x11,x10,#0x20,#0x7
7101d6ce50  mov x10,x8
7101d6ce54  ldr x12,[x9, #0x20]
7101d6ce58  and x12,x12,#0xffffffffff
7101d6ce5c  cmp x12,x11
7101d6ce60  cset w12,cc
7101d6ce64  csel x10,x10,x9,cc
7101d6ce68  ldr x9,[x9, w12, UXTW #0x3]
7101d6ce6c  cbnz x9,0x7101d6ce54
7101d6ce70  cmp x10,x8
7101d6ce74  b.eq 0x7101d6c95c
7101d6ce78  ldr x8,[x10, #0x20]
7101d6ce7c  and x8,x8,#0xffffffffff
7101d6ce80  cmp x11,x8
7101d6ce84  b.cc 0x7101d6c95c
7101d6ce88  ldr w9,[x10, #0x28]
7101d6ce8c  ldr x8,[x21, #0x28]
7101d6ce90  cbnz x8,0x7101d6c924
7101d6ce94  mov w9,wzr
7101d6ce98  b 0x7101d6c964
7101d6ce9c  add x8,x24,#0x4
7101d6cea0  ldar w8,[x8]
7101d6cea4  cbz w8,0x7101d6d500
7101d6cea8  adrp x8,0x7104f73000
7101d6ceac  add x8,x8,#0xd30
7101d6ceb0  stp wzr,w22,[sp, #0x48]
7101d6ceb4  stp x8,xzr,[sp, #0x38]
7101d6ceb8  mov x8,#-0x1
7101d6cebc  strb wzr,[sp, #0x50]
7101d6cec0  str wzr,[sp, #0x30]
7101d6cec4  str xzr,[sp, #0x68]
7101d6cec8  stp x8,xzr,[sp, #0x58]
7101d6cecc  mov w8,#0x150
7101d6ced0  mul x8,x26,x8
7101d6ced4  add x8,x27,x8
7101d6ced8  ldr w21,[x8, #0x38]
7101d6cedc  cbz w21,0x7101d6cf9c
7101d6cee0  ldr w8,[sp, #0x58]
7101d6cee4  cmn w8,#0x1
7101d6cee8  b.ne 0x7101d6cef8
7101d6ceec  ldr w8,[sp, #0x5c]
7101d6cef0  cmn w8,#0x1
7101d6cef4  b.eq 0x7101d6cf9c
7101d6cef8  ldr x0,[sp, #0x40]
7101d6cefc  cbz x0,0x7101d6cf9c
7101d6cf00  ldr x8,[x0]
7101d6cf04  ldr x8,[x8, #0x20]
7101d6cf08  blr x8
7101d6cf0c  fmov s8,wzr
7101d6cf10  tbnz w0,#0x0,0x7101d6cf2c
7101d6cf14  adrp x8,0x710593b000
7101d6cf18  ldr x8,[x8, #0x438]
7101d6cf1c  ldr x8,[x8]
7101d6cf20  ldrb w8,[x8, #0x1]
7101d6cf24  cbz w8,0x7101d6cf2c
7101d6cf28  ldr s8,[sp, #0x60]
7101d6cf2c  ldr x0,[sp, #0x40]
7101d6cf30  cbz x0,0x7101d6cf9c
7101d6cf34  ldr x8,[x0]
7101d6cf38  ldr x8,[x8, #0x20]
7101d6cf3c  blr x8
7101d6cf40  tbnz w0,#0x0,0x7101d6cf9c
7101d6cf44  adrp x8,0x710593b000
7101d6cf48  ldr x8,[x8, #0x438]
7101d6cf4c  ldr x8,[x8]
7101d6cf50  ldrb w8,[x8, #0x1]
7101d6cf54  cbz w8,0x7101d6cf9c
7101d6cf58  scvtf s0,w21
7101d6cf5c  fadd s8,s8,s0
7101d6cf60  ldr w8,[sp, #0x4c]
7101d6cf64  cmp w8,w22
7101d6cf68  b.ne 0x7101d6cf98
7101d6cf6c  adrp x8,0x7106dd5000
7101d6cf70  ldrb w8,[x8, #0x3a8]
7101d6cf74  cmp w8,#0x1
7101d6cf78  b.ne 0x7101d6cf98
7101d6cf7c  adrp x9,0x7106dd5000
7101d6cf80  ldr w8,[sp, #0x48]
7101d6cf84  ldr w9,[x9, #0x3ac]
7101d6cf88  cmp w8,w9
7101d6cf8c  b.ne 0x7101d6cf98
7101d6cf90  ldrb w8,[sp, #0x50]
7101d6cf94  cbz w8,0x7101d6d880
7101d6cf98  str s8,[sp, #0x60]
7101d6cf9c  ldr w22,[sp, #0x30]
7101d6cfa0  ldr x8,[sp, #0x40]
7101d6cfa4  cbz x8,0x7101d6cfcc
7101d6cfa8  adrp x9,0x7106dd5000
7101d6cfac  ldr w9,[x9, #0x3ac]
7101d6cfb0  add x10,x8,#0x38
7101d6cfb4  ldaxr w11,[x10]
7101d6cfb8  add w11,w11,#0x1
7101d6cfbc  stlxr w12,w11,[x10]
7101d6cfc0  cbnz w12,0x7101d6cfb4
7101d6cfc4  ldr x10,[sp, #0x40]
7101d6cfc8  b 0x7101d6cfd4
7101d6cfcc  mov x10,xzr
7101d6cfd0  mov w9,wzr
7101d6cfd4  ldp s8,s0,[sp, #0x60]
7101d6cfd8  ldr s1,[sp, #0x68]
7101d6cfdc  ldp w25,w23,[sp, #0x58]
7101d6cfe0  adrp x11,0x7104f73000
7101d6cfe4  add x11,x11,#0xd50
7101d6cfe8  ldr w24,[sp, #0x6c]
7101d6cfec  str x11,[sp, #0x38]
7101d6cff0  cbz x10,0x7101d6da68
7101d6cff4  adrp x11,0x7106dd5000
7101d6cff8  ldrb w11,[x11, #0x3a8]
7101d6cffc  cmp w11,#0x1
7101d6d000  b.ne 0x7101d6da68
7101d6d004  adrp x12,0x7106dd5000
7101d6d008  ldr w11,[sp, #0x48]
7101d6d00c  ldr w12,[x12, #0x3ac]
7101d6d010  cmp w11,w12
7101d6d014  b.ne 0x7101d6da68
7101d6d018  ldr wzr,[x10, #0x38]!
7101d6d01c  ldaxr w11,[x10]
7101d6d020  sub w11,w11,#0x1
7101d6d024  stlxr w12,w11,[x10]
7101d6d028  cbnz w12,0x7101d6d01c
7101d6d02c  b 0x7101d6da68
7101d6d030  cbz x9,0x7101d6d14c
7101d6d034  cmp x8,x25
7101d6d038  b.ne 0x7101d6d14c
7101d6d03c  mov w8,#0x150
7101d6d040  madd x21,x26,x8,x27
7101d6d044  ldr x1,[x21, #0x8]
7101d6d048  add x0,sp,#0x30
7101d6d04c  bl 0x71024076d0
7101d6d050  ldr w21,[x21, #0x38]
7101d6d054  cbz w21,0x7101d6d11c
7101d6d058  ldr w8,[sp, #0x58]
7101d6d05c  cmn w8,#0x1
7101d6d060  b.ne 0x7101d6d070
7101d6d064  ldr w8,[sp, #0x5c]
7101d6d068  cmn w8,#0x1
7101d6d06c  b.eq 0x7101d6d11c
7101d6d070  ldr x0,[sp, #0x40]
7101d6d074  cbz x0,0x7101d6d11c
7101d6d078  ldr x8,[x0]
7101d6d07c  ldr x8,[x8, #0x20]
7101d6d080  blr x8
7101d6d084  fmov s8,wzr
7101d6d088  tbnz w0,#0x0,0x7101d6d0a4
7101d6d08c  adrp x8,0x710593b000
7101d6d090  ldr x8,[x8, #0x438]
7101d6d094  ldr x8,[x8]
7101d6d098  ldrb w8,[x8, #0x1]
7101d6d09c  cbz w8,0x7101d6d0a4
7101d6d0a0  ldr s8,[sp, #0x60]
7101d6d0a4  ldr x0,[sp, #0x40]
7101d6d0a8  cbz x0,0x7101d6d11c
7101d6d0ac  ldr x8,[x0]
7101d6d0b0  ldr x8,[x8, #0x20]
7101d6d0b4  blr x8
7101d6d0b8  tbnz w0,#0x0,0x7101d6d11c
7101d6d0bc  adrp x8,0x710593b000
7101d6d0c0  ldr x8,[x8, #0x438]
7101d6d0c4  ldr x8,[x8]
7101d6d0c8  ldrb w8,[x8, #0x1]
7101d6d0cc  cbz w8,0x7101d6d11c
7101d6d0d0  scvtf s0,w21
7101d6d0d4  fadd s8,s8,s0
7101d6d0d8  ldr w8,[sp, #0x4c]
7101d6d0dc  mov w9,#0x6500
7101d6d0e0  movk w9,#0x87, LSL #16
7101d6d0e4  cmp w8,w9
7101d6d0e8  b.ne 0x7101d6d118
7101d6d0ec  adrp x8,0x7106dd5000
7101d6d0f0  ldrb w8,[x8, #0x3a8]
7101d6d0f4  cmp w8,#0x1
7101d6d0f8  b.ne 0x7101d6d118
7101d6d0fc  adrp x9,0x7106dd5000
7101d6d100  ldr w8,[sp, #0x48]
7101d6d104  ldr w9,[x9, #0x3ac]
7101d6d108  cmp w8,w9
7101d6d10c  b.ne 0x7101d6d118
7101d6d110  ldrb w8,[sp, #0x50]
7101d6d114  cbz w8,0x7101d6dd9c
7101d6d118  str s8,[sp, #0x60]
7101d6d11c  ldr w22,[sp, #0x30]
7101d6d120  ldr x8,[sp, #0x40]
7101d6d124  cbz x8,0x7101d6d51c
7101d6d128  adrp x9,0x7106dd5000
7101d6d12c  ldr w9,[x9, #0x3ac]
7101d6d130  add x10,x8,#0x38
7101d6d134  ldaxr w11,[x10]
7101d6d138  add w11,w11,#0x1
7101d6d13c  stlxr w12,w11,[x10]
7101d6d140  cbnz w12,0x7101d6d134
7101d6d144  ldr x10,[sp, #0x40]
7101d6d148  b 0x7101d6d524
7101d6d14c  ldr x8,[x21, #0x88]
7101d6d150  and x9,x8,#-0x100000000000000
7101d6d154  cmp x9,x25
7101d6d158  b.ne 0x7101d6d174
7101d6d15c  and x9,x8,#0xffffffffff
7101d6d160  cbz x9,0x7101d6d174
7101d6d164  ldr x9,[sp, #0x18]
7101d6d168  eor x8,x8,x9
7101d6d16c  tst x8,#0xffffffffff
7101d6d170  b.eq 0x7101d6d5f4
7101d6d174  ldr x1,[sp, #0x18]
7101d6d178  mov x0,x22
7101d6d17c  bl 0x71032626e0
7101d6d180  cmn w0,#0x1
7101d6d184  b.eq 0x7101d6c95c
7101d6d188  add w9,w0,#0x7, LSL #12
7101d6d18c  ldr x8,[x21, #0x28]
7101d6d190  cbnz x8,0x7101d6c924
7101d6d194  b 0x7101d6ce94
7101d6d198  and x8,x10,#-0x100000000000000
7101d6d19c  cmp x8,x25
7101d6d1a0  b.ne 0x7101d6d298
7101d6d1a4  cbz x9,0x7101d6d298
7101d6d1a8  mov x0,x22
7101d6d1ac  mov x1,x23
7101d6d1b0  bl 0x71032638e0
7101d6d1b4  tbz w0,#0x0,0x7101d6d3ac
7101d6d1b8  ldr x8,[x21, #0x28]
7101d6d1bc  mov w22,#0x6500
7101d6d1c0  movk w22,#0x87, LSL #16
7101d6d1c4  cbz x8,0x7101d6d8e4
7101d6d1c8  mov w8,#0x150
7101d6d1cc  madd x8,x26,x8,x27
7101d6d1d0  ldrb w8,[x8, #0x3c]
7101d6d1d4  ldr x10,[x21, #0x20]!
7101d6d1d8  cbz x10,0x7101d6d8e4
7101d6d1dc  orr w9,w8,#0x7000
7101d6d1e0  mov x8,x21
7101d6d1e4  ldr w11,[x10, #0x20]
7101d6d1e8  cmp w11,w9
7101d6d1ec  cset w11,cc
7101d6d1f0  csel x8,x8,x10,cc
7101d6d1f4  ldr x10,[x10, w11, UXTW #0x3]
7101d6d1f8  cbnz x10,0x7101d6d1e4
7101d6d1fc  cmp x8,x21
7101d6d200  b.eq 0x7101d6d8e4
7101d6d204  ldr w10,[x8, #0x20]
7101d6d208  cmp w9,w10
7101d6d20c  b.cc 0x7101d6d8e4
7101d6d210  ldr w23,[x8, #0x30]
7101d6d214  cmn w23,#0x1
7101d6d218  b.eq 0x7101d6d8e4
7101d6d21c  add x21,x8,#0x28
7101d6d220  ldr x24,[x21]
7101d6d224  cbz x24,0x7101d6d8e4
7101d6d228  ldrb w8,[x24, #0x58]
7101d6d22c  cbz w8,0x7101d6d8d8
7101d6d230  ldr w8,[x24]
7101d6d234  cmp w8,w23
7101d6d238  b.ne 0x7101d6d8e4
7101d6d23c  ldr x8,[x21]
7101d6d240  ldr x8,[x8, #0x30]
7101d6d244  ldr x8,[x8, #0x8]
7101d6d248  cbz x8,0x7101d6d8e4
7101d6d24c  mov w9,#0x150
7101d6d250  madd x9,x26,x9,x27
7101d6d254  ldr x9,[x9, #0x8]
7101d6d258  and x9,x9,#0xffffffffff
7101d6d25c  str x9,[sp, #0x30]
7101d6d260  ldr w2,[x8, #0x4]
7101d6d264  add x1,x8,#0x8
7101d6d268  adrp x4,0x7103741000
7101d6d26c  add x4,x4,#0x6f0
7101d6d270  add x0,sp,#0x30
7101d6d274  mov w3,#0x8
7101d6d278  bl 0x71039c2630
7101d6d27c  cbz x0,0x7101d6d8e4
7101d6d280  ldr x8,[x0]
7101d6d284  add x0,sp,#0x30
7101d6d288  lsr x2,x8,#0x28
7101d6d28c  mov x1,x21
7101d6d290  bl 0x7103738770
7101d6d294  b 0x7101d6d908
7101d6d298  mov w8,#0x150
7101d6d29c  madd x22,x26,x8,x27
7101d6d2a0  ldr x2,[x22, #0x8]
7101d6d2a4  add x0,sp,#0x30
7101d6d2a8  mov x1,x21
7101d6d2ac  bl 0x7102401d90
7101d6d2b0  ldr w21,[x22, #0x38]
7101d6d2b4  cbz w21,0x7101d6d37c
7101d6d2b8  ldr w8,[sp, #0x58]
7101d6d2bc  cmn w8,#0x1
7101d6d2c0  b.ne 0x7101d6d2d0
7101d6d2c4  ldr w8,[sp, #0x5c]
7101d6d2c8  cmn w8,#0x1
7101d6d2cc  b.eq 0x7101d6d37c
7101d6d2d0  ldr x0,[sp, #0x40]
7101d6d2d4  cbz x0,0x7101d6d37c
7101d6d2d8  ldr x8,[x0]
7101d6d2dc  ldr x8,[x8, #0x20]
7101d6d2e0  blr x8
7101d6d2e4  fmov s8,wzr
7101d6d2e8  tbnz w0,#0x0,0x7101d6d304
7101d6d2ec  adrp x8,0x710593b000
7101d6d2f0  ldr x8,[x8, #0x438]
7101d6d2f4  ldr x8,[x8]
7101d6d2f8  ldrb w8,[x8, #0x1]
7101d6d2fc  cbz w8,0x7101d6d304
7101d6d300  ldr s8,[sp, #0x60]
7101d6d304  ldr x0,[sp, #0x40]
7101d6d308  cbz x0,0x7101d6d37c
7101d6d30c  ldr x8,[x0]
7101d6d310  ldr x8,[x8, #0x20]
7101d6d314  blr x8
7101d6d318  tbnz w0,#0x0,0x7101d6d37c
7101d6d31c  adrp x8,0x710593b000
7101d6d320  ldr x8,[x8, #0x438]
7101d6d324  ldr x8,[x8]
7101d6d328  ldrb w8,[x8, #0x1]
7101d6d32c  cbz w8,0x7101d6d37c
7101d6d330  scvtf s0,w21
7101d6d334  fadd s8,s8,s0
7101d6d338  ldr w8,[sp, #0x4c]
7101d6d33c  mov w9,#0x6500
7101d6d340  movk w9,#0x87, LSL #16
7101d6d344  cmp w8,w9
7101d6d348  b.ne 0x7101d6d378
7101d6d34c  adrp x8,0x7106dd5000
7101d6d350  ldrb w8,[x8, #0x3a8]
7101d6d354  cmp w8,#0x1
7101d6d358  b.ne 0x7101d6d378
7101d6d35c  adrp x9,0x7106dd5000
7101d6d360  ldr w8,[sp, #0x48]
7101d6d364  ldr w9,[x9, #0x3ac]
7101d6d368  cmp w8,w9
7101d6d36c  b.ne 0x7101d6d378
7101d6d370  ldrb w8,[sp, #0x50]
7101d6d374  cbz w8,0x7101d6ddf4
7101d6d378  str s8,[sp, #0x60]
7101d6d37c  ldr w22,[sp, #0x30]
7101d6d380  ldr x8,[sp, #0x40]
7101d6d384  cbz x8,0x7101d6d580
7101d6d388  adrp x9,0x7106dd5000
7101d6d38c  ldr w9,[x9, #0x3ac]
7101d6d390  add x10,x8,#0x38
7101d6d394  ldaxr w11,[x10]
7101d6d398  add w11,w11,#0x1
7101d6d39c  stlxr w12,w11,[x10]
7101d6d3a0  cbnz w12,0x7101d6d394
7101d6d3a4  ldr x10,[sp, #0x40]
7101d6d3a8  b 0x7101d6d588
7101d6d3ac  ldrb w8,[x21, #0x9b]
7101d6d3b0  cbz w8,0x7101d6d5e4
7101d6d3b4  str xzr,[sp, #0x20]
7101d6d3b8  sturb wzr,[x29, #-0x68]
7101d6d3bc  ldr x8,[x21, #0x28]
7101d6d3c0  cbz x8,0x7101d6d760
7101d6d3c4  mov x8,x21
7101d6d3c8  ldr x9,[x8, #0x20]!
7101d6d3cc  str x8,[sp, #0x10]
7101d6d3d0  cbz x9,0x7101d6da88
7101d6d3d4  ldr x8,[sp, #0x10]
7101d6d3d8  orr w10,wzr,#0x7fff
7101d6d3dc  ldr w11,[x9, #0x20]
7101d6d3e0  cmp w11,w10
7101d6d3e4  cset w11,cc
7101d6d3e8  csel x8,x8,x9,cc
7101d6d3ec  ldr x9,[x9, w11, UXTW #0x3]
7101d6d3f0  cbnz x9,0x7101d6d3dc
7101d6d3f4  ldr x9,[sp, #0x10]
7101d6d3f8  cmp x8,x9
7101d6d3fc  b.eq 0x7101d6da88
7101d6d400  ldr w9,[x8, #0x20]
7101d6d404  lsr w9,w9,#0xf
7101d6d408  cbnz w9,0x7101d6da88
7101d6d40c  ldr w23,[x8, #0x30]
7101d6d410  cmn w23,#0x1
7101d6d414  b.eq 0x7101d6da88
7101d6d418  add x22,x8,#0x28
7101d6d41c  ldr x24,[x22]
7101d6d420  cbz x24,0x7101d6da88
7101d6d424  ldrb w8,[x24, #0x58]
7101d6d428  cbz w8,0x7101d6da7c
7101d6d42c  ldr w8,[x24]
7101d6d430  cmp w8,w23
7101d6d434  b.ne 0x7101d6da88
7101d6d438  ldr x8,[x22]
7101d6d43c  ldr x8,[x8, #0x30]
7101d6d440  ldr x8,[x8, #0x8]
7101d6d444  cbz x8,0x7101d6da88
7101d6d448  mov w9,#0x150
7101d6d44c  madd x9,x26,x9,x27
7101d6d450  ldr x9,[x9, #0x8]
7101d6d454  and x9,x9,#0xffffffffff
7101d6d458  str x9,[sp, #0x30]
7101d6d45c  ldr w2,[x8, #0x4]
7101d6d460  add x1,x8,#0x8
7101d6d464  adrp x4,0x7103741000
7101d6d468  add x4,x4,#0x6f0
7101d6d46c  add x0,sp,#0x30
7101d6d470  mov w3,#0x8
7101d6d474  bl 0x71039c2630
7101d6d478  cbz x0,0x7101d6da88
7101d6d47c  ldr x8,[x0]
7101d6d480  add x0,sp,#0x30
7101d6d484  lsr x2,x8,#0x28
7101d6d488  mov x1,x22
7101d6d48c  bl 0x7103738770
7101d6d490  ldr w22,[sp, #0x30]
7101d6d494  ldr x8,[sp, #0x40]
7101d6d498  cbz x8,0x7101d6dab8
7101d6d49c  adrp x9,0x7106dd5000
7101d6d4a0  ldr w9,[x9, #0x3ac]
7101d6d4a4  str w9,[sp, #0xc]
7101d6d4a8  cbnz w9,0x7101d6d4e4
7101d6d4ac  ldr x9,[sp, #0x20]
7101d6d4b0  cbz x9,0x7101d6d4d8
7101d6d4b4  adrp x10,0x7106dd5000
7101d6d4b8  ldrb w10,[x10, #0x3a8]
7101d6d4bc  cmp w10,#0x1
7101d6d4c0  b.ne 0x7101d6d4d8
7101d6d4c4  ldr wzr,[x9, #0x38]!
7101d6d4c8  ldaxr w10,[x9]
7101d6d4cc  sub w10,w10,#0x1
7101d6d4d0  stlxr w11,w10,[x9]
7101d6d4d4  cbnz w11,0x7101d6d4c8
7101d6d4d8  str wzr,[sp, #0xc]
7101d6d4dc  str xzr,[sp, #0x20]
7101d6d4e0  sturb wzr,[x29, #-0x68]
7101d6d4e4  str x8,[sp, #0x20]
7101d6d4e8  add x8,x8,#0x38
7101d6d4ec  ldaxr w9,[x8]
7101d6d4f0  add w9,w9,#0x1
7101d6d4f4  stlxr w10,w9,[x8]
7101d6d4f8  cbnz w10,0x7101d6d4ec
7101d6d4fc  b 0x7101d6daf8
7101d6d500  ldr x0,[x24, #0x10]
7101d6d504  cbz x0,0x7101d6cea8
7101d6d508  ldr x8,[x0]
7101d6d50c  ldr x8,[x8, #0x20]
7101d6d510  blr x8
7101d6d514  tbz w0,#0x0,0x7101d6cd58
7101d6d518  b 0x7101d6cea8
7101d6d51c  mov x10,xzr
7101d6d520  mov w9,wzr
7101d6d524  ldp s8,s0,[sp, #0x60]
7101d6d528  ldr s1,[sp, #0x68]
7101d6d52c  ldp w25,w23,[sp, #0x58]
7101d6d530  adrp x11,0x7104f73000
7101d6d534  add x11,x11,#0xd50
7101d6d538  ldr w24,[sp, #0x6c]
7101d6d53c  str x11,[sp, #0x38]
7101d6d540  cbz x10,0x7101d6da68
7101d6d544  adrp x11,0x7106dd5000
7101d6d548  ldrb w11,[x11, #0x3a8]
7101d6d54c  cmp w11,#0x1
7101d6d550  b.ne 0x7101d6da68
7101d6d554  adrp x12,0x7106dd5000
7101d6d558  ldr w11,[sp, #0x48]
7101d6d55c  ldr w12,[x12, #0x3ac]
7101d6d560  cmp w11,w12
7101d6d564  b.ne 0x7101d6da68
7101d6d568  ldr wzr,[x10, #0x38]!
7101d6d56c  ldaxr w11,[x10]
7101d6d570  sub w11,w11,#0x1
7101d6d574  stlxr w12,w11,[x10]
7101d6d578  cbnz w12,0x7101d6d56c
7101d6d57c  b 0x7101d6da68
7101d6d580  mov x10,xzr
7101d6d584  mov w9,wzr
7101d6d588  ldp s8,s0,[sp, #0x60]
7101d6d58c  ldr s1,[sp, #0x68]
7101d6d590  ldp w25,w23,[sp, #0x58]
7101d6d594  adrp x11,0x7104f73000
7101d6d598  add x11,x11,#0xd50
7101d6d59c  ldr w24,[sp, #0x6c]
7101d6d5a0  str x11,[sp, #0x38]
7101d6d5a4  cbz x10,0x7101d6da68
7101d6d5a8  adrp x11,0x7106dd5000
7101d6d5ac  ldrb w11,[x11, #0x3a8]
7101d6d5b0  cmp w11,#0x1
7101d6d5b4  b.ne 0x7101d6da68
7101d6d5b8  adrp x12,0x7106dd5000
7101d6d5bc  ldr w11,[sp, #0x48]
7101d6d5c0  ldr w12,[x12, #0x3ac]
7101d6d5c4  cmp w11,w12
7101d6d5c8  b.ne 0x7101d6da68
7101d6d5cc  ldr wzr,[x10, #0x38]!
7101d6d5d0  ldaxr w11,[x10]
7101d6d5d4  sub w11,w11,#0x1
7101d6d5d8  stlxr w12,w11,[x10]
7101d6d5dc  cbnz w12,0x7101d6d5d0
7101d6d5e0  b 0x7101d6da68
7101d6d5e4  orr w9,wzr,#0x7fff
7101d6d5e8  ldr x8,[x21, #0x28]
7101d6d5ec  cbnz x8,0x7101d6c924
7101d6d5f0  b 0x7101d6ce94
7101d6d5f4  mov w8,#0x150
7101d6d5f8  madd x22,x26,x8,x27
7101d6d5fc  ldr x2,[x22, #0x8]
7101d6d600  add x0,sp,#0x30
7101d6d604  mov x1,x21
7101d6d608  bl 0x7102401d90
7101d6d60c  ldr w21,[x22, #0x38]
7101d6d610  cbz w21,0x7101d6d6d8
7101d6d614  ldr w8,[sp, #0x58]
7101d6d618  cmn w8,#0x1
7101d6d61c  b.ne 0x7101d6d62c
7101d6d620  ldr w8,[sp, #0x5c]
7101d6d624  cmn w8,#0x1
7101d6d628  b.eq 0x7101d6d6d8
7101d6d62c  ldr x0,[sp, #0x40]
7101d6d630  cbz x0,0x7101d6d6d8
7101d6d634  ldr x8,[x0]
7101d6d638  ldr x8,[x8, #0x20]
7101d6d63c  blr x8
7101d6d640  fmov s8,wzr
7101d6d644  tbnz w0,#0x0,0x7101d6d660
7101d6d648  adrp x8,0x710593b000
7101d6d64c  ldr x8,[x8, #0x438]
7101d6d650  ldr x8,[x8]
7101d6d654  ldrb w8,[x8, #0x1]
7101d6d658  cbz w8,0x7101d6d660
7101d6d65c  ldr s8,[sp, #0x60]
7101d6d660  ldr x0,[sp, #0x40]
7101d6d664  cbz x0,0x7101d6d6d8
7101d6d668  ldr x8,[x0]
7101d6d66c  ldr x8,[x8, #0x20]
7101d6d670  blr x8
7101d6d674  tbnz w0,#0x0,0x7101d6d6d8
7101d6d678  adrp x8,0x710593b000
7101d6d67c  ldr x8,[x8, #0x438]
7101d6d680  ldr x8,[x8]
7101d6d684  ldrb w8,[x8, #0x1]
7101d6d688  cbz w8,0x7101d6d6d8
7101d6d68c  scvtf s0,w21
7101d6d690  fadd s8,s8,s0
7101d6d694  ldr w8,[sp, #0x4c]
7101d6d698  mov w9,#0x6500
7101d6d69c  movk w9,#0x87, LSL #16
7101d6d6a0  cmp w8,w9
7101d6d6a4  b.ne 0x7101d6d6d4
7101d6d6a8  adrp x8,0x7106dd5000
7101d6d6ac  ldrb w8,[x8, #0x3a8]
7101d6d6b0  cmp w8,#0x1
7101d6d6b4  b.ne 0x7101d6d6d4
7101d6d6b8  adrp x9,0x7106dd5000
7101d6d6bc  ldr w8,[sp, #0x48]
7101d6d6c0  ldr w9,[x9, #0x3ac]
7101d6d6c4  cmp w8,w9
7101d6d6c8  b.ne 0x7101d6d6d4
7101d6d6cc  ldrb w8,[sp, #0x50]
7101d6d6d0  cbz w8,0x7101d6e1bc
7101d6d6d4  str s8,[sp, #0x60]
7101d6d6d8  ldr w22,[sp, #0x30]
7101d6d6dc  ldr x8,[sp, #0x40]
7101d6d6e0  cbz x8,0x7101d6d784
7101d6d6e4  adrp x9,0x7106dd5000
7101d6d6e8  ldr w9,[x9, #0x3ac]
7101d6d6ec  add x10,x8,#0x38
7101d6d6f0  ldaxr w11,[x10]
7101d6d6f4  add w11,w11,#0x1
7101d6d6f8  stlxr w12,w11,[x10]
7101d6d6fc  cbnz w12,0x7101d6d6f0
7101d6d700  ldr x10,[sp, #0x40]
7101d6d704  b 0x7101d6d78c
7101d6d708  ldr x0,[sp, #0x40]
7101d6d70c  cbz x0,0x7101d6cc18
7101d6d710  ldr x8,[x0]
7101d6d714  ldp s9,s10,[sp, #0x64]
7101d6d718  ldr x8,[x8, #0x20]
7101d6d71c  blr x8
7101d6d720  tbnz w0,#0x0,0x7101d6cc18
7101d6d724  adrp x21,0x7106dd5000
7101d6d728  ldr x0,[x21, #0x100]
7101d6d72c  ldr x22,[sp, #0x40]
7101d6d730  bl 0x71039c1a40
7101d6d734  adrp x8,0x7106dd5000
7101d6d738  ldr x8,[x8, #0x408]
7101d6d73c  ldr w10,[x8, #0x18]
7101d6d740  ldr w9,[x8, #0x14]
7101d6d744  add w11,w9,#0x20
7101d6d748  add x11,x11,#0x8
7101d6d74c  cmp w9,w10
7101d6d750  b.cs 0x7101d6d7e8
7101d6d754  cmp x11,x10
7101d6d758  b.cc 0x7101d6d810
7101d6d75c  b 0x7101d6d874
7101d6d760  fmov s8,wzr
7101d6d764  mov w23,#0xffffffff
7101d6d768  mov w24,wzr
7101d6d76c  str wzr,[sp, #0xc]
7101d6d770  mov w22,wzr
7101d6d774  str s8,[sp, #0x18]
7101d6d778  stur s8,[x29, #-0x64]
7101d6d77c  mov w25,w23
7101d6d780  b 0x7101d6df90
7101d6d784  mov x10,xzr
7101d6d788  mov w9,wzr
7101d6d78c  ldp s8,s0,[sp, #0x60]
7101d6d790  ldr s1,[sp, #0x68]
7101d6d794  ldp w25,w23,[sp, #0x58]
7101d6d798  adrp x11,0x7104f73000
7101d6d79c  add x11,x11,#0xd50
7101d6d7a0  ldr w24,[sp, #0x6c]
7101d6d7a4  str x11,[sp, #0x38]
7101d6d7a8  cbz x10,0x7101d6da68
7101d6d7ac  adrp x11,0x7106dd5000
7101d6d7b0  ldrb w11,[x11, #0x3a8]
7101d6d7b4  cmp w11,#0x1
7101d6d7b8  b.ne 0x7101d6da68
7101d6d7bc  adrp x12,0x7106dd5000
7101d6d7c0  ldr w11,[sp, #0x48]
7101d6d7c4  ldr w12,[x12, #0x3ac]
7101d6d7c8  cmp w11,w12
7101d6d7cc  b.ne 0x7101d6da68
7101d6d7d0  ldr wzr,[x10, #0x38]!
7101d6d7d4  ldaxr w11,[x10]
7101d6d7d8  sub w11,w11,#0x1
7101d6d7dc  stlxr w12,w11,[x10]
7101d6d7e0  cbnz w12,0x7101d6d7d4
7101d6d7e4  b 0x7101d6da68
7101d6d7e8  ldr w12,[x8, #0x10]
7101d6d7ec  cmp x11,x12
7101d6d7f0  b.ls 0x7101d6d810
7101d6d7f4  cmp w10,#0x29
7101d6d7f8  b.cc 0x7101d6d874
7101d6d7fc  ldr x10,[x8, #0x8]
7101d6d800  mov w11,#0x6e62
7101d6d804  movk w11,#0x6471, LSL #16
7101d6d808  str w11,[x10, x9, LSL #0x0]
7101d6d80c  mov w9,wzr
7101d6d810  fadd s0,s9,s8
7101d6d814  ldr x10,[x8, #0x8]
7101d6d818  add x10,x10,w9, UXTW 
7101d6d81c  mov x11,#0x6e62
7101d6d820  movk x11,#0x7071, LSL #16
7101d6d824  movk x11,#0x20, LSL #32
7101d6d828  str x22,[x10, #0x10]
7101d6d82c  fadd s0,s0,s10
7101d6d830  mov x12,#0x6f76
7101d6d834  movk x12,#0x756c, LSL #16
7101d6d838  movk x12,#0x8, LSL #32
7101d6d83c  str wzr,[x10, #0x24]
7101d6d840  stp x11,x12,[x10]
7101d6d844  add w9,w9,#0x28
7101d6d848  str s0,[x10, #0x20]
7101d6d84c  ldr w10,[x8, #0x10]
7101d6d850  udiv w11,w9,w10
7101d6d854  msub w9,w11,w10,w9
7101d6d858  str w9,[x8, #0x14]
7101d6d85c  cbz x22,0x7101d6d874
7101d6d860  add x8,x22,#0x3c
7101d6d864  ldaxr w9,[x8]
7101d6d868  add w9,w9,#0x1
7101d6d86c  stlxr w10,w9,[x8]
7101d6d870  cbnz w10,0x7101d6d864
7101d6d874  ldr x0,[x21, #0x100]
7101d6d878  bl 0x71039c1a50
7101d6d87c  b 0x7101d6cc18
7101d6d880  ldr x0,[sp, #0x40]
7101d6d884  cbz x0,0x7101d6cf98
7101d6d888  ldr x8,[x0]
7101d6d88c  ldp s9,s10,[sp, #0x64]
7101d6d890  ldr x8,[x8, #0x20]
7101d6d894  blr x8
7101d6d898  tbnz w0,#0x0,0x7101d6cf98
7101d6d89c  adrp x21,0x7106dd5000
7101d6d8a0  ldr x0,[x21, #0x100]
7101d6d8a4  ldr x22,[sp, #0x40]
7101d6d8a8  bl 0x71039c1a40
7101d6d8ac  adrp x8,0x7106dd5000
7101d6d8b0  ldr x8,[x8, #0x408]
7101d6d8b4  ldr w10,[x8, #0x18]
7101d6d8b8  ldr w9,[x8, #0x14]
7101d6d8bc  add w11,w9,#0x20
7101d6d8c0  add x11,x11,#0x8
7101d6d8c4  cmp w9,w10
7101d6d8c8  b.cs 0x7101d6dce8
7101d6d8cc  cmp x11,x10
7101d6d8d0  b.cc 0x7101d6dd10
7101d6d8d4  b 0x7101d6dd74
7101d6d8d8  add x8,x24,#0x4
7101d6d8dc  ldar w8,[x8]
7101d6d8e0  cbz w8,0x7101d6dccc
7101d6d8e4  adrp x8,0x7104f73000
7101d6d8e8  add x8,x8,#0xd30
7101d6d8ec  stp wzr,w22,[sp, #0x48]
7101d6d8f0  stp x8,xzr,[sp, #0x38]
7101d6d8f4  mov x8,#-0x1
7101d6d8f8  strb wzr,[sp, #0x50]
7101d6d8fc  str wzr,[sp, #0x30]
7101d6d900  str xzr,[sp, #0x68]
7101d6d904  stp x8,xzr,[sp, #0x58]
7101d6d908  mov w8,#0x150
7101d6d90c  mul x8,x26,x8
7101d6d910  add x8,x27,x8
7101d6d914  ldr w21,[x8, #0x38]
7101d6d918  cbz w21,0x7101d6d9d8
7101d6d91c  ldr w8,[sp, #0x58]
7101d6d920  cmn w8,#0x1
7101d6d924  b.ne 0x7101d6d934
7101d6d928  ldr w8,[sp, #0x5c]
7101d6d92c  cmn w8,#0x1
7101d6d930  b.eq 0x7101d6d9d8
7101d6d934  ldr x0,[sp, #0x40]
7101d6d938  cbz x0,0x7101d6d9d8
7101d6d93c  ldr x8,[x0]
7101d6d940  ldr x8,[x8, #0x20]
7101d6d944  blr x8
7101d6d948  fmov s8,wzr
7101d6d94c  tbnz w0,#0x0,0x7101d6d968
7101d6d950  adrp x8,0x710593b000
7101d6d954  ldr x8,[x8, #0x438]
7101d6d958  ldr x8,[x8]
7101d6d95c  ldrb w8,[x8, #0x1]
7101d6d960  cbz w8,0x7101d6d968
7101d6d964  ldr s8,[sp, #0x60]
7101d6d968  ldr x0,[sp, #0x40]
7101d6d96c  cbz x0,0x7101d6d9d8
7101d6d970  ldr x8,[x0]
7101d6d974  ldr x8,[x8, #0x20]
7101d6d978  blr x8
7101d6d97c  tbnz w0,#0x0,0x7101d6d9d8
7101d6d980  adrp x8,0x710593b000
7101d6d984  ldr x8,[x8, #0x438]
7101d6d988  ldr x8,[x8]
7101d6d98c  ldrb w8,[x8, #0x1]
7101d6d990  cbz w8,0x7101d6d9d8
7101d6d994  scvtf s0,w21
7101d6d998  fadd s8,s8,s0
7101d6d99c  ldr w8,[sp, #0x4c]
7101d6d9a0  cmp w8,w22
7101d6d9a4  b.ne 0x7101d6d9d4
7101d6d9a8  adrp x8,0x7106dd5000
7101d6d9ac  ldrb w8,[x8, #0x3a8]
7101d6d9b0  cmp w8,#0x1
7101d6d9b4  b.ne 0x7101d6d9d4
7101d6d9b8  adrp x9,0x7106dd5000
7101d6d9bc  ldr w8,[sp, #0x48]
7101d6d9c0  ldr w9,[x9, #0x3ac]
7101d6d9c4  cmp w8,w9
7101d6d9c8  b.ne 0x7101d6d9d4
7101d6d9cc  ldrb w8,[sp, #0x50]
7101d6d9d0  cbz w8,0x7101d6de4c
7101d6d9d4  str s8,[sp, #0x60]
7101d6d9d8  ldr w22,[sp, #0x30]
7101d6d9dc  ldr x8,[sp, #0x40]
7101d6d9e0  cbz x8,0x7101d6da08
7101d6d9e4  adrp x9,0x7106dd5000
7101d6d9e8  ldr w9,[x9, #0x3ac]
7101d6d9ec  add x10,x8,#0x38
7101d6d9f0  ldaxr w11,[x10]
7101d6d9f4  add w11,w11,#0x1
7101d6d9f8  stlxr w12,w11,[x10]
7101d6d9fc  cbnz w12,0x7101d6d9f0
7101d6da00  ldr x10,[sp, #0x40]
7101d6da04  b 0x7101d6da10
7101d6da08  mov x10,xzr
7101d6da0c  mov w9,wzr
7101d6da10  ldp s8,s0,[sp, #0x60]
7101d6da14  ldr s1,[sp, #0x68]
7101d6da18  ldp w25,w23,[sp, #0x58]
7101d6da1c  adrp x11,0x7104f73000
7101d6da20  add x11,x11,#0xd50
7101d6da24  ldr w24,[sp, #0x6c]
7101d6da28  str x11,[sp, #0x38]
7101d6da2c  cbz x10,0x7101d6da68
7101d6da30  adrp x11,0x7106dd5000
7101d6da34  ldrb w11,[x11, #0x3a8]
7101d6da38  cmp w11,#0x1
7101d6da3c  b.ne 0x7101d6da68
7101d6da40  adrp x12,0x7106dd5000
7101d6da44  ldr w11,[sp, #0x48]
7101d6da48  ldr w12,[x12, #0x3ac]
7101d6da4c  cmp w11,w12
7101d6da50  b.ne 0x7101d6da68
7101d6da54  ldr wzr,[x10, #0x38]!
7101d6da58  ldaxr w11,[x10]
7101d6da5c  sub w11,w11,#0x1
7101d6da60  stlxr w12,w11,[x10]
7101d6da64  cbnz w12,0x7101d6da58
7101d6da68  str xzr,[sp, #0x40]
7101d6da6c  strb wzr,[sp, #0x50]
7101d6da70  str w22,[x20, #0x48]
7101d6da74  cbnz x8,0x7101d6c9ec
7101d6da78  b 0x7101d6c984
7101d6da7c  add x8,x24,#0x4
7101d6da80  ldar w8,[x8]
7101d6da84  cbz w8,0x7101d6dd80
7101d6da88  mov w8,#0x6500
7101d6da8c  movk w8,#0x87, LSL #16
7101d6da90  stp wzr,w8,[sp, #0x48]
7101d6da94  adrp x8,0x7104f73000
7101d6da98  add x8,x8,#0xd30
7101d6da9c  mov w22,wzr
7101d6daa0  stp x8,xzr,[sp, #0x38]
7101d6daa4  mov x8,#-0x1
7101d6daa8  strb wzr,[sp, #0x50]
7101d6daac  str wzr,[sp, #0x30]
7101d6dab0  str xzr,[sp, #0x68]
7101d6dab4  stp x8,xzr,[sp, #0x58]
7101d6dab8  ldr x8,[sp, #0x20]
7101d6dabc  cbz x8,0x7101d6daf0
7101d6dac0  adrp x9,0x7106dd5000
7101d6dac4  ldrb w9,[x9, #0x3a8]
7101d6dac8  cmp w9,#0x1
7101d6dacc  b.ne 0x7101d6daf0
7101d6dad0  adrp x9,0x7106dd5000
7101d6dad4  ldr w9,[x9, #0x3ac]
7101d6dad8  cbnz w9,0x7101d6daf0
7101d6dadc  ldr wzr,[x8, #0x38]!
7101d6dae0  ldaxr w9,[x8]
7101d6dae4  sub w9,w9,#0x1
7101d6dae8  stlxr w10,w9,[x8]
7101d6daec  cbnz w10,0x7101d6dae0
7101d6daf0  str wzr,[sp, #0xc]
7101d6daf4  str xzr,[sp, #0x20]
7101d6daf8  ldp s8,s0,[sp, #0x60]
7101d6dafc  ldr w24,[sp, #0x6c]
7101d6db00  ldp w25,w23,[sp, #0x58]
7101d6db04  adrp x9,0x7104f73000
7101d6db08  add x9,x9,#0xd50
7101d6db0c  str x9,[sp, #0x38]
7101d6db10  str s0,[sp, #0x18]
7101d6db14  ldr s0,[sp, #0x68]
7101d6db18  ldr x8,[sp, #0x40]
7101d6db1c  sturb wzr,[x29, #-0x68]
7101d6db20  stur s0,[x29, #-0x64]
7101d6db24  cbz x8,0x7101d6db60
7101d6db28  adrp x9,0x7106dd5000
7101d6db2c  ldrb w9,[x9, #0x3a8]
7101d6db30  cmp w9,#0x1
7101d6db34  b.ne 0x7101d6db60
7101d6db38  adrp x10,0x7106dd5000
7101d6db3c  ldr w9,[sp, #0x48]
7101d6db40  ldr w10,[x10, #0x3ac]
7101d6db44  cmp w9,w10
7101d6db48  b.ne 0x7101d6db60
7101d6db4c  ldr wzr,[x8, #0x38]!
7101d6db50  ldaxr w9,[x8]
7101d6db54  sub w9,w9,#0x1
7101d6db58  stlxr w10,w9,[x8]
7101d6db5c  cbnz w10,0x7101d6db50
7101d6db60  cmn w25,#0x1
7101d6db64  str xzr,[sp, #0x40]
7101d6db68  b.ne 0x7101d6df90
7101d6db6c  cmn w23,#0x1
7101d6db70  b.eq 0x7101d6db7c
7101d6db74  mov w25,#0xffffffff
7101d6db78  b 0x7101d6df90
7101d6db7c  ldr x8,[x28, #0x730]
7101d6db80  ldr x8,[x8, #0x8]
7101d6db84  ldr x1,[x21, #0x90]
7101d6db88  ldr x0,[x8, #0x168]
7101d6db8c  bl 0x71032626e0
7101d6db90  ldr x10,[x21, #0x20]
7101d6db94  cbz x10,0x7101d6deb0
7101d6db98  ldr x8,[sp, #0x10]
7101d6db9c  add w9,w0,#0x7, LSL #12
7101d6dba0  ldr w11,[x10, #0x20]
7101d6dba4  cmp w11,w9
7101d6dba8  cset w11,cc
7101d6dbac  csel x8,x8,x10,cc
7101d6dbb0  ldr x10,[x10, w11, UXTW #0x3]
7101d6dbb4  cbnz x10,0x7101d6dba0
7101d6dbb8  ldr x10,[sp, #0x10]
7101d6dbbc  cmp x8,x10
7101d6dbc0  b.eq 0x7101d6deb0
7101d6dbc4  ldr w10,[x8, #0x20]
7101d6dbc8  cmp w10,w9
7101d6dbcc  b.hi 0x7101d6deb0
7101d6dbd0  ldr w22,[x8, #0x30]
7101d6dbd4  cmn w22,#0x1
7101d6dbd8  b.eq 0x7101d6deb0
7101d6dbdc  add x21,x8,#0x28
7101d6dbe0  ldr x23,[x21]
7101d6dbe4  cbz x23,0x7101d6deb0
7101d6dbe8  ldrb w8,[x23, #0x58]
7101d6dbec  cbz w8,0x7101d6dea4
7101d6dbf0  ldr w8,[x23]
7101d6dbf4  cmp w8,w22
7101d6dbf8  b.ne 0x7101d6deb0
7101d6dbfc  ldr x8,[x21]
7101d6dc00  ldr x8,[x8, #0x30]
7101d6dc04  ldr x8,[x8, #0x8]
7101d6dc08  cbz x8,0x7101d6deb0
7101d6dc0c  mov w9,#0x150
7101d6dc10  madd x9,x26,x9,x27
7101d6dc14  ldr x9,[x9, #0x8]
7101d6dc18  and x9,x9,#0xffffffffff
7101d6dc1c  str x9,[sp, #0x30]
7101d6dc20  ldr w2,[x8, #0x4]
7101d6dc24  add x1,x8,#0x8
7101d6dc28  adrp x4,0x7103741000
7101d6dc2c  add x4,x4,#0x6f0
7101d6dc30  add x0,sp,#0x30
7101d6dc34  mov w3,#0x8
7101d6dc38  bl 0x71039c2630
7101d6dc3c  cbz x0,0x7101d6deb0
7101d6dc40  ldr x8,[x0]
7101d6dc44  add x0,sp,#0x30
7101d6dc48  lsr x2,x8,#0x28
7101d6dc4c  mov x1,x21
7101d6dc50  bl 0x7103738770
7101d6dc54  ldr w22,[sp, #0x30]
7101d6dc58  ldr x8,[sp, #0x40]
7101d6dc5c  cbz x8,0x7101d6dee0
7101d6dc60  adrp x9,0x7106dd5000
7101d6dc64  ldr w9,[x9, #0x3ac]
7101d6dc68  ldr w10,[sp, #0xc]
7101d6dc6c  cmp w10,w9
7101d6dc70  b.ne 0x7101d6dcac
7101d6dc74  ldr x9,[sp, #0x20]
7101d6dc78  cbz x9,0x7101d6dca0
7101d6dc7c  adrp x10,0x7106dd5000
7101d6dc80  ldrb w10,[x10, #0x3a8]
7101d6dc84  cmp w10,#0x1
7101d6dc88  b.ne 0x7101d6dca0
7101d6dc8c  ldr wzr,[x9, #0x38]!
7101d6dc90  ldaxr w10,[x9]
7101d6dc94  sub w10,w10,#0x1
7101d6dc98  stlxr w11,w10,[x9]
7101d6dc9c  cbnz w11,0x7101d6dc90
7101d6dca0  ldr w9,[sp, #0xc]
7101d6dca4  str xzr,[sp, #0x20]
7101d6dca8  sturb wzr,[x29, #-0x68]
7101d6dcac  str x8,[sp, #0x20]
7101d6dcb0  add x8,x8,#0x38
7101d6dcb4  ldaxr w10,[x8]
7101d6dcb8  add w10,w10,#0x1
7101d6dcbc  stlxr w11,w10,[x8]
7101d6dcc0  cbnz w11,0x7101d6dcb4
7101d6dcc4  str w9,[sp, #0xc]
7101d6dcc8  b 0x7101d6df24
7101d6dccc  ldr x0,[x24, #0x10]
7101d6dcd0  cbz x0,0x7101d6d8e4
7101d6dcd4  ldr x8,[x0]
7101d6dcd8  ldr x8,[x8, #0x20]
7101d6dcdc  blr x8
7101d6dce0  tbz w0,#0x0,0x7101d6d230
7101d6dce4  b 0x7101d6d8e4
7101d6dce8  ldr w12,[x8, #0x10]
7101d6dcec  cmp x11,x12
7101d6dcf0  b.ls 0x7101d6dd10
7101d6dcf4  cmp w10,#0x29
7101d6dcf8  b.cc 0x7101d6dd74
7101d6dcfc  ldr x10,[x8, #0x8]
7101d6dd00  mov w11,#0x6e62
7101d6dd04  movk w11,#0x6471, LSL #16
7101d6dd08  str w11,[x10, x9, LSL #0x0]
7101d6dd0c  mov w9,wzr
7101d6dd10  fadd s0,s9,s8
7101d6dd14  ldr x10,[x8, #0x8]
7101d6dd18  add x10,x10,w9, UXTW 
7101d6dd1c  mov x11,#0x6e62
7101d6dd20  movk x11,#0x7071, LSL #16
7101d6dd24  movk x11,#0x20, LSL #32
7101d6dd28  str x22,[x10, #0x10]
7101d6dd2c  fadd s0,s0,s10
7101d6dd30  mov x12,#0x6f76
7101d6dd34  movk x12,#0x756c, LSL #16
7101d6dd38  movk x12,#0x8, LSL #32
7101d6dd3c  str wzr,[x10, #0x24]
7101d6dd40  stp x11,x12,[x10]
7101d6dd44  add w9,w9,#0x28
7101d6dd48  str s0,[x10, #0x20]
7101d6dd4c  ldr w10,[x8, #0x10]
7101d6dd50  udiv w11,w9,w10
7101d6dd54  msub w9,w11,w10,w9
7101d6dd58  str w9,[x8, #0x14]
7101d6dd5c  cbz x22,0x7101d6dd74
7101d6dd60  add x8,x22,#0x3c
7101d6dd64  ldaxr w9,[x8]
7101d6dd68  add w9,w9,#0x1
7101d6dd6c  stlxr w10,w9,[x8]
7101d6dd70  cbnz w10,0x7101d6dd64
7101d6dd74  ldr x0,[x21, #0x100]
7101d6dd78  bl 0x71039c1a50
7101d6dd7c  b 0x7101d6cf98
7101d6dd80  ldr x0,[x24, #0x10]
7101d6dd84  cbz x0,0x7101d6da88
7101d6dd88  ldr x8,[x0]
7101d6dd8c  ldr x8,[x8, #0x20]
7101d6dd90  blr x8
7101d6dd94  tbz w0,#0x0,0x7101d6d42c
7101d6dd98  b 0x7101d6da88
7101d6dd9c  ldr x0,[sp, #0x40]
7101d6dda0  cbz x0,0x7101d6d118
7101d6dda4  ldr x8,[x0]
7101d6dda8  ldp s9,s10,[sp, #0x64]
7101d6ddac  ldr x8,[x8, #0x20]
7101d6ddb0  blr x8
7101d6ddb4  tbnz w0,#0x0,0x7101d6d118
7101d6ddb8  adrp x21,0x7106dd5000
7101d6ddbc  ldr x0,[x21, #0x100]
7101d6ddc0  ldr x22,[sp, #0x40]
7101d6ddc4  bl 0x71039c1a40
7101d6ddc8  adrp x8,0x7106dd5000
7101d6ddcc  ldr x8,[x8, #0x408]
7101d6ddd0  ldr w10,[x8, #0x18]
7101d6ddd4  ldr w9,[x8, #0x14]
7101d6ddd8  add w11,w9,#0x20
7101d6dddc  add x11,x11,#0x8
7101d6dde0  cmp w9,w10
7101d6dde4  b.cs 0x7101d6e214
7101d6dde8  cmp x11,x10
7101d6ddec  b.cc 0x7101d6e23c
7101d6ddf0  b 0x7101d6e2a0
7101d6ddf4  ldr x0,[sp, #0x40]
7101d6ddf8  cbz x0,0x7101d6d378
7101d6ddfc  ldr x8,[x0]
7101d6de00  ldp s9,s10,[sp, #0x64]
7101d6de04  ldr x8,[x8, #0x20]
7101d6de08  blr x8
7101d6de0c  tbnz w0,#0x0,0x7101d6d378
7101d6de10  adrp x21,0x7106dd5000
7101d6de14  ldr x0,[x21, #0x100]
7101d6de18  ldr x22,[sp, #0x40]
7101d6de1c  bl 0x71039c1a40
7101d6de20  adrp x8,0x7106dd5000
7101d6de24  ldr x8,[x8, #0x408]
7101d6de28  ldr w10,[x8, #0x18]
7101d6de2c  ldr w9,[x8, #0x14]
7101d6de30  add w11,w9,#0x20
7101d6de34  add x11,x11,#0x8
7101d6de38  cmp w9,w10
7101d6de3c  b.cs 0x7101d6e2c8
7101d6de40  cmp x11,x10
7101d6de44  b.cc 0x7101d6e2f0
7101d6de48  b 0x7101d6e354
7101d6de4c  ldr x0,[sp, #0x40]
7101d6de50  cbz x0,0x7101d6d9d4
7101d6de54  ldr x8,[x0]
7101d6de58  ldp s9,s10,[sp, #0x64]
7101d6de5c  ldr x8,[x8, #0x20]
7101d6de60  blr x8
7101d6de64  tbnz w0,#0x0,0x7101d6d9d4
7101d6de68  adrp x21,0x7106dd5000
7101d6de6c  ldr x0,[x21, #0x100]
7101d6de70  ldr x22,[sp, #0x40]
7101d6de74  bl 0x71039c1a40
7101d6de78  adrp x8,0x7106dd5000
7101d6de7c  ldr x8,[x8, #0x408]
7101d6de80  ldr w10,[x8, #0x18]
7101d6de84  ldr w9,[x8, #0x14]
7101d6de88  add w11,w9,#0x20
7101d6de8c  add x11,x11,#0x8
7101d6de90  cmp w9,w10
7101d6de94  b.cs 0x7101d6e360
7101d6de98  cmp x11,x10
7101d6de9c  b.cc 0x7101d6e388
7101d6dea0  b 0x7101d6e3ec
7101d6dea4  add x8,x23,#0x4
7101d6dea8  ldar w8,[x8]
7101d6deac  cbz w8,0x7101d6e2ac
7101d6deb0  mov w8,#0x6500
7101d6deb4  movk w8,#0x87, LSL #16
7101d6deb8  stp wzr,w8,[sp, #0x48]
7101d6debc  adrp x8,0x7104f73000
7101d6dec0  add x8,x8,#0xd30
7101d6dec4  mov w22,wzr
7101d6dec8  stp x8,xzr,[sp, #0x38]
7101d6decc  mov x8,#-0x1
7101d6ded0  strb wzr,[sp, #0x50]
7101d6ded4  str wzr,[sp, #0x30]
7101d6ded8  str xzr,[sp, #0x68]
7101d6dedc  stp x8,xzr,[sp, #0x58]
7101d6dee0  ldr x8,[sp, #0x20]
7101d6dee4  cbz x8,0x7101d6df20
7101d6dee8  adrp x9,0x7106dd5000
7101d6deec  ldrb w9,[x9, #0x3a8]
7101d6def0  cmp w9,#0x1
7101d6def4  b.ne 0x7101d6df20
7101d6def8  adrp x9,0x7106dd5000
7101d6defc  ldr w9,[x9, #0x3ac]
7101d6df00  ldr w10,[sp, #0xc]
7101d6df04  cmp w10,w9
7101d6df08  b.ne 0x7101d6df20
7101d6df0c  ldr wzr,[x8, #0x38]!
7101d6df10  ldaxr w9,[x8]
7101d6df14  sub w9,w9,#0x1
7101d6df18  stlxr w10,w9,[x8]
7101d6df1c  cbnz w10,0x7101d6df10
7101d6df20  str xzr,[sp, #0x20]
7101d6df24  ldp s8,s0,[sp, #0x60]
7101d6df28  ldr w24,[sp, #0x6c]
7101d6df2c  ldp w25,w23,[sp, #0x58]
7101d6df30  adrp x9,0x7104f73000
7101d6df34  add x9,x9,#0xd50
7101d6df38  str x9,[sp, #0x38]
7101d6df3c  str s0,[sp, #0x18]
7101d6df40  ldr s0,[sp, #0x68]
7101d6df44  ldr x8,[sp, #0x40]
7101d6df48  sturb wzr,[x29, #-0x68]
7101d6df4c  stur s0,[x29, #-0x64]
7101d6df50  cbz x8,0x7101d6df8c
7101d6df54  adrp x9,0x7106dd5000
7101d6df58  ldrb w9,[x9, #0x3a8]
7101d6df5c  cmp w9,#0x1
7101d6df60  b.ne 0x7101d6df8c
7101d6df64  adrp x10,0x7106dd5000
7101d6df68  ldr w9,[sp, #0x48]
7101d6df6c  ldr w10,[x10, #0x3ac]
7101d6df70  cmp w9,w10
7101d6df74  b.ne 0x7101d6df8c
7101d6df78  ldr wzr,[x8, #0x38]!
7101d6df7c  ldaxr w9,[x8]
7101d6df80  sub w9,w9,#0x1
7101d6df84  stlxr w10,w9,[x8]
7101d6df88  cbnz w10,0x7101d6df7c
7101d6df8c  str xzr,[sp, #0x40]
7101d6df90  mov w8,#0x150
7101d6df94  mul x8,x26,x8
7101d6df98  add x8,x27,x8
7101d6df9c  ldr w21,[x8, #0x38]
7101d6dfa0  and w8,w25,w23
7101d6dfa4  cmp w21,#0x0
7101d6dfa8  ccmn w8,#0x1,#0x4,ne
7101d6dfac  b.eq 0x7101d6e138
7101d6dfb0  ldr x0,[sp, #0x20]
7101d6dfb4  fmov s9,wzr
7101d6dfb8  cbz x0,0x7101d6dfe8
7101d6dfbc  ldr x8,[x0]
7101d6dfc0  ldr x8,[x8, #0x20]
7101d6dfc4  blr x8
7101d6dfc8  tbnz w0,#0x0,0x7101d6dfe8
7101d6dfcc  adrp x8,0x710593b000
7101d6dfd0  ldr x8,[x8, #0x438]
7101d6dfd4  ldr x8,[x8]
7101d6dfd8  ldrb w8,[x8, #0x1]
7101d6dfdc  fmov s0,wzr
7101d6dfe0  cmp w8,#0x0
7101d6dfe4  fcsel s9,s0,s8,eq
7101d6dfe8  ldr x0,[sp, #0x20]
7101d6dfec  cbz x0,0x7101d6e138
7101d6dff0  ldr x8,[x0]
7101d6dff4  ldr x8,[x8, #0x20]
7101d6dff8  blr x8
7101d6dffc  tbnz w0,#0x0,0x7101d6e138
7101d6e000  adrp x8,0x710593b000
7101d6e004  ldr x8,[x8, #0x438]
7101d6e008  ldr x8,[x8]
7101d6e00c  ldrb w8,[x8, #0x1]
7101d6e010  cbz w8,0x7101d6e138
7101d6e014  scvtf s0,w21
7101d6e018  adrp x8,0x7106dd5000
7101d6e01c  ldrb w8,[x8, #0x3a8]
7101d6e020  cmp w8,#0x1
7101d6e024  fadd s8,s9,s0
7101d6e028  b.ne 0x7101d6e138
7101d6e02c  adrp x8,0x7106dd5000
7101d6e030  ldr w8,[x8, #0x3ac]
7101d6e034  ldr w9,[sp, #0xc]
7101d6e038  cmp w9,w8
7101d6e03c  b.ne 0x7101d6e138
7101d6e040  ldurb w8,[x29, #-0x68]
7101d6e044  cbnz w8,0x7101d6e138
7101d6e048  ldr x0,[sp, #0x20]
7101d6e04c  cbz x0,0x7101d6e138
7101d6e050  ldr x8,[x0]
7101d6e054  ldr x8,[x8, #0x20]
7101d6e058  blr x8
7101d6e05c  tbnz w0,#0x0,0x7101d6e138
7101d6e060  adrp x21,0x7106dd5000
7101d6e064  ldr x0,[x21, #0x100]
7101d6e068  ldr x26,[sp, #0x20]
7101d6e06c  bl 0x71039c1a40
7101d6e070  adrp x8,0x7106dd5000
7101d6e074  ldr x8,[x8, #0x408]
7101d6e078  ldr w10,[x8, #0x18]
7101d6e07c  ldr w9,[x8, #0x14]
7101d6e080  add w11,w9,#0x20
7101d6e084  add x11,x11,#0x8
7101d6e088  cmp w9,w10
7101d6e08c  b.cs 0x7101d6e09c
7101d6e090  cmp x11,x10
7101d6e094  b.cc 0x7101d6e0c4
7101d6e098  b 0x7101d6e130
7101d6e09c  ldr w12,[x8, #0x10]
7101d6e0a0  cmp x11,x12
7101d6e0a4  b.ls 0x7101d6e0c4
7101d6e0a8  cmp w10,#0x29
7101d6e0ac  b.cc 0x7101d6e130
7101d6e0b0  ldr x10,[x8, #0x8]
7101d6e0b4  mov w11,#0x6e62
7101d6e0b8  movk w11,#0x6471, LSL #16
7101d6e0bc  str w11,[x10, x9, LSL #0x0]
7101d6e0c0  mov w9,wzr
7101d6e0c4  ldr s0,[sp, #0x18]
7101d6e0c8  fadd s1,s0,s8
7101d6e0cc  ldur s0,[x29, #-0x64]
7101d6e0d0  ldr x10,[x8, #0x8]
7101d6e0d4  add x10,x10,w9, UXTW 
7101d6e0d8  mov x11,#0x6e62
7101d6e0dc  movk x11,#0x7071, LSL #16
7101d6e0e0  movk x11,#0x20, LSL #32
7101d6e0e4  str x26,[x10, #0x10]
7101d6e0e8  str wzr,[x10, #0x24]
7101d6e0ec  add w9,w9,#0x28
7101d6e0f0  fadd s0,s1,s0
7101d6e0f4  mov x12,#0x6f76
7101d6e0f8  movk x12,#0x756c, LSL #16
7101d6e0fc  movk x12,#0x8, LSL #32
7101d6e100  stp x11,x12,[x10]
7101d6e104  str s0,[x10, #0x20]
7101d6e108  ldr w10,[x8, #0x10]
7101d6e10c  udiv w11,w9,w10
7101d6e110  msub w9,w11,w10,w9
7101d6e114  str w9,[x8, #0x14]
7101d6e118  cbz x26,0x7101d6e130
7101d6e11c  add x8,x26,#0x3c
7101d6e120  ldaxr w9,[x8]
7101d6e124  add w9,w9,#0x1
7101d6e128  stlxr w10,w9,[x8]
7101d6e12c  cbnz w10,0x7101d6e120
7101d6e130  ldr x0,[x21, #0x100]
7101d6e134  bl 0x71039c1a50
7101d6e138  ldr x8,[sp, #0x20]
7101d6e13c  cbz x8,0x7101d6e19c
7101d6e140  adrp x11,0x7106dd5000
7101d6e144  ldr w9,[x11, #0x3ac]
7101d6e148  add x10,x8,#0x38
7101d6e14c  ldaxr w12,[x10]
7101d6e150  add w12,w12,#0x1
7101d6e154  stlxr w13,w12,[x10]
7101d6e158  cbnz w13,0x7101d6e14c
7101d6e15c  ldr x10,[sp, #0x20]
7101d6e160  cbz x10,0x7101d6e1a0
7101d6e164  adrp x12,0x7106dd5000
7101d6e168  ldrb w12,[x12, #0x3a8]
7101d6e16c  cmp w12,#0x1
7101d6e170  b.ne 0x7101d6e1a0
7101d6e174  ldr w11,[x11, #0x3ac]
7101d6e178  ldr w12,[sp, #0xc]
7101d6e17c  cmp w12,w11
7101d6e180  b.ne 0x7101d6e1a0
7101d6e184  ldr wzr,[x10, #0x38]!
7101d6e188  ldaxr w11,[x10]
7101d6e18c  sub w11,w11,#0x1
7101d6e190  stlxr w12,w11,[x10]
7101d6e194  cbnz w12,0x7101d6e188
7101d6e198  b 0x7101d6e1a0
7101d6e19c  mov w9,wzr
7101d6e1a0  ldr s0,[sp, #0x18]
7101d6e1a4  ldur s1,[x29, #-0x64]
7101d6e1a8  str xzr,[sp, #0x20]
7101d6e1ac  sturb wzr,[x29, #-0x68]
7101d6e1b0  str w22,[x20, #0x48]
7101d6e1b4  cbnz x8,0x7101d6c9ec
7101d6e1b8  b 0x7101d6c984
7101d6e1bc  ldr x0,[sp, #0x40]
7101d6e1c0  cbz x0,0x7101d6d6d4
7101d6e1c4  ldr x8,[x0]
7101d6e1c8  ldp s9,s10,[sp, #0x64]
7101d6e1cc  ldr x8,[x8, #0x20]
7101d6e1d0  blr x8
7101d6e1d4  tbnz w0,#0x0,0x7101d6d6d4
7101d6e1d8  adrp x21,0x7106dd5000
7101d6e1dc  ldr x0,[x21, #0x100]
7101d6e1e0  ldr x22,[sp, #0x40]
7101d6e1e4  bl 0x71039c1a40
7101d6e1e8  adrp x8,0x7106dd5000
7101d6e1ec  ldr x8,[x8, #0x408]
7101d6e1f0  ldr w10,[x8, #0x18]
7101d6e1f4  ldr w9,[x8, #0x14]
7101d6e1f8  add w11,w9,#0x20
7101d6e1fc  add x11,x11,#0x8
7101d6e200  cmp w9,w10
7101d6e204  b.cs 0x7101d6e3fc
7101d6e208  cmp x11,x10
7101d6e20c  b.cc 0x7101d6e424
7101d6e210  b 0x7101d6e488
7101d6e214  ldr w12,[x8, #0x10]
7101d6e218  cmp x11,x12
7101d6e21c  b.ls 0x7101d6e23c
7101d6e220  cmp w10,#0x29
7101d6e224  b.cc 0x7101d6e2a0
7101d6e228  ldr x10,[x8, #0x8]
7101d6e22c  mov w11,#0x6e62
7101d6e230  movk w11,#0x6471, LSL #16
7101d6e234  str w11,[x10, x9, LSL #0x0]
7101d6e238  mov w9,wzr
7101d6e23c  fadd s0,s9,s8
7101d6e240  ldr x10,[x8, #0x8]
7101d6e244  add x10,x10,w9, UXTW 
7101d6e248  mov x11,#0x6e62
7101d6e24c  movk x11,#0x7071, LSL #16
7101d6e250  movk x11,#0x20, LSL #32
7101d6e254  str x22,[x10, #0x10]
7101d6e258  fadd s0,s0,s10
7101d6e25c  mov x12,#0x6f76
7101d6e260  movk x12,#0x756c, LSL #16
7101d6e264  movk x12,#0x8, LSL #32
7101d6e268  str wzr,[x10, #0x24]
7101d6e26c  stp x11,x12,[x10]
7101d6e270  add w9,w9,#0x28
7101d6e274  str s0,[x10, #0x20]
7101d6e278  ldr w10,[x8, #0x10]
7101d6e27c  udiv w11,w9,w10
7101d6e280  msub w9,w11,w10,w9
7101d6e284  str w9,[x8, #0x14]
7101d6e288  cbz x22,0x7101d6e2a0
7101d6e28c  add x8,x22,#0x3c
7101d6e290  ldaxr w9,[x8]
7101d6e294  add w9,w9,#0x1
7101d6e298  stlxr w10,w9,[x8]
7101d6e29c  cbnz w10,0x7101d6e290
7101d6e2a0  ldr x0,[x21, #0x100]
7101d6e2a4  bl 0x71039c1a50
7101d6e2a8  b 0x7101d6d118
7101d6e2ac  ldr x0,[x23, #0x10]
7101d6e2b0  cbz x0,0x7101d6deb0
7101d6e2b4  ldr x8,[x0]
7101d6e2b8  ldr x8,[x8, #0x20]
7101d6e2bc  blr x8
7101d6e2c0  tbz w0,#0x0,0x7101d6dbf0
7101d6e2c4  b 0x7101d6deb0
7101d6e2c8  ldr w12,[x8, #0x10]
7101d6e2cc  cmp x11,x12
7101d6e2d0  b.ls 0x7101d6e2f0
7101d6e2d4  cmp w10,#0x29
7101d6e2d8  b.cc 0x7101d6e354
7101d6e2dc  ldr x10,[x8, #0x8]
7101d6e2e0  mov w11,#0x6e62
7101d6e2e4  movk w11,#0x6471, LSL #16
7101d6e2e8  str w11,[x10, x9, LSL #0x0]
7101d6e2ec  mov w9,wzr
7101d6e2f0  fadd s0,s9,s8
7101d6e2f4  ldr x10,[x8, #0x8]
7101d6e2f8  add x10,x10,w9, UXTW 
7101d6e2fc  mov x11,#0x6e62
7101d6e300  movk x11,#0x7071, LSL #16
7101d6e304  movk x11,#0x20, LSL #32
7101d6e308  str x22,[x10, #0x10]
7101d6e30c  fadd s0,s0,s10
7101d6e310  mov x12,#0x6f76
7101d6e314  movk x12,#0x756c, LSL #16
7101d6e318  movk x12,#0x8, LSL #32
7101d6e31c  str wzr,[x10, #0x24]
7101d6e320  stp x11,x12,[x10]
7101d6e324  add w9,w9,#0x28
7101d6e328  str s0,[x10, #0x20]
7101d6e32c  ldr w10,[x8, #0x10]
7101d6e330  udiv w11,w9,w10
7101d6e334  msub w9,w11,w10,w9
7101d6e338  str w9,[x8, #0x14]
7101d6e33c  cbz x22,0x7101d6e354
7101d6e340  add x8,x22,#0x3c
7101d6e344  ldaxr w9,[x8]
7101d6e348  add w9,w9,#0x1
7101d6e34c  stlxr w10,w9,[x8]
7101d6e350  cbnz w10,0x7101d6e344
7101d6e354  ldr x0,[x21, #0x100]
7101d6e358  bl 0x71039c1a50
7101d6e35c  b 0x7101d6d378
7101d6e360  ldr w12,[x8, #0x10]
7101d6e364  cmp x11,x12
7101d6e368  b.ls 0x7101d6e388
7101d6e36c  cmp w10,#0x29
7101d6e370  b.cc 0x7101d6e3ec
7101d6e374  ldr x10,[x8, #0x8]
7101d6e378  mov w11,#0x6e62
7101d6e37c  movk w11,#0x6471, LSL #16
7101d6e380  str w11,[x10, x9, LSL #0x0]
7101d6e384  mov w9,wzr
7101d6e388  fadd s0,s9,s8
7101d6e38c  ldr x10,[x8, #0x8]
7101d6e390  add x10,x10,w9, UXTW 
7101d6e394  mov x11,#0x6e62
7101d6e398  movk x11,#0x7071, LSL #16
7101d6e39c  movk x11,#0x20, LSL #32
7101d6e3a0  str x22,[x10, #0x10]
7101d6e3a4  fadd s0,s0,s10
7101d6e3a8  mov x12,#0x6f76
7101d6e3ac  movk x12,#0x756c, LSL #16
7101d6e3b0  movk x12,#0x8, LSL #32
7101d6e3b4  str wzr,[x10, #0x24]
7101d6e3b8  stp x11,x12,[x10]
7101d6e3bc  add w9,w9,#0x28
7101d6e3c0  str s0,[x10, #0x20]
7101d6e3c4  ldr w10,[x8, #0x10]
7101d6e3c8  udiv w11,w9,w10
7101d6e3cc  msub w9,w11,w10,w9
7101d6e3d0  str w9,[x8, #0x14]
7101d6e3d4  cbz x22,0x7101d6e3ec
7101d6e3d8  add x8,x22,#0x3c
7101d6e3dc  ldaxr w9,[x8]
7101d6e3e0  add w9,w9,#0x1
7101d6e3e4  stlxr w10,w9,[x8]
7101d6e3e8  cbnz w10,0x7101d6e3dc
7101d6e3ec  ldr x0,[x21, #0x100]
7101d6e3f0  bl 0x71039c1a50
7101d6e3f4  b 0x7101d6d9d4
7101d6e3f8  bl 0x71039c2650
7101d6e3fc  ldr w12,[x8, #0x10]
7101d6e400  cmp x11,x12
7101d6e404  b.ls 0x7101d6e424
7101d6e408  cmp w10,#0x29
7101d6e40c  b.cc 0x7101d6e488
7101d6e410  ldr x10,[x8, #0x8]
7101d6e414  mov w11,#0x6e62
7101d6e418  movk w11,#0x6471, LSL #16
7101d6e41c  str w11,[x10, x9, LSL #0x0]
7101d6e420  mov w9,wzr
7101d6e424  fadd s0,s9,s8
7101d6e428  ldr x10,[x8, #0x8]
7101d6e42c  add x10,x10,w9, UXTW 
7101d6e430  mov x11,#0x6e62
7101d6e434  movk x11,#0x7071, LSL #16
7101d6e438  movk x11,#0x20, LSL #32
7101d6e43c  str x22,[x10, #0x10]
7101d6e440  fadd s0,s0,s10
7101d6e444  mov x12,#0x6f76
7101d6e448  movk x12,#0x756c, LSL #16
7101d6e44c  movk x12,#0x8, LSL #32
7101d6e450  str wzr,[x10, #0x24]
7101d6e454  stp x11,x12,[x10]
7101d6e458  add w9,w9,#0x28
7101d6e45c  str s0,[x10, #0x20]
7101d6e460  ldr w10,[x8, #0x10]
7101d6e464  udiv w11,w9,w10
7101d6e468  msub w9,w11,w10,w9
7101d6e46c  str w9,[x8, #0x14]
7101d6e470  cbz x22,0x7101d6e488
7101d6e474  add x8,x22,#0x3c
7101d6e478  ldaxr w9,[x8]
7101d6e47c  add w9,w9,#0x1
7101d6e480  stlxr w10,w9,[x8]
7101d6e484  cbnz w10,0x7101d6e478
7101d6e488  ldr x0,[x21, #0x100]
7101d6e48c  bl 0x71039c1a50
7101d6e490  b 0x7101d6d6d4
7101d6e494  mov x0,x20
7101d6e498  bl 0x71039c1330
