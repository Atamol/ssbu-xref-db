// addr:      7101afed00
// offset:    0x1afed00
// name:      FUN_7101afed00
// mangled:   
// size:      1524

7101afed00  sub sp,sp,#0x40
7101afed04  str x21,[sp, #0x10]
7101afed08  stp x20,x19,[sp, #0x20]
7101afed0c  stp x29,x30,[sp, #0x30]
7101afed10  add x29,sp,#0x30
7101afed14  ldrb w8,[x0, #0x1f7]
7101afed18  mov x19,x0
7101afed1c  cbz w8,0x7101afed3c
7101afed20  adrp x8,0x710593b000
7101afed24  ldr x8,[x8, #0x988]
7101afed28  ldr x8,[x8, #0x8]
7101afed2c  ldr w9,[x8]
7101afed30  and w9,w9,#0xffffefff
7101afed34  str w9,[x8]
7101afed38  strb wzr,[x19, #0x1f7]
7101afed3c  ldr w8,[x19, #0xe8]
7101afed40  str wzr,[x19, #0x1dc]
7101afed44  cbz w8,0x7101afed58
7101afed48  cmp w8,#0x5
7101afed4c  b.eq 0x7101afed58
7101afed50  mov x0,x19
7101afed54  bl 0x7101afdf90
7101afed58  adrp x20,0x710532f000
7101afed5c  ldr x8,[x20, #0x820]
7101afed60  ldr x21,[x8, #0x8]
7101afed64  ldr x8,[x21, #0x110]
7101afed68  ldr x0,[x8, #0x80]
7101afed6c  bl 0x7101eefe30
7101afed70  ldr w8,[x21, #0xf8]
7101afed74  cmp w8,#0x0
7101afed78  ldrb w9,[x21, #0x142]
7101afed7c  cset w8,ne
7101afed80  orn w8,w8,w0
7101afed84  and w8,w8,#0x1
7101afed88  orr w8,w8,w9
7101afed8c  cbz w8,0x7101afedd4
7101afed90  ldr x20,[x20, #0x820]
7101afed94  ldr x21,[x20, #0x8]
7101afed98  ldr x8,[x21, #0x110]
7101afed9c  ldr x0,[x8, #0x80]
7101afeda0  bl 0x7101eefe30
7101afeda4  ldr w8,[x21, #0xf8]
7101afeda8  cmp w8,#0x0
7101afedac  ldrb w9,[x21, #0x142]
7101afedb0  cset w8,ne
7101afedb4  orn w8,w8,w0
7101afedb8  and w8,w8,#0x1
7101afedbc  orr w8,w8,w9
7101afedc0  cbz w8,0x7101afee58
7101afedc4  ldr x8,[x20, #0x10]
7101afedc8  ldr w8,[x8]
7101afedcc  cmp w8,#0x4
7101afedd0  b.lt 0x7101afee58
7101afedd4  adrp x20,0x710532f000
7101afedd8  ldr x8,[x20, #0x828]
7101afeddc  ldr x21,[x8, #0x8]
7101afede0  ldr x8,[x21, #0x110]
7101afede4  ldr x0,[x8, #0x80]
7101afede8  bl 0x7101eefe30
7101afedec  ldr w8,[x21, #0xf8]
7101afedf0  cmp w8,#0x0
7101afedf4  ldrb w9,[x21, #0x142]
7101afedf8  cset w8,ne
7101afedfc  orn w8,w8,w0
7101afee00  and w8,w8,#0x1
7101afee04  orr w8,w8,w9
7101afee08  cbz w8,0x7101afee60
7101afee0c  ldr x20,[x20, #0x828]
7101afee10  ldr x21,[x20, #0x8]
7101afee14  ldr x8,[x21, #0x110]
7101afee18  ldr x0,[x8, #0x80]
7101afee1c  bl 0x7101eefe30
7101afee20  ldr w8,[x21, #0xf8]
7101afee24  cmp w8,#0x0
7101afee28  ldrb w9,[x21, #0x142]
7101afee2c  cset w8,ne
7101afee30  orn w8,w8,w0
7101afee34  and w8,w8,#0x1
7101afee38  orr w8,w8,w9
7101afee3c  cbz w8,0x7101afee50
7101afee40  ldr x8,[x20, #0x10]
7101afee44  ldr w8,[x8]
7101afee48  cmp w8,#0x3
7101afee4c  cset w8,gt
7101afee50  eor w20,w8,#0x1
7101afee54  b 0x7101afee64
7101afee58  mov w20,#0x1
7101afee5c  b 0x7101afee64
7101afee60  mov w20,wzr
7101afee64  ldrb w8,[x19, #0x1f8]
7101afee68  cmp w8,w20
7101afee6c  b.eq 0x7101afeef4
7101afee70  ldr w8,[x19, #0x1fc]
7101afee74  cmp w8,#0x1
7101afee78  b.ne 0x7101afeef0
7101afee7c  ldr x8,[x19, #0x130]
7101afee80  ldr x21,[x8]
7101afee84  mov x8,sp
7101afee88  add x0,x21,#0x8
7101afee8c  adrp x1,0x71043ad000
7101afee90  add x1,x1,#0xfe3
7101afee94  bl 0x7103776910
7101afee98  ldr x0,[sp, #0x8]
7101afee9c  ldr x8,[x0]
7101afeea0  cbz x8,0x7101afeeb8
7101afeea4  ldrb w10,[x8, #0x58]
7101afeea8  eor w9,w20,#0x1
7101afeeac  and w10,w10,#0xfe
7101afeeb0  orr w9,w10,w9
7101afeeb4  strb w9,[x8, #0x58]
7101afeeb8  adrp x8,0x710523d000
7101afeebc  add x8,x8,#0x9a8
7101afeec0  stp x8,xzr,[sp]
7101afeec4  cbz x0,0x7101afeecc
7101afeec8  bl 0x710392eb40
7101afeecc  ldr x0,[x21, #0x10]
7101afeed0  cbz w20,0x7101afeee0
7101afeed4  adrp x1,0x7104291000
7101afeed8  add x1,x1,#0x7af
7101afeedc  b 0x7101afeee8
7101afeee0  adrp x1,0x71042a3000
7101afeee4  add x1,x1,#0x672
7101afeee8  fmov s0,0x3f800000
7101afeeec  bl 0x7103778300
7101afeef0  strb w20,[x19, #0x1f8]
7101afeef4  ldr x8,[x19, #0x148]
7101afeef8  ldr x9,[x8]
7101afeefc  cbz x9,0x7101afef38
7101afef00  ldr x0,[x8, #0x8]
7101afef04  cbz x0,0x7101afef38
7101afef08  ldr x8,[x0]
7101afef0c  ldr x8,[x8, #0x138]
7101afef10  blr x8
7101afef14  tbz w0,#0x0,0x7101afef38
7101afef18  ldr x8,[x19, #0x148]
7101afef1c  str xzr,[x8]
7101afef20  ldr x8,[x19, #0x148]
7101afef24  str xzr,[x8, #0x8]
7101afef28  ldr x8,[x19, #0x128]
7101afef2c  ldr x0,[x8]
7101afef30  bl 0x7103775fa0
7101afef34  strb wzr,[x19, #0x1f2]
7101afef38  ldr w8,[x19, #0x1e4]
7101afef3c  cbz w8,0x7101aff038
7101afef40  adrp x9,0x710532f000
7101afef44  ldr x9,[x9, #0x7d0]
7101afef48  ldr x9,[x9, #0x8]
7101afef4c  ldr x0,[x9, #0x18]
7101afef50  cbz x0,0x7101afef68
7101afef54  ldr x8,[x0]
7101afef58  ldr x8,[x8, #0x48]
7101afef5c  blr x8
7101afef60  tbnz w0,#0x0,0x7101afef70
7101afef64  ldr w8,[x19, #0x1e4]
7101afef68  cmp w8,#0x3
7101afef6c  b.ne 0x7101aff024
7101afef70  ldrb w8,[x19, #0x1f2]
7101afef74  cbz w8,0x7101aff038
7101afef78  ldr x8,[x19, #0x148]
7101afef7c  ldr x9,[x8]
7101afef80  cbz x9,0x7101afef8c
7101afef84  ldr x8,[x8, #0x8]
7101afef88  cbnz x8,0x7101aff038
7101afef8c  ldr w8,[x19, #0xe8]
7101afef90  orr w8,w8,#0x1
7101afef94  cmp w8,#0x3
7101afef98  b.ne 0x7101aff038
7101afef9c  adrp x8,0x710532f000
7101afefa0  ldr x8,[x8, #0x7c8]
7101afefa4  ldr x8,[x8, #0x8]
7101afefa8  ldrb w9,[x8, #0x69]
7101afefac  ldr w8,[x19, #0x1fc]
7101afefb0  cbz w9,0x7101aff280
7101afefb4  cmp w8,#0x2
7101afefb8  b.eq 0x7101aff190
7101afefbc  ldr x8,[x19, #0x130]
7101afefc0  ldr x20,[x8]
7101afefc4  mov x8,sp
7101afefc8  add x0,x20,#0x8
7101afefcc  adrp x1,0x71043ad000
7101afefd0  add x1,x1,#0xfe3
7101afefd4  bl 0x7103776910
7101afefd8  ldr x0,[sp, #0x8]
7101afefdc  ldr x8,[x0]
7101afefe0  cbz x8,0x7101afeff0
7101afefe4  ldrb w9,[x8, #0x58]
7101afefe8  orr w9,w9,#0x1
7101afefec  strb w9,[x8, #0x58]
7101afeff0  adrp x8,0x710523d000
7101afeff4  add x8,x8,#0x9a8
7101afeff8  stp x8,xzr,[sp]
7101afeffc  cbz x0,0x7101aff004
7101aff000  bl 0x710392eb40
7101aff004  ldr x0,[x20, #0x10]
7101aff008  fmov s0,0x3f800000
7101aff00c  adrp x1,0x7104291000
7101aff010  add x1,x1,#0x7af
7101aff014  bl 0x7103778300
7101aff018  mov w8,#0x2
7101aff01c  str w8,[x19, #0x1fc]
7101aff020  b 0x7101aff190
7101aff024  mov w1,#0x1
7101aff028  mov x0,x19
7101aff02c  bl 0x7101afbc50
7101aff030  str wzr,[x19, #0x1ec]
7101aff034  str wzr,[x19, #0x1e4]
7101aff038  ldr x8,[x19, #0x158]
7101aff03c  ldr x9,[x8]
7101aff040  cbz x9,0x7101aff0c4
7101aff044  ldr x0,[x8, #0x8]
7101aff048  cbz x0,0x7101aff0c4
7101aff04c  ldr x8,[x19, #0x188]
7101aff050  ldr x9,[x8]
7101aff054  cbz x9,0x7101aff094
7101aff058  ldr x8,[x8, #0x8]
7101aff05c  cbz x8,0x7101aff094
7101aff060  ldr x9,[x8]
7101aff064  ldr x9,[x9, #0x138]
7101aff068  mov x0,x8
7101aff06c  blr x9
7101aff070  tbz w0,#0x0,0x7101aff0c4
7101aff074  ldr x8,[x19, #0x188]
7101aff078  str xzr,[x8]
7101aff07c  ldr x8,[x19, #0x188]
7101aff080  fmov s0,0x3f800000
7101aff084  add x0,x19,#0x150
7101aff088  str xzr,[x8, #0x8]
7101aff08c  bl 0x710377aee0
7101aff090  b 0x7101aff0c4
7101aff094  ldr x8,[x0]
7101aff098  ldr x8,[x8, #0x138]
7101aff09c  blr x8
7101aff0a0  tbz w0,#0x0,0x7101aff0c4
7101aff0a4  ldr x8,[x19, #0x158]
7101aff0a8  str xzr,[x8]
7101aff0ac  ldr x8,[x19, #0x158]
7101aff0b0  str xzr,[x8, #0x8]
7101aff0b4  ldr x8,[x19, #0x130]
7101aff0b8  ldr x0,[x8]
7101aff0bc  bl 0x7103775fa0
7101aff0c0  strb wzr,[x19, #0x1f4]
7101aff0c4  ldr w8,[x19, #0x1ec]
7101aff0c8  cmp w8,#0x1
7101aff0cc  b.lt 0x7101aff190
7101aff0d0  ldrb w9,[x19, #0x1f4]
7101aff0d4  cbz w9,0x7101aff18c
7101aff0d8  ldrb w9,[x19, #0x1f6]
7101aff0dc  cbz w9,0x7101aff18c
7101aff0e0  subs w8,w8,#0x1
7101aff0e4  str w8,[x19, #0x1ec]
7101aff0e8  b.gt 0x7101aff190
7101aff0ec  ldp x8,x9,[x19, #0x100]
7101aff0f0  subs x10,x9,x8
7101aff0f4  asr x10,x10,#0x3
7101aff0f8  mov w11,#0x155
7101aff0fc  mul x10,x10,x11
7101aff100  sub x10,x10,#0x1
7101aff104  csel x11,xzr,x10,eq
7101aff108  ldp x10,x12,[x19, #0x118]
7101aff10c  add x10,x12,x10
7101aff110  cmp x11,x10
7101aff114  b.ne 0x7101aff12c
7101aff118  add x0,x19,#0xf8
7101aff11c  bl 0x7101afbf30
7101aff120  ldp x10,x11,[x19, #0x118]
7101aff124  add x10,x10,x11
7101aff128  ldp x8,x9,[x19, #0x100]
7101aff12c  cmp x9,x8
7101aff130  b.eq 0x7101aff16c
7101aff134  mov x9,#0x6019
7101aff138  movk x9,#0x180, LSL #16
7101aff13c  movk x9,#0x1806, LSL #32
7101aff140  movk x9,#0x8060, LSL #48
7101aff144  umulh x9,x10,x9
7101aff148  sub x11,x10,x9
7101aff14c  add x9,x9,x11, LSR #0x1
7101aff150  mov x11,#-0x155
7101aff154  lsr x9,x9,#0x8
7101aff158  ldr x8,[x8, x9, LSL #0x3]
7101aff15c  madd x9,x9,x11,x10
7101aff160  orr w10,wzr,#0xc
7101aff164  madd x8,x9,x10,x8
7101aff168  b 0x7101aff170
7101aff16c  mov x8,xzr
7101aff170  mov x9,#0x6
7101aff174  movk x9,#0x1, LSL #32
7101aff178  str x9,[x8]
7101aff17c  str wzr,[x8, #0x8]
7101aff180  ldr x8,[x19, #0x120]
7101aff184  add x8,x8,#0x1
7101aff188  str x8,[x19, #0x120]
7101aff18c  str wzr,[x19, #0x1ec]
7101aff190  ldrsw x8,[x19, #0xe4]
7101aff194  cmp w8,#0x13
7101aff198  b.cs 0x7101aff2f0
7101aff19c  add x8,x19,x8, LSL #0x2
7101aff1a0  ldr w8,[x8, #0x98]
7101aff1a4  ldr w9,[x19, #0xe8]
7101aff1a8  cmp w9,w8
7101aff1ac  b.eq 0x7101aff1fc
7101aff1b0  cmp w8,#0x7
7101aff1b4  str w9,[x19, #0xf0]
7101aff1b8  str w8,[x19, #0xe8]
7101aff1bc  b.cs 0x7101aff2f0
7101aff1c0  sxtw x8,w8
7101aff1c4  add x8,x19,x8, LSL #0x4
7101aff1c8  ldp x9,x8,[x8, #0x28]
7101aff1cc  stp x9,x8,[x19, #0x8]
7101aff1d0  ldp x8,x10,[x19, #0x18]
7101aff1d4  and x9,x10,#0x1
7101aff1d8  orr x11,x9,x8
7101aff1dc  cbz x11,0x7101aff1f8
7101aff1e0  ldr x11,[x19]
7101aff1e4  add x0,x11,x10, ASR #0x1
7101aff1e8  cbz x9,0x7101aff1f4
7101aff1ec  ldr x9,[x0]
7101aff1f0  ldr x8,[x9, x8, LSL #0x0]
7101aff1f4  blr x8
7101aff1f8  str wzr,[x19, #0xec]
7101aff1fc  ldrb w8,[x19, #0xf4]
7101aff200  cbz w8,0x7101aff234
7101aff204  ldp x8,x10,[x19, #0x18]
7101aff208  and x9,x10,#0x1
7101aff20c  orr x11,x9,x8
7101aff210  cbz x11,0x7101aff22c
7101aff214  ldr x11,[x19]
7101aff218  add x0,x11,x10, ASR #0x1
7101aff21c  cbz x9,0x7101aff228
7101aff220  ldr x9,[x0]
7101aff224  ldr x8,[x9, x8, LSL #0x0]
7101aff228  blr x8
7101aff22c  str wzr,[x19, #0xec]
7101aff230  strb wzr,[x19, #0xf4]
7101aff234  ldr x9,[x19]
7101aff238  cbz x9,0x7101aff260
7101aff23c  ldp x8,x11,[x19, #0x8]
7101aff240  and x10,x11,#0x1
7101aff244  orr x12,x10,x8
7101aff248  cbz x12,0x7101aff260
7101aff24c  add x0,x9,x11, ASR #0x1
7101aff250  cbz x10,0x7101aff25c
7101aff254  ldr x9,[x0]
7101aff258  ldr x8,[x9, x8, LSL #0x0]
7101aff25c  blr x8
7101aff260  ldr w8,[x19, #0xec]
7101aff264  add w8,w8,#0x1
7101aff268  str w8,[x19, #0xec]
7101aff26c  ldp x29,x30,[sp, #0x30]
7101aff270  ldr x21,[sp, #0x10]
7101aff274  ldp x20,x19,[sp, #0x20]
7101aff278  add sp,sp,#0x40
7101aff27c  ret
7101aff280  cmp w8,#0x1
7101aff284  b.eq 0x7101aff190
7101aff288  ldr x8,[x19, #0x130]
7101aff28c  ldr x20,[x8]
7101aff290  mov x8,sp
7101aff294  add x0,x20,#0x8
7101aff298  adrp x1,0x71043ad000
7101aff29c  add x1,x1,#0xfe3
7101aff2a0  bl 0x7103776910
7101aff2a4  ldr x0,[sp, #0x8]
7101aff2a8  ldr x8,[x0]
7101aff2ac  cbz x8,0x7101aff2bc
7101aff2b0  ldrb w9,[x8, #0x58]
7101aff2b4  orr w9,w9,#0x1
7101aff2b8  strb w9,[x8, #0x58]
7101aff2bc  adrp x8,0x710523d000
7101aff2c0  add x8,x8,#0x9a8
7101aff2c4  stp x8,xzr,[sp]
7101aff2c8  cbz x0,0x7101aff2d0
7101aff2cc  bl 0x710392eb40
7101aff2d0  ldr x0,[x20, #0x10]
7101aff2d4  fmov s0,0x3f800000
7101aff2d8  adrp x1,0x71042a3000
7101aff2dc  add x1,x1,#0x672
7101aff2e0  bl 0x7103778300
7101aff2e4  mov w8,#0x1
7101aff2e8  str w8,[x19, #0x1fc]
7101aff2ec  b 0x7101aff190
7101aff2f0  bl 0x71039c2650
