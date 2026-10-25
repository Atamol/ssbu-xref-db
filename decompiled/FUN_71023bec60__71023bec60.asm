// addr:      71023bec60
// offset:    0x23bec60
// name:      FUN_71023bec60
// mangled:   
// size:      11140

71023bec60  sub sp,sp,#0x160
71023bec64  str x28,[sp, #0x110]
71023bec68  stp x24,x23,[sp, #0x120]
71023bec6c  stp x22,x21,[sp, #0x130]
71023bec70  stp x20,x19,[sp, #0x140]
71023bec74  stp x29,x30,[sp, #0x150]
71023bec78  add x29,sp,#0x150
71023bec7c  ldr w8,[x0, #0x2dc]
71023bec80  mov x19,x0
71023bec84  cbnz w8,0x71023bed58
71023bec88  ldr w8,[x19, #0x2e0]
71023bec8c  cmp w8,#0x1c
71023bec90  b.ne 0x71023bed58
71023bec94  adrp x8,0x710532f000
71023bec98  ldr x8,[x8, #0x7a0]
71023bec9c  add x20,x19,#0xb00
71023beca0  cbz x8,0x71023bed50
71023beca4  movi d2,#0x0
71023beca8  ldr q0,[x19, #0xb30]
71023becac  adrp x21,0x71052b8000
71023becb0  ldr x8,[x21, #0xf00]
71023becb4  ldr x8,[x8]
71023becb8  mov v1.16B,v2.16B
71023becbc  mov v1.S[0x0],v0.S[0x2]
71023becc0  ldr w22,[x19, #0xb18]
71023becc4  ldrh w9,[x8, #0xdce]
71023becc8  orr w9,w9,#0x2
71023beccc  add x0,x8,#0xca0
71023becd0  mov v0.D[0x1],v1.D[0x0]
71023becd4  mov v1.16B,v2.16B
71023becd8  str q0,[x8, #0xd30]
71023becdc  ldr q0,[x19, #0xb40]
71023bece0  strh w9,[x8, #0xdce]
71023bece4  mov w23,#0x43
71023bece8  mov v1.S[0x0],v0.S[0x2]
71023becec  str w22,[x8, #0xdac]
71023becf0  mov v0.D[0x1],v1.D[0x0]
71023becf4  strh w23,[x8, #0xdcc]
71023becf8  str q0,[x8, #0xd20]
71023becfc  bl 0x71004ec800
71023bed00  movi d2,#0x0
71023bed04  ldr q0,[x19, #0xb30]
71023bed08  ldr x8,[x21, #0xf00]
71023bed0c  mov v1.16B,v2.16B
71023bed10  ldr x8,[x8]
71023bed14  ldrh w9,[x8, #0xf5e]
71023bed18  mov v1.S[0x0],v0.S[0x2]
71023bed1c  orr w9,w9,#0x2
71023bed20  mov v0.D[0x1],v1.D[0x0]
71023bed24  mov v1.16B,v2.16B
71023bed28  str q0,[x8, #0xec0]
71023bed2c  ldr q0,[x19, #0xb40]
71023bed30  strh w9,[x8, #0xf5e]
71023bed34  add x0,x8,#0xe30
71023bed38  mov v1.S[0x0],v0.S[0x2]
71023bed3c  str w22,[x8, #0xf3c]
71023bed40  mov v0.D[0x1],v1.D[0x0]
71023bed44  strh w23,[x8, #0xf5c]
71023bed48  str q0,[x8, #0xeb0]
71023bed4c  bl 0x71004ec800
71023bed50  mov x0,x20
71023bed54  bl 0x71023ca330
71023bed58  ldrb w8,[x19, #0xd63]
71023bed5c  cbz w8,0x71023bed80
71023bed60  ldr w8,[x19, #0xd44]
71023bed64  cmn w8,#0x1
71023bed68  b.eq 0x71023bed9c
71023bed6c  cmp w8,#0x1
71023bed70  b.ne 0x71023bed78
71023bed74  str w8,[x19, #0xd40]
71023bed78  mov w8,#0xffffffff
71023bed7c  str w8,[x19, #0xd44]
71023bed80  ldp x29,x30,[sp, #0x150]
71023bed84  ldr x28,[sp, #0x110]
71023bed88  ldp x20,x19,[sp, #0x140]
71023bed8c  ldp x22,x21,[sp, #0x130]
71023bed90  ldp x24,x23,[sp, #0x120]
71023bed94  add sp,sp,#0x160
71023bed98  ret
71023bed9c  mov x0,x19
71023beda0  bl 0x71023c9e40
71023beda4  ldrb w8,[x19, #0xd67]
71023beda8  ldr x9,[x19, #0x590]
71023bedac  cbz w8,0x71023bedcc
71023bedb0  ldr x10,[x9, #0x8]
71023bedb4  ldrb w11,[x10, #0x4aa]
71023bedb8  cbz w11,0x71023bedc4
71023bedbc  ldrb w10,[x10, #0x29c]
71023bedc0  tbnz w10,#0x4,0x71023bedcc
71023bedc4  mov w8,wzr
71023bedc8  strb wzr,[x19, #0xd67]
71023bedcc  ldr x9,[x9, #0x8]
71023bedd0  ldrb w10,[x9, #0x4aa]
71023bedd4  cbz w10,0x71023bee2c
71023bedd8  ldrb w10,[x9, #0x1ac]
71023beddc  tbnz w10,#0x1,0x71023bee80
71023bede0  ldrb w10,[x9, #0x1b0]
71023bede4  tbnz w10,#0x1,0x71023beeb0
71023bede8  ldrb w10,[x9, #0x1e4]
71023bedec  tbnz w10,#0x1,0x71023befd8
71023bedf0  ldrb w10,[x9, #0x1b4]
71023bedf4  tbnz w10,#0x1,0x71023bf0fc
71023bedf8  ldrb w10,[x9, #0x1b8]
71023bedfc  tbnz w10,#0x1,0x71023bf460
71023bee00  ldrb w10,[x9, #0x1c4]
71023bee04  tbnz w10,#0x1,0x71023bfa7c
71023bee08  ldrb w10,[x9, #0x1c8]
71023bee0c  tbnz w10,#0x1,0x71023bfc74
71023bee10  ldrb w10,[x9, #0x1cc]
71023bee14  tbnz w10,#0x1,0x71023bff90
71023bee18  ldrb w9,[x9, #0x29c]
71023bee1c  tbz w9,#0x4,0x71023bee2c
71023bee20  ldrb w9,[x19, #0xc44]
71023bee24  orr w8,w9,w8
71023bee28  cbz w8,0x71023c0c18
71023bee2c  ldrb w8,[x19, #0xd68]
71023bee30  cbz w8,0x71023bef44
71023bee34  add x0,x19,#0x430
71023bee38  bl 0x71023c9d60
71023bee3c  ldr x9,[x19, #0x430]
71023bee40  cbz x9,0x71023bee6c
71023bee44  ldr x11,[x19, #0x440]
71023bee48  ldr x8,[x19, #0x438]
71023bee4c  and x10,x11,#0x1
71023bee50  orr x12,x10,x8
71023bee54  cbz x12,0x71023bee6c
71023bee58  add x0,x9,x11, ASR #0x1
71023bee5c  cbz x10,0x71023bee68
71023bee60  ldr x9,[x0]
71023bee64  ldr x8,[x9, x8, LSL #0x0]
71023bee68  blr x8
71023bee6c  ldr w8,[x19, #0x4cc]
71023bee70  mov w21,wzr
71023bee74  add w8,w8,#0x1
71023bee78  str w8,[x19, #0x4cc]
71023bee7c  b 0x71023c0cc8
71023bee80  ldr w8,[x19, #0x2d4]
71023bee84  cmp w8,#0x11
71023bee88  b.gt 0x71023c0cc4
71023bee8c  add w8,w8,#0x1
71023bee90  cmp w8,#0x13
71023bee94  str w8,[x19, #0x2d4]
71023bee98  b.cs 0x71023c17e0
71023bee9c  add x8,x19,w8, SXTW  #0x2
71023beea0  mov w9,#0x4
71023beea4  mov w21,wzr
71023beea8  str w9,[x8, #0x288]
71023beeac  b 0x71023c0cc8
71023beeb0  ldr x8,[x19, #0x5b0]
71023beeb4  ldrb w9,[x19, #0x71d]
71023beeb8  ldr x8,[x8, #0x80]
71023beebc  cbz w9,0x71023bf040
71023beec0  ldr x21,[x8, #0x318]
71023beec4  ldr x20,[x8, #0x320]
71023beec8  cbz x20,0x71023bf220
71023beecc  add x8,x20,#0x8
71023beed0  ldxr x9,[x8]
71023beed4  add x9,x9,#0x1
71023beed8  stxr w10,x9,[x8]
71023beedc  cbnz w10,0x71023beed0
71023beee0  add x0,x21,#0x10
71023beee4  mov w2,#0x1
71023beee8  mov w1,wzr
71023beeec  bl 0x7103771a80
71023beef0  ldr x8,[x21]
71023beef4  ldr x8,[x8, #0x30]
71023beef8  mov x0,x21
71023beefc  mov w1,wzr
71023bef00  blr x8
71023bef04  mov x0,x21
71023bef08  mov w1,wzr
71023bef0c  bl 0x7101ec4a30
71023bef10  add x8,x20,#0x8
71023bef14  ldaxr x9,[x8]
71023bef18  sub x10,x9,#0x1
71023bef1c  stlxr w11,x10,[x8]
71023bef20  cbnz w11,0x71023bef14
71023bef24  cbnz x9,0x71023bf250
71023bef28  ldr x8,[x20]
71023bef2c  ldr x8,[x8, #0x10]
71023bef30  mov x0,x20
71023bef34  blr x8
71023bef38  mov x0,x20
71023bef3c  bl 0x71039c2670
71023bef40  b 0x71023bf250
71023bef44  ldr x8,[x19, #0xca8]
71023bef48  str x8,[sp, #0x8]
71023bef4c  ldr x8,[x19, #0xca0]
71023bef50  str x8,[sp]
71023bef54  ldrb w8,[x19, #0xc44]
71023bef58  strb w8,[sp, #0x10]
71023bef5c  ldrb w8,[x19, #0xc42]
71023bef60  strb w8,[sp, #0x11]
71023bef64  ldrb w8,[x19, #0xc43]
71023bef68  strb w8,[sp, #0x12]
71023bef6c  ldr x8,[x19, #0x5b0]
71023bef70  ldr x0,[x8, #0x80]
71023bef74  mov x1,sp
71023bef78  bl 0x7101eb6130
71023bef7c  cmp w0,#0xd
71023bef80  b.hi 0x71023bee34
71023bef84  and x8,x0,#0xffffffff
71023bef88  adrp x9,0x71044fd000
71023bef8c  add x9,x9,#0xfb0
71023bef90  ldrsw x8,[x9, x8, LSL #0x2]
71023bef94  add x8,x8,x9
71023bef98  br x8
71023bef9c  ldrb w8,[x19, #0x71d]
71023befa0  eor w8,w8,#0x1
71023befa4  str w8,[x19, #0xd40]
71023befa8  adrp x8,0x710532f000
71023befac  ldr x8,[x8, #0x8d0]
71023befb0  ldr x0,[x8, #0x8]
71023befb4  ldp x8,x9,[x0, #0x40]
71023befb8  sub x9,x9,x8
71023befbc  asr x9,x9,#0x3
71023befc0  cmp x9,#0x3
71023befc4  b.cc 0x71023bfb68
71023befc8  ldr x20,[x8, #0x10]
71023befcc  ldrb w8,[x0, #0x191]
71023befd0  cbnz w8,0x71023bfbe4
71023befd4  b 0x71023bfb74
71023befd8  ldr x8,[x19, #0x5b0]
71023befdc  ldr x9,[x8, #0x80]
71023befe0  ldr x8,[x9, #0x318]
71023befe4  ldr x20,[x9, #0x320]
71023befe8  cbz x20,0x71023bf33c
71023befec  add x9,x20,#0x8
71023beff0  ldxr x10,[x9]
71023beff4  add x10,x10,#0x1
71023beff8  stxr w11,x10,[x9]
71023beffc  cbnz w11,0x71023beff0
71023bf000  ldr w21,[x8, #0xb8]
71023bf004  add x8,x20,#0x8
71023bf008  ldaxr x9,[x8]
71023bf00c  sub x10,x9,#0x1
71023bf010  stlxr w11,x10,[x8]
71023bf014  cbnz w11,0x71023bf008
71023bf018  cbnz x9,0x71023bf034
71023bf01c  ldr x8,[x20]
71023bf020  ldr x8,[x8, #0x10]
71023bf024  mov x0,x20
71023bf028  blr x8
71023bf02c  mov x0,x20
71023bf030  bl 0x71039c2670
71023bf034  cmp w21,#0x1
71023bf038  b.eq 0x71023bf348
71023bf03c  b 0x71023bf38c
71023bf040  ldr x21,[x8, #0x318]
71023bf044  ldr x20,[x8, #0x320]
71023bf048  cbz x20,0x71023bf060
71023bf04c  add x8,x20,#0x8
71023bf050  ldxr x9,[x8]
71023bf054  add x9,x9,#0x1
71023bf058  stxr w10,x9,[x8]
71023bf05c  cbnz w10,0x71023bf050
71023bf060  ldrb w8,[x21, #0x161]
71023bf064  cbz w8,0x71023bf3fc
71023bf068  ldr w8,[x21, #0xb8]
71023bf06c  cbnz w8,0x71023bf428
71023bf070  ldr x8,[x21, #0x10]
71023bf074  ldr x9,[x8, #0x1b8]
71023bf078  cbz x9,0x71023bf428
71023bf07c  add x10,x8,#0x1b8
71023bf080  mov x8,x10
71023bf084  ldr w11,[x9, #0x20]
71023bf088  cmp w11,#0x0
71023bf08c  cset w11,lt
71023bf090  csel x8,x8,x9,lt
71023bf094  ldr x9,[x9, w11, UXTW #0x3]
71023bf098  cbnz x9,0x71023bf084
71023bf09c  cmp x8,x10
71023bf0a0  b.eq 0x71023bf428
71023bf0a4  ldr w9,[x8, #0x20]
71023bf0a8  cmp w9,#0x0
71023bf0ac  b.gt 0x71023bf428
71023bf0b0  ldr x0,[x8, #0x28]
71023bf0b4  cbz x0,0x71023bf428
71023bf0b8  ldr x8,[x0]
71023bf0bc  ldr x8,[x8, #0x200]
71023bf0c0  blr x8
71023bf0c4  tbz w0,#0x0,0x71023bf428
71023bf0c8  add x0,x21,#0x10
71023bf0cc  mov w2,#0x1
71023bf0d0  mov w1,wzr
71023bf0d4  bl 0x7103771a80
71023bf0d8  ldr x8,[x21]
71023bf0dc  ldr x8,[x8, #0x30]
71023bf0e0  mov x0,x21
71023bf0e4  mov w1,wzr
71023bf0e8  blr x8
71023bf0ec  mov x0,x21
71023bf0f0  mov w1,wzr
71023bf0f4  bl 0x7101ec4a30
71023bf0f8  b 0x71023bfb1c
71023bf0fc  ldr x8,[x19, #0x580]
71023bf100  ldr x0,[x8]
71023bf104  cbz x0,0x71023bf1d8
71023bf108  ldr x8,[x0, #0x8]
71023bf10c  ldr x9,[x8, #0x88]
71023bf110  cbnz x9,0x71023bf11c
71023bf114  ldr x8,[x8, #0x58]
71023bf118  cbz x8,0x71023bf1d8
71023bf11c  ldrb w8,[x0, #0x38]
71023bf120  cbnz w8,0x71023bf1d8
71023bf124  ldr x8,[x0, #0x128]
71023bf128  ldrb w8,[x8, #0x8]
71023bf12c  cbnz w8,0x71023bf1d8
71023bf130  ldr x8,[x0]
71023bf134  ldr x8,[x8, #0xa0]
71023bf138  ldr x8,[x8]
71023bf13c  ldr x8,[x8]
71023bf140  ldr x8,[x8, #0x338]
71023bf144  ldr x21,[x8]
71023bf148  ldr x8,[x21, #0x8]
71023bf14c  cbz x8,0x71023bf1d4
71023bf150  mov x1,sp
71023bf154  mov w2,#0x1
71023bf158  mov x0,x8
71023bf15c  str xzr,[sp]
71023bf160  bl 0x7102405040
71023bf164  cmn w0,#0x1
71023bf168  b.eq 0x71023bf1c8
71023bf16c  mov w20,w0
71023bf170  cmp w0,#0x18
71023bf174  b.hi 0x71023bf1b0
71023bf178  ldr x8,[x21, #0x8]
71023bf17c  mov w9,#0x50
71023bf180  smaddl x8,w20,w9,x8
71023bf184  ldr x0,[x8, #0x68]
71023bf188  ldr x8,[x0]
71023bf18c  cbz x8,0x71023bf1b0
71023bf190  ldr w9,[x0, #0x8]
71023bf194  cmn w9,#0x1
71023bf198  b.eq 0x71023bf1b0
71023bf19c  ldr w8,[x8, #0x20]
71023bf1a0  cmp w9,w8
71023bf1a4  b.ne 0x71023bf1b0
71023bf1a8  add x1,x19,#0xb30
71023bf1ac  bl 0x7103736cf0
71023bf1b0  ldr x0,[x21, #0x8]
71023bf1b4  ldr x8,[x0]
71023bf1b8  ldr x8,[x8, #0x58]
71023bf1bc  mov w1,#0x2
71023bf1c0  mov w2,w20
71023bf1c4  blr x8
71023bf1c8  ldr x8,[x19, #0x580]
71023bf1cc  ldr x0,[x8]
71023bf1d0  cbz x0,0x71023bf1d8
71023bf1d4  bl 0x71031a00e0
71023bf1d8  ldr x8,[x19, #0x5b0]
71023bf1dc  ldr x8,[x8, #0x80]
71023bf1e0  ldr x0,[x8, #0x318]
71023bf1e4  ldr x19,[x8, #0x320]
71023bf1e8  cbz x19,0x71023bf57c
71023bf1ec  add x8,x19,#0x8
71023bf1f0  ldxr x9,[x8]
71023bf1f4  add x9,x9,#0x1
71023bf1f8  stxr w10,x9,[x8]
71023bf1fc  cbnz w10,0x71023bf1f0
71023bf200  mov w1,#0x4
71023bf204  bl 0x7101ec4a30
71023bf208  add x8,x19,#0x8
71023bf20c  ldaxr x9,[x8]
71023bf210  sub x10,x9,#0x1
71023bf214  stlxr w11,x10,[x8]
71023bf218  cbnz w11,0x71023bf20c
71023bf21c  b 0x71023bf3d0
71023bf220  add x0,x21,#0x10
71023bf224  mov w2,#0x1
71023bf228  mov w1,wzr
71023bf22c  bl 0x7103771a80
71023bf230  ldr x8,[x21]
71023bf234  ldr x8,[x8, #0x30]
71023bf238  mov x0,x21
71023bf23c  mov w1,wzr
71023bf240  blr x8
71023bf244  mov x0,x21
71023bf248  mov w1,wzr
71023bf24c  bl 0x7101ec4a30
71023bf250  str wzr,[x19, #0xd40]
71023bf254  adrp x8,0x710532f000
71023bf258  ldr x8,[x8, #0x8d0]
71023bf25c  ldr x0,[x8, #0x8]
71023bf260  ldp x8,x9,[x0, #0x40]
71023bf264  sub x9,x9,x8
71023bf268  asr x9,x9,#0x3
71023bf26c  cmp x9,#0x3
71023bf270  b.cc 0x71023bf284
71023bf274  ldr x20,[x8, #0x10]
71023bf278  ldrb w8,[x0, #0x191]
71023bf27c  cbnz w8,0x71023bf300
71023bf280  b 0x71023bf290
71023bf284  mov x20,xzr
71023bf288  ldrb w8,[x0, #0x191]
71023bf28c  cbnz w8,0x71023bf300
71023bf290  mov w2,#0x4
71023bf294  mov x1,x20
71023bf298  bl 0x7103313f20
71023bf29c  tbz w0,#0x0,0x71023bf300
71023bf2a0  sub x0,x29,#0x80
71023bf2a4  mov x1,x20
71023bf2a8  bl 0x71024076d0
71023bf2ac  ldur x8,[x29, #-0x70]
71023bf2b0  adrp x9,0x7104f73000
71023bf2b4  add x9,x9,#0xd50
71023bf2b8  stur x9,[x29, #-0x78]
71023bf2bc  cbz x8,0x71023bf32c
71023bf2c0  adrp x8,0x7106dd5000
71023bf2c4  ldrb w8,[x8, #0x3a8]
71023bf2c8  cmp w8,#0x1
71023bf2cc  b.ne 0x71023bf32c
71023bf2d0  adrp x9,0x7106dd5000
71023bf2d4  ldur w8,[x29, #-0x68]
71023bf2d8  ldr w9,[x9, #0x3ac]
71023bf2dc  cmp w8,w9
71023bf2e0  b.ne 0x71023bf32c
71023bf2e4  ldur x8,[x29, #-0x70]
71023bf2e8  ldr wzr,[x8, #0x38]!
71023bf2ec  ldaxr w9,[x8]
71023bf2f0  sub w9,w9,#0x1
71023bf2f4  stlxr w10,w9,[x8]
71023bf2f8  cbnz w10,0x71023bf2ec
71023bf2fc  b 0x71023bf32c
71023bf300  mov x8,#0x650000000000
71023bf304  movk x8,#0x87, LSL #48
71023bf308  sturb wzr,[x29, #-0x60]
71023bf30c  stp xzr,x8,[x29, #-0x70]
71023bf310  mov x8,#-0x1
71023bf314  stp x8,xzr,[x29, #-0x58]
71023bf318  adrp x8,0x7104f73000
71023bf31c  add x8,x8,#0xd50
71023bf320  stur wzr,[x29, #-0x80]
71023bf324  stur xzr,[x29, #-0x48]
71023bf328  stur x8,[x29, #-0x78]
71023bf32c  mov w21,wzr
71023bf330  stur xzr,[x29, #-0x70]
71023bf334  sturb wzr,[x29, #-0x60]
71023bf338  b 0x71023c0cc8
71023bf33c  ldr w8,[x8, #0xb8]
71023bf340  cmp w8,#0x1
71023bf344  b.ne 0x71023bf38c
71023bf348  ldr x8,[x19, #0x580]
71023bf34c  ldr x20,[x8]
71023bf350  cbz x20,0x71023bf38c
71023bf354  ldr x8,[x20]
71023bf358  ldr x0,[x8, #0x60]
71023bf35c  add x1,x20,#0xa0
71023bf360  bl 0x7103192600
71023bf364  str q0,[sp]
71023bf368  ldrb w2,[x20, #0xb0]
71023bf36c  mov x1,sp
71023bf370  mov x0,x20
71023bf374  bl 0x710319f6b0
71023bf378  ldrb w2,[x20, #0xb0]
71023bf37c  ldrb w3,[x20, #0xb1]
71023bf380  mov x1,sp
71023bf384  mov x0,x20
71023bf388  bl 0x710319fb90
71023bf38c  ldr x8,[x19, #0x5b0]
71023bf390  ldr x8,[x8, #0x80]
71023bf394  ldr x0,[x8, #0x318]
71023bf398  ldr x19,[x8, #0x320]
71023bf39c  cbz x19,0x71023bf3f0
71023bf3a0  add x8,x19,#0x8
71023bf3a4  ldxr x9,[x8]
71023bf3a8  add x9,x9,#0x1
71023bf3ac  stxr w10,x9,[x8]
71023bf3b0  cbnz w10,0x71023bf3a4
71023bf3b4  mov w1,#0x1
71023bf3b8  bl 0x7101ec4a30
71023bf3bc  add x8,x19,#0x8
71023bf3c0  ldaxr x9,[x8]
71023bf3c4  sub x10,x9,#0x1
71023bf3c8  stlxr w11,x10,[x8]
71023bf3cc  cbnz w11,0x71023bf3c0
71023bf3d0  cbnz x9,0x71023bed80
71023bf3d4  ldr x8,[x19]
71023bf3d8  ldr x8,[x8, #0x10]
71023bf3dc  mov x0,x19
71023bf3e0  blr x8
71023bf3e4  mov x0,x19
71023bf3e8  bl 0x71039c2670
71023bf3ec  b 0x71023bed80
71023bf3f0  mov w1,#0x1
71023bf3f4  bl 0x7101ec4a30
71023bf3f8  b 0x71023bed80
71023bf3fc  ldr x8,[x19, #0x580]
71023bf400  ldr x8,[x8]
71023bf404  cbz x8,0x71023bfb1c
71023bf408  ldrb w9,[x8, #0x38]
71023bf40c  cbnz w9,0x71023bf428
71023bf410  ldr x9,[x8, #0x128]
71023bf414  ldrb w9,[x9, #0x8]
71023bf418  cbnz w9,0x71023bf428
71023bf41c  ldr x8,[x8, #0x128]
71023bf420  ldrb w8,[x8, #0x8]
71023bf424  cbz w8,0x71023bfb1c
71023bf428  cbz x20,0x71023bed80
71023bf42c  add x8,x20,#0x8
71023bf430  ldaxr x9,[x8]
71023bf434  sub x10,x9,#0x1
71023bf438  stlxr w11,x10,[x8]
71023bf43c  cbnz w11,0x71023bf430
71023bf440  cbnz x9,0x71023bed80
71023bf444  ldr x8,[x20]
71023bf448  ldr x8,[x8, #0x10]
71023bf44c  mov x0,x20
71023bf450  blr x8
71023bf454  mov x0,x20
71023bf458  bl 0x71039c2670
71023bf45c  b 0x71023bed80
71023bf460  ldr x8,[x19, #0x580]
71023bf464  ldr x0,[x8]
71023bf468  cbz x0,0x71023bf534
71023bf46c  ldr x8,[x0, #0x8]
71023bf470  ldr x8,[x8, #0xb8]
71023bf474  cbz x8,0x71023bf534
71023bf478  ldrb w8,[x0, #0x38]
71023bf47c  cbnz w8,0x71023bf534
71023bf480  ldr x8,[x0, #0x128]
71023bf484  ldrb w8,[x8, #0x8]
71023bf488  cbnz w8,0x71023bf534
71023bf48c  ldr x8,[x0]
71023bf490  ldr x8,[x8, #0xa0]
71023bf494  ldr x8,[x8]
71023bf498  ldr x8,[x8]
71023bf49c  ldr x8,[x8, #0x338]
71023bf4a0  ldr x21,[x8]
71023bf4a4  ldr x8,[x21, #0x8]
71023bf4a8  cbz x8,0x71023bf530
71023bf4ac  mov x1,sp
71023bf4b0  mov w2,#0x1
71023bf4b4  mov x0,x8
71023bf4b8  str xzr,[sp]
71023bf4bc  bl 0x7102405040
71023bf4c0  cmn w0,#0x1
71023bf4c4  b.eq 0x71023bf524
71023bf4c8  mov w20,w0
71023bf4cc  cmp w0,#0x18
71023bf4d0  b.hi 0x71023bf50c
71023bf4d4  ldr x8,[x21, #0x8]
71023bf4d8  mov w9,#0x50
71023bf4dc  smaddl x8,w20,w9,x8
71023bf4e0  ldr x0,[x8, #0x68]
71023bf4e4  ldr x8,[x0]
71023bf4e8  cbz x8,0x71023bf50c
71023bf4ec  ldr w9,[x0, #0x8]
71023bf4f0  cmn w9,#0x1
71023bf4f4  b.eq 0x71023bf50c
71023bf4f8  ldr w8,[x8, #0x20]
71023bf4fc  cmp w9,w8
71023bf500  b.ne 0x71023bf50c
71023bf504  add x1,x19,#0xb30
71023bf508  bl 0x7103736cf0
71023bf50c  ldr x0,[x21, #0x8]
71023bf510  ldr x8,[x0]
71023bf514  ldr x8,[x8, #0x58]
71023bf518  orr w1,wzr,#0x3
71023bf51c  mov w2,w20
71023bf520  blr x8
71023bf524  ldr x8,[x19, #0x580]
71023bf528  ldr x0,[x8]
71023bf52c  cbz x0,0x71023bf534
71023bf530  bl 0x71031a0250
71023bf534  ldr x8,[x19, #0x5b0]
71023bf538  ldr x8,[x8, #0x80]
71023bf53c  ldr x0,[x8, #0x318]
71023bf540  ldr x19,[x8, #0x320]
71023bf544  cbz x19,0x71023bfb5c
71023bf548  add x8,x19,#0x8
71023bf54c  ldxr x9,[x8]
71023bf550  add x9,x9,#0x1
71023bf554  stxr w10,x9,[x8]
71023bf558  cbnz w10,0x71023bf54c
71023bf55c  mov w1,#0x5
71023bf560  bl 0x7101ec4a30
71023bf564  add x8,x19,#0x8
71023bf568  ldaxr x9,[x8]
71023bf56c  sub x10,x9,#0x1
71023bf570  stlxr w11,x10,[x8]
71023bf574  cbnz w11,0x71023bf568
71023bf578  b 0x71023bf3d0
71023bf57c  mov w1,#0x4
71023bf580  bl 0x7101ec4a30
71023bf584  b 0x71023bed80
71023bf588  ldr w8,[x19, #0x2d4]
71023bf58c  cmp w8,#0x11
71023bf590  b.gt 0x71023bed80
71023bf594  add w8,w8,#0x1
71023bf598  cmp w8,#0x13
71023bf59c  str w8,[x19, #0x2d4]
71023bf5a0  b.cs 0x71023c17e0
71023bf5a4  add x8,x19,w8, SXTW  #0x2
71023bf5a8  orr w9,wzr,#0x1c
71023bf5ac  str w9,[x8, #0x288]
71023bf5b0  ldr w8,[x19, #0x2d4]
71023bf5b4  cmp w8,#0x11
71023bf5b8  b.gt 0x71023bed80
71023bf5bc  add w8,w8,#0x1
71023bf5c0  cmp w8,#0x13
71023bf5c4  str w8,[x19, #0x2d4]
71023bf5c8  b.cs 0x71023c17e0
71023bf5cc  add x8,x19,w8, SXTW  #0x2
71023bf5d0  orr w9,wzr,#0x18
71023bf5d4  str w9,[x8, #0x288]
71023bf5d8  ldr w8,[x19, #0x2d4]
71023bf5dc  cmp w8,#0x11
71023bf5e0  b.gt 0x71023bed80
71023bf5e4  add w8,w8,#0x1
71023bf5e8  cmp w8,#0x13
71023bf5ec  str w8,[x19, #0x2d4]
71023bf5f0  b.cs 0x71023c17e0
71023bf5f4  add x8,x19,w8, SXTW  #0x2
71023bf5f8  mov w9,#0x1b
71023bf5fc  str w9,[x8, #0x288]
71023bf600  b 0x71023bed80
71023bf604  ldr x8,[x19, #0x580]
71023bf608  ldr x0,[x8]
71023bf60c  cbz x0,0x71023bed80
71023bf610  ldr x8,[x0, #0x8]
71023bf614  ldr x8,[x8, #0xb8]
71023bf618  cbz x8,0x71023bed80
71023bf61c  ldrb w8,[x0, #0x38]
71023bf620  cbnz w8,0x71023bed80
71023bf624  ldr x8,[x0, #0x128]
71023bf628  ldrb w8,[x8, #0x8]
71023bf62c  cbnz w8,0x71023bed80
71023bf630  ldr x8,[x0]
71023bf634  ldr x8,[x8, #0xa0]
71023bf638  ldr x8,[x8]
71023bf63c  ldr x8,[x8]
71023bf640  ldr x8,[x8, #0x338]
71023bf644  ldr x21,[x8]
71023bf648  ldr x8,[x21, #0x8]
71023bf64c  cbz x8,0x71023bf6d4
71023bf650  mov x1,sp
71023bf654  mov w2,#0x1
71023bf658  mov x0,x8
71023bf65c  str xzr,[sp]
71023bf660  bl 0x7102405040
71023bf664  cmn w0,#0x1
71023bf668  b.eq 0x71023bf6c8
71023bf66c  mov w20,w0
71023bf670  cmp w0,#0x18
71023bf674  b.hi 0x71023bf6b0
71023bf678  ldr x8,[x21, #0x8]
71023bf67c  mov w9,#0x50
71023bf680  smaddl x8,w20,w9,x8
71023bf684  ldr x0,[x8, #0x68]
71023bf688  ldr x8,[x0]
71023bf68c  cbz x8,0x71023bf6b0
71023bf690  ldr w9,[x0, #0x8]
71023bf694  cmn w9,#0x1
71023bf698  b.eq 0x71023bf6b0
71023bf69c  ldr w8,[x8, #0x20]
71023bf6a0  cmp w9,w8
71023bf6a4  b.ne 0x71023bf6b0
71023bf6a8  add x1,x19,#0xb30
71023bf6ac  bl 0x7103736cf0
71023bf6b0  ldr x0,[x21, #0x8]
71023bf6b4  ldr x8,[x0]
71023bf6b8  ldr x8,[x8, #0x58]
71023bf6bc  orr w1,wzr,#0x3
71023bf6c0  mov w2,w20
71023bf6c4  blr x8
71023bf6c8  ldr x8,[x19, #0x580]
71023bf6cc  ldr x0,[x8]
71023bf6d0  cbz x0,0x71023bed80
71023bf6d4  bl 0x71031a0250
71023bf6d8  b 0x71023bed80
71023bf6dc  ldr x8,[x19, #0x5b0]
71023bf6e0  ldr x9,[x8, #0x80]
71023bf6e4  ldr x8,[x9, #0x318]
71023bf6e8  ldr x20,[x9, #0x320]
71023bf6ec  cbz x20,0x71023bfcd8
71023bf6f0  add x9,x20,#0x8
71023bf6f4  ldxr x10,[x9]
71023bf6f8  add x10,x10,#0x1
71023bf6fc  stxr w11,x10,[x9]
71023bf700  cbnz w11,0x71023bf6f4
71023bf704  ldr w21,[x8, #0xb8]
71023bf708  add x8,x20,#0x8
71023bf70c  ldaxr x9,[x8]
71023bf710  sub x10,x9,#0x1
71023bf714  stlxr w11,x10,[x8]
71023bf718  cbnz w11,0x71023bf70c
71023bf71c  cbnz x9,0x71023bf738
71023bf720  ldr x8,[x20]
71023bf724  ldr x8,[x8, #0x10]
71023bf728  mov x0,x20
71023bf72c  blr x8
71023bf730  mov x0,x20
71023bf734  bl 0x71039c2670
71023bf738  cmp w21,#0x1
71023bf73c  b.ne 0x71023bed80
71023bf740  b 0x71023bfce4
71023bf744  ldr x8,[x19, #0x580]
71023bf748  ldr x8,[x8]
71023bf74c  cbz x8,0x71023bf7e4
71023bf750  ldr x8,[x8]
71023bf754  ldr x8,[x8, #0xa0]
71023bf758  ldr x8,[x8]
71023bf75c  ldr x8,[x8]
71023bf760  ldr x8,[x8, #0x338]
71023bf764  ldr x21,[x8]
71023bf768  ldr x0,[x21, #0x8]
71023bf76c  cbz x0,0x71023bf7e4
71023bf770  mov x1,sp
71023bf774  mov w2,#0x1
71023bf778  str xzr,[sp]
71023bf77c  bl 0x7102405040
71023bf780  cmn w0,#0x1
71023bf784  b.eq 0x71023bf7e4
71023bf788  mov w20,w0
71023bf78c  cmp w0,#0x18
71023bf790  b.hi 0x71023bf7cc
71023bf794  ldr x8,[x21, #0x8]
71023bf798  mov w9,#0x50
71023bf79c  smaddl x8,w20,w9,x8
71023bf7a0  ldr x0,[x8, #0x68]
71023bf7a4  ldr x8,[x0]
71023bf7a8  cbz x8,0x71023bf7cc
71023bf7ac  ldr w9,[x0, #0x8]
71023bf7b0  cmn w9,#0x1
71023bf7b4  b.eq 0x71023bf7cc
71023bf7b8  ldr w8,[x8, #0x20]
71023bf7bc  cmp w9,w8
71023bf7c0  b.ne 0x71023bf7cc
71023bf7c4  add x1,x19,#0xb30
71023bf7c8  bl 0x7103736cf0
71023bf7cc  ldr x0,[x21, #0x8]
71023bf7d0  ldr x8,[x0]
71023bf7d4  ldr x8,[x8, #0x58]
71023bf7d8  orr w1,wzr,#0x78
71023bf7dc  mov w2,w20
71023bf7e0  blr x8
71023bf7e4  ldr w8,[x19, #0x2d4]
71023bf7e8  cmp w8,#0x11
71023bf7ec  b.gt 0x71023bed80
71023bf7f0  add w8,w8,#0x1
71023bf7f4  cmp w8,#0x13
71023bf7f8  str w8,[x19, #0x2d4]
71023bf7fc  b.cs 0x71023c17e0
71023bf800  add x8,x19,w8, SXTW  #0x2
71023bf804  mov w9,#0x23
71023bf808  str w9,[x8, #0x288]
71023bf80c  ldr w8,[x19, #0x2d4]
71023bf810  cmp w8,#0x11
71023bf814  b.gt 0x71023bed80
71023bf818  add w8,w8,#0x1
71023bf81c  cmp w8,#0x13
71023bf820  str w8,[x19, #0x2d4]
71023bf824  b.cs 0x71023c17e0
71023bf828  add x8,x19,w8, SXTW  #0x2
71023bf82c  mov w9,#0x21
71023bf830  str w9,[x8, #0x288]
71023bf834  ldr w8,[x19, #0x2d4]
71023bf838  cmp w8,#0x11
71023bf83c  b.gt 0x71023bed80
71023bf840  add w8,w8,#0x1
71023bf844  cmp w8,#0x13
71023bf848  str w8,[x19, #0x2d4]
71023bf84c  b.cs 0x71023c17e0
71023bf850  add x8,x19,w8, SXTW  #0x2
71023bf854  mov w9,#0x22
71023bf858  str w9,[x8, #0x288]
71023bf85c  b 0x71023bed80
71023bf860  lsr x21,x0,#0x20
71023bf864  cmp w21,#0x9
71023bf868  b.eq 0x71023bfd2c
71023bf86c  cbnz w21,0x71023bfd5c
71023bf870  ldr x8,[x19, #0x5b0]
71023bf874  ldr x9,[x8, #0x80]
71023bf878  ldr x8,[x9, #0x308]
71023bf87c  ldr x20,[x9, #0x310]
71023bf880  cbz x20,0x71023c0200
71023bf884  add x9,x20,#0x8
71023bf888  ldxr x10,[x9]
71023bf88c  add x10,x10,#0x1
71023bf890  stxr w11,x10,[x9]
71023bf894  cbnz w11,0x71023bf888
71023bf898  ldr x0,[x8]
71023bf89c  mov w1,#0x65
71023bf8a0  bl 0x7101ed2000
71023bf8a4  add x8,x20,#0x8
71023bf8a8  ldaxr x9,[x8]
71023bf8ac  sub x10,x9,#0x1
71023bf8b0  stlxr w11,x10,[x8]
71023bf8b4  cbnz w11,0x71023bf8a8
71023bf8b8  cbnz x9,0x71023c020c
71023bf8bc  ldr x8,[x20]
71023bf8c0  ldr x8,[x8, #0x10]
71023bf8c4  mov x0,x20
71023bf8c8  blr x8
71023bf8cc  mov x0,x20
71023bf8d0  bl 0x71039c2670
71023bf8d4  b 0x71023c020c
71023bf8d8  ldr w8,[x19, #0x2d4]
71023bf8dc  cmp w8,#0x11
71023bf8e0  b.gt 0x71023bed80
71023bf8e4  add w8,w8,#0x1
71023bf8e8  cmp w8,#0x13
71023bf8ec  str w8,[x19, #0x2d4]
71023bf8f0  b.cs 0x71023c17e0
71023bf8f4  add x8,x19,w8, SXTW  #0x2
71023bf8f8  mov w9,#0x20
71023bf8fc  str w9,[x8, #0x288]
71023bf900  ldr w8,[x19, #0x2d4]
71023bf904  cmp w8,#0x11
71023bf908  b.gt 0x71023bed80
71023bf90c  add w8,w8,#0x1
71023bf910  cmp w8,#0x13
71023bf914  str w8,[x19, #0x2d4]
71023bf918  b.cs 0x71023c17e0
71023bf91c  add x8,x19,w8, SXTW  #0x2
71023bf920  orr w9,wzr,#0x1e
71023bf924  str w9,[x8, #0x288]
71023bf928  ldr w8,[x19, #0x2d4]
71023bf92c  cmp w8,#0x11
71023bf930  b.gt 0x71023bed80
71023bf934  add w8,w8,#0x1
71023bf938  cmp w8,#0x13
71023bf93c  str w8,[x19, #0x2d4]
71023bf940  b.cs 0x71023c17e0
71023bf944  add x8,x19,w8, SXTW  #0x2
71023bf948  orr w9,wzr,#0x1f
71023bf94c  str w9,[x8, #0x288]
71023bf950  b 0x71023bed80
71023bf954  ldr x8,[x19, #0x580]
71023bf958  ldr x0,[x8]
71023bf95c  cbz x0,0x71023bed80
71023bf960  ldr x8,[x0, #0x8]
71023bf964  ldr x9,[x8, #0x88]
71023bf968  cbnz x9,0x71023bf974
71023bf96c  ldr x8,[x8, #0x58]
71023bf970  cbz x8,0x71023bed80
71023bf974  ldrb w8,[x0, #0x38]
71023bf978  cbnz w8,0x71023bed80
71023bf97c  ldr x8,[x0, #0x128]
71023bf980  ldrb w8,[x8, #0x8]
71023bf984  cbnz w8,0x71023bed80
71023bf988  ldr x8,[x0]
71023bf98c  ldr x8,[x8, #0xa0]
71023bf990  ldr x8,[x8]
71023bf994  ldr x8,[x8]
71023bf998  ldr x8,[x8, #0x338]
71023bf99c  ldr x21,[x8]
71023bf9a0  ldr x8,[x21, #0x8]
71023bf9a4  cbz x8,0x71023bfa2c
71023bf9a8  mov x1,sp
71023bf9ac  mov w2,#0x1
71023bf9b0  mov x0,x8
71023bf9b4  str xzr,[sp]
71023bf9b8  bl 0x7102405040
71023bf9bc  cmn w0,#0x1
71023bf9c0  b.eq 0x71023bfa20
71023bf9c4  mov w20,w0
71023bf9c8  cmp w0,#0x18
71023bf9cc  b.hi 0x71023bfa08
71023bf9d0  ldr x8,[x21, #0x8]
71023bf9d4  mov w9,#0x50
71023bf9d8  smaddl x8,w20,w9,x8
71023bf9dc  ldr x0,[x8, #0x68]
71023bf9e0  ldr x8,[x0]
71023bf9e4  cbz x8,0x71023bfa08
71023bf9e8  ldr w9,[x0, #0x8]
71023bf9ec  cmn w9,#0x1
71023bf9f0  b.eq 0x71023bfa08
71023bf9f4  ldr w8,[x8, #0x20]
71023bf9f8  cmp w9,w8
71023bf9fc  b.ne 0x71023bfa08
71023bfa00  add x1,x19,#0xb30
71023bfa04  bl 0x7103736cf0
71023bfa08  ldr x0,[x21, #0x8]
71023bfa0c  ldr x8,[x0]
71023bfa10  ldr x8,[x8, #0x58]
71023bfa14  mov w1,#0x2
71023bfa18  mov w2,w20
71023bfa1c  blr x8
71023bfa20  ldr x8,[x19, #0x580]
71023bfa24  ldr x0,[x8]
71023bfa28  cbz x0,0x71023bed80
71023bfa2c  bl 0x71031a00e0
71023bfa30  b 0x71023bed80
71023bfa34  cmp w1,#0x6
71023bfa38  b.lt 0x71023bfc20
71023bfa3c  mov x0,x19
71023bfa40  bl 0x71023cb560
71023bfa44  ldr x8,[x19, #0x580]
71023bfa48  ldr x8,[x8]
71023bfa4c  cbz x8,0x71023bed80
71023bfa50  ldr x9,[x19, #0x5b0]
71023bfa54  ldr x9,[x9, #0x80]
71023bfa58  ldr x9,[x9, #0x358]
71023bfa5c  ldr x8,[x8]
71023bfa60  ldr x8,[x8, #0x68]
71023bfa64  ldr w9,[x9, #0x1e8]
71023bfa68  str w9,[x8, #0x290]
71023bfa6c  b 0x71023bed80
71023bfa70  mov w8,#0x1
71023bfa74  strb w8,[x19, #0xd69]
71023bfa78  b 0x71023bed80
71023bfa7c  ldr x8,[x19, #0x5b0]
71023bfa80  ldr x22,[x8, #0x80]
71023bfa84  ldrb w8,[x22, #0x278]
71023bfa88  ldr x24,[x22, #0x318]
71023bfa8c  eor w23,w8,#0x1
71023bfa90  strb w23,[x22, #0x278]
71023bfa94  ldr x9,[x24, #0x10]
71023bfa98  strb w23,[x24, #0x161]
71023bfa9c  ldr w10,[x24, #0xb8]
71023bfaa0  add x8,x9,#0x1b8
71023bfaa4  ldr x9,[x9, #0x1b8]
71023bfaa8  cbz w10,0x71023bfe0c
71023bfaac  cbz x9,0x71023bfc34
71023bfab0  mov x10,x8
71023bfab4  mov x11,x9
71023bfab8  ldr w12,[x11, #0x20]
71023bfabc  cmp w12,#0x1
71023bfac0  cset w12,lt
71023bfac4  csel x10,x10,x11,lt
71023bfac8  ldr x11,[x11, w12, UXTW #0x3]
71023bfacc  cbnz x11,0x71023bfab8
71023bfad0  cmp x10,x8
71023bfad4  b.eq 0x71023bfc34
71023bfad8  ldr w11,[x10, #0x20]
71023bfadc  cmp w11,#0x1
71023bfae0  b.gt 0x71023bfc34
71023bfae4  ldr x0,[x10, #0x28]
71023bfae8  cbz x0,0x71023bfc34
71023bfaec  ldr x8,[x0]
71023bfaf0  ldr x8,[x8, #0x200]
71023bfaf4  tst w23,#0xff
71023bfaf8  cset w20,ne
71023bfafc  blr x8
71023bfb00  eor w8,w0,w20
71023bfb04  tbz w8,#0x0,0x71023c0550
71023bfb08  ldr x9,[x24, #0x10]
71023bfb0c  add x8,x9,#0x1b8
71023bfb10  ldr x9,[x9, #0x1b8]
71023bfb14  cbnz x9,0x71023bfc40
71023bfb18  b 0x71023c0550
71023bfb1c  mov w8,#0x1
71023bfb20  str w8,[x19, #0xd40]
71023bfb24  cbz x20,0x71023bf254
71023bfb28  add x8,x20,#0x8
71023bfb2c  ldaxr x9,[x8]
71023bfb30  sub x10,x9,#0x1
71023bfb34  stlxr w11,x10,[x8]
71023bfb38  cbnz w11,0x71023bfb2c
71023bfb3c  cbnz x9,0x71023bf254
71023bfb40  ldr x8,[x20]
71023bfb44  ldr x8,[x8, #0x10]
71023bfb48  mov x0,x20
71023bfb4c  blr x8
71023bfb50  mov x0,x20
71023bfb54  bl 0x71039c2670
71023bfb58  b 0x71023bf254
71023bfb5c  mov w1,#0x5
71023bfb60  bl 0x7101ec4a30
71023bfb64  b 0x71023bed80
71023bfb68  mov x20,xzr
71023bfb6c  ldrb w8,[x0, #0x191]
71023bfb70  cbnz w8,0x71023bfbe4
71023bfb74  mov w2,#0x4
71023bfb78  mov x1,x20
71023bfb7c  bl 0x7103313f20
71023bfb80  tbz w0,#0x0,0x71023bfbe4
71023bfb84  add x0,sp,#0x90
71023bfb88  mov x1,x20
71023bfb8c  bl 0x71024076d0
71023bfb90  ldr x8,[sp, #0xa0]
71023bfb94  adrp x9,0x7104f73000
71023bfb98  add x9,x9,#0xd50
71023bfb9c  str x9,[sp, #0x98]
71023bfba0  cbz x8,0x71023bfc10
71023bfba4  adrp x8,0x7106dd5000
71023bfba8  ldrb w8,[x8, #0x3a8]
71023bfbac  cmp w8,#0x1
71023bfbb0  b.ne 0x71023bfc10
71023bfbb4  adrp x9,0x7106dd5000
71023bfbb8  ldr w8,[sp, #0xa8]
71023bfbbc  ldr w9,[x9, #0x3ac]
71023bfbc0  cmp w8,w9
71023bfbc4  b.ne 0x71023bfc10
71023bfbc8  ldr x8,[sp, #0xa0]
71023bfbcc  ldr wzr,[x8, #0x38]!
71023bfbd0  ldaxr w9,[x8]
71023bfbd4  sub w9,w9,#0x1
71023bfbd8  stlxr w10,w9,[x8]
71023bfbdc  cbnz w10,0x71023bfbd0
71023bfbe0  b 0x71023bfc10
71023bfbe4  mov x8,#0x650000000000
71023bfbe8  movk x8,#0x87, LSL #48
71023bfbec  strb wzr,[sp, #0xb0]
71023bfbf0  stp xzr,x8,[sp, #0xa0]
71023bfbf4  mov x8,#-0x1
71023bfbf8  stp x8,xzr,[sp, #0xb8]
71023bfbfc  adrp x8,0x7104f73000
71023bfc00  add x8,x8,#0xd50
71023bfc04  str wzr,[sp, #0x90]
71023bfc08  str xzr,[sp, #0xc8]
71023bfc0c  str x8,[sp, #0x98]
71023bfc10  mov w21,wzr
71023bfc14  str xzr,[sp, #0xa0]
71023bfc18  strb wzr,[sp, #0xb0]
71023bfc1c  b 0x71023c0cc8
71023bfc20  cmp w1,#0x2
71023bfc24  b.lt 0x71023bfec0
71023bfc28  mov x0,x19
71023bfc2c  bl 0x71023cb560
71023bfc30  b 0x71023bed80
71023bfc34  tst w23,#0xff
71023bfc38  b.eq 0x71023c0550
71023bfc3c  cbz x9,0x71023c0550
71023bfc40  mov x10,x8
71023bfc44  ldr w11,[x9, #0x20]
71023bfc48  cmp w11,#0x1
71023bfc4c  cset w11,lt
71023bfc50  csel x10,x10,x9,lt
71023bfc54  ldr x9,[x9, w11, UXTW #0x3]
71023bfc58  cbnz x9,0x71023bfc44
71023bfc5c  cmp x10,x8
71023bfc60  b.eq 0x71023c0550
71023bfc64  ldr w8,[x10, #0x20]
71023bfc68  cmp w8,#0x1
71023bfc6c  b.le 0x71023bfe80
71023bfc70  b 0x71023c0550
71023bfc74  ldr x8,[x19, #0x5b0]
71023bfc78  ldr x9,[x8, #0x80]
71023bfc7c  ldr x8,[x9, #0x318]
71023bfc80  ldr x20,[x9, #0x320]
71023bfc84  cbz x20,0x71023c00fc
71023bfc88  add x9,x20,#0x8
71023bfc8c  ldxr x10,[x9]
71023bfc90  add x10,x10,#0x1
71023bfc94  stxr w11,x10,[x9]
71023bfc98  cbnz w11,0x71023bfc8c
71023bfc9c  ldrb w21,[x8, #0x161]
71023bfca0  add x8,x20,#0x8
71023bfca4  ldaxr x9,[x8]
71023bfca8  sub x10,x9,#0x1
71023bfcac  stlxr w11,x10,[x8]
71023bfcb0  cbnz w11,0x71023bfca4
71023bfcb4  cbnz x9,0x71023bfcd0
71023bfcb8  ldr x8,[x20]
71023bfcbc  ldr x8,[x8, #0x10]
71023bfcc0  mov x0,x20
71023bfcc4  blr x8
71023bfcc8  mov x0,x20
71023bfccc  bl 0x71039c2670
71023bfcd0  cbnz w21,0x71023c0104
71023bfcd4  b 0x71023bed80
71023bfcd8  ldr w8,[x8, #0xb8]
71023bfcdc  cmp w8,#0x1
71023bfce0  b.ne 0x71023bed80
71023bfce4  ldr x8,[x19, #0x580]
71023bfce8  ldr x19,[x8]
71023bfcec  cbz x19,0x71023bed80
71023bfcf0  ldr x8,[x19]
71023bfcf4  ldr x0,[x8, #0x60]
71023bfcf8  add x1,x19,#0xa0
71023bfcfc  bl 0x7103192600
71023bfd00  str q0,[sp]
71023bfd04  ldrb w2,[x19, #0xb0]
71023bfd08  mov x1,sp
71023bfd0c  mov x0,x19
71023bfd10  bl 0x710319f6b0
71023bfd14  ldrb w2,[x19, #0xb0]
71023bfd18  ldrb w3,[x19, #0xb1]
71023bfd1c  mov x1,sp
71023bfd20  mov x0,x19
71023bfd24  bl 0x710319fb90
71023bfd28  b 0x71023bed80
71023bfd2c  ldr w8,[x19, #0x41c]
71023bfd30  cmp w8,#0x11
71023bfd34  b.gt 0x71023c0cc4
71023bfd38  add w8,w8,#0x1
71023bfd3c  cmp w8,#0x13
71023bfd40  str w8,[x19, #0x41c]
71023bfd44  b.cs 0x71023c17e0
71023bfd48  add x8,x19,w8, SXTW  #0x2
71023bfd4c  mov w9,#0xb
71023bfd50  mov w21,wzr
71023bfd54  str w9,[x8, #0x3d0]
71023bfd58  b 0x71023c0cc8
71023bfd5c  ldr w9,[x19, #0x420]
71023bfd60  add w8,w21,#0x1
71023bfd64  cmp w9,w8
71023bfd68  b.ne 0x71023bffec
71023bfd6c  ldr x8,[x19, #0x5b0]
71023bfd70  ldr x9,[x8, #0x80]
71023bfd74  ldr x8,[x9, #0x328]
71023bfd78  ldr x20,[x9, #0x330]
71023bfd7c  cbz x20,0x71023bfd94
71023bfd80  add x9,x20,#0x8
71023bfd84  ldxr x10,[x9]
71023bfd88  add x10,x10,#0x1
71023bfd8c  stxr w11,x10,[x9]
71023bfd90  cbnz w11,0x71023bfd84
71023bfd94  ldr x10,[x8, #0x20]!
71023bfd98  cbz x10,0x71023bfdcc
71023bfd9c  mov x9,x8
71023bfda0  ldr w11,[x10, #0x20]
71023bfda4  cmp w11,w21
71023bfda8  cset w11,lt
71023bfdac  csel x9,x9,x10,lt
71023bfdb0  ldr x10,[x10, w11, UXTW #0x3]
71023bfdb4  cbnz x10,0x71023bfda0
71023bfdb8  cmp x9,x8
71023bfdbc  b.eq 0x71023bfdcc
71023bfdc0  ldr w8,[x9, #0x20]
71023bfdc4  cmp w8,w21
71023bfdc8  b.le 0x71023c0c44
71023bfdcc  mov w22,wzr
71023bfdd0  cbz x20,0x71023c0c58
71023bfdd4  add x8,x20,#0x8
71023bfdd8  ldaxr x9,[x8]
71023bfddc  sub x10,x9,#0x1
71023bfde0  stlxr w11,x10,[x8]
71023bfde4  cbnz w11,0x71023bfdd8
71023bfde8  cbnz x9,0x71023c0c58
71023bfdec  ldr x8,[x20]
71023bfdf0  ldr x8,[x8, #0x10]
71023bfdf4  mov x0,x20
71023bfdf8  blr x8
71023bfdfc  mov x0,x20
71023bfe00  bl 0x71039c2670
71023bfe04  tbnz w22,#0x0,0x71023bed80
71023bfe08  b 0x71023c0c5c
71023bfe0c  cbz x9,0x71023bfe44
71023bfe10  mov x10,x8
71023bfe14  mov x11,x9
71023bfe18  ldr w12,[x11, #0x20]
71023bfe1c  cmp w12,#0x0
71023bfe20  cset w12,lt
71023bfe24  csel x10,x10,x11,lt
71023bfe28  ldr x11,[x11, w12, UXTW #0x3]
71023bfe2c  cbnz x11,0x71023bfe18
71023bfe30  cmp x10,x8
71023bfe34  b.eq 0x71023bfe44
71023bfe38  ldr w11,[x10, #0x20]
71023bfe3c  cmp w11,#0x0
71023bfe40  b.le 0x71023c051c
71023bfe44  tst w23,#0xff
71023bfe48  b.eq 0x71023c0550
71023bfe4c  cbz x9,0x71023c0550
71023bfe50  mov x10,x8
71023bfe54  ldr w11,[x9, #0x20]
71023bfe58  cmp w11,#0x0
71023bfe5c  cset w11,lt
71023bfe60  csel x10,x10,x9,lt
71023bfe64  ldr x9,[x9, w11, UXTW #0x3]
71023bfe68  cbnz x9,0x71023bfe54
71023bfe6c  cmp x10,x8
71023bfe70  b.eq 0x71023c0550
71023bfe74  ldr w8,[x10, #0x20]
71023bfe78  cmp w8,#0x0
71023bfe7c  b.gt 0x71023c0550
71023bfe80  ldr x20,[x10, #0x28]
71023bfe84  cbz x20,0x71023c0550
71023bfe88  ldr x8,[x20]
71023bfe8c  ldr x8,[x8, #0x1f8]
71023bfe90  tst w23,#0xff
71023bfe94  cset w1,ne
71023bfe98  mov x0,x20
71023bfe9c  cset w21,eq
71023bfea0  blr x8
71023bfea4  ldr x8,[x20]
71023bfea8  ldr x8,[x8, #0x388]
71023bfeac  mov x0,x20
71023bfeb0  mov w1,w21
71023bfeb4  mov w2,wzr
71023bfeb8  blr x8
71023bfebc  b 0x71023c0550
71023bfec0  cmp w1,#0x1
71023bfec4  b.eq 0x71023c0370
71023bfec8  cbnz w1,0x71023bed80
71023bfecc  ldrb w9,[x19, #0xd64]
71023bfed0  eor w8,w9,#0x1
71023bfed4  strb w8,[x19, #0xd64]
71023bfed8  ldr x8,[x19, #0x580]
71023bfedc  ldr x8,[x8]
71023bfee0  cbz w9,0x71023c122c
71023bfee4  cbz x8,0x71023bed80
71023bfee8  ldr x9,[x8, #0x110]
71023bfeec  cbz x9,0x71023bfefc
71023bfef0  strb wzr,[x9, #0x70]
71023bfef4  ldr x9,[x8, #0x110]
71023bfef8  strb wzr,[x9, #0x71]
71023bfefc  ldr x8,[x8]
71023bff00  ldr x8,[x8, #0x60]
71023bff04  strb wzr,[x8, #0xd]
71023bff08  ldr x8,[x19, #0x580]
71023bff0c  ldr x8,[x8]
71023bff10  cbz x8,0x71023bed80
71023bff14  ldr x8,[x8]
71023bff18  ldr x8,[x8, #0xa0]
71023bff1c  ldr x8,[x8]
71023bff20  ldr x8,[x8]
71023bff24  ldr x8,[x8, #0x338]
71023bff28  ldr x21,[x8]
71023bff2c  ldr x0,[x21, #0x8]
71023bff30  cbz x0,0x71023bed80
71023bff34  mov x1,sp
71023bff38  mov w2,#0x1
71023bff3c  str xzr,[sp]
71023bff40  bl 0x7102405040
71023bff44  cmn w0,#0x1
71023bff48  b.eq 0x71023bed80
71023bff4c  mov w20,w0
71023bff50  cmp w0,#0x18
71023bff54  b.hi 0x71023c0500
71023bff58  ldr x8,[x21, #0x8]
71023bff5c  mov w9,#0x50
71023bff60  smaddl x8,w20,w9,x8
71023bff64  ldr x0,[x8, #0x68]
71023bff68  ldr x8,[x0]
71023bff6c  cbz x8,0x71023c0500
71023bff70  ldr w9,[x0, #0x8]
71023bff74  cmn w9,#0x1
71023bff78  b.eq 0x71023c0500
71023bff7c  ldr w8,[x8, #0x20]
71023bff80  cmp w9,w8
71023bff84  b.ne 0x71023c0500
71023bff88  add x1,x19,#0xb30
71023bff8c  b 0x71023c04fc
71023bff90  ldrb w20,[x19, #0xd64]
71023bff94  eor w8,w20,#0x1
71023bff98  strb w8,[x19, #0xd64]
71023bff9c  ldr x8,[x19, #0x5b0]
71023bffa0  ldr x8,[x8, #0x80]
71023bffa4  ldr x0,[x8, #0x358]
71023bffa8  cmp w20,#0x0
71023bffac  cset w2,eq
71023bffb0  mov w1,wzr
71023bffb4  bl 0x7101ec4b50
71023bffb8  ldr x8,[x19, #0x580]
71023bffbc  ldr x8,[x8]
71023bffc0  cbz w20,0x71023c03a4
71023bffc4  cbz x8,0x71023c03d8
71023bffc8  ldr x9,[x8, #0x110]
71023bffcc  cbz x9,0x71023bffdc
71023bffd0  strb wzr,[x9, #0x70]
71023bffd4  ldr x9,[x8, #0x110]
71023bffd8  strb wzr,[x9, #0x71]
71023bffdc  ldr x8,[x8]
71023bffe0  ldr x8,[x8, #0x60]
71023bffe4  strb wzr,[x8, #0xd]
71023bffe8  b 0x71023c03d8
71023bffec  ldrsw x9,[x19, #0x41c]
71023bfff0  cmp w9,#0x13
71023bfff4  b.cs 0x71023c17e0
71023bfff8  add x9,x19,x9, LSL #0x2
71023bfffc  str w8,[x9, #0x3d0]
71023c0000  ldr w8,[x19, #0x41c]
71023c0004  cmp w8,#0x11
71023c0008  b.gt 0x71023c0050
71023c000c  add w8,w8,#0x1
71023c0010  cmp w8,#0x13
71023c0014  str w8,[x19, #0x41c]
71023c0018  b.cs 0x71023c17e0
71023c001c  add x8,x19,w8, SXTW  #0x2
71023c0020  mov w9,#0x9
71023c0024  str w9,[x8, #0x3d0]
71023c0028  ldr w8,[x19, #0x41c]
71023c002c  cmp w8,#0x11
71023c0030  b.gt 0x71023c0050
71023c0034  add w8,w8,#0x1
71023c0038  cmp w8,#0x13
71023c003c  str w8,[x19, #0x41c]
71023c0040  b.cs 0x71023c17e0
71023c0044  add x8,x19,w8, SXTW  #0x2
71023c0048  mov w9,#0xa
71023c004c  str w9,[x8, #0x3d0]
71023c0050  cmp w21,#0x7
71023c0054  b.hi 0x71023c0080
71023c0058  ldr x8,[x19, #0x6a0]
71023c005c  ldr x8,[x8]
71023c0060  cbz x8,0x71023c0080
71023c0064  and x9,x0,#-0x100000000
71023c0068  adrp x10,0x7104471000
71023c006c  add x10,x10,#0xa0
71023c0070  asr x9,x9,#0x1e
71023c0074  ldr w1,[x10, x9, LSL #0x0]
71023c0078  mov x0,x8
71023c007c  bl 0x71031a5d40
71023c0080  sub w8,w21,#0x1
71023c0084  cmp w8,#0x6
71023c0088  b.hi 0x71023c16e4
71023c008c  adrp x9,0x71044fd000
71023c0090  add x9,x9,#0xfe8
71023c0094  ldrsw x8,[x9, x8, LSL #0x2]
71023c0098  add x8,x8,x9
71023c009c  br x8
71023c00a0  ldr x8,[x19, #0x5b0]
71023c00a4  ldr x10,[x8, #0x80]
71023c00a8  ldr w9,[x19, #0x6f4]
71023c00ac  cmp w9,#0x3
71023c00b0  ldr x8,[x10, #0x308]
71023c00b4  ldr x20,[x10, #0x310]
71023c00b8  b.ne 0x71023c15cc
71023c00bc  cbz x20,0x71023c16a4
71023c00c0  add x9,x20,#0x8
71023c00c4  ldxr x10,[x9]
71023c00c8  add x10,x10,#0x1
71023c00cc  stxr w11,x10,[x9]
71023c00d0  cbnz w11,0x71023c00c4
71023c00d4  ldr x0,[x8]
71023c00d8  mov w1,#0x15
71023c00dc  movk w1,#0x100, LSL #16
71023c00e0  bl 0x7101ed2000
71023c00e4  add x8,x20,#0x8
71023c00e8  ldaxr x9,[x8]
71023c00ec  sub x10,x9,#0x1
71023c00f0  stlxr w11,x10,[x8]
71023c00f4  cbnz w11,0x71023c00e8
71023c00f8  b 0x71023c1604
71023c00fc  ldrb w8,[x8, #0x161]
71023c0100  cbz w8,0x71023bed80
71023c0104  ldr x8,[x19, #0x5b0]
71023c0108  ldr x8,[x8, #0x80]
71023c010c  ldr x8,[x8, #0x358]
71023c0110  ldrb w9,[x8, #0x1ec]
71023c0114  ldr w8,[x19, #0x2d4]
71023c0118  cmp w8,#0x11
71023c011c  cbz w9,0x71023c0288
71023c0120  b.gt 0x71023c0140
71023c0124  add w8,w8,#0x1
71023c0128  cmp w8,#0x13
71023c012c  str w8,[x19, #0x2d4]
71023c0130  b.cs 0x71023c17e0
71023c0134  add x8,x19,w8, SXTW  #0x2
71023c0138  orr w9,wzr,#0x7
71023c013c  str w9,[x8, #0x288]
71023c0140  ldr x8,[x19, #0xb38]
71023c0144  str x8,[sp, #0x8]
71023c0148  ldr x8,[x19, #0xb30]
71023c014c  str x8,[sp]
71023c0150  ldr q0,[sp]
71023c0154  fmov s1,0x40000000
71023c0158  fadd s1,s0,s1
71023c015c  mov v0.S[0x0],v1.S[0x0]
71023c0160  str q0,[sp]
71023c0164  ldr x8,[x19, #0x580]
71023c0168  ldr x8,[x8]
71023c016c  cbz x8,0x71023bed80
71023c0170  ldr x8,[x8]
71023c0174  ldr x8,[x8, #0xa0]
71023c0178  ldr x8,[x8]
71023c017c  ldr x8,[x8]
71023c0180  ldr x8,[x8, #0x338]
71023c0184  ldr x20,[x8]
71023c0188  ldr x0,[x20, #0x8]
71023c018c  cbz x0,0x71023bed80
71023c0190  sub x1,x29,#0x38
71023c0194  mov w2,#0x1
71023c0198  stur xzr,[x29, #-0x38]
71023c019c  bl 0x7102405040
71023c01a0  cmn w0,#0x1
71023c01a4  b.eq 0x71023bed80
71023c01a8  mov w19,w0
71023c01ac  cmp w0,#0x18
71023c01b0  b.hi 0x71023c01ec
71023c01b4  ldr x8,[x20, #0x8]
71023c01b8  mov w9,#0x50
71023c01bc  smaddl x8,w19,w9,x8
71023c01c0  ldr x0,[x8, #0x68]
71023c01c4  ldr x8,[x0]
71023c01c8  cbz x8,0x71023c01ec
71023c01cc  ldr w9,[x0, #0x8]
71023c01d0  cmn w9,#0x1
71023c01d4  b.eq 0x71023c01ec
71023c01d8  ldr w8,[x8, #0x20]
71023c01dc  cmp w9,w8
71023c01e0  b.ne 0x71023c01ec
71023c01e4  mov x1,sp
71023c01e8  bl 0x7103736cf0
71023c01ec  ldr x0,[x20, #0x8]
71023c01f0  ldr x8,[x0]
71023c01f4  ldr x8,[x8, #0x58]
71023c01f8  mov w1,#0x1
71023c01fc  b 0x71023c0364
71023c0200  ldr x0,[x8]
71023c0204  mov w1,#0x65
71023c0208  bl 0x7101ed2000
71023c020c  ldr w8,[x19, #0x2d4]
71023c0210  cmp w8,#0x11
71023c0214  b.gt 0x71023bed80
71023c0218  add w8,w8,#0x1
71023c021c  cmp w8,#0x13
71023c0220  str w8,[x19, #0x2d4]
71023c0224  b.cs 0x71023c17e0
71023c0228  add x8,x19,w8, SXTW  #0x2
71023c022c  mov w9,#0xd
71023c0230  str w9,[x8, #0x288]
71023c0234  ldr w8,[x19, #0x2d4]
71023c0238  cmp w8,#0x11
71023c023c  b.gt 0x71023bed80
71023c0240  add w8,w8,#0x1
71023c0244  cmp w8,#0x13
71023c0248  str w8,[x19, #0x2d4]
71023c024c  b.cs 0x71023c17e0
71023c0250  add x8,x19,w8, SXTW  #0x2
71023c0254  mov w9,#0x8
71023c0258  str w9,[x8, #0x288]
71023c025c  ldr w8,[x19, #0x2d4]
71023c0260  cmp w8,#0x11
71023c0264  b.gt 0x71023bed80
71023c0268  add w8,w8,#0x1
71023c026c  cmp w8,#0x13
71023c0270  str w8,[x19, #0x2d4]
71023c0274  b.cs 0x71023c17e0
71023c0278  add x8,x19,w8, SXTW  #0x2
71023c027c  orr w9,wzr,#0xc
71023c0280  str w9,[x8, #0x288]
71023c0284  b 0x71023bed80
71023c0288  b.gt 0x71023c02a8
71023c028c  add w8,w8,#0x1
71023c0290  cmp w8,#0x13
71023c0294  str w8,[x19, #0x2d4]
71023c0298  b.cs 0x71023c17e0
71023c029c  add x8,x19,w8, SXTW  #0x2
71023c02a0  orr w9,wzr,#0x6
71023c02a4  str w9,[x8, #0x288]
71023c02a8  ldr x8,[x19, #0xb38]
71023c02ac  str x8,[sp, #0x8]
71023c02b0  ldr x8,[x19, #0xb30]
71023c02b4  str x8,[sp]
71023c02b8  ldr q0,[sp]
71023c02bc  fmov s1,0x40000000
71023c02c0  fadd s1,s0,s1
71023c02c4  mov v0.S[0x0],v1.S[0x0]
71023c02c8  str q0,[sp]
71023c02cc  ldr x8,[x19, #0x580]
71023c02d0  ldr x8,[x8]
71023c02d4  cbz x8,0x71023bed80
71023c02d8  ldr x8,[x8]
71023c02dc  ldr x8,[x8, #0xa0]
71023c02e0  ldr x8,[x8]
71023c02e4  ldr x8,[x8]
71023c02e8  ldr x8,[x8, #0x338]
71023c02ec  ldr x20,[x8]
71023c02f0  ldr x0,[x20, #0x8]
71023c02f4  cbz x0,0x71023bed80
71023c02f8  sub x1,x29,#0x38
71023c02fc  mov w2,#0x1
71023c0300  stur xzr,[x29, #-0x38]
71023c0304  bl 0x7102405040
71023c0308  cmn w0,#0x1
71023c030c  b.eq 0x71023bed80
71023c0310  mov w19,w0
71023c0314  cmp w0,#0x18
71023c0318  b.hi 0x71023c0354
71023c031c  ldr x8,[x20, #0x8]
71023c0320  mov w9,#0x50
71023c0324  smaddl x8,w19,w9,x8
71023c0328  ldr x0,[x8, #0x68]
71023c032c  ldr x8,[x0]
71023c0330  cbz x8,0x71023c0354
71023c0334  ldr w9,[x0, #0x8]
71023c0338  cmn w9,#0x1
71023c033c  b.eq 0x71023c0354
71023c0340  ldr w8,[x8, #0x20]
71023c0344  cmp w9,w8
71023c0348  b.ne 0x71023c0354
71023c034c  mov x1,sp
71023c0350  bl 0x7103736cf0
71023c0354  ldr x0,[x20, #0x8]
71023c0358  ldr x8,[x0]
71023c035c  ldr x8,[x8, #0x58]
71023c0360  mov w1,wzr
71023c0364  mov w2,w19
71023c0368  blr x8
71023c036c  b 0x71023bed80
71023c0370  ldr x8,[x19, #0x5b0]
71023c0374  ldr x8,[x8, #0x80]
71023c0378  ldr x0,[x8, #0x358]
71023c037c  bl 0x7101ec4c90
71023c0380  ldr x8,[x19, #0x580]
71023c0384  ldr x8,[x8]
71023c0388  tbz w0,#0x0,0x71023c0c04
71023c038c  cbz x8,0x71023bed80
71023c0390  ldr x8,[x8]
71023c0394  ldr x8,[x8, #0x68]
71023c0398  mov w9,#0x1
71023c039c  strb w9,[x8, #0x294]
71023c03a0  b 0x71023bed80
71023c03a4  cbz x8,0x71023c03d0
71023c03a8  ldr x9,[x8, #0x110]
71023c03ac  cbz x9,0x71023c03c0
71023c03b0  mov w10,#0x1
71023c03b4  strb w10,[x9, #0x70]
71023c03b8  ldr x9,[x8, #0x110]
71023c03bc  strb w10,[x9, #0x71]
71023c03c0  ldr x8,[x8]
71023c03c4  ldr x8,[x8, #0x60]
71023c03c8  mov w9,#0x1
71023c03cc  strb w9,[x8, #0xd]
71023c03d0  mov w8,#0x1
71023c03d4  strb w8,[x19, #0xab9]
71023c03d8  ldr x8,[x19, #0x580]
71023c03dc  ldrb w9,[x19, #0xd64]
71023c03e0  add x19,x19,#0xb30
71023c03e4  ldr x8,[x8]
71023c03e8  cbz w9,0x71023c0480
71023c03ec  cbz x8,0x71023bed80
71023c03f0  ldr x8,[x8]
71023c03f4  ldr x8,[x8, #0xa0]
71023c03f8  ldr x8,[x8]
71023c03fc  ldr x8,[x8]
71023c0400  ldr x8,[x8, #0x338]
71023c0404  ldr x21,[x8]
71023c0408  ldr x0,[x21, #0x8]
71023c040c  cbz x0,0x71023bed80
71023c0410  mov x1,sp
71023c0414  mov w2,#0x1
71023c0418  str xzr,[sp]
71023c041c  bl 0x7102405040
71023c0420  cmn w0,#0x1
71023c0424  b.eq 0x71023bed80
71023c0428  mov w20,w0
71023c042c  cmp w0,#0x18
71023c0430  b.hi 0x71023c046c
71023c0434  ldr x8,[x21, #0x8]
71023c0438  mov w9,#0x50
71023c043c  smaddl x8,w20,w9,x8
71023c0440  ldr x0,[x8, #0x68]
71023c0444  ldr x8,[x0]
71023c0448  cbz x8,0x71023c046c
71023c044c  ldr w9,[x0, #0x8]
71023c0450  cmn w9,#0x1
71023c0454  b.eq 0x71023c046c
71023c0458  ldr w8,[x8, #0x20]
71023c045c  cmp w9,w8
71023c0460  b.ne 0x71023c046c
71023c0464  mov x1,x19
71023c0468  bl 0x7103736cf0
71023c046c  ldr x0,[x21, #0x8]
71023c0470  ldr x8,[x0]
71023c0474  ldr x8,[x8, #0x58]
71023c0478  mov w1,#0x4
71023c047c  b 0x71023c0510
71023c0480  cbz x8,0x71023bed80
71023c0484  ldr x8,[x8]
71023c0488  ldr x8,[x8, #0xa0]
71023c048c  ldr x8,[x8]
71023c0490  ldr x8,[x8]
71023c0494  ldr x8,[x8, #0x338]
71023c0498  ldr x21,[x8]
71023c049c  ldr x0,[x21, #0x8]
71023c04a0  cbz x0,0x71023bed80
71023c04a4  mov x1,sp
71023c04a8  mov w2,#0x1
71023c04ac  str xzr,[sp]
71023c04b0  bl 0x7102405040
71023c04b4  cmn w0,#0x1
71023c04b8  b.eq 0x71023bed80
71023c04bc  mov w20,w0
71023c04c0  cmp w0,#0x18
71023c04c4  b.hi 0x71023c0500
71023c04c8  ldr x8,[x21, #0x8]
71023c04cc  mov w9,#0x50
71023c04d0  smaddl x8,w20,w9,x8
71023c04d4  ldr x0,[x8, #0x68]
71023c04d8  ldr x8,[x0]
71023c04dc  cbz x8,0x71023c0500
71023c04e0  ldr w9,[x0, #0x8]
71023c04e4  cmn w9,#0x1
71023c04e8  b.eq 0x71023c0500
71023c04ec  ldr w8,[x8, #0x20]
71023c04f0  cmp w9,w8
71023c04f4  b.ne 0x71023c0500
71023c04f8  mov x1,x19
71023c04fc  bl 0x7103736cf0
71023c0500  ldr x0,[x21, #0x8]
71023c0504  ldr x8,[x0]
71023c0508  ldr x8,[x8, #0x58]
71023c050c  mov w1,#0x5
71023c0510  mov w2,w20
71023c0514  blr x8
71023c0518  b 0x71023bed80
71023c051c  ldr x0,[x10, #0x28]
71023c0520  cbz x0,0x71023bfe44
71023c0524  ldr x8,[x0]
71023c0528  ldr x8,[x8, #0x200]
71023c052c  tst w23,#0xff
71023c0530  cset w20,ne
71023c0534  blr x8
71023c0538  eor w8,w0,w20
71023c053c  tbz w8,#0x0,0x71023c0550
71023c0540  ldr x9,[x24, #0x10]
71023c0544  add x8,x9,#0x1b8
71023c0548  ldr x9,[x9, #0x1b8]
71023c054c  cbnz x9,0x71023bfe50
71023c0550  ldr x9,[x24, #0x10]
71023c0554  add x8,x9,#0x1b8
71023c0558  ldr x9,[x9, #0x1b8]
71023c055c  cbz x9,0x71023c05cc
71023c0560  mov x10,x8
71023c0564  mov x11,x9
71023c0568  ldr w12,[x11, #0x20]
71023c056c  cmp w12,#0x2
71023c0570  cset w12,lt
71023c0574  csel x10,x10,x11,lt
71023c0578  ldr x11,[x11, w12, UXTW #0x3]
71023c057c  cbnz x11,0x71023c0568
71023c0580  cmp x10,x8
71023c0584  b.eq 0x71023c05cc
71023c0588  ldr w11,[x10, #0x20]
71023c058c  cmp w11,#0x2
71023c0590  b.gt 0x71023c05cc
71023c0594  ldr x0,[x10, #0x28]
71023c0598  cbz x0,0x71023c05cc
71023c059c  ldr x8,[x0]
71023c05a0  ldr x8,[x8, #0x200]
71023c05a4  tst w23,#0xff
71023c05a8  cset w20,ne
71023c05ac  blr x8
71023c05b0  eor w8,w0,w20
71023c05b4  tbz w8,#0x0,0x71023c0644
71023c05b8  ldr x9,[x24, #0x10]
71023c05bc  add x8,x9,#0x1b8
71023c05c0  ldr x9,[x9, #0x1b8]
71023c05c4  cbnz x9,0x71023c05d8
71023c05c8  b 0x71023c0644
71023c05cc  tst w23,#0xff
71023c05d0  b.eq 0x71023c0644
71023c05d4  cbz x9,0x71023c0644
71023c05d8  mov x10,x8
71023c05dc  ldr w11,[x9, #0x20]
71023c05e0  cmp w11,#0x2
71023c05e4  cset w11,lt
71023c05e8  csel x10,x10,x9,lt
71023c05ec  ldr x9,[x9, w11, UXTW #0x3]
71023c05f0  cbnz x9,0x71023c05dc
71023c05f4  cmp x10,x8
71023c05f8  b.eq 0x71023c0644
71023c05fc  ldr w8,[x10, #0x20]
71023c0600  cmp w8,#0x2
71023c0604  b.gt 0x71023c0644
71023c0608  ldr x20,[x10, #0x28]
71023c060c  cbz x20,0x71023c0644
71023c0610  ldr x8,[x20]
71023c0614  ldr x8,[x8, #0x1f8]
71023c0618  tst w23,#0xff
71023c061c  cset w1,ne
71023c0620  mov x0,x20
71023c0624  cset w21,eq
71023c0628  blr x8
71023c062c  ldr x8,[x20]
71023c0630  ldr x8,[x8, #0x388]
71023c0634  mov x0,x20
71023c0638  mov w1,w21
71023c063c  mov w2,wzr
71023c0640  blr x8
71023c0644  ldr x9,[x24, #0x10]
71023c0648  add x8,x9,#0x1b8
71023c064c  ldr x9,[x9, #0x1b8]
71023c0650  cbz x9,0x71023c06c0
71023c0654  mov x10,x8
71023c0658  mov x11,x9
71023c065c  ldr w12,[x11, #0x20]
71023c0660  cmp w12,#0x3
71023c0664  cset w12,lt
71023c0668  csel x10,x10,x11,lt
71023c066c  ldr x11,[x11, w12, UXTW #0x3]
71023c0670  cbnz x11,0x71023c065c
71023c0674  cmp x10,x8
71023c0678  b.eq 0x71023c06c0
71023c067c  ldr w11,[x10, #0x20]
71023c0680  cmp w11,#0x3
71023c0684  b.gt 0x71023c06c0
71023c0688  ldr x0,[x10, #0x28]
71023c068c  cbz x0,0x71023c06c0
71023c0690  ldr x8,[x0]
71023c0694  ldr x8,[x8, #0x200]
71023c0698  tst w23,#0xff
71023c069c  cset w20,ne
71023c06a0  blr x8
71023c06a4  eor w8,w0,w20
71023c06a8  tbz w8,#0x0,0x71023c0738
71023c06ac  ldr x9,[x24, #0x10]
71023c06b0  add x8,x9,#0x1b8
71023c06b4  ldr x9,[x9, #0x1b8]
71023c06b8  cbnz x9,0x71023c06cc
71023c06bc  b 0x71023c0738
71023c06c0  tst w23,#0xff
71023c06c4  b.eq 0x71023c0738
71023c06c8  cbz x9,0x71023c0738
71023c06cc  mov x10,x8
71023c06d0  ldr w11,[x9, #0x20]
71023c06d4  cmp w11,#0x3
71023c06d8  cset w11,lt
71023c06dc  csel x10,x10,x9,lt
71023c06e0  ldr x9,[x9, w11, UXTW #0x3]
71023c06e4  cbnz x9,0x71023c06d0
71023c06e8  cmp x10,x8
71023c06ec  b.eq 0x71023c0738
71023c06f0  ldr w8,[x10, #0x20]
71023c06f4  cmp w8,#0x3
71023c06f8  b.gt 0x71023c0738
71023c06fc  ldr x20,[x10, #0x28]
71023c0700  cbz x20,0x71023c0738
71023c0704  ldr x8,[x20]
71023c0708  ldr x8,[x8, #0x1f8]
71023c070c  tst w23,#0xff
71023c0710  cset w1,ne
71023c0714  mov x0,x20
71023c0718  cset w21,eq
71023c071c  blr x8
71023c0720  ldr x8,[x20]
71023c0724  ldr x8,[x8, #0x388]
71023c0728  mov x0,x20
71023c072c  mov w1,w21
71023c0730  mov w2,wzr
71023c0734  blr x8
71023c0738  ldr x9,[x24, #0x10]
71023c073c  add x8,x9,#0x1b8
71023c0740  ldr x9,[x9, #0x1b8]
71023c0744  cbz x9,0x71023c07b4
71023c0748  mov x10,x8
71023c074c  mov x11,x9
71023c0750  ldr w12,[x11, #0x20]
71023c0754  cmp w12,#0x4
71023c0758  cset w12,lt
71023c075c  csel x10,x10,x11,lt
71023c0760  ldr x11,[x11, w12, UXTW #0x3]
71023c0764  cbnz x11,0x71023c0750
71023c0768  cmp x10,x8
71023c076c  b.eq 0x71023c07b4
71023c0770  ldr w11,[x10, #0x20]
71023c0774  cmp w11,#0x4
71023c0778  b.gt 0x71023c07b4
71023c077c  ldr x0,[x10, #0x28]
71023c0780  cbz x0,0x71023c07b4
71023c0784  ldr x8,[x0]
71023c0788  ldr x8,[x8, #0x200]
71023c078c  tst w23,#0xff
71023c0790  cset w20,ne
71023c0794  blr x8
71023c0798  eor w8,w0,w20
71023c079c  tbz w8,#0x0,0x71023c082c
71023c07a0  ldr x9,[x24, #0x10]
71023c07a4  add x8,x9,#0x1b8
71023c07a8  ldr x9,[x9, #0x1b8]
71023c07ac  cbnz x9,0x71023c07c0
71023c07b0  b 0x71023c082c
71023c07b4  tst w23,#0xff
71023c07b8  b.eq 0x71023c082c
71023c07bc  cbz x9,0x71023c082c
71023c07c0  mov x10,x8
71023c07c4  ldr w11,[x9, #0x20]
71023c07c8  cmp w11,#0x4
71023c07cc  cset w11,lt
71023c07d0  csel x10,x10,x9,lt
71023c07d4  ldr x9,[x9, w11, UXTW #0x3]
71023c07d8  cbnz x9,0x71023c07c4
71023c07dc  cmp x10,x8
71023c07e0  b.eq 0x71023c082c
71023c07e4  ldr w8,[x10, #0x20]
71023c07e8  cmp w8,#0x4
71023c07ec  b.gt 0x71023c082c
71023c07f0  ldr x20,[x10, #0x28]
71023c07f4  cbz x20,0x71023c082c
71023c07f8  ldr x8,[x20]
71023c07fc  ldr x8,[x8, #0x1f8]
71023c0800  tst w23,#0xff
71023c0804  cset w1,ne
71023c0808  mov x0,x20
71023c080c  cset w21,eq
71023c0810  blr x8
71023c0814  ldr x8,[x20]
71023c0818  ldr x8,[x8, #0x388]
71023c081c  mov x0,x20
71023c0820  mov w1,w21
71023c0824  mov w2,wzr
71023c0828  blr x8
71023c082c  ldr x9,[x24, #0x10]
71023c0830  add x8,x9,#0x1b8
71023c0834  ldr x9,[x9, #0x1b8]
71023c0838  cbz x9,0x71023c08a8
71023c083c  mov x10,x8
71023c0840  mov x11,x9
71023c0844  ldr w12,[x11, #0x20]
71023c0848  cmp w12,#0x5
71023c084c  cset w12,lt
71023c0850  csel x10,x10,x11,lt
71023c0854  ldr x11,[x11, w12, UXTW #0x3]
71023c0858  cbnz x11,0x71023c0844
71023c085c  cmp x10,x8
71023c0860  b.eq 0x71023c08a8
71023c0864  ldr w11,[x10, #0x20]
71023c0868  cmp w11,#0x5
71023c086c  b.gt 0x71023c08a8
71023c0870  ldr x0,[x10, #0x28]
71023c0874  cbz x0,0x71023c08a8
71023c0878  ldr x8,[x0]
71023c087c  ldr x8,[x8, #0x200]
71023c0880  tst w23,#0xff
71023c0884  cset w20,ne
71023c0888  blr x8
71023c088c  eor w8,w0,w20
71023c0890  tbz w8,#0x0,0x71023c0920
71023c0894  ldr x9,[x24, #0x10]
71023c0898  add x8,x9,#0x1b8
71023c089c  ldr x9,[x9, #0x1b8]
71023c08a0  cbnz x9,0x71023c08b4
71023c08a4  b 0x71023c0920
71023c08a8  tst w23,#0xff
71023c08ac  b.eq 0x71023c0920
71023c08b0  cbz x9,0x71023c0920
71023c08b4  mov x10,x8
71023c08b8  ldr w11,[x9, #0x20]
71023c08bc  cmp w11,#0x5
71023c08c0  cset w11,lt
71023c08c4  csel x10,x10,x9,lt
71023c08c8  ldr x9,[x9, w11, UXTW #0x3]
71023c08cc  cbnz x9,0x71023c08b8
71023c08d0  cmp x10,x8
71023c08d4  b.eq 0x71023c0920
71023c08d8  ldr w8,[x10, #0x20]
71023c08dc  cmp w8,#0x5
71023c08e0  b.gt 0x71023c0920
71023c08e4  ldr x20,[x10, #0x28]
71023c08e8  cbz x20,0x71023c0920
71023c08ec  ldr x8,[x20]
71023c08f0  ldr x8,[x8, #0x1f8]
71023c08f4  tst w23,#0xff
71023c08f8  cset w1,ne
71023c08fc  mov x0,x20
71023c0900  cset w21,eq
71023c0904  blr x8
71023c0908  ldr x8,[x20]
71023c090c  ldr x8,[x8, #0x388]
71023c0910  mov x0,x20
71023c0914  mov w1,w21
71023c0918  mov w2,wzr
71023c091c  blr x8
71023c0920  ldr x9,[x24, #0x10]
71023c0924  add x8,x9,#0x1b8
71023c0928  ldr x9,[x9, #0x1b8]
71023c092c  cbz x9,0x71023c099c
71023c0930  mov x10,x8
71023c0934  mov x11,x9
71023c0938  ldr w12,[x11, #0x20]
71023c093c  cmp w12,#0x6
71023c0940  cset w12,lt
71023c0944  csel x10,x10,x11,lt
71023c0948  ldr x11,[x11, w12, UXTW #0x3]
71023c094c  cbnz x11,0x71023c0938
71023c0950  cmp x10,x8
71023c0954  b.eq 0x71023c099c
71023c0958  ldr w11,[x10, #0x20]
71023c095c  cmp w11,#0x6
71023c0960  b.gt 0x71023c099c
71023c0964  ldr x0,[x10, #0x28]
71023c0968  cbz x0,0x71023c099c
71023c096c  ldr x8,[x0]
71023c0970  ldr x8,[x8, #0x200]
71023c0974  tst w23,#0xff
71023c0978  cset w20,ne
71023c097c  blr x8
71023c0980  eor w8,w0,w20
71023c0984  tbz w8,#0x0,0x71023c0a14
71023c0988  ldr x9,[x24, #0x10]
71023c098c  add x8,x9,#0x1b8
71023c0990  ldr x9,[x9, #0x1b8]
71023c0994  cbnz x9,0x71023c09a8
71023c0998  b 0x71023c0a14
71023c099c  tst w23,#0xff
71023c09a0  b.eq 0x71023c0a14
71023c09a4  cbz x9,0x71023c0a14
71023c09a8  mov x10,x8
71023c09ac  ldr w11,[x9, #0x20]
71023c09b0  cmp w11,#0x6
71023c09b4  cset w11,lt
71023c09b8  csel x10,x10,x9,lt
71023c09bc  ldr x9,[x9, w11, UXTW #0x3]
71023c09c0  cbnz x9,0x71023c09ac
71023c09c4  cmp x10,x8
71023c09c8  b.eq 0x71023c0a14
71023c09cc  ldr w8,[x10, #0x20]
71023c09d0  cmp w8,#0x6
71023c09d4  b.gt 0x71023c0a14
71023c09d8  ldr x20,[x10, #0x28]
71023c09dc  cbz x20,0x71023c0a14
71023c09e0  ldr x8,[x20]
71023c09e4  ldr x8,[x8, #0x1f8]
71023c09e8  tst w23,#0xff
71023c09ec  cset w1,ne
71023c09f0  mov x0,x20
71023c09f4  cset w21,eq
71023c09f8  blr x8
71023c09fc  ldr x8,[x20]
71023c0a00  ldr x8,[x8, #0x388]
71023c0a04  mov x0,x20
71023c0a08  mov w1,w21
71023c0a0c  mov w2,wzr
71023c0a10  blr x8
71023c0a14  ldr x0,[x22, #0x328]
71023c0a18  ldr x8,[x0]
71023c0a1c  ldrb w1,[x22, #0x278]
71023c0a20  ldr x8,[x8, #0x28]
71023c0a24  blr x8
71023c0a28  ldr x0,[x22, #0x358]
71023c0a2c  ldr x8,[x0]
71023c0a30  ldrb w1,[x22, #0x278]
71023c0a34  ldr x8,[x8, #0x28]
71023c0a38  blr x8
71023c0a3c  ldr x9,[x22, #0x318]
71023c0a40  ldrb w8,[x22, #0x278]
71023c0a44  add x0,x9,#0x38
71023c0a48  cbz w8,0x71023c0b10
71023c0a4c  adrp x1,0x71042b4000
71023c0a50  add x1,x1,#0xb22
71023c0a54  bl 0x710377a120
71023c0a58  adrp x8,0x7101eb5000
71023c0a5c  add x8,x8,#0x1f0
71023c0a60  str wzr,[x22, #0x270]
71023c0a64  stp x8,xzr,[x22, #0x10]
71023c0a68  adrp x8,0x7105329000
71023c0a6c  ldr x8,[x8, #0xd78]
71023c0a70  ldr x21,[x8, #0x8]
71023c0a74  ldr x8,[x21, #0x580]
71023c0a78  ldr x8,[x8]
71023c0a7c  cbz x8,0x71023c0bd8
71023c0a80  ldr x8,[x8]
71023c0a84  ldr x8,[x8, #0xa0]
71023c0a88  ldr x8,[x8]
71023c0a8c  ldr x8,[x8]
71023c0a90  ldr x8,[x8, #0x338]
71023c0a94  ldr x22,[x8]
71023c0a98  ldr x0,[x22, #0x8]
71023c0a9c  cbz x0,0x71023c0bd8
71023c0aa0  mov x1,sp
71023c0aa4  mov w2,#0x1
71023c0aa8  str xzr,[sp]
71023c0aac  bl 0x7102405040
71023c0ab0  cmn w0,#0x1
71023c0ab4  b.eq 0x71023c0bd8
71023c0ab8  mov w20,w0
71023c0abc  cmp w0,#0x18
71023c0ac0  b.hi 0x71023c0afc
71023c0ac4  ldr x8,[x22, #0x8]
71023c0ac8  mov w9,#0x50
71023c0acc  smaddl x8,w20,w9,x8
71023c0ad0  ldr x0,[x8, #0x68]
71023c0ad4  ldr x8,[x0]
71023c0ad8  cbz x8,0x71023c0afc
71023c0adc  ldr w9,[x0, #0x8]
71023c0ae0  cmn w9,#0x1
71023c0ae4  b.eq 0x71023c0afc
71023c0ae8  ldr w8,[x8, #0x20]
71023c0aec  cmp w9,w8
71023c0af0  b.ne 0x71023c0afc
71023c0af4  add x1,x21,#0xb30
71023c0af8  bl 0x7103736cf0
71023c0afc  ldr x0,[x22, #0x8]
71023c0b00  ldr x8,[x0]
71023c0b04  ldr x8,[x8, #0x58]
71023c0b08  mov w1,wzr
71023c0b0c  b 0x71023c0bd0
71023c0b10  adrp x1,0x71042d6000
71023c0b14  add x1,x1,#0xab9
71023c0b18  bl 0x710377a120
71023c0b1c  adrp x8,0x7101eb5000
71023c0b20  add x8,x8,#0x4e0
71023c0b24  str wzr,[x22, #0x270]
71023c0b28  stp x8,xzr,[x22, #0x10]
71023c0b2c  adrp x8,0x7105329000
71023c0b30  ldr x8,[x8, #0xd78]
71023c0b34  ldr x21,[x8, #0x8]
71023c0b38  ldr x8,[x21, #0x580]
71023c0b3c  ldr x8,[x8]
71023c0b40  cbz x8,0x71023c0bd8
71023c0b44  ldr x8,[x8]
71023c0b48  ldr x8,[x8, #0xa0]
71023c0b4c  ldr x8,[x8]
71023c0b50  ldr x8,[x8]
71023c0b54  ldr x8,[x8, #0x338]
71023c0b58  ldr x22,[x8]
71023c0b5c  ldr x0,[x22, #0x8]
71023c0b60  cbz x0,0x71023c0bd8
71023c0b64  mov x1,sp
71023c0b68  mov w2,#0x1
71023c0b6c  str xzr,[sp]
71023c0b70  bl 0x7102405040
71023c0b74  cmn w0,#0x1
71023c0b78  b.eq 0x71023c0bd8
71023c0b7c  mov w20,w0
71023c0b80  cmp w0,#0x18
71023c0b84  b.hi 0x71023c0bc0
71023c0b88  ldr x8,[x22, #0x8]
71023c0b8c  mov w9,#0x50
71023c0b90  smaddl x8,w20,w9,x8
71023c0b94  ldr x0,[x8, #0x68]
71023c0b98  ldr x8,[x0]
71023c0b9c  cbz x8,0x71023c0bc0
71023c0ba0  ldr w9,[x0, #0x8]
71023c0ba4  cmn w9,#0x1
71023c0ba8  b.eq 0x71023c0bc0
71023c0bac  ldr w8,[x8, #0x20]
71023c0bb0  cmp w9,w8
71023c0bb4  b.ne 0x71023c0bc0
71023c0bb8  add x1,x21,#0xb30
71023c0bbc  bl 0x7103736cf0
71023c0bc0  ldr x0,[x22, #0x8]
71023c0bc4  ldr x8,[x0]
71023c0bc8  ldr x8,[x8, #0x58]
71023c0bcc  mov w1,#0x1
71023c0bd0  mov w2,w20
71023c0bd4  blr x8
71023c0bd8  ldr w8,[x19, #0x2d4]
71023c0bdc  cmp w8,#0x11
71023c0be0  b.gt 0x71023bed80
71023c0be4  add w8,w8,#0x1
71023c0be8  cmp w8,#0x13
71023c0bec  str w8,[x19, #0x2d4]
71023c0bf0  b.cs 0x71023c17e0
71023c0bf4  add x8,x19,w8, SXTW  #0x2
71023c0bf8  mov w9,#0x5
71023c0bfc  str w9,[x8, #0x288]
71023c0c00  b 0x71023bed80
71023c0c04  cbz x8,0x71023bed80
71023c0c08  ldr x8,[x8]
71023c0c0c  ldr x8,[x8, #0x68]
71023c0c10  strb wzr,[x8, #0x294]
71023c0c14  b 0x71023bed80
71023c0c18  ldr w8,[x19, #0x2d4]
71023c0c1c  cmp w8,#0x11
71023c0c20  b.gt 0x71023bed80
71023c0c24  add w8,w8,#0x1
71023c0c28  cmp w8,#0x13
71023c0c2c  str w8,[x19, #0x2d4]
71023c0c30  b.cs 0x71023c17e0
71023c0c34  add x8,x19,w8, SXTW  #0x2
71023c0c38  mov w9,#0x15
71023c0c3c  str w9,[x8, #0x288]
71023c0c40  b 0x71023bed80
71023c0c44  ldr x8,[x9, #0x28]
71023c0c48  ldrb w8,[x8, #0x51]
71023c0c4c  cmp w8,#0x0
71023c0c50  cset w22,ne
71023c0c54  cbnz x20,0x71023bfdd4
71023c0c58  tbnz w22,#0x0,0x71023bed80
71023c0c5c  cmp w21,#0x7
71023c0c60  b.eq 0x71023c1514
71023c0c64  cmp w21,#0x5
71023c0c68  b.eq 0x71023c157c
71023c0c6c  cmp w21,#0x1
71023c0c70  b.ne 0x71023c0cc4
71023c0c74  ldr w8,[x19, #0x2d4]
71023c0c78  cmp w8,#0x11
71023c0c7c  b.gt 0x71023bed80
71023c0c80  add w8,w8,#0x1
71023c0c84  cmp w8,#0x13
71023c0c88  str w8,[x19, #0x2d4]
71023c0c8c  b.cs 0x71023c17e0
71023c0c90  add x8,x19,w8, SXTW  #0x2
71023c0c94  mov w9,#0xd
71023c0c98  str w9,[x8, #0x288]
71023c0c9c  ldr w8,[x19, #0x2d4]
71023c0ca0  cmp w8,#0x11
71023c0ca4  b.gt 0x71023bed80
71023c0ca8  add w8,w8,#0x1
71023c0cac  cmp w8,#0x13
71023c0cb0  str w8,[x19, #0x2d4]
71023c0cb4  b.cs 0x71023c17e0
71023c0cb8  add x8,x19,w8, SXTW  #0x2
71023c0cbc  mov w9,#0x9
71023c0cc0  b 0x71023c0258
71023c0cc4  mov w21,wzr
71023c0cc8  ldr w8,[x19, #0xd40]
71023c0ccc  cmn w8,#0x1
71023c0cd0  b.ne 0x71023bed80
71023c0cd4  ldrb w8,[x19, #0xd69]
71023c0cd8  ldrb w9,[x19, #0xd65]
71023c0cdc  cmp w8,#0x0
71023c0ce0  cset w20,ne
71023c0ce4  cbz w9,0x71023c10c4
71023c0ce8  ldrb w8,[x19, #0xc40]
71023c0cec  cbz w8,0x71023c0d2c
71023c0cf0  ldrb w8,[x19, #0x6d4]
71023c0cf4  cbz w8,0x71023c0d2c
71023c0cf8  ldr w8,[x19, #0x2d4]
71023c0cfc  cmp w8,#0x11
71023c0d00  b.gt 0x71023c0e00
71023c0d04  add w8,w8,#0x1
71023c0d08  cmp w8,#0x13
71023c0d0c  str w8,[x19, #0x2d4]
71023c0d10  b.cs 0x71023c17e0
71023c0d14  add x8,x19,w8, SXTW  #0x2
71023c0d18  mov w9,#0x13
71023c0d1c  str w9,[x8, #0x288]
71023c0d20  mov w20,#0x1
71023c0d24  tbz w21,#0x0,0x71023c10c8
71023c0d28  b 0x71023c119c
71023c0d2c  ldr x8,[x19, #0x580]
71023c0d30  strb wzr,[sp]
71023c0d34  stur xzr,[sp, #0x4]
71023c0d38  stur xzr,[sp, #0x44]
71023c0d3c  str wzr,[sp, #0x4c]
71023c0d40  str wzr,[sp, #0x20]
71023c0d44  strb wzr,[sp, #0x42]
71023c0d48  strh wzr,[sp, #0x40]
71023c0d4c  stp xzr,xzr,[sp, #0x10]
71023c0d50  stp xzr,xzr,[sp, #0x30]
71023c0d54  ldr x8,[x8]
71023c0d58  cbz x8,0x71023c0d70
71023c0d5c  ldr x0,[x8, #0x130]
71023c0d60  mov x1,sp
71023c0d64  bl 0x71031de8e0
71023c0d68  ldr w8,[sp, #0x48]
71023c0d6c  cbnz w8,0x71023c10c4
71023c0d70  ldrb w8,[x19, #0xc43]
71023c0d74  cbz w8,0x71023c0e0c
71023c0d78  ldr x8,[x19, #0x5b8]
71023c0d7c  ldr x8,[x8, #0x80]
71023c0d80  ldr x9,[x8, #0x208]
71023c0d84  ldr x9,[x9]
71023c0d88  cbz x9,0x71023c10c4
71023c0d8c  ldrb w9,[x9, #0x58]
71023c0d90  tbz w9,#0x0,0x71023c10c4
71023c0d94  ldr x9,[x8, #0x218]
71023c0d98  ldr x9,[x9]
71023c0d9c  cbz x9,0x71023c0e9c
71023c0da0  movi v2.2D,#0x0
71023c0da4  ldr s4,[x9, #0x30]
71023c0da8  add x10,x9,#0x34
71023c0dac  ldp s0,s1,[x9, #0x50]
71023c0db0  add x11,x9,#0x38
71023c0db4  ldp s5,s7,[x9, #0x48]
71023c0db8  mov v3.16B,v2.16B
71023c0dbc  fmul s1,s1,s7
71023c0dc0  fmul s0,s0,s5
71023c0dc4  fabs s0,s0
71023c0dc8  mov v3.S[0x0],v4.S[0x0]
71023c0dcc  fmov s5,0x3f000000
71023c0dd0  fmul s6,s0,s5
71023c0dd4  ld1 {v3.S}[1],[x10]
71023c0dd8  ldrb w10,[x9, #0x5b]
71023c0ddc  ld1 {v3.S}[2],[x11]
71023c0de0  fabs s1,s1
71023c0de4  and w11,w10,#0x3
71023c0de8  cmp w11,#0x2
71023c0dec  b.eq 0x71023c0eb8
71023c0df0  cmp w11,#0x1
71023c0df4  b.ne 0x71023c0ec0
71023c0df8  fadd s4,s4,s6
71023c0dfc  b 0x71023c0ebc
71023c0e00  mov w20,#0x1
71023c0e04  tbz w21,#0x0,0x71023c10c8
71023c0e08  b 0x71023c119c
71023c0e0c  ldrb w8,[x19, #0xc44]
71023c0e10  cbz w8,0x71023c10c4
71023c0e14  ldr x8,[x19, #0x5b8]
71023c0e18  ldr x8,[x8, #0x80]
71023c0e1c  ldr x9,[x8, #0x208]
71023c0e20  ldr x9,[x9]
71023c0e24  cbz x9,0x71023c10c4
71023c0e28  ldrb w9,[x9, #0x58]
71023c0e2c  tbz w9,#0x0,0x71023c10c4
71023c0e30  ldr x8,[x8, #0x218]
71023c0e34  ldr x8,[x8]
71023c0e38  cbz x8,0x71023c0fcc
71023c0e3c  movi v2.2D,#0x0
71023c0e40  ldr s4,[x8, #0x30]
71023c0e44  add x9,x8,#0x34
71023c0e48  ldp s0,s1,[x8, #0x50]
71023c0e4c  add x10,x8,#0x38
71023c0e50  ldp s5,s7,[x8, #0x48]
71023c0e54  mov v3.16B,v2.16B
71023c0e58  fmul s1,s1,s7
71023c0e5c  fmul s0,s0,s5
71023c0e60  fabs s0,s0
71023c0e64  mov v3.S[0x0],v4.S[0x0]
71023c0e68  fmov s5,0x3f000000
71023c0e6c  fmul s6,s0,s5
71023c0e70  ld1 {v3.S}[1],[x9]
71023c0e74  ldrb w9,[x8, #0x5b]
71023c0e78  ld1 {v3.S}[2],[x10]
71023c0e7c  fabs s1,s1
71023c0e80  and w10,w9,#0x3
71023c0e84  cmp w10,#0x2
71023c0e88  b.eq 0x71023c0fe8
71023c0e8c  cmp w10,#0x1
71023c0e90  b.ne 0x71023c0ff0
71023c0e94  fadd s4,s4,s6
71023c0e98  b 0x71023c0fec
71023c0e9c  adrp x9,0x71052a8000
71023c0ea0  ldr x9,[x9, #0xa88]
71023c0ea4  ldr q5,[x9]
71023c0ea8  fmov s0,wzr
71023c0eac  mov v1.16B,v0.16B
71023c0eb0  dup s4,v5.S[0x1]
71023c0eb4  b 0x71023c0f38
71023c0eb8  fsub s4,s4,s6
71023c0ebc  mov v3.S[0x0],v4.S[0x0]
71023c0ec0  fmul s4,s1,s5
71023c0ec4  ubfx w10,w10,#0x2,#0x2
71023c0ec8  cmp w10,#0x2
71023c0ecc  b.eq 0x71023c0ee4
71023c0ed0  cmp w10,#0x1
71023c0ed4  b.ne 0x71023c0ef0
71023c0ed8  dup s5,v3.S[0x1]
71023c0edc  fsub s4,s5,s4
71023c0ee0  b 0x71023c0eec
71023c0ee4  dup s5,v3.S[0x1]
71023c0ee8  fadd s4,s4,s5
71023c0eec  mov v3.S[0x1],v4.S[0x0]
71023c0ef0  ldr x9,[x9, #0x18]
71023c0ef4  cbz x9,0x71023c0f30
71023c0ef8  ldp s4,s6,[x9, #0x30]
71023c0efc  fadd s5,s3,s4
71023c0f00  dup s4,v3.S[0x1]
71023c0f04  fadd s4,s4,s6
71023c0f08  dup s7,v3.S[0x2]
71023c0f0c  mov v3.16B,v2.16B
71023c0f10  mov v3.S[0x0],v5.S[0x0]
71023c0f14  ldr s6,[x9, #0x38]
71023c0f18  mov v3.S[0x1],v4.S[0x0]
71023c0f1c  fadd s6,s7,s6
71023c0f20  mov v3.S[0x2],v6.S[0x0]
71023c0f24  ldr x9,[x9, #0x18]
71023c0f28  cbnz x9,0x71023c0ef8
71023c0f2c  b 0x71023c0f38
71023c0f30  dup s4,v3.S[0x1]
71023c0f34  mov v5.16B,v3.16B
71023c0f38  adrp x9,0x7104472000
71023c0f3c  ldr s2,[x9, #0x8b8]
71023c0f40  adrp x9,0x7104472000
71023c0f44  ldr s3,[x9, #0x4c4]
71023c0f48  fadd s2,s5,s2
71023c0f4c  fsub s3,s3,s4
71023c0f50  movi v4.2D,#0x0
71023c0f54  mov v4.S[0x0],v0.S[0x0]
71023c0f58  movi v0.4S,#0x3f, LSL #24
71023c0f5c  mov v4.S[0x1],v1.S[0x0]
71023c0f60  fmul v0.4S,v4.4S,v0.4S
71023c0f64  ldr q4,[x19, #0xc90]
71023c0f68  fsub s1,s2,s0
71023c0f6c  fadd s2,s2,s0
71023c0f70  dup s0,v0.S[0x1]
71023c0f74  fadd s6,s3,s0
71023c0f78  dup s5,v4.S[0x1]
71023c0f7c  fcmp s6,s5
71023c0f80  fccmp s2,s4,#0x8,ge
71023c0f84  fsub s0,s3,s0
71023c0f88  fccmp s1,s4,#0x2,ge
71023c0f8c  fccmp s0,s5,#0x2,ls
71023c0f90  b.hi 0x71023c10c4
71023c0f94  fmov s0,0x3f800000
71023c0f98  add x0,x8,#0x2d0
71023c0f9c  bl 0x710377aee0
71023c0fa0  ldr w8,[x19, #0x2d4]
71023c0fa4  cmp w8,#0x11
71023c0fa8  b.gt 0x71023bed80
71023c0fac  add w8,w8,#0x1
71023c0fb0  cmp w8,#0x13
71023c0fb4  str w8,[x19, #0x2d4]
71023c0fb8  b.cs 0x71023c17e0
71023c0fbc  add x8,x19,w8, SXTW  #0x2
71023c0fc0  mov w9,#0x13
71023c0fc4  str w9,[x8, #0x288]
71023c0fc8  b 0x71023bed80
71023c0fcc  adrp x8,0x71052a8000
71023c0fd0  ldr x8,[x8, #0xa88]
71023c0fd4  ldr q5,[x8]
71023c0fd8  fmov s0,wzr
71023c0fdc  mov v1.16B,v0.16B
71023c0fe0  dup s4,v5.S[0x1]
71023c0fe4  b 0x71023c1068
71023c0fe8  fsub s4,s4,s6
71023c0fec  mov v3.S[0x0],v4.S[0x0]
71023c0ff0  fmul s4,s1,s5
71023c0ff4  ubfx w9,w9,#0x2,#0x2
71023c0ff8  cmp w9,#0x2
71023c0ffc  b.eq 0x71023c1014
71023c1000  cmp w9,#0x1
71023c1004  b.ne 0x71023c1020
71023c1008  dup s5,v3.S[0x1]
71023c100c  fsub s4,s5,s4
71023c1010  b 0x71023c101c
71023c1014  dup s5,v3.S[0x1]
71023c1018  fadd s4,s4,s5
71023c101c  mov v3.S[0x1],v4.S[0x0]
71023c1020  ldr x8,[x8, #0x18]
71023c1024  cbz x8,0x71023c1060
71023c1028  ldp s4,s6,[x8, #0x30]
71023c102c  fadd s5,s3,s4
71023c1030  dup s4,v3.S[0x1]
71023c1034  fadd s4,s4,s6
71023c1038  dup s7,v3.S[0x2]
71023c103c  mov v3.16B,v2.16B
71023c1040  mov v3.S[0x0],v5.S[0x0]
71023c1044  ldr s6,[x8, #0x38]
71023c1048  mov v3.S[0x1],v4.S[0x0]
71023c104c  fadd s6,s7,s6
71023c1050  mov v3.S[0x2],v6.S[0x0]
71023c1054  ldr x8,[x8, #0x18]
71023c1058  cbnz x8,0x71023c1028
71023c105c  b 0x71023c1068
71023c1060  dup s4,v3.S[0x1]
71023c1064  mov v5.16B,v3.16B
71023c1068  adrp x8,0x7104472000
71023c106c  ldr s2,[x8, #0x8b8]
71023c1070  adrp x8,0x7104472000
71023c1074  ldr s3,[x8, #0x4c4]
71023c1078  fadd s2,s5,s2
71023c107c  fsub s3,s3,s4
71023c1080  movi v4.2D,#0x0
71023c1084  mov v4.S[0x0],v0.S[0x0]
71023c1088  movi v0.4S,#0x3f, LSL #24
71023c108c  mov v4.S[0x1],v1.S[0x0]
71023c1090  fmul v0.4S,v4.4S,v0.4S
71023c1094  ldr q4,[x19, #0xca0]
71023c1098  fsub s1,s2,s0
71023c109c  fadd s2,s2,s0
71023c10a0  dup s0,v0.S[0x1]
71023c10a4  fadd s6,s3,s0
71023c10a8  dup s5,v4.S[0x1]
71023c10ac  fcmp s6,s5
71023c10b0  fccmp s2,s4,#0x8,ge
71023c10b4  fsub s0,s3,s0
71023c10b8  fccmp s1,s4,#0x2,ge
71023c10bc  fccmp s0,s5,#0x2,ls
71023c10c0  b.ls 0x71023bed80
71023c10c4  tbnz w21,#0x0,0x71023c119c
71023c10c8  ldrb w8,[x19, #0x71d]
71023c10cc  cbnz w8,0x71023c119c
71023c10d0  ldrb w8,[x19, #0xc44]
71023c10d4  cbz w8,0x71023c10f4
71023c10d8  ldrb w8,[x19, #0xd68]
71023c10dc  cbnz w8,0x71023c10f4
71023c10e0  ldr x8,[x19, #0x5b0]
71023c10e4  ldr x0,[x8, #0x80]
71023c10e8  add x1,x19,#0xca0
71023c10ec  bl 0x7101eb6300
71023c10f0  tbnz w0,#0x0,0x71023c1148
71023c10f4  ldrb w8,[x19, #0xc43]
71023c10f8  cbz w8,0x71023c1120
71023c10fc  ldr x8,[x19, #0x580]
71023c1100  ldr x0,[x8]
71023c1104  cbz x0,0x71023c1118
71023c1108  ldrb w3,[x19, #0xc40]
71023c110c  ldrb w2,[x19, #0xd66]
71023c1110  add x1,x19,#0xc90
71023c1114  bl 0x710319fb90
71023c1118  strb wzr,[x19, #0xd68]
71023c111c  b 0x71023c1148
71023c1120  ldrb w8,[x19, #0xc42]
71023c1124  cbz w8,0x71023c11e8
71023c1128  ldr x8,[x19, #0x580]
71023c112c  ldr x0,[x8]
71023c1130  cbz x0,0x71023c1140
71023c1134  ldrb w2,[x19, #0xd66]
71023c1138  add x1,x19,#0xc80
71023c113c  bl 0x710319f6b0
71023c1140  mov w8,#0x1
71023c1144  strb w8,[x19, #0xd68]
71023c1148  ldr x8,[x19, #0x590]
71023c114c  ldr x8,[x8, #0x8]
71023c1150  ldrb w9,[x8, #0x4aa]
71023c1154  cbz w9,0x71023c1180
71023c1158  ldr w9,[x8, #0x2a4]
71023c115c  ldrb w10,[x8, #0x2a8]
71023c1160  lsl w9,w9,#0xc
71023c1164  and w9,w9,#0x10000
71023c1168  tbnz w10,#0x4,0x71023c1188
71023c116c  ldr w8,[x8, #0x2ac]
71023c1170  lsr w8,w8,#0x2
71023c1174  and w8,w8,#0x4
71023c1178  orr w1,w8,w9
71023c117c  b 0x71023c118c
71023c1180  mov w1,wzr
71023c1184  b 0x71023c118c
71023c1188  orr w1,w9,#0x1
71023c118c  ldr x8,[x19, #0x580]
71023c1190  ldr x0,[x8]
71023c1194  cbz x0,0x71023c119c
71023c1198  bl 0x71031a8e10
71023c119c  tbnz w20,#0x0,0x71023bed80
71023c11a0  add x0,x19,#0x2e8
71023c11a4  bl 0x71023c99c0
71023c11a8  ldr x9,[x19, #0x2e8]
71023c11ac  cbz x9,0x71023c11d8
71023c11b0  ldr x11,[x19, #0x2f8]
71023c11b4  ldr x8,[x19, #0x2f0]
71023c11b8  and x10,x11,#0x1
71023c11bc  orr x12,x10,x8
71023c11c0  cbz x12,0x71023c11d8
71023c11c4  add x0,x9,x11, ASR #0x1
71023c11c8  cbz x10,0x71023c11d4
71023c11cc  ldr x9,[x0]
71023c11d0  ldr x8,[x9, x8, LSL #0x0]
71023c11d4  blr x8
71023c11d8  ldr w8,[x19, #0x424]
71023c11dc  add w8,w8,#0x1
71023c11e0  str w8,[x19, #0x424]
71023c11e4  b 0x71023bed80
71023c11e8  ldrb w8,[x19, #0xc41]
71023c11ec  cbz w8,0x71023c1148
71023c11f0  ldr q0,[x19, #0xc70]
71023c11f4  fcmeq v0.4S,v0.4S,#0.0
71023c11f8  ext v1.16B,v0.16B,v0.16B,0x8
71023c11fc  and v0.8B,v0.8B,v1.8B
71023c1200  fmov w8,s0
71023c1204  mov w9,v0.S[0x1]
71023c1208  tst w8,w9
71023c120c  b.ne 0x71023c1148
71023c1210  ldr x8,[x19, #0x580]
71023c1214  ldr x0,[x8]
71023c1218  cbz x0,0x71023c1140
71023c121c  ldrb w2,[x19, #0xd66]
71023c1220  add x1,x19,#0xc60
71023c1224  bl 0x71031a8ea0
71023c1228  b 0x71023c1140
71023c122c  cbz x8,0x71023c12f8
71023c1230  ldr x9,[x8, #0x110]
71023c1234  cbz x9,0x71023c1248
71023c1238  mov w10,#0x1
71023c123c  strb w10,[x9, #0x70]
71023c1240  ldr x9,[x8, #0x110]
71023c1244  strb w10,[x9, #0x71]
71023c1248  ldr x8,[x8]
71023c124c  ldr x8,[x8, #0x60]
71023c1250  mov w9,#0x1
71023c1254  strb w9,[x8, #0xd]
71023c1258  ldr x8,[x19, #0x580]
71023c125c  ldr x8,[x8]
71023c1260  cbz x8,0x71023c12f8
71023c1264  ldr x8,[x8]
71023c1268  ldr x8,[x8, #0xa0]
71023c126c  ldr x8,[x8]
71023c1270  ldr x8,[x8]
71023c1274  ldr x8,[x8, #0x338]
71023c1278  ldr x21,[x8]
71023c127c  ldr x0,[x21, #0x8]
71023c1280  cbz x0,0x71023c12f8
71023c1284  mov x1,sp
71023c1288  mov w2,#0x1
71023c128c  str xzr,[sp]
71023c1290  bl 0x7102405040
71023c1294  cmn w0,#0x1
71023c1298  b.eq 0x71023c12f8
71023c129c  mov w20,w0
71023c12a0  cmp w0,#0x18
71023c12a4  b.hi 0x71023c12e0
71023c12a8  ldr x8,[x21, #0x8]
71023c12ac  mov w9,#0x50
71023c12b0  smaddl x8,w20,w9,x8
71023c12b4  ldr x0,[x8, #0x68]
71023c12b8  ldr x8,[x0]
71023c12bc  cbz x8,0x71023c12e0
71023c12c0  ldr w9,[x0, #0x8]
71023c12c4  cmn w9,#0x1
71023c12c8  b.eq 0x71023c12e0
71023c12cc  ldr w8,[x8, #0x20]
71023c12d0  cmp w9,w8
71023c12d4  b.ne 0x71023c12e0
71023c12d8  add x1,x19,#0xb30
71023c12dc  bl 0x7103736cf0
71023c12e0  ldr x0,[x21, #0x8]
71023c12e4  ldr x8,[x0]
71023c12e8  ldr x8,[x8, #0x58]
71023c12ec  mov w1,#0x4
71023c12f0  mov w2,w20
71023c12f4  blr x8
71023c12f8  mov w8,#0x1
71023c12fc  strb w8,[x19, #0xab9]
71023c1300  b 0x71023bed80
71023c1304  ldr x8,[x19, #0x5b0]
71023c1308  ldr x9,[x8, #0x80]
71023c130c  ldr x8,[x9, #0x308]
71023c1310  ldr x20,[x9, #0x310]
71023c1314  cbz x20,0x71023c1624
71023c1318  add x9,x20,#0x8
71023c131c  ldxr x10,[x9]
71023c1320  add x10,x10,#0x1
71023c1324  stxr w11,x10,[x9]
71023c1328  cbnz w11,0x71023c131c
71023c132c  ldr x0,[x8]
71023c1330  mov w1,#0x68
71023c1334  bl 0x7101ed2000
71023c1338  add x8,x20,#0x8
71023c133c  ldaxr x9,[x8]
71023c1340  sub x10,x9,#0x1
71023c1344  stlxr w11,x10,[x8]
71023c1348  cbnz w11,0x71023c133c
71023c134c  b 0x71023c1604
71023c1350  ldr x8,[x19, #0x5b0]
71023c1354  ldr x9,[x8, #0x80]
71023c1358  ldr x8,[x9, #0x308]
71023c135c  ldr x20,[x9, #0x310]
71023c1360  cbz x20,0x71023c1630
71023c1364  add x9,x20,#0x8
71023c1368  ldxr x10,[x9]
71023c136c  add x10,x10,#0x1
71023c1370  stxr w11,x10,[x9]
71023c1374  cbnz w11,0x71023c1368
71023c1378  ldr x0,[x8]
71023c137c  mov w1,#0x67
71023c1380  bl 0x7101ed2000
71023c1384  add x8,x20,#0x8
71023c1388  ldaxr x9,[x8]
71023c138c  sub x10,x9,#0x1
71023c1390  stlxr w11,x10,[x8]
71023c1394  cbnz w11,0x71023c1388
71023c1398  b 0x71023c1604
71023c139c  ldr x8,[x19, #0x580]
71023c13a0  ldr x0,[x8]
71023c13a4  cbz x0,0x71023c16e4
71023c13a8  bl 0x710319fe20
71023c13ac  cbz w0,0x71023c16e4
71023c13b0  ldr x8,[x19, #0x5b0]
71023c13b4  ldr x9,[x8, #0x80]
71023c13b8  ldr x8,[x9, #0x308]
71023c13bc  ldr x20,[x9, #0x310]
71023c13c0  cbz x20,0x71023c16c0
71023c13c4  add x9,x20,#0x8
71023c13c8  ldxr x10,[x9]
71023c13cc  add x10,x10,#0x1
71023c13d0  stxr w11,x10,[x9]
71023c13d4  cbnz w11,0x71023c13c8
71023c13d8  ldr x0,[x8]
71023c13dc  mov w1,#0x69
71023c13e0  bl 0x7101ed2000
71023c13e4  add x8,x20,#0x8
71023c13e8  ldaxr x9,[x8]
71023c13ec  sub x10,x9,#0x1
71023c13f0  stlxr w11,x10,[x8]
71023c13f4  cbnz w11,0x71023c13e8
71023c13f8  b 0x71023c1604
71023c13fc  ldr x8,[x19, #0x580]
71023c1400  ldr x0,[x8]
71023c1404  cbz x0,0x71023c16e4
71023c1408  bl 0x710319fe20
71023c140c  cbz w0,0x71023c16e4
71023c1410  ldr x8,[x19, #0x5b0]
71023c1414  ldr x9,[x8, #0x80]
71023c1418  ldr x8,[x9, #0x308]
71023c141c  ldr x20,[x9, #0x310]
71023c1420  cbz x20,0x71023c16cc
71023c1424  add x9,x20,#0x8
71023c1428  ldxr x10,[x9]
71023c142c  add x10,x10,#0x1
71023c1430  stxr w11,x10,[x9]
71023c1434  cbnz w11,0x71023c1428
71023c1438  ldr x0,[x8]
71023c143c  mov w1,#0x6a
71023c1440  bl 0x7101ed2000
71023c1444  add x8,x20,#0x8
71023c1448  ldaxr x9,[x8]
71023c144c  sub x10,x9,#0x1
71023c1450  stlxr w11,x10,[x8]
71023c1454  cbnz w11,0x71023c1448
71023c1458  b 0x71023c1604
71023c145c  ldr x8,[x19, #0x580]
71023c1460  ldr x0,[x8]
71023c1464  cbz x0,0x71023c16e4
71023c1468  bl 0x710319fe20
71023c146c  cbz w0,0x71023c16e4
71023c1470  ldr x8,[x19, #0x5b0]
71023c1474  ldr x9,[x8, #0x80]
71023c1478  ldr x8,[x9, #0x308]
71023c147c  ldr x20,[x9, #0x310]
71023c1480  cbz x20,0x71023c16d8
71023c1484  add x9,x20,#0x8
71023c1488  ldxr x10,[x9]
71023c148c  add x10,x10,#0x1
71023c1490  stxr w11,x10,[x9]
71023c1494  cbnz w11,0x71023c1488
71023c1498  ldr x0,[x8]
71023c149c  mov w1,#0x6b
71023c14a0  bl 0x7101ed2000
71023c14a4  add x8,x20,#0x8
71023c14a8  ldaxr x9,[x8]
71023c14ac  sub x10,x9,#0x1
71023c14b0  stlxr w11,x10,[x8]
71023c14b4  cbnz w11,0x71023c14a8
71023c14b8  b 0x71023c1604
71023c14bc  ldr x8,[x19, #0x580]
71023c14c0  ldr x8,[x8]
71023c14c4  cbz x8,0x71023c16e4
71023c14c8  ldr x8,[x19, #0x5b0]
71023c14cc  ldr x9,[x8, #0x80]
71023c14d0  ldr x8,[x9, #0x308]
71023c14d4  ldr x20,[x9, #0x310]
71023c14d8  cbz x20,0x71023c1698
71023c14dc  add x9,x20,#0x8
71023c14e0  ldxr x10,[x9]
71023c14e4  add x10,x10,#0x1
71023c14e8  stxr w11,x10,[x9]
71023c14ec  cbnz w11,0x71023c14e0
71023c14f0  ldr x0,[x8]
71023c14f4  mov w1,#0x6c
71023c14f8  bl 0x7101ed2000
71023c14fc  add x8,x20,#0x8
71023c1500  ldaxr x9,[x8]
71023c1504  sub x10,x9,#0x1
71023c1508  stlxr w11,x10,[x8]
71023c150c  cbnz w11,0x71023c1500
71023c1510  b 0x71023c1604
71023c1514  ldr x8,[x19, #0x5b0]
71023c1518  ldr x9,[x8, #0x80]
71023c151c  ldr x8,[x9, #0x308]
71023c1520  ldr x20,[x9, #0x310]
71023c1524  cbz x20,0x71023c163c
71023c1528  add x9,x20,#0x8
71023c152c  ldxr x10,[x9]
71023c1530  add x10,x10,#0x1
71023c1534  stxr w11,x10,[x9]
71023c1538  cbnz w11,0x71023c152c
71023c153c  ldr x0,[x8]
71023c1540  mov w1,#0x6d
71023c1544  bl 0x7101ed2000
71023c1548  add x8,x20,#0x8
71023c154c  ldaxr x9,[x8]
71023c1550  sub x10,x9,#0x1
71023c1554  stlxr w11,x10,[x8]
71023c1558  cbnz w11,0x71023c154c
71023c155c  cbnz x9,0x71023c1648
71023c1560  ldr x8,[x20]
71023c1564  ldr x8,[x8, #0x10]
71023c1568  mov x0,x20
71023c156c  blr x8
71023c1570  mov x0,x20
71023c1574  bl 0x71039c2670
71023c1578  b 0x71023c1648
71023c157c  ldr w8,[x19, #0x2d4]
71023c1580  cmp w8,#0x11
71023c1584  b.gt 0x71023bed80
71023c1588  add w8,w8,#0x1
71023c158c  cmp w8,#0x13
71023c1590  str w8,[x19, #0x2d4]
71023c1594  b.cs 0x71023c17e0
71023c1598  add x8,x19,w8, SXTW  #0x2
71023c159c  mov w9,#0xd
71023c15a0  str w9,[x8, #0x288]
71023c15a4  ldr w8,[x19, #0x2d4]
71023c15a8  cmp w8,#0x11
71023c15ac  b.gt 0x71023bed80
71023c15b0  add w8,w8,#0x1
71023c15b4  cmp w8,#0x13
71023c15b8  str w8,[x19, #0x2d4]
71023c15bc  b.cs 0x71023c17e0
71023c15c0  add x8,x19,w8, SXTW  #0x2
71023c15c4  mov w9,#0xa
71023c15c8  b 0x71023c0258
71023c15cc  cbz x20,0x71023c16b4
71023c15d0  add x9,x20,#0x8
71023c15d4  ldxr x10,[x9]
71023c15d8  add x10,x10,#0x1
71023c15dc  stxr w11,x10,[x9]
71023c15e0  cbnz w11,0x71023c15d4
71023c15e4  ldr x0,[x8]
71023c15e8  mov w1,#0x66
71023c15ec  bl 0x7101ed2000
71023c15f0  add x8,x20,#0x8
71023c15f4  ldaxr x9,[x8]
71023c15f8  sub x10,x9,#0x1
71023c15fc  stlxr w11,x10,[x8]
71023c1600  cbnz w11,0x71023c15f4
71023c1604  cbnz x9,0x71023c16e4
71023c1608  ldr x8,[x20]
71023c160c  ldr x8,[x8, #0x10]
71023c1610  mov x0,x20
71023c1614  blr x8
71023c1618  mov x0,x20
71023c161c  bl 0x71039c2670
71023c1620  b 0x71023c16e4
71023c1624  ldr x0,[x8]
71023c1628  mov w1,#0x68
71023c162c  b 0x71023c16e0
71023c1630  ldr x0,[x8]
71023c1634  mov w1,#0x67
71023c1638  b 0x71023c16e0
71023c163c  ldr x0,[x8]
71023c1640  mov w1,#0x6d
71023c1644  bl 0x7101ed2000
71023c1648  ldr w8,[x19, #0x2d4]
71023c164c  cmp w8,#0x11
71023c1650  b.gt 0x71023bed80
71023c1654  add w8,w8,#0x1
71023c1658  cmp w8,#0x13
71023c165c  str w8,[x19, #0x2d4]
71023c1660  b.cs 0x71023c17e0
71023c1664  add x8,x19,w8, SXTW  #0x2
71023c1668  mov w9,#0xd
71023c166c  str w9,[x8, #0x288]
71023c1670  ldr w8,[x19, #0x2d4]
71023c1674  cmp w8,#0x11
71023c1678  b.gt 0x71023bed80
71023c167c  add w8,w8,#0x1
71023c1680  cmp w8,#0x13
71023c1684  str w8,[x19, #0x2d4]
71023c1688  b.cs 0x71023c17e0
71023c168c  add x8,x19,w8, SXTW  #0x2
71023c1690  mov w9,#0xb
71023c1694  b 0x71023c0258
71023c1698  ldr x0,[x8]
71023c169c  mov w1,#0x6c
71023c16a0  b 0x71023c16e0
71023c16a4  ldr x0,[x8]
71023c16a8  mov w1,#0x15
71023c16ac  movk w1,#0x100, LSL #16
71023c16b0  b 0x71023c16e0
71023c16b4  ldr x0,[x8]
71023c16b8  mov w1,#0x66
71023c16bc  b 0x71023c16e0
71023c16c0  ldr x0,[x8]
71023c16c4  mov w1,#0x69
71023c16c8  b 0x71023c16e0
71023c16cc  ldr x0,[x8]
71023c16d0  mov w1,#0x6a
71023c16d4  b 0x71023c16e0
71023c16d8  ldr x0,[x8]
71023c16dc  mov w1,#0x6b
71023c16e0  bl 0x7101ed2000
71023c16e4  ldr w8,[x19, #0x74c]
71023c16e8  cmp w8,#0x1
71023c16ec  b.ne 0x71023c1720
71023c16f0  adrp x8,0x710532f000
71023c16f4  ldr x8,[x8, #0x8d0]
71023c16f8  ldr x0,[x8, #0x8]
71023c16fc  ldp x8,x9,[x0, #0x40]
71023c1700  sub x9,x9,x8
71023c1704  asr x9,x9,#0x3
71023c1708  cmp x9,#0x3
71023c170c  b.cc 0x71023c1728
71023c1710  ldr x20,[x8, #0x10]
71023c1714  ldrb w8,[x0, #0x191]
71023c1718  cbnz w8,0x71023c17a4
71023c171c  b 0x71023c1734
71023c1720  mov w21,#0x1
71023c1724  b 0x71023c0cc8
71023c1728  mov x20,xzr
71023c172c  ldrb w8,[x0, #0x191]
71023c1730  cbnz w8,0x71023c17a4
71023c1734  mov w2,#0x4
71023c1738  mov x1,x20
71023c173c  bl 0x7103313f20
71023c1740  tbz w0,#0x0,0x71023c17a4
71023c1744  add x0,sp,#0x50
71023c1748  mov x1,x20
71023c174c  bl 0x71024076d0
71023c1750  ldr x8,[sp, #0x60]
71023c1754  adrp x9,0x7104f73000
71023c1758  add x9,x9,#0xd50
71023c175c  str x9,[sp, #0x58]
71023c1760  cbz x8,0x71023c17d0
71023c1764  adrp x8,0x7106dd5000
71023c1768  ldrb w8,[x8, #0x3a8]
71023c176c  cmp w8,#0x1
71023c1770  b.ne 0x71023c17d0
71023c1774  adrp x9,0x7106dd5000
71023c1778  ldr w8,[sp, #0x68]
71023c177c  ldr w9,[x9, #0x3ac]
71023c1780  cmp w8,w9
71023c1784  b.ne 0x71023c17d0
71023c1788  ldr x8,[sp, #0x60]
71023c178c  ldr wzr,[x8, #0x38]!
71023c1790  ldaxr w9,[x8]
71023c1794  sub w9,w9,#0x1
71023c1798  stlxr w10,w9,[x8]
71023c179c  cbnz w10,0x71023c1790
71023c17a0  b 0x71023c17d0
71023c17a4  mov x8,#0x650000000000
71023c17a8  movk x8,#0x87, LSL #48
71023c17ac  strb wzr,[sp, #0x70]
71023c17b0  stp xzr,x8,[sp, #0x60]
71023c17b4  mov x8,#-0x1
71023c17b8  stp x8,xzr,[sp, #0x78]
71023c17bc  adrp x8,0x7104f73000
71023c17c0  add x8,x8,#0xd50
71023c17c4  str wzr,[sp, #0x50]
71023c17c8  str xzr,[sp, #0x88]
71023c17cc  str x8,[sp, #0x58]
71023c17d0  str xzr,[sp, #0x60]
71023c17d4  mov w21,#0x1
71023c17d8  strb wzr,[sp, #0x70]
71023c17dc  b 0x71023c0cc8
71023c17e0  bl 0x71039c2650
