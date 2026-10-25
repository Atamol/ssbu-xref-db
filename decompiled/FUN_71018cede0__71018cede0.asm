// addr:      71018cede0
// offset:    0x18cede0
// name:      FUN_71018cede0
// mangled:   
// size:      9052

71018cede0  stp x28,x27,[sp, #-0x60]!
71018cede4  stp x26,x25,[sp, #0x10]
71018cede8  stp x24,x23,[sp, #0x20]
71018cedec  stp x22,x21,[sp, #0x30]
71018cedf0  stp x20,x19,[sp, #0x40]
71018cedf4  stp x29,x30,[sp, #0x50]
71018cedf8  add x29,sp,#0x50
71018cedfc  sub sp,sp,#0x2, LSL #12
71018cee00  sub sp,sp,#0x240
71018cee04  adrp x27,0x7105314000
71018cee08  ldr x8,[x27, #0x510]
71018cee0c  ldr x8,[x8]
71018cee10  ldr x19,[x8, #0x78]
71018cee14  ldr x8,[x19]
71018cee18  ldr x8,[x8]
71018cee1c  mov w9,#0xe054
71018cee20  movk w9,#0x5, LSL #16
71018cee24  mov w10,#0xe05c
71018cee28  movk w10,#0x5, LSL #16
71018cee2c  ldr x9,[x8, x9, LSL #0x0]
71018cee30  ldrb w8,[x8, x10, LSL ]
71018cee34  str x9,[x0, #0x170]
71018cee38  strb w8,[x0, #0x178]
71018cee3c  ldr x8,[x19]
71018cee40  ldr x8,[x8]
71018cee44  mov w9,#0xe050
71018cee48  movk w9,#0x5, LSL #16
71018cee4c  mov x26,x0
71018cee50  ldr w8,[x8, x9, LSL #0x0]
71018cee54  str w8,[x0, #0x16c]
71018cee58  ldr x8,[x19]
71018cee5c  ldr x8,[x8]
71018cee60  mov w9,#0xe05d
71018cee64  movk w9,#0x5, LSL #16
71018cee68  ldrb w8,[x8, x9, LSL ]
71018cee6c  strb w8,[x0, #0x179]
71018cee70  ldr x8,[x19]
71018cee74  ldr x8,[x8]
71018cee78  mov w9,#0xe060
71018cee7c  movk w9,#0x5, LSL #16
71018cee80  ldrb w8,[x8, x9, LSL ]
71018cee84  strb w8,[x0, #0x17a]
71018cee88  adrp x8,0x7105314000
71018cee8c  add x8,x8,#0x4d8
71018cee90  ldarb w8,[x8]
71018cee94  tbz w8,#0x0,0x71018d10e8
71018cee98  adrp x8,0x7105305000
71018cee9c  ldr w8,[x8, #0xf0]
71018ceea0  ldr x0,[x19]
71018ceea4  str w8,[sp, #0x14]
71018ceea8  bl 0x71017d2010
71018ceeac  and w8,w0,#0x1
71018ceeb0  strb w8,[x26, #0x17e]
71018ceeb4  str x26,[sp, #0x18]
71018ceeb8  tbz w0,#0x0,0x71018cef48
71018ceebc  ldr x9,[x19]
71018ceec0  ldr x9,[x9]
71018ceec4  mov w10,#0xe052
71018ceec8  movk w10,#0x5, LSL #16
71018ceecc  ldrh w9,[x9, x10, LSL #0x0]
71018ceed0  strb w9,[x26, #0x16e]
71018ceed4  ldr x9,[x19]
71018ceed8  ldr x9,[x9]
71018ceedc  mov w10,#0xe050
71018ceee0  movk w10,#0x5, LSL #16
71018ceee4  mov w11,#0xe05c
71018ceee8  movk w11,#0x5, LSL #16
71018ceeec  ldr w9,[x9, x10, LSL #0x0]
71018ceef0  strh w9,[x26, #0x16c]
71018ceef4  ldr x9,[x19]
71018ceef8  ldr x9,[x9]
71018ceefc  mov w10,#0xe05d
71018cef00  movk w10,#0x5, LSL #16
71018cef04  ldrb w9,[x9, x10, LSL ]
71018cef08  strb w9,[x26, #0x179]
71018cef0c  ldr x9,[x19]
71018cef10  ldr x9,[x9]
71018cef14  mov w10,#0xe060
71018cef18  movk w10,#0x5, LSL #16
71018cef1c  ldrb w9,[x9, x10, LSL ]
71018cef20  strb w9,[x26, #0x17a]
71018cef24  ldr x9,[x19]
71018cef28  ldr x9,[x9]
71018cef2c  mov w10,#0xe054
71018cef30  movk w10,#0x5, LSL #16
71018cef34  ldr x10,[x9, x10, LSL #0x0]
71018cef38  ldrb w9,[x9, x11, LSL ]
71018cef3c  str x10,[x26, #0x170]
71018cef40  strb w9,[x26, #0x178]
71018cef44  b 0x71018cf434
71018cef48  adrp x19,0x710532f000
71018cef4c  ldr x8,[x19, #0x730]
71018cef50  ldr x24,[x8, #0x8]
71018cef54  add x0,x24,#0x2e0
71018cef58  mov w1,#0x1
71018cef5c  bl 0x7103293f90
71018cef60  stp xzr,xzr,[sp, #0x78]
71018cef64  str xzr,[sp, #0x70]
71018cef68  cbz w0,0x71018cf178
71018cef6c  sxtw x27,w0
71018cef70  tbnz w27,#0x1f,0x71018d1128
71018cef74  add x8,sp,#0x70
71018cef78  lsl x21,x27,#0x4
71018cef7c  add x8,x8,#0x8
71018cef80  mov w0,#0x10
71018cef84  mov x1,x21
71018cef88  str x8,[sp]
71018cef8c  bl 0x710392e290
71018cef90  cbnz x0,0x71018cefd4
71018cef94  adrp x8,0x7105332000
71018cef98  ldr x0,[x8, #0xf00]
71018cef9c  cbz x0,0x71018cefd0
71018cefa0  stur wzr,[x29, #-0x70]
71018cefa4  str x21,[sp, #0x20]
71018cefa8  ldr x8,[x0]
71018cefac  ldr x8,[x8, #0x30]
71018cefb0  sub x1,x29,#0x70
71018cefb4  add x2,sp,#0x20
71018cefb8  blr x8
71018cefbc  tbz w0,#0x0,0x71018cefd0
71018cefc0  mov w0,#0x10
71018cefc4  mov x1,x21
71018cefc8  bl 0x710392e290
71018cefcc  cbnz x0,0x71018cefd4
71018cefd0  mov x0,xzr
71018cefd4  add x8,x0,x27, LSL #0x4
71018cefd8  stp x0,x0,[sp, #0x70]
71018cefdc  orr x19,xzr,#0x1e00000000000000
71018cefe0  str x8,[sp, #0x80]
71018cefe4  ldr x8,[x24, #0x2e8]
71018cefe8  ldr x20,[x8, #0x28]
71018cefec  and x9,x20,#-0x100000000000000
71018ceff0  cmp x9,x19
71018ceff4  str x24,[sp, #0x8]
71018ceff8  b.ne 0x71018cf184
71018ceffc  and x9,x20,#0xffffffffff
71018cf000  cbz x9,0x71018cf184
71018cf004  mov x21,xzr
71018cf008  orr x26,xzr,#0x1e00000000000000
71018cf00c  b 0x71018cf014
71018cf010  ldr x8,[x24, #0x2e8]
71018cf014  ldr x0,[x8, #0x8]
71018cf018  mov w1,w21
71018cf01c  bl 0x7103293b70
71018cf020  and x9,x0,#-0x100000000000000
71018cf024  and x8,x0,#0xffffffffff
71018cf028  cmp x9,x26
71018cf02c  ccmp x8,#0x0,#0x4,eq
71018cf030  eor x8,x20,x0
71018cf034  and x8,x8,#0xffffffffff
71018cf038  ccmp x8,#0x0,#0x0,ne
71018cf03c  b.eq 0x71018cf160
71018cf040  mov x22,x0
71018cf044  bl 0x71017980f0
71018cf048  tbz w0,#0x0,0x71018cf160
71018cf04c  ldp x9,x8,[sp, #0x78]
71018cf050  cmp x9,x8
71018cf054  b.cs 0x71018cf06c
71018cf058  stp x22,x21,[x9]
71018cf05c  ldr x8,[sp, #0x78]
71018cf060  add x8,x8,#0x10
71018cf064  str x8,[sp, #0x78]
71018cf068  b 0x71018cf160
71018cf06c  ldr x23,[sp, #0x70]
71018cf070  sub x24,x9,x23
71018cf074  asr x19,x24,#0x4
71018cf078  add x9,x19,#0x1
71018cf07c  lsr x10,x9,#0x3c
71018cf080  cbnz x10,0x71018d112c
71018cf084  sub x8,x8,x23
71018cf088  asr x10,x8,#0x4
71018cf08c  orr x11,xzr,#0x7fffffffffffffe
71018cf090  cmp x10,x11
71018cf094  b.hi 0x71018cf0b4
71018cf098  asr x8,x8,#0x3
71018cf09c  cmp x8,x9
71018cf0a0  csel x28,x9,x8,cc
71018cf0a4  cbz x28,0x71018cf170
71018cf0a8  lsr x8,x28,#0x3c
71018cf0ac  cbz x8,0x71018cf0b8
71018cf0b0  b 0x71018d1128
71018cf0b4  orr x28,xzr,#0xfffffffffffffff
71018cf0b8  lsl x8,x28,#0x4
71018cf0bc  cmp x8,#0x0
71018cf0c0  csinc x26,x8,xzr,ne
71018cf0c4  mov w0,#0x10
71018cf0c8  mov x1,x26
71018cf0cc  bl 0x710392e290
71018cf0d0  mov x25,x0
71018cf0d4  cbnz x0,0x71018cf11c
71018cf0d8  adrp x8,0x7105332000
71018cf0dc  ldr x0,[x8, #0xf00]
71018cf0e0  cbz x0,0x71018cf118
71018cf0e4  stur wzr,[x29, #-0x70]
71018cf0e8  str x26,[sp, #0x20]
71018cf0ec  ldr x8,[x0]
71018cf0f0  ldr x8,[x8, #0x30]
71018cf0f4  sub x1,x29,#0x70
71018cf0f8  add x2,sp,#0x20
71018cf0fc  blr x8
71018cf100  tbz w0,#0x0,0x71018cf118
71018cf104  mov w0,#0x10
71018cf108  mov x1,x26
71018cf10c  bl 0x710392e290
71018cf110  mov x25,x0
71018cf114  cbnz x0,0x71018cf11c
71018cf118  mov x25,xzr
71018cf11c  orr x26,xzr,#0x1e00000000000000
71018cf120  add x8,x25,x19, LSL #0x4
71018cf124  add x19,x25,x28, LSL #0x4
71018cf128  cmp x24,#0x1
71018cf12c  stp x22,x21,[x8]
71018cf130  add x22,x8,#0x10
71018cf134  b.lt 0x71018cf148
71018cf138  mov x0,x25
71018cf13c  mov x1,x23
71018cf140  mov x2,x24
71018cf144  bl 0x71039c00e0
71018cf148  ldr x24,[sp, #0x8]
71018cf14c  stp x25,x22,[sp, #0x70]
71018cf150  str x19,[sp, #0x80]
71018cf154  cbz x23,0x71018cf160
71018cf158  mov x0,x23
71018cf15c  bl 0x710392eb40
71018cf160  add x21,x21,#0x1
71018cf164  cmp x21,x27
71018cf168  b.lt 0x71018cf010
71018cf16c  b 0x71018cf2d8
71018cf170  mov x25,xzr
71018cf174  b 0x71018cf120
71018cf178  add x8,sp,#0x70
71018cf17c  add x20,x8,#0x8
71018cf180  b 0x71018cf2e8
71018cf184  mov x21,xzr
71018cf188  b 0x71018cf190
71018cf18c  ldr x8,[x24, #0x2e8]
71018cf190  ldr x0,[x8, #0x8]
71018cf194  mov w1,w21
71018cf198  bl 0x7103293b70
71018cf19c  and x8,x0,#0xffffffffff
71018cf1a0  and x9,x0,#-0x100000000000000
71018cf1a4  cmp x8,#0x0
71018cf1a8  ccmp x9,x19,#0x0,ne
71018cf1ac  b.ne 0x71018cf2cc
71018cf1b0  mov x22,x0
71018cf1b4  bl 0x71017980f0
71018cf1b8  tbz w0,#0x0,0x71018cf2cc
71018cf1bc  ldp x9,x8,[sp, #0x78]
71018cf1c0  cmp x9,x8
71018cf1c4  b.cs 0x71018cf1dc
71018cf1c8  stp x22,x21,[x9]
71018cf1cc  ldr x8,[sp, #0x78]
71018cf1d0  add x8,x8,#0x10
71018cf1d4  str x8,[sp, #0x78]
71018cf1d8  b 0x71018cf2cc
71018cf1dc  ldr x23,[sp, #0x70]
71018cf1e0  sub x24,x9,x23
71018cf1e4  asr x20,x24,#0x4
71018cf1e8  add x9,x20,#0x1
71018cf1ec  lsr x10,x9,#0x3c
71018cf1f0  cbnz x10,0x71018d112c
71018cf1f4  sub x8,x8,x23
71018cf1f8  asr x10,x8,#0x4
71018cf1fc  orr x11,xzr,#0x7fffffffffffffe
71018cf200  cmp x10,x11
71018cf204  b.hi 0x71018cf224
71018cf208  asr x8,x8,#0x3
71018cf20c  cmp x8,x9
71018cf210  csel x28,x9,x8,cc
71018cf214  cbz x28,0x71018cf288
71018cf218  lsr x8,x28,#0x3c
71018cf21c  cbz x8,0x71018cf228
71018cf220  b 0x71018d1128
71018cf224  orr x28,xzr,#0xfffffffffffffff
71018cf228  lsl x8,x28,#0x4
71018cf22c  cmp x8,#0x0
71018cf230  csinc x26,x8,xzr,ne
71018cf234  mov w0,#0x10
71018cf238  mov x1,x26
71018cf23c  bl 0x710392e290
71018cf240  mov x25,x0
71018cf244  cbnz x0,0x71018cf28c
71018cf248  adrp x8,0x7105332000
71018cf24c  ldr x0,[x8, #0xf00]
71018cf250  cbz x0,0x71018cf288
71018cf254  stur wzr,[x29, #-0x70]
71018cf258  str x26,[sp, #0x20]
71018cf25c  ldr x8,[x0]
71018cf260  ldr x8,[x8, #0x30]
71018cf264  sub x1,x29,#0x70
71018cf268  add x2,sp,#0x20
71018cf26c  blr x8
71018cf270  tbz w0,#0x0,0x71018cf288
71018cf274  mov w0,#0x10
71018cf278  mov x1,x26
71018cf27c  bl 0x710392e290
71018cf280  mov x25,x0
71018cf284  cbnz x0,0x71018cf28c
71018cf288  mov x25,xzr
71018cf28c  add x8,x25,x20, LSL #0x4
71018cf290  add x20,x25,x28, LSL #0x4
71018cf294  cmp x24,#0x1
71018cf298  stp x22,x21,[x8]
71018cf29c  add x22,x8,#0x10
71018cf2a0  b.lt 0x71018cf2b4
71018cf2a4  mov x0,x25
71018cf2a8  mov x1,x23
71018cf2ac  mov x2,x24
71018cf2b0  bl 0x71039c00e0
71018cf2b4  ldr x24,[sp, #0x8]
71018cf2b8  stp x25,x22,[sp, #0x70]
71018cf2bc  str x20,[sp, #0x80]
71018cf2c0  cbz x23,0x71018cf2cc
71018cf2c4  mov x0,x23
71018cf2c8  bl 0x710392eb40
71018cf2cc  add x21,x21,#0x1
71018cf2d0  cmp x21,x27
71018cf2d4  b.lt 0x71018cf18c
71018cf2d8  ldr x26,[sp, #0x18]
71018cf2dc  ldr x20,[sp]
71018cf2e0  adrp x27,0x7105314000
71018cf2e4  adrp x19,0x710532f000
71018cf2e8  ldp x11,x8,[sp, #0x70]
71018cf2ec  cmp x11,x8
71018cf2f0  b.eq 0x71018cf344
71018cf2f4  sub x8,x8,x11
71018cf2f8  adrp x13,0x7105239000
71018cf2fc  add x13,x13,#0x1c0
71018cf300  asr x14,x8,#0x4
71018cf304  ldp w9,w8,[x13]
71018cf308  eor w12,w9,w9, LSL #0xb
71018cf30c  ldp w9,w10,[x13, #0x8]
71018cf310  eor w12,w12,w12, LSR #0x8
71018cf314  eor w12,w12,w10
71018cf318  eor w12,w12,w10, LSR #0x13
71018cf31c  stp w8,w9,[x13]
71018cf320  stp w10,w12,[x13, #0x8]
71018cf324  udiv w13,w12,w14
71018cf328  msub w13,w13,w14,w12
71018cf32c  sxtw x13,w13
71018cf330  cmp x14,x13
71018cf334  b.ls 0x71018d1134
71018cf338  add x11,x11,x13, LSL #0x4
71018cf33c  ldr w11,[x11, #0x8]
71018cf340  b 0x71018cf358
71018cf344  adrp x12,0x7105239000
71018cf348  add x12,x12,#0x1c0
71018cf34c  mov w11,wzr
71018cf350  ldp w8,w9,[x12]
71018cf354  ldp w10,w12,[x12, #0x8]
71018cf358  eor w8,w8,w8, LSL #0xb
71018cf35c  eor w8,w8,w8, LSR #0x8
71018cf360  eor w8,w8,w12
71018cf364  adrp x13,0x7105239000
71018cf368  add x13,x13,#0x1c0
71018cf36c  stp w9,w10,[x13]
71018cf370  mov w9,#0xaaab
71018cf374  movk w9,#0xaaaa, LSL #16
71018cf378  orr w10,wzr,#0xc
71018cf37c  mov w1,wzr
71018cf380  eor w8,w8,w12, LSR #0x13
71018cf384  umull x9,w8,w9
71018cf388  lsr x9,x9,#0x23
71018cf38c  stp w12,w8,[x13, #0x8]
71018cf390  strh w11,[x26, #0x16c]
71018cf394  msub w8,w9,w10,w8
71018cf398  strb w8,[x26, #0x16e]
71018cf39c  ldr x8,[x19, #0x730]
71018cf3a0  ldr x19,[x8, #0x8]
71018cf3a4  ldr x0,[x19, #0x308]
71018cf3a8  bl 0x71032a0350
71018cf3ac  strb w0,[x26, #0x170]
71018cf3b0  ldr x0,[x19, #0x308]
71018cf3b4  mov w1,#0x1
71018cf3b8  bl 0x71032a0350
71018cf3bc  strb w0,[x26, #0x171]
71018cf3c0  ldr x0,[x19, #0x308]
71018cf3c4  mov w1,#0x2
71018cf3c8  bl 0x71032a0350
71018cf3cc  strb w0,[x26, #0x172]
71018cf3d0  ldr x0,[x19, #0x308]
71018cf3d4  orr w1,wzr,#0x3
71018cf3d8  bl 0x71032a0350
71018cf3dc  strb w0,[x26, #0x173]
71018cf3e0  ldr x0,[x19, #0x308]
71018cf3e4  mov w1,#0x4
71018cf3e8  bl 0x71032a0350
71018cf3ec  strb w0,[x26, #0x174]
71018cf3f0  ldr x0,[x19, #0x308]
71018cf3f4  mov w1,#0x5
71018cf3f8  bl 0x71032a0350
71018cf3fc  strb w0,[x26, #0x175]
71018cf400  ldr x0,[x19, #0x308]
71018cf404  orr w1,wzr,#0x6
71018cf408  bl 0x71032a0350
71018cf40c  strb w0,[x26, #0x176]
71018cf410  ldr x0,[x19, #0x308]
71018cf414  orr w1,wzr,#0x7
71018cf418  bl 0x71032a0350
71018cf41c  strb w0,[x26, #0x177]
71018cf420  ldr x0,[sp, #0x70]
71018cf424  cbz x0,0x71018cf430
71018cf428  str x0,[x20]
71018cf42c  bl 0x710392eb40
71018cf430  ldrb w8,[x26, #0x17e]
71018cf434  ldrb w9,[x26, #0x17f]
71018cf438  orr w8,w9,w8
71018cf43c  tst w8,#0xff
71018cf440  strb w8,[x26, #0x17f]
71018cf444  ldr x8,[x26, #0x140]
71018cf448  cset w1,ne
71018cf44c  ldr x0,[x8, #0x80]
71018cf450  bl 0x7101af9320
71018cf454  ldrb w8,[x26, #0x17f]
71018cf458  cbnz w8,0x71018cf470
71018cf45c  adrp x8,0x710532f000
71018cf460  ldr x8,[x8, #0x7f0]
71018cf464  ldr x0,[x8, #0x8]
71018cf468  mov w1,wzr
71018cf46c  bl 0x71032eb270
71018cf470  mov w1,#0x88
71018cf474  mov w0,#0x10
71018cf478  add x24,x26,#0x138
71018cf47c  bl 0x710392e290
71018cf480  mov x21,x0
71018cf484  cbnz x0,0x71018cf4d0
71018cf488  adrp x8,0x7105332000
71018cf48c  ldr x0,[x8, #0xf00]
71018cf490  cbz x0,0x71018cf4cc
71018cf494  mov w8,#0x88
71018cf498  str wzr,[sp, #0x20]
71018cf49c  add x1,sp,#0x20
71018cf4a0  str x8,[sp, #0x70]
71018cf4a4  ldr x8,[x0]
71018cf4a8  ldr x8,[x8, #0x30]
71018cf4ac  add x2,sp,#0x70
71018cf4b0  blr x8
71018cf4b4  tbz w0,#0x0,0x71018cf4cc
71018cf4b8  mov w1,#0x88
71018cf4bc  mov w0,#0x10
71018cf4c0  bl 0x710392e290
71018cf4c4  mov x21,x0
71018cf4c8  cbnz x0,0x71018cf4d0
71018cf4cc  mov x21,xzr
71018cf4d0  adrp x8,0x71050af000
71018cf4d4  add x8,x8,#0x368
71018cf4d8  mov w1,#0x210
71018cf4dc  stp x8,xzr,[x21]
71018cf4e0  orr x8,xzr,#0x1ffffffff
71018cf4e4  stp xzr,x8,[x21, #0x60]
71018cf4e8  mov w8,#0x1
71018cf4ec  mov w0,#0x10
71018cf4f0  stp xzr,xzr,[x21, #0x10]
71018cf4f4  strb wzr,[x21, #0x58]
71018cf4f8  str x24,[x21, #0x78]
71018cf4fc  strb w8,[x21, #0x70]
71018cf500  stp xzr,xzr,[x21, #0x48]
71018cf504  bl 0x710392e290
71018cf508  mov x22,x0
71018cf50c  cbnz x0,0x71018cf558
71018cf510  adrp x8,0x7105332000
71018cf514  ldr x0,[x8, #0xf00]
71018cf518  cbz x0,0x71018cf554
71018cf51c  mov w8,#0x210
71018cf520  str wzr,[sp, #0x20]
71018cf524  add x1,sp,#0x20
71018cf528  str x8,[sp, #0x70]
71018cf52c  ldr x8,[x0]
71018cf530  ldr x8,[x8, #0x30]
71018cf534  add x2,sp,#0x70
71018cf538  blr x8
71018cf53c  tbz w0,#0x0,0x71018cf554
71018cf540  mov w1,#0x210
71018cf544  mov w0,#0x10
71018cf548  bl 0x710392e290
71018cf54c  mov x22,x0
71018cf550  cbnz x0,0x71018cf558
71018cf554  mov x22,xzr
71018cf558  adrp x8,0x71050af000
71018cf55c  add x8,x8,#0x250
71018cf560  mov w20,#0xffffffff
71018cf564  add x0,x22,#0x38
71018cf568  mov w2,#0x10c
71018cf56c  strh wzr,[x22, #0xc]
71018cf570  mov w1,wzr
71018cf574  str wzr,[x22, #0x8]
71018cf578  str x8,[x22]
71018cf57c  str wzr,[x22, #0x144]
71018cf580  stp xzr,xzr,[x22, #0x28]
71018cf584  str x22,[x22, #0x10]
71018cf588  str x20,[x22, #0x148]
71018cf58c  str w20,[x22, #0x150]
71018cf590  strb wzr,[x22, #0x154]
71018cf594  stp xzr,xzr,[x22, #0x18]
71018cf598  bl 0x71039c02a0
71018cf59c  mov w0,#0x10
71018cf5a0  mov w1,#0x8
71018cf5a4  str x24,[x22, #0x158]
71018cf5a8  bl 0x710392e290
71018cf5ac  mov x23,x0
71018cf5b0  cbnz x0,0x71018cf5fc
71018cf5b4  adrp x8,0x7105332000
71018cf5b8  ldr x0,[x8, #0xf00]
71018cf5bc  cbz x0,0x71018cf5f8
71018cf5c0  mov w8,#0x8
71018cf5c4  str wzr,[sp, #0x20]
71018cf5c8  add x1,sp,#0x20
71018cf5cc  str x8,[sp, #0x70]
71018cf5d0  ldr x8,[x0]
71018cf5d4  ldr x8,[x8, #0x30]
71018cf5d8  add x2,sp,#0x70
71018cf5dc  blr x8
71018cf5e0  tbz w0,#0x0,0x71018cf5f8
71018cf5e4  mov w0,#0x10
71018cf5e8  mov w1,#0x8
71018cf5ec  bl 0x710392e290
71018cf5f0  mov x23,x0
71018cf5f4  cbnz x0,0x71018cf5fc
71018cf5f8  mov x23,xzr
71018cf5fc  mov x0,x23
71018cf600  bl 0x7103773200
71018cf604  mov w0,#0x10
71018cf608  mov w1,#0x8
71018cf60c  str x23,[x22, #0x160]
71018cf610  bl 0x710392e290
71018cf614  mov x23,x0
71018cf618  cbnz x0,0x71018cf664
71018cf61c  adrp x8,0x7105332000
71018cf620  ldr x0,[x8, #0xf00]
71018cf624  cbz x0,0x71018cf660
71018cf628  mov w8,#0x8
71018cf62c  str wzr,[sp, #0x20]
71018cf630  add x1,sp,#0x20
71018cf634  str x8,[sp, #0x70]
71018cf638  ldr x8,[x0]
71018cf63c  ldr x8,[x8, #0x30]
71018cf640  add x2,sp,#0x70
71018cf644  blr x8
71018cf648  tbz w0,#0x0,0x71018cf660
71018cf64c  mov w0,#0x10
71018cf650  mov w1,#0x8
71018cf654  bl 0x710392e290
71018cf658  mov x23,x0
71018cf65c  cbnz x0,0x71018cf664
71018cf660  mov x23,xzr
71018cf664  mov x0,x23
71018cf668  bl 0x7103773200
71018cf66c  mov w0,#0x10
71018cf670  mov w1,#0x8
71018cf674  str x23,[x22, #0x168]
71018cf678  bl 0x710392e290
71018cf67c  mov x23,x0
71018cf680  cbnz x0,0x71018cf6cc
71018cf684  adrp x8,0x7105332000
71018cf688  ldr x0,[x8, #0xf00]
71018cf68c  cbz x0,0x71018cf6c8
71018cf690  mov w8,#0x8
71018cf694  str wzr,[sp, #0x20]
71018cf698  add x1,sp,#0x20
71018cf69c  str x8,[sp, #0x70]
71018cf6a0  ldr x8,[x0]
71018cf6a4  ldr x8,[x8, #0x30]
71018cf6a8  add x2,sp,#0x70
71018cf6ac  blr x8
71018cf6b0  tbz w0,#0x0,0x71018cf6c8
71018cf6b4  mov w0,#0x10
71018cf6b8  mov w1,#0x8
71018cf6bc  bl 0x710392e290
71018cf6c0  mov x23,x0
71018cf6c4  cbnz x0,0x71018cf6cc
71018cf6c8  mov x23,xzr
71018cf6cc  mov x0,x23
71018cf6d0  bl 0x7103773200
71018cf6d4  mov w0,#0x10
71018cf6d8  mov w1,#0x8
71018cf6dc  str x23,[x22, #0x170]
71018cf6e0  bl 0x710392e290
71018cf6e4  mov x23,x0
71018cf6e8  cbnz x0,0x71018cf734
71018cf6ec  adrp x8,0x7105332000
71018cf6f0  ldr x0,[x8, #0xf00]
71018cf6f4  cbz x0,0x71018cf730
71018cf6f8  mov w8,#0x8
71018cf6fc  str wzr,[sp, #0x20]
71018cf700  add x1,sp,#0x20
71018cf704  str x8,[sp, #0x70]
71018cf708  ldr x8,[x0]
71018cf70c  ldr x8,[x8, #0x30]
71018cf710  add x2,sp,#0x70
71018cf714  blr x8
71018cf718  tbz w0,#0x0,0x71018cf730
71018cf71c  mov w0,#0x10
71018cf720  mov w1,#0x8
71018cf724  bl 0x710392e290
71018cf728  mov x23,x0
71018cf72c  cbnz x0,0x71018cf734
71018cf730  mov x23,xzr
71018cf734  mov x0,x23
71018cf738  bl 0x7103773200
71018cf73c  add x0,x22,#0x1a8
71018cf740  str wzr,[x22, #0x1a0]
71018cf744  str x23,[x22, #0x178]
71018cf748  stp xzr,xzr,[x22, #0x190]
71018cf74c  stp xzr,xzr,[x22, #0x180]
71018cf750  bl 0x7103776290
71018cf754  add x0,x22,#0x1b8
71018cf758  bl 0x7103776290
71018cf75c  add x0,x22,#0x1c8
71018cf760  bl 0x7103776290
71018cf764  add x0,x22,#0x1d8
71018cf768  bl 0x7103776290
71018cf76c  adrp x8,0x7101d42000
71018cf770  add x8,x8,#0x290
71018cf774  adrp x9,0x7101d42000
71018cf778  add x9,x9,#0x2a0
71018cf77c  stp x8,xzr,[x22, #0x38]
71018cf780  adrp x8,0x7101d42000
71018cf784  add x8,x8,#0x420
71018cf788  str xzr,[x22, #0x208]
71018cf78c  stp x8,xzr,[x22, #0x58]
71018cf790  adrp x8,0x7101d42000
71018cf794  add x8,x8,#0x460
71018cf798  stp x8,xzr,[x22, #0x68]
71018cf79c  adrp x8,0x7101d42000
71018cf7a0  add x8,x8,#0x880
71018cf7a4  stp x8,xzr,[x22, #0x88]
71018cf7a8  adrp x8,0x7101d42000
71018cf7ac  add x8,x8,#0xca0
71018cf7b0  stp x8,xzr,[x22, #0x98]
71018cf7b4  adrp x8,0x7101d43000
71018cf7b8  add x8,x8,#0x50
71018cf7bc  stp x8,xzr,[x22, #0xb8]
71018cf7c0  adrp x8,0x7101d43000
71018cf7c4  add x8,x8,#0x150
71018cf7c8  stp x8,xzr,[x22, #0xd8]
71018cf7cc  ldrsw x8,[x22, #0x144]
71018cf7d0  cmp w8,#0x13
71018cf7d4  stp x9,xzr,[x22, #0x48]
71018cf7d8  adrp x9,0x7101d42000
71018cf7dc  add x9,x9,#0x800
71018cf7e0  stp x9,xzr,[x22, #0x78]
71018cf7e4  adrp x9,0x7101d42000
71018cf7e8  add x9,x9,#0xf80
71018cf7ec  stp x9,xzr,[x22, #0xa8]
71018cf7f0  adrp x9,0x7101d43000
71018cf7f4  add x9,x9,#0x3d0
71018cf7f8  stp x9,xzr,[x22, #0xc8]
71018cf7fc  adrp x9,0x7101d43000
71018cf800  add x9,x9,#0x480
71018cf804  stp xzr,xzr,[x22, #0x1f8]
71018cf808  stp xzr,xzr,[x22, #0x1e8]
71018cf80c  stp x9,xzr,[x22, #0xe8]
71018cf810  b.cs 0x71018d1128
71018cf814  add x8,x22,x8, LSL #0x2
71018cf818  mov x0,x22
71018cf81c  str wzr,[x8, #0xf8]
71018cf820  str x22,[x21, #0x80]
71018cf824  bl 0x7101d43940
71018cf828  adrp x19,0x7105333000
71018cf82c  add x19,x19,#0x600
71018cf830  str x19,[x21, #0x10]
71018cf834  ldr w8,[x19, #0x60]
71018cf838  str w8,[x21, #0x68]
71018cf83c  ldr w8,[x19, #0x64]
71018cf840  str w8,[x21, #0x6c]
71018cf844  adrp x28,0x7105333000
71018cf848  add x28,x28,#0x650
71018cf84c  mov w8,#0x1
71018cf850  ldaxrb w9,[x28]
71018cf854  stxrb w10,w8,[x28]
71018cf858  and w9,w9,#0x1
71018cf85c  cmp w10,#0x0
71018cf860  ccmp w9,#0x0,#0x0,eq
71018cf864  b.ne 0x71018cf850
71018cf868  adrp x25,0x7105333000
71018cf86c  add x25,x25,#0x648
71018cf870  ldr x8,[x25]
71018cf874  mov x9,x25
71018cf878  str x8,[x21, #0x48]
71018cf87c  mov x0,x21
71018cf880  str x21,[x9], #0x8
71018cf884  stlrb wzr,[x9]
71018cf888  bl 0x71032caea0
71018cf88c  ldr x0,[x26, #0x150]
71018cf890  str x21,[x26, #0x150]
71018cf894  cbz x0,0x71018cf89c
71018cf898  bl 0x71032cad20
71018cf89c  mov w1,#0x88
71018cf8a0  mov w0,#0x10
71018cf8a4  bl 0x710392e290
71018cf8a8  mov x21,x0
71018cf8ac  cbnz x0,0x71018cf8f8
71018cf8b0  adrp x8,0x7105332000
71018cf8b4  ldr x0,[x8, #0xf00]
71018cf8b8  cbz x0,0x71018cf8f4
71018cf8bc  mov w8,#0x88
71018cf8c0  str wzr,[sp, #0x20]
71018cf8c4  add x1,sp,#0x20
71018cf8c8  str x8,[sp, #0x70]
71018cf8cc  ldr x8,[x0]
71018cf8d0  ldr x8,[x8, #0x30]
71018cf8d4  add x2,sp,#0x70
71018cf8d8  blr x8
71018cf8dc  tbz w0,#0x0,0x71018cf8f4
71018cf8e0  mov w1,#0x88
71018cf8e4  mov w0,#0x10
71018cf8e8  bl 0x710392e290
71018cf8ec  mov x21,x0
71018cf8f0  cbnz x0,0x71018cf8f8
71018cf8f4  mov x21,xzr
71018cf8f8  adrp x8,0x71050af000
71018cf8fc  add x8,x8,#0x678
71018cf900  mov w1,#0x2f8
71018cf904  stp x8,xzr,[x21]
71018cf908  orr x8,xzr,#0x1ffffffff
71018cf90c  stp xzr,x8,[x21, #0x60]
71018cf910  mov w8,#0x1
71018cf914  mov w0,#0x10
71018cf918  stp xzr,xzr,[x21, #0x10]
71018cf91c  strb wzr,[x21, #0x58]
71018cf920  str x24,[x21, #0x78]
71018cf924  strb w8,[x21, #0x70]
71018cf928  stp xzr,xzr,[x21, #0x48]
71018cf92c  bl 0x710392e290
71018cf930  mov x22,x0
71018cf934  cbnz x0,0x71018cf980
71018cf938  adrp x8,0x7105332000
71018cf93c  ldr x0,[x8, #0xf00]
71018cf940  cbz x0,0x71018cf97c
71018cf944  mov w8,#0x2f8
71018cf948  str wzr,[sp, #0x20]
71018cf94c  add x1,sp,#0x20
71018cf950  str x8,[sp, #0x70]
71018cf954  ldr x8,[x0]
71018cf958  ldr x8,[x8, #0x30]
71018cf95c  add x2,sp,#0x70
71018cf960  blr x8
71018cf964  tbz w0,#0x0,0x71018cf97c
71018cf968  mov w1,#0x2f8
71018cf96c  mov w0,#0x10
71018cf970  bl 0x710392e290
71018cf974  mov x22,x0
71018cf978  cbnz x0,0x71018cf980
71018cf97c  mov x22,xzr
71018cf980  adrp x8,0x71050af000
71018cf984  add x8,x8,#0x3d8
71018cf988  mov w0,#0x10
71018cf98c  mov w1,#0x8
71018cf990  str x8,[x22]
71018cf994  bl 0x710392e290
71018cf998  mov x23,x0
71018cf99c  cbnz x0,0x71018cf9e8
71018cf9a0  adrp x8,0x7105332000
71018cf9a4  ldr x0,[x8, #0xf00]
71018cf9a8  cbz x0,0x71018cf9e4
71018cf9ac  mov w8,#0x8
71018cf9b0  str wzr,[sp, #0x20]
71018cf9b4  add x1,sp,#0x20
71018cf9b8  str x8,[sp, #0x70]
71018cf9bc  ldr x8,[x0]
71018cf9c0  ldr x8,[x8, #0x30]
71018cf9c4  add x2,sp,#0x70
71018cf9c8  blr x8
71018cf9cc  tbz w0,#0x0,0x71018cf9e4
71018cf9d0  mov w0,#0x10
71018cf9d4  mov w1,#0x8
71018cf9d8  bl 0x710392e290
71018cf9dc  mov x23,x0
71018cf9e0  cbnz x0,0x71018cf9e8
71018cf9e4  mov x23,xzr
71018cf9e8  mov x0,x23
71018cf9ec  bl 0x7103773200
71018cf9f0  mov w0,#0x10
71018cf9f4  mov w1,#0x8
71018cf9f8  str x23,[x22, #0x8]
71018cf9fc  bl 0x710392e290
71018cfa00  mov x23,x0
71018cfa04  cbnz x0,0x71018cfa50
71018cfa08  adrp x8,0x7105332000
71018cfa0c  ldr x0,[x8, #0xf00]
71018cfa10  cbz x0,0x71018cfa4c
71018cfa14  mov w8,#0x8
71018cfa18  str wzr,[sp, #0x20]
71018cfa1c  add x1,sp,#0x20
71018cfa20  str x8,[sp, #0x70]
71018cfa24  ldr x8,[x0]
71018cfa28  ldr x8,[x8, #0x30]
71018cfa2c  add x2,sp,#0x70
71018cfa30  blr x8
71018cfa34  tbz w0,#0x0,0x71018cfa4c
71018cfa38  mov w0,#0x10
71018cfa3c  mov w1,#0x8
71018cfa40  bl 0x710392e290
71018cfa44  mov x23,x0
71018cfa48  cbnz x0,0x71018cfa50
71018cfa4c  mov x23,xzr
71018cfa50  mov x0,x23
71018cfa54  bl 0x7103773200
71018cfa58  add x0,x22,#0x20
71018cfa5c  stp x23,xzr,[x22, #0x10]
71018cfa60  bl 0x71032cc410
71018cfa64  add x0,x22,#0x48
71018cfa68  bl 0x71032cc410
71018cfa6c  mov w0,#0x10
71018cfa70  mov w1,#0x8
71018cfa74  stp xzr,xzr,[x22, #0x90]
71018cfa78  stp xzr,xzr,[x22, #0x80]
71018cfa7c  stp xzr,xzr,[x22, #0x70]
71018cfa80  bl 0x710392e290
71018cfa84  mov x23,x0
71018cfa88  cbnz x0,0x71018cfad4
71018cfa8c  adrp x8,0x7105332000
71018cfa90  ldr x0,[x8, #0xf00]
71018cfa94  cbz x0,0x71018cfad0
71018cfa98  mov w8,#0x8
71018cfa9c  str wzr,[sp, #0x20]
71018cfaa0  add x1,sp,#0x20
71018cfaa4  str x8,[sp, #0x70]
71018cfaa8  ldr x8,[x0]
71018cfaac  ldr x8,[x8, #0x30]
71018cfab0  add x2,sp,#0x70
71018cfab4  blr x8
71018cfab8  tbz w0,#0x0,0x71018cfad0
71018cfabc  mov w0,#0x10
71018cfac0  mov w1,#0x8
71018cfac4  bl 0x710392e290
71018cfac8  mov x23,x0
71018cfacc  cbnz x0,0x71018cfad4
71018cfad0  mov x23,xzr
71018cfad4  mov x0,x23
71018cfad8  bl 0x7103773200
71018cfadc  mov w0,#0x10
71018cfae0  mov w1,#0x8
71018cfae4  str x23,[x22, #0xa0]
71018cfae8  bl 0x710392e290
71018cfaec  mov x23,x0
71018cfaf0  cbnz x0,0x71018cfb3c
71018cfaf4  adrp x8,0x7105332000
71018cfaf8  ldr x0,[x8, #0xf00]
71018cfafc  cbz x0,0x71018cfb38
71018cfb00  mov w8,#0x8
71018cfb04  str wzr,[sp, #0x20]
71018cfb08  add x1,sp,#0x20
71018cfb0c  str x8,[sp, #0x70]
71018cfb10  ldr x8,[x0]
71018cfb14  ldr x8,[x8, #0x30]
71018cfb18  add x2,sp,#0x70
71018cfb1c  blr x8
71018cfb20  tbz w0,#0x0,0x71018cfb38
71018cfb24  mov w0,#0x10
71018cfb28  mov w1,#0x8
71018cfb2c  bl 0x710392e290
71018cfb30  mov x23,x0
71018cfb34  cbnz x0,0x71018cfb3c
71018cfb38  mov x23,xzr
71018cfb3c  mov x0,x23
71018cfb40  bl 0x7103773200
71018cfb44  add x8,x22,#0x1f0
71018cfb48  str x8,[x22, #0x220]
71018cfb4c  add x8,x22,#0x22c
71018cfb50  mov w9,#0x4
71018cfb54  stp x23,x22,[x22, #0xa8]
71018cfb58  stp xzr,xzr,[x22, #0xc8]
71018cfb5c  add x0,x22,#0x2a8
71018cfb60  str w20,[x22, #0x1e0]
71018cfb64  strb wzr,[x22, #0x1e4]
71018cfb68  str xzr,[x22, #0xd8]
71018cfb6c  str xzr,[x22, #0x218]
71018cfb70  str xzr,[x22, #0x210]
71018cfb74  str xzr,[x22, #0x208]
71018cfb78  strh wzr,[x22, #0x228]
71018cfb7c  strb wzr,[x22, #0x22a]
71018cfb80  stp xzr,xzr,[x22, #0xb8]
71018cfb84  stp xzr,x20,[x22, #0x1d0]
71018cfb88  stp xzr,xzr,[x22, #0x1c0]
71018cfb8c  stp xzr,xzr,[x22, #0x1b0]
71018cfb90  stp xzr,xzr,[x22, #0x1a0]
71018cfb94  stp xzr,xzr,[x22, #0x190]
71018cfb98  stp xzr,xzr,[x22, #0x180]
71018cfb9c  stp xzr,xzr,[x22, #0x170]
71018cfba0  stp xzr,xzr,[x22, #0x160]
71018cfba4  stp xzr,xzr,[x22, #0x150]
71018cfba8  stp xzr,xzr,[x22, #0x140]
71018cfbac  stp xzr,xzr,[x22, #0x130]
71018cfbb0  stp xzr,xzr,[x22, #0x120]
71018cfbb4  stp xzr,xzr,[x22, #0x110]
71018cfbb8  stp xzr,xzr,[x22, #0x100]
71018cfbbc  stp xzr,xzr,[x22, #0xf0]
71018cfbc0  stp xzr,xzr,[x22, #0xe0]
71018cfbc4  stp xzr,xzr,[x22, #0x1f8]
71018cfbc8  stp x24,xzr,[x22, #0x1e8]
71018cfbcc  str x9,[x8]
71018cfbd0  add x8,x22,#0x29c
71018cfbd4  str w9,[x22, #0x234]
71018cfbd8  str wzr,[x22, #0x298]
71018cfbdc  str xzr,[x22, #0x290]
71018cfbe0  str xzr,[x22, #0x288]
71018cfbe4  str xzr,[x22, #0x280]
71018cfbe8  str xzr,[x22, #0x278]
71018cfbec  str xzr,[x22, #0x270]
71018cfbf0  str xzr,[x22, #0x268]
71018cfbf4  str xzr,[x22, #0x260]
71018cfbf8  str xzr,[x22, #0x258]
71018cfbfc  str xzr,[x22, #0x250]
71018cfc00  str xzr,[x22, #0x248]
71018cfc04  str xzr,[x22, #0x240]
71018cfc08  str xzr,[x22, #0x238]
71018cfc0c  str x9,[x8]
71018cfc10  bl 0x7103776290
71018cfc14  add x8,x22,#0x2dc
71018cfc18  add x9,x22,#0x2eb
71018cfc1c  strb wzr,[x22, #0x2b8]
71018cfc20  str xzr,[x22, #0x2c0]
71018cfc24  strb wzr,[x22, #0x2d0]
71018cfc28  strb wzr,[x22, #0x2d9]
71018cfc2c  str xzr,[x9]
71018cfc30  add x9,x22,#0x2e4
71018cfc34  str xzr,[x8]
71018cfc38  adrp x8,0x7101d47000
71018cfc3c  add x8,x8,#0xde0
71018cfc40  str xzr,[x9]
71018cfc44  adrp x9,0x7101d47000
71018cfc48  add x9,x9,#0xdd0
71018cfc4c  stp x8,xzr,[x22, #0xe8]
71018cfc50  adrp x8,0x7101d47000
71018cfc54  add x8,x8,#0xf00
71018cfc58  stp x8,xzr,[x22, #0xf8]
71018cfc5c  adrp x8,0x7101d48000
71018cfc60  add x8,x8,#0x1c0
71018cfc64  stp x8,xzr,[x22, #0x118]
71018cfc68  adrp x8,0x7101d48000
71018cfc6c  add x8,x8,#0x3e0
71018cfc70  stp x8,xzr,[x22, #0x128]
71018cfc74  adrp x8,0x7101d48000
71018cfc78  add x8,x8,#0x970
71018cfc7c  stp x8,xzr,[x22, #0x148]
71018cfc80  adrp x8,0x7101d48000
71018cfc84  add x8,x8,#0xed0
71018cfc88  stp x8,xzr,[x22, #0x158]
71018cfc8c  ldrsw x8,[x22, #0x1d4]
71018cfc90  cmp w8,#0x13
71018cfc94  stp x9,xzr,[x22, #0xd8]
71018cfc98  adrp x9,0x7101d47000
71018cfc9c  add x9,x9,#0xf80
71018cfca0  stp x9,xzr,[x22, #0x108]
71018cfca4  adrp x9,0x7101d48000
71018cfca8  add x9,x9,#0x600
71018cfcac  stp x9,xzr,[x22, #0x138]
71018cfcb0  adrp x9,0x7101d49000
71018cfcb4  add x9,x9,#0x2d0
71018cfcb8  stp x9,xzr,[x22, #0x168]
71018cfcbc  adrp x9,0x7101d49000
71018cfcc0  add x9,x9,#0x350
71018cfcc4  stp x9,xzr,[x22, #0x178]
71018cfcc8  b.cs 0x71018d1128
71018cfccc  add x8,x22,x8, LSL #0x2
71018cfcd0  mov x0,x22
71018cfcd4  str wzr,[x8, #0x188]
71018cfcd8  str x22,[x21, #0x80]
71018cfcdc  bl 0x7101d4b6b0
71018cfce0  str x19,[x21, #0x10]
71018cfce4  ldr w8,[x19, #0x60]
71018cfce8  str w8,[x21, #0x68]
71018cfcec  ldr w8,[x19, #0x64]
71018cfcf0  str w8,[x21, #0x6c]
71018cfcf4  mov w8,#0x1
71018cfcf8  ldaxrb w9,[x28]
71018cfcfc  stxrb w10,w8,[x28]
71018cfd00  and w9,w9,#0x1
71018cfd04  cmp w10,#0x0
71018cfd08  ccmp w9,#0x0,#0x0,eq
71018cfd0c  b.ne 0x71018cfcf8
71018cfd10  ldr x8,[x25]
71018cfd14  mov x9,x25
71018cfd18  str x8,[x21, #0x48]
71018cfd1c  str x21,[x9], #0x8
71018cfd20  mov x0,x21
71018cfd24  stlrb wzr,[x9]
71018cfd28  bl 0x71032caea0
71018cfd2c  ldr x0,[x26, #0x158]
71018cfd30  str x21,[x26, #0x158]
71018cfd34  cbz x0,0x71018cfd3c
71018cfd38  bl 0x71032cad20
71018cfd3c  mov w1,#0x88
71018cfd40  mov w0,#0x10
71018cfd44  bl 0x710392e290
71018cfd48  mov x21,x0
71018cfd4c  cbnz x0,0x71018cfd98
71018cfd50  adrp x8,0x7105332000
71018cfd54  ldr x0,[x8, #0xf00]
71018cfd58  cbz x0,0x71018cfd94
71018cfd5c  mov w8,#0x88
71018cfd60  str wzr,[sp, #0x20]
71018cfd64  add x1,sp,#0x20
71018cfd68  str x8,[sp, #0x70]
71018cfd6c  ldr x8,[x0]
71018cfd70  ldr x8,[x8, #0x30]
71018cfd74  add x2,sp,#0x70
71018cfd78  blr x8
71018cfd7c  tbz w0,#0x0,0x71018cfd94
71018cfd80  mov w1,#0x88
71018cfd84  mov w0,#0x10
71018cfd88  bl 0x710392e290
71018cfd8c  mov x21,x0
71018cfd90  cbnz x0,0x71018cfd98
71018cfd94  mov x21,xzr
71018cfd98  adrp x8,0x71050af000
71018cfd9c  add x8,x8,#0x3a0
71018cfda0  mov w1,#0x150
71018cfda4  stp x8,xzr,[x21]
71018cfda8  orr x8,xzr,#0x1ffffffff
71018cfdac  stp xzr,x8,[x21, #0x60]
71018cfdb0  mov w8,#0x1
71018cfdb4  mov w0,#0x10
71018cfdb8  stp xzr,xzr,[x21, #0x10]
71018cfdbc  strb wzr,[x21, #0x58]
71018cfdc0  str x24,[x21, #0x78]
71018cfdc4  strb w8,[x21, #0x70]
71018cfdc8  stp xzr,xzr,[x21, #0x48]
71018cfdcc  bl 0x710392e290
71018cfdd0  mov x22,x0
71018cfdd4  cbnz x0,0x71018cfe20
71018cfdd8  adrp x8,0x7105332000
71018cfddc  ldr x0,[x8, #0xf00]
71018cfde0  cbz x0,0x71018cfe1c
71018cfde4  mov w8,#0x150
71018cfde8  str wzr,[sp, #0x20]
71018cfdec  add x1,sp,#0x20
71018cfdf0  str x8,[sp, #0x70]
71018cfdf4  ldr x8,[x0]
71018cfdf8  ldr x8,[x8, #0x30]
71018cfdfc  add x2,sp,#0x70
71018cfe00  blr x8
71018cfe04  tbz w0,#0x0,0x71018cfe1c
71018cfe08  mov w1,#0x150
71018cfe0c  mov w0,#0x10
71018cfe10  bl 0x710392e290
71018cfe14  mov x22,x0
71018cfe18  cbnz x0,0x71018cfe20
71018cfe1c  mov x22,xzr
71018cfe20  mov w0,#0x10
71018cfe24  mov w1,#0x8
71018cfe28  str w20,[x22, #0xf0]
71018cfe2c  stp xzr,xzr,[x22, #0x10]
71018cfe30  strb wzr,[x22, #0xf4]
71018cfe34  str x24,[x22, #0xf8]
71018cfe38  strh wzr,[x22, #0x104]
71018cfe3c  str wzr,[x22, #0x100]
71018cfe40  stp x22,xzr,[x22]
71018cfe44  stp xzr,x20,[x22, #0xe0]
71018cfe48  stp xzr,xzr,[x22, #0xd0]
71018cfe4c  stp xzr,xzr,[x22, #0xc0]
71018cfe50  stp xzr,xzr,[x22, #0xb0]
71018cfe54  stp xzr,xzr,[x22, #0xa0]
71018cfe58  stp xzr,xzr,[x22, #0x90]
71018cfe5c  stp xzr,xzr,[x22, #0x80]
71018cfe60  stp xzr,xzr,[x22, #0x70]
71018cfe64  stp xzr,xzr,[x22, #0x60]
71018cfe68  stp xzr,xzr,[x22, #0x50]
71018cfe6c  stp xzr,xzr,[x22, #0x40]
71018cfe70  stp xzr,xzr,[x22, #0x30]
71018cfe74  stp xzr,xzr,[x22, #0x20]
71018cfe78  bl 0x710392e290
71018cfe7c  mov x23,x0
71018cfe80  cbnz x0,0x71018cfecc
71018cfe84  adrp x8,0x7105332000
71018cfe88  ldr x0,[x8, #0xf00]
71018cfe8c  cbz x0,0x71018cfec8
71018cfe90  mov w8,#0x8
71018cfe94  str wzr,[sp, #0x20]
71018cfe98  add x1,sp,#0x20
71018cfe9c  str x8,[sp, #0x70]
71018cfea0  ldr x8,[x0]
71018cfea4  ldr x8,[x8, #0x30]
71018cfea8  add x2,sp,#0x70
71018cfeac  blr x8
71018cfeb0  tbz w0,#0x0,0x71018cfec8
71018cfeb4  mov w0,#0x10
71018cfeb8  mov w1,#0x8
71018cfebc  bl 0x710392e290
71018cfec0  mov x23,x0
71018cfec4  cbnz x0,0x71018cfecc
71018cfec8  mov x23,xzr
71018cfecc  mov x0,x23
71018cfed0  bl 0x7103773200
71018cfed4  str x23,[x22, #0x108]
71018cfed8  add x23,x22,#0x110
71018cfedc  mov x0,x23
71018cfee0  bl 0x7103776290
71018cfee4  orr x8,xzr,#0x1ffffffff
71018cfee8  str x8,[x22, #0x140]
71018cfeec  mov w8,#0x1
71018cfef0  stp xzr,xzr,[x22, #0x130]
71018cfef4  adrp x9,0x7101d47000
71018cfef8  add x9,x9,#0x1d0
71018cfefc  str w8,[x22, #0x148]
71018cff00  adrp x8,0x7101d47000
71018cff04  add x8,x8,#0x160
71018cff08  stp x8,xzr,[x22, #0x28]
71018cff0c  adrp x8,0x7101d47000
71018cff10  add x8,x8,#0x170
71018cff14  stp x8,xzr,[x22, #0x38]
71018cff18  adrp x8,0x7101d47000
71018cff1c  add x8,x8,#0x2d0
71018cff20  stp x8,xzr,[x22, #0x58]
71018cff24  adrp x8,0x7101d47000
71018cff28  add x8,x8,#0x820
71018cff2c  stp x8,xzr,[x22, #0x68]
71018cff30  ldrsw x8,[x22, #0xe4]
71018cff34  cmp w8,#0x13
71018cff38  stp x9,xzr,[x22, #0x48]
71018cff3c  adrp x9,0x7101d47000
71018cff40  add x9,x9,#0x910
71018cff44  stp x9,xzr,[x22, #0x78]
71018cff48  adrp x9,0x7101d47000
71018cff4c  add x9,x9,#0x980
71018cff50  stp xzr,xzr,[x22, #0x120]
71018cff54  stp x9,xzr,[x22, #0x88]
71018cff58  b.cs 0x71018d1128
71018cff5c  add x8,x22,x8, LSL #0x2
71018cff60  str wzr,[x8, #0x98]
71018cff64  str x22,[x21, #0x80]
71018cff68  adrp x19,0x71052c4000
71018cff6c  ldr x8,[x19, #0xc58]
71018cff70  ldr x8,[x8, #0x8]
71018cff74  ldr x9,[x8, #0x80]
71018cff78  ldrb w9,[x9, #0x244]
71018cff7c  add x24,x22,#0x108
71018cff80  cbz w9,0x71018cffc0
71018cff84  ldr x0,[x8, #0xb0]
71018cff88  mov w1,#0x232f
71018cff8c  bl 0x7101739120
71018cff90  and w8,w0,#0xff
71018cff94  cmp w8,#0x1
71018cff98  b.ne 0x71018cfffc
71018cff9c  ldr x8,[x19, #0xc58]
71018cffa0  ldr x8,[x8, #0x8]
71018cffa4  ldr x0,[x8, #0xb0]
71018cffa8  mov w1,#0x2336
71018cffac  bl 0x7101739120
71018cffb0  and w8,w0,#0xff
71018cffb4  cmp w8,#0x1
71018cffb8  b.ne 0x71018cfffc
71018cffbc  b 0x71018cfff4
71018cffc0  ldr x8,[x27, #0x510]
71018cffc4  ldr x8,[x8]
71018cffc8  ldr x8,[x8, #0x268]
71018cffcc  ldr x8,[x8]
71018cffd0  ldr x8,[x8]
71018cffd4  mov w9,#0x6585
71018cffd8  ldrb w9,[x8, x9, LSL ]
71018cffdc  cmp w9,#0x1
71018cffe0  b.ne 0x71018cfffc
71018cffe4  mov w9,#0x6586
71018cffe8  ldrb w8,[x8, x9, LSL ]
71018cffec  cmp w8,#0x1
71018cfff0  b.ne 0x71018cfffc
71018cfff4  mov w8,wzr
71018cfff8  b 0x71018d0000
71018cfffc  mov w8,#0x1
71018d0000  strb w8,[x22, #0x103]
71018d0004  ldr x8,[x22, #0xf8]
71018d0008  ldr x1,[x8]
71018d000c  adrp x2,0x7104545000
71018d0010  add x2,x2,#0x660
71018d0014  mov w3,#0x1
71018d0018  mov x0,x24
71018d001c  mov w19,#0x1
71018d0020  bl 0x71032cbf30
71018d0024  ldr x8,[x22, #0x108]
71018d0028  ldr x8,[x8]
71018d002c  ldr x0,[x8]
71018d0030  mov w1,wzr
71018d0034  bl 0x71037760f0
71018d0038  ldr x8,[x22, #0x108]
71018d003c  ldr x8,[x8]
71018d0040  add x9,x8,#0x8
71018d0044  cmp x9,x23
71018d0048  b.eq 0x71018d00bc
71018d004c  ldr x9,[x8, #0x10]
71018d0050  ldr x9,[x9]
71018d0054  ldr x10,[x22, #0x118]
71018d0058  str x9,[x10]
71018d005c  ldr x9,[x8, #0x10]
71018d0060  ldr x9,[x9, #0x8]
71018d0064  ldr x10,[x22, #0x118]
71018d0068  str x9,[x10, #0x8]
71018d006c  ldr x9,[x8, #0x10]
71018d0070  ldr x8,[x22, #0x118]
71018d0074  cmp x8,x9
71018d0078  b.eq 0x71018d00bc
71018d007c  ldr x10,[x9, #0x18]
71018d0080  ldr x10,[x10]
71018d0084  ldr x11,[x8, #0x18]
71018d0088  str x10,[x11]
71018d008c  ldr x10,[x9, #0x18]
71018d0090  ldr x10,[x10, #0x8]
71018d0094  ldr x11,[x8, #0x18]
71018d0098  str x10,[x11, #0x8]
71018d009c  ldr x10,[x9, #0x18]
71018d00a0  ldr x10,[x10, #0x10]
71018d00a4  ldr x11,[x8, #0x18]
71018d00a8  str x10,[x11, #0x10]
71018d00ac  ldr x9,[x9, #0x18]
71018d00b0  ldr x9,[x9, #0x18]
71018d00b4  ldr x8,[x8, #0x18]
71018d00b8  str x9,[x8, #0x18]
71018d00bc  mov w8,#0x101
71018d00c0  strh w8,[sp, #0x78]
71018d00c4  mov x8,#0x41f0000000000000
71018d00c8  str x8,[sp, #0x88]
71018d00cc  add x8,sp,#0x70
71018d00d0  str w19,[sp, #0x80]
71018d00d4  strh w19,[sp, #0x84]
71018d00d8  add x1,x8,#0xc0
71018d00dc  strb w19,[sp, #0x86]
71018d00e0  adrp x8,0x7105186000
71018d00e4  add x8,x8,#0xd0
71018d00e8  add x19,sp,#0x20
71018d00ec  add x0,sp,#0x20
71018d00f0  add x25,x22,#0x120
71018d00f4  str xzr,[sp, #0x70]
71018d00f8  strh wzr,[sp, #0x7e]
71018d00fc  stur wzr,[sp, #0x7a]
71018d0100  str wzr,[sp, #0x90]
71018d0104  str xzr,[sp, #0xc0]
71018d0108  str xzr,[sp, #0xf0]
71018d010c  str xzr,[sp, #0x120]
71018d0110  str xzr,[sp, #0x150]
71018d0114  str xzr,[sp, #0x180]
71018d0118  str wzr,[sp, #0x190]
71018d011c  str x8,[sp, #0x20]
71018d0120  str x19,[sp, #0x40]
71018d0124  bl 0x7101989a30
71018d0128  ldr x0,[sp, #0x40]
71018d012c  cmp x19,x0
71018d0130  b.eq 0x71018d0144
71018d0134  cbz x0,0x71018d0150
71018d0138  ldr x8,[x0]
71018d013c  ldr x8,[x8, #0x28]
71018d0140  b 0x71018d014c
71018d0144  ldr x8,[x0]
71018d0148  ldr x8,[x8, #0x20]
71018d014c  blr x8
71018d0150  adrp x2,0x7104433000
71018d0154  add x2,x2,#0x952
71018d0158  add x3,sp,#0x70
71018d015c  mov x0,x25
71018d0160  mov x1,x23
71018d0164  str wzr,[x22, #0x140]
71018d0168  add x24,x22,#0x128
71018d016c  bl 0x7103770b30
71018d0170  adrp x2,0x7104401000
71018d0174  add x2,x2,#0xdad
71018d0178  mov x0,x25
71018d017c  mov w1,wzr
71018d0180  bl 0x71037717d0
71018d0184  adrp x2,0x7104308000
71018d0188  add x2,x2,#0xc5c
71018d018c  mov w1,#0x1
71018d0190  mov x0,x25
71018d0194  bl 0x71037717d0
71018d0198  adrp x2,0x710425d000
71018d019c  add x2,x2,#0xa54
71018d01a0  mov w1,#0x2
71018d01a4  mov x0,x25
71018d01a8  bl 0x71037717d0
71018d01ac  ldr x0,[x22, #0x120]
71018d01b0  ldr x9,[x0, #0x1b8]
71018d01b4  cbz x9,0x71018d0314
71018d01b8  add x8,x0,#0x1b8
71018d01bc  mov x10,x8
71018d01c0  mov x11,x9
71018d01c4  ldr w12,[x11, #0x20]
71018d01c8  cmp w12,#0x0
71018d01cc  cset w12,lt
71018d01d0  csel x10,x10,x11,lt
71018d01d4  ldr x11,[x11, w12, UXTW #0x3]
71018d01d8  cbnz x11,0x71018d01c4
71018d01dc  cmp x10,x8
71018d01e0  b.eq 0x71018d0230
71018d01e4  ldr w11,[x10, #0x20]
71018d01e8  cmp w11,#0x0
71018d01ec  b.gt 0x71018d0230
71018d01f0  ldr x26,[x10, #0x28]
71018d01f4  cbz x26,0x71018d0230
71018d01f8  ldr x8,[x26]
71018d01fc  ldr x8,[x8, #0x1f8]
71018d0200  mov w1,#0x1
71018d0204  mov x0,x26
71018d0208  blr x8
71018d020c  ldr x8,[x26]
71018d0210  ldr x8,[x8, #0x388]
71018d0214  mov x0,x26
71018d0218  mov w1,wzr
71018d021c  mov w2,wzr
71018d0220  blr x8
71018d0224  ldr x0,[x25]
71018d0228  ldr x9,[x0, #0x1b8]
71018d022c  add x8,x0,#0x1b8
71018d0230  cbz x9,0x71018d0314
71018d0234  mov x10,x8
71018d0238  mov x11,x9
71018d023c  ldr w12,[x11, #0x20]
71018d0240  cmp w12,#0x1
71018d0244  cset w12,lt
71018d0248  csel x10,x10,x11,lt
71018d024c  ldr x11,[x11, w12, UXTW #0x3]
71018d0250  cbnz x11,0x71018d023c
71018d0254  cmp x10,x8
71018d0258  b.eq 0x71018d02a8
71018d025c  ldr w11,[x10, #0x20]
71018d0260  cmp w11,#0x1
71018d0264  b.gt 0x71018d02a8
71018d0268  ldr x26,[x10, #0x28]
71018d026c  cbz x26,0x71018d02a8
71018d0270  ldr x8,[x26]
71018d0274  ldr x8,[x8, #0x1f8]
71018d0278  mov w1,#0x1
71018d027c  mov x0,x26
71018d0280  blr x8
71018d0284  ldr x8,[x26]
71018d0288  ldr x8,[x8, #0x388]
71018d028c  mov x0,x26
71018d0290  mov w1,wzr
71018d0294  mov w2,wzr
71018d0298  blr x8
71018d029c  ldr x0,[x25]
71018d02a0  ldr x9,[x0, #0x1b8]
71018d02a4  add x8,x0,#0x1b8
71018d02a8  cbz x9,0x71018d0314
71018d02ac  mov x10,x8
71018d02b0  ldr w11,[x9, #0x20]
71018d02b4  cmp w11,#0x2
71018d02b8  cset w11,lt
71018d02bc  csel x10,x10,x9,lt
71018d02c0  ldr x9,[x9, w11, UXTW #0x3]
71018d02c4  cbnz x9,0x71018d02b0
71018d02c8  cmp x10,x8
71018d02cc  b.eq 0x71018d0314
71018d02d0  ldr w8,[x10, #0x20]
71018d02d4  cmp w8,#0x2
71018d02d8  b.gt 0x71018d0314
71018d02dc  ldr x26,[x10, #0x28]
71018d02e0  cbz x26,0x71018d0314
71018d02e4  ldr x8,[x26]
71018d02e8  ldr x8,[x8, #0x1f8]
71018d02ec  mov w1,#0x1
71018d02f0  mov x0,x26
71018d02f4  blr x8
71018d02f8  ldr x8,[x26]
71018d02fc  ldr x8,[x8, #0x388]
71018d0300  mov x0,x26
71018d0304  mov w1,wzr
71018d0308  mov w2,wzr
71018d030c  blr x8
71018d0310  ldr x0,[x25]
71018d0314  ldr x8,[x0]
71018d0318  ldr x8,[x8, #0x60]
71018d031c  mov w1,wzr
71018d0320  blr x8
71018d0324  ldr w1,[x22, #0x140]
71018d0328  mov w2,#0x1
71018d032c  mov x0,x25
71018d0330  bl 0x7103771a80
71018d0334  ldrb w8,[x22, #0x104]
71018d0338  eor w8,w8,#0x1
71018d033c  str w8,[x22, #0x144]
71018d0340  adrp x1,0x71043f0000
71018d0344  add x1,x1,#0xc49
71018d0348  sub x8,x29,#0x70
71018d034c  mov x0,x23
71018d0350  bl 0x7103776640
71018d0354  adrp x2,0x7104307000
71018d0358  add x2,x2,#0x72
71018d035c  sub x1,x29,#0x70
71018d0360  add x3,sp,#0x70
71018d0364  mov x0,x24
71018d0368  bl 0x7103770b30
71018d036c  adrp x25,0x71043cf000
71018d0370  add x25,x25,#0x727
71018d0374  mov x0,x24
71018d0378  mov w1,wzr
71018d037c  mov x2,x25
71018d0380  bl 0x71037717d0
71018d0384  adrp x2,0x71043be000
71018d0388  add x2,x2,#0x940
71018d038c  mov w1,#0x1
71018d0390  mov x0,x24
71018d0394  bl 0x71037717d0
71018d0398  sub x8,x29,#0x80
71018d039c  sub x0,x29,#0x70
71018d03a0  mov x1,x25
71018d03a4  bl 0x7103776640
71018d03a8  adrp x1,0x71043cf000
71018d03ac  add x1,x1,#0xca4
71018d03b0  add x8,sp,#0x20
71018d03b4  sub x0,x29,#0x80
71018d03b8  bl 0x7103776910
71018d03bc  adrp x1,0x7104319000
71018d03c0  add x1,x1,#0x1f1
71018d03c4  add x0,sp,#0x20
71018d03c8  bl 0x710377a120
71018d03cc  ldr x0,[sp, #0x28]
71018d03d0  adrp x27,0x710523d000
71018d03d4  add x27,x27,#0x9a8
71018d03d8  stp x27,xzr,[sp, #0x20]
71018d03dc  cbz x0,0x71018d03e4
71018d03e0  bl 0x710392eb40
71018d03e4  ldur x25,[x29, #-0x78]
71018d03e8  adrp x20,0x710523d000
71018d03ec  add x20,x20,#0x988
71018d03f0  stp x20,xzr,[x29, #-0x80]
71018d03f4  cbz x25,0x71018d0410
71018d03f8  ldr x0,[x25, #0x18]
71018d03fc  stp x27,xzr,[x25, #0x10]
71018d0400  cbz x0,0x71018d0408
71018d0404  bl 0x710392eb40
71018d0408  mov x0,x25
71018d040c  bl 0x710392eb40
71018d0410  adrp x1,0x71043be000
71018d0414  add x1,x1,#0x940
71018d0418  sub x8,x29,#0x80
71018d041c  sub x0,x29,#0x70
71018d0420  bl 0x7103776640
71018d0424  adrp x1,0x71043cf000
71018d0428  add x1,x1,#0xca4
71018d042c  add x8,sp,#0x20
71018d0430  sub x0,x29,#0x80
71018d0434  bl 0x7103776910
71018d0438  adrp x1,0x7104280000
71018d043c  add x1,x1,#0xd2d
71018d0440  add x0,sp,#0x20
71018d0444  bl 0x710377a120
71018d0448  ldr x0,[sp, #0x28]
71018d044c  stp x27,xzr,[sp, #0x20]
71018d0450  cbz x0,0x71018d0458
71018d0454  bl 0x710392eb40
71018d0458  ldur x25,[x29, #-0x78]
71018d045c  stp x20,xzr,[x29, #-0x80]
71018d0460  cbz x25,0x71018d047c
71018d0464  ldr x0,[x25, #0x18]
71018d0468  stp x27,xzr,[x25, #0x10]
71018d046c  cbz x0,0x71018d0474
71018d0470  bl 0x710392eb40
71018d0474  mov x0,x25
71018d0478  bl 0x710392eb40
71018d047c  ldr x0,[x24]
71018d0480  ldr x9,[x0, #0x1b8]
71018d0484  cbz x9,0x71018d065c
71018d0488  add x8,x0,#0x1b8
71018d048c  mov x10,x8
71018d0490  mov x11,x9
71018d0494  ldr w12,[x11, #0x20]
71018d0498  cmp w12,#0x0
71018d049c  cset w12,lt
71018d04a0  csel x10,x10,x11,lt
71018d04a4  ldr x11,[x11, w12, UXTW #0x3]
71018d04a8  cbnz x11,0x71018d0494
71018d04ac  cmp x10,x8
71018d04b0  b.eq 0x71018d0500
71018d04b4  ldr w11,[x10, #0x20]
71018d04b8  cmp w11,#0x0
71018d04bc  b.gt 0x71018d0500
71018d04c0  ldr x25,[x10, #0x28]
71018d04c4  cbz x25,0x71018d0500
71018d04c8  ldr x8,[x25]
71018d04cc  ldr x8,[x8, #0x1f8]
71018d04d0  mov w1,#0x1
71018d04d4  mov x0,x25
71018d04d8  blr x8
71018d04dc  ldr x8,[x25]
71018d04e0  ldr x8,[x8, #0x388]
71018d04e4  mov x0,x25
71018d04e8  mov w1,wzr
71018d04ec  mov w2,wzr
71018d04f0  blr x8
71018d04f4  ldr x0,[x24]
71018d04f8  ldr x9,[x0, #0x1b8]
71018d04fc  add x8,x0,#0x1b8
71018d0500  cbz x9,0x71018d065c
71018d0504  mov x10,x8
71018d0508  mov x11,x9
71018d050c  ldr w12,[x11, #0x20]
71018d0510  cmp w12,#0x1
71018d0514  cset w12,lt
71018d0518  csel x10,x10,x11,lt
71018d051c  ldr x11,[x11, w12, UXTW #0x3]
71018d0520  cbnz x11,0x71018d050c
71018d0524  cmp x10,x8
71018d0528  b.eq 0x71018d0578
71018d052c  ldr w11,[x10, #0x20]
71018d0530  cmp w11,#0x1
71018d0534  b.gt 0x71018d0578
71018d0538  ldr x25,[x10, #0x28]
71018d053c  cbz x25,0x71018d0578
71018d0540  ldr x8,[x25]
71018d0544  ldr x8,[x8, #0x1f8]
71018d0548  mov w1,#0x1
71018d054c  mov x0,x25
71018d0550  blr x8
71018d0554  ldr x8,[x25]
71018d0558  ldr x8,[x8, #0x388]
71018d055c  mov x0,x25
71018d0560  mov w1,wzr
71018d0564  mov w2,wzr
71018d0568  blr x8
71018d056c  ldr x0,[x24]
71018d0570  ldr x9,[x0, #0x1b8]
71018d0574  add x8,x0,#0x1b8
71018d0578  cbz x9,0x71018d065c
71018d057c  mov x10,x8
71018d0580  mov x11,x9
71018d0584  ldr w12,[x11, #0x20]
71018d0588  cmp w12,#0x0
71018d058c  cset w12,lt
71018d0590  csel x10,x10,x11,lt
71018d0594  ldr x11,[x11, w12, UXTW #0x3]
71018d0598  cbnz x11,0x71018d0584
71018d059c  cmp x10,x8
71018d05a0  b.eq 0x71018d05f0
71018d05a4  ldr w11,[x10, #0x20]
71018d05a8  cmp w11,#0x0
71018d05ac  b.gt 0x71018d05f0
71018d05b0  ldr x25,[x10, #0x28]
71018d05b4  cbz x25,0x71018d05f0
71018d05b8  ldr x8,[x25]
71018d05bc  ldr x8,[x8, #0x208]
71018d05c0  mov x0,x25
71018d05c4  mov w1,wzr
71018d05c8  blr x8
71018d05cc  ldr x8,[x25]
71018d05d0  ldr x8,[x8, #0x388]
71018d05d4  mov w1,#0x1
71018d05d8  mov x0,x25
71018d05dc  mov w2,wzr
71018d05e0  blr x8
71018d05e4  ldr x0,[x24]
71018d05e8  ldr x9,[x0, #0x1b8]
71018d05ec  add x8,x0,#0x1b8
71018d05f0  cbz x9,0x71018d065c
71018d05f4  mov x10,x8
71018d05f8  ldr w11,[x9, #0x20]
71018d05fc  cmp w11,#0x1
71018d0600  cset w11,lt
71018d0604  csel x10,x10,x9,lt
71018d0608  ldr x9,[x9, w11, UXTW #0x3]
71018d060c  cbnz x9,0x71018d05f8
71018d0610  cmp x10,x8
71018d0614  b.eq 0x71018d065c
71018d0618  ldr w8,[x10, #0x20]
71018d061c  cmp w8,#0x1
71018d0620  b.gt 0x71018d065c
71018d0624  ldr x25,[x10, #0x28]
71018d0628  cbz x25,0x71018d065c
71018d062c  ldr x8,[x25]
71018d0630  ldr x8,[x8, #0x208]
71018d0634  mov x0,x25
71018d0638  mov w1,wzr
71018d063c  blr x8
71018d0640  ldr x8,[x25]
71018d0644  ldr x8,[x8, #0x388]
71018d0648  mov w1,#0x1
71018d064c  mov x0,x25
71018d0650  mov w2,wzr
71018d0654  blr x8
71018d0658  ldr x0,[x24]
71018d065c  ldr x8,[x0]
71018d0660  ldr x8,[x8, #0x60]
71018d0664  mov w1,wzr
71018d0668  blr x8
71018d066c  ldr x1,[x22, #0x128]
71018d0670  ldr w19,[x22, #0x144]
71018d0674  add x0,sp,#0x20
71018d0678  mov w2,wzr
71018d067c  bl 0x7103771d60
71018d0680  ldr x25,[sp, #0x28]
71018d0684  ldr x0,[x25]
71018d0688  cbz x0,0x71018d06a4
71018d068c  ldr x8,[x0]
71018d0690  ldr x8,[x8, #0x2f0]
71018d0694  cmp w19,#0x0
71018d0698  cset w1,eq
71018d069c  mov w2,wzr
71018d06a0  blr x8
71018d06a4  adrp x26,0x710523d000
71018d06a8  add x26,x26,#0x9c8
71018d06ac  stp x26,xzr,[sp, #0x20]
71018d06b0  cbz x25,0x71018d06bc
71018d06b4  mov x0,x25
71018d06b8  bl 0x710392eb40
71018d06bc  ldr x1,[x24]
71018d06c0  add x0,sp,#0x20
71018d06c4  mov w2,#0x1
71018d06c8  bl 0x7103771d60
71018d06cc  ldr x25,[sp, #0x28]
71018d06d0  ldr x0,[x25]
71018d06d4  cbz x0,0x71018d06f0
71018d06d8  ldr x8,[x0]
71018d06dc  ldr x8,[x8, #0x2f0]
71018d06e0  cmp w19,#0x1
71018d06e4  cset w1,eq
71018d06e8  mov w2,wzr
71018d06ec  blr x8
71018d06f0  add x24,x22,#0x130
71018d06f4  stp x26,xzr,[sp, #0x20]
71018d06f8  cbz x25,0x71018d0704
71018d06fc  mov x0,x25
71018d0700  bl 0x710392eb40
71018d0704  cmp w19,#0x0
71018d0708  cset w8,eq
71018d070c  strb w8,[x22, #0x104]
71018d0710  ldrb w8,[x22, #0x105]
71018d0714  eor w8,w8,#0x1
71018d0718  str w8,[x22, #0x148]
71018d071c  adrp x1,0x710436c000
71018d0720  add x1,x1,#0x6a7
71018d0724  add x8,sp,#0x20
71018d0728  mov x0,x23
71018d072c  bl 0x7103776640
71018d0730  adrp x2,0x7104307000
71018d0734  add x2,x2,#0x72
71018d0738  add x1,sp,#0x20
71018d073c  add x3,sp,#0x70
71018d0740  mov x0,x24
71018d0744  bl 0x7103770b30
71018d0748  adrp x25,0x71043cf000
71018d074c  add x25,x25,#0x727
71018d0750  mov x0,x24
71018d0754  mov w1,wzr
71018d0758  mov x2,x25
71018d075c  bl 0x71037717d0
71018d0760  adrp x2,0x71043be000
71018d0764  add x2,x2,#0x940
71018d0768  mov w1,#0x1
71018d076c  mov x0,x24
71018d0770  bl 0x71037717d0
71018d0774  sub x8,x29,#0x90
71018d0778  add x0,sp,#0x20
71018d077c  mov x1,x25
71018d0780  bl 0x7103776640
71018d0784  adrp x1,0x71043cf000
71018d0788  add x1,x1,#0xca4
71018d078c  sub x8,x29,#0x80
71018d0790  sub x0,x29,#0x90
71018d0794  bl 0x7103776910
71018d0798  adrp x1,0x71042c5000
71018d079c  add x1,x1,#0xe1
71018d07a0  sub x0,x29,#0x80
71018d07a4  bl 0x710377a120
71018d07a8  ldur x0,[x29, #-0x78]
71018d07ac  stp x27,xzr,[x29, #-0x80]
71018d07b0  cbz x0,0x71018d07b8
71018d07b4  bl 0x710392eb40
71018d07b8  ldur x25,[x29, #-0x88]
71018d07bc  stp x20,xzr,[x29, #-0x90]
71018d07c0  cbz x25,0x71018d07dc
71018d07c4  ldr x0,[x25, #0x18]
71018d07c8  stp x27,xzr,[x25, #0x10]
71018d07cc  cbz x0,0x71018d07d4
71018d07d0  bl 0x710392eb40
71018d07d4  mov x0,x25
71018d07d8  bl 0x710392eb40
71018d07dc  adrp x1,0x71043be000
71018d07e0  add x1,x1,#0x940
71018d07e4  sub x8,x29,#0x90
71018d07e8  add x0,sp,#0x20
71018d07ec  bl 0x7103776640
71018d07f0  adrp x1,0x71043cf000
71018d07f4  add x1,x1,#0xca4
71018d07f8  sub x8,x29,#0x80
71018d07fc  sub x0,x29,#0x90
71018d0800  bl 0x7103776910
71018d0804  adrp x1,0x7104443000
71018d0808  add x1,x1,#0xa62
71018d080c  sub x0,x29,#0x80
71018d0810  bl 0x710377a120
71018d0814  ldur x0,[x29, #-0x78]
71018d0818  stp x27,xzr,[x29, #-0x80]
71018d081c  cbz x0,0x71018d0824
71018d0820  bl 0x710392eb40
71018d0824  ldur x25,[x29, #-0x88]
71018d0828  stp x20,xzr,[x29, #-0x90]
71018d082c  cbz x25,0x71018d0848
71018d0830  ldr x0,[x25, #0x18]
71018d0834  stp x27,xzr,[x25, #0x10]
71018d0838  cbz x0,0x71018d0840
71018d083c  bl 0x710392eb40
71018d0840  mov x0,x25
71018d0844  bl 0x710392eb40
71018d0848  ldr x0,[x24]
71018d084c  ldr x9,[x0, #0x1b8]
71018d0850  add x25,x22,#0x138
71018d0854  cbz x9,0x71018d0a2c
71018d0858  add x8,x0,#0x1b8
71018d085c  mov x10,x8
71018d0860  mov x11,x9
71018d0864  ldr w12,[x11, #0x20]
71018d0868  cmp w12,#0x0
71018d086c  cset w12,lt
71018d0870  csel x10,x10,x11,lt
71018d0874  ldr x11,[x11, w12, UXTW #0x3]
71018d0878  cbnz x11,0x71018d0864
71018d087c  cmp x10,x8
71018d0880  b.eq 0x71018d08d0
71018d0884  ldr w11,[x10, #0x20]
71018d0888  cmp w11,#0x0
71018d088c  b.gt 0x71018d08d0
71018d0890  ldr x26,[x10, #0x28]
71018d0894  cbz x26,0x71018d08d0
71018d0898  ldr x8,[x26]
71018d089c  ldr x8,[x8, #0x1f8]
71018d08a0  mov w1,#0x1
71018d08a4  mov x0,x26
71018d08a8  blr x8
71018d08ac  ldr x8,[x26]
71018d08b0  ldr x8,[x8, #0x388]
71018d08b4  mov x0,x26
71018d08b8  mov w1,wzr
71018d08bc  mov w2,wzr
71018d08c0  blr x8
71018d08c4  ldr x0,[x24]
71018d08c8  ldr x9,[x0, #0x1b8]
71018d08cc  add x8,x0,#0x1b8
71018d08d0  cbz x9,0x71018d0a2c
71018d08d4  mov x10,x8
71018d08d8  mov x11,x9
71018d08dc  ldr w12,[x11, #0x20]
71018d08e0  cmp w12,#0x1
71018d08e4  cset w12,lt
71018d08e8  csel x10,x10,x11,lt
71018d08ec  ldr x11,[x11, w12, UXTW #0x3]
71018d08f0  cbnz x11,0x71018d08dc
71018d08f4  cmp x10,x8
71018d08f8  b.eq 0x71018d0948
71018d08fc  ldr w11,[x10, #0x20]
71018d0900  cmp w11,#0x1
71018d0904  b.gt 0x71018d0948
71018d0908  ldr x26,[x10, #0x28]
71018d090c  cbz x26,0x71018d0948
71018d0910  ldr x8,[x26]
71018d0914  ldr x8,[x8, #0x1f8]
71018d0918  mov w1,#0x1
71018d091c  mov x0,x26
71018d0920  blr x8
71018d0924  ldr x8,[x26]
71018d0928  ldr x8,[x8, #0x388]
71018d092c  mov x0,x26
71018d0930  mov w1,wzr
71018d0934  mov w2,wzr
71018d0938  blr x8
71018d093c  ldr x0,[x24]
71018d0940  ldr x9,[x0, #0x1b8]
71018d0944  add x8,x0,#0x1b8
71018d0948  cbz x9,0x71018d0a2c
71018d094c  mov x10,x8
71018d0950  mov x11,x9
71018d0954  ldr w12,[x11, #0x20]
71018d0958  cmp w12,#0x0
71018d095c  cset w12,lt
71018d0960  csel x10,x10,x11,lt
71018d0964  ldr x11,[x11, w12, UXTW #0x3]
71018d0968  cbnz x11,0x71018d0954
71018d096c  cmp x10,x8
71018d0970  b.eq 0x71018d09c0
71018d0974  ldr w11,[x10, #0x20]
71018d0978  cmp w11,#0x0
71018d097c  b.gt 0x71018d09c0
71018d0980  ldr x26,[x10, #0x28]
71018d0984  cbz x26,0x71018d09c0
71018d0988  ldr x8,[x26]
71018d098c  ldr x8,[x8, #0x208]
71018d0990  mov x0,x26
71018d0994  mov w1,wzr
71018d0998  blr x8
71018d099c  ldr x8,[x26]
71018d09a0  ldr x8,[x8, #0x388]
71018d09a4  mov w1,#0x1
71018d09a8  mov x0,x26
71018d09ac  mov w2,wzr
71018d09b0  blr x8
71018d09b4  ldr x0,[x24]
71018d09b8  ldr x9,[x0, #0x1b8]
71018d09bc  add x8,x0,#0x1b8
71018d09c0  cbz x9,0x71018d0a2c
71018d09c4  mov x10,x8
71018d09c8  ldr w11,[x9, #0x20]
71018d09cc  cmp w11,#0x1
71018d09d0  cset w11,lt
71018d09d4  csel x10,x10,x9,lt
71018d09d8  ldr x9,[x9, w11, UXTW #0x3]
71018d09dc  cbnz x9,0x71018d09c8
71018d09e0  cmp x10,x8
71018d09e4  b.eq 0x71018d0a2c
71018d09e8  ldr w8,[x10, #0x20]
71018d09ec  cmp w8,#0x1
71018d09f0  b.gt 0x71018d0a2c
71018d09f4  ldr x26,[x10, #0x28]
71018d09f8  cbz x26,0x71018d0a2c
71018d09fc  ldr x8,[x26]
71018d0a00  ldr x8,[x8, #0x208]
71018d0a04  mov x0,x26
71018d0a08  mov w1,wzr
71018d0a0c  blr x8
71018d0a10  ldr x8,[x26]
71018d0a14  ldr x8,[x8, #0x388]
71018d0a18  mov w1,#0x1
71018d0a1c  mov x0,x26
71018d0a20  mov w2,wzr
71018d0a24  blr x8
71018d0a28  ldr x0,[x24]
71018d0a2c  ldr x8,[x0]
71018d0a30  ldr x8,[x8, #0x60]
71018d0a34  mov w1,wzr
71018d0a38  blr x8
71018d0a3c  ldr w1,[x22, #0x148]
71018d0a40  mov x0,x22
71018d0a44  bl 0x7101d47990
71018d0a48  adrp x2,0x7104401000
71018d0a4c  add x2,x2,#0xbc0
71018d0a50  add x3,sp,#0x70
71018d0a54  mov x0,x25
71018d0a58  mov x1,x23
71018d0a5c  bl 0x7103770b30
71018d0a60  adrp x2,0x710424f000
71018d0a64  add x2,x2,#0xd25
71018d0a68  mov x0,x25
71018d0a6c  mov w1,wzr
71018d0a70  bl 0x71037717d0
71018d0a74  mov w2,#0x1
71018d0a78  mov x0,x25
71018d0a7c  mov w1,wzr
71018d0a80  bl 0x7103771a80
71018d0a84  ldr x0,[x22, #0x138]
71018d0a88  ldr x9,[x0, #0x1b8]
71018d0a8c  cbz x9,0x71018d0b04
71018d0a90  ldr w26,[sp, #0x14]
71018d0a94  add x10,x0,#0x1b8
71018d0a98  mov x8,x10
71018d0a9c  ldr w11,[x9, #0x20]
71018d0aa0  cmp w11,#0x0
71018d0aa4  cset w11,lt
71018d0aa8  csel x8,x8,x9,lt
71018d0aac  ldr x9,[x9, w11, UXTW #0x3]
71018d0ab0  cbnz x9,0x71018d0a9c
71018d0ab4  cmp x8,x10
71018d0ab8  b.eq 0x71018d0b08
71018d0abc  ldr w9,[x8, #0x20]
71018d0ac0  cmp w9,#0x0
71018d0ac4  b.gt 0x71018d0b08
71018d0ac8  ldr x24,[x8, #0x28]
71018d0acc  cbz x24,0x71018d0b08
71018d0ad0  ldr x8,[x24]
71018d0ad4  ldr x8,[x8, #0x1f8]
71018d0ad8  mov w1,#0x1
71018d0adc  mov x0,x24
71018d0ae0  blr x8
71018d0ae4  ldr x8,[x24]
71018d0ae8  ldr x8,[x8, #0x388]
71018d0aec  mov x0,x24
71018d0af0  mov w1,wzr
71018d0af4  mov w2,wzr
71018d0af8  blr x8
71018d0afc  ldr x0,[x25]
71018d0b00  b 0x71018d0b08
71018d0b04  ldr w26,[sp, #0x14]
71018d0b08  ldr x8,[x0]
71018d0b0c  ldr x8,[x8, #0x60]
71018d0b10  mov w1,wzr
71018d0b14  blr x8
71018d0b18  ldr x24,[sp, #0x28]
71018d0b1c  stp x20,xzr,[sp, #0x20]
71018d0b20  cbz x24,0x71018d0b3c
71018d0b24  ldr x0,[x24, #0x18]
71018d0b28  stp x27,xzr,[x24, #0x10]
71018d0b2c  cbz x0,0x71018d0b34
71018d0b30  bl 0x710392eb40
71018d0b34  mov x0,x24
71018d0b38  bl 0x710392eb40
71018d0b3c  ldur x24,[x29, #-0x68]
71018d0b40  stp x20,xzr,[x29, #-0x70]
71018d0b44  cbz x24,0x71018d0b60
71018d0b48  ldr x0,[x24, #0x18]
71018d0b4c  stp x27,xzr,[x24, #0x10]
71018d0b50  cbz x0,0x71018d0b58
71018d0b54  bl 0x710392eb40
71018d0b58  mov x0,x24
71018d0b5c  bl 0x710392eb40
71018d0b60  ldr x0,[sp, #0x180]
71018d0b64  add x8,sp,#0x70
71018d0b68  add x8,x8,#0xf0
71018d0b6c  cmp x8,x0
71018d0b70  b.eq 0x71018d0b84
71018d0b74  cbz x0,0x71018d0b90
71018d0b78  ldr x8,[x0]
71018d0b7c  ldr x8,[x8, #0x28]
71018d0b80  b 0x71018d0b8c
71018d0b84  ldr x8,[x0]
71018d0b88  ldr x8,[x8, #0x20]
71018d0b8c  blr x8
71018d0b90  ldr x0,[sp, #0x150]
71018d0b94  add x8,sp,#0x70
71018d0b98  add x8,x8,#0xc0
71018d0b9c  cmp x8,x0
71018d0ba0  b.eq 0x71018d0bb4
71018d0ba4  cbz x0,0x71018d0bc0
71018d0ba8  ldr x8,[x0]
71018d0bac  ldr x8,[x8, #0x28]
71018d0bb0  b 0x71018d0bbc
71018d0bb4  ldr x8,[x0]
71018d0bb8  ldr x8,[x8, #0x20]
71018d0bbc  blr x8
71018d0bc0  ldr x0,[sp, #0x120]
71018d0bc4  add x8,sp,#0x70
71018d0bc8  add x8,x8,#0x90
71018d0bcc  cmp x8,x0
71018d0bd0  b.eq 0x71018d0be4
71018d0bd4  cbz x0,0x71018d0bf0
71018d0bd8  ldr x8,[x0]
71018d0bdc  ldr x8,[x8, #0x28]
71018d0be0  b 0x71018d0bec
71018d0be4  ldr x8,[x0]
71018d0be8  ldr x8,[x8, #0x20]
71018d0bec  blr x8
71018d0bf0  ldr x0,[sp, #0xf0]
71018d0bf4  add x8,sp,#0x70
71018d0bf8  add x8,x8,#0x60
71018d0bfc  cmp x8,x0
71018d0c00  b.eq 0x71018d0c14
71018d0c04  cbz x0,0x71018d0c20
71018d0c08  ldr x8,[x0]
71018d0c0c  ldr x8,[x8, #0x28]
71018d0c10  b 0x71018d0c1c
71018d0c14  ldr x8,[x0]
71018d0c18  ldr x8,[x8, #0x20]
71018d0c1c  blr x8
71018d0c20  ldr x0,[sp, #0xc0]
71018d0c24  add x8,sp,#0x70
71018d0c28  add x8,x8,#0x30
71018d0c2c  cmp x8,x0
71018d0c30  b.eq 0x71018d0c44
71018d0c34  cbz x0,0x71018d0c50
71018d0c38  ldr x8,[x0]
71018d0c3c  ldr x8,[x8, #0x28]
71018d0c40  b 0x71018d0c4c
71018d0c44  ldr x8,[x0]
71018d0c48  ldr x8,[x8, #0x20]
71018d0c4c  blr x8
71018d0c50  adrp x1,0x7104401000
71018d0c54  add x1,x1,#0xdad
71018d0c58  add x8,sp,#0x70
71018d0c5c  mov x0,x23
71018d0c60  bl 0x7103776640
71018d0c64  ldr x24,[sp, #0x78]
71018d0c68  fmov s0,0x3f800000
71018d0c6c  adrp x1,0x71042b4000
71018d0c70  add x1,x1,#0x5ef
71018d0c74  mov x0,x24
71018d0c78  bl 0x7103778300
71018d0c7c  stp x20,xzr,[sp, #0x70]
71018d0c80  cbz x24,0x71018d0c9c
71018d0c84  ldr x0,[x24, #0x18]
71018d0c88  stp x27,xzr,[x24, #0x10]
71018d0c8c  cbz x0,0x71018d0c94
71018d0c90  bl 0x710392eb40
71018d0c94  mov x0,x24
71018d0c98  bl 0x710392eb40
71018d0c9c  adrp x1,0x7104308000
71018d0ca0  add x1,x1,#0xc5c
71018d0ca4  add x8,sp,#0x70
71018d0ca8  mov x0,x23
71018d0cac  bl 0x7103776640
71018d0cb0  ldr x23,[sp, #0x78]
71018d0cb4  fmov s0,0x3f800000
71018d0cb8  adrp x1,0x71042b4000
71018d0cbc  add x1,x1,#0x5ef
71018d0cc0  mov x0,x23
71018d0cc4  bl 0x7103778300
71018d0cc8  stp x20,xzr,[sp, #0x70]
71018d0ccc  cbz x23,0x71018d0ce8
71018d0cd0  ldr x0,[x23, #0x18]
71018d0cd4  stp x27,xzr,[x23, #0x10]
71018d0cd8  cbz x0,0x71018d0ce0
71018d0cdc  bl 0x710392eb40
71018d0ce0  mov x0,x23
71018d0ce4  bl 0x710392eb40
71018d0ce8  adrp x8,0x710532f000
71018d0cec  ldr x8,[x8, #0x7f0]
71018d0cf0  ldr x8,[x8, #0x8]
71018d0cf4  ldrb w8,[x8, #0x35]
71018d0cf8  ldr x0,[x22, #0x118]
71018d0cfc  fmov s0,0x3f800000
71018d0d00  adrp x9,0x710424f000
71018d0d04  add x9,x9,#0xac6
71018d0d08  adrp x10,0x710433a000
71018d0d0c  add x10,x10,#0x6a9
71018d0d10  cmp w8,#0x0
71018d0d14  csel x1,x10,x9,eq
71018d0d18  bl 0x7103778300
71018d0d1c  ldr x0,[x22, #0x118]
71018d0d20  fmov s0,wzr
71018d0d24  adrp x1,0x7104401000
71018d0d28  add x1,x1,#0x836
71018d0d2c  bl 0x7103778630
71018d0d30  ldr x8,[x22, #0x108]
71018d0d34  ldr x0,[x8]
71018d0d38  mov w2,#0x1001
71018d0d3c  mov w1,wzr
71018d0d40  bl 0x7103775dc0
71018d0d44  adrp x8,0x7105333000
71018d0d48  add x8,x8,#0x600
71018d0d4c  str x8,[x21, #0x10]
71018d0d50  mov x9,x8
71018d0d54  ldr w8,[x8, #0x60]
71018d0d58  str w8,[x21, #0x68]
71018d0d5c  ldr w8,[x9, #0x64]
71018d0d60  str w8,[x21, #0x6c]
71018d0d64  mov w8,#0x1
71018d0d68  ldaxrb w9,[x28]
71018d0d6c  stxrb w10,w8,[x28]
71018d0d70  and w9,w9,#0x1
71018d0d74  cmp w10,#0x0
71018d0d78  ccmp w9,#0x0,#0x0,eq
71018d0d7c  b.ne 0x71018d0d68
71018d0d80  adrp x8,0x7105333000
71018d0d84  add x8,x8,#0x648
71018d0d88  mov x9,x8
71018d0d8c  ldr x8,[x8]
71018d0d90  str x8,[x21, #0x48]
71018d0d94  mov x0,x21
71018d0d98  str x21,[x9], #0x8
71018d0d9c  stlrb wzr,[x9]
71018d0da0  bl 0x71032caea0
71018d0da4  ldr x22,[sp, #0x18]
71018d0da8  ldr x0,[x22, #0x160]
71018d0dac  str x21,[x22, #0x160]
71018d0db0  add x21,sp,#0x70
71018d0db4  cbz x0,0x71018d0dbc
71018d0db8  bl 0x71032cad20
71018d0dbc  add x19,sp,#0x70
71018d0dc0  mov w20,#0x1
71018d0dc4  orr x8,xzr,#0x100000000
71018d0dc8  add x0,x19,#0xec
71018d0dcc  mov w2,#0x1000
71018d0dd0  str xzr,[sp, #0x70]
71018d0dd4  mov w1,wzr
71018d0dd8  strb w20,[sp, #0x79]
71018d0ddc  stur x8,[sp, #0x7c]
71018d0de0  strb wzr,[sp, #0x8c]
71018d0de4  stur xzr,[sp, #0x84]
71018d0de8  strb wzr,[sp, #0xd4]
71018d0dec  stur xzr,[x21, #0x5c]
71018d0df0  strb wzr,[sp, #0x11c]
71018d0df4  stur xzr,[x21, #0xa4]
71018d0df8  bl 0x71039c02a0
71018d0dfc  mov w8,#0x10ec
71018d0e00  mov w9,#0x10f4
71018d0e04  mov w2,#0x1000
71018d0e08  strb w20,[x19, x8, LSL ]
71018d0e0c  str wzr,[sp, #0x1160]
71018d0e10  strb w20,[x19, x9, LSL ]
71018d0e14  mov w8,#0x1100
71018d0e18  mov w9,#0x1190
71018d0e1c  strb wzr,[x19, x8, LSL ]
71018d0e20  mov w8,#0x20
71018d0e24  add x0,x19,x9
71018d0e28  mov w1,wzr
71018d0e2c  str xzr,[sp, #0x1168]
71018d0e30  str w8,[sp, #0x11b0]
71018d0e34  bl 0x71039c02a0
71018d0e38  mov w8,#0x1149
71018d0e3c  mov w9,#0x1144
71018d0e40  add x0,sp,#0x20
71018d0e44  mov w1,w26
71018d0e48  str xzr,[x19, x8, LSL #0x0]
71018d0e4c  str xzr,[x19, x9, LSL #0x0]
71018d0e50  strb w20,[sp, #0x78]
71018d0e54  add x20,sp,#0x20
71018d0e58  bl 0x7103394f60
71018d0e5c  mov x8,xzr
71018d0e60  add x9,x20,#0x8
71018d0e64  b 0x71018d0e70
71018d0e68  add x8,x8,#0x2
71018d0e6c  strb w10,[x11, #0x65]
71018d0e70  add x10,x9,x8
71018d0e74  ldrb w12,[x10]
71018d0e78  cbz w12,0x71018d0ea4
71018d0e7c  add w13,w8,#0x1
71018d0e80  add x11,x19,x8
71018d0e84  cmp w13,#0x3f
71018d0e88  strb w12,[x11, #0x64]
71018d0e8c  b.cs 0x71018d0ea0
71018d0e90  ldrb w10,[x10, #0x1]
71018d0e94  cbnz w10,0x71018d0e68
71018d0e98  add x8,x8,#0x1
71018d0e9c  b 0x71018d0ea4
71018d0ea0  add w8,w8,#0x1
71018d0ea4  add x19,sp,#0x70
71018d0ea8  add x9,x19,#0x64
71018d0eac  mov w20,#0x9dc5
71018d0eb0  movk w20,#0x811c, LSL #16
71018d0eb4  mov w10,w20
71018d0eb8  strb wzr,[x9, w8, UXTW ]
71018d0ebc  str w8,[sp, #0xd0]
71018d0ec0  ldrb w8,[sp, #0xd4]
71018d0ec4  cbz w8,0x71018d0ee8
71018d0ec8  add x9,x19,#0x65
71018d0ecc  mov w11,#0x89
71018d0ed0  mov w10,w20
71018d0ed4  mul w10,w10,w11
71018d0ed8  and w8,w8,#0xff
71018d0edc  eor w10,w10,w8
71018d0ee0  ldrb w8,[x9], #0x1
71018d0ee4  cbnz w8,0x71018d0ed4
71018d0ee8  add x0,sp,#0x20
71018d0eec  mov w1,w26
71018d0ef0  str w10,[sp, #0xcc]
71018d0ef4  add x21,sp,#0x20
71018d0ef8  bl 0x7103395260
71018d0efc  mov x8,xzr
71018d0f00  add x9,x21,#0x8
71018d0f04  b 0x71018d0f10
71018d0f08  add x8,x8,#0x2
71018d0f0c  strb w10,[x11, #0x1d]
71018d0f10  add x10,x9,x8
71018d0f14  ldrb w12,[x10]
71018d0f18  cbz w12,0x71018d0f44
71018d0f1c  add w13,w8,#0x1
71018d0f20  add x11,x19,x8
71018d0f24  cmp w13,#0x3f
71018d0f28  strb w12,[x11, #0x1c]
71018d0f2c  b.cs 0x71018d0f40
71018d0f30  ldrb w10,[x10, #0x1]
71018d0f34  cbnz w10,0x71018d0f08
71018d0f38  add x8,x8,#0x1
71018d0f3c  b 0x71018d0f44
71018d0f40  add w8,w8,#0x1
71018d0f44  add x9,sp,#0x70
71018d0f48  add x10,x9,#0x1c
71018d0f4c  strb wzr,[x10, w8, UXTW ]
71018d0f50  str w8,[sp, #0x88]
71018d0f54  ldrb w8,[sp, #0x8c]
71018d0f58  mov w10,w20
71018d0f5c  cbz w8,0x71018d0f80
71018d0f60  add x9,x9,#0x1d
71018d0f64  mov w11,#0x89
71018d0f68  mov w10,w20
71018d0f6c  mul w10,w10,w11
71018d0f70  and w8,w8,#0xff
71018d0f74  eor w10,w10,w8
71018d0f78  ldrb w8,[x9], #0x1
71018d0f7c  cbnz w8,0x71018d0f6c
71018d0f80  mov w9,#0x1
71018d0f84  str w10,[sp, #0x84]
71018d0f88  and w10,w26,#0x7f000000
71018d0f8c  str w9,[sp, #0x11b4]
71018d0f90  orr w9,wzr,#0xfe000000
71018d0f94  add w9,w10,w9
71018d0f98  lsr w19,w9,#0x18
71018d0f9c  sub w9,w19,#0x1
71018d0fa0  and w10,w9,#0xff
71018d0fa4  mov w8,wzr
71018d0fa8  strb wzr,[sp, #0x11c]
71018d0fac  str wzr,[sp, #0x118]
71018d0fb0  str w20,[sp, #0x114]
71018d0fb4  cmp w10,#0x4
71018d0fb8  b.hi 0x71018d0fcc
71018d0fbc  adrp x8,0x7104544000
71018d0fc0  add x8,x8,#0x730
71018d0fc4  sxtb x9,w9
71018d0fc8  ldr w8,[x8, x9, LSL #0x2]
71018d0fcc  str w8,[sp, #0x74]
71018d0fd0  ldr x0,[x22, #0x140]
71018d0fd4  add x1,sp,#0x70
71018d0fd8  mov w2,#0x1
71018d0fdc  mov w3,#0x1
71018d0fe0  bl 0x7101af8570
71018d0fe4  mov x10,#0x6e6d
71018d0fe8  movk x10,#0x5f75, LSL #16
71018d0fec  mov x9,#0x1400000000
71018d0ff0  movk x10,#0x706f, LSL #32
71018d0ff4  movk x10,#0x5f74, LSL #48
71018d0ff8  ldr x8,[x22, #0x140]
71018d0ffc  stp x9,x10,[sp, #0x20]
71018d1000  mov x9,#0x6e6f
71018d1004  movk x9,#0x696c, LSL #16
71018d1008  movk x9,#0x656e, LSL #32
71018d100c  movk x9,#0x745f, LSL #48
71018d1010  str x9,[sp, #0x30]
71018d1014  mov w9,#0x7469
71018d1018  movk w9,#0x656c, LSL #16
71018d101c  mov w10,#0x6d
71018d1020  str w9,[sp, #0x38]
71018d1024  mov w9,#0x9
71018d1028  mov w11,#0x89
71018d102c  add x12,sp,#0x20
71018d1030  strb wzr,[sp, #0x3c]
71018d1034  mul w13,w20,w11
71018d1038  and w10,w10,#0xff
71018d103c  eor w20,w13,w10
71018d1040  ldrb w10,[x12, x9, LSL ]
71018d1044  add x9,x9,#0x1
71018d1048  cbnz w10,0x71018d1034
71018d104c  str w20,[sp, #0x20]
71018d1050  ldr x0,[x8, #0x80]
71018d1054  add x1,sp,#0x20
71018d1058  bl 0x7101af90b0
71018d105c  ldr x8,[x22, #0x148]
71018d1060  cmp w19,#0x6
71018d1064  b.hi 0x71018d107c
71018d1068  adrp x9,0x7104544000
71018d106c  add x9,x9,#0x710
71018d1070  sxtb x10,w19
71018d1074  ldr w1,[x9, x10, LSL #0x2]
71018d1078  b 0x71018d1080
71018d107c  mov w1,#0xffffffff
71018d1080  ldr x0,[x8, #0x80]
71018d1084  bl 0x7101af2070
71018d1088  mov x0,#0x7bf4
71018d108c  movk x0,#0x294a, LSL #16
71018d1090  movk x0,#0xff1c, LSL #32
71018d1094  movk x0,#0x4dff, LSL #48
71018d1098  bl 0x710337af50
71018d109c  ldrsw x8,[x22, #0x124]
71018d10a0  cmp w8,#0x13
71018d10a4  tbz w0,#0x0,0x71018d10b4
71018d10a8  b.cs 0x71018d1128
71018d10ac  mov w9,#0x2
71018d10b0  b 0x71018d10bc
71018d10b4  b.cs 0x71018d1128
71018d10b8  orr w9,wzr,#0x3
71018d10bc  add x8,x22,x8, LSL #0x2
71018d10c0  str w9,[x8, #0xd8]
71018d10c4  add sp,sp,#0x2, LSL #12
71018d10c8  add sp,sp,#0x240
71018d10cc  ldp x29,x30,[sp, #0x50]
71018d10d0  ldp x20,x19,[sp, #0x40]
71018d10d4  ldp x22,x21,[sp, #0x30]
71018d10d8  ldp x24,x23,[sp, #0x20]
71018d10dc  ldp x26,x25,[sp, #0x10]
71018d10e0  ldp x28,x27,[sp], #0x60
71018d10e4  ret
71018d10e8  adrp x0,0x7105314000
71018d10ec  add x0,x0,#0x4d8
71018d10f0  bl 0x71039c06b0
71018d10f4  cbz w0,0x71018cee98
71018d10f8  bl 0x7101764000
71018d10fc  adrp x0,0x7101763000
71018d1100  add x0,x0,#0xc40
71018d1104  adrp x1,0x71052c5000
71018d1108  add x1,x1,#0x180
71018d110c  adrp x2,0x7104f17000
71018d1110  add x2,x2,#0x0
71018d1114  bl 0x71000001c0
71018d1118  adrp x0,0x7105314000
71018d111c  add x0,x0,#0x4d8
71018d1120  bl 0x71039c06c0
71018d1124  b 0x71018cee98
71018d1128  bl 0x71039c2650
71018d112c  add x0,sp,#0x70
71018d1130  bl 0x71039c0c00
71018d1134  add x0,sp,#0x70
71018d1138  bl 0x71039c1330
