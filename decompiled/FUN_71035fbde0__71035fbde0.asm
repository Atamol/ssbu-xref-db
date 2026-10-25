// addr:      71035fbde0
// offset:    0x35fbde0
// name:      FUN_71035fbde0
// mangled:   
// size:      4676

71035fbde0  sub sp,sp,#0x1b0
71035fbde4  stp x28,x27,[sp, #0x150]
71035fbde8  stp x26,x25,[sp, #0x160]
71035fbdec  stp x24,x23,[sp, #0x170]
71035fbdf0  stp x22,x21,[sp, #0x180]
71035fbdf4  stp x20,x19,[sp, #0x190]
71035fbdf8  stp x29,x30,[sp, #0x1a0]
71035fbdfc  add x29,sp,#0x1a0
71035fbe00  ldr x8,[x1, #0x10]
71035fbe04  cbz x8,0x71035fcfa4
71035fbe08  ldr x8,[x8]
71035fbe0c  ldr x9,[x1, #0x18]
71035fbe10  cmp x8,x9
71035fbe14  b.ne 0x71035fcfa4
71035fbe18  ldr x25,[x1, #0x8]
71035fbe1c  ldrb w8,[x25, #0x10]
71035fbe20  cbz w8,0x71035fcfa4
71035fbe24  ldr x26,[x0, #0x28]
71035fbe28  ldr x8,[x26, #0x70]
71035fbe2c  mov x21,x0
71035fbe30  cbz x8,0x71035fcfa4
71035fbe34  ldr x8,[x8]
71035fbe38  ldr x9,[x26, #0x78]
71035fbe3c  cmp x8,x9
71035fbe40  b.ne 0x71035fcfa4
71035fbe44  ldr x8,[x26, #0x68]
71035fbe48  mov w20,w2
71035fbe4c  cbz x8,0x71035fbef8
71035fbe50  ldr w9,[x8, #0x18]
71035fbe54  eor w1,w9,w9, ASR #0x1f
71035fbe58  add x2,x8,#0x20
71035fbe5c  sub x0,x29,#0x98
71035fbe60  bl 0x7103662550
71035fbe64  ldur x19,[x29, #-0x90]
71035fbe68  ldr w8,[x19, #0x5f0]
71035fbe6c  eor w1,w8,w8, ASR #0x1f
71035fbe70  add x2,x19,#0x5f8
71035fbe74  sub x0,x29,#0x98
71035fbe78  bl 0x71035fd030
71035fbe7c  ldur x0,[x29, #-0x90]
71035fbe80  ldr x8,[x0]
71035fbe84  ldr x9,[x8, #0x20]
71035fbe88  sub x8,x29,#0x98
71035fbe8c  blr x9
71035fbe90  ldur x8,[x29, #-0x88]
71035fbe94  cbz x8,0x71035fbed4
71035fbe98  ldr x8,[x8]
71035fbe9c  ldur x9,[x29, #-0x80]
71035fbea0  cmp x8,x9
71035fbea4  b.ne 0x71035fbed4
71035fbea8  ldur x8,[x29, #-0x90]
71035fbeac  cbz x8,0x71035fbed4
71035fbeb0  ldr x9,[x8, #0x8]
71035fbeb4  cbz x9,0x71035fbed4
71035fbeb8  adrp x9,0x7105231000
71035fbebc  add x9,x9,#0xee8
71035fbec0  str x8,[x9]
71035fbec4  ldr x8,[x8, #0x8]
71035fbec8  str x8,[x9, #0x8]
71035fbecc  ldr x8,[x8]
71035fbed0  b 0x71035fbee4
71035fbed4  mov x8,xzr
71035fbed8  adrp x9,0x7105231000
71035fbedc  add x9,x9,#0xee8
71035fbee0  stp xzr,xzr,[x9]
71035fbee4  adrp x9,0x7105231000
71035fbee8  str x8,[x9, #0xef8]
71035fbeec  ldr x26,[x21, #0x28]
71035fbef0  add x8,x19,#0x358
71035fbef4  b 0x71035fbf08
71035fbef8  adrp x9,0x7105231000
71035fbefc  add x9,x9,#0xee8
71035fbf00  str xzr,[x9]
71035fbf04  stp xzr,xzr,[x9, #0x8]
71035fbf08  adrp x9,0x7105335000
71035fbf0c  str x8,[x9, #0xec8]
71035fbf10  adrp x8,0x7105337000
71035fbf14  add x8,x8,#0x3c0
71035fbf18  ldarb w8,[x8]
71035fbf1c  tbz w8,#0x0,0x71035fcfc4
71035fbf20  adrp x8,0x7105337000
71035fbf24  ldrb w8,[x8, #0x390]
71035fbf28  str xzr,[sp, #0xd0]
71035fbf2c  stp xzr,xzr,[sp, #0xd8]
71035fbf30  tbnz w8,#0x0,0x71035fbf50
71035fbf34  adrp x8,0x7105337000
71035fbf38  add x8,x8,#0x390
71035fbf3c  ldr x9,[x8, #0x10]
71035fbf40  str x9,[sp, #0xe0]
71035fbf44  ldp x9,x8,[x8]
71035fbf48  stp x9,x8,[sp, #0xd0]
71035fbf4c  b 0x71035fc01c
71035fbf50  adrp x8,0x7105337000
71035fbf54  add x8,x8,#0x398
71035fbf58  ldr x19,[x8]
71035fbf5c  cmn x19,#0x10
71035fbf60  b.cs 0x71035fd01c
71035fbf64  ldr x22,[x8, #0x8]
71035fbf68  cmp x19,#0x17
71035fbf6c  b.cs 0x71035fbf88
71035fbf70  lsl w8,w19,#0x1
71035fbf74  strb w8,[sp, #0xd0]
71035fbf78  add x8,sp,#0xd0
71035fbf7c  orr x24,x8,#0x1
71035fbf80  cbnz x19,0x71035fc008
71035fbf84  b 0x71035fc018
71035fbf88  add x8,x19,#0x10
71035fbf8c  and x23,x8,#-0x10
71035fbf90  sub x0,x29,#0xb8
71035fbf94  mov w1,#0x10
71035fbf98  mov x2,x23
71035fbf9c  bl 0x710392e1f0
71035fbfa0  cmp w0,#0xc
71035fbfa4  b.ne 0x71035fbfdc
71035fbfa8  adrp x8,0x710593d000
71035fbfac  ldr x0,[x8, #0x2b0]
71035fbfb0  cbz x0,0x71035fbfdc
71035fbfb4  stur x23,[x29, #-0x98]
71035fbfb8  ldr x8,[x0]
71035fbfbc  ldr x8,[x8, #0x30]
71035fbfc0  sub x1,x29,#0x98
71035fbfc4  blr x8
71035fbfc8  tbz w0,#0x0,0x71035fbfdc
71035fbfcc  sub x0,x29,#0xb8
71035fbfd0  mov w1,#0x10
71035fbfd4  mov x2,x23
71035fbfd8  bl 0x710392e1f0
71035fbfdc  adrp x8,0x71052a8000
71035fbfe0  ldr x8,[x8, #0xa78]
71035fbfe4  cbz x8,0x71035fbff8
71035fbfe8  ldur x2,[x29, #-0xb8]
71035fbfec  mov w1,#0x10
71035fbff0  mov x0,x23
71035fbff4  bl 0x71039c19e0
71035fbff8  ldur x24,[x29, #-0xb8]
71035fbffc  orr x8,x23,#0x1
71035fc000  str x8,[sp, #0xd0]
71035fc004  stp x19,x24,[sp, #0xd8]
71035fc008  mov x0,x24
71035fc00c  mov x1,x22
71035fc010  mov x2,x19
71035fc014  bl 0x71039c00e0
71035fc018  strb wzr,[x24, x19, LSL ]
71035fc01c  ldrb w8,[x21, #0x18]
71035fc020  cmp w8,#0x0
71035fc024  str w8,[sp, #0x30]
71035fc028  cset w8,ne
71035fc02c  str w8,[sp, #0x34]
71035fc030  ldp x19,x8,[x21, #0x80]
71035fc034  cmp x19,x8
71035fc038  str x8,[sp, #0x50]
71035fc03c  b.eq 0x71035fcf7c
71035fc040  add x8,sp,#0xd0
71035fc044  orr x8,x8,#0x1
71035fc048  str x8,[sp, #0x48]
71035fc04c  sub x8,x29,#0x98
71035fc050  add x9,x8,#0x8
71035fc054  str x9,[sp, #0xa8]
71035fc058  sub x9,x29,#0xb8
71035fc05c  add x9,x9,#0x8
71035fc060  mov w22,wzr
71035fc064  add x8,x8,#0x28
71035fc068  stp xzr,x8,[sp, #0x38]
71035fc06c  stp x26,x25,[sp, #0x20]
71035fc070  str x9,[sp, #0xa0]
71035fc074  sxtw x9,w20
71035fc078  str x9,[sp, #0x80]
71035fc07c  b 0x71035fcd98
71035fc080  ldr x8,[sp, #0x38]
71035fc084  ldr w8,[x8, #0x18]
71035fc088  cmp w8,#0x0
71035fc08c  cset w8,ne
71035fc090  str w8,[sp, #0x34]
71035fc094  ldrb w8,[x19, #0x63]
71035fc098  cbnz w8,0x71035fcf24
71035fc09c  mov x9,x19
71035fc0a0  ldr x8,[x9, #0x98]!
71035fc0a4  str x9,[sp, #0xc8]
71035fc0a8  sturb wzr,[x9, #-0x36]
71035fc0ac  str x8,[x9, #0x8]
71035fc0b0  ldp x20,x9,[x9, #-0x20]
71035fc0b4  cmp x9,x20
71035fc0b8  b.eq 0x71035fcd90
71035fc0bc  ldr x8,[sp, #0x38]
71035fc0c0  cmp x20,x9
71035fc0c4  str x8,[x19, #0x90]
71035fc0c8  b.eq 0x71035fcd90
71035fc0cc  str x9,[sp, #0x70]
71035fc0d0  b 0x71035fc118
71035fc0d4  adrp x0,0x7105337000
71035fc0d8  add x0,x0,#0x3c8
71035fc0dc  bl 0x71039c06b0
71035fc0e0  cbz w0,0x71035fc158
71035fc0e4  adrp x1,0x7105337000
71035fc0e8  add x1,x1,#0x3a8
71035fc0ec  adrp x0,0x71035fb000
71035fc0f0  add x0,x0,#0x3a0
71035fc0f4  adrp x2,0x7104f17000
71035fc0f8  add x2,x2,#0x0
71035fc0fc  stp xzr,xzr,[x1, #0x8]
71035fc100  str xzr,[x1]
71035fc104  bl 0x71000001c0
71035fc108  adrp x0,0x7105337000
71035fc10c  add x0,x0,#0x3c8
71035fc110  bl 0x71039c06c0
71035fc114  b 0x71035fc158
71035fc118  ldr x26,[x20]
71035fc11c  ldrb w8,[x26, #0xb0]
71035fc120  str x20,[sp, #0x98]
71035fc124  cbz w8,0x71035fc148
71035fc128  adrp x9,0x7105231000
71035fc12c  ldr x8,[x26, #0xc0]
71035fc130  ldr x9,[x9, #0xf00]
71035fc134  cmp x9,x8
71035fc138  b.ne 0x71035fc148
71035fc13c  add x20,x26,#0xc8
71035fc140  add x27,x26,#0xd0
71035fc144  b 0x71035fcb70
71035fc148  adrp x8,0x7105337000
71035fc14c  add x8,x8,#0x3c8
71035fc150  ldarb w8,[x8]
71035fc154  tbz w8,#0x0,0x71035fc0d4
71035fc158  adrp x8,0x7105337000
71035fc15c  ldr x8,[x8, #0xce8]
71035fc160  ldrb w8,[x8, #0x58d]
71035fc164  cbz w8,0x71035fc1b4
71035fc168  mov x8,x26
71035fc16c  ldrb w9,[x8, #0x18]!
71035fc170  tst w9,#0x1
71035fc174  ldr x10,[x8, #0x8]
71035fc178  lsr x11,x9,#0x1
71035fc17c  csel x10,x11,x10,eq
71035fc180  cmp x10,#0x9
71035fc184  b.ne 0x71035fc1bc
71035fc188  ldr x10,[x26, #0x28]
71035fc18c  tst w9,#0x1
71035fc190  csinc x0,x10,x8,ne
71035fc194  adrp x1,0x7104453000
71035fc198  add x1,x1,#0x570
71035fc19c  mov w2,#0x9
71035fc1a0  bl 0x71039c0250
71035fc1a4  cmp w0,#0x0
71035fc1a8  mov w8,#0x2
71035fc1ac  csinv w8,w8,wzr,ne
71035fc1b0  b 0x71035fc1c0
71035fc1b4  mov w8,#0xffffffff
71035fc1b8  b 0x71035fc1c0
71035fc1bc  mov w8,#0x2
71035fc1c0  str w8,[sp, #0x7c]
71035fc1c4  adrp x8,0x7105231000
71035fc1c8  mov x20,x26
71035fc1cc  ldr x8,[x8, #0xf00]
71035fc1d0  ldr x9,[x20, #0xc8]!
71035fc1d4  stur x8,[x20, #-0x8]
71035fc1d8  ldurh w8,[x20, #-0x8e]
71035fc1dc  add x27,x20,#0x8
71035fc1e0  sturb wzr,[x20, #-0x18]
71035fc1e4  str x9,[x20, #0x8]
71035fc1e8  cbz w8,0x71035fcb68
71035fc1ec  adrp x8,0x7105335000
71035fc1f0  ldr x24,[x8, #0xeb0]
71035fc1f4  ldr x28,[x26, #0x40]
71035fc1f8  mov w23,wzr
71035fc1fc  add x25,x26,#0x18
71035fc200  stp x27,x20,[sp, #0x88]
71035fc204  stp x25,x24,[sp, #0xb0]
71035fc208  b 0x71035fca04
71035fc20c  ldr x9,[sp, #0xa8]
71035fc210  ldr x8,[x22, #0x360]
71035fc214  str xzr,[x9]
71035fc218  stp xzr,xzr,[x9, #0x8]
71035fc21c  adrp x9,0x7105231000
71035fc220  add x9,x9,#0x9f0
71035fc224  stur x9,[x29, #-0x98]
71035fc228  ldr x9,[x8, #0x30]
71035fc22c  cbz x9,0x71035fc444
71035fc230  ldr x9,[x9]
71035fc234  ldr x10,[x8, #0x38]
71035fc238  cmp x9,x10
71035fc23c  ldr x21,[sp, #0xc0]
71035fc240  b.ne 0x71035fc44c
71035fc244  ldr x9,[x8, #0x28]
71035fc248  stur x9,[x29, #-0x90]
71035fc24c  cbz x9,0x71035fc4dc
71035fc250  ldr x10,[x9, #0x8]
71035fc254  stur x10,[x29, #-0x88]
71035fc258  ldr x10,[x10]
71035fc25c  b 0x71035fc4e4
71035fc260  mov x10,xzr
71035fc264  str xzr,[x9, #0x10]
71035fc268  str x10,[x9, #0x18]
71035fc26c  ldr x9,[x21, #0x10]
71035fc270  cbz x9,0x71035fc29c
71035fc274  ldr x9,[x9]
71035fc278  ldr x10,[x21, #0x18]
71035fc27c  cmp x9,x10
71035fc280  b.ne 0x71035fc29c
71035fc284  ldr x8,[x8, #0x8]
71035fc288  add x8,x8,#0x8
71035fc28c  ldaxr w9,[x8]
71035fc290  add w9,w9,#0x1
71035fc294  stlxr w10,w9,[x8]
71035fc298  cbnz w10,0x71035fc28c
71035fc29c  ldr x8,[x24, #0x78]
71035fc2a0  ldr x9,[x8, #0x20]
71035fc2a4  ldr w10,[x8, #0x28]
71035fc2a8  orr x11,xzr,#0x800000000
71035fc2ac  str x11,[x9, x10, LSL #0x3]
71035fc2b0  ldr w9,[x8, #0x28]
71035fc2b4  add w9,w9,#0x1
71035fc2b8  str w9,[x8, #0x28]
71035fc2bc  ldp x9,x8,[x26, #0xd0]
71035fc2c0  cmp x9,x8
71035fc2c4  b.cs 0x71035fc2dc
71035fc2c8  str x24,[x9]
71035fc2cc  ldr x8,[x27]
71035fc2d0  add x8,x8,#0x8
71035fc2d4  str x8,[x27]
71035fc2d8  b 0x71035fc3e0
71035fc2dc  ldr x25,[x20]
71035fc2e0  sub x2,x9,x25
71035fc2e4  asr x27,x2,#0x3
71035fc2e8  add x9,x27,#0x1
71035fc2ec  lsr x10,x9,#0x3d
71035fc2f0  cbnz x10,0x71035fd014
71035fc2f4  sub x8,x8,x25
71035fc2f8  asr x10,x8,#0x3
71035fc2fc  orr x11,xzr,#0xffffffffffffffe
71035fc300  cmp x10,x11
71035fc304  b.hi 0x71035fc32c
71035fc308  asr x8,x8,#0x2
71035fc30c  cmp x8,x9
71035fc310  csel x9,x9,x8,cc
71035fc314  cbz x9,0x71035fc4d0
71035fc318  lsr x8,x9,#0x3d
71035fc31c  str x27,[sp, #0x58]
71035fc320  str x2,[sp, #0x68]
71035fc324  cbz x8,0x71035fc338
71035fc328  b 0x71035fd010
71035fc32c  str x27,[sp, #0x58]
71035fc330  str x2,[sp, #0x68]
71035fc334  orr x9,xzr,#0x1fffffffffffffff
71035fc338  lsl x8,x9,#0x3
71035fc33c  cmp x8,#0x0
71035fc340  csinc x27,x8,xzr,ne
71035fc344  mov w0,#0x10
71035fc348  mov x1,x27
71035fc34c  str x9,[sp, #0x60]
71035fc350  bl 0x710392e290
71035fc354  mov x20,x0
71035fc358  cbnz x0,0x71035fc3a0
71035fc35c  adrp x8,0x7105332000
71035fc360  ldr x0,[x8, #0xf00]
71035fc364  cbz x0,0x71035fc39c
71035fc368  stur wzr,[x29, #-0xb8]
71035fc36c  stur x27,[x29, #-0x98]
71035fc370  ldr x8,[x0]
71035fc374  ldr x8,[x8, #0x30]
71035fc378  sub x1,x29,#0xb8
71035fc37c  sub x2,x29,#0x98
71035fc380  blr x8
71035fc384  tbz w0,#0x0,0x71035fc39c
71035fc388  mov w0,#0x10
71035fc38c  mov x1,x27
71035fc390  bl 0x710392e290
71035fc394  mov x20,x0
71035fc398  cbnz x0,0x71035fc3a0
71035fc39c  mov x20,xzr
71035fc3a0  ldp x8,x2,[sp, #0x60]
71035fc3a4  ldr x27,[sp, #0x58]
71035fc3a8  add x27,x20,x27, LSL #0x3
71035fc3ac  cmp x2,#0x1
71035fc3b0  str x24,[x27], #0x8
71035fc3b4  add x24,x20,x8, LSL #0x3
71035fc3b8  b.lt 0x71035fc3c8
71035fc3bc  mov x0,x20
71035fc3c0  mov x1,x25
71035fc3c4  bl 0x71039c00e0
71035fc3c8  stp x20,x27,[x26, #0xc8]
71035fc3cc  str x24,[x26, #0xd8]
71035fc3d0  ldp x27,x20,[sp, #0x88]
71035fc3d4  cbz x25,0x71035fc3e0
71035fc3d8  mov x0,x25
71035fc3dc  bl 0x710392eb40
71035fc3e0  ldr x9,[sp, #0xa8]
71035fc3e4  ldr x8,[x22, #0x360]
71035fc3e8  str xzr,[x9]
71035fc3ec  stp xzr,xzr,[x9, #0x8]
71035fc3f0  adrp x9,0x7105231000
71035fc3f4  add x9,x9,#0x9f0
71035fc3f8  stur x9,[x29, #-0x98]
71035fc3fc  ldr x9,[x8, #0x30]
71035fc400  cbz x9,0x71035fc434
71035fc404  ldr x9,[x9]
71035fc408  ldr x10,[x8, #0x38]
71035fc40c  cmp x9,x10
71035fc410  ldp x25,x24,[sp, #0xb0]
71035fc414  b.ne 0x71035fc43c
71035fc418  ldr x9,[x8, #0x28]
71035fc41c  stur x9,[x29, #-0x90]
71035fc420  cbz x9,0x71035fc454
71035fc424  ldr x10,[x9, #0x8]
71035fc428  stur x10,[x29, #-0x88]
71035fc42c  ldr x10,[x10]
71035fc430  b 0x71035fc45c
71035fc434  ldp x25,x24,[sp, #0xb0]
71035fc438  b 0x71035fc460
71035fc43c  mov x9,xzr
71035fc440  b 0x71035fc460
71035fc444  ldr x21,[sp, #0xc0]
71035fc448  b 0x71035fc4e8
71035fc44c  mov x9,xzr
71035fc450  b 0x71035fc4e8
71035fc454  mov x10,xzr
71035fc458  stur xzr,[x29, #-0x88]
71035fc45c  stur x10,[x29, #-0x80]
71035fc460  adrp x10,0x7105335000
71035fc464  ldr x3,[x10, #0xec8]
71035fc468  ldr x10,[sp, #0xa0]
71035fc46c  stp xzr,xzr,[x10, #0x8]
71035fc470  str xzr,[x10]
71035fc474  adrp x10,0x7105231000
71035fc478  add x10,x10,#0xa50
71035fc47c  stur x10,[x29, #-0xb8]
71035fc480  ldr x8,[x8, #0x28]
71035fc484  ldr x10,[sp, #0x80]
71035fc488  ldr w7,[x21, #0x20]
71035fc48c  ldr w9,[x9, #0x88]
71035fc490  add x10,x28,x10, LSL #0x5
71035fc494  ldr w8,[x8, #0x8c]
71035fc498  add x2,x22,#0x48
71035fc49c  add x5,x28,#0x60
71035fc4a0  add x10,x10,#0xa8
71035fc4a4  sub x1,x29,#0x98
71035fc4a8  sub x6,x29,#0xb8
71035fc4ac  mov x0,x24
71035fc4b0  adrp x4,0x7105231000
71035fc4b4  add x4,x4,#0xee0
71035fc4b8  str w9,[sp, #0x10]
71035fc4bc  str x10,[sp, #0x8]
71035fc4c0  str w8,[sp]
71035fc4c4  bl 0x710381a6a0
71035fc4c8  ldr x21,[sp, #0xc0]
71035fc4cc  b 0x71035fc550
71035fc4d0  mov x8,xzr
71035fc4d4  mov x20,xzr
71035fc4d8  b 0x71035fc3a8
71035fc4dc  mov x10,xzr
71035fc4e0  stur xzr,[x29, #-0x88]
71035fc4e4  stur x10,[x29, #-0x80]
71035fc4e8  adrp x10,0x7105335000
71035fc4ec  ldr x3,[x10, #0xec8]
71035fc4f0  ldr x10,[sp, #0xa0]
71035fc4f4  stp xzr,xzr,[x10, #0x8]
71035fc4f8  str xzr,[x10]
71035fc4fc  adrp x10,0x7105231000
71035fc500  add x10,x10,#0xa50
71035fc504  stur x10,[x29, #-0xb8]
71035fc508  ldr x8,[x8, #0x28]
71035fc50c  ldr x10,[sp, #0x80]
71035fc510  ldr w9,[x9, #0x88]
71035fc514  add x10,x28,x10, LSL #0x5
71035fc518  ldr w8,[x8, #0x8c]
71035fc51c  ldr w7,[sp, #0x7c]
71035fc520  add x2,x22,#0x48
71035fc524  add x5,x28,#0x60
71035fc528  sub x1,x29,#0x98
71035fc52c  sub x6,x29,#0xb8
71035fc530  mov x0,x24
71035fc534  adrp x4,0x7105231000
71035fc538  add x4,x4,#0xee0
71035fc53c  add x10,x10,#0xa8
71035fc540  str w9,[sp, #0x10]
71035fc544  str x10,[sp, #0x8]
71035fc548  str w8,[sp]
71035fc54c  bl 0x710381a6a0
71035fc550  mov x22,x0
71035fc554  ldr x8,[x28, #0x50]
71035fc558  cbz x8,0x71035fc56c
71035fc55c  ldr x8,[x8]
71035fc560  ldr x9,[x28, #0x58]
71035fc564  cmp x8,x9
71035fc568  b.eq 0x71035fc704
71035fc56c  ldr x0,[x28, #0x88]
71035fc570  mov x1,x25
71035fc574  bl 0x71038adc30
71035fc578  ldr x8,[x0, #0x10]
71035fc57c  cbz x8,0x71035fc5b4
71035fc580  ldr x8,[x8]
71035fc584  ldr x9,[x0, #0x18]
71035fc588  cmp x8,x9
71035fc58c  b.ne 0x71035fc5b4
71035fc590  ldr x8,[x0, #0x8]
71035fc594  cbz x8,0x71035fc5b4
71035fc598  ldr x9,[x8, #0x8]
71035fc59c  cbz x9,0x71035fc5b4
71035fc5a0  str x8,[x28, #0x48]
71035fc5a4  ldr x8,[x8, #0x8]
71035fc5a8  str x8,[x28, #0x50]
71035fc5ac  ldr x8,[x8]
71035fc5b0  b 0x71035fc5bc
71035fc5b4  mov x8,xzr
71035fc5b8  stp xzr,xzr,[x28, #0x48]
71035fc5bc  str x8,[x28, #0x58]
71035fc5c0  ldr x8,[x0, #0x10]
71035fc5c4  cbz x8,0x71035fcb54
71035fc5c8  ldr x8,[x8]
71035fc5cc  ldr x9,[x0, #0x18]
71035fc5d0  cmp x8,x9
71035fc5d4  b.ne 0x71035fcb54
71035fc5d8  ldr x9,[sp, #0xa8]
71035fc5dc  ldr x8,[x28, #0x8]
71035fc5e0  str xzr,[x9]
71035fc5e4  stp xzr,xzr,[x9, #0x8]
71035fc5e8  adrp x9,0x7105231000
71035fc5ec  add x9,x9,#0x9d0
71035fc5f0  stur x9,[x29, #-0x98]
71035fc5f4  ldr x9,[sp, #0x40]
71035fc5f8  stp xzr,xzr,[x9, #0x8]
71035fc5fc  str xzr,[x9]
71035fc600  adrp x9,0x7105231000
71035fc604  add x9,x9,#0xa30
71035fc608  stur x9,[x29, #-0x78]
71035fc60c  adrp x9,0x7105335000
71035fc610  ldr x0,[x9, #0xec0]
71035fc614  ldr x9,[sp, #0xa0]
71035fc618  ldr x8,[x8, #0x360]
71035fc61c  stp xzr,xzr,[x9, #0x8]
71035fc620  str xzr,[x9]
71035fc624  adrp x9,0x7105231000
71035fc628  add x9,x9,#0x9f0
71035fc62c  stur x9,[x29, #-0xb8]
71035fc630  ldr x9,[x8, #0x30]
71035fc634  cbz x9,0x71035fc66c
71035fc638  ldr x9,[x9]
71035fc63c  ldr x10,[x8, #0x38]
71035fc640  cmp x9,x10
71035fc644  b.ne 0x71035fc66c
71035fc648  ldr x8,[x8, #0x28]
71035fc64c  stur x8,[x29, #-0xb0]
71035fc650  cbz x8,0x71035fc664
71035fc654  ldr x8,[x8, #0x8]
71035fc658  stur x8,[x29, #-0xa8]
71035fc65c  ldr x8,[x8]
71035fc660  b 0x71035fc668
71035fc664  stur xzr,[x29, #-0xa8]
71035fc668  stur x8,[x29, #-0xa0]
71035fc66c  sub x1,x29,#0x98
71035fc670  sub x2,x29,#0xb8
71035fc674  mov x3,x21
71035fc678  bl 0x7103871960
71035fc67c  ldur x8,[x29, #-0x88]
71035fc680  cbz x8,0x71035fc6b0
71035fc684  ldr x8,[x8]
71035fc688  ldur x9,[x29, #-0x80]
71035fc68c  cmp x8,x9
71035fc690  b.ne 0x71035fc6b0
71035fc694  ldur x8,[x29, #-0x90]
71035fc698  str x8,[x28, #0x48]
71035fc69c  cbz x8,0x71035fc6b4
71035fc6a0  ldr x8,[x8, #0x8]
71035fc6a4  str x8,[x28, #0x50]
71035fc6a8  ldr x8,[x8]
71035fc6ac  b 0x71035fc6bc
71035fc6b0  str xzr,[x28, #0x48]
71035fc6b4  mov x8,xzr
71035fc6b8  str xzr,[x28, #0x50]
71035fc6bc  str x8,[x28, #0x58]
71035fc6c0  ldur x8,[x29, #-0x68]
71035fc6c4  cbz x8,0x71035fc6f4
71035fc6c8  ldr x8,[x8]
71035fc6cc  ldur x9,[x29, #-0x60]
71035fc6d0  cmp x8,x9
71035fc6d4  b.ne 0x71035fc6f4
71035fc6d8  ldur x8,[x29, #-0x70]
71035fc6dc  str x8,[x28, #0x68]
71035fc6e0  cbz x8,0x71035fc6f8
71035fc6e4  ldr x8,[x8, #0x8]
71035fc6e8  str x8,[x28, #0x70]
71035fc6ec  ldr x8,[x8]
71035fc6f0  b 0x71035fc700
71035fc6f4  str xzr,[x28, #0x68]
71035fc6f8  mov x8,xzr
71035fc6fc  str xzr,[x28, #0x70]
71035fc700  str x8,[x28, #0x78]
71035fc704  mov x0,x24
71035fc708  mov x1,x21
71035fc70c  adrp x2,0x7105337000
71035fc710  add x2,x2,#0x3a8
71035fc714  str x22,[sp, #0xc0]
71035fc718  bl 0x710381a2e0
71035fc71c  ldp x9,x8,[x26, #0xd0]
71035fc720  cmp x9,x8
71035fc724  b.cs 0x71035fc73c
71035fc728  str x0,[x9]
71035fc72c  ldr x8,[x27]
71035fc730  add x21,x8,#0x8
71035fc734  str x21,[x27]
71035fc738  b 0x71035fc83c
71035fc73c  ldr x22,[x20]
71035fc740  sub x27,x9,x22
71035fc744  asr x24,x27,#0x3
71035fc748  add x9,x24,#0x1
71035fc74c  lsr x10,x9,#0x3d
71035fc750  cbnz x10,0x71035fd014
71035fc754  sub x8,x8,x22
71035fc758  asr x10,x8,#0x3
71035fc75c  orr x11,xzr,#0xffffffffffffffe
71035fc760  cmp x10,x11
71035fc764  b.hi 0x71035fc788
71035fc768  asr x8,x8,#0x2
71035fc76c  cmp x8,x9
71035fc770  csel x25,x9,x8,cc
71035fc774  cbz x25,0x71035fc958
71035fc778  lsr x8,x25,#0x3d
71035fc77c  str x0,[sp, #0x68]
71035fc780  cbz x8,0x71035fc790
71035fc784  b 0x71035fd010
71035fc788  str x0,[sp, #0x68]
71035fc78c  orr x25,xzr,#0x1fffffffffffffff
71035fc790  lsl x8,x25,#0x3
71035fc794  cmp x8,#0x0
71035fc798  csinc x21,x8,xzr,ne
71035fc79c  mov w0,#0x10
71035fc7a0  mov x1,x21
71035fc7a4  bl 0x710392e290
71035fc7a8  mov x20,x0
71035fc7ac  cbnz x0,0x71035fc7f4
71035fc7b0  adrp x8,0x7105332000
71035fc7b4  ldr x0,[x8, #0xf00]
71035fc7b8  cbz x0,0x71035fc7f0
71035fc7bc  stur wzr,[x29, #-0xb8]
71035fc7c0  stur x21,[x29, #-0x98]
71035fc7c4  ldr x8,[x0]
71035fc7c8  ldr x8,[x8, #0x30]
71035fc7cc  sub x1,x29,#0xb8
71035fc7d0  sub x2,x29,#0x98
71035fc7d4  blr x8
71035fc7d8  tbz w0,#0x0,0x71035fc7f0
71035fc7dc  mov w0,#0x10
71035fc7e0  mov x1,x21
71035fc7e4  bl 0x710392e290
71035fc7e8  mov x20,x0
71035fc7ec  cbnz x0,0x71035fc7f4
71035fc7f0  mov x20,xzr
71035fc7f4  ldr x0,[sp, #0x68]
71035fc7f8  add x21,x20,x24, LSL #0x3
71035fc7fc  add x24,x20,x25, LSL #0x3
71035fc800  cmp x27,#0x1
71035fc804  str x0,[x21], #0x8
71035fc808  b.lt 0x71035fc81c
71035fc80c  mov x0,x20
71035fc810  mov x1,x22
71035fc814  mov x2,x27
71035fc818  bl 0x71039c00e0
71035fc81c  stp x20,x21,[x26, #0xc8]
71035fc820  str x24,[x26, #0xd8]
71035fc824  ldp x27,x20,[sp, #0x88]
71035fc828  ldp x25,x24,[sp, #0xb0]
71035fc82c  cbz x22,0x71035fc83c
71035fc830  mov x0,x22
71035fc834  bl 0x710392eb40
71035fc838  ldr x21,[x27]
71035fc83c  ldr x8,[x26, #0xd8]
71035fc840  cmp x21,x8
71035fc844  b.cs 0x71035fc860
71035fc848  ldr x8,[sp, #0xc0]
71035fc84c  str x8,[x21]
71035fc850  ldr x8,[x27]
71035fc854  add x8,x8,#0x8
71035fc858  str x8,[x27]
71035fc85c  b 0x71035fcb54
71035fc860  ldr x22,[x20]
71035fc864  sub x25,x21,x22
71035fc868  asr x24,x25,#0x3
71035fc86c  add x9,x24,#0x1
71035fc870  lsr x10,x9,#0x3d
71035fc874  cbnz x10,0x71035fd014
71035fc878  sub x8,x8,x22
71035fc87c  asr x10,x8,#0x3
71035fc880  orr x11,xzr,#0xffffffffffffffe
71035fc884  cmp x10,x11
71035fc888  b.hi 0x71035fc8a8
71035fc88c  asr x8,x8,#0x2
71035fc890  cmp x8,x9
71035fc894  csel x27,x9,x8,cc
71035fc898  cbz x27,0x71035fc90c
71035fc89c  lsr x8,x27,#0x3d
71035fc8a0  cbz x8,0x71035fc8ac
71035fc8a4  b 0x71035fd010
71035fc8a8  orr x27,xzr,#0x1fffffffffffffff
71035fc8ac  lsl x8,x27,#0x3
71035fc8b0  cmp x8,#0x0
71035fc8b4  csinc x21,x8,xzr,ne
71035fc8b8  mov w0,#0x10
71035fc8bc  mov x1,x21
71035fc8c0  bl 0x710392e290
71035fc8c4  mov x20,x0
71035fc8c8  cbnz x0,0x71035fc910
71035fc8cc  adrp x8,0x7105332000
71035fc8d0  ldr x0,[x8, #0xf00]
71035fc8d4  cbz x0,0x71035fc90c
71035fc8d8  stur wzr,[x29, #-0xb8]
71035fc8dc  stur x21,[x29, #-0x98]
71035fc8e0  ldr x8,[x0]
71035fc8e4  ldr x8,[x8, #0x30]
71035fc8e8  sub x1,x29,#0xb8
71035fc8ec  sub x2,x29,#0x98
71035fc8f0  blr x8
71035fc8f4  tbz w0,#0x0,0x71035fc90c
71035fc8f8  mov w0,#0x10
71035fc8fc  mov x1,x21
71035fc900  bl 0x710392e290
71035fc904  mov x20,x0
71035fc908  cbnz x0,0x71035fc910
71035fc90c  mov x20,xzr
71035fc910  ldr x8,[sp, #0xc0]
71035fc914  add x21,x20,x24, LSL #0x3
71035fc918  add x24,x20,x27, LSL #0x3
71035fc91c  str x8,[x21], #0x8
71035fc920  cmp x25,#0x1
71035fc924  b.lt 0x71035fc938
71035fc928  mov x0,x20
71035fc92c  mov x1,x22
71035fc930  mov x2,x25
71035fc934  bl 0x71039c00e0
71035fc938  stp x20,x21,[x26, #0xc8]
71035fc93c  str x24,[x26, #0xd8]
71035fc940  ldp x27,x20,[sp, #0x88]
71035fc944  ldp x25,x24,[sp, #0xb0]
71035fc948  cbz x22,0x71035fcb54
71035fc94c  mov x0,x22
71035fc950  bl 0x710392eb40
71035fc954  b 0x71035fcb54
71035fc958  mov x20,xzr
71035fc95c  b 0x71035fc7f8
71035fc960  stur xzr,[x29, #-0xa8]
71035fc964  stur x8,[x29, #-0xa0]
71035fc968  sub x1,x29,#0x98
71035fc96c  sub x2,x29,#0xb8
71035fc970  mov x3,x21
71035fc974  bl 0x7103871960
71035fc978  ldur x8,[x29, #-0x88]
71035fc97c  cbz x8,0x71035fc9ac
71035fc980  ldr x8,[x8]
71035fc984  ldur x9,[x29, #-0x80]
71035fc988  cmp x8,x9
71035fc98c  b.ne 0x71035fc9ac
71035fc990  ldur x8,[x29, #-0x90]
71035fc994  str x8,[x28, #0x48]
71035fc998  cbz x8,0x71035fc9b0
71035fc99c  ldr x8,[x8, #0x8]
71035fc9a0  str x8,[x28, #0x50]
71035fc9a4  ldr x8,[x8]
71035fc9a8  b 0x71035fc9b8
71035fc9ac  str xzr,[x28, #0x48]
71035fc9b0  mov x8,xzr
71035fc9b4  str xzr,[x28, #0x50]
71035fc9b8  str x8,[x28, #0x58]
71035fc9bc  ldur x8,[x29, #-0x68]
71035fc9c0  cbz x8,0x71035fc9f0
71035fc9c4  ldr x8,[x8]
71035fc9c8  ldur x9,[x29, #-0x60]
71035fc9cc  cmp x8,x9
71035fc9d0  b.ne 0x71035fc9f0
71035fc9d4  ldur x8,[x29, #-0x70]
71035fc9d8  str x8,[x28, #0x68]
71035fc9dc  cbz x8,0x71035fc9f4
71035fc9e0  ldr x8,[x8, #0x8]
71035fc9e4  str x8,[x28, #0x70]
71035fc9e8  ldr x8,[x8]
71035fc9ec  b 0x71035fc9fc
71035fc9f0  str xzr,[x28, #0x68]
71035fc9f4  mov x8,xzr
71035fc9f8  str xzr,[x28, #0x70]
71035fc9fc  str x8,[x28, #0x78]
71035fca00  b 0x71035fca30
71035fca04  ldr x22,[x28, #0x8]
71035fca08  cbz x22,0x71035fcb54
71035fca0c  ldrb w8,[x22, #0x14]
71035fca10  cbz w8,0x71035fcb54
71035fca14  ldr x8,[x28, #0x50]
71035fca18  add x21,x28,#0x40
71035fca1c  cbz x8,0x71035fca70
71035fca20  ldr x8,[x8]
71035fca24  ldr x9,[x28, #0x58]
71035fca28  cmp x8,x9
71035fca2c  b.ne 0x71035fca70
71035fca30  str x21,[sp, #0xc0]
71035fca34  ldr x21,[x22, #0x388]
71035fca38  cbz x21,0x71035fc20c
71035fca3c  mov w1,#0x1
71035fca40  mov w2,#0x1
71035fca44  mov x0,x24
71035fca48  bl 0x710381b250
71035fca4c  ldr x9,[x0, #0x78]
71035fca50  ldr x8,[x21, #0x8]
71035fca54  mov x24,x0
71035fca58  str x8,[x9, #0x8]
71035fca5c  cbz x8,0x71035fc260
71035fca60  ldr x10,[x8, #0x8]
71035fca64  str x10,[x9, #0x10]
71035fca68  ldr x10,[x10]
71035fca6c  b 0x71035fc268
71035fca70  ldr x0,[x28, #0x88]
71035fca74  mov x1,x25
71035fca78  bl 0x71038adc30
71035fca7c  ldr x8,[x0, #0x10]
71035fca80  cbz x8,0x71035fcb4c
71035fca84  ldr x8,[x8]
71035fca88  ldr x9,[x0, #0x18]
71035fca8c  cmp x8,x9
71035fca90  b.ne 0x71035fcb4c
71035fca94  ldr x8,[x0, #0x8]
71035fca98  cbz x8,0x71035fcb4c
71035fca9c  ldr x9,[x8, #0x8]
71035fcaa0  cbz x9,0x71035fcb4c
71035fcaa4  str x8,[x28, #0x48]
71035fcaa8  ldr x8,[x8, #0x8]
71035fcaac  str x8,[x28, #0x50]
71035fcab0  ldr x9,[x8]
71035fcab4  str x9,[x28, #0x58]
71035fcab8  cbz x8,0x71035fcb54
71035fcabc  ldr x8,[x8]
71035fcac0  cmp x8,x9
71035fcac4  b.ne 0x71035fcb54
71035fcac8  ldp x9,x8,[sp, #0xa0]
71035fcacc  str xzr,[x8]
71035fcad0  stp xzr,xzr,[x8, #0x8]
71035fcad4  adrp x8,0x7105231000
71035fcad8  add x8,x8,#0x9d0
71035fcadc  stur x8,[x29, #-0x98]
71035fcae0  ldr x8,[sp, #0x40]
71035fcae4  stp xzr,xzr,[x8, #0x8]
71035fcae8  str xzr,[x8]
71035fcaec  adrp x8,0x7105231000
71035fcaf0  add x8,x8,#0xa30
71035fcaf4  stur x8,[x29, #-0x78]
71035fcaf8  adrp x8,0x7105335000
71035fcafc  ldr x0,[x8, #0xec0]
71035fcb00  ldr x8,[x22, #0x360]
71035fcb04  stp xzr,xzr,[x9, #0x8]
71035fcb08  str xzr,[x9]
71035fcb0c  adrp x9,0x7105231000
71035fcb10  add x9,x9,#0x9f0
71035fcb14  stur x9,[x29, #-0xb8]
71035fcb18  ldr x9,[x8, #0x30]
71035fcb1c  cbz x9,0x71035fc968
71035fcb20  ldr x9,[x9]
71035fcb24  ldr x10,[x8, #0x38]
71035fcb28  cmp x9,x10
71035fcb2c  b.ne 0x71035fc968
71035fcb30  ldr x8,[x8, #0x28]
71035fcb34  stur x8,[x29, #-0xb0]
71035fcb38  cbz x8,0x71035fc960
71035fcb3c  ldr x8,[x8, #0x8]
71035fcb40  stur x8,[x29, #-0xa8]
71035fcb44  ldr x8,[x8]
71035fcb48  b 0x71035fc964
71035fcb4c  stp xzr,xzr,[x28, #0x50]
71035fcb50  str xzr,[x28, #0x48]
71035fcb54  ldrh w8,[x26, #0x3a]
71035fcb58  add w23,w23,#0x1
71035fcb5c  add x28,x28,#0xe8
71035fcb60  cmp w23,w8
71035fcb64  b.cc 0x71035fca04
71035fcb68  mov w8,#0x1
71035fcb6c  strb w8,[x26, #0xb0]
71035fcb70  ldr x23,[x27]
71035fcb74  ldr x25,[x20]
71035fcb78  cmp x23,x25
71035fcb7c  b.eq 0x71035fcca4
71035fcb80  cmp x25,x23
71035fcb84  b.eq 0x71035fcca4
71035fcb88  ldp x9,x8,[x19, #0xa0]
71035fcb8c  ldr x26,[x25]
71035fcb90  cmp x9,x8
71035fcb94  b.cs 0x71035fcbac
71035fcb98  str x26,[x9]
71035fcb9c  ldr x8,[x19, #0xa0]
71035fcba0  add x8,x8,#0x8
71035fcba4  str x8,[x19, #0xa0]
71035fcba8  b 0x71035fcc98
71035fcbac  ldr x10,[sp, #0xc8]
71035fcbb0  ldr x20,[x10]
71035fcbb4  sub x21,x9,x20
71035fcbb8  asr x27,x21,#0x3
71035fcbbc  add x9,x27,#0x1
71035fcbc0  lsr x10,x9,#0x3d
71035fcbc4  cbnz x10,0x71035fd008
71035fcbc8  sub x8,x8,x20
71035fcbcc  asr x10,x8,#0x3
71035fcbd0  orr x11,xzr,#0xffffffffffffffe
71035fcbd4  cmp x10,x11
71035fcbd8  b.hi 0x71035fcbf8
71035fcbdc  asr x8,x8,#0x2
71035fcbe0  cmp x8,x9
71035fcbe4  csel x28,x9,x8,cc
71035fcbe8  cbz x28,0x71035fcc5c
71035fcbec  lsr x8,x28,#0x3d
71035fcbf0  cbz x8,0x71035fcbfc
71035fcbf4  b 0x71035fd010
71035fcbf8  orr x28,xzr,#0x1fffffffffffffff
71035fcbfc  lsl x8,x28,#0x3
71035fcc00  cmp x8,#0x0
71035fcc04  csinc x24,x8,xzr,ne
71035fcc08  mov w0,#0x10
71035fcc0c  mov x1,x24
71035fcc10  bl 0x710392e290
71035fcc14  mov x22,x0
71035fcc18  cbnz x0,0x71035fcc60
71035fcc1c  adrp x8,0x7105332000
71035fcc20  ldr x0,[x8, #0xf00]
71035fcc24  cbz x0,0x71035fcc5c
71035fcc28  stur wzr,[x29, #-0xb8]
71035fcc2c  stur x24,[x29, #-0x98]
71035fcc30  ldr x8,[x0]
71035fcc34  ldr x8,[x8, #0x30]
71035fcc38  sub x1,x29,#0xb8
71035fcc3c  sub x2,x29,#0x98
71035fcc40  blr x8
71035fcc44  tbz w0,#0x0,0x71035fcc5c
71035fcc48  mov w0,#0x10
71035fcc4c  mov x1,x24
71035fcc50  bl 0x710392e290
71035fcc54  mov x22,x0
71035fcc58  cbnz x0,0x71035fcc60
71035fcc5c  mov x22,xzr
71035fcc60  add x24,x22,x27, LSL #0x3
71035fcc64  cmp x21,#0x1
71035fcc68  str x26,[x24], #0x8
71035fcc6c  add x26,x22,x28, LSL #0x3
71035fcc70  b.lt 0x71035fcc84
71035fcc74  mov x0,x22
71035fcc78  mov x1,x20
71035fcc7c  mov x2,x21
71035fcc80  bl 0x71039c00e0
71035fcc84  stp x22,x24,[x19, #0x98]
71035fcc88  str x26,[x19, #0xa8]
71035fcc8c  cbz x20,0x71035fcc98
71035fcc90  mov x0,x20
71035fcc94  bl 0x710392eb40
71035fcc98  add x25,x25,#0x8
71035fcc9c  cmp x23,x25
71035fcca0  b.ne 0x71035fcb88
71035fcca4  ldr x20,[sp, #0x98]
71035fcca8  ldr x8,[sp, #0x70]
71035fccac  add x20,x20,#0x8
71035fccb0  cmp x20,x8
71035fccb4  b.ne 0x71035fc118
71035fccb8  ldp x8,x9,[x19, #0x98]
71035fccbc  cmp x9,x8
71035fccc0  b.ne 0x71035fccd4
71035fccc4  ldrb w8,[x19, #0x62]
71035fccc8  ldp x26,x25,[sp, #0x20]
71035fcccc  cbnz w8,0x71035fcce0
71035fccd0  b 0x71035fcd90
71035fccd4  mov w8,#0x1
71035fccd8  strb w8,[x19, #0x62]
71035fccdc  ldp x26,x25,[sp, #0x20]
71035fcce0  ldr w8,[sp, #0x34]
71035fcce4  tbz w8,#0x0,0x71035fcd80
71035fcce8  ldr x8,[x19, #0x68]
71035fccec  ldr q2,[x8]
71035fccf0  dup v16.4S,v2.S[0x2]
71035fccf4  ldp q0,q1,[x26, #0x20]
71035fccf8  ldp q5,q6,[x26, #0x40]
71035fccfc  fmul v3.4S,v2.4S,v0.4S
71035fcd00  dup v3.4S,v3.S[0x0]
71035fcd04  fmul v7.4S,v2.4S,v5.4S
71035fcd08  fmul v17.4S,v16.4S,v5.S[0x0]
71035fcd0c  fmul v5.4S,v16.4S,v5.S[0x1]
71035fcd10  dup v16.4S,v2.S[0x1]
71035fcd14  fmul v4.4S,v2.4S,v1.4S
71035fcd18  dup v2.4S,v2.S[0x0]
71035fcd1c  ldp w9,w8,[x8, #0x10]
71035fcd20  dup v4.4S,v4.S[0x1]
71035fcd24  fmul v18.4S,v16.4S,v1.S[0x0]
71035fcd28  stp w9,w8,[x19, #0x20]
71035fcd2c  fmul v1.4S,v16.4S,v1.S[0x2]
71035fcd30  fmul v16.4S,v2.4S,v0.S[0x1]
71035fcd34  fmul v0.4S,v2.4S,v0.S[0x2]
71035fcd38  fadd v3.4S,v3.4S,v18.4S
71035fcd3c  fadd v4.4S,v16.4S,v4.4S
71035fcd40  fadd v0.4S,v0.4S,v1.4S
71035fcd44  fadd v1.4S,v3.4S,v17.4S
71035fcd48  dup v3.4S,v6.S[0x0]
71035fcd4c  fadd v2.4S,v4.4S,v5.4S
71035fcd50  fadd v1.4S,v3.4S,v1.4S
71035fcd54  dup v3.4S,v6.S[0x1]
71035fcd58  fadd v2.4S,v3.4S,v2.4S
71035fcd5c  dup v3.4S,v7.S[0x2]
71035fcd60  fadd v0.4S,v0.4S,v3.4S
71035fcd64  mov v1.S[0x1],v2.S[0x1]
71035fcd68  dup v2.4S,v6.S[0x2]
71035fcd6c  fadd v0.4S,v2.4S,v0.4S
71035fcd70  mov v1.S[0x2],v0.S[0x2]
71035fcd74  fmov s0,0x3f800000
71035fcd78  mov v1.S[0x3],v0.S[0x0]
71035fcd7c  str q1,[x19, #0x10]
71035fcd80  ldr x0,[x19, #0x90]
71035fcd84  mov x1,x19
71035fcd88  bl 0x7103555dc0
71035fcd8c  strb wzr,[x19, #0x62]
71035fcd90  mov w22,#0x1
71035fcd94  b 0x71035fcf6c
71035fcd98  ldr x8,[x19, #0x90]
71035fcd9c  cbz x8,0x71035fcda8
71035fcda0  add x20,x8,#0x98
71035fcda4  b 0x71035fce38
71035fcda8  ldp x8,x9,[x19, #0x78]
71035fcdac  cmp x9,x8
71035fcdb0  b.ne 0x71035fce30
71035fcdb4  adrp x8,0x7105337000
71035fcdb8  add x8,x8,#0x520
71035fcdbc  ldarb w8,[x8]
71035fcdc0  adrp x20,0x7105337000
71035fcdc4  add x20,x20,#0x508
71035fcdc8  tbnz w8,#0x0,0x71035fce38
71035fcdcc  adrp x0,0x7105337000
71035fcdd0  add x0,x0,#0x520
71035fcdd4  bl 0x71039c06b0
71035fcdd8  adrp x20,0x7105337000
71035fcddc  add x20,x20,#0x508
71035fcde0  cbz w0,0x71035fce28
71035fcde4  mov w8,#0x8
71035fcde8  str xzr,[x20]
71035fcdec  adrp x0,0x7103558000
71035fcdf0  add x0,x0,#0x230
71035fcdf4  strb w8,[x20]
71035fcdf8  mov w8,#0x554e
71035fcdfc  movk w8,#0x4c4c, LSL #16
71035fce00  mov x1,x20
71035fce04  adrp x2,0x7104f17000
71035fce08  add x2,x2,#0x0
71035fce0c  stp xzr,xzr,[x20, #0x8]
71035fce10  stur w8,[x20, #0x1]
71035fce14  strb wzr,[x20, #0x5]
71035fce18  bl 0x71000001c0
71035fce1c  adrp x0,0x7105337000
71035fce20  add x0,x0,#0x520
71035fce24  bl 0x71039c06c0
71035fce28  ldr x25,[sp, #0x28]
71035fce2c  b 0x71035fce38
71035fce30  ldr x8,[x8]
71035fce34  add x20,x8,#0x18
71035fce38  ldrb w9,[sp, #0xd0]
71035fce3c  ldr x10,[sp, #0xd8]
71035fce40  lsr x8,x9,#0x1
71035fce44  tst w9,#0x1
71035fce48  ldrb w23,[x20]
71035fce4c  lsr x11,x23,#0x1
71035fce50  csel x2,x8,x10,eq
71035fce54  ldr x10,[x20, #0x8]
71035fce58  tst w23,#0x1
71035fce5c  csel x21,x11,x10,eq
71035fce60  cmp x2,x21
71035fce64  b.ne 0x71035fcec4
71035fce68  ldr x10,[sp, #0xe0]
71035fce6c  ldr x11,[sp, #0x48]
71035fce70  tst w9,#0x1
71035fce74  csel x0,x11,x10,eq
71035fce78  ldr x10,[x20, #0x10]
71035fce7c  tst w23,#0x1
71035fce80  csinc x1,x10,x20,ne
71035fce84  tbnz w9,#0x0,0x71035fceb8
71035fce88  cbz x2,0x71035fcf18
71035fce8c  ldr x9,[sp, #0x48]
71035fce90  neg x8,x8
71035fce94  ldrb w10,[x9]
71035fce98  ldrb w11,[x1]
71035fce9c  cmp w10,w11
71035fcea0  b.ne 0x71035fcec4
71035fcea4  add x9,x9,#0x1
71035fcea8  add x1,x1,#0x1
71035fceac  adds x8,x8,#0x1
71035fceb0  b.ne 0x71035fce94
71035fceb4  b 0x71035fcf18
71035fceb8  cbz x2,0x71035fcf18
71035fcebc  bl 0x71039c0250
71035fcec0  cbz w0,0x71035fcf18
71035fcec4  add x8,sp,#0xd0
71035fcec8  cmp x8,x20
71035fcecc  b.eq 0x71035fcee8
71035fced0  ldr x8,[x20, #0x10]
71035fced4  tst w23,#0x1
71035fced8  csinc x1,x8,x20,ne
71035fcedc  add x0,sp,#0xd0
71035fcee0  mov x2,x21
71035fcee4  bl 0x71002c51f0
71035fcee8  ldr x0,[x25, #0x40]
71035fceec  mov x1,x20
71035fcef0  bl 0x7103556f50
71035fcef4  cbz x0,0x71035fcf58
71035fcef8  ldr x8,[x0, #0x38]
71035fcefc  cbz x8,0x71035fcf30
71035fcf00  ldr x8,[x8]
71035fcf04  ldr x9,[x0, #0x40]
71035fcf08  cmp x8,x9
71035fcf0c  b.ne 0x71035fcf2c
71035fcf10  ldr x8,[x0, #0x30]
71035fcf14  b 0x71035fcf30
71035fcf18  tbz w22,#0x0,0x71035fcf58
71035fcf1c  ldrb w8,[x19, #0x63]
71035fcf20  cbz w8,0x71035fc09c
71035fcf24  mov w22,#0x1
71035fcf28  b 0x71035fcf5c
71035fcf2c  mov x8,xzr
71035fcf30  mov x9,x8
71035fcf34  ldrb w8,[x8, #0x14]
71035fcf38  str x9,[sp, #0x38]
71035fcf3c  cbz w8,0x71035fcf58
71035fcf40  ldrb w8,[x9, #0x15]
71035fcf44  cbz w8,0x71035fcf58
71035fcf48  ldr w8,[sp, #0x30]
71035fcf4c  cbz w8,0x71035fc080
71035fcf50  mov w8,#0x1
71035fcf54  b 0x71035fc090
71035fcf58  mov w22,wzr
71035fcf5c  ldr x8,[x19, #0x98]
71035fcf60  strb wzr,[x19, #0x62]
71035fcf64  str xzr,[x19, #0x90]
71035fcf68  str x8,[x19, #0xa0]
71035fcf6c  ldr x8,[sp, #0x50]
71035fcf70  add x19,x19,#0xb0
71035fcf74  cmp x19,x8
71035fcf78  b.ne 0x71035fcd98
71035fcf7c  ldrb w8,[sp, #0xd0]
71035fcf80  tbz w8,#0x0,0x71035fcfa4
71035fcf84  adrp x8,0x71052a8000
71035fcf88  ldr x19,[sp, #0xe0]
71035fcf8c  ldr x8,[x8, #0xa70]
71035fcf90  cbz x8,0x71035fcf9c
71035fcf94  mov x0,x19
71035fcf98  bl 0x71039c19b0
71035fcf9c  mov x0,x19
71035fcfa0  bl 0x710392eb40
71035fcfa4  ldp x29,x30,[sp, #0x1a0]
71035fcfa8  ldp x20,x19,[sp, #0x190]
71035fcfac  ldp x22,x21,[sp, #0x180]
71035fcfb0  ldp x24,x23,[sp, #0x170]
71035fcfb4  ldp x26,x25,[sp, #0x160]
71035fcfb8  ldp x28,x27,[sp, #0x150]
71035fcfbc  add sp,sp,#0x1b0
71035fcfc0  ret
71035fcfc4  adrp x0,0x7105337000
71035fcfc8  add x0,x0,#0x3c0
71035fcfcc  bl 0x71039c06b0
71035fcfd0  cbz w0,0x71035fbf20
71035fcfd4  adrp x1,0x7105337000
71035fcfd8  add x1,x1,#0x390
71035fcfdc  adrp x0,0x7103558000
71035fcfe0  add x0,x0,#0x230
71035fcfe4  adrp x2,0x7104f17000
71035fcfe8  add x2,x2,#0x0
71035fcfec  stp xzr,xzr,[x1, #0x8]
71035fcff0  str xzr,[x1]
71035fcff4  bl 0x71000001c0
71035fcff8  adrp x0,0x7105337000
71035fcffc  add x0,x0,#0x3c0
71035fd000  bl 0x71039c06c0
71035fd004  b 0x71035fbf20
71035fd008  ldr x0,[sp, #0xc8]
71035fd00c  bl 0x71039c0c00
71035fd010  bl 0x71039c2650
71035fd014  mov x0,x20
71035fd018  bl 0x71039c0c00
71035fd01c  add x0,sp,#0xd0
71035fd020  bl 0x71039c1a00
