// addr:      71002add70
// offset:    0x2add70
// name:      FUN_71002add70
// mangled:   
// size:      1212

71002add70  str x28,[sp, #-0x60]!
71002add74  stp x26,x25,[sp, #0x10]
71002add78  stp x24,x23,[sp, #0x20]
71002add7c  stp x22,x21,[sp, #0x30]
71002add80  stp x20,x19,[sp, #0x40]
71002add84  stp x29,x30,[sp, #0x50]
71002add88  add x29,sp,#0x50
71002add8c  sub sp,sp,#0x4b0
71002add90  add x19,x0,#0x38
71002add94  mov x20,x1
71002add98  mov x21,x0
71002add9c  adrp x1,0x7104411000
71002adda0  add x1,x1,#0x4cc
71002adda4  mov x0,x19
71002adda8  bl 0x71001b3cb0
71002addac  mov w8,#0x10000
71002addb0  str x8,[sp, #0x78]
71002addb4  add x8,sp,#0x98
71002addb8  stp xzr,xzr,[sp, #0xa0]
71002addbc  add x0,sp,#0x8
71002addc0  stp x8,xzr,[sp, #0x80]
71002addc4  sub x1,x29,#0x68
71002addc8  str xzr,[sp, #0x8]
71002addcc  str wzr,[sp, #0x60]
71002addd0  stp xzr,x8,[sp, #0x68]
71002addd4  mov w8,#0x3e8
71002addd8  stp xzr,x8,[sp, #0x90]
71002adddc  add x8,sp,#0x70
71002adde0  stp x8,xzr,[sp, #0x20]
71002adde4  mov w8,#0x400
71002adde8  stp xzr,xzr,[sp, #0x10]
71002addec  strh wzr,[sp, #0x1e]
71002addf0  stp xzr,xzr,[sp, #0x30]
71002addf4  stp xzr,xzr,[sp, #0x40]
71002addf8  stp xzr,x8,[sp, #0x50]
71002addfc  ldr x8,[x20]
71002ade00  stp x8,x8,[x29, #-0x68]
71002ade04  bl 0x71001ba380
71002ade08  ldr w8,[sp, #0x60]
71002ade0c  mov w22,wzr
71002ade10  cbz w8,0x71002adec4
71002ade14  ldr x19,[sp, #0x28]
71002ade18  cbz x19,0x71002ade58
71002ade1c  ldr x0,[x19]
71002ade20  cbz x0,0x71002ade44
71002ade24  ldr x8,[x19, #0x10]
71002ade28  cmp x8,x0
71002ade2c  b.eq 0x71002adfa0
71002ade30  ldr x20,[x0, #0x10]
71002ade34  bl 0x71001b1870
71002ade38  mov x0,x20
71002ade3c  str x20,[x19]
71002ade40  cbnz x20,0x71002ade24
71002ade44  ldr x0,[x19, #0x20]
71002ade48  cbz x0,0x71002ade50
71002ade4c  bl 0x71001b1870
71002ade50  mov x0,x19
71002ade54  bl 0x710353c3d0
71002ade58  ldr x0,[sp, #0x40]
71002ade5c  bl 0x71001b1870
71002ade60  ldr x0,[sp, #0x38]
71002ade64  cbz x0,0x71002ade6c
71002ade68  bl 0x71001b1870
71002ade6c  ldr x0,[sp, #0x70]
71002ade70  cbz x0,0x71002ade94
71002ade74  ldr x8,[sp, #0x80]
71002ade78  cmp x8,x0
71002ade7c  b.eq 0x71002adf90
71002ade80  ldr x19,[x0, #0x10]
71002ade84  bl 0x71001b1870
71002ade88  mov x0,x19
71002ade8c  str x19,[sp, #0x70]
71002ade90  cbnz x19,0x71002ade74
71002ade94  ldr x0,[sp, #0x90]
71002ade98  cbz x0,0x71002adea0
71002ade9c  bl 0x71001b1870
71002adea0  and w0,w22,#0x1
71002adea4  add sp,sp,#0x4b0
71002adea8  ldp x29,x30,[sp, #0x50]
71002adeac  ldp x20,x19,[sp, #0x40]
71002adeb0  ldp x22,x21,[sp, #0x30]
71002adeb4  ldp x24,x23,[sp, #0x20]
71002adeb8  ldp x26,x25,[sp, #0x10]
71002adebc  ldr x28,[sp], #0x60
71002adec0  ret
71002adec4  adrp x8,0x710424e000
71002adec8  add x8,x8,#0xb25
71002adecc  ldr x22,[sp, #0x10]
71002aded0  stp xzr,x8,[x29, #-0x68]
71002aded4  ldr w8,[sp, #0x8]
71002aded8  mov w23,#0x405
71002adedc  orr w9,wzr,#0x6
71002adee0  stur xzr,[x29, #-0x58]
71002adee4  sturh w23,[x29, #-0x52]
71002adee8  stur w9,[x29, #-0x68]
71002adeec  cbz w8,0x71002adfb0
71002adef0  mov w11,wzr
71002adef4  mov w10,#0x405
71002adef8  orr w12,wzr,#0x6
71002adefc  mov w24,#0x15
71002adf00  sub x25,x29,#0x68
71002adf04  orr w26,wzr,#0x30
71002adf08  mov x9,x22
71002adf0c  b 0x71002adf1c
71002adf10  ldurh w10,[x29, #-0x52]
71002adf14  ldurb w11,[x29, #-0x53]
71002adf18  ldur w12,[x29, #-0x68]
71002adf1c  sub w11,w24,w11, UXTB 
71002adf20  tst w10,#0x1000
71002adf24  csel w11,w12,w11,eq
71002adf28  ldrh w12,[x22, #0x16]
71002adf2c  ldrb w13,[x22, #0x15]
71002adf30  ldr w14,[x22]
71002adf34  sub w13,w24,w13
71002adf38  tst w12,#0x1000
71002adf3c  csel w13,w14,w13,eq
71002adf40  cmp w11,w13
71002adf44  b.ne 0x71002adf7c
71002adf48  ldur x13,[x29, #-0x60]
71002adf4c  tst w10,#0x1000
71002adf50  ldr x10,[x22, #0x8]
71002adf54  csel x0,x13,x25,eq
71002adf58  tst w12,#0x1000
71002adf5c  csel x1,x10,x22,eq
71002adf60  cmp x0,x1
71002adf64  b.eq 0x71002ae000
71002adf68  mov w2,w11
71002adf6c  bl 0x71039c0250
71002adf70  cbz w0,0x71002adff8
71002adf74  ldr x9,[sp, #0x10]
71002adf78  ldr w8,[sp, #0x8]
71002adf7c  umaddl x10,w8,w26,x9
71002adf80  add x22,x22,#0x30
71002adf84  cmp x22,x10
71002adf88  b.ne 0x71002adf10
71002adf8c  b 0x71002ae000
71002adf90  str xzr,[x0, #0x8]
71002adf94  ldr x0,[sp, #0x90]
71002adf98  cbnz x0,0x71002ade9c
71002adf9c  b 0x71002adea0
71002adfa0  str xzr,[x0, #0x8]
71002adfa4  ldr x0,[x19, #0x20]
71002adfa8  cbnz x0,0x71002ade4c
71002adfac  b 0x71002ade50
71002adfb0  mov x9,x22
71002adfb4  mov x10,x22
71002adfb8  orr w11,wzr,#0x30
71002adfbc  umaddl x11,w8,w11,x9
71002adfc0  cmp x10,x11
71002adfc4  b.eq 0x71002ae018
71002adfc8  ldrb w11,[x10, #0x2e]
71002adfcc  tbz w11,#0x4,0x71002ae018
71002adfd0  ldr x10,[x10, #0x18]
71002adfd4  str x10,[x21, #0x8]
71002adfd8  cbz x10,0x71002ae028
71002adfdc  mov x0,x21
71002adfe0  mov x1,x20
71002adfe4  bl 0x71002ac940
71002adfe8  mov w22,w0
71002adfec  ldr x19,[sp, #0x28]
71002adff0  cbnz x19,0x71002ade1c
71002adff4  b 0x71002ade58
71002adff8  ldr x9,[sp, #0x10]
71002adffc  ldr w8,[sp, #0x8]
71002ae000  mov x10,x22
71002ae004  mov x22,x9
71002ae008  orr w11,wzr,#0x30
71002ae00c  umaddl x11,w8,w11,x9
71002ae010  cmp x10,x11
71002ae014  b.ne 0x71002adfc8
71002ae018  mov w22,wzr
71002ae01c  ldr x19,[sp, #0x28]
71002ae020  cbnz x19,0x71002ade1c
71002ae024  b 0x71002ade58
71002ae028  adrp x10,0x7104421000
71002ae02c  add x10,x10,#0x84c
71002ae030  stur xzr,[x29, #-0x58]
71002ae034  stp xzr,x10,[x29, #-0x68]
71002ae038  orr w10,wzr,#0x6
71002ae03c  sturh w23,[x29, #-0x52]
71002ae040  stur w10,[x29, #-0x68]
71002ae044  cbz w8,0x71002ae0f4
71002ae048  mov w12,wzr
71002ae04c  mov w10,#0x405
71002ae050  orr w13,wzr,#0x6
71002ae054  mov w20,#0x15
71002ae058  sub x21,x29,#0x68
71002ae05c  orr w24,wzr,#0x30
71002ae060  mov x11,x22
71002ae064  b 0x71002ae074
71002ae068  ldurh w10,[x29, #-0x52]
71002ae06c  ldurb w12,[x29, #-0x53]
71002ae070  ldur w13,[x29, #-0x68]
71002ae074  sub w12,w20,w12, UXTB 
71002ae078  tst w10,#0x1000
71002ae07c  csel w12,w13,w12,eq
71002ae080  ldrh w13,[x22, #0x16]
71002ae084  ldrb w14,[x22, #0x15]
71002ae088  ldr w15,[x22]
71002ae08c  sub w14,w20,w14
71002ae090  tst w13,#0x1000
71002ae094  csel w14,w15,w14,eq
71002ae098  cmp w12,w14
71002ae09c  b.ne 0x71002ae0d8
71002ae0a0  ldur x11,[x29, #-0x60]
71002ae0a4  tst w10,#0x1000
71002ae0a8  ldr x10,[x22, #0x8]
71002ae0ac  csel x0,x11,x21,eq
71002ae0b0  tst w13,#0x1000
71002ae0b4  csel x1,x10,x22,eq
71002ae0b8  cmp x0,x1
71002ae0bc  b.eq 0x71002ae0f4
71002ae0c0  mov w2,w12
71002ae0c4  bl 0x71039c0250
71002ae0c8  cbz w0,0x71002ae0ec
71002ae0cc  ldr x9,[sp, #0x10]
71002ae0d0  ldr w8,[sp, #0x8]
71002ae0d4  mov x11,x9
71002ae0d8  umaddl x10,w8,w24,x11
71002ae0dc  add x22,x22,#0x30
71002ae0e0  cmp x22,x10
71002ae0e4  b.ne 0x71002ae068
71002ae0e8  b 0x71002ae0f4
71002ae0ec  ldr x9,[sp, #0x10]
71002ae0f0  ldr w8,[sp, #0x8]
71002ae0f4  orr w10,wzr,#0x30
71002ae0f8  umaddl x8,w8,w10,x9
71002ae0fc  cmp x22,x8
71002ae100  b.eq 0x71002ae018
71002ae104  adrp x8,0x7104442000
71002ae108  add x8,x8,#0xc14
71002ae10c  mov w9,#0x5
71002ae110  stur xzr,[x29, #-0x58]
71002ae114  sturh w23,[x29, #-0x52]
71002ae118  stp xzr,x8,[x29, #-0x68]
71002ae11c  stur w9,[x29, #-0x68]
71002ae120  ldr x8,[x22, #0x20]
71002ae124  ldr w9,[x22, #0x18]
71002ae128  cbz w9,0x71002ae1cc
71002ae12c  mov w11,wzr
71002ae130  mov w10,#0x405
71002ae134  mov w12,#0x5
71002ae138  mov w21,#0x15
71002ae13c  sub x23,x29,#0x68
71002ae140  orr w24,wzr,#0x30
71002ae144  mov x20,x8
71002ae148  b 0x71002ae158
71002ae14c  ldurh w10,[x29, #-0x52]
71002ae150  ldurb w11,[x29, #-0x53]
71002ae154  ldur w12,[x29, #-0x68]
71002ae158  sub w11,w21,w11, UXTB 
71002ae15c  tst w10,#0x1000
71002ae160  csel w11,w12,w11,eq
71002ae164  ldrh w12,[x20, #0x16]
71002ae168  ldrb w13,[x20, #0x15]
71002ae16c  ldr w14,[x20]
71002ae170  sub w13,w21,w13
71002ae174  tst w12,#0x1000
71002ae178  csel w13,w14,w13,eq
71002ae17c  cmp w11,w13
71002ae180  b.ne 0x71002ae1b8
71002ae184  ldur x13,[x29, #-0x60]
71002ae188  tst w10,#0x1000
71002ae18c  ldr x10,[x20, #0x8]
71002ae190  csel x0,x13,x23,eq
71002ae194  tst w12,#0x1000
71002ae198  csel x1,x10,x20,eq
71002ae19c  cmp x0,x1
71002ae1a0  b.eq 0x71002ae1ec
71002ae1a4  mov w2,w11
71002ae1a8  bl 0x71039c0250
71002ae1ac  cbz w0,0x71002ae1e4
71002ae1b0  ldr x8,[x22, #0x20]
71002ae1b4  ldr w9,[x22, #0x18]
71002ae1b8  umaddl x10,w9,w24,x8
71002ae1bc  add x20,x20,#0x30
71002ae1c0  cmp x20,x10
71002ae1c4  b.ne 0x71002ae14c
71002ae1c8  b 0x71002ae1ec
71002ae1cc  mov x20,x8
71002ae1d0  orr w10,wzr,#0x30
71002ae1d4  umaddl x8,w9,w10,x8
71002ae1d8  cmp x20,x8
71002ae1dc  b.ne 0x71002ae1fc
71002ae1e0  b 0x71002ae018
71002ae1e4  ldr x8,[x22, #0x20]
71002ae1e8  ldr w9,[x22, #0x18]
71002ae1ec  orr w10,wzr,#0x30
71002ae1f0  umaddl x8,w9,w10,x8
71002ae1f4  cmp x20,x8
71002ae1f8  b.eq 0x71002ae018
71002ae1fc  ldrh w8,[x20, #0x2e]
71002ae200  tbz w8,#0xa,0x71002ae018
71002ae204  tbnz w8,#0xc,0x71002ae210
71002ae208  ldr x1,[x20, #0x20]
71002ae20c  b 0x71002ae214
71002ae210  add x1,x20,#0x18
71002ae214  mov x0,x19
71002ae218  bl 0x71001b3cb0
71002ae21c  mov w22,#0x1
71002ae220  ldr x19,[sp, #0x28]
71002ae224  cbnz x19,0x71002ade1c
71002ae228  b 0x71002ade58
