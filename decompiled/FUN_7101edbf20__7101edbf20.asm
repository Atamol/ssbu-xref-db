// addr:      7101edbf20
// offset:    0x1edbf20
// name:      FUN_7101edbf20
// mangled:   
// size:      2992

7101edbf20  sub sp,sp,#0x170
7101edbf24  stp x28,x27,[sp, #0x110]
7101edbf28  stp x26,x25,[sp, #0x120]
7101edbf2c  stp x24,x23,[sp, #0x130]
7101edbf30  stp x22,x21,[sp, #0x140]
7101edbf34  stp x20,x19,[sp, #0x150]
7101edbf38  stp x29,x30,[sp, #0x160]
7101edbf3c  add x29,sp,#0x160
7101edbf40  ldr w8,[x0, #0xf4]
7101edbf44  cbnz w8,0x7101edca5c
7101edbf48  add x28,x0,#0x100
7101edbf4c  mov x3,#0xc126
7101edbf50  movk x3,#0x628a, LSL #16
7101edbf54  adrp x2,0x71050b3000
7101edbf58  add x2,x2,#0x930
7101edbf5c  movk x3,#0x26, LSL #32
7101edbf60  mov w4,#0x1
7101edbf64  mov x1,x28
7101edbf68  mov x19,x0
7101edbf6c  bl 0x71032cb040
7101edbf70  adrp x8,0x7105329000
7101edbf74  ldr x8,[x8, #0xde8]
7101edbf78  ldr x1,[x19, #0x40]
7101edbf7c  ldr x0,[x8, #0x8]
7101edbf80  bl 0x71023d4940
7101edbf84  ldr x8,[x19, #0x40]
7101edbf88  ldr x8,[x8]
7101edbf8c  cbz x8,0x7101edbf98
7101edbf90  ldr x21,[x8]
7101edbf94  b 0x7101edbf9c
7101edbf98  mov x21,xzr
7101edbf9c  adrp x20,0x7104281000
7101edbfa0  add x20,x20,#0x295
7101edbfa4  mov x0,x21
7101edbfa8  mov x1,x20
7101edbfac  bl 0x71038f7260
7101edbfb0  ldr x8,[x21, #0x10]
7101edbfb4  ldp x9,x10,[x8, #-0x10]
7101edbfb8  stp x9,x10,[x8]
7101edbfbc  ldr x8,[x21, #0x10]
7101edbfc0  add x9,x8,#0x10
7101edbfc4  sub x1,x8,#0x10
7101edbfc8  adrp x2,0x71042a1000
7101edbfcc  add x2,x2,#0xcc7
7101edbfd0  mov x0,x21
7101edbfd4  str x9,[x21, #0x10]
7101edbfd8  bl 0x71038f5390
7101edbfdc  adrp x1,0x71050b3000
7101edbfe0  add x1,x1,#0x9c0
7101edbfe4  mov x0,x21
7101edbfe8  mov w2,wzr
7101edbfec  bl 0x71038f9510
7101edbff0  ldr x8,[x21, #0x10]
7101edbff4  sub x8,x8,#0x10
7101edbff8  mov w1,#0x8
7101edbffc  mov x0,x21
7101edc000  str x8,[x21, #0x10]
7101edc004  bl 0x71038f6930
7101edc008  str x19,[x0]
7101edc00c  ldr x8,[x21, #0x18]
7101edc010  add x1,x8,#0x40
7101edc014  mov x0,x21
7101edc018  mov x2,x20
7101edc01c  bl 0x71038f4d40
7101edc020  orr w1,wzr,#0xfffffffe
7101edc024  mov x0,x21
7101edc028  bl 0x71038f5c00
7101edc02c  cbz x21,0x7101edc0ac
7101edc030  ldr x8,[x21, #0x18]
7101edc034  ldr x8,[x8, #0x40]
7101edc038  ldr w9,[x8, #0xc]
7101edc03c  cmp w9,#0x2
7101edc040  b.cc 0x7101edc050
7101edc044  ldr x8,[x8, #0x10]
7101edc048  add x1,x8,#0x10
7101edc04c  b 0x7101edc09c
7101edc050  ldr x9,[x8, #0x18]
7101edc054  ldrb w8,[x8, #0xb]
7101edc058  mov w10,#0xffffffff
7101edc05c  lsl x8,x10,x8
7101edc060  mvn w8,w8
7101edc064  and x8,x8,#0x2
7101edc068  add x1,x9,x8, LSL #0x5
7101edc06c  adrp x8,0x7104862000
7101edc070  add x8,x8,#0x960
7101edc074  ldr w9,[x1, #0x18]
7101edc078  cmp w9,#0x13
7101edc07c  b.ne 0x7101edc08c
7101edc080  ldr x9,[x1, #0x10]
7101edc084  cmp x9,#0x2
7101edc088  b.eq 0x7101edc09c
7101edc08c  ldrsw x9,[x1, #0x1c]
7101edc090  add x1,x1,x9, LSL #0x5
7101edc094  cbnz w9,0x7101edc074
7101edc098  mov x1,x8
7101edc09c  adrp x2,0x7104281000
7101edc0a0  add x2,x2,#0x295
7101edc0a4  mov x0,x21
7101edc0a8  bl 0x71038f5390
7101edc0ac  adrp x8,0x7105314000
7101edc0b0  add x8,x8,#0x4d8
7101edc0b4  ldarb w8,[x8]
7101edc0b8  tbz w8,#0x0,0x7101edca7c
7101edc0bc  adrp x1,0x71042c5000
7101edc0c0  add x1,x1,#0x5ab
7101edc0c4  mov x0,x19
7101edc0c8  bl 0x71032cbb00
7101edc0cc  adrp x8,0x710530d000
7101edc0d0  ldrb w26,[x8, #0x568]
7101edc0d4  mov x25,x0
7101edc0d8  ldp x8,x9,[x19, #0x108]
7101edc0dc  str x0,[sp, #0x28]
7101edc0e0  cmp x8,x9
7101edc0e4  b.eq 0x7101edc1b0
7101edc0e8  ldr x1,[x8]
7101edc0ec  ldr w2,[x8, #0x8]
7101edc0f0  adrp x7,0x71043be000
7101edc0f4  add x7,x7,#0xe80
7101edc0f8  mov w4,#0x5
7101edc0fc  orr w3,wzr,#0x3
7101edc100  mov x0,x28
7101edc104  mov x5,x25
7101edc108  mov x6,xzr
7101edc10c  bl 0x7101edcad0
7101edc110  ldp x8,x9,[x19, #0x108]
7101edc114  cmp x9,x8
7101edc118  b.eq 0x7101edc1b0
7101edc11c  sub x10,x29,#0xa0
7101edc120  mov x27,#0x8ba3
7101edc124  movk x27,#0xba2e, LSL #16
7101edc128  mov x21,xzr
7101edc12c  mov x22,xzr
7101edc130  add x23,x10,#0x8
7101edc134  movk x27,#0xa2e8, LSL #32
7101edc138  movk x27,#0x2e8b, LSL #48
7101edc13c  adrp x24,0x710437c000
7101edc140  add x24,x24,#0xcde
7101edc144  add x10,x8,x21
7101edc148  ldrb w11,[x10, #0x54]
7101edc14c  cbz w11,0x7101edc194
7101edc150  ldr x20,[x10]
7101edc154  ldr w25,[x10, #0x8]
7101edc158  sub x8,x29,#0xa0
7101edc15c  mov x0,x24
7101edc160  mov w1,w22
7101edc164  bl 0x71003a4ca0
7101edc168  mov w2,w25
7101edc16c  ldr x25,[sp, #0x28]
7101edc170  mov w3,#0x2
7101edc174  mov x0,x28
7101edc178  mov x1,x20
7101edc17c  mov w4,wzr
7101edc180  mov x6,xzr
7101edc184  mov x7,x23
7101edc188  mov x5,x25
7101edc18c  bl 0x7101edcad0
7101edc190  ldp x8,x9,[x19, #0x108]
7101edc194  sub x10,x9,x8
7101edc198  asr x10,x10,#0x3
7101edc19c  mul x10,x10,x27
7101edc1a0  add x22,x22,#0x1
7101edc1a4  add x21,x21,#0x58
7101edc1a8  cmp x10,x22
7101edc1ac  b.hi 0x7101edc144
7101edc1b0  cmp x9,x8
7101edc1b4  b.eq 0x7101edc24c
7101edc1b8  cmp w26,#0x1
7101edc1bc  b.ne 0x7101edc24c
7101edc1c0  sub x9,x29,#0xa0
7101edc1c4  mov x27,#0x8ba3
7101edc1c8  movk x27,#0xba2e, LSL #16
7101edc1cc  mov x21,xzr
7101edc1d0  mov x20,xzr
7101edc1d4  add x22,x9,#0x8
7101edc1d8  movk x27,#0xa2e8, LSL #32
7101edc1dc  movk x27,#0x2e8b, LSL #48
7101edc1e0  adrp x23,0x710425f000
7101edc1e4  add x23,x23,#0xcc3
7101edc1e8  add x8,x8,x21
7101edc1ec  ldr x24,[x8]
7101edc1f0  ldr w25,[x8, #0x8]
7101edc1f4  sub x8,x29,#0xa0
7101edc1f8  mov x0,x23
7101edc1fc  mov w1,w20
7101edc200  bl 0x71003a4ca0
7101edc204  mov w2,w25
7101edc208  ldr x25,[sp, #0x28]
7101edc20c  mov w3,#0x2
7101edc210  mov x0,x28
7101edc214  mov x1,x24
7101edc218  mov w4,wzr
7101edc21c  mov x6,xzr
7101edc220  mov x7,x22
7101edc224  mov x5,x25
7101edc228  bl 0x7101edcad0
7101edc22c  ldp x8,x9,[x19, #0x108]
7101edc230  sub x9,x9,x8
7101edc234  asr x9,x9,#0x3
7101edc238  mul x9,x9,x27
7101edc23c  add x20,x20,#0x1
7101edc240  add x21,x21,#0x58
7101edc244  cmp x9,x20
7101edc248  b.hi 0x7101edc1e8
7101edc24c  cmp w26,#0x4
7101edc250  str x28,[sp, #0x20]
7101edc254  b.ne 0x7101edc460
7101edc258  adrp x8,0x710530d000
7101edc25c  ldrb w8,[x8, #0x7cb]
7101edc260  cbnz w8,0x7101edc460
7101edc264  adrp x22,0x710530d000
7101edc268  ldrb w1,[x22, #0x786]
7101edc26c  cmp w1,#0xff
7101edc270  b.eq 0x7101edc460
7101edc274  adrp x0,0x71042f8000
7101edc278  add x0,x0,#0xb70
7101edc27c  sub x8,x29,#0xa0
7101edc280  bl 0x71003a4ca0
7101edc284  ldrb w10,[x22, #0x786]
7101edc288  cmp w10,#0x7
7101edc28c  b.hi 0x7101edc5a0
7101edc290  mov w8,#0x1
7101edc294  lsl w8,w8,w10
7101edc298  mov w9,#0xc1
7101edc29c  tst w8,w9
7101edc2a0  b.eq 0x7101edc5a0
7101edc2a4  ldp x8,x9,[x19, #0x120]
7101edc2a8  cmp x9,x8
7101edc2ac  b.eq 0x7101edcac4
7101edc2b0  ldr x22,[x8]
7101edc2b4  ldr w23,[x8, #0x8]
7101edc2b8  sub x8,x29,#0xa0
7101edc2bc  add x24,x8,#0x8
7101edc2c0  adrp x7,0x71043e0000
7101edc2c4  add x7,x7,#0x93b
7101edc2c8  orr w3,wzr,#0x3
7101edc2cc  mov w4,#0x4
7101edc2d0  mov x0,x28
7101edc2d4  mov w2,w23
7101edc2d8  mov x1,x22
7101edc2dc  mov x5,x25
7101edc2e0  mov x6,x24
7101edc2e4  bl 0x7101edcad0
7101edc2e8  adrp x7,0x710439d000
7101edc2ec  add x7,x7,#0xbf5
7101edc2f0  orr w3,wzr,#0x3
7101edc2f4  mov w4,#0x4
7101edc2f8  mov x0,x28
7101edc2fc  mov x1,x22
7101edc300  mov w2,w23
7101edc304  mov x5,x25
7101edc308  mov x6,x24
7101edc30c  bl 0x7101edcad0
7101edc310  add x8,sp,#0x78
7101edc314  adrp x26,0x71042a3000
7101edc318  add x26,x26,#0x75f
7101edc31c  mov x20,x25
7101edc320  add x25,x8,#0x8
7101edc324  add x8,sp,#0x78
7101edc328  mov w1,#0x1
7101edc32c  mov x0,x26
7101edc330  bl 0x71003a4ca0
7101edc334  orr w3,wzr,#0x3
7101edc338  mov w4,#0x4
7101edc33c  mov x0,x28
7101edc340  mov x1,x22
7101edc344  mov w2,w23
7101edc348  mov x5,x20
7101edc34c  mov x6,x24
7101edc350  mov x7,x25
7101edc354  bl 0x7101edcad0
7101edc358  add x8,sp,#0x78
7101edc35c  mov w1,#0x2
7101edc360  mov x0,x26
7101edc364  bl 0x71003a4ca0
7101edc368  orr w3,wzr,#0x3
7101edc36c  mov w4,#0x4
7101edc370  mov x0,x28
7101edc374  mov x1,x22
7101edc378  mov w2,w23
7101edc37c  mov x5,x20
7101edc380  mov x6,x24
7101edc384  mov x7,x25
7101edc388  bl 0x7101edcad0
7101edc38c  add x8,sp,#0x78
7101edc390  orr w1,wzr,#0x3
7101edc394  mov x0,x26
7101edc398  bl 0x71003a4ca0
7101edc39c  orr w3,wzr,#0x3
7101edc3a0  mov w4,#0x4
7101edc3a4  mov x0,x28
7101edc3a8  mov x1,x22
7101edc3ac  mov w2,w23
7101edc3b0  mov x5,x20
7101edc3b4  mov x6,x24
7101edc3b8  mov x7,x25
7101edc3bc  bl 0x7101edcad0
7101edc3c0  add x8,sp,#0x78
7101edc3c4  mov w1,#0x4
7101edc3c8  mov x0,x26
7101edc3cc  bl 0x71003a4ca0
7101edc3d0  orr w3,wzr,#0x3
7101edc3d4  mov w4,#0x4
7101edc3d8  mov x0,x28
7101edc3dc  mov x1,x22
7101edc3e0  mov w2,w23
7101edc3e4  mov x5,x20
7101edc3e8  mov x6,x24
7101edc3ec  mov x7,x25
7101edc3f0  bl 0x7101edcad0
7101edc3f4  mov w1,#0x5
7101edc3f8  add x8,sp,#0x78
7101edc3fc  mov x0,x26
7101edc400  bl 0x71003a4ca0
7101edc404  orr w3,wzr,#0x3
7101edc408  mov w4,#0x4
7101edc40c  mov x0,x28
7101edc410  mov x1,x22
7101edc414  mov w2,w23
7101edc418  mov x5,x20
7101edc41c  mov x6,x24
7101edc420  mov x7,x25
7101edc424  bl 0x7101edcad0
7101edc428  add x8,sp,#0x78
7101edc42c  orr w1,wzr,#0x6
7101edc430  mov x0,x26
7101edc434  bl 0x71003a4ca0
7101edc438  orr w3,wzr,#0x3
7101edc43c  mov w4,#0x4
7101edc440  mov x0,x28
7101edc444  mov x1,x22
7101edc448  mov w2,w23
7101edc44c  mov x5,x20
7101edc450  mov x6,x24
7101edc454  mov x7,x25
7101edc458  bl 0x7101edcad0
7101edc45c  b 0x7101edc8c0
7101edc460  ldp x8,x9,[x19, #0x120]
7101edc464  sub x10,x9,x8
7101edc468  mov x11,#0x8ba3
7101edc46c  movk x11,#0xba2e, LSL #16
7101edc470  movk x11,#0xa2e8, LSL #32
7101edc474  movk x11,#0x2e8b, LSL #48
7101edc478  asr x10,x10,#0x3
7101edc47c  mul x22,x10,x11
7101edc480  mov w10,#0x5
7101edc484  mov w11,#0x4
7101edc488  cmp w22,#0x5
7101edc48c  cinc w10,w10,ge
7101edc490  cmp w22,#0x2
7101edc494  csel w23,w11,w10,lt
7101edc498  cmp w22,#0x1
7101edc49c  b.lt 0x7101edc8c0
7101edc4a0  adrp x10,0x7104867000
7101edc4a4  add x10,x10,#0xc2e
7101edc4a8  adrp x11,0x71043ae000
7101edc4ac  add x11,x11,#0x26
7101edc4b0  cmp w26,#0x1
7101edc4b4  csel x10,x11,x10,eq
7101edc4b8  cmp x9,x8
7101edc4bc  stp x10,x19,[sp, #0x10]
7101edc4c0  b.eq 0x7101edc594
7101edc4c4  ldr x24,[sp, #0x28]
7101edc4c8  sub x9,x29,#0xa0
7101edc4cc  mov x28,xzr
7101edc4d0  mov x25,xzr
7101edc4d4  add x27,x9,#0x8
7101edc4d8  sxtw x20,w22
7101edc4dc  add x8,x8,x28
7101edc4e0  ldr x1,[sp, #0x10]
7101edc4e4  ldr w26,[x8, #0x8]
7101edc4e8  ldr x21,[x8]
7101edc4ec  sub x8,x29,#0xa0
7101edc4f0  adrp x0,0x71042c5000
7101edc4f4  add x0,x0,#0x5bc
7101edc4f8  mov w2,w22
7101edc4fc  mov w3,w25
7101edc500  bl 0x71003a4ca0
7101edc504  ldr x19,[sp, #0x20]
7101edc508  orr w3,wzr,#0x3
7101edc50c  mov x1,x21
7101edc510  mov w2,w26
7101edc514  mov w4,w23
7101edc518  mov x5,x24
7101edc51c  mov x6,x27
7101edc520  adrp x7,0x71043be000
7101edc524  add x7,x7,#0xe80
7101edc528  mov x0,x19
7101edc52c  bl 0x7101edcad0
7101edc530  orr w3,wzr,#0x3
7101edc534  mov x0,x19
7101edc538  mov x1,x21
7101edc53c  mov w2,w26
7101edc540  mov w4,w23
7101edc544  mov x5,x24
7101edc548  mov x6,x27
7101edc54c  adrp x7,0x7104455000
7101edc550  add x7,x7,#0x2e4
7101edc554  bl 0x7101edcad0
7101edc558  ldr x19,[sp, #0x18]
7101edc55c  add x25,x25,#0x1
7101edc560  cmp x25,x20
7101edc564  b.ge 0x7101edc8c0
7101edc568  ldp x8,x9,[x19, #0x120]
7101edc56c  sub x9,x9,x8
7101edc570  mov x10,#0x8ba3
7101edc574  movk x10,#0xba2e, LSL #16
7101edc578  movk x10,#0xa2e8, LSL #32
7101edc57c  movk x10,#0x2e8b, LSL #48
7101edc580  asr x9,x9,#0x3
7101edc584  mul x9,x9,x10
7101edc588  add x28,x28,#0x58
7101edc58c  cmp x9,x25
7101edc590  b.hi 0x7101edc4dc
7101edc594  ldr x8,[sp, #0x18]
7101edc598  add x0,x8,#0x120
7101edc59c  bl 0x71039c1330
7101edc5a0  ldp x8,x9,[x19, #0x120]
7101edc5a4  cmp x9,x8
7101edc5a8  b.eq 0x7101edc8c0
7101edc5ac  sub x11,x29,#0xa0
7101edc5b0  add x11,x11,#0x8
7101edc5b4  str x11,[sp, #0x8]
7101edc5b8  add x11,sp,#0x78
7101edc5bc  ldr x26,[sp, #0x28]
7101edc5c0  ldr x21,[sp, #0x8]
7101edc5c4  add x11,x11,#0x8
7101edc5c8  str x11,[sp, #0x18]
7101edc5cc  add x11,sp,#0x30
7101edc5d0  mov x13,#0x8ba3
7101edc5d4  movk x13,#0xba2e, LSL #16
7101edc5d8  mov x28,xzr
7101edc5dc  adrp x25,0x71044fc000
7101edc5e0  add x25,x25,#0x308
7101edc5e4  add x11,x11,#0x8
7101edc5e8  movk x13,#0xa2e8, LSL #32
7101edc5ec  movk x13,#0x2e8b, LSL #48
7101edc5f0  str x11,[sp, #0x10]
7101edc5f4  mov w27,#0x1
7101edc5f8  b 0x7101edc608
7101edc5fc  ldrb w10,[x22, #0x786]
7101edc600  add x27,x27,#0x1
7101edc604  add x28,x28,#0x58
7101edc608  and w10,w10,#0xff
7101edc60c  sub w10,w10,#0x1
7101edc610  cmp w10,#0x7
7101edc614  b.hi 0x7101edc8ac
7101edc618  ldrsw x10,[x25, x10, LSL #0x2]
7101edc61c  add x11,x8,x28
7101edc620  ldr x24,[x11]
7101edc624  ldrsw x23,[x11, #0x8]
7101edc628  add x10,x10,x25
7101edc62c  br x10
7101edc630  and x11,x24,#-0x100000000000000
7101edc634  mov x12,#-0x3f00000000000000
7101edc638  and x10,x24,#0xffffffffff
7101edc63c  cmp x11,x12
7101edc640  ccmp x10,#0x0,#0x4,eq
7101edc644  b.eq 0x7101edc8ac
7101edc648  mov x11,#0x4ff5
7101edc64c  movk x11,#0x915a, LSL #16
7101edc650  movk x11,#0x12, LSL #32
7101edc654  cmp x10,x11
7101edc658  b.gt 0x7101edc7e4
7101edc65c  mov x11,#0x85ed
7101edc660  movk x11,#0x5cf9, LSL #16
7101edc664  movk x11,#0x10, LSL #32
7101edc668  cmp x10,x11
7101edc66c  b.eq 0x7101edc6d8
7101edc670  mov x11,#0xc82e
7101edc674  movk x11,#0x80f1, LSL #16
7101edc678  movk x11,#0x12, LSL #32
7101edc67c  cmp x10,x11
7101edc680  b.eq 0x7101edc7dc
7101edc684  b 0x7101edc8ac
7101edc688  mov x11,#0x1bb1
7101edc68c  movk x11,#0x5d8a, LSL #16
7101edc690  and x10,x24,#-0xffff0000000001
7101edc694  movk x11,#0x10, LSL #32
7101edc698  movk x11,#0xc100, LSL #48
7101edc69c  cmp x10,x11
7101edc6a0  b.ne 0x7101edc8ac
7101edc6a4  cmp w23,#0x8
7101edc6a8  adrp x10,0x7104470000
7101edc6ac  add x10,x10,#0x980
7101edc6b0  b.cc 0x7101edc75c
7101edc6b4  b 0x7101edcacc
7101edc6b8  and x10,x24,#-0xffff0000000001
7101edc6bc  cbnz w23,0x7101edc7c0
7101edc6c0  mov x11,#0xe495
7101edc6c4  movk x11,#0x29eb, LSL #16
7101edc6c8  movk x11,#0xc, LSL #32
7101edc6cc  movk x11,#0xc100, LSL #48
7101edc6d0  cmp x10,x11
7101edc6d4  b.ne 0x7101edc7c0
7101edc6d8  mov w20,wzr
7101edc6dc  b 0x7101edc828
7101edc6e0  and x11,x24,#-0x100000000000000
7101edc6e4  mov x12,#-0x3f00000000000000
7101edc6e8  and x10,x24,#0xffffffffff
7101edc6ec  cmp x11,x12
7101edc6f0  ccmp x10,#0x0,#0x4,eq
7101edc6f4  b.eq 0x7101edc8ac
7101edc6f8  mov x11,#0x7219
7101edc6fc  movk x11,#0x1885, LSL #16
7101edc700  movk x11,#0xe, LSL #32
7101edc704  cmp x10,x11
7101edc708  b.eq 0x7101edc814
7101edc70c  mov x11,#0x4df
7101edc710  movk x11,#0xe02f, LSL #16
7101edc714  movk x11,#0xe, LSL #32
7101edc718  cmp x10,x11
7101edc71c  b.ne 0x7101edc8ac
7101edc720  cmp w23,#0x0
7101edc724  orr w8,wzr,#0x3
7101edc728  csel w20,wzr,w8,eq
7101edc72c  b 0x7101edc828
7101edc730  mov x11,#0x1bb1
7101edc734  movk x11,#0x5d8a, LSL #16
7101edc738  and x10,x24,#-0xffff0000000001
7101edc73c  movk x11,#0x10, LSL #32
7101edc740  movk x11,#0xc100, LSL #48
7101edc744  cmp x10,x11
7101edc748  b.ne 0x7101edc8ac
7101edc74c  cmp w23,#0x8
7101edc750  adrp x10,0x7104470000
7101edc754  add x10,x10,#0xe20
7101edc758  b.cs 0x7101edcacc
7101edc75c  ldr w20,[x10, x23, LSL #0x2]
7101edc760  tbz w20,#0x1f,0x7101edc828
7101edc764  b 0x7101edc8ac
7101edc768  and x11,x24,#-0x100000000000000
7101edc76c  mov x12,#-0x3f00000000000000
7101edc770  and x10,x24,#0xffffffffff
7101edc774  cmp x11,x12
7101edc778  ccmp x10,#0x0,#0x4,eq
7101edc77c  b.eq 0x7101edc8ac
7101edc780  mov x11,#0x1d87
7101edc784  movk x11,#0x57ab, LSL #16
7101edc788  movk x11,#0x12, LSL #32
7101edc78c  cmp x10,x11
7101edc790  b.eq 0x7101edc80c
7101edc794  mov x11,#0xfb2b
7101edc798  movk x11,#0xfdfd, LSL #16
7101edc79c  movk x11,#0x13, LSL #32
7101edc7a0  cmp x10,x11
7101edc7a4  b.eq 0x7101edc6d8
7101edc7a8  mov x11,#0x1f77
7101edc7ac  movk x11,#0xd706, LSL #16
7101edc7b0  movk x11,#0x15, LSL #32
7101edc7b4  cmp x10,x11
7101edc7b8  b.eq 0x7101edc7dc
7101edc7bc  b 0x7101edc8ac
7101edc7c0  mov x11,#0x63d6
7101edc7c4  movk x11,#0xf1f2, LSL #16
7101edc7c8  movk x11,#0xd, LSL #32
7101edc7cc  movk x11,#0xc100, LSL #48
7101edc7d0  cmp x10,x11
7101edc7d4  b.ne 0x7101edc8ac
7101edc7d8  cbnz w23,0x7101edc8ac
7101edc7dc  mov w20,#0x1
7101edc7e0  b 0x7101edc828
7101edc7e4  mov x11,#0x4ff6
7101edc7e8  movk x11,#0x915a, LSL #16
7101edc7ec  movk x11,#0x12, LSL #32
7101edc7f0  cmp x10,x11
7101edc7f4  b.eq 0x7101edc824
7101edc7f8  mov x11,#0xf367
7101edc7fc  movk x11,#0xef73, LSL #16
7101edc800  movk x11,#0x14, LSL #32
7101edc804  cmp x10,x11
7101edc808  b.ne 0x7101edc8ac
7101edc80c  mov w20,#0x2
7101edc810  b 0x7101edc828
7101edc814  cmp w23,#0x0
7101edc818  mov w8,#0x1
7101edc81c  cinc w20,w8,ne
7101edc820  b 0x7101edc828
7101edc824  orr w20,wzr,#0x3
7101edc828  add x8,sp,#0x78
7101edc82c  adrp x0,0x71042a3000
7101edc830  add x0,x0,#0x75f
7101edc834  mov w1,w20
7101edc838  bl 0x71003a4ca0
7101edc83c  add x8,sp,#0x30
7101edc840  adrp x0,0x71042b4000
7101edc844  add x0,x0,#0xbaf
7101edc848  mov w1,w20
7101edc84c  bl 0x71003a4ca0
7101edc850  ldp x7,x20,[sp, #0x18]
7101edc854  orr w3,wzr,#0x3
7101edc858  mov w4,#0x4
7101edc85c  mov x1,x24
7101edc860  mov w2,w23
7101edc864  mov x5,x26
7101edc868  mov x6,x21
7101edc86c  mov x0,x20
7101edc870  bl 0x7101edcad0
7101edc874  ldr x7,[sp, #0x10]
7101edc878  orr w3,wzr,#0x3
7101edc87c  mov w4,#0x4
7101edc880  mov x0,x20
7101edc884  mov x1,x24
7101edc888  mov w2,w23
7101edc88c  mov x5,x26
7101edc890  mov x6,x21
7101edc894  bl 0x7101edcad0
7101edc898  ldp x8,x9,[x19, #0x120]
7101edc89c  mov x13,#0x8ba3
7101edc8a0  movk x13,#0xba2e, LSL #16
7101edc8a4  movk x13,#0xa2e8, LSL #32
7101edc8a8  movk x13,#0x2e8b, LSL #48
7101edc8ac  sub x10,x9,x8
7101edc8b0  asr x10,x10,#0x3
7101edc8b4  mul x10,x10,x13
7101edc8b8  cmp x10,x27
7101edc8bc  b.hi 0x7101edc5fc
7101edc8c0  adrp x8,0x710530a000
7101edc8c4  add x8,x8,#0x7c0
7101edc8c8  ldr x20,[x8]
7101edc8cc  ldr w8,[x8, #0x8]
7101edc8d0  orr w9,wzr,#0xe
7101edc8d4  mov w10,#0x10
7101edc8d8  orr w11,wzr,#0xf
7101edc8dc  cmp w8,#0x1
7101edc8e0  csel w9,w10,w9,eq
7101edc8e4  cmp w8,#0x2
7101edc8e8  ldr x8,[sp, #0x28]
7101edc8ec  ldr x8,[x8]
7101edc8f0  ldr x8,[x8]
7101edc8f4  add x0,x8,#0x8
7101edc8f8  adrp x1,0x710439d000
7101edc8fc  add x1,x1,#0xc09
7101edc900  sub x8,x29,#0xa0
7101edc904  csel w21,w11,w9,eq
7101edc908  bl 0x7103776910
7101edc90c  ldr x0,[sp, #0x20]
7101edc910  mov x1,x20
7101edc914  mov w2,w21
7101edc918  bl 0x710323f4a0
7101edc91c  ldur x20,[x29, #-0x98]
7101edc920  mov x1,x0
7101edc924  mov x0,x20
7101edc928  bl 0x7103778b80
7101edc92c  adrp x8,0x710523d000
7101edc930  add x8,x8,#0x9a8
7101edc934  stp x8,xzr,[x29, #-0xa0]
7101edc938  cbz x20,0x7101edc944
7101edc93c  mov x0,x20
7101edc940  bl 0x710392eb40
7101edc944  mov x20,x19
7101edc948  ldr x8,[x20, #0x10]!
7101edc94c  ldr x9,[x20, #0x8]
7101edc950  sub x10,x9,x8
7101edc954  lsr x11,x10,#0x3
7101edc958  cmp w11,#0x1
7101edc95c  b.lt 0x7101edca5c
7101edc960  mov w23,#0x4ffff
7101edc964  ubfx x10,x10,#0x3,#0x20
7101edc968  mov x21,xzr
7101edc96c  mov x22,xzr
7101edc970  sub x24,x10,#0x1
7101edc974  add w25,w23,#0x4b0, LSL #12
7101edc978  mov w26,#0x9
7101edc97c  orr x27,xzr,#0x100000000
7101edc980  adrp x28,0x7104545000
7101edc984  add x28,x28,#0xd60
7101edc988  b 0x7101edc998
7101edc98c  ldp x8,x9,[x19, #0x10]
7101edc990  add x22,x22,#0x1
7101edc994  add x21,x21,x27
7101edc998  sub x9,x9,x8
7101edc99c  asr x10,x21,#0x20
7101edc9a0  asr x9,x9,#0x3
7101edc9a4  cmp x9,x10
7101edc9a8  b.ls 0x7101edcabc
7101edc9ac  ldr x8,[x8, x10, LSL #0x3]
7101edc9b0  ldr x8,[x8]
7101edc9b4  ldr w9,[x28, x22, LSL #0x2]
7101edc9b8  add x2,x22,x9
7101edc9bc  cmp w2,w25
7101edc9c0  mov w1,w26
7101edc9c4  b.gt 0x7101edca4c
7101edc9c8  orr w9,w23,#0x200000
7101edc9cc  cmp w2,w9
7101edc9d0  b.le 0x7101edc9dc
7101edc9d4  orr w1,wzr,#0x7
7101edc9d8  b 0x7101edca4c
7101edc9dc  cmp w2,#0x200, LSL #12
7101edc9e0  mov w1,#0x5
7101edc9e4  b.ge 0x7101edca4c
7101edc9e8  orr w9,w23,#0x100000
7101edc9ec  cmp w2,w9
7101edc9f0  b.le 0x7101edc9fc
7101edc9f4  orr w1,wzr,#0x6
7101edc9f8  b 0x7101edca4c
7101edc9fc  cmp w2,#0x100, LSL #12
7101edca00  b.lt 0x7101edca0c
7101edca04  mov w1,#0x4
7101edca08  b 0x7101edca4c
7101edca0c  add w9,w23,#0xae, LSL #12
7101edca10  cmp w2,w9
7101edca14  b.le 0x7101edca20
7101edca18  mov w1,#0x8
7101edca1c  b 0x7101edca4c
7101edca20  cmp w2,w23
7101edca24  b.le 0x7101edca30
7101edca28  mov w1,#0x2
7101edca2c  b 0x7101edca4c
7101edca30  cmp w2,#0x10, LSL #12
7101edca34  b.lt 0x7101edca40
7101edca38  mov w1,#0x1
7101edca3c  b 0x7101edca4c
7101edca40  cmp w2,#0x1
7101edca44  orr w9,wzr,#0x3
7101edca48  csel w1,w9,wzr,lt
7101edca4c  ldr x0,[x8]
7101edca50  bl 0x7103775dc0
7101edca54  cmp x24,x22
7101edca58  b.ne 0x7101edc98c
7101edca5c  ldp x29,x30,[sp, #0x160]
7101edca60  ldp x20,x19,[sp, #0x150]
7101edca64  ldp x22,x21,[sp, #0x140]
7101edca68  ldp x24,x23,[sp, #0x130]
7101edca6c  ldp x26,x25,[sp, #0x120]
7101edca70  ldp x28,x27,[sp, #0x110]
7101edca74  add sp,sp,#0x170
7101edca78  ret
7101edca7c  adrp x0,0x7105314000
7101edca80  add x0,x0,#0x4d8
7101edca84  bl 0x71039c06b0
7101edca88  cbz w0,0x7101edc0bc
7101edca8c  bl 0x7101764000
7101edca90  adrp x0,0x7101763000
7101edca94  add x0,x0,#0xc40
7101edca98  adrp x1,0x71052c5000
7101edca9c  add x1,x1,#0x180
7101edcaa0  adrp x2,0x7104f17000
7101edcaa4  add x2,x2,#0x0
7101edcaa8  bl 0x71000001c0
7101edcaac  adrp x0,0x7105314000
7101edcab0  add x0,x0,#0x4d8
7101edcab4  bl 0x71039c06c0
7101edcab8  b 0x7101edc0bc
7101edcabc  mov x0,x20
7101edcac0  bl 0x71039c1330
7101edcac4  add x0,x19,#0x120
7101edcac8  bl 0x71039c1330
7101edcacc  bl 0x71039c2650
