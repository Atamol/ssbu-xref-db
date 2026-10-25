// addr:      7102ccfe70
// offset:    0x2ccfe70
// name:      FUN_7102ccfe70
// mangled:   
// size:      9600

7102ccfe70  sub sp,sp,#0xd0
7102ccfe74  stp x28,x27,[sp, #0x70]
7102ccfe78  stp x26,x25,[sp, #0x80]
7102ccfe7c  stp x24,x23,[sp, #0x90]
7102ccfe80  stp x22,x21,[sp, #0xa0]
7102ccfe84  stp x20,x19,[sp, #0xb0]
7102ccfe88  stp x29,x30,[sp, #0xc0]
7102ccfe8c  add x29,sp,#0xc0
7102ccfe90  ldr x25,[x0, #0x738]
7102ccfe94  cbz x25,0x7102cd00e8
7102ccfe98  ldr x21,[x25, #0x780]
7102ccfe9c  mov w0,#0x10
7102ccfea0  mov w1,#0x10
7102ccfea4  add x28,x25,#0x8
7102ccfea8  bl 0x710392e290
7102ccfeac  mov x19,x0
7102ccfeb0  cbnz x0,0x7102ccfefc
7102ccfeb4  adrp x8,0x7105332000
7102ccfeb8  ldr x0,[x8, #0xf00]
7102ccfebc  cbz x0,0x7102ccfef8
7102ccfec0  mov w8,#0x10
7102ccfec4  str wzr,[sp, #0x30]
7102ccfec8  add x1,sp,#0x30
7102ccfecc  str x8,[sp, #0x48]
7102ccfed0  ldr x8,[x0]
7102ccfed4  ldr x8,[x8, #0x30]
7102ccfed8  add x2,sp,#0x48
7102ccfedc  blr x8
7102ccfee0  tbz w0,#0x0,0x7102ccfef8
7102ccfee4  mov w0,#0x10
7102ccfee8  mov w1,#0x10
7102ccfeec  bl 0x710392e290
7102ccfef0  mov x19,x0
7102ccfef4  cbnz x0,0x7102ccfefc
7102ccfef8  mov x19,xzr
7102ccfefc  ldr x23,[x25]
7102ccff00  adrp x8,0x7105130000
7102ccff04  add x8,x8,#0x618
7102ccff08  mov w1,#0x110
7102ccff0c  mov w0,#0x10
7102ccff10  str x8,[x19]
7102ccff14  bl 0x710392e290
7102ccff18  mov x20,x0
7102ccff1c  cbnz x0,0x7102ccff68
7102ccff20  adrp x8,0x7105332000
7102ccff24  ldr x0,[x8, #0xf00]
7102ccff28  cbz x0,0x7102ccff64
7102ccff2c  mov w8,#0x110
7102ccff30  str wzr,[sp, #0x30]
7102ccff34  add x1,sp,#0x30
7102ccff38  str x8,[sp, #0x48]
7102ccff3c  ldr x8,[x0]
7102ccff40  ldr x8,[x8, #0x30]
7102ccff44  add x2,sp,#0x48
7102ccff48  blr x8
7102ccff4c  tbz w0,#0x0,0x7102ccff64
7102ccff50  mov w1,#0x110
7102ccff54  mov w0,#0x10
7102ccff58  bl 0x710392e290
7102ccff5c  mov x20,x0
7102ccff60  cbnz x0,0x7102ccff68
7102ccff64  mov x20,xzr
7102ccff68  mov x26,x20
7102ccff6c  add x8,x20,#0x104
7102ccff70  mov x27,#-0x1
7102ccff74  mov w0,#0x10
7102ccff78  mov w1,#0x10
7102ccff7c  str x28,[x20, #0x10]
7102ccff80  stp x23,x21,[x20]
7102ccff84  str xzr,[x26, #0x18]!
7102ccff88  stp xzr,x20,[x20, #0x20]
7102ccff8c  strb wzr,[x20, #0x100]
7102ccff90  strh wzr,[x20, #0x48]
7102ccff94  str xzr,[x20, #0x30]
7102ccff98  stp xzr,xzr,[x20, #0x38]
7102ccff9c  stp xzr,xzr,[x20, #0xe0]
7102ccffa0  stp xzr,xzr,[x20, #0xd0]
7102ccffa4  stp xzr,xzr,[x20, #0xc0]
7102ccffa8  stp xzr,xzr,[x20, #0xb0]
7102ccffac  stp xzr,xzr,[x20, #0xa0]
7102ccffb0  stp xzr,xzr,[x20, #0x90]
7102ccffb4  stp xzr,xzr,[x20, #0x80]
7102ccffb8  stp xzr,xzr,[x20, #0x70]
7102ccffbc  stp xzr,xzr,[x20, #0x60]
7102ccffc0  stp xzr,xzr,[x20, #0x50]
7102ccffc4  str x27,[x8]
7102ccffc8  bl 0x710392e290
7102ccffcc  mov x21,x0
7102ccffd0  cbnz x0,0x7102cd001c
7102ccffd4  adrp x8,0x7105332000
7102ccffd8  ldr x0,[x8, #0xf00]
7102ccffdc  cbz x0,0x7102cd0018
7102ccffe0  mov w8,#0x10
7102ccffe4  str wzr,[sp, #0x30]
7102ccffe8  add x1,sp,#0x30
7102ccffec  str x8,[sp, #0x48]
7102ccfff0  ldr x8,[x0]
7102ccfff4  ldr x8,[x8, #0x30]
7102ccfff8  add x2,sp,#0x48
7102ccfffc  blr x8
7102cd0000  tbz w0,#0x0,0x7102cd0018
7102cd0004  mov w0,#0x10
7102cd0008  mov w1,#0x10
7102cd000c  bl 0x710392e290
7102cd0010  mov x21,x0
7102cd0014  cbnz x0,0x7102cd001c
7102cd0018  mov x21,xzr
7102cd001c  adrp x8,0x7105130000
7102cd0020  add x8,x8,#0x408
7102cd0024  mov w0,#0x10
7102cd0028  mov w1,#0x10
7102cd002c  str x8,[x21]
7102cd0030  bl 0x710392e290
7102cd0034  mov x22,x0
7102cd0038  cbnz x0,0x7102cd0084
7102cd003c  adrp x8,0x7105332000
7102cd0040  ldr x0,[x8, #0xf00]
7102cd0044  cbz x0,0x7102cd0080
7102cd0048  mov w8,#0x10
7102cd004c  str wzr,[sp, #0x30]
7102cd0050  add x1,sp,#0x30
7102cd0054  str x8,[sp, #0x48]
7102cd0058  ldr x8,[x0]
7102cd005c  ldr x8,[x8, #0x30]
7102cd0060  add x2,sp,#0x48
7102cd0064  blr x8
7102cd0068  tbz w0,#0x0,0x7102cd0080
7102cd006c  mov w0,#0x10
7102cd0070  mov w1,#0x10
7102cd0074  bl 0x710392e290
7102cd0078  mov x22,x0
7102cd007c  cbnz x0,0x7102cd0084
7102cd0080  mov x22,xzr
7102cd0084  mov w8,#0x1
7102cd0088  str xzr,[x22]
7102cd008c  str w8,[x22, #0x8]
7102cd0090  cbz x23,0x7102cd0148
7102cd0094  adrp x9,0x710532a000
7102cd0098  ldr x9,[x9, #0x9d8]
7102cd009c  ldr x8,[x23, #0x308]
7102cd00a0  ldr x2,[x8, #0x8]
7102cd00a4  add x0,sp,#0x48
7102cd00a8  mov w3,#0x1
7102cd00ac  ldr x9,[x9]
7102cd00b0  ldr x1,[x9, #0x1c0]
7102cd00b4  bl 0x710315a0a0
7102cd00b8  ldr x8,[sp, #0x48]
7102cd00bc  str xzr,[sp, #0x48]
7102cd00c0  ldr x23,[x22]
7102cd00c4  str x8,[x22]
7102cd00c8  cbz x23,0x7102cd0108
7102cd00cc  mov x0,x23
7102cd00d0  bl 0x71025e8370
7102cd00d4  mov x0,x23
7102cd00d8  bl 0x710392eb40
7102cd00dc  str xzr,[sp, #0x48]
7102cd00e0  ldr x8,[x22]
7102cd00e4  b 0x7102cd010c
7102cd00e8  ldp x29,x30,[sp, #0xc0]
7102cd00ec  ldp x20,x19,[sp, #0xb0]
7102cd00f0  ldp x22,x21,[sp, #0xa0]
7102cd00f4  ldp x24,x23,[sp, #0x90]
7102cd00f8  ldp x26,x25,[sp, #0x80]
7102cd00fc  ldp x28,x27,[sp, #0x70]
7102cd0100  add sp,sp,#0xd0
7102cd0104  ret
7102cd0108  str xzr,[sp, #0x48]
7102cd010c  ldr x8,[x8, #0x8]
7102cd0110  mov w24,#0x1
7102cd0114  str w24,[x8, #0x14]
7102cd0118  ldr x8,[x22]
7102cd011c  ldrb w9,[x8, #0x10]
7102cd0120  cbz w9,0x7102cd2338
7102cd0124  ldr x8,[x22]
7102cd0128  adrp x9,0x7104467000
7102cd012c  ldr q0,[x9, #0x580]
7102cd0130  ldr x8,[x8, #0x8]
7102cd0134  str q0,[x8, #0x30]
7102cd0138  ldr x8,[x22]
7102cd013c  str w24,[x22, #0x8]
7102cd0140  ldr x8,[x8, #0x8]
7102cd0144  str w24,[x8, #0x10]
7102cd0148  str x22,[x21, #0x8]
7102cd014c  ldr x0,[x20, #0x20]
7102cd0150  str x21,[x20, #0x20]
7102cd0154  cbz x0,0x7102cd0164
7102cd0158  ldr x8,[x0]
7102cd015c  ldr x8,[x8, #0x8]
7102cd0160  blr x8
7102cd0164  stp x27,x27,[x20, #0xf0]
7102cd0168  adrp x8,0x7105314000
7102cd016c  add x8,x8,#0x4d8
7102cd0170  ldarb w8,[x8]
7102cd0174  tbz w8,#0x0,0x7102cd23a8
7102cd0178  adrp x8,0x71052c5000
7102cd017c  ldrb w10,[x8, #0x1ba]
7102cd0180  ldr x8,[x20]
7102cd0184  strb w10,[x20, #0x100]
7102cd0188  ldr x8,[x8, #0x300]
7102cd018c  ldr x9,[x8, #0x18]
7102cd0190  ldp x8,x9,[x9]
7102cd0194  cmp x8,x9
7102cd0198  b.eq 0x7102cd0258
7102cd019c  mov x11,#0xdf99
7102cd01a0  movk x11,#0xb569, LSL #16
7102cd01a4  movk x11,#0x7, LSL #32
7102cd01a8  ldr x12,[x8], #0x8
7102cd01ac  ldr x13,[x12, #0xa0]
7102cd01b0  and x13,x13,#0xffffffffff
7102cd01b4  cmp x13,x11
7102cd01b8  b.eq 0x7102cd01c8
7102cd01bc  cmp x9,x8
7102cd01c0  b.ne 0x7102cd01a8
7102cd01c4  b 0x7102cd0258
7102cd01c8  ldr x9,[x12, #0x130]
7102cd01cc  cbz x9,0x7102cd0258
7102cd01d0  str x9,[x26]
7102cd01d4  ldp x8,x9,[x9]
7102cd01d8  cmp x8,x9
7102cd01dc  b.eq 0x7102cd0258
7102cd01e0  ldr x11,[x8]
7102cd01e4  ldrb w10,[x11, #0x20]
7102cd01e8  cbz w10,0x7102cd0248
7102cd01ec  ldp x13,x10,[x11, #0x8]
7102cd01f0  ldr x12,[x11]
7102cd01f4  strb wzr,[x11, #0x20]
7102cd01f8  str x12,[x13]
7102cd01fc  str x13,[x12, #0x8]
7102cd0200  ldr x12,[x10, #0x18]
7102cd0204  sub x12,x12,#0x1
7102cd0208  str x12,[x10, #0x18]
7102cd020c  stp xzr,xzr,[x11]
7102cd0210  ldr x13,[x10, #0x40]
7102cd0214  add x12,x10,#0x38
7102cd0218  stp x12,x13,[x11]
7102cd021c  str x11,[x10, #0x40]
7102cd0220  str x11,[x13]
7102cd0224  ldr x12,[x10, #0x30]
7102cd0228  add x12,x12,#0x1
7102cd022c  str x12,[x10, #0x30]
7102cd0230  ldr x11,[x11, #0x18]
7102cd0234  cbz x11,0x7102cd023c
7102cd0238  ldr w11,[x11, #0x110]
7102cd023c  ldr w12,[x10, #0x48]
7102cd0240  sub w11,w12,w11
7102cd0244  str w11,[x10, #0x48]
7102cd0248  add x8,x8,#0x8
7102cd024c  cmp x9,x8
7102cd0250  b.ne 0x7102cd01e0
7102cd0254  ldrb w10,[x20, #0x100]
7102cd0258  ldr x8,[x26]
7102cd025c  cbz w10,0x7102cd028c
7102cd0260  cbz x8,0x7102cd02c8
7102cd0264  ldp x0,x1,[x8]
7102cd0268  adrp x2,0x71042a1000
7102cd026c  add x2,x2,#0x67e
7102cd0270  bl 0x71025f5420
7102cd0274  ldr x8,[x26]
7102cd0278  ldp x0,x1,[x8]
7102cd027c  adrp x2,0x7104441000
7102cd0280  add x2,x2,#0xec7
7102cd0284  bl 0x71025f5420
7102cd0288  b 0x7102cd02c8
7102cd028c  cbz x8,0x7102cd02c8
7102cd0290  ldp x0,x1,[x8]
7102cd0294  adrp x2,0x71043bc000
7102cd0298  add x2,x2,#0xb6c
7102cd029c  bl 0x71025f5420
7102cd02a0  ldr x8,[x26]
7102cd02a4  ldp x0,x1,[x8]
7102cd02a8  adrp x2,0x71042a1000
7102cd02ac  add x2,x2,#0x67e
7102cd02b0  bl 0x71025f55b0
7102cd02b4  ldr x8,[x26]
7102cd02b8  ldp x0,x1,[x8]
7102cd02bc  adrp x2,0x7104441000
7102cd02c0  add x2,x2,#0xec7
7102cd02c4  bl 0x71025f55b0
7102cd02c8  str x20,[x19, #0x8]
7102cd02cc  ldr x0,[x25, #0x788]
7102cd02d0  str x19,[x25, #0x788]
7102cd02d4  stp x28,x25,[sp]
7102cd02d8  cbz x0,0x7102cd02ec
7102cd02dc  ldr x8,[x0]
7102cd02e0  ldr x8,[x8, #0x8]
7102cd02e4  blr x8
7102cd02e8  ldr x19,[x25, #0x788]
7102cd02ec  ldr x8,[x19, #0x8]
7102cd02f0  stp xzr,xzr,[sp, #0x50]
7102cd02f4  str xzr,[sp, #0x48]
7102cd02f8  mov x12,#0xd174
7102cd02fc  movk x12,#0x1745, LSL #16
7102cd0300  movk x12,#0x745d, LSL #32
7102cd0304  movk x12,#0x5d1, LSL #48
7102cd0308  str x8,[sp, #0x10]
7102cd030c  ldr x8,[x8, #0x10]
7102cd0310  ldp x9,x10,[x8, #0xa0]
7102cd0314  sub x9,x10,x9
7102cd0318  lsr x10,x9,#0x5
7102cd031c  cmp w10,#0x1
7102cd0320  b.lt 0x7102cd04fc
7102cd0324  mov x13,#0x8ba3
7102cd0328  movk x13,#0xba2e, LSL #16
7102cd032c  mov x23,xzr
7102cd0330  mov x19,xzr
7102cd0334  mov x27,xzr
7102cd0338  mov x22,xzr
7102cd033c  sbfx x25,x9,#0x5,#0x20
7102cd0340  mov w26,#0x1
7102cd0344  movk x13,#0xa2e8, LSL #32
7102cd0348  movk x13,#0x2e8b, LSL #48
7102cd034c  b 0x7102cd0360
7102cd0350  ldr x8,[sp, #0x10]
7102cd0354  ldr x8,[x8, #0x10]
7102cd0358  add x26,x26,#0x1
7102cd035c  add x23,x23,#0x2c
7102cd0360  ldr x24,[x8, #0x230]
7102cd0364  cmp x22,x27
7102cd0368  b.cs 0x7102cd03a4
7102cd036c  add x8,x24,x23
7102cd0370  ldp x9,x10,[x8]
7102cd0374  stp x9,x10,[x22]
7102cd0378  ldr x11,[x8, #0x20]
7102cd037c  ldp x9,x10,[x8, #0x10]
7102cd0380  ldr w8,[x8, #0x28]
7102cd0384  str w8,[x22, #0x28]
7102cd0388  stp x10,x11,[x22, #0x18]
7102cd038c  str x9,[x22, #0x10]
7102cd0390  add x22,x22,#0x2c
7102cd0394  str x22,[sp, #0x50]
7102cd0398  cmp x26,x25
7102cd039c  b.lt 0x7102cd0350
7102cd03a0  b 0x7102cd04fc
7102cd03a4  sub x20,x22,x19
7102cd03a8  asr x8,x20,#0x2
7102cd03ac  mul x22,x8,x13
7102cd03b0  add x8,x22,#0x1
7102cd03b4  cmp x8,x12
7102cd03b8  b.hi 0x7102cd23e8
7102cd03bc  sub x9,x27,x19
7102cd03c0  mov x27,x12
7102cd03c4  asr x9,x9,#0x2
7102cd03c8  mul x9,x9,x13
7102cd03cc  mov x10,#0xe8ba
7102cd03d0  movk x10,#0x8ba2, LSL #16
7102cd03d4  movk x10,#0xba2e, LSL #32
7102cd03d8  movk x10,#0x2e8, LSL #48
7102cd03dc  mov x28,x13
7102cd03e0  cmp x9,x10
7102cd03e4  b.cs 0x7102cd03f8
7102cd03e8  lsl x9,x9,#0x1
7102cd03ec  cmp x9,x8
7102cd03f0  csel x27,x8,x9,cc
7102cd03f4  cbz x27,0x7102cd0454
7102cd03f8  mov w8,#0x2c
7102cd03fc  mul x8,x27,x8
7102cd0400  cmp x8,#0x0
7102cd0404  csinc x21,x8,xzr,ne
7102cd0408  mov w0,#0x10
7102cd040c  mov x1,x21
7102cd0410  bl 0x710392e290
7102cd0414  cbnz x0,0x7102cd0458
7102cd0418  adrp x8,0x7105332000
7102cd041c  ldr x0,[x8, #0xf00]
7102cd0420  cbz x0,0x7102cd0454
7102cd0424  str wzr,[sp, #0x18]
7102cd0428  str x21,[sp, #0x30]
7102cd042c  ldr x8,[x0]
7102cd0430  ldr x8,[x8, #0x30]
7102cd0434  add x1,sp,#0x18
7102cd0438  add x2,sp,#0x30
7102cd043c  blr x8
7102cd0440  tbz w0,#0x0,0x7102cd0454
7102cd0444  mov w0,#0x10
7102cd0448  mov x1,x21
7102cd044c  bl 0x710392e290
7102cd0450  cbnz x0,0x7102cd0458
7102cd0454  mov x0,xzr
7102cd0458  mov w8,#0x2c
7102cd045c  mov x13,x8
7102cd0460  madd x8,x22,x8,x0
7102cd0464  add x9,x24,x23
7102cd0468  ldp x10,x11,[x9]
7102cd046c  stp x10,x11,[x8]
7102cd0470  ldr x12,[x9, #0x20]
7102cd0474  ldp x10,x11,[x9, #0x10]
7102cd0478  ldr w9,[x9, #0x28]
7102cd047c  str w9,[x8, #0x28]
7102cd0480  mov x9,#0x745d
7102cd0484  movk x9,#0x45d1, LSL #16
7102cd0488  stp x11,x12,[x8, #0x18]
7102cd048c  movk x9,#0x5d17, LSL #32
7102cd0490  movk x9,#0xd174, LSL #48
7102cd0494  smulh x9,x20,x9
7102cd0498  str x10,[x8, #0x10]
7102cd049c  asr x10,x9,#0x3
7102cd04a0  add x9,x10,x9, LSR #0x3f
7102cd04a4  madd x27,x27,x13,x0
7102cd04a8  madd x21,x9,x13,x8
7102cd04ac  add x22,x8,#0x2c
7102cd04b0  cmp x20,#0x1
7102cd04b4  b.lt 0x7102cd04c8
7102cd04b8  mov x0,x21
7102cd04bc  mov x1,x19
7102cd04c0  mov x2,x20
7102cd04c4  bl 0x71039c00e0
7102cd04c8  stp x21,x22,[sp, #0x48]
7102cd04cc  str x27,[sp, #0x58]
7102cd04d0  cbz x19,0x7102cd04dc
7102cd04d4  mov x0,x19
7102cd04d8  bl 0x710392eb40
7102cd04dc  mov x12,#0xd174
7102cd04e0  movk x12,#0x1745, LSL #16
7102cd04e4  mov x19,x21
7102cd04e8  movk x12,#0x745d, LSL #32
7102cd04ec  movk x12,#0x5d1, LSL #48
7102cd04f0  mov x13,x28
7102cd04f4  cmp x26,x25
7102cd04f8  b.lt 0x7102cd0350
7102cd04fc  mov w0,#0x10
7102cd0500  mov w1,#0x10
7102cd0504  bl 0x710392e290
7102cd0508  mov x19,x0
7102cd050c  cbnz x0,0x7102cd0558
7102cd0510  adrp x8,0x7105332000
7102cd0514  ldr x0,[x8, #0xf00]
7102cd0518  cbz x0,0x7102cd0554
7102cd051c  mov w8,#0x10
7102cd0520  str wzr,[sp, #0x18]
7102cd0524  add x1,sp,#0x18
7102cd0528  str x8,[sp, #0x30]
7102cd052c  ldr x8,[x0]
7102cd0530  ldr x8,[x8, #0x30]
7102cd0534  add x2,sp,#0x30
7102cd0538  blr x8
7102cd053c  tbz w0,#0x0,0x7102cd0554
7102cd0540  mov w0,#0x10
7102cd0544  mov w1,#0x10
7102cd0548  bl 0x710392e290
7102cd054c  mov x19,x0
7102cd0550  cbnz x0,0x7102cd0558
7102cd0554  mov x19,xzr
7102cd0558  ldr x8,[sp, #0x10]
7102cd055c  ldr x20,[x8]
7102cd0560  ldr x21,[x8, #0x10]
7102cd0564  adrp x8,0x7105130000
7102cd0568  add x8,x8,#0x5f8
7102cd056c  mov w1,#0xc8
7102cd0570  mov w0,#0x10
7102cd0574  str x8,[x19]
7102cd0578  bl 0x710392e290
7102cd057c  cbnz x0,0x7102cd05c4
7102cd0580  adrp x8,0x7105332000
7102cd0584  ldr x0,[x8, #0xf00]
7102cd0588  cbz x0,0x7102cd05c0
7102cd058c  mov w8,#0xc8
7102cd0590  str wzr,[sp, #0x18]
7102cd0594  add x1,sp,#0x18
7102cd0598  str x8,[sp, #0x30]
7102cd059c  ldr x8,[x0]
7102cd05a0  ldr x8,[x8, #0x30]
7102cd05a4  add x2,sp,#0x30
7102cd05a8  blr x8
7102cd05ac  tbz w0,#0x0,0x7102cd05c0
7102cd05b0  mov w1,#0xc8
7102cd05b4  mov w0,#0x10
7102cd05b8  bl 0x710392e290
7102cd05bc  cbnz x0,0x7102cd05c4
7102cd05c0  mov x0,xzr
7102cd05c4  stp x20,x21,[x0]
7102cd05c8  mov w1,#0x20
7102cd05cc  stp xzr,xzr,[x0, #0xb8]
7102cd05d0  str xzr,[x0, #0x10]
7102cd05d4  stp xzr,xzr,[x0, #0xa8]
7102cd05d8  stp xzr,xzr,[x0, #0x98]
7102cd05dc  stp xzr,xzr,[x0, #0x88]
7102cd05e0  stp xzr,xzr,[x0, #0x78]
7102cd05e4  stp xzr,xzr,[x0, #0x68]
7102cd05e8  stp xzr,xzr,[x0, #0x58]
7102cd05ec  stp xzr,xzr,[x0, #0x48]
7102cd05f0  stp xzr,xzr,[x0, #0x38]
7102cd05f4  stp xzr,xzr,[x0, #0x28]
7102cd05f8  stp xzr,xzr,[x0, #0x18]
7102cd05fc  str x0,[x19, #0x8]
7102cd0600  mov w0,#0x10
7102cd0604  bl 0x710392e290
7102cd0608  mov x20,x0
7102cd060c  cbnz x0,0x7102cd0658
7102cd0610  adrp x8,0x7105332000
7102cd0614  ldr x0,[x8, #0xf00]
7102cd0618  cbz x0,0x7102cd0654
7102cd061c  mov w8,#0x20
7102cd0620  str wzr,[sp, #0x18]
7102cd0624  add x1,sp,#0x18
7102cd0628  str x8,[sp, #0x30]
7102cd062c  ldr x8,[x0]
7102cd0630  ldr x8,[x8, #0x30]
7102cd0634  add x2,sp,#0x30
7102cd0638  blr x8
7102cd063c  tbz w0,#0x0,0x7102cd0654
7102cd0640  mov w0,#0x10
7102cd0644  mov w1,#0x20
7102cd0648  bl 0x710392e290
7102cd064c  mov x20,x0
7102cd0650  cbnz x0,0x7102cd0658
7102cd0654  mov x20,xzr
7102cd0658  mov x21,x20
7102cd065c  adrp x8,0x7105130000
7102cd0660  add x8,x8,#0x670
7102cd0664  str xzr,[x21, #0x8]!
7102cd0668  stp xzr,x19,[x20, #0x10]
7102cd066c  str x8,[x20]
7102cd0670  ldr x8,[sp, #0x10]
7102cd0674  ldr x8,[x8, #0x10]
7102cd0678  ldr x0,[x19, #0x8]
7102cd067c  add x3,x8,#0xa0
7102cd0680  add x4,x8,#0x6d0
7102cd0684  adrp x1,0x71042f6000
7102cd0688  add x1,x1,#0x74
7102cd068c  add x2,sp,#0x48
7102cd0690  bl 0x7102cd8ae0
7102cd0694  ldxr x8,[x21]
7102cd0698  add x8,x8,#0x1
7102cd069c  stxr w9,x8,[x21]
7102cd06a0  cbnz w9,0x7102cd0694
7102cd06a4  ldr x8,[sp, #0x10]
7102cd06a8  str x19,[x8, #0x50]
7102cd06ac  ldr x19,[x8, #0x58]
7102cd06b0  str x20,[x8, #0x58]
7102cd06b4  cbz x19,0x7102cd06e8
7102cd06b8  add x8,x19,#0x8
7102cd06bc  ldaxr x9,[x8]
7102cd06c0  sub x10,x9,#0x1
7102cd06c4  stlxr w11,x10,[x8]
7102cd06c8  cbnz w11,0x7102cd06bc
7102cd06cc  cbnz x9,0x7102cd06e8
7102cd06d0  ldr x8,[x19]
7102cd06d4  ldr x8,[x8, #0x10]
7102cd06d8  mov x0,x19
7102cd06dc  blr x8
7102cd06e0  mov x0,x19
7102cd06e4  bl 0x71039c2670
7102cd06e8  ldaxr x8,[x21]
7102cd06ec  sub x9,x8,#0x1
7102cd06f0  stlxr w10,x9,[x21]
7102cd06f4  cbnz w10,0x7102cd06e8
7102cd06f8  cbnz x8,0x7102cd0714
7102cd06fc  ldr x8,[x20]
7102cd0700  ldr x8,[x8, #0x10]
7102cd0704  mov x0,x20
7102cd0708  blr x8
7102cd070c  mov x0,x20
7102cd0710  bl 0x71039c2670
7102cd0714  ldr x0,[sp, #0x48]
7102cd0718  cbz x0,0x7102cd0724
7102cd071c  str x0,[sp, #0x50]
7102cd0720  bl 0x710392eb40
7102cd0724  ldr x8,[sp, #0x10]
7102cd0728  stp xzr,xzr,[sp, #0x50]
7102cd072c  str xzr,[sp, #0x48]
7102cd0730  ldr x8,[x8, #0x10]
7102cd0734  mov x12,#0xd174
7102cd0738  movk x12,#0x1745, LSL #16
7102cd073c  movk x12,#0x745d, LSL #32
7102cd0740  movk x12,#0x5d1, LSL #48
7102cd0744  ldp x9,x10,[x8, #0xb8]
7102cd0748  sub x9,x10,x9
7102cd074c  lsr x10,x9,#0x5
7102cd0750  cmp w10,#0x1
7102cd0754  b.lt 0x7102cd0930
7102cd0758  mov x13,#0x8ba3
7102cd075c  movk x13,#0xba2e, LSL #16
7102cd0760  mov x19,xzr
7102cd0764  mov x27,xzr
7102cd0768  mov x22,xzr
7102cd076c  sbfx x25,x9,#0x5,#0x20
7102cd0770  mov w23,#0x1
7102cd0774  mov w26,#0x134
7102cd0778  movk x13,#0xa2e8, LSL #32
7102cd077c  movk x13,#0x2e8b, LSL #48
7102cd0780  b 0x7102cd0794
7102cd0784  ldr x8,[sp, #0x10]
7102cd0788  ldr x8,[x8, #0x10]
7102cd078c  add x23,x23,#0x1
7102cd0790  add x26,x26,#0x2c
7102cd0794  ldr x24,[x8, #0x230]
7102cd0798  cmp x22,x27
7102cd079c  b.cs 0x7102cd07d8
7102cd07a0  add x8,x24,x26
7102cd07a4  ldp x9,x10,[x8]
7102cd07a8  stp x9,x10,[x22]
7102cd07ac  ldr x11,[x8, #0x20]
7102cd07b0  ldp x9,x10,[x8, #0x10]
7102cd07b4  ldr w8,[x8, #0x28]
7102cd07b8  str w8,[x22, #0x28]
7102cd07bc  stp x10,x11,[x22, #0x18]
7102cd07c0  str x9,[x22, #0x10]
7102cd07c4  add x22,x22,#0x2c
7102cd07c8  str x22,[sp, #0x50]
7102cd07cc  cmp x23,x25
7102cd07d0  b.lt 0x7102cd0784
7102cd07d4  b 0x7102cd0930
7102cd07d8  sub x20,x22,x19
7102cd07dc  asr x8,x20,#0x2
7102cd07e0  mul x22,x8,x13
7102cd07e4  add x8,x22,#0x1
7102cd07e8  cmp x8,x12
7102cd07ec  b.hi 0x7102cd23e8
7102cd07f0  sub x9,x27,x19
7102cd07f4  mov x27,x12
7102cd07f8  asr x9,x9,#0x2
7102cd07fc  mul x9,x9,x13
7102cd0800  mov x10,#0xe8ba
7102cd0804  movk x10,#0x8ba2, LSL #16
7102cd0808  movk x10,#0xba2e, LSL #32
7102cd080c  movk x10,#0x2e8, LSL #48
7102cd0810  mov x28,x13
7102cd0814  cmp x9,x10
7102cd0818  b.cs 0x7102cd082c
7102cd081c  lsl x9,x9,#0x1
7102cd0820  cmp x9,x8
7102cd0824  csel x27,x8,x9,cc
7102cd0828  cbz x27,0x7102cd0888
7102cd082c  mov w8,#0x2c
7102cd0830  mul x8,x27,x8
7102cd0834  cmp x8,#0x0
7102cd0838  csinc x21,x8,xzr,ne
7102cd083c  mov w0,#0x10
7102cd0840  mov x1,x21
7102cd0844  bl 0x710392e290
7102cd0848  cbnz x0,0x7102cd088c
7102cd084c  adrp x8,0x7105332000
7102cd0850  ldr x0,[x8, #0xf00]
7102cd0854  cbz x0,0x7102cd0888
7102cd0858  str wzr,[sp, #0x18]
7102cd085c  str x21,[sp, #0x30]
7102cd0860  ldr x8,[x0]
7102cd0864  ldr x8,[x8, #0x30]
7102cd0868  add x1,sp,#0x18
7102cd086c  add x2,sp,#0x30
7102cd0870  blr x8
7102cd0874  tbz w0,#0x0,0x7102cd0888
7102cd0878  mov w0,#0x10
7102cd087c  mov x1,x21
7102cd0880  bl 0x710392e290
7102cd0884  cbnz x0,0x7102cd088c
7102cd0888  mov x0,xzr
7102cd088c  mov w8,#0x2c
7102cd0890  mov x13,x8
7102cd0894  madd x8,x22,x8,x0
7102cd0898  add x9,x24,x26
7102cd089c  ldp x10,x11,[x9]
7102cd08a0  stp x10,x11,[x8]
7102cd08a4  ldr x12,[x9, #0x20]
7102cd08a8  ldp x10,x11,[x9, #0x10]
7102cd08ac  ldr w9,[x9, #0x28]
7102cd08b0  str w9,[x8, #0x28]
7102cd08b4  mov x9,#0x745d
7102cd08b8  movk x9,#0x45d1, LSL #16
7102cd08bc  stp x11,x12,[x8, #0x18]
7102cd08c0  movk x9,#0x5d17, LSL #32
7102cd08c4  movk x9,#0xd174, LSL #48
7102cd08c8  smulh x9,x20,x9
7102cd08cc  str x10,[x8, #0x10]
7102cd08d0  asr x10,x9,#0x3
7102cd08d4  add x9,x10,x9, LSR #0x3f
7102cd08d8  madd x27,x27,x13,x0
7102cd08dc  madd x21,x9,x13,x8
7102cd08e0  add x22,x8,#0x2c
7102cd08e4  cmp x20,#0x1
7102cd08e8  b.lt 0x7102cd08fc
7102cd08ec  mov x0,x21
7102cd08f0  mov x1,x19
7102cd08f4  mov x2,x20
7102cd08f8  bl 0x71039c00e0
7102cd08fc  stp x21,x22,[sp, #0x48]
7102cd0900  str x27,[sp, #0x58]
7102cd0904  cbz x19,0x7102cd0910
7102cd0908  mov x0,x19
7102cd090c  bl 0x710392eb40
7102cd0910  mov x12,#0xd174
7102cd0914  movk x12,#0x1745, LSL #16
7102cd0918  mov x19,x21
7102cd091c  movk x12,#0x745d, LSL #32
7102cd0920  movk x12,#0x5d1, LSL #48
7102cd0924  mov x13,x28
7102cd0928  cmp x23,x25
7102cd092c  b.lt 0x7102cd0784
7102cd0930  mov w0,#0x10
7102cd0934  mov w1,#0x10
7102cd0938  bl 0x710392e290
7102cd093c  mov x19,x0
7102cd0940  cbnz x0,0x7102cd098c
7102cd0944  adrp x8,0x7105332000
7102cd0948  ldr x0,[x8, #0xf00]
7102cd094c  cbz x0,0x7102cd0988
7102cd0950  mov w8,#0x10
7102cd0954  str wzr,[sp, #0x18]
7102cd0958  add x1,sp,#0x18
7102cd095c  str x8,[sp, #0x30]
7102cd0960  ldr x8,[x0]
7102cd0964  ldr x8,[x8, #0x30]
7102cd0968  add x2,sp,#0x30
7102cd096c  blr x8
7102cd0970  tbz w0,#0x0,0x7102cd0988
7102cd0974  mov w0,#0x10
7102cd0978  mov w1,#0x10
7102cd097c  bl 0x710392e290
7102cd0980  mov x19,x0
7102cd0984  cbnz x0,0x7102cd098c
7102cd0988  mov x19,xzr
7102cd098c  ldr x8,[sp, #0x10]
7102cd0990  ldr x20,[x8]
7102cd0994  ldr x21,[x8, #0x10]
7102cd0998  adrp x8,0x7105130000
7102cd099c  add x8,x8,#0x5f8
7102cd09a0  mov w1,#0xc8
7102cd09a4  mov w0,#0x10
7102cd09a8  str x8,[x19]
7102cd09ac  bl 0x710392e290
7102cd09b0  adrp x22,0x7105130000
7102cd09b4  add x22,x22,#0x670
7102cd09b8  cbnz x0,0x7102cd0a00
7102cd09bc  adrp x8,0x7105332000
7102cd09c0  ldr x0,[x8, #0xf00]
7102cd09c4  cbz x0,0x7102cd09fc
7102cd09c8  mov w8,#0xc8
7102cd09cc  str wzr,[sp, #0x18]
7102cd09d0  add x1,sp,#0x18
7102cd09d4  str x8,[sp, #0x30]
7102cd09d8  ldr x8,[x0]
7102cd09dc  ldr x8,[x8, #0x30]
7102cd09e0  add x2,sp,#0x30
7102cd09e4  blr x8
7102cd09e8  tbz w0,#0x0,0x7102cd09fc
7102cd09ec  mov w1,#0xc8
7102cd09f0  mov w0,#0x10
7102cd09f4  bl 0x710392e290
7102cd09f8  cbnz x0,0x7102cd0a00
7102cd09fc  mov x0,xzr
7102cd0a00  stp x20,x21,[x0]
7102cd0a04  mov w1,#0x20
7102cd0a08  stp xzr,xzr,[x0, #0xb8]
7102cd0a0c  str xzr,[x0, #0x10]
7102cd0a10  stp xzr,xzr,[x0, #0xa8]
7102cd0a14  stp xzr,xzr,[x0, #0x98]
7102cd0a18  stp xzr,xzr,[x0, #0x88]
7102cd0a1c  stp xzr,xzr,[x0, #0x78]
7102cd0a20  stp xzr,xzr,[x0, #0x68]
7102cd0a24  stp xzr,xzr,[x0, #0x58]
7102cd0a28  stp xzr,xzr,[x0, #0x48]
7102cd0a2c  stp xzr,xzr,[x0, #0x38]
7102cd0a30  stp xzr,xzr,[x0, #0x28]
7102cd0a34  stp xzr,xzr,[x0, #0x18]
7102cd0a38  str x0,[x19, #0x8]
7102cd0a3c  mov w0,#0x10
7102cd0a40  bl 0x710392e290
7102cd0a44  mov x20,x0
7102cd0a48  cbnz x0,0x7102cd0a94
7102cd0a4c  adrp x8,0x7105332000
7102cd0a50  ldr x0,[x8, #0xf00]
7102cd0a54  cbz x0,0x7102cd0a90
7102cd0a58  mov w8,#0x20
7102cd0a5c  str wzr,[sp, #0x18]
7102cd0a60  add x1,sp,#0x18
7102cd0a64  str x8,[sp, #0x30]
7102cd0a68  ldr x8,[x0]
7102cd0a6c  ldr x8,[x8, #0x30]
7102cd0a70  add x2,sp,#0x30
7102cd0a74  blr x8
7102cd0a78  tbz w0,#0x0,0x7102cd0a90
7102cd0a7c  mov w0,#0x10
7102cd0a80  mov w1,#0x20
7102cd0a84  bl 0x710392e290
7102cd0a88  mov x20,x0
7102cd0a8c  cbnz x0,0x7102cd0a94
7102cd0a90  mov x20,xzr
7102cd0a94  mov x21,x20
7102cd0a98  adrp x1,0x71042f6000
7102cd0a9c  add x1,x1,#0x64
7102cd0aa0  str xzr,[x21, #0x8]!
7102cd0aa4  stp xzr,x19,[x20, #0x10]
7102cd0aa8  ldr x8,[sp, #0x10]
7102cd0aac  str x22,[x20]
7102cd0ab0  ldr x8,[x8, #0x10]
7102cd0ab4  ldr x0,[x19, #0x8]
7102cd0ab8  add x3,x8,#0xb8
7102cd0abc  add x4,x8,#0x6e8
7102cd0ac0  add x2,sp,#0x48
7102cd0ac4  bl 0x7102cd8ae0
7102cd0ac8  ldxr x8,[x21]
7102cd0acc  add x8,x8,#0x1
7102cd0ad0  stxr w9,x8,[x21]
7102cd0ad4  cbnz w9,0x7102cd0ac8
7102cd0ad8  ldr x8,[sp, #0x10]
7102cd0adc  str x19,[x8, #0x60]
7102cd0ae0  ldr x19,[x8, #0x68]
7102cd0ae4  str x20,[x8, #0x68]
7102cd0ae8  cbz x19,0x7102cd0b1c
7102cd0aec  add x8,x19,#0x8
7102cd0af0  ldaxr x9,[x8]
7102cd0af4  sub x10,x9,#0x1
7102cd0af8  stlxr w11,x10,[x8]
7102cd0afc  cbnz w11,0x7102cd0af0
7102cd0b00  cbnz x9,0x7102cd0b1c
7102cd0b04  ldr x8,[x19]
7102cd0b08  ldr x8,[x8, #0x10]
7102cd0b0c  mov x0,x19
7102cd0b10  blr x8
7102cd0b14  mov x0,x19
7102cd0b18  bl 0x71039c2670
7102cd0b1c  ldaxr x8,[x21]
7102cd0b20  sub x9,x8,#0x1
7102cd0b24  stlxr w10,x9,[x21]
7102cd0b28  cbnz w10,0x7102cd0b1c
7102cd0b2c  cbnz x8,0x7102cd0b48
7102cd0b30  ldr x8,[x20]
7102cd0b34  ldr x8,[x8, #0x10]
7102cd0b38  mov x0,x20
7102cd0b3c  blr x8
7102cd0b40  mov x0,x20
7102cd0b44  bl 0x71039c2670
7102cd0b48  ldr x0,[sp, #0x48]
7102cd0b4c  cbz x0,0x7102cd0b58
7102cd0b50  str x0,[sp, #0x50]
7102cd0b54  bl 0x710392eb40
7102cd0b58  ldr x8,[sp, #0x10]
7102cd0b5c  stp xzr,xzr,[sp, #0x50]
7102cd0b60  str xzr,[sp, #0x48]
7102cd0b64  ldr x8,[x8, #0x10]
7102cd0b68  mov x12,#0xd174
7102cd0b6c  movk x12,#0x1745, LSL #16
7102cd0b70  movk x12,#0x745d, LSL #32
7102cd0b74  movk x12,#0x5d1, LSL #48
7102cd0b78  ldp x9,x10,[x8, #0xd0]
7102cd0b7c  sub x9,x10,x9
7102cd0b80  lsr x10,x9,#0x5
7102cd0b84  cmp w10,#0x1
7102cd0b88  b.lt 0x7102cd0d64
7102cd0b8c  mov x13,#0x8ba3
7102cd0b90  movk x13,#0xba2e, LSL #16
7102cd0b94  mov x19,xzr
7102cd0b98  mov x27,xzr
7102cd0b9c  mov x22,xzr
7102cd0ba0  sbfx x25,x9,#0x5,#0x20
7102cd0ba4  mov w23,#0x1
7102cd0ba8  mov w26,#0x2c0
7102cd0bac  movk x13,#0xa2e8, LSL #32
7102cd0bb0  movk x13,#0x2e8b, LSL #48
7102cd0bb4  b 0x7102cd0bc8
7102cd0bb8  ldr x8,[sp, #0x10]
7102cd0bbc  ldr x8,[x8, #0x10]
7102cd0bc0  add x23,x23,#0x1
7102cd0bc4  add x26,x26,#0x2c
7102cd0bc8  ldr x24,[x8, #0x230]
7102cd0bcc  cmp x22,x27
7102cd0bd0  b.cs 0x7102cd0c0c
7102cd0bd4  add x8,x24,x26
7102cd0bd8  ldp x9,x10,[x8]
7102cd0bdc  stp x9,x10,[x22]
7102cd0be0  ldr x11,[x8, #0x20]
7102cd0be4  ldp x9,x10,[x8, #0x10]
7102cd0be8  ldr w8,[x8, #0x28]
7102cd0bec  str w8,[x22, #0x28]
7102cd0bf0  stp x10,x11,[x22, #0x18]
7102cd0bf4  str x9,[x22, #0x10]
7102cd0bf8  add x22,x22,#0x2c
7102cd0bfc  str x22,[sp, #0x50]
7102cd0c00  cmp x23,x25
7102cd0c04  b.lt 0x7102cd0bb8
7102cd0c08  b 0x7102cd0d64
7102cd0c0c  sub x20,x22,x19
7102cd0c10  asr x8,x20,#0x2
7102cd0c14  mul x22,x8,x13
7102cd0c18  add x8,x22,#0x1
7102cd0c1c  cmp x8,x12
7102cd0c20  b.hi 0x7102cd23e8
7102cd0c24  sub x9,x27,x19
7102cd0c28  mov x27,x12
7102cd0c2c  asr x9,x9,#0x2
7102cd0c30  mul x9,x9,x13
7102cd0c34  mov x10,#0xe8ba
7102cd0c38  movk x10,#0x8ba2, LSL #16
7102cd0c3c  movk x10,#0xba2e, LSL #32
7102cd0c40  movk x10,#0x2e8, LSL #48
7102cd0c44  mov x28,x13
7102cd0c48  cmp x9,x10
7102cd0c4c  b.cs 0x7102cd0c60
7102cd0c50  lsl x9,x9,#0x1
7102cd0c54  cmp x9,x8
7102cd0c58  csel x27,x8,x9,cc
7102cd0c5c  cbz x27,0x7102cd0cbc
7102cd0c60  mov w8,#0x2c
7102cd0c64  mul x8,x27,x8
7102cd0c68  cmp x8,#0x0
7102cd0c6c  csinc x21,x8,xzr,ne
7102cd0c70  mov w0,#0x10
7102cd0c74  mov x1,x21
7102cd0c78  bl 0x710392e290
7102cd0c7c  cbnz x0,0x7102cd0cc0
7102cd0c80  adrp x8,0x7105332000
7102cd0c84  ldr x0,[x8, #0xf00]
7102cd0c88  cbz x0,0x7102cd0cbc
7102cd0c8c  str wzr,[sp, #0x18]
7102cd0c90  str x21,[sp, #0x30]
7102cd0c94  ldr x8,[x0]
7102cd0c98  ldr x8,[x8, #0x30]
7102cd0c9c  add x1,sp,#0x18
7102cd0ca0  add x2,sp,#0x30
7102cd0ca4  blr x8
7102cd0ca8  tbz w0,#0x0,0x7102cd0cbc
7102cd0cac  mov w0,#0x10
7102cd0cb0  mov x1,x21
7102cd0cb4  bl 0x710392e290
7102cd0cb8  cbnz x0,0x7102cd0cc0
7102cd0cbc  mov x0,xzr
7102cd0cc0  mov w8,#0x2c
7102cd0cc4  mov x13,x8
7102cd0cc8  madd x8,x22,x8,x0
7102cd0ccc  add x9,x24,x26
7102cd0cd0  ldp x10,x11,[x9]
7102cd0cd4  stp x10,x11,[x8]
7102cd0cd8  ldr x12,[x9, #0x20]
7102cd0cdc  ldp x10,x11,[x9, #0x10]
7102cd0ce0  ldr w9,[x9, #0x28]
7102cd0ce4  str w9,[x8, #0x28]
7102cd0ce8  mov x9,#0x745d
7102cd0cec  movk x9,#0x45d1, LSL #16
7102cd0cf0  stp x11,x12,[x8, #0x18]
7102cd0cf4  movk x9,#0x5d17, LSL #32
7102cd0cf8  movk x9,#0xd174, LSL #48
7102cd0cfc  smulh x9,x20,x9
7102cd0d00  str x10,[x8, #0x10]
7102cd0d04  asr x10,x9,#0x3
7102cd0d08  add x9,x10,x9, LSR #0x3f
7102cd0d0c  madd x27,x27,x13,x0
7102cd0d10  madd x21,x9,x13,x8
7102cd0d14  add x22,x8,#0x2c
7102cd0d18  cmp x20,#0x1
7102cd0d1c  b.lt 0x7102cd0d30
7102cd0d20  mov x0,x21
7102cd0d24  mov x1,x19
7102cd0d28  mov x2,x20
7102cd0d2c  bl 0x71039c00e0
7102cd0d30  stp x21,x22,[sp, #0x48]
7102cd0d34  str x27,[sp, #0x58]
7102cd0d38  cbz x19,0x7102cd0d44
7102cd0d3c  mov x0,x19
7102cd0d40  bl 0x710392eb40
7102cd0d44  mov x12,#0xd174
7102cd0d48  movk x12,#0x1745, LSL #16
7102cd0d4c  mov x19,x21
7102cd0d50  movk x12,#0x745d, LSL #32
7102cd0d54  movk x12,#0x5d1, LSL #48
7102cd0d58  mov x13,x28
7102cd0d5c  cmp x23,x25
7102cd0d60  b.lt 0x7102cd0bb8
7102cd0d64  mov w0,#0x10
7102cd0d68  mov w1,#0x10
7102cd0d6c  bl 0x710392e290
7102cd0d70  mov x19,x0
7102cd0d74  cbnz x0,0x7102cd0dc0
7102cd0d78  adrp x8,0x7105332000
7102cd0d7c  ldr x0,[x8, #0xf00]
7102cd0d80  cbz x0,0x7102cd0dbc
7102cd0d84  mov w8,#0x10
7102cd0d88  str wzr,[sp, #0x18]
7102cd0d8c  add x1,sp,#0x18
7102cd0d90  str x8,[sp, #0x30]
7102cd0d94  ldr x8,[x0]
7102cd0d98  ldr x8,[x8, #0x30]
7102cd0d9c  add x2,sp,#0x30
7102cd0da0  blr x8
7102cd0da4  tbz w0,#0x0,0x7102cd0dbc
7102cd0da8  mov w0,#0x10
7102cd0dac  mov w1,#0x10
7102cd0db0  bl 0x710392e290
7102cd0db4  mov x19,x0
7102cd0db8  cbnz x0,0x7102cd0dc0
7102cd0dbc  mov x19,xzr
7102cd0dc0  ldr x8,[sp, #0x10]
7102cd0dc4  ldr x20,[x8]
7102cd0dc8  ldr x21,[x8, #0x10]
7102cd0dcc  adrp x24,0x7105130000
7102cd0dd0  add x24,x24,#0x5f8
7102cd0dd4  mov w1,#0xc8
7102cd0dd8  mov w0,#0x10
7102cd0ddc  str x24,[x19]
7102cd0de0  bl 0x710392e290
7102cd0de4  ldp x23,x22,[sp]
7102cd0de8  adrp x25,0x7105130000
7102cd0dec  add x25,x25,#0x670
7102cd0df0  cbnz x0,0x7102cd0e38
7102cd0df4  adrp x8,0x7105332000
7102cd0df8  ldr x0,[x8, #0xf00]
7102cd0dfc  cbz x0,0x7102cd0e34
7102cd0e00  mov w8,#0xc8
7102cd0e04  str wzr,[sp, #0x18]
7102cd0e08  add x1,sp,#0x18
7102cd0e0c  str x8,[sp, #0x30]
7102cd0e10  ldr x8,[x0]
7102cd0e14  ldr x8,[x8, #0x30]
7102cd0e18  add x2,sp,#0x30
7102cd0e1c  blr x8
7102cd0e20  tbz w0,#0x0,0x7102cd0e34
7102cd0e24  mov w1,#0xc8
7102cd0e28  mov w0,#0x10
7102cd0e2c  bl 0x710392e290
7102cd0e30  cbnz x0,0x7102cd0e38
7102cd0e34  mov x0,xzr
7102cd0e38  stp x20,x21,[x0]
7102cd0e3c  mov w1,#0x20
7102cd0e40  stp xzr,xzr,[x0, #0xb8]
7102cd0e44  str xzr,[x0, #0x10]
7102cd0e48  stp xzr,xzr,[x0, #0xa8]
7102cd0e4c  stp xzr,xzr,[x0, #0x98]
7102cd0e50  stp xzr,xzr,[x0, #0x88]
7102cd0e54  stp xzr,xzr,[x0, #0x78]
7102cd0e58  stp xzr,xzr,[x0, #0x68]
7102cd0e5c  stp xzr,xzr,[x0, #0x58]
7102cd0e60  stp xzr,xzr,[x0, #0x48]
7102cd0e64  stp xzr,xzr,[x0, #0x38]
7102cd0e68  stp xzr,xzr,[x0, #0x28]
7102cd0e6c  stp xzr,xzr,[x0, #0x18]
7102cd0e70  str x0,[x19, #0x8]
7102cd0e74  mov w0,#0x10
7102cd0e78  bl 0x710392e290
7102cd0e7c  mov x20,x0
7102cd0e80  cbnz x0,0x7102cd0ecc
7102cd0e84  adrp x8,0x7105332000
7102cd0e88  ldr x0,[x8, #0xf00]
7102cd0e8c  cbz x0,0x7102cd0ec8
7102cd0e90  mov w8,#0x20
7102cd0e94  str wzr,[sp, #0x18]
7102cd0e98  add x1,sp,#0x18
7102cd0e9c  str x8,[sp, #0x30]
7102cd0ea0  ldr x8,[x0]
7102cd0ea4  ldr x8,[x8, #0x30]
7102cd0ea8  add x2,sp,#0x30
7102cd0eac  blr x8
7102cd0eb0  tbz w0,#0x0,0x7102cd0ec8
7102cd0eb4  mov w0,#0x10
7102cd0eb8  mov w1,#0x20
7102cd0ebc  bl 0x710392e290
7102cd0ec0  mov x20,x0
7102cd0ec4  cbnz x0,0x7102cd0ecc
7102cd0ec8  mov x20,xzr
7102cd0ecc  mov x21,x20
7102cd0ed0  adrp x1,0x71043cd000
7102cd0ed4  add x1,x1,#0x7eb
7102cd0ed8  str xzr,[x21, #0x8]!
7102cd0edc  stp xzr,x19,[x20, #0x10]
7102cd0ee0  ldr x8,[sp, #0x10]
7102cd0ee4  str x25,[x20]
7102cd0ee8  ldr x8,[x8, #0x10]
7102cd0eec  ldr x0,[x19, #0x8]
7102cd0ef0  add x3,x8,#0xd0
7102cd0ef4  add x4,x8,#0x700
7102cd0ef8  add x2,sp,#0x48
7102cd0efc  bl 0x7102cd8ae0
7102cd0f00  ldxr x8,[x21]
7102cd0f04  add x8,x8,#0x1
7102cd0f08  stxr w9,x8,[x21]
7102cd0f0c  cbnz w9,0x7102cd0f00
7102cd0f10  ldr x8,[sp, #0x10]
7102cd0f14  str x19,[x8, #0x70]
7102cd0f18  ldr x19,[x8, #0x78]
7102cd0f1c  str x20,[x8, #0x78]
7102cd0f20  cbz x19,0x7102cd0f54
7102cd0f24  add x8,x19,#0x8
7102cd0f28  ldaxr x9,[x8]
7102cd0f2c  sub x10,x9,#0x1
7102cd0f30  stlxr w11,x10,[x8]
7102cd0f34  cbnz w11,0x7102cd0f28
7102cd0f38  cbnz x9,0x7102cd0f54
7102cd0f3c  ldr x8,[x19]
7102cd0f40  ldr x8,[x8, #0x10]
7102cd0f44  mov x0,x19
7102cd0f48  blr x8
7102cd0f4c  mov x0,x19
7102cd0f50  bl 0x71039c2670
7102cd0f54  ldaxr x8,[x21]
7102cd0f58  sub x9,x8,#0x1
7102cd0f5c  stlxr w10,x9,[x21]
7102cd0f60  cbnz w10,0x7102cd0f54
7102cd0f64  cbnz x8,0x7102cd0f80
7102cd0f68  ldr x8,[x20]
7102cd0f6c  ldr x8,[x8, #0x10]
7102cd0f70  mov x0,x20
7102cd0f74  blr x8
7102cd0f78  mov x0,x20
7102cd0f7c  bl 0x71039c2670
7102cd0f80  ldr x0,[sp, #0x48]
7102cd0f84  cbz x0,0x7102cd0f90
7102cd0f88  str x0,[sp, #0x50]
7102cd0f8c  bl 0x710392eb40
7102cd0f90  ldr x8,[sp, #0x10]
7102cd0f94  ldr x20,[x8, #0x10]
7102cd0f98  ldr x8,[x20, #0x230]
7102cd0f9c  mov w1,#0x2c
7102cd0fa0  mov w0,#0x10
7102cd0fa4  add x19,x8,#0x44c
7102cd0fa8  bl 0x710392e290
7102cd0fac  cbnz x0,0x7102cd0ff4
7102cd0fb0  adrp x8,0x7105332000
7102cd0fb4  ldr x0,[x8, #0xf00]
7102cd0fb8  cbz x0,0x7102cd0ff0
7102cd0fbc  mov w8,#0x2c
7102cd0fc0  str wzr,[sp, #0x30]
7102cd0fc4  add x1,sp,#0x30
7102cd0fc8  str x8,[sp, #0x48]
7102cd0fcc  ldr x8,[x0]
7102cd0fd0  ldr x8,[x8, #0x30]
7102cd0fd4  add x2,sp,#0x48
7102cd0fd8  blr x8
7102cd0fdc  tbz w0,#0x0,0x7102cd0ff0
7102cd0fe0  mov w1,#0x2c
7102cd0fe4  mov w0,#0x10
7102cd0fe8  bl 0x710392e290
7102cd0fec  cbnz x0,0x7102cd0ff4
7102cd0ff0  mov x0,xzr
7102cd0ff4  ldp x8,x9,[x19]
7102cd0ff8  mov w1,#0x20
7102cd0ffc  stp x8,x9,[x0]
7102cd1000  ldr x10,[x19, #0x20]
7102cd1004  ldp x8,x9,[x19, #0x10]
7102cd1008  ldr w11,[x19, #0x28]
7102cd100c  str x8,[x0, #0x10]
7102cd1010  add x8,x0,#0x2c
7102cd1014  str w11,[x0, #0x28]
7102cd1018  stp x9,x10,[x0, #0x18]
7102cd101c  str x8,[sp, #0x58]
7102cd1020  stp x0,x8,[sp, #0x48]
7102cd1024  mov w0,#0x10
7102cd1028  stp xzr,xzr,[sp, #0x38]
7102cd102c  add x19,x20,#0xe8
7102cd1030  str xzr,[sp, #0x30]
7102cd1034  bl 0x710392e290
7102cd1038  cbnz x0,0x7102cd1080
7102cd103c  adrp x8,0x7105332000
7102cd1040  ldr x0,[x8, #0xf00]
7102cd1044  cbz x0,0x7102cd107c
7102cd1048  mov w8,#0x20
7102cd104c  str wzr,[sp, #0x60]
7102cd1050  add x1,sp,#0x60
7102cd1054  str x8,[sp, #0x18]
7102cd1058  ldr x8,[x0]
7102cd105c  ldr x8,[x8, #0x30]
7102cd1060  add x2,sp,#0x18
7102cd1064  blr x8
7102cd1068  tbz w0,#0x0,0x7102cd107c
7102cd106c  mov w0,#0x10
7102cd1070  mov w1,#0x20
7102cd1074  bl 0x710392e290
7102cd1078  cbnz x0,0x7102cd1080
7102cd107c  mov x0,xzr
7102cd1080  ldp x8,x9,[x19]
7102cd1084  mov w1,#0x10
7102cd1088  ldp x10,x11,[x19, #0x10]
7102cd108c  stp x8,x9,[x0]
7102cd1090  add x8,x0,#0x20
7102cd1094  stp x10,x11,[x0, #0x10]
7102cd1098  str x8,[sp, #0x28]
7102cd109c  stp x0,x8,[sp, #0x18]
7102cd10a0  mov w0,#0x10
7102cd10a4  bl 0x710392e290
7102cd10a8  mov x19,x0
7102cd10ac  cbnz x0,0x7102cd10f8
7102cd10b0  adrp x8,0x7105332000
7102cd10b4  ldr x0,[x8, #0xf00]
7102cd10b8  cbz x0,0x7102cd10f4
7102cd10bc  mov w8,#0x10
7102cd10c0  stur wzr,[x29, #-0x54]
7102cd10c4  sub x1,x29,#0x54
7102cd10c8  str x8,[sp, #0x60]
7102cd10cc  ldr x8,[x0]
7102cd10d0  ldr x8,[x8, #0x30]
7102cd10d4  add x2,sp,#0x60
7102cd10d8  blr x8
7102cd10dc  tbz w0,#0x0,0x7102cd10f4
7102cd10e0  mov w0,#0x10
7102cd10e4  mov w1,#0x10
7102cd10e8  bl 0x710392e290
7102cd10ec  mov x19,x0
7102cd10f0  cbnz x0,0x7102cd10f8
7102cd10f4  mov x19,xzr
7102cd10f8  ldr x8,[sp, #0x10]
7102cd10fc  ldr x21,[x8]
7102cd1100  mov w1,#0xc8
7102cd1104  mov w0,#0x10
7102cd1108  str x24,[x19]
7102cd110c  bl 0x710392e290
7102cd1110  cbnz x0,0x7102cd1158
7102cd1114  adrp x8,0x7105332000
7102cd1118  ldr x0,[x8, #0xf00]
7102cd111c  cbz x0,0x7102cd1154
7102cd1120  mov w8,#0xc8
7102cd1124  stur wzr,[x29, #-0x54]
7102cd1128  sub x1,x29,#0x54
7102cd112c  str x8,[sp, #0x60]
7102cd1130  ldr x8,[x0]
7102cd1134  ldr x8,[x8, #0x30]
7102cd1138  add x2,sp,#0x60
7102cd113c  blr x8
7102cd1140  tbz w0,#0x0,0x7102cd1154
7102cd1144  mov w1,#0xc8
7102cd1148  mov w0,#0x10
7102cd114c  bl 0x710392e290
7102cd1150  cbnz x0,0x7102cd1158
7102cd1154  mov x0,xzr
7102cd1158  stp x21,x20,[x0]
7102cd115c  mov w1,#0x20
7102cd1160  stp xzr,xzr,[x0, #0xb8]
7102cd1164  str xzr,[x0, #0x10]
7102cd1168  stp xzr,xzr,[x0, #0xa8]
7102cd116c  stp xzr,xzr,[x0, #0x98]
7102cd1170  stp xzr,xzr,[x0, #0x88]
7102cd1174  stp xzr,xzr,[x0, #0x78]
7102cd1178  stp xzr,xzr,[x0, #0x68]
7102cd117c  stp xzr,xzr,[x0, #0x58]
7102cd1180  stp xzr,xzr,[x0, #0x48]
7102cd1184  stp xzr,xzr,[x0, #0x38]
7102cd1188  stp xzr,xzr,[x0, #0x28]
7102cd118c  stp xzr,xzr,[x0, #0x18]
7102cd1190  str x0,[x19, #0x8]
7102cd1194  mov w0,#0x10
7102cd1198  bl 0x710392e290
7102cd119c  mov x20,x0
7102cd11a0  cbnz x0,0x7102cd11ec
7102cd11a4  adrp x8,0x7105332000
7102cd11a8  ldr x0,[x8, #0xf00]
7102cd11ac  cbz x0,0x7102cd11e8
7102cd11b0  mov w8,#0x20
7102cd11b4  stur wzr,[x29, #-0x54]
7102cd11b8  sub x1,x29,#0x54
7102cd11bc  str x8,[sp, #0x60]
7102cd11c0  ldr x8,[x0]
7102cd11c4  ldr x8,[x8, #0x30]
7102cd11c8  add x2,sp,#0x60
7102cd11cc  blr x8
7102cd11d0  tbz w0,#0x0,0x7102cd11e8
7102cd11d4  mov w0,#0x10
7102cd11d8  mov w1,#0x20
7102cd11dc  bl 0x710392e290
7102cd11e0  mov x20,x0
7102cd11e4  cbnz x0,0x7102cd11ec
7102cd11e8  mov x20,xzr
7102cd11ec  mov x21,x20
7102cd11f0  adrp x1,0x710437a000
7102cd11f4  add x1,x1,#0x972
7102cd11f8  str xzr,[x21, #0x8]!
7102cd11fc  stp xzr,x19,[x20, #0x10]
7102cd1200  str x25,[x20]
7102cd1204  ldr x0,[x19, #0x8]
7102cd1208  add x2,sp,#0x48
7102cd120c  add x3,sp,#0x18
7102cd1210  add x4,sp,#0x30
7102cd1214  bl 0x7102cd8ae0
7102cd1218  ldxr x8,[x21]
7102cd121c  add x8,x8,#0x1
7102cd1220  stxr w9,x8,[x21]
7102cd1224  cbnz w9,0x7102cd1218
7102cd1228  ldr x8,[sp, #0x10]
7102cd122c  str x19,[x8, #0x80]
7102cd1230  ldr x19,[x8, #0x88]
7102cd1234  str x20,[x8, #0x88]
7102cd1238  cbz x19,0x7102cd126c
7102cd123c  add x8,x19,#0x8
7102cd1240  ldaxr x9,[x8]
7102cd1244  sub x10,x9,#0x1
7102cd1248  stlxr w11,x10,[x8]
7102cd124c  cbnz w11,0x7102cd1240
7102cd1250  cbnz x9,0x7102cd126c
7102cd1254  ldr x8,[x19]
7102cd1258  ldr x8,[x8, #0x10]
7102cd125c  mov x0,x19
7102cd1260  blr x8
7102cd1264  mov x0,x19
7102cd1268  bl 0x71039c2670
7102cd126c  ldaxr x8,[x21]
7102cd1270  sub x9,x8,#0x1
7102cd1274  stlxr w10,x9,[x21]
7102cd1278  cbnz w10,0x7102cd126c
7102cd127c  cbnz x8,0x7102cd1298
7102cd1280  ldr x8,[x20]
7102cd1284  ldr x8,[x8, #0x10]
7102cd1288  mov x0,x20
7102cd128c  blr x8
7102cd1290  mov x0,x20
7102cd1294  bl 0x71039c2670
7102cd1298  ldr x0,[sp, #0x18]
7102cd129c  cbz x0,0x7102cd12a8
7102cd12a0  str x0,[sp, #0x20]
7102cd12a4  bl 0x710392eb40
7102cd12a8  ldr x0,[sp, #0x30]
7102cd12ac  cbz x0,0x7102cd12b8
7102cd12b0  str x0,[sp, #0x38]
7102cd12b4  bl 0x710392eb40
7102cd12b8  ldr x0,[sp, #0x48]
7102cd12bc  cbz x0,0x7102cd12c8
7102cd12c0  str x0,[sp, #0x50]
7102cd12c4  bl 0x710392eb40
7102cd12c8  ldr x8,[sp, #0x10]
7102cd12cc  ldr x20,[x8, #0x10]
7102cd12d0  ldr x8,[x20, #0x230]
7102cd12d4  mov w1,#0x2c
7102cd12d8  mov w0,#0x10
7102cd12dc  add x19,x8,#0x478
7102cd12e0  bl 0x710392e290
7102cd12e4  cbnz x0,0x7102cd132c
7102cd12e8  adrp x8,0x7105332000
7102cd12ec  ldr x0,[x8, #0xf00]
7102cd12f0  cbz x0,0x7102cd1328
7102cd12f4  mov w8,#0x2c
7102cd12f8  str wzr,[sp, #0x30]
7102cd12fc  add x1,sp,#0x30
7102cd1300  str x8,[sp, #0x48]
7102cd1304  ldr x8,[x0]
7102cd1308  ldr x8,[x8, #0x30]
7102cd130c  add x2,sp,#0x48
7102cd1310  blr x8
7102cd1314  tbz w0,#0x0,0x7102cd1328
7102cd1318  mov w1,#0x2c
7102cd131c  mov w0,#0x10
7102cd1320  bl 0x710392e290
7102cd1324  cbnz x0,0x7102cd132c
7102cd1328  mov x0,xzr
7102cd132c  ldp x8,x9,[x19]
7102cd1330  mov w1,#0x20
7102cd1334  stp x8,x9,[x0]
7102cd1338  ldr x10,[x19, #0x20]
7102cd133c  ldp x8,x9,[x19, #0x10]
7102cd1340  ldr w11,[x19, #0x28]
7102cd1344  str x8,[x0, #0x10]
7102cd1348  add x8,x0,#0x2c
7102cd134c  str w11,[x0, #0x28]
7102cd1350  stp x9,x10,[x0, #0x18]
7102cd1354  str x8,[sp, #0x58]
7102cd1358  stp x0,x8,[sp, #0x48]
7102cd135c  mov w0,#0x10
7102cd1360  stp xzr,xzr,[sp, #0x38]
7102cd1364  add x19,x20,#0x108
7102cd1368  str xzr,[sp, #0x30]
7102cd136c  bl 0x710392e290
7102cd1370  cbnz x0,0x7102cd13b8
7102cd1374  adrp x8,0x7105332000
7102cd1378  ldr x0,[x8, #0xf00]
7102cd137c  cbz x0,0x7102cd13b4
7102cd1380  mov w8,#0x20
7102cd1384  str wzr,[sp, #0x60]
7102cd1388  add x1,sp,#0x60
7102cd138c  str x8,[sp, #0x18]
7102cd1390  ldr x8,[x0]
7102cd1394  ldr x8,[x8, #0x30]
7102cd1398  add x2,sp,#0x18
7102cd139c  blr x8
7102cd13a0  tbz w0,#0x0,0x7102cd13b4
7102cd13a4  mov w0,#0x10
7102cd13a8  mov w1,#0x20
7102cd13ac  bl 0x710392e290
7102cd13b0  cbnz x0,0x7102cd13b8
7102cd13b4  mov x0,xzr
7102cd13b8  ldp x8,x9,[x19]
7102cd13bc  mov w1,#0x10
7102cd13c0  ldp x10,x11,[x19, #0x10]
7102cd13c4  stp x8,x9,[x0]
7102cd13c8  add x8,x0,#0x20
7102cd13cc  stp x10,x11,[x0, #0x10]
7102cd13d0  str x8,[sp, #0x28]
7102cd13d4  stp x0,x8,[sp, #0x18]
7102cd13d8  mov w0,#0x10
7102cd13dc  bl 0x710392e290
7102cd13e0  mov x19,x0
7102cd13e4  cbnz x0,0x7102cd1430
7102cd13e8  adrp x8,0x7105332000
7102cd13ec  ldr x0,[x8, #0xf00]
7102cd13f0  cbz x0,0x7102cd142c
7102cd13f4  mov w8,#0x10
7102cd13f8  stur wzr,[x29, #-0x54]
7102cd13fc  sub x1,x29,#0x54
7102cd1400  str x8,[sp, #0x60]
7102cd1404  ldr x8,[x0]
7102cd1408  ldr x8,[x8, #0x30]
7102cd140c  add x2,sp,#0x60
7102cd1410  blr x8
7102cd1414  tbz w0,#0x0,0x7102cd142c
7102cd1418  mov w0,#0x10
7102cd141c  mov w1,#0x10
7102cd1420  bl 0x710392e290
7102cd1424  mov x19,x0
7102cd1428  cbnz x0,0x7102cd1430
7102cd142c  mov x19,xzr
7102cd1430  ldr x8,[sp, #0x10]
7102cd1434  ldr x21,[x8]
7102cd1438  mov w1,#0xc8
7102cd143c  mov w0,#0x10
7102cd1440  str x24,[x19]
7102cd1444  bl 0x710392e290
7102cd1448  cbnz x0,0x7102cd1490
7102cd144c  adrp x8,0x7105332000
7102cd1450  ldr x0,[x8, #0xf00]
7102cd1454  cbz x0,0x7102cd148c
7102cd1458  mov w8,#0xc8
7102cd145c  stur wzr,[x29, #-0x54]
7102cd1460  sub x1,x29,#0x54
7102cd1464  str x8,[sp, #0x60]
7102cd1468  ldr x8,[x0]
7102cd146c  ldr x8,[x8, #0x30]
7102cd1470  add x2,sp,#0x60
7102cd1474  blr x8
7102cd1478  tbz w0,#0x0,0x7102cd148c
7102cd147c  mov w1,#0xc8
7102cd1480  mov w0,#0x10
7102cd1484  bl 0x710392e290
7102cd1488  cbnz x0,0x7102cd1490
7102cd148c  mov x0,xzr
7102cd1490  stp x21,x20,[x0]
7102cd1494  mov w1,#0x20
7102cd1498  stp xzr,xzr,[x0, #0xb8]
7102cd149c  str xzr,[x0, #0x10]
7102cd14a0  stp xzr,xzr,[x0, #0xa8]
7102cd14a4  stp xzr,xzr,[x0, #0x98]
7102cd14a8  stp xzr,xzr,[x0, #0x88]
7102cd14ac  stp xzr,xzr,[x0, #0x78]
7102cd14b0  stp xzr,xzr,[x0, #0x68]
7102cd14b4  stp xzr,xzr,[x0, #0x58]
7102cd14b8  stp xzr,xzr,[x0, #0x48]
7102cd14bc  stp xzr,xzr,[x0, #0x38]
7102cd14c0  stp xzr,xzr,[x0, #0x28]
7102cd14c4  stp xzr,xzr,[x0, #0x18]
7102cd14c8  str x0,[x19, #0x8]
7102cd14cc  mov w0,#0x10
7102cd14d0  bl 0x710392e290
7102cd14d4  mov x20,x0
7102cd14d8  cbnz x0,0x7102cd1524
7102cd14dc  adrp x8,0x7105332000
7102cd14e0  ldr x0,[x8, #0xf00]
7102cd14e4  cbz x0,0x7102cd1520
7102cd14e8  mov w8,#0x20
7102cd14ec  stur wzr,[x29, #-0x54]
7102cd14f0  sub x1,x29,#0x54
7102cd14f4  str x8,[sp, #0x60]
7102cd14f8  ldr x8,[x0]
7102cd14fc  ldr x8,[x8, #0x30]
7102cd1500  add x2,sp,#0x60
7102cd1504  blr x8
7102cd1508  tbz w0,#0x0,0x7102cd1520
7102cd150c  mov w0,#0x10
7102cd1510  mov w1,#0x20
7102cd1514  bl 0x710392e290
7102cd1518  mov x20,x0
7102cd151c  cbnz x0,0x7102cd1524
7102cd1520  mov x20,xzr
7102cd1524  mov x21,x20
7102cd1528  adrp x1,0x710427e000
7102cd152c  add x1,x1,#0xd75
7102cd1530  str xzr,[x21, #0x8]!
7102cd1534  stp xzr,x19,[x20, #0x10]
7102cd1538  str x25,[x20]
7102cd153c  ldr x0,[x19, #0x8]
7102cd1540  add x2,sp,#0x48
7102cd1544  add x3,sp,#0x18
7102cd1548  add x4,sp,#0x30
7102cd154c  bl 0x7102cd8ae0
7102cd1550  ldxr x8,[x21]
7102cd1554  add x8,x8,#0x1
7102cd1558  stxr w9,x8,[x21]
7102cd155c  cbnz w9,0x7102cd1550
7102cd1560  ldr x8,[sp, #0x10]
7102cd1564  str x19,[x8, #0x90]
7102cd1568  ldr x19,[x8, #0x98]
7102cd156c  str x20,[x8, #0x98]
7102cd1570  cbz x19,0x7102cd15a4
7102cd1574  add x8,x19,#0x8
7102cd1578  ldaxr x9,[x8]
7102cd157c  sub x10,x9,#0x1
7102cd1580  stlxr w11,x10,[x8]
7102cd1584  cbnz w11,0x7102cd1578
7102cd1588  cbnz x9,0x7102cd15a4
7102cd158c  ldr x8,[x19]
7102cd1590  ldr x8,[x8, #0x10]
7102cd1594  mov x0,x19
7102cd1598  blr x8
7102cd159c  mov x0,x19
7102cd15a0  bl 0x71039c2670
7102cd15a4  ldaxr x8,[x21]
7102cd15a8  sub x9,x8,#0x1
7102cd15ac  stlxr w10,x9,[x21]
7102cd15b0  cbnz w10,0x7102cd15a4
7102cd15b4  cbnz x8,0x7102cd15d0
7102cd15b8  ldr x8,[x20]
7102cd15bc  ldr x8,[x8, #0x10]
7102cd15c0  mov x0,x20
7102cd15c4  blr x8
7102cd15c8  mov x0,x20
7102cd15cc  bl 0x71039c2670
7102cd15d0  ldr x0,[sp, #0x18]
7102cd15d4  cbz x0,0x7102cd15e0
7102cd15d8  str x0,[sp, #0x20]
7102cd15dc  bl 0x710392eb40
7102cd15e0  ldr x0,[sp, #0x30]
7102cd15e4  cbz x0,0x7102cd15f0
7102cd15e8  str x0,[sp, #0x38]
7102cd15ec  bl 0x710392eb40
7102cd15f0  ldr x0,[sp, #0x48]
7102cd15f4  cbz x0,0x7102cd1600
7102cd15f8  str x0,[sp, #0x50]
7102cd15fc  bl 0x710392eb40
7102cd1600  ldr x8,[sp, #0x10]
7102cd1604  ldr x20,[x8, #0x10]
7102cd1608  ldr x8,[x20, #0x230]
7102cd160c  mov w1,#0x2c
7102cd1610  mov w0,#0x10
7102cd1614  add x19,x8,#0x4a4
7102cd1618  bl 0x710392e290
7102cd161c  cbnz x0,0x7102cd1664
7102cd1620  adrp x8,0x7105332000
7102cd1624  ldr x0,[x8, #0xf00]
7102cd1628  cbz x0,0x7102cd1660
7102cd162c  mov w8,#0x2c
7102cd1630  str wzr,[sp, #0x30]
7102cd1634  add x1,sp,#0x30
7102cd1638  str x8,[sp, #0x48]
7102cd163c  ldr x8,[x0]
7102cd1640  ldr x8,[x8, #0x30]
7102cd1644  add x2,sp,#0x48
7102cd1648  blr x8
7102cd164c  tbz w0,#0x0,0x7102cd1660
7102cd1650  mov w1,#0x2c
7102cd1654  mov w0,#0x10
7102cd1658  bl 0x710392e290
7102cd165c  cbnz x0,0x7102cd1664
7102cd1660  mov x0,xzr
7102cd1664  ldp x8,x9,[x19]
7102cd1668  mov w1,#0x20
7102cd166c  stp x8,x9,[x0]
7102cd1670  ldr x10,[x19, #0x20]
7102cd1674  ldp x8,x9,[x19, #0x10]
7102cd1678  ldr w11,[x19, #0x28]
7102cd167c  str x8,[x0, #0x10]
7102cd1680  add x8,x0,#0x2c
7102cd1684  str w11,[x0, #0x28]
7102cd1688  stp x9,x10,[x0, #0x18]
7102cd168c  str x8,[sp, #0x58]
7102cd1690  stp x0,x8,[sp, #0x48]
7102cd1694  mov w0,#0x10
7102cd1698  stp xzr,xzr,[sp, #0x38]
7102cd169c  add x19,x20,#0x128
7102cd16a0  str xzr,[sp, #0x30]
7102cd16a4  bl 0x710392e290
7102cd16a8  cbnz x0,0x7102cd16f0
7102cd16ac  adrp x8,0x7105332000
7102cd16b0  ldr x0,[x8, #0xf00]
7102cd16b4  cbz x0,0x7102cd16ec
7102cd16b8  mov w8,#0x20
7102cd16bc  str wzr,[sp, #0x60]
7102cd16c0  add x1,sp,#0x60
7102cd16c4  str x8,[sp, #0x18]
7102cd16c8  ldr x8,[x0]
7102cd16cc  ldr x8,[x8, #0x30]
7102cd16d0  add x2,sp,#0x18
7102cd16d4  blr x8
7102cd16d8  tbz w0,#0x0,0x7102cd16ec
7102cd16dc  mov w0,#0x10
7102cd16e0  mov w1,#0x20
7102cd16e4  bl 0x710392e290
7102cd16e8  cbnz x0,0x7102cd16f0
7102cd16ec  mov x0,xzr
7102cd16f0  ldp x8,x9,[x19]
7102cd16f4  mov w1,#0x10
7102cd16f8  ldp x10,x11,[x19, #0x10]
7102cd16fc  stp x8,x9,[x0]
7102cd1700  add x8,x0,#0x20
7102cd1704  stp x10,x11,[x0, #0x10]
7102cd1708  str x8,[sp, #0x28]
7102cd170c  stp x0,x8,[sp, #0x18]
7102cd1710  mov w0,#0x10
7102cd1714  bl 0x710392e290
7102cd1718  mov x19,x0
7102cd171c  cbnz x0,0x7102cd1768
7102cd1720  adrp x8,0x7105332000
7102cd1724  ldr x0,[x8, #0xf00]
7102cd1728  cbz x0,0x7102cd1764
7102cd172c  mov w8,#0x10
7102cd1730  stur wzr,[x29, #-0x54]
7102cd1734  sub x1,x29,#0x54
7102cd1738  str x8,[sp, #0x60]
7102cd173c  ldr x8,[x0]
7102cd1740  ldr x8,[x8, #0x30]
7102cd1744  add x2,sp,#0x60
7102cd1748  blr x8
7102cd174c  tbz w0,#0x0,0x7102cd1764
7102cd1750  mov w0,#0x10
7102cd1754  mov w1,#0x10
7102cd1758  bl 0x710392e290
7102cd175c  mov x19,x0
7102cd1760  cbnz x0,0x7102cd1768
7102cd1764  mov x19,xzr
7102cd1768  ldr x8,[sp, #0x10]
7102cd176c  ldr x21,[x8]
7102cd1770  mov w1,#0xc8
7102cd1774  mov w0,#0x10
7102cd1778  str x24,[x19]
7102cd177c  bl 0x710392e290
7102cd1780  cbnz x0,0x7102cd17c8
7102cd1784  adrp x8,0x7105332000
7102cd1788  ldr x0,[x8, #0xf00]
7102cd178c  cbz x0,0x7102cd17c4
7102cd1790  mov w8,#0xc8
7102cd1794  stur wzr,[x29, #-0x54]
7102cd1798  sub x1,x29,#0x54
7102cd179c  str x8,[sp, #0x60]
7102cd17a0  ldr x8,[x0]
7102cd17a4  ldr x8,[x8, #0x30]
7102cd17a8  add x2,sp,#0x60
7102cd17ac  blr x8
7102cd17b0  tbz w0,#0x0,0x7102cd17c4
7102cd17b4  mov w1,#0xc8
7102cd17b8  mov w0,#0x10
7102cd17bc  bl 0x710392e290
7102cd17c0  cbnz x0,0x7102cd17c8
7102cd17c4  mov x0,xzr
7102cd17c8  stp x21,x20,[x0]
7102cd17cc  mov w1,#0x20
7102cd17d0  stp xzr,xzr,[x0, #0xb8]
7102cd17d4  str xzr,[x0, #0x10]
7102cd17d8  stp xzr,xzr,[x0, #0xa8]
7102cd17dc  stp xzr,xzr,[x0, #0x98]
7102cd17e0  stp xzr,xzr,[x0, #0x88]
7102cd17e4  stp xzr,xzr,[x0, #0x78]
7102cd17e8  stp xzr,xzr,[x0, #0x68]
7102cd17ec  stp xzr,xzr,[x0, #0x58]
7102cd17f0  stp xzr,xzr,[x0, #0x48]
7102cd17f4  stp xzr,xzr,[x0, #0x38]
7102cd17f8  stp xzr,xzr,[x0, #0x28]
7102cd17fc  stp xzr,xzr,[x0, #0x18]
7102cd1800  str x0,[x19, #0x8]
7102cd1804  mov w0,#0x10
7102cd1808  bl 0x710392e290
7102cd180c  mov x20,x0
7102cd1810  cbnz x0,0x7102cd185c
7102cd1814  adrp x8,0x7105332000
7102cd1818  ldr x0,[x8, #0xf00]
7102cd181c  cbz x0,0x7102cd1858
7102cd1820  mov w8,#0x20
7102cd1824  stur wzr,[x29, #-0x54]
7102cd1828  sub x1,x29,#0x54
7102cd182c  str x8,[sp, #0x60]
7102cd1830  ldr x8,[x0]
7102cd1834  ldr x8,[x8, #0x30]
7102cd1838  add x2,sp,#0x60
7102cd183c  blr x8
7102cd1840  tbz w0,#0x0,0x7102cd1858
7102cd1844  mov w0,#0x10
7102cd1848  mov w1,#0x20
7102cd184c  bl 0x710392e290
7102cd1850  mov x20,x0
7102cd1854  cbnz x0,0x7102cd185c
7102cd1858  mov x20,xzr
7102cd185c  mov x21,x20
7102cd1860  adrp x1,0x710437a000
7102cd1864  add x1,x1,#0x95b
7102cd1868  str xzr,[x21, #0x8]!
7102cd186c  stp xzr,x19,[x20, #0x10]
7102cd1870  str x25,[x20]
7102cd1874  ldr x0,[x19, #0x8]
7102cd1878  add x2,sp,#0x48
7102cd187c  add x3,sp,#0x18
7102cd1880  add x4,sp,#0x30
7102cd1884  bl 0x7102cd8ae0
7102cd1888  ldxr x8,[x21]
7102cd188c  add x8,x8,#0x1
7102cd1890  stxr w9,x8,[x21]
7102cd1894  cbnz w9,0x7102cd1888
7102cd1898  ldr x8,[sp, #0x10]
7102cd189c  str x19,[x8, #0xa0]
7102cd18a0  ldr x19,[x8, #0xa8]
7102cd18a4  str x20,[x8, #0xa8]
7102cd18a8  cbz x19,0x7102cd18dc
7102cd18ac  add x8,x19,#0x8
7102cd18b0  ldaxr x9,[x8]
7102cd18b4  sub x10,x9,#0x1
7102cd18b8  stlxr w11,x10,[x8]
7102cd18bc  cbnz w11,0x7102cd18b0
7102cd18c0  cbnz x9,0x7102cd18dc
7102cd18c4  ldr x8,[x19]
7102cd18c8  ldr x8,[x8, #0x10]
7102cd18cc  mov x0,x19
7102cd18d0  blr x8
7102cd18d4  mov x0,x19
7102cd18d8  bl 0x71039c2670
7102cd18dc  ldaxr x8,[x21]
7102cd18e0  sub x9,x8,#0x1
7102cd18e4  stlxr w10,x9,[x21]
7102cd18e8  cbnz w10,0x7102cd18dc
7102cd18ec  cbnz x8,0x7102cd1908
7102cd18f0  ldr x8,[x20]
7102cd18f4  ldr x8,[x8, #0x10]
7102cd18f8  mov x0,x20
7102cd18fc  blr x8
7102cd1900  mov x0,x20
7102cd1904  bl 0x71039c2670
7102cd1908  ldr x0,[sp, #0x18]
7102cd190c  cbz x0,0x7102cd1918
7102cd1910  str x0,[sp, #0x20]
7102cd1914  bl 0x710392eb40
7102cd1918  ldr x0,[sp, #0x30]
7102cd191c  cbz x0,0x7102cd1928
7102cd1920  str x0,[sp, #0x38]
7102cd1924  bl 0x710392eb40
7102cd1928  ldr x0,[sp, #0x48]
7102cd192c  cbz x0,0x7102cd1938
7102cd1930  str x0,[sp, #0x50]
7102cd1934  bl 0x710392eb40
7102cd1938  ldr x8,[sp, #0x10]
7102cd193c  ldr x20,[x8, #0x10]
7102cd1940  ldr x8,[x20, #0x230]
7102cd1944  mov w1,#0x2c
7102cd1948  mov w0,#0x10
7102cd194c  add x19,x8,#0x4d0
7102cd1950  bl 0x710392e290
7102cd1954  cbnz x0,0x7102cd199c
7102cd1958  adrp x8,0x7105332000
7102cd195c  ldr x0,[x8, #0xf00]
7102cd1960  cbz x0,0x7102cd1998
7102cd1964  mov w8,#0x2c
7102cd1968  str wzr,[sp, #0x30]
7102cd196c  add x1,sp,#0x30
7102cd1970  str x8,[sp, #0x48]
7102cd1974  ldr x8,[x0]
7102cd1978  ldr x8,[x8, #0x30]
7102cd197c  add x2,sp,#0x48
7102cd1980  blr x8
7102cd1984  tbz w0,#0x0,0x7102cd1998
7102cd1988  mov w1,#0x2c
7102cd198c  mov w0,#0x10
7102cd1990  bl 0x710392e290
7102cd1994  cbnz x0,0x7102cd199c
7102cd1998  mov x0,xzr
7102cd199c  ldp x8,x9,[x19]
7102cd19a0  mov w1,#0x20
7102cd19a4  stp x8,x9,[x0]
7102cd19a8  ldr x10,[x19, #0x20]
7102cd19ac  ldp x8,x9,[x19, #0x10]
7102cd19b0  ldr w11,[x19, #0x28]
7102cd19b4  str x8,[x0, #0x10]
7102cd19b8  add x8,x0,#0x2c
7102cd19bc  str w11,[x0, #0x28]
7102cd19c0  stp x9,x10,[x0, #0x18]
7102cd19c4  str x8,[sp, #0x58]
7102cd19c8  stp x0,x8,[sp, #0x48]
7102cd19cc  mov w0,#0x10
7102cd19d0  stp xzr,xzr,[sp, #0x38]
7102cd19d4  add x19,x20,#0x148
7102cd19d8  str xzr,[sp, #0x30]
7102cd19dc  bl 0x710392e290
7102cd19e0  cbnz x0,0x7102cd1a28
7102cd19e4  adrp x8,0x7105332000
7102cd19e8  ldr x0,[x8, #0xf00]
7102cd19ec  cbz x0,0x7102cd1a24
7102cd19f0  mov w8,#0x20
7102cd19f4  str wzr,[sp, #0x60]
7102cd19f8  add x1,sp,#0x60
7102cd19fc  str x8,[sp, #0x18]
7102cd1a00  ldr x8,[x0]
7102cd1a04  ldr x8,[x8, #0x30]
7102cd1a08  add x2,sp,#0x18
7102cd1a0c  blr x8
7102cd1a10  tbz w0,#0x0,0x7102cd1a24
7102cd1a14  mov w0,#0x10
7102cd1a18  mov w1,#0x20
7102cd1a1c  bl 0x710392e290
7102cd1a20  cbnz x0,0x7102cd1a28
7102cd1a24  mov x0,xzr
7102cd1a28  ldp x8,x9,[x19]
7102cd1a2c  mov w1,#0x10
7102cd1a30  ldp x10,x11,[x19, #0x10]
7102cd1a34  stp x8,x9,[x0]
7102cd1a38  add x8,x0,#0x20
7102cd1a3c  stp x10,x11,[x0, #0x10]
7102cd1a40  str x8,[sp, #0x28]
7102cd1a44  stp x0,x8,[sp, #0x18]
7102cd1a48  mov w0,#0x10
7102cd1a4c  bl 0x710392e290
7102cd1a50  mov x19,x0
7102cd1a54  cbnz x0,0x7102cd1aa0
7102cd1a58  adrp x8,0x7105332000
7102cd1a5c  ldr x0,[x8, #0xf00]
7102cd1a60  cbz x0,0x7102cd1a9c
7102cd1a64  mov w8,#0x10
7102cd1a68  stur wzr,[x29, #-0x54]
7102cd1a6c  sub x1,x29,#0x54
7102cd1a70  str x8,[sp, #0x60]
7102cd1a74  ldr x8,[x0]
7102cd1a78  ldr x8,[x8, #0x30]
7102cd1a7c  add x2,sp,#0x60
7102cd1a80  blr x8
7102cd1a84  tbz w0,#0x0,0x7102cd1a9c
7102cd1a88  mov w0,#0x10
7102cd1a8c  mov w1,#0x10
7102cd1a90  bl 0x710392e290
7102cd1a94  mov x19,x0
7102cd1a98  cbnz x0,0x7102cd1aa0
7102cd1a9c  mov x19,xzr
7102cd1aa0  ldr x8,[sp, #0x10]
7102cd1aa4  ldr x21,[x8]
7102cd1aa8  mov w1,#0xc8
7102cd1aac  mov w0,#0x10
7102cd1ab0  str x24,[x19]
7102cd1ab4  bl 0x710392e290
7102cd1ab8  cbnz x0,0x7102cd1b00
7102cd1abc  adrp x8,0x7105332000
7102cd1ac0  ldr x0,[x8, #0xf00]
7102cd1ac4  cbz x0,0x7102cd1afc
7102cd1ac8  mov w8,#0xc8
7102cd1acc  stur wzr,[x29, #-0x54]
7102cd1ad0  sub x1,x29,#0x54
7102cd1ad4  str x8,[sp, #0x60]
7102cd1ad8  ldr x8,[x0]
7102cd1adc  ldr x8,[x8, #0x30]
7102cd1ae0  add x2,sp,#0x60
7102cd1ae4  blr x8
7102cd1ae8  tbz w0,#0x0,0x7102cd1afc
7102cd1aec  mov w1,#0xc8
7102cd1af0  mov w0,#0x10
7102cd1af4  bl 0x710392e290
7102cd1af8  cbnz x0,0x7102cd1b00
7102cd1afc  mov x0,xzr
7102cd1b00  stp x21,x20,[x0]
7102cd1b04  mov w1,#0x20
7102cd1b08  stp xzr,xzr,[x0, #0xb8]
7102cd1b0c  str xzr,[x0, #0x10]
7102cd1b10  stp xzr,xzr,[x0, #0xa8]
7102cd1b14  stp xzr,xzr,[x0, #0x98]
7102cd1b18  stp xzr,xzr,[x0, #0x88]
7102cd1b1c  stp xzr,xzr,[x0, #0x78]
7102cd1b20  stp xzr,xzr,[x0, #0x68]
7102cd1b24  stp xzr,xzr,[x0, #0x58]
7102cd1b28  stp xzr,xzr,[x0, #0x48]
7102cd1b2c  stp xzr,xzr,[x0, #0x38]
7102cd1b30  stp xzr,xzr,[x0, #0x28]
7102cd1b34  stp xzr,xzr,[x0, #0x18]
7102cd1b38  str x0,[x19, #0x8]
7102cd1b3c  mov w0,#0x10
7102cd1b40  bl 0x710392e290
7102cd1b44  mov x20,x0
7102cd1b48  cbnz x0,0x7102cd1b94
7102cd1b4c  adrp x8,0x7105332000
7102cd1b50  ldr x0,[x8, #0xf00]
7102cd1b54  cbz x0,0x7102cd1b90
7102cd1b58  mov w8,#0x20
7102cd1b5c  stur wzr,[x29, #-0x54]
7102cd1b60  sub x1,x29,#0x54
7102cd1b64  str x8,[sp, #0x60]
7102cd1b68  ldr x8,[x0]
7102cd1b6c  ldr x8,[x8, #0x30]
7102cd1b70  add x2,sp,#0x60
7102cd1b74  blr x8
7102cd1b78  tbz w0,#0x0,0x7102cd1b90
7102cd1b7c  mov w0,#0x10
7102cd1b80  mov w1,#0x20
7102cd1b84  bl 0x710392e290
7102cd1b88  mov x20,x0
7102cd1b8c  cbnz x0,0x7102cd1b94
7102cd1b90  mov x20,xzr
7102cd1b94  mov x21,x20
7102cd1b98  adrp x1,0x7104420000
7102cd1b9c  add x1,x1,#0x6ec
7102cd1ba0  str xzr,[x21, #0x8]!
7102cd1ba4  stp xzr,x19,[x20, #0x10]
7102cd1ba8  str x25,[x20]
7102cd1bac  ldr x0,[x19, #0x8]
7102cd1bb0  add x2,sp,#0x48
7102cd1bb4  add x3,sp,#0x18
7102cd1bb8  add x4,sp,#0x30
7102cd1bbc  bl 0x7102cd8ae0
7102cd1bc0  ldxr x8,[x21]
7102cd1bc4  add x8,x8,#0x1
7102cd1bc8  stxr w9,x8,[x21]
7102cd1bcc  cbnz w9,0x7102cd1bc0
7102cd1bd0  ldr x8,[sp, #0x10]
7102cd1bd4  str x19,[x8, #0xb0]
7102cd1bd8  ldr x19,[x8, #0xb8]
7102cd1bdc  str x20,[x8, #0xb8]
7102cd1be0  cbz x19,0x7102cd1c14
7102cd1be4  add x8,x19,#0x8
7102cd1be8  ldaxr x9,[x8]
7102cd1bec  sub x10,x9,#0x1
7102cd1bf0  stlxr w11,x10,[x8]
7102cd1bf4  cbnz w11,0x7102cd1be8
7102cd1bf8  cbnz x9,0x7102cd1c14
7102cd1bfc  ldr x8,[x19]
7102cd1c00  ldr x8,[x8, #0x10]
7102cd1c04  mov x0,x19
7102cd1c08  blr x8
7102cd1c0c  mov x0,x19
7102cd1c10  bl 0x71039c2670
7102cd1c14  ldaxr x8,[x21]
7102cd1c18  sub x9,x8,#0x1
7102cd1c1c  stlxr w10,x9,[x21]
7102cd1c20  cbnz w10,0x7102cd1c14
7102cd1c24  cbnz x8,0x7102cd1c40
7102cd1c28  ldr x8,[x20]
7102cd1c2c  ldr x8,[x8, #0x10]
7102cd1c30  mov x0,x20
7102cd1c34  blr x8
7102cd1c38  mov x0,x20
7102cd1c3c  bl 0x71039c2670
7102cd1c40  ldr x0,[sp, #0x18]
7102cd1c44  cbz x0,0x7102cd1c50
7102cd1c48  str x0,[sp, #0x20]
7102cd1c4c  bl 0x710392eb40
7102cd1c50  ldr x0,[sp, #0x30]
7102cd1c54  cbz x0,0x7102cd1c60
7102cd1c58  str x0,[sp, #0x38]
7102cd1c5c  bl 0x710392eb40
7102cd1c60  ldr x0,[sp, #0x48]
7102cd1c64  cbz x0,0x7102cd1c70
7102cd1c68  str x0,[sp, #0x50]
7102cd1c6c  bl 0x710392eb40
7102cd1c70  ldr x8,[sp, #0x10]
7102cd1c74  ldr x20,[x8, #0x10]
7102cd1c78  ldr x8,[x20, #0x230]
7102cd1c7c  mov w1,#0x2c
7102cd1c80  mov w0,#0x10
7102cd1c84  add x19,x8,#0x4fc
7102cd1c88  bl 0x710392e290
7102cd1c8c  cbnz x0,0x7102cd1cd4
7102cd1c90  adrp x8,0x7105332000
7102cd1c94  ldr x0,[x8, #0xf00]
7102cd1c98  cbz x0,0x7102cd1cd0
7102cd1c9c  mov w8,#0x2c
7102cd1ca0  str wzr,[sp, #0x30]
7102cd1ca4  add x1,sp,#0x30
7102cd1ca8  str x8,[sp, #0x48]
7102cd1cac  ldr x8,[x0]
7102cd1cb0  ldr x8,[x8, #0x30]
7102cd1cb4  add x2,sp,#0x48
7102cd1cb8  blr x8
7102cd1cbc  tbz w0,#0x0,0x7102cd1cd0
7102cd1cc0  mov w1,#0x2c
7102cd1cc4  mov w0,#0x10
7102cd1cc8  bl 0x710392e290
7102cd1ccc  cbnz x0,0x7102cd1cd4
7102cd1cd0  mov x0,xzr
7102cd1cd4  ldp x8,x9,[x19]
7102cd1cd8  mov w1,#0x20
7102cd1cdc  stp x8,x9,[x0]
7102cd1ce0  ldr x10,[x19, #0x20]
7102cd1ce4  ldp x8,x9,[x19, #0x10]
7102cd1ce8  ldr w11,[x19, #0x28]
7102cd1cec  str x8,[x0, #0x10]
7102cd1cf0  add x8,x0,#0x2c
7102cd1cf4  str w11,[x0, #0x28]
7102cd1cf8  stp x9,x10,[x0, #0x18]
7102cd1cfc  str x8,[sp, #0x58]
7102cd1d00  stp x0,x8,[sp, #0x48]
7102cd1d04  mov w0,#0x10
7102cd1d08  stp xzr,xzr,[sp, #0x38]
7102cd1d0c  add x19,x20,#0x168
7102cd1d10  str xzr,[sp, #0x30]
7102cd1d14  bl 0x710392e290
7102cd1d18  cbnz x0,0x7102cd1d60
7102cd1d1c  adrp x8,0x7105332000
7102cd1d20  ldr x0,[x8, #0xf00]
7102cd1d24  cbz x0,0x7102cd1d5c
7102cd1d28  mov w8,#0x20
7102cd1d2c  str wzr,[sp, #0x60]
7102cd1d30  add x1,sp,#0x60
7102cd1d34  str x8,[sp, #0x18]
7102cd1d38  ldr x8,[x0]
7102cd1d3c  ldr x8,[x8, #0x30]
7102cd1d40  add x2,sp,#0x18
7102cd1d44  blr x8
7102cd1d48  tbz w0,#0x0,0x7102cd1d5c
7102cd1d4c  mov w0,#0x10
7102cd1d50  mov w1,#0x20
7102cd1d54  bl 0x710392e290
7102cd1d58  cbnz x0,0x7102cd1d60
7102cd1d5c  mov x0,xzr
7102cd1d60  ldp x8,x9,[x19]
7102cd1d64  mov w1,#0x10
7102cd1d68  ldp x10,x11,[x19, #0x10]
7102cd1d6c  stp x8,x9,[x0]
7102cd1d70  add x8,x0,#0x20
7102cd1d74  stp x10,x11,[x0, #0x10]
7102cd1d78  str x8,[sp, #0x28]
7102cd1d7c  stp x0,x8,[sp, #0x18]
7102cd1d80  mov w0,#0x10
7102cd1d84  bl 0x710392e290
7102cd1d88  mov x19,x0
7102cd1d8c  cbnz x0,0x7102cd1dd8
7102cd1d90  adrp x8,0x7105332000
7102cd1d94  ldr x0,[x8, #0xf00]
7102cd1d98  cbz x0,0x7102cd1dd4
7102cd1d9c  mov w8,#0x10
7102cd1da0  stur wzr,[x29, #-0x54]
7102cd1da4  sub x1,x29,#0x54
7102cd1da8  str x8,[sp, #0x60]
7102cd1dac  ldr x8,[x0]
7102cd1db0  ldr x8,[x8, #0x30]
7102cd1db4  add x2,sp,#0x60
7102cd1db8  blr x8
7102cd1dbc  tbz w0,#0x0,0x7102cd1dd4
7102cd1dc0  mov w0,#0x10
7102cd1dc4  mov w1,#0x10
7102cd1dc8  bl 0x710392e290
7102cd1dcc  mov x19,x0
7102cd1dd0  cbnz x0,0x7102cd1dd8
7102cd1dd4  mov x19,xzr
7102cd1dd8  ldr x8,[sp, #0x10]
7102cd1ddc  ldr x21,[x8]
7102cd1de0  mov w1,#0xc8
7102cd1de4  mov w0,#0x10
7102cd1de8  str x24,[x19]
7102cd1dec  bl 0x710392e290
7102cd1df0  cbnz x0,0x7102cd1e38
7102cd1df4  adrp x8,0x7105332000
7102cd1df8  ldr x0,[x8, #0xf00]
7102cd1dfc  cbz x0,0x7102cd1e34
7102cd1e00  mov w8,#0xc8
7102cd1e04  stur wzr,[x29, #-0x54]
7102cd1e08  sub x1,x29,#0x54
7102cd1e0c  str x8,[sp, #0x60]
7102cd1e10  ldr x8,[x0]
7102cd1e14  ldr x8,[x8, #0x30]
7102cd1e18  add x2,sp,#0x60
7102cd1e1c  blr x8
7102cd1e20  tbz w0,#0x0,0x7102cd1e34
7102cd1e24  mov w1,#0xc8
7102cd1e28  mov w0,#0x10
7102cd1e2c  bl 0x710392e290
7102cd1e30  cbnz x0,0x7102cd1e38
7102cd1e34  mov x0,xzr
7102cd1e38  stp x21,x20,[x0]
7102cd1e3c  mov w1,#0x20
7102cd1e40  stp xzr,xzr,[x0, #0xb8]
7102cd1e44  str xzr,[x0, #0x10]
7102cd1e48  stp xzr,xzr,[x0, #0xa8]
7102cd1e4c  stp xzr,xzr,[x0, #0x98]
7102cd1e50  stp xzr,xzr,[x0, #0x88]
7102cd1e54  stp xzr,xzr,[x0, #0x78]
7102cd1e58  stp xzr,xzr,[x0, #0x68]
7102cd1e5c  stp xzr,xzr,[x0, #0x58]
7102cd1e60  stp xzr,xzr,[x0, #0x48]
7102cd1e64  stp xzr,xzr,[x0, #0x38]
7102cd1e68  stp xzr,xzr,[x0, #0x28]
7102cd1e6c  stp xzr,xzr,[x0, #0x18]
7102cd1e70  str x0,[x19, #0x8]
7102cd1e74  mov w0,#0x10
7102cd1e78  bl 0x710392e290
7102cd1e7c  mov x20,x0
7102cd1e80  cbnz x0,0x7102cd1ecc
7102cd1e84  adrp x8,0x7105332000
7102cd1e88  ldr x0,[x8, #0xf00]
7102cd1e8c  cbz x0,0x7102cd1ec8
7102cd1e90  mov w8,#0x20
7102cd1e94  stur wzr,[x29, #-0x54]
7102cd1e98  sub x1,x29,#0x54
7102cd1e9c  str x8,[sp, #0x60]
7102cd1ea0  ldr x8,[x0]
7102cd1ea4  ldr x8,[x8, #0x30]
7102cd1ea8  add x2,sp,#0x60
7102cd1eac  blr x8
7102cd1eb0  tbz w0,#0x0,0x7102cd1ec8
7102cd1eb4  mov w0,#0x10
7102cd1eb8  mov w1,#0x20
7102cd1ebc  bl 0x710392e290
7102cd1ec0  mov x20,x0
7102cd1ec4  cbnz x0,0x7102cd1ecc
7102cd1ec8  mov x20,xzr
7102cd1ecc  mov x21,x20
7102cd1ed0  adrp x1,0x7104338000
7102cd1ed4  add x1,x1,#0x580
7102cd1ed8  str xzr,[x21, #0x8]!
7102cd1edc  stp xzr,x19,[x20, #0x10]
7102cd1ee0  str x25,[x20]
7102cd1ee4  ldr x0,[x19, #0x8]
7102cd1ee8  add x2,sp,#0x48
7102cd1eec  add x3,sp,#0x18
7102cd1ef0  add x4,sp,#0x30
7102cd1ef4  bl 0x7102cd8ae0
7102cd1ef8  ldxr x8,[x21]
7102cd1efc  add x8,x8,#0x1
7102cd1f00  stxr w9,x8,[x21]
7102cd1f04  cbnz w9,0x7102cd1ef8
7102cd1f08  ldr x8,[sp, #0x10]
7102cd1f0c  str x19,[x8, #0xc0]
7102cd1f10  ldr x19,[x8, #0xc8]
7102cd1f14  str x20,[x8, #0xc8]
7102cd1f18  cbz x19,0x7102cd1f4c
7102cd1f1c  add x8,x19,#0x8
7102cd1f20  ldaxr x9,[x8]
7102cd1f24  sub x10,x9,#0x1
7102cd1f28  stlxr w11,x10,[x8]
7102cd1f2c  cbnz w11,0x7102cd1f20
7102cd1f30  cbnz x9,0x7102cd1f4c
7102cd1f34  ldr x8,[x19]
7102cd1f38  ldr x8,[x8, #0x10]
7102cd1f3c  mov x0,x19
7102cd1f40  blr x8
7102cd1f44  mov x0,x19
7102cd1f48  bl 0x71039c2670
7102cd1f4c  ldaxr x8,[x21]
7102cd1f50  sub x9,x8,#0x1
7102cd1f54  stlxr w10,x9,[x21]
7102cd1f58  cbnz w10,0x7102cd1f4c
7102cd1f5c  cbnz x8,0x7102cd1f78
7102cd1f60  ldr x8,[x20]
7102cd1f64  ldr x8,[x8, #0x10]
7102cd1f68  mov x0,x20
7102cd1f6c  blr x8
7102cd1f70  mov x0,x20
7102cd1f74  bl 0x71039c2670
7102cd1f78  ldr x0,[sp, #0x18]
7102cd1f7c  cbz x0,0x7102cd1f88
7102cd1f80  str x0,[sp, #0x20]
7102cd1f84  bl 0x710392eb40
7102cd1f88  ldr x0,[sp, #0x30]
7102cd1f8c  cbz x0,0x7102cd1f98
7102cd1f90  str x0,[sp, #0x38]
7102cd1f94  bl 0x710392eb40
7102cd1f98  ldr x0,[sp, #0x48]
7102cd1f9c  cbz x0,0x7102cd1fa8
7102cd1fa0  str x0,[sp, #0x50]
7102cd1fa4  bl 0x710392eb40
7102cd1fa8  mov w0,#0x10
7102cd1fac  mov w1,#0x10
7102cd1fb0  bl 0x710392e290
7102cd1fb4  mov x19,x0
7102cd1fb8  cbnz x0,0x7102cd2004
7102cd1fbc  adrp x8,0x7105332000
7102cd1fc0  ldr x0,[x8, #0xf00]
7102cd1fc4  cbz x0,0x7102cd2000
7102cd1fc8  mov w8,#0x10
7102cd1fcc  str wzr,[sp, #0x30]
7102cd1fd0  add x1,sp,#0x30
7102cd1fd4  str x8,[sp, #0x48]
7102cd1fd8  ldr x8,[x0]
7102cd1fdc  ldr x8,[x8, #0x30]
7102cd1fe0  add x2,sp,#0x48
7102cd1fe4  blr x8
7102cd1fe8  tbz w0,#0x0,0x7102cd2000
7102cd1fec  mov w0,#0x10
7102cd1ff0  mov w1,#0x10
7102cd1ff4  bl 0x710392e290
7102cd1ff8  mov x19,x0
7102cd1ffc  cbnz x0,0x7102cd2004
7102cd2000  mov x19,xzr
7102cd2004  ldr x8,[sp, #0x10]
7102cd2008  ldr x1,[x8]
7102cd200c  ldr x2,[x8, #0x10]
7102cd2010  mov x0,x19
7102cd2014  mov w3,wzr
7102cd2018  bl 0x7102cdbae0
7102cd201c  mov w0,#0x10
7102cd2020  mov w1,#0x20
7102cd2024  bl 0x710392e290
7102cd2028  cbnz x0,0x7102cd2070
7102cd202c  adrp x8,0x7105332000
7102cd2030  ldr x0,[x8, #0xf00]
7102cd2034  cbz x0,0x7102cd206c
7102cd2038  mov w8,#0x20
7102cd203c  str wzr,[sp, #0x30]
7102cd2040  add x1,sp,#0x30
7102cd2044  str x8,[sp, #0x48]
7102cd2048  ldr x8,[x0]
7102cd204c  ldr x8,[x8, #0x30]
7102cd2050  add x2,sp,#0x48
7102cd2054  blr x8
7102cd2058  tbz w0,#0x0,0x7102cd206c
7102cd205c  mov w0,#0x10
7102cd2060  mov w1,#0x20
7102cd2064  bl 0x710392e290
7102cd2068  cbnz x0,0x7102cd2070
7102cd206c  mov x0,xzr
7102cd2070  adrp x20,0x7105130000
7102cd2074  add x20,x20,#0x638
7102cd2078  stp x20,xzr,[x0]
7102cd207c  stp xzr,x19,[x0, #0x10]
7102cd2080  ldr x8,[sp, #0x10]
7102cd2084  str x19,[x8, #0xd0]
7102cd2088  ldr x19,[x8, #0xd8]
7102cd208c  str x0,[x8, #0xd8]
7102cd2090  cbz x19,0x7102cd20c4
7102cd2094  add x8,x19,#0x8
7102cd2098  ldaxr x9,[x8]
7102cd209c  sub x10,x9,#0x1
7102cd20a0  stlxr w11,x10,[x8]
7102cd20a4  cbnz w11,0x7102cd2098
7102cd20a8  cbnz x9,0x7102cd20c4
7102cd20ac  ldr x8,[x19]
7102cd20b0  ldr x8,[x8, #0x10]
7102cd20b4  mov x0,x19
7102cd20b8  blr x8
7102cd20bc  mov x0,x19
7102cd20c0  bl 0x71039c2670
7102cd20c4  mov w0,#0x10
7102cd20c8  mov w1,#0x10
7102cd20cc  bl 0x710392e290
7102cd20d0  mov x19,x0
7102cd20d4  cbnz x0,0x7102cd2120
7102cd20d8  adrp x8,0x7105332000
7102cd20dc  ldr x0,[x8, #0xf00]
7102cd20e0  cbz x0,0x7102cd211c
7102cd20e4  mov w8,#0x10
7102cd20e8  str wzr,[sp, #0x30]
7102cd20ec  add x1,sp,#0x30
7102cd20f0  str x8,[sp, #0x48]
7102cd20f4  ldr x8,[x0]
7102cd20f8  ldr x8,[x8, #0x30]
7102cd20fc  add x2,sp,#0x48
7102cd2100  blr x8
7102cd2104  tbz w0,#0x0,0x7102cd211c
7102cd2108  mov w0,#0x10
7102cd210c  mov w1,#0x10
7102cd2110  bl 0x710392e290
7102cd2114  mov x19,x0
7102cd2118  cbnz x0,0x7102cd2120
7102cd211c  mov x19,xzr
7102cd2120  ldr x8,[sp, #0x10]
7102cd2124  ldr x1,[x8]
7102cd2128  ldr x2,[x8, #0x10]
7102cd212c  mov w3,#0x1
7102cd2130  mov x0,x19
7102cd2134  bl 0x7102cdbae0
7102cd2138  mov w0,#0x10
7102cd213c  mov w1,#0x20
7102cd2140  bl 0x710392e290
7102cd2144  cbnz x0,0x7102cd218c
7102cd2148  adrp x8,0x7105332000
7102cd214c  ldr x0,[x8, #0xf00]
7102cd2150  cbz x0,0x7102cd2188
7102cd2154  mov w8,#0x20
7102cd2158  str wzr,[sp, #0x30]
7102cd215c  add x1,sp,#0x30
7102cd2160  str x8,[sp, #0x48]
7102cd2164  ldr x8,[x0]
7102cd2168  ldr x8,[x8, #0x30]
7102cd216c  add x2,sp,#0x48
7102cd2170  blr x8
7102cd2174  tbz w0,#0x0,0x7102cd2188
7102cd2178  mov w0,#0x10
7102cd217c  mov w1,#0x20
7102cd2180  bl 0x710392e290
7102cd2184  cbnz x0,0x7102cd218c
7102cd2188  mov x0,xzr
7102cd218c  stp x20,xzr,[x0]
7102cd2190  stp xzr,x19,[x0, #0x10]
7102cd2194  ldr x8,[sp, #0x10]
7102cd2198  str x19,[x8, #0xe0]
7102cd219c  ldr x19,[x8, #0xe8]
7102cd21a0  str x0,[x8, #0xe8]
7102cd21a4  cbz x19,0x7102cd21d8
7102cd21a8  add x8,x19,#0x8
7102cd21ac  ldaxr x9,[x8]
7102cd21b0  sub x10,x9,#0x1
7102cd21b4  stlxr w11,x10,[x8]
7102cd21b8  cbnz w11,0x7102cd21ac
7102cd21bc  cbnz x9,0x7102cd21d8
7102cd21c0  ldr x8,[x19]
7102cd21c4  ldr x8,[x8, #0x10]
7102cd21c8  mov x0,x19
7102cd21cc  blr x8
7102cd21d0  mov x0,x19
7102cd21d4  bl 0x71039c2670
7102cd21d8  ldr x9,[sp, #0x10]
7102cd21dc  ldr x8,[x9, #0x10]
7102cd21e0  ldr s0,[x8, #0x94]
7102cd21e4  adrp x8,0x7104472000
7102cd21e8  ldr s1,[x8, #0xc40]
7102cd21ec  mov w8,#0x1
7102cd21f0  strh w8,[x9, #0x48]
7102cd21f4  adrp x8,0x7102cda000
7102cd21f8  add x8,x8,#0xc80
7102cd21fc  stp x8,xzr,[x9, #0x30]
7102cd2200  fadd s0,s0,s1
7102cd2204  str s0,[x9, #0x44]
7102cd2208  str s0,[x9, #0x40]
7102cd220c  ldr x20,[x22, #0x780]
7102cd2210  mov w0,#0x10
7102cd2214  mov w1,#0x10
7102cd2218  bl 0x710392e290
7102cd221c  mov x19,x0
7102cd2220  cbnz x0,0x7102cd226c
7102cd2224  adrp x8,0x7105332000
7102cd2228  ldr x0,[x8, #0xf00]
7102cd222c  cbz x0,0x7102cd2268
7102cd2230  mov w8,#0x10
7102cd2234  str wzr,[sp, #0x30]
7102cd2238  add x1,sp,#0x30
7102cd223c  str x8,[sp, #0x48]
7102cd2240  ldr x8,[x0]
7102cd2244  ldr x8,[x8, #0x30]
7102cd2248  add x2,sp,#0x48
7102cd224c  blr x8
7102cd2250  tbz w0,#0x0,0x7102cd2268
7102cd2254  mov w0,#0x10
7102cd2258  mov w1,#0x10
7102cd225c  bl 0x710392e290
7102cd2260  mov x19,x0
7102cd2264  cbnz x0,0x7102cd226c
7102cd2268  mov x19,xzr
7102cd226c  ldr x21,[x22]
7102cd2270  adrp x8,0x7105130000
7102cd2274  add x8,x8,#0x498
7102cd2278  mov w0,#0x10
7102cd227c  orr w1,wzr,#0x70
7102cd2280  str x8,[x19]
7102cd2284  bl 0x710392e290
7102cd2288  cbnz x0,0x7102cd22d0
7102cd228c  adrp x8,0x7105332000
7102cd2290  ldr x0,[x8, #0xf00]
7102cd2294  cbz x0,0x7102cd22cc
7102cd2298  orr w8,wzr,#0x70
7102cd229c  str wzr,[sp, #0x30]
7102cd22a0  add x1,sp,#0x30
7102cd22a4  str x8,[sp, #0x48]
7102cd22a8  ldr x8,[x0]
7102cd22ac  ldr x8,[x8, #0x30]
7102cd22b0  add x2,sp,#0x48
7102cd22b4  blr x8
7102cd22b8  tbz w0,#0x0,0x7102cd22cc
7102cd22bc  mov w0,#0x10
7102cd22c0  orr w1,wzr,#0x70
7102cd22c4  bl 0x710392e290
7102cd22c8  cbnz x0,0x7102cd22d0
7102cd22cc  mov x0,xzr
7102cd22d0  mov w8,#0x2
7102cd22d4  stp x21,x20,[x0]
7102cd22d8  stp xzr,xzr,[x0, #0x58]
7102cd22dc  str x23,[x0, #0x10]
7102cd22e0  str w8,[x0, #0x68]
7102cd22e4  stp xzr,xzr,[x0, #0x48]
7102cd22e8  stp xzr,xzr,[x0, #0x38]
7102cd22ec  stp xzr,xzr,[x0, #0x28]
7102cd22f0  stp xzr,xzr,[x0, #0x18]
7102cd22f4  str x0,[x19, #0x8]
7102cd22f8  ldr x0,[x22, #0x790]
7102cd22fc  str x19,[x22, #0x790]
7102cd2300  cbz x0,0x7102cd2314
7102cd2304  ldr x8,[x0]
7102cd2308  ldr x8,[x8, #0x8]
7102cd230c  blr x8
7102cd2310  ldr x19,[x22, #0x790]
7102cd2314  ldr x0,[x19, #0x8]
7102cd2318  ldp x29,x30,[sp, #0xc0]
7102cd231c  ldp x20,x19,[sp, #0xb0]
7102cd2320  ldp x22,x21,[sp, #0xa0]
7102cd2324  ldp x24,x23,[sp, #0x90]
7102cd2328  ldp x26,x25,[sp, #0x80]
7102cd232c  ldp x28,x27,[sp, #0x70]
7102cd2330  add sp,sp,#0xd0
7102cd2334  b 0x7102cd48f0
7102cd2338  ldr x23,[x8, #0x8]
7102cd233c  strb w24,[x8, #0x10]
7102cd2340  ldrb w9,[x8, #0x11]
7102cd2344  ldrb w8,[x23, #0x1c]
7102cd2348  cbz w9,0x7102cd237c
7102cd234c  cbnz w8,0x7102cd0124
7102cd2350  adrp x8,0x71052b8000
7102cd2354  ldr x8,[x8, #0xf00]
7102cd2358  ldr x8,[x8]
7102cd235c  add x0,x8,#0xa30
7102cd2360  ldr x8,[x8, #0xa30]
7102cd2364  ldr x8,[x8, #0x10]
7102cd2368  mov x1,x23
7102cd236c  blr x8
7102cd2370  mov w8,#0x1
7102cd2374  strb w8,[x23, #0x1c]
7102cd2378  b 0x7102cd0124
7102cd237c  cbz w8,0x7102cd0124
7102cd2380  adrp x8,0x71052b8000
7102cd2384  ldr x8,[x8, #0xf00]
7102cd2388  ldr x8,[x8]
7102cd238c  add x0,x8,#0xa30
7102cd2390  ldr x8,[x8, #0xa30]
7102cd2394  ldr x8,[x8, #0x18]
7102cd2398  mov x1,x23
7102cd239c  blr x8
7102cd23a0  strb wzr,[x23, #0x1c]
7102cd23a4  b 0x7102cd0124
7102cd23a8  adrp x0,0x7105314000
7102cd23ac  add x0,x0,#0x4d8
7102cd23b0  bl 0x71039c06b0
7102cd23b4  cbz w0,0x7102cd0178
7102cd23b8  bl 0x7101764000
7102cd23bc  adrp x0,0x7101763000
7102cd23c0  add x0,x0,#0xc40
7102cd23c4  adrp x1,0x71052c5000
7102cd23c8  add x1,x1,#0x180
7102cd23cc  adrp x2,0x7104f17000
7102cd23d0  add x2,x2,#0x0
7102cd23d4  bl 0x71000001c0
7102cd23d8  adrp x0,0x7105314000
7102cd23dc  add x0,x0,#0x4d8
7102cd23e0  bl 0x71039c06c0
7102cd23e4  b 0x7102cd0178
7102cd23e8  add x0,sp,#0x48
7102cd23ec  bl 0x71039c0c00
