// addr:      71013bebe0
// offset:    0x13bebe0
// name:      FUN_71013bebe0
// mangled:   
// size:      1712

71013bebe0  sub sp,sp,#0x100
71013bebe4  str x21,[sp, #0xd0]
71013bebe8  stp x20,x19,[sp, #0xe0]
71013bebec  stp x29,x30,[sp, #0xf0]
71013bebf0  add x29,sp,#0xf0
71013bebf4  adrp x20,0x71052b9000
71013bebf8  add x20,x20,#0x2e0
71013bebfc  ldarb w8,[x20]
71013bec00  mov x19,x0
71013bec04  tbz w8,#0x0,0x71013bf20c
71013bec08  adrp x8,0x71052b9000
71013bec0c  ldrb w8,[x8, #0x2f0]
71013bec10  cbz w8,0x71013becc4
71013bec14  adrp x8,0x7105314000
71013bec18  add x8,x8,#0x4d8
71013bec1c  ldarb w8,[x8]
71013bec20  tbz w8,#0x0,0x71013bf22c
71013bec24  adrp x8,0x71052c5000
71013bec28  ldrb w8,[x8, #0x18a]
71013bec2c  cbz w8,0x71013becc4
71013bec30  ldarb w8,[x20]
71013bec34  tbz w8,#0x0,0x71013bf26c
71013bec38  adrp x8,0x71052b9000
71013bec3c  ldr w8,[x8, #0x2e8]
71013bec40  cbz w8,0x71013bec50
71013bec44  adrp x8,0x71052b9000
71013bec48  mov w9,#0x1
71013bec4c  strb w9,[x8, #0x2f3]
71013bec50  add x10,x19,#0x1ac
71013bec54  ldr w8,[x19, #0x1b8]
71013bec58  add x9,x19,#0x16c
71013bec5c  stp xzr,xzr,[x19, #0x28]
71013bec60  str xzr,[x10]
71013bec64  add x10,x19,#0x1a4
71013bec68  str xzr,[x10]
71013bec6c  add x10,x19,#0x19c
71013bec70  str xzr,[x10]
71013bec74  add x10,x19,#0x194
71013bec78  str xzr,[x10]
71013bec7c  add x10,x19,#0x18c
71013bec80  str xzr,[x10]
71013bec84  add x10,x19,#0x184
71013bec88  str xzr,[x10]
71013bec8c  add x10,x19,#0x17c
71013bec90  str xzr,[x10]
71013bec94  add x10,x19,#0x174
71013bec98  str xzr,[x9]
71013bec9c  mov w9,#0xffffffff
71013beca0  str xzr,[x10]
71013beca4  orr x10,xzr,#-0x100000000
71013beca8  str w9,[x19, #0x1b8]
71013becac  add x9,x19,#0x1bc
71013becb0  str wzr,[x19, #0x1b4]
71013becb4  str x10,[x9]
71013becb8  strb wzr,[x19, #0x1c4]
71013becbc  str w8,[x19, #0x168]
71013becc0  b 0x71013beeb8
71013becc4  ldr x8,[x19, #0x1e8]
71013becc8  cbz x8,0x71013bed8c
71013beccc  ldr w9,[x19, #0x1bc]
71013becd0  cbnz w9,0x71013bee20
71013becd4  ldr x8,[x8, #0x80]
71013becd8  ldr x8,[x8, #0x8]
71013becdc  ldr x8,[x8]
71013bece0  ldr x0,[x8]
71013bece4  mov w1,#0x1
71013bece8  bl 0x71037760f0
71013becec  adrp x8,0x710532f000
71013becf0  ldr x21,[x8, #0x7f0]
71013becf4  cbz x21,0x71013bee20
71013becf8  ldr x8,[x21, #0x8]
71013becfc  ldr x8,[x8, #0x8]
71013bed00  ldr x20,[x8, #0x80]
71013bed04  ldrb w8,[x20, #0x1f5]
71013bed08  cbnz w8,0x71013bedd0
71013bed0c  ldp x8,x9,[x20, #0x100]
71013bed10  subs x10,x9,x8
71013bed14  asr x10,x10,#0x3
71013bed18  mov w11,#0x155
71013bed1c  mul x10,x10,x11
71013bed20  sub x10,x10,#0x1
71013bed24  csel x11,xzr,x10,eq
71013bed28  ldp x10,x12,[x20, #0x118]
71013bed2c  add x10,x12,x10
71013bed30  cmp x11,x10
71013bed34  b.ne 0x71013bed4c
71013bed38  add x0,x20,#0xf8
71013bed3c  bl 0x7101afbf30
71013bed40  ldp x10,x11,[x20, #0x118]
71013bed44  add x10,x10,x11
71013bed48  ldp x8,x9,[x20, #0x100]
71013bed4c  cmp x9,x8
71013bed50  b.eq 0x71013beda4
71013bed54  mov x9,#0x6019
71013bed58  movk x9,#0x180, LSL #16
71013bed5c  movk x9,#0x1806, LSL #32
71013bed60  movk x9,#0x8060, LSL #48
71013bed64  umulh x9,x10,x9
71013bed68  sub x11,x10,x9
71013bed6c  add x9,x9,x11, LSR #0x1
71013bed70  mov x11,#-0x155
71013bed74  lsr x9,x9,#0x8
71013bed78  ldr x8,[x8, x9, LSL #0x3]
71013bed7c  madd x9,x9,x11,x10
71013bed80  orr w10,wzr,#0xc
71013bed84  madd x8,x9,x10,x8
71013bed88  b 0x71013beda8
71013bed8c  ldrsw x8,[x19, #0x1b4]
71013bed90  cmp w8,#0x13
71013bed94  b.cs 0x71013bf28c
71013bed98  add x8,x19,x8, LSL #0x2
71013bed9c  str wzr,[x8, #0x168]
71013beda0  b 0x71013beeb8
71013beda4  mov x8,xzr
71013beda8  mov x9,#0x7
71013bedac  movk x9,#0x1, LSL #32
71013bedb0  str x9,[x8]
71013bedb4  str wzr,[x8, #0x8]
71013bedb8  ldr x8,[x20, #0x120]
71013bedbc  add x8,x8,#0x1
71013bedc0  str x8,[x20, #0x120]
71013bedc4  ldr x8,[x21, #0x8]
71013bedc8  ldr x8,[x8, #0x8]
71013bedcc  ldr x20,[x8, #0x80]
71013bedd0  ldr x8,[x20, #0x130]
71013bedd4  ldr x8,[x8]
71013bedd8  add x0,x8,#0x8
71013beddc  adrp x1,0x71043ad000
71013bede0  add x1,x1,#0xfe3
71013bede4  sub x8,x29,#0x30
71013bede8  bl 0x7103776910
71013bedec  ldur x0,[x29, #-0x28]
71013bedf0  ldr x8,[x0]
71013bedf4  cbz x8,0x71013bee04
71013bedf8  ldrb w9,[x8, #0x58]
71013bedfc  orr w9,w9,#0x1
71013bee00  strb w9,[x8, #0x58]
71013bee04  adrp x8,0x710523d000
71013bee08  add x8,x8,#0x9a8
71013bee0c  stp x8,xzr,[x29, #-0x30]
71013bee10  cbz x0,0x71013bee18
71013bee14  bl 0x710392eb40
71013bee18  mov w8,#0x1
71013bee1c  strb w8,[x20, #0x200]
71013bee20  mov x0,x19
71013bee24  mov w1,wzr
71013bee28  bl 0x71013c14e0
71013bee2c  mov x0,x19
71013bee30  bl 0x71013c1330
71013bee34  ldr x8,[x19, #0x1e8]
71013bee38  ldr x8,[x8, #0x80]
71013bee3c  ldr x10,[x8, #0x20]
71013bee40  ldrsw x9,[x10, #0x25c]
71013bee44  cmn w9,#0x1
71013bee48  b.eq 0x71013bee88
71013bee4c  cmp w9,#0x5
71013bee50  b.cs 0x71013bf28c
71013bee54  mov w10,#0x48
71013bee58  madd x9,x9,x10,x8
71013bee5c  ldr w9,[x9, #0x78]
71013bee60  cmp w9,#0x9
71013bee64  b.hi 0x71013beeb8
71013bee68  adrp x10,0x71044ec000
71013bee6c  add x10,x10,#0x938
71013bee70  ldrsw x9,[x10, x9, LSL #0x2]
71013bee74  add x9,x9,x10
71013bee78  br x9
71013bee7c  mov w8,#0x5
71013bee80  str w8,[x19, #0x18]
71013bee84  b 0x71013beea0
71013bee88  ldrb w8,[x10, #0x280]
71013bee8c  cbnz w8,0x71013bee98
71013bee90  ldrb w8,[x19, #0xb]
71013bee94  cbz w8,0x71013bf014
71013bee98  strb wzr,[x19, #0xb]
71013bee9c  str wzr,[x19, #0x18]
71013beea0  ldrsw x8,[x19, #0x1b4]
71013beea4  cmp w8,#0x13
71013beea8  b.cs 0x71013bf28c
71013beeac  add x8,x19,x8, LSL #0x2
71013beeb0  mov w9,#0xa
71013beeb4  str w9,[x8, #0x168]
71013beeb8  ldp x29,x30,[sp, #0xf0]
71013beebc  ldr x21,[sp, #0xd0]
71013beec0  ldp x20,x19,[sp, #0xe0]
71013beec4  add sp,sp,#0x100
71013beec8  ret
71013beecc  ldrb w9,[x19, #0x14]
71013beed0  cbz w9,0x71013bf030
71013beed4  ldr x8,[x8, #0x8]
71013beed8  ldr x8,[x8]
71013beedc  ldr x0,[x8]
71013beee0  mov w1,wzr
71013beee4  bl 0x71037760f0
71013beee8  ldrsw x8,[x19, #0x1b4]
71013beeec  cmp w8,#0x13
71013beef0  b.cs 0x71013bf28c
71013beef4  add x8,x19,x8, LSL #0x2
71013beef8  mov w9,#0x4
71013beefc  b 0x71013beeb4
71013bef00  mov w8,#0x1
71013bef04  str w8,[x19, #0x18]
71013bef08  ldr x8,[x19]
71013bef0c  ldr x8,[x8, #0x8]
71013bef10  ldr x8,[x8]
71013bef14  ldr w8,[x8, #0xd4c]
71013bef18  orr w8,w8,#0x2
71013bef1c  cmp w8,#0x3
71013bef20  b.eq 0x71013beea0
71013bef24  ldr w8,[x19, #0x1b4]
71013bef28  cmp w8,#0x11
71013bef2c  b.gt 0x71013beeb8
71013bef30  add w8,w8,#0x1
71013bef34  cmp w8,#0x13
71013bef38  str w8,[x19, #0x1b4]
71013bef3c  b.cs 0x71013bf28c
71013bef40  add x8,x19,w8, SXTW  #0x2
71013bef44  mov w9,#0x8
71013bef48  b 0x71013beeb4
71013bef4c  ldrb w9,[x19, #0xc]
71013bef50  cbz w9,0x71013bf09c
71013bef54  ldr x8,[x8, #0x8]
71013bef58  ldr x8,[x8]
71013bef5c  ldr x0,[x8]
71013bef60  mov w1,wzr
71013bef64  bl 0x71037760f0
71013bef68  ldr x8,[x19, #0x1e8]
71013bef6c  ldr x8,[x8, #0x80]
71013bef70  fmov s0,0x3f800000
71013bef74  add x0,x8,#0x58
71013bef78  bl 0x710377aee0
71013bef7c  ldrsw x8,[x19, #0x1b4]
71013bef80  cmp w8,#0x13
71013bef84  b.cs 0x71013bf28c
71013bef88  add x8,x19,x8, LSL #0x2
71013bef8c  orr w9,wzr,#0x3
71013bef90  str w9,[x8, #0x168]
71013bef94  ldr w8,[x19, #0x1b4]
71013bef98  cmp w8,#0x11
71013bef9c  b.gt 0x71013beeb8
71013befa0  add w8,w8,#0x1
71013befa4  cmp w8,#0x13
71013befa8  str w8,[x19, #0x1b4]
71013befac  b.cs 0x71013bf28c
71013befb0  add x8,x19,w8, SXTW  #0x2
71013befb4  mov w9,#0xb
71013befb8  b 0x71013beeb4
71013befbc  ldrb w9,[x19, #0x15]
71013befc0  cbz w9,0x71013bf0f0
71013befc4  ldr x8,[x8, #0x8]
71013befc8  ldr x8,[x8]
71013befcc  ldr x0,[x8]
71013befd0  mov w1,wzr
71013befd4  bl 0x71037760f0
71013befd8  ldrsw x8,[x19, #0x1b4]
71013befdc  cmp w8,#0x13
71013befe0  b.cs 0x71013bf28c
71013befe4  add x8,x19,x8, LSL #0x2
71013befe8  mov w9,#0x5
71013befec  b 0x71013beeb4
71013beff0  mov w8,#0x2
71013beff4  str w8,[x19, #0x18]
71013beff8  b 0x71013beea0
71013beffc  orr w8,wzr,#0x3
71013bf000  str w8,[x19, #0x18]
71013bf004  b 0x71013beea0
71013bf008  mov w8,#0x4
71013bf00c  str w8,[x19, #0x18]
71013bf010  b 0x71013beea0
71013bf014  ldr w0,[x19, #0x1d0]
71013bf018  ldr w1,[x19, #0x1cc]
71013bf01c  ldr x21,[sp, #0xd0]
71013bf020  ldp x29,x30,[sp, #0xf0]
71013bf024  ldp x20,x19,[sp, #0xe0]
71013bf028  add sp,sp,#0x100
71013bf02c  b 0x71014368c0
71013bf030  mov x1,#0x46f2
71013bf034  movk x1,#0xd635, LSL #16
71013bf038  movk x1,#0xe, LSL #32
71013bf03c  add x0,sp,#0x40
71013bf040  bl 0x71024076d0
71013bf044  adrp x8,0x7104f73000
71013bf048  add x8,x8,#0xd50
71013bf04c  str x8,[sp, #0x48]
71013bf050  ldr x8,[sp, #0x50]
71013bf054  cbz x8,0x71013bf090
71013bf058  adrp x9,0x7106dd5000
71013bf05c  ldrb w9,[x9, #0x3a8]
71013bf060  cmp w9,#0x1
71013bf064  b.ne 0x71013bf090
71013bf068  adrp x10,0x7106dd5000
71013bf06c  ldr w9,[sp, #0x58]
71013bf070  ldr w10,[x10, #0x3ac]
71013bf074  cmp w9,w10
71013bf078  b.ne 0x71013bf090
71013bf07c  ldr wzr,[x8, #0x38]!
71013bf080  ldaxr w9,[x8]
71013bf084  sub w9,w9,#0x1
71013bf088  stlxr w10,w9,[x8]
71013bf08c  cbnz w10,0x71013bf080
71013bf090  str xzr,[sp, #0x50]
71013bf094  strb wzr,[sp, #0x60]
71013bf098  b 0x71013beeb8
71013bf09c  adrp x8,0x71052b8000
71013bf0a0  ldr x8,[x8, #0xf00]
71013bf0a4  ldr x9,[x8]
71013bf0a8  ldr w11,[x9, #0x4]
71013bf0ac  ldr w8,[x9, #0xc9c]
71013bf0b0  cmp w11,#0xd
71013bf0b4  b.hi 0x71013bf15c
71013bf0b8  mov w10,#0x1
71013bf0bc  lsl w12,w10,w11
71013bf0c0  mov w13,#0x3204
71013bf0c4  tst w12,w13
71013bf0c8  b.ne 0x71013bf160
71013bf0cc  mov w10,#0x1
71013bf0d0  lsl w10,w10,w11
71013bf0d4  mov w11,#0x12
71013bf0d8  tst w10,w11
71013bf0dc  b.eq 0x71013bf15c
71013bf0e0  ldr x9,[x9, #0x30]
71013bf0e4  cbz x9,0x71013bf15c
71013bf0e8  ldrb w10,[x9, #0x124]
71013bf0ec  b 0x71013bf160
71013bf0f0  mov x1,#0x46f2
71013bf0f4  movk x1,#0xd635, LSL #16
71013bf0f8  movk x1,#0xe, LSL #32
71013bf0fc  mov x0,sp
71013bf100  bl 0x71024076d0
71013bf104  adrp x8,0x7104f73000
71013bf108  add x8,x8,#0xd50
71013bf10c  str x8,[sp, #0x8]
71013bf110  ldr x8,[sp, #0x10]
71013bf114  cbz x8,0x71013bf150
71013bf118  adrp x9,0x7106dd5000
71013bf11c  ldrb w9,[x9, #0x3a8]
71013bf120  cmp w9,#0x1
71013bf124  b.ne 0x71013bf150
71013bf128  adrp x10,0x7106dd5000
71013bf12c  ldr w9,[sp, #0x18]
71013bf130  ldr w10,[x10, #0x3ac]
71013bf134  cmp w9,w10
71013bf138  b.ne 0x71013bf150
71013bf13c  ldr wzr,[x8, #0x38]!
71013bf140  ldaxr w9,[x8]
71013bf144  sub w9,w9,#0x1
71013bf148  stlxr w10,w9,[x8]
71013bf14c  cbnz w10,0x71013bf140
71013bf150  str xzr,[sp, #0x10]
71013bf154  strb wzr,[sp, #0x20]
71013bf158  b 0x71013beeb8
71013bf15c  mov w10,wzr
71013bf160  lsr w8,w8,#0x1f
71013bf164  eor w8,w8,#0x1
71013bf168  tst w10,w8
71013bf16c  b.eq 0x71013bf1a0
71013bf170  ldrb w8,[x19, #0xd]
71013bf174  cbz w8,0x71013bf1a0
71013bf178  ldr w8,[x19, #0x1b4]
71013bf17c  cmp w8,#0x11
71013bf180  b.gt 0x71013beeb8
71013bf184  add w8,w8,#0x1
71013bf188  cmp w8,#0x13
71013bf18c  str w8,[x19, #0x1b4]
71013bf190  b.cs 0x71013bf28c
71013bf194  add x8,x19,w8, SXTW  #0x2
71013bf198  mov w9,#0x9
71013bf19c  b 0x71013beeb4
71013bf1a0  mov x1,#0x46f2
71013bf1a4  movk x1,#0xd635, LSL #16
71013bf1a8  movk x1,#0xe, LSL #32
71013bf1ac  sub x0,x29,#0x70
71013bf1b0  bl 0x71024076d0
71013bf1b4  adrp x8,0x7104f73000
71013bf1b8  add x8,x8,#0xd50
71013bf1bc  stur x8,[x29, #-0x68]
71013bf1c0  ldur x8,[x29, #-0x60]
71013bf1c4  cbz x8,0x71013bf200
71013bf1c8  adrp x9,0x7106dd5000
71013bf1cc  ldrb w9,[x9, #0x3a8]
71013bf1d0  cmp w9,#0x1
71013bf1d4  b.ne 0x71013bf200
71013bf1d8  adrp x10,0x7106dd5000
71013bf1dc  ldur w9,[x29, #-0x58]
71013bf1e0  ldr w10,[x10, #0x3ac]
71013bf1e4  cmp w9,w10
71013bf1e8  b.ne 0x71013bf200
71013bf1ec  ldr wzr,[x8, #0x38]!
71013bf1f0  ldaxr w9,[x8]
71013bf1f4  sub w9,w9,#0x1
71013bf1f8  stlxr w10,w9,[x8]
71013bf1fc  cbnz w10,0x71013bf1f0
71013bf200  stur xzr,[x29, #-0x60]
71013bf204  sturb wzr,[x29, #-0x50]
71013bf208  b 0x71013beeb8
71013bf20c  adrp x0,0x71052b9000
71013bf210  add x0,x0,#0x2e0
71013bf214  bl 0x71039c06b0
71013bf218  cbz w0,0x71013bec08
71013bf21c  adrp x0,0x71052b9000
71013bf220  add x0,x0,#0x2e0
71013bf224  bl 0x71039c06c0
71013bf228  b 0x71013bec08
71013bf22c  adrp x0,0x7105314000
71013bf230  add x0,x0,#0x4d8
71013bf234  bl 0x71039c06b0
71013bf238  cbz w0,0x71013bec24
71013bf23c  bl 0x7101764000
71013bf240  adrp x0,0x7101763000
71013bf244  add x0,x0,#0xc40
71013bf248  adrp x1,0x71052c5000
71013bf24c  add x1,x1,#0x180
71013bf250  adrp x2,0x7104f17000
71013bf254  add x2,x2,#0x0
71013bf258  bl 0x71000001c0
71013bf25c  adrp x0,0x7105314000
71013bf260  add x0,x0,#0x4d8
71013bf264  bl 0x71039c06c0
71013bf268  b 0x71013bec24
71013bf26c  adrp x0,0x71052b9000
71013bf270  add x0,x0,#0x2e0
71013bf274  bl 0x71039c06b0
71013bf278  cbz w0,0x71013bec38
71013bf27c  adrp x0,0x71052b9000
71013bf280  add x0,x0,#0x2e0
71013bf284  bl 0x71039c06c0
71013bf288  b 0x71013bec38
71013bf28c  bl 0x71039c2650
