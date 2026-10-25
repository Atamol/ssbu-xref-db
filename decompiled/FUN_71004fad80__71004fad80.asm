// addr:      71004fad80
// offset:    0x4fad80
// name:      FUN_71004fad80
// mangled:   
// size:      9636

71004fad80  stp x28,x27,[sp, #-0x60]!
71004fad84  stp x26,x25,[sp, #0x10]
71004fad88  stp x24,x23,[sp, #0x20]
71004fad8c  stp x22,x21,[sp, #0x30]
71004fad90  stp x20,x19,[sp, #0x40]
71004fad94  stp x29,x30,[sp, #0x50]
71004fad98  add x29,sp,#0x50
71004fad9c  sub sp,sp,#0xab0
71004fada0  add x8,sp,#0xb8
71004fada4  add x20,x8,#0x8
71004fada8  adrp x8,0x7104421000
71004fadac  add x8,x8,#0x858
71004fadb0  ldr x8,[x8]
71004fadb4  str x1,[sp, #0x38]
71004fadb8  mov x26,x0
71004fadbc  stp xzr,xzr,[sp, #0xf0]
71004fadc0  mov w9,#0x14
71004fadc4  add x1,sp,#0xf0
71004fadc8  mov x0,x20
71004fadcc  stp xzr,xzr,[sp, #0xe0]
71004fadd0  str wzr,[sp, #0xb8]
71004fadd4  stp xzr,xzr,[sp, #0xd0]
71004fadd8  str xzr,[sp, #0x100]
71004faddc  stur x8,[sp, #0xf1]
71004fade0  mov w8,#0x6172
71004fade4  strb w9,[sp, #0xf0]
71004fade8  sturh w8,[sp, #0xf9]
71004fadec  strb wzr,[sp, #0xfb]
71004fadf0  stp xzr,xzr,[sp, #0xc0]
71004fadf4  bl 0x71004fd330
71004fadf8  ldrb w8,[sp, #0xf0]
71004fadfc  tbz w8,#0x0,0x71004faf04
71004fae00  ldr x0,[sp, #0x100]
71004fae04  cbz x0,0x71004faf04
71004fae08  bl 0x710392eb40
71004fae0c  add x21,sp,#0xd8
71004fae10  add x8,x21,#0x8
71004fae14  str x8,[sp, #0xa8]
71004fae18  ldp x19,x8,[sp, #0xe0]
71004fae1c  cmp x19,x8
71004fae20  b.eq 0x71004faf10
71004fae24  ldr w8,[sp, #0xb8]
71004fae28  mov x0,x19
71004fae2c  str w8,[x19]
71004fae30  str xzr,[x0, #0x8]!
71004fae34  stp xzr,xzr,[x19, #0x10]
71004fae38  ldp x9,x8,[sp, #0xc0]
71004fae3c  subs x21,x8,x9
71004fae40  b.eq 0x71004faef0
71004fae44  orr x9,xzr,#-0x5555555555555556
71004fae48  asr x8,x21,#0x3
71004fae4c  movk x9,#0xaaab
71004fae50  mul x22,x8,x9
71004fae54  orr x8,xzr,#-0x5555555555555556
71004fae58  movk x8,#0xaaa, LSL #48
71004fae5c  cmp x22,x8
71004fae60  b.hi 0x71004fd218
71004fae64  mov w0,#0x10
71004fae68  mov x1,x21
71004fae6c  bl 0x710392e290
71004fae70  cbnz x0,0x71004faeb4
71004fae74  adrp x8,0x7105332000
71004fae78  ldr x0,[x8, #0xf00]
71004fae7c  cbz x0,0x71004faeb0
71004fae80  stur wzr,[x29, #-0xf8]
71004fae84  str x21,[sp, #0xf0]
71004fae88  ldr x8,[x0]
71004fae8c  ldr x8,[x8, #0x30]
71004fae90  sub x1,x29,#0xf8
71004fae94  add x2,sp,#0xf0
71004fae98  blr x8
71004fae9c  tbz w0,#0x0,0x71004faeb0
71004faea0  mov w0,#0x10
71004faea4  mov x1,x21
71004faea8  bl 0x710392e290
71004faeac  cbnz x0,0x71004faeb4
71004faeb0  mov x0,xzr
71004faeb4  orr w8,wzr,#0x18
71004faeb8  madd x8,x22,x8,x0
71004faebc  str x8,[x19, #0x18]
71004faec0  stp x0,x0,[x19, #0x8]
71004faec4  ldp x21,x22,[sp, #0xc0]
71004faec8  cmp x21,x22
71004faecc  b.eq 0x71004faef0
71004faed0  mov x1,x21
71004faed4  bl 0x71039c2730
71004faed8  ldr x8,[x19, #0x10]
71004faedc  add x21,x21,#0x18
71004faee0  cmp x22,x21
71004faee4  add x0,x8,#0x18
71004faee8  str x0,[x19, #0x10]
71004faeec  b.ne 0x71004faed0
71004faef0  ldr x8,[sp, #0xe0]
71004faef4  add x21,sp,#0xd8
71004faef8  add x8,x8,#0x20
71004faefc  str x8,[sp, #0xe0]
71004faf00  b 0x71004faf1c
71004faf04  add x21,sp,#0xd8
71004faf08  add x8,x21,#0x8
71004faf0c  str x8,[sp, #0xa8]
71004faf10  add x1,sp,#0xb8
71004faf14  mov x0,x21
71004faf18  bl 0x71004fd4f0
71004faf1c  orr w8,wzr,#0x3
71004faf20  str w8,[sp, #0xb8]
71004faf24  ldp x19,x8,[sp, #0xc0]
71004faf28  cmp x8,x19
71004faf2c  b.eq 0x71004faf54
71004faf30  mov x22,x8
71004faf34  ldrb w9,[x22, #-0x18]!
71004faf38  tbz w9,#0x0,0x71004faf48
71004faf3c  ldur x0,[x8, #-0x8]
71004faf40  cbz x0,0x71004faf48
71004faf44  bl 0x710392eb40
71004faf48  cmp x19,x22
71004faf4c  mov x8,x22
71004faf50  b.ne 0x71004faf34
71004faf54  adrp x8,0x710425e000
71004faf58  add x8,x8,#0x894
71004faf5c  orr w9,wzr,#0x1e
71004faf60  stp xzr,xzr,[sp, #0xf0]
71004faf64  strb w9,[sp, #0xf0]
71004faf68  ldur x9,[x8, #0x7]
71004faf6c  ldr x8,[x8]
71004faf70  str x19,[sp, #0xc8]
71004faf74  stp x9,xzr,[sp, #0xf8]
71004faf78  stur x8,[sp, #0xf1]
71004faf7c  ldr x8,[sp, #0xd0]
71004faf80  cmp x19,x8
71004faf84  strb wzr,[sp, #0x100]
71004faf88  b.cs 0x71004fafb4
71004faf8c  ldp x8,x9,[sp, #0xf0]
71004faf90  ldr x10,[sp, #0x100]
71004faf94  stp x9,x10,[x19, #0x8]
71004faf98  str x8,[x19]
71004faf9c  ldr x8,[sp, #0xc8]
71004fafa0  add x8,x8,#0x18
71004fafa4  str xzr,[sp, #0xf0]
71004fafa8  stp xzr,xzr,[sp, #0xf8]
71004fafac  str x8,[sp, #0xc8]
71004fafb0  b 0x71004fafd4
71004fafb4  add x1,sp,#0xf0
71004fafb8  mov x0,x20
71004fafbc  bl 0x71004fd330
71004fafc0  ldrb w8,[sp, #0xf0]
71004fafc4  tbz w8,#0x0,0x71004fafd4
71004fafc8  ldr x0,[sp, #0x100]
71004fafcc  cbz x0,0x71004fafd4
71004fafd0  bl 0x710392eb40
71004fafd4  ldp x19,x8,[sp, #0xe0]
71004fafd8  cmp x19,x8
71004fafdc  b.eq 0x71004fb0bc
71004fafe0  ldr w8,[sp, #0xb8]
71004fafe4  mov x0,x19
71004fafe8  str w8,[x19]
71004fafec  str xzr,[x0, #0x8]!
71004faff0  stp xzr,xzr,[x19, #0x10]
71004faff4  ldp x9,x8,[sp, #0xc0]
71004faff8  subs x20,x8,x9
71004faffc  b.eq 0x71004fb0ac
71004fb000  orr x9,xzr,#-0x5555555555555556
71004fb004  asr x8,x20,#0x3
71004fb008  movk x9,#0xaaab
71004fb00c  mul x21,x8,x9
71004fb010  orr x8,xzr,#-0x5555555555555556
71004fb014  movk x8,#0xaaa, LSL #48
71004fb018  cmp x21,x8
71004fb01c  b.hi 0x71004fd218
71004fb020  mov w0,#0x10
71004fb024  mov x1,x20
71004fb028  bl 0x710392e290
71004fb02c  cbnz x0,0x71004fb070
71004fb030  adrp x8,0x7105332000
71004fb034  ldr x0,[x8, #0xf00]
71004fb038  cbz x0,0x71004fb06c
71004fb03c  stur wzr,[x29, #-0xf8]
71004fb040  str x20,[sp, #0xf0]
71004fb044  ldr x8,[x0]
71004fb048  ldr x8,[x8, #0x30]
71004fb04c  sub x1,x29,#0xf8
71004fb050  add x2,sp,#0xf0
71004fb054  blr x8
71004fb058  tbz w0,#0x0,0x71004fb06c
71004fb05c  mov w0,#0x10
71004fb060  mov x1,x20
71004fb064  bl 0x710392e290
71004fb068  cbnz x0,0x71004fb070
71004fb06c  mov x0,xzr
71004fb070  orr w8,wzr,#0x18
71004fb074  madd x8,x21,x8,x0
71004fb078  str x8,[x19, #0x18]
71004fb07c  stp x0,x0,[x19, #0x8]
71004fb080  ldp x20,x21,[sp, #0xc0]
71004fb084  cmp x20,x21
71004fb088  b.eq 0x71004fb0ac
71004fb08c  mov x1,x20
71004fb090  bl 0x71039c2730
71004fb094  ldr x8,[x19, #0x10]
71004fb098  add x20,x20,#0x18
71004fb09c  cmp x21,x20
71004fb0a0  add x0,x8,#0x18
71004fb0a4  str x0,[x19, #0x10]
71004fb0a8  b.ne 0x71004fb08c
71004fb0ac  ldr x8,[sp, #0xe0]
71004fb0b0  add x8,x8,#0x20
71004fb0b4  str x8,[sp, #0xe0]
71004fb0b8  b 0x71004fb0c8
71004fb0bc  add x1,sp,#0xb8
71004fb0c0  mov x0,x21
71004fb0c4  bl 0x71004fd4f0
71004fb0c8  mov w1,#0xb8
71004fb0cc  mov w0,#0x10
71004fb0d0  bl 0x710392e290
71004fb0d4  mov x20,x0
71004fb0d8  cbnz x0,0x71004fb124
71004fb0dc  adrp x8,0x7105332000
71004fb0e0  ldr x0,[x8, #0xf00]
71004fb0e4  cbz x0,0x71004fb120
71004fb0e8  mov w8,#0xb8
71004fb0ec  stur wzr,[x29, #-0xf8]
71004fb0f0  sub x1,x29,#0xf8
71004fb0f4  str x8,[sp, #0xf0]
71004fb0f8  ldr x8,[x0]
71004fb0fc  ldr x8,[x8, #0x30]
71004fb100  add x2,sp,#0xf0
71004fb104  blr x8
71004fb108  tbz w0,#0x0,0x71004fb120
71004fb10c  mov w1,#0xb8
71004fb110  mov w0,#0x10
71004fb114  bl 0x710392e290
71004fb118  mov x20,x0
71004fb11c  cbnz x0,0x71004fb124
71004fb120  mov x20,xzr
71004fb124  add x21,x20,#0x20
71004fb128  adrp x8,0x7104f75000
71004fb12c  add x8,x8,#0x400
71004fb130  adrp x9,0x7105239000
71004fb134  add x9,x9,#0x3f0
71004fb138  str x8,[x20]
71004fb13c  mov x19,x20
71004fb140  mov x0,x21
71004fb144  stp xzr,xzr,[x20, #0x8]
71004fb148  str x9,[x19, #0x18]!
71004fb14c  bl 0x71036d1a90
71004fb150  adrp x8,0x7105239000
71004fb154  add x8,x8,#0x410
71004fb158  mov w1,#0xd8
71004fb15c  mov w0,#0x10
71004fb160  str x8,[x19]
71004fb164  strb wzr,[x20, #0xb0]
71004fb168  stp xzr,xzr,[x20, #0xa0]
71004fb16c  bl 0x710392e290
71004fb170  mov x22,x0
71004fb174  cbnz x0,0x71004fb1c0
71004fb178  adrp x8,0x7105332000
71004fb17c  ldr x0,[x8, #0xf00]
71004fb180  cbz x0,0x71004fb1bc
71004fb184  mov w8,#0xd8
71004fb188  stur wzr,[x29, #-0xf8]
71004fb18c  sub x1,x29,#0xf8
71004fb190  str x8,[sp, #0xf0]
71004fb194  ldr x8,[x0]
71004fb198  ldr x8,[x8, #0x30]
71004fb19c  add x2,sp,#0xf0
71004fb1a0  blr x8
71004fb1a4  tbz w0,#0x0,0x71004fb1bc
71004fb1a8  mov w1,#0xd8
71004fb1ac  mov w0,#0x10
71004fb1b0  bl 0x710392e290
71004fb1b4  mov x22,x0
71004fb1b8  cbnz x0,0x71004fb1c0
71004fb1bc  mov x22,xzr
71004fb1c0  mov x0,x22
71004fb1c4  mov x1,x21
71004fb1c8  bl 0x71036acd40
71004fb1cc  mov x0,x21
71004fb1d0  mov x1,x22
71004fb1d4  bl 0x71036d38f0
71004fb1d8  mov w1,#0x90
71004fb1dc  mov w0,#0x10
71004fb1e0  bl 0x710392e290
71004fb1e4  mov x1,x0
71004fb1e8  cbnz x0,0x71004fb234
71004fb1ec  adrp x8,0x7105332000
71004fb1f0  ldr x0,[x8, #0xf00]
71004fb1f4  cbz x0,0x71004fb230
71004fb1f8  mov w8,#0x90
71004fb1fc  stur wzr,[x29, #-0xf8]
71004fb200  sub x1,x29,#0xf8
71004fb204  str x8,[sp, #0xf0]
71004fb208  ldr x8,[x0]
71004fb20c  ldr x8,[x8, #0x30]
71004fb210  add x2,sp,#0xf0
71004fb214  blr x8
71004fb218  tbz w0,#0x0,0x71004fb230
71004fb21c  mov w1,#0x90
71004fb220  mov w0,#0x10
71004fb224  bl 0x710392e290
71004fb228  mov x1,x0
71004fb22c  cbnz x0,0x71004fb234
71004fb230  mov x1,xzr
71004fb234  adrp x8,0x710523b000
71004fb238  add x8,x8,#0x240
71004fb23c  add x9,x1,#0x28
71004fb240  stp x8,x21,[x1]
71004fb244  mov w8,#0xffffffff
71004fb248  str w8,[x1, #0x20]
71004fb24c  adrp x8,0x7104742000
71004fb250  add x8,x8,#0xdbb
71004fb254  stp x9,x8,[x1, #0x28]
71004fb258  orr w8,wzr,#0xffffff
71004fb25c  mov x0,x21
71004fb260  stp xzr,xzr,[x1, #0x10]
71004fb264  strb wzr,[x1, #0x24]
71004fb268  str w8,[x1, #0x38]
71004fb26c  strb wzr,[x1, #0x58]
71004fb270  str xzr,[x1, #0x40]
71004fb274  stp xzr,xzr,[x1, #0x80]
71004fb278  stp xzr,xzr,[x1, #0x70]
71004fb27c  stp xzr,xzr,[x1, #0x60]
71004fb280  stp xzr,xzr,[x1, #0x48]
71004fb284  bl 0x71036d39e0
71004fb288  mov w0,#0x10
71004fb28c  mov w1,#0x80
71004fb290  bl 0x710392e290
71004fb294  mov x22,x0
71004fb298  cbnz x0,0x71004fb2e4
71004fb29c  adrp x8,0x7105332000
71004fb2a0  ldr x0,[x8, #0xf00]
71004fb2a4  cbz x0,0x71004fb2e0
71004fb2a8  mov w8,#0x80
71004fb2ac  stur wzr,[x29, #-0xf8]
71004fb2b0  sub x1,x29,#0xf8
71004fb2b4  str x8,[sp, #0xf0]
71004fb2b8  ldr x8,[x0]
71004fb2bc  ldr x8,[x8, #0x30]
71004fb2c0  add x2,sp,#0xf0
71004fb2c4  blr x8
71004fb2c8  tbz w0,#0x0,0x71004fb2e0
71004fb2cc  mov w0,#0x10
71004fb2d0  mov w1,#0x80
71004fb2d4  bl 0x710392e290
71004fb2d8  mov x22,x0
71004fb2dc  cbnz x0,0x71004fb2e4
71004fb2e0  mov x22,xzr
71004fb2e4  adrp x8,0x7105239000
71004fb2e8  add x8,x8,#0xc60
71004fb2ec  strb wzr,[x22, #0x58]
71004fb2f0  stp x8,x21,[x22]
71004fb2f4  adrp x8,0x7105239000
71004fb2f8  add x8,x8,#0x610
71004fb2fc  stp x8,xzr,[x22, #0x10]
71004fb300  adrp x8,0x7105239000
71004fb304  add x8,x8,#0xcf0
71004fb308  adrp x23,0x7105339000
71004fb30c  add x23,x23,#0xfb0
71004fb310  stp x8,xzr,[x22, #0x30]
71004fb314  mov w8,#0xffffffff
71004fb318  str x8,[x22, #0x50]
71004fb31c  str xzr,[x22, #0x68]
71004fb320  strb wzr,[x22, #0x64]
71004fb324  stur xzr,[x22, #0x5c]
71004fb328  stp xzr,xzr,[x22, #0x20]
71004fb32c  stp xzr,xzr,[x22, #0x40]
71004fb330  stp xzr,xzr,[x22, #0x70]
71004fb334  ldr x25,[x20, #0x98]
71004fb338  ldarb w8,[x23]
71004fb33c  tbz w8,#0x0,0x71004fd188
71004fb340  adrp x24,0x7105339000
71004fb344  add x24,x24,#0xfb8
71004fb348  cmp x25,x24
71004fb34c  b.eq 0x71004fb370
71004fb350  ldr x0,[x20, #0x98]
71004fb354  cbz x0,0x71004fb364
71004fb358  ldr x8,[x0]
71004fb35c  ldr x8,[x8, #0x8]
71004fb360  blr x8
71004fb364  ldarb w8,[x23]
71004fb368  tbz w8,#0x0,0x71004fd1c4
71004fb36c  str x24,[x20, #0x98]
71004fb370  mov w0,#0x10
71004fb374  orr w1,wzr,#0x30
71004fb378  str x22,[x20, #0x98]
71004fb37c  bl 0x710392e290
71004fb380  mov x1,x0
71004fb384  cbnz x0,0x71004fb3d0
71004fb388  adrp x8,0x7105332000
71004fb38c  ldr x0,[x8, #0xf00]
71004fb390  cbz x0,0x71004fb3cc
71004fb394  orr w8,wzr,#0x30
71004fb398  stur wzr,[x29, #-0xf8]
71004fb39c  sub x1,x29,#0xf8
71004fb3a0  str x8,[sp, #0xf0]
71004fb3a4  ldr x8,[x0]
71004fb3a8  ldr x8,[x8, #0x30]
71004fb3ac  add x2,sp,#0xf0
71004fb3b0  blr x8
71004fb3b4  tbz w0,#0x0,0x71004fb3cc
71004fb3b8  mov w0,#0x10
71004fb3bc  orr w1,wzr,#0x30
71004fb3c0  bl 0x710392e290
71004fb3c4  mov x1,x0
71004fb3c8  cbnz x0,0x71004fb3d0
71004fb3cc  mov x1,xzr
71004fb3d0  adrp x8,0x7105239000
71004fb3d4  add x8,x8,#0xc18
71004fb3d8  mov x0,x21
71004fb3dc  stp x8,x21,[x1]
71004fb3e0  stp xzr,xzr,[x1, #0x20]
71004fb3e4  stp xzr,xzr,[x1, #0x10]
71004fb3e8  bl 0x71036d3ad0
71004fb3ec  ldr x21,[x26, #0x8]
71004fb3f0  stp x19,x20,[x26]
71004fb3f4  cbz x21,0x71004fb428
71004fb3f8  add x8,x21,#0x8
71004fb3fc  ldaxr x9,[x8]
71004fb400  sub x10,x9,#0x1
71004fb404  stlxr w11,x10,[x8]
71004fb408  cbnz w11,0x71004fb3fc
71004fb40c  cbnz x9,0x71004fb428
71004fb410  ldr x8,[x21]
71004fb414  ldr x8,[x8, #0x10]
71004fb418  mov x0,x21
71004fb41c  blr x8
71004fb420  mov x0,x21
71004fb424  bl 0x71039c2670
71004fb428  ldp x8,x9,[sp, #0xd8]
71004fb42c  cmp x8,x9
71004fb430  b.eq 0x71004fbf9c
71004fb434  stp xzr,xzr,[sp, #0x60]
71004fb438  add x10,sp,#0xf0
71004fb43c  stp xzr,xzr,[sp, #0x80]
71004fb440  ldr x9,[x26]
71004fb444  add x24,x10,#0x8
71004fb448  mov x19,xzr
71004fb44c  orr w25,wzr,#0x18
71004fb450  str x26,[sp, #0x30]
71004fb454  orr x26,xzr,#-0x5555555555555556
71004fb458  movk x26,#0xaaab
71004fb45c  str x9,[sp, #0x20]
71004fb460  add x9,x10,#0x20
71004fb464  str x24,[sp, #0x90]
71004fb468  stp x9,xzr,[sp, #0x98]
71004fb46c  add x9,sp,#0x9e8
71004fb470  add x9,x9,#0x8
71004fb474  str x9,[sp, #0x50]
71004fb478  add x9,sp,#0x9c8
71004fb47c  add x9,x9,#0x8
71004fb480  str x9,[sp, #0x48]
71004fb484  sub x9,x29,#0xf8
71004fb488  add x9,x9,#0x8
71004fb48c  stp x9,xzr,[sp, #0x70]
71004fb490  add x9,x10,#0x38
71004fb494  str x9,[sp, #0xb0]
71004fb498  add x9,x10,#0x30
71004fb49c  str x9,[sp, #0x58]
71004fb4a0  add x9,x10,#0x9
71004fb4a4  str x9,[sp, #0x18]
71004fb4a8  add x9,x10,#0x58
71004fb4ac  str x9,[sp, #0x40]
71004fb4b0  add x9,x10,#0x31
71004fb4b4  str x9,[sp, #0x10]
71004fb4b8  add x9,x10,#0x59
71004fb4bc  str x9,[sp, #0x8]
71004fb4c0  sub x9,x29,#0x78
71004fb4c4  add x9,x9,#0x8
71004fb4c8  str x9,[sp, #0x28]
71004fb4cc  lsl x23,x19,#0x5
71004fb4d0  ldr w8,[x8, x23, LSL #0x0]
71004fb4d4  cmp w8,#0x3
71004fb4d8  b.hi 0x71004fbf38
71004fb4dc  adrp x9,0x71044b9000
71004fb4e0  add x9,x9,#0x24c
71004fb4e4  ldrsw x8,[x9, x8, LSL #0x2]
71004fb4e8  add x8,x8,x9
71004fb4ec  br x8
71004fb4f0  add x0,sp,#0xf0
71004fb4f4  bl 0x71038f2720
71004fb4f8  ldr x8,[sp, #0x100]
71004fb4fc  cbnz x8,0x71004fb574
71004fb500  b 0x71004fb594
71004fb504  add x0,sp,#0xf0
71004fb508  bl 0x71038f3830
71004fb50c  ldr x8,[sp, #0x100]
71004fb510  cbnz x8,0x71004fb574
71004fb514  b 0x71004fb594
71004fb518  mov w8,#0x331
71004fb51c  str x8,[sp, #0xf0]
71004fb520  adrp x8,0x7106d43000
71004fb524  add x8,x8,#0x308
71004fb528  ldarb w8,[x8]
71004fb52c  tbz w8,#0x0,0x71004fbe08
71004fb530  adrp x8,0x7106d43000
71004fb534  ldrb w8,[x8, #0x260]
71004fb538  str xzr,[x24]
71004fb53c  stp xzr,xzr,[x24, #0x8]
71004fb540  tbnz w8,#0x0,0x71004fb7f8
71004fb544  adrp x8,0x7106d43000
71004fb548  add x8,x8,#0x260
71004fb54c  mov x10,x8
71004fb550  ldr x8,[x8]
71004fb554  ldp x9,x10,[x10, #0x8]
71004fb558  str x8,[x24]
71004fb55c  stp x9,x10,[x24, #0x8]
71004fb560  b 0x71004fbac0
71004fb564  add x0,sp,#0xf0
71004fb568  bl 0x71038f2070
71004fb56c  ldr x8,[sp, #0x100]
71004fb570  cbz x8,0x71004fb594
71004fb574  ldr x8,[x8]
71004fb578  ldr x9,[sp, #0x108]
71004fb57c  cmp x8,x9
71004fb580  b.ne 0x71004fb594
71004fb584  ldr x28,[sp, #0xf8]
71004fb588  stp xzr,xzr,[x24, #0x8]
71004fb58c  str xzr,[x24]
71004fb590  b 0x71004fb598
71004fb594  mov x28,xzr
71004fb598  adrp x8,0x7105239000
71004fb59c  add x8,x8,#0x490
71004fb5a0  str x8,[sp, #0xf0]
71004fb5a4  cbz x28,0x71004fbf38
71004fb5a8  ldr x27,[x28, #0x8]
71004fb5ac  cbz x27,0x71004fbf38
71004fb5b0  adrp x8,0x7105291000
71004fb5b4  add x8,x8,#0xd98
71004fb5b8  ldr x22,[x27]
71004fb5bc  stp xzr,xzr,[x24, #0x8]
71004fb5c0  str xzr,[x24]
71004fb5c4  str x8,[sp, #0xf0]
71004fb5c8  ldr x8,[sp, #0xb0]
71004fb5cc  ldr x0,[sp, #0x98]
71004fb5d0  stp x8,xzr,[sp, #0x110]
71004fb5d4  mov w8,#0x40
71004fb5d8  str x8,[sp, #0x120]
71004fb5dc  mov w8,#0x10
71004fb5e0  str x8,[sp, #0x728]
71004fb5e4  ldr x8,[sp, #0xd8]
71004fb5e8  strb wzr,[sp, #0x730]
71004fb5ec  add x8,x8,x23
71004fb5f0  ldp x9,x8,[x8, #0x8]
71004fb5f4  sub x8,x8,x9
71004fb5f8  asr x8,x8,#0x3
71004fb5fc  mul x1,x8,x26
71004fb600  bl 0x71036748a0
71004fb604  ldr x9,[sp, #0xd8]
71004fb608  add x8,x9,x23
71004fb60c  ldp x10,x8,[x8, #0x8]
71004fb610  cmp x8,x10
71004fb614  b.eq 0x71004fb68c
71004fb618  mov x8,xzr
71004fb61c  mov w24,#0x1
71004fb620  add x9,x9,x19, LSL #0x5
71004fb624  ldr x9,[x9, #0x8]
71004fb628  madd x10,x8,x25,x9
71004fb62c  ldrb w11,[x10]
71004fb630  tbnz w11,#0x0,0x71004fb63c
71004fb634  add x20,x10,#0x1
71004fb638  b 0x71004fb644
71004fb63c  madd x9,x8,x25,x9
71004fb640  ldr x20,[x9, #0x10]
71004fb644  ldr x9,[sp, #0x110]
71004fb648  mov x0,x20
71004fb64c  madd x21,x8,x25,x9
71004fb650  bl 0x71039c0070
71004fb654  mov x2,x0
71004fb658  mov x0,x21
71004fb65c  mov x1,x20
71004fb660  bl 0x71002c51f0
71004fb664  ldr x9,[sp, #0xd8]
71004fb668  add x10,x9,x19, LSL #0x5
71004fb66c  mov w8,w24
71004fb670  ldp x11,x10,[x10, #0x8]
71004fb674  sub x10,x10,x11
71004fb678  asr x10,x10,#0x3
71004fb67c  mul x10,x10,x26
71004fb680  add w24,w24,#0x1
71004fb684  cmp x10,x8
71004fb688  b.hi 0x71004fb620
71004fb68c  mov w8,#0x10
71004fb690  strb wzr,[sp, #0x730]
71004fb694  str x8,[sp, #0x728]
71004fb698  ldr w8,[x9, x23, LSL #0x0]
71004fb69c  cbz w8,0x71004fb750
71004fb6a0  cmp w8,#0x3
71004fb6a4  b.ne 0x71004fb91c
71004fb6a8  ldr x8,[sp, #0x48]
71004fb6ac  stp xzr,xzr,[x8, #0x8]
71004fb6b0  str xzr,[x8]
71004fb6b4  adrp x8,0x7105239000
71004fb6b8  add x8,x8,#0x430
71004fb6bc  str x8,[sp, #0x9c8]
71004fb6c0  ldr x8,[x27]
71004fb6c4  cmp x8,x22
71004fb6c8  b.ne 0x71004fb6ec
71004fb6cc  str x28,[sp, #0x9d0]
71004fb6d0  ldr x8,[x28, #0x8]
71004fb6d4  str x8,[sp, #0x9d8]
71004fb6d8  ldr x8,[x8]
71004fb6dc  mov x22,xzr
71004fb6e0  mov x27,xzr
71004fb6e4  mov x28,xzr
71004fb6e8  str x8,[sp, #0x9e0]
71004fb6ec  sub x0,x29,#0xf8
71004fb6f0  add x1,sp,#0xf0
71004fb6f4  add x2,sp,#0x9c8
71004fb6f8  bl 0x71038cf720
71004fb6fc  ldur x20,[x29, #-0xf0]
71004fb700  ldr x8,[sp, #0x70]
71004fb704  str xzr,[x8]
71004fb708  stp xzr,xzr,[x8, #0x8]
71004fb70c  cbz x20,0x71004fb82c
71004fb710  ldr x24,[x20, #0x8]
71004fb714  ldr x23,[x24]
71004fb718  ldr x8,[sp, #0xa0]
71004fb71c  cbz x8,0x71004fb83c
71004fb720  ldr x8,[sp, #0x78]
71004fb724  cbz x8,0x71004fb83c
71004fb728  ldr x8,[sp, #0xa0]
71004fb72c  ldr x8,[x8]
71004fb730  ldr x9,[sp, #0x68]
71004fb734  cmp x8,x9
71004fb738  b.ne 0x71004fb83c
71004fb73c  ldr x0,[sp, #0x78]
71004fb740  ldr x8,[x0]
71004fb744  ldr x8,[x8, #0x8]
71004fb748  blr x8
71004fb74c  b 0x71004fb83c
71004fb750  ldr x8,[sp, #0x50]
71004fb754  stp xzr,xzr,[x8, #0x8]
71004fb758  str xzr,[x8]
71004fb75c  adrp x8,0x7105239000
71004fb760  add x8,x8,#0x430
71004fb764  str x8,[sp, #0x9e8]
71004fb768  ldr x8,[x27]
71004fb76c  cmp x8,x22
71004fb770  b.ne 0x71004fb794
71004fb774  str x28,[sp, #0x9f0]
71004fb778  ldr x8,[x28, #0x8]
71004fb77c  str x8,[sp, #0x9f8]
71004fb780  ldr x8,[x8]
71004fb784  mov x22,xzr
71004fb788  mov x27,xzr
71004fb78c  mov x28,xzr
71004fb790  str x8,[sp, #0xa00]
71004fb794  sub x0,x29,#0xf8
71004fb798  add x1,sp,#0xf0
71004fb79c  add x2,sp,#0x9e8
71004fb7a0  bl 0x71038cf720
71004fb7a4  ldur x20,[x29, #-0xf0]
71004fb7a8  ldr x8,[sp, #0x70]
71004fb7ac  str xzr,[x8]
71004fb7b0  stp xzr,xzr,[x8, #0x8]
71004fb7b4  cbz x20,0x71004fb8b0
71004fb7b8  ldr x24,[x20, #0x8]
71004fb7bc  ldr x23,[x24]
71004fb7c0  ldr x8,[sp, #0x88]
71004fb7c4  cbz x8,0x71004fb8c0
71004fb7c8  ldr x8,[sp, #0x80]
71004fb7cc  cbz x8,0x71004fb8c0
71004fb7d0  ldr x8,[sp, #0x88]
71004fb7d4  ldr x8,[x8]
71004fb7d8  ldr x9,[sp, #0x60]
71004fb7dc  cmp x8,x9
71004fb7e0  b.ne 0x71004fb8c0
71004fb7e4  ldr x0,[sp, #0x80]
71004fb7e8  ldr x8,[x0]
71004fb7ec  ldr x8,[x8, #0x8]
71004fb7f0  blr x8
71004fb7f4  b 0x71004fb8c0
71004fb7f8  adrp x8,0x7106d43000
71004fb7fc  add x8,x8,#0x268
71004fb800  ldr x28,[x8]
71004fb804  cmn x28,#0x10
71004fb808  b.cs 0x71004fd1f8
71004fb80c  ldr x27,[x8, #0x8]
71004fb810  cmp x28,#0x17
71004fb814  b.cs 0x71004fba2c
71004fb818  ldr x21,[sp, #0x18]
71004fb81c  lsl w8,w28,#0x1
71004fb820  strb w8,[sp, #0xf8]
71004fb824  cbnz x28,0x71004fbaac
71004fb828  b 0x71004fbabc
71004fb82c  mov x24,xzr
71004fb830  mov x23,xzr
71004fb834  ldr x8,[sp, #0xa0]
71004fb838  cbnz x8,0x71004fb720
71004fb83c  adrp x8,0x7105239000
71004fb840  add x8,x8,#0x450
71004fb844  stur x8,[x29, #-0xf8]
71004fb848  adrp x8,0x7105239000
71004fb84c  add x8,x8,#0x430
71004fb850  str x8,[sp, #0x9c8]
71004fb854  ldr x8,[sp, #0x9d8]
71004fb858  cbz x8,0x71004fb880
71004fb85c  ldr x8,[x8]
71004fb860  ldr x9,[sp, #0x9e0]
71004fb864  cmp x8,x9
71004fb868  b.ne 0x71004fb880
71004fb86c  ldr x0,[sp, #0x9d0]
71004fb870  cbz x0,0x71004fb880
71004fb874  ldr x8,[x0]
71004fb878  ldr x8,[x8, #0x8]
71004fb87c  blr x8
71004fb880  cbz x24,0x71004fb8a0
71004fb884  ldr x8,[x24]
71004fb888  cmp x8,x23
71004fb88c  b.ne 0x71004fb938
71004fb890  str x23,[sp, #0x68]
71004fb894  str x24,[sp, #0xa0]
71004fb898  str x20,[sp, #0x78]
71004fb89c  b 0x71004fb91c
71004fb8a0  str xzr,[sp, #0xa0]
71004fb8a4  mov w21,#0x1
71004fb8a8  str x23,[sp, #0x68]
71004fb8ac  b 0x71004fb944
71004fb8b0  mov x24,xzr
71004fb8b4  mov x23,xzr
71004fb8b8  ldr x8,[sp, #0x88]
71004fb8bc  cbnz x8,0x71004fb7c8
71004fb8c0  adrp x8,0x7105239000
71004fb8c4  add x8,x8,#0x450
71004fb8c8  stur x8,[x29, #-0xf8]
71004fb8cc  adrp x8,0x7105239000
71004fb8d0  add x8,x8,#0x430
71004fb8d4  str x8,[sp, #0x9e8]
71004fb8d8  ldr x8,[sp, #0x9f8]
71004fb8dc  cbz x8,0x71004fb904
71004fb8e0  ldr x8,[x8]
71004fb8e4  ldr x9,[sp, #0xa00]
71004fb8e8  cmp x8,x9
71004fb8ec  b.ne 0x71004fb904
71004fb8f0  ldr x0,[sp, #0x9f0]
71004fb8f4  cbz x0,0x71004fb904
71004fb8f8  ldr x8,[x0]
71004fb8fc  ldr x8,[x8, #0x8]
71004fb900  blr x8
71004fb904  cbz x24,0x71004fb92c
71004fb908  ldr x8,[x24]
71004fb90c  cmp x8,x23
71004fb910  b.ne 0x71004fb954
71004fb914  stp x20,x24,[sp, #0x80]
71004fb918  str x23,[sp, #0x60]
71004fb91c  mov w21,wzr
71004fb920  ldr x23,[sp, #0x118]
71004fb924  cbnz x23,0x71004fb968
71004fb928  b 0x71004fb9a4
71004fb92c  stp x20,xzr,[sp, #0x80]
71004fb930  mov w21,#0x1
71004fb934  b 0x71004fb95c
71004fb938  mov w21,#0x1
71004fb93c  str x23,[sp, #0x68]
71004fb940  str x24,[sp, #0xa0]
71004fb944  str x20,[sp, #0x78]
71004fb948  ldr x23,[sp, #0x118]
71004fb94c  cbnz x23,0x71004fb968
71004fb950  b 0x71004fb9a4
71004fb954  mov w21,#0x1
71004fb958  stp x20,x24,[sp, #0x80]
71004fb95c  str x23,[sp, #0x60]
71004fb960  ldr x23,[sp, #0x118]
71004fb964  cbz x23,0x71004fb9a4
71004fb968  ldr x8,[sp, #0x110]
71004fb96c  add x24,x8,#0x10
71004fb970  ldurb w8,[x24, #-0x10]
71004fb974  sub x23,x23,#0x1
71004fb978  tbz w8,#0x0,0x71004fb99c
71004fb97c  adrp x8,0x71052a8000
71004fb980  ldr x20,[x24]
71004fb984  ldr x8,[x8, #0xa70]
71004fb988  cbz x8,0x71004fb994
71004fb98c  mov x0,x20
71004fb990  bl 0x71039c19b0
71004fb994  mov x0,x20
71004fb998  bl 0x710392eb40
71004fb99c  add x24,x24,#0x18
71004fb9a0  cbnz x23,0x71004fb970
71004fb9a4  ldr x8,[sp, #0x120]
71004fb9a8  ldr x24,[sp, #0x90]
71004fb9ac  cbz x8,0x71004fb9dc
71004fb9b0  ldr x20,[sp, #0x110]
71004fb9b4  ldr x8,[sp, #0xb0]
71004fb9b8  cmp x20,x8
71004fb9bc  b.eq 0x71004fb9dc
71004fb9c0  adrp x8,0x71052a8000
71004fb9c4  ldr x8,[x8, #0xa70]
71004fb9c8  cbz x8,0x71004fb9d4
71004fb9cc  mov x0,x20
71004fb9d0  bl 0x71039c19b0
71004fb9d4  mov x0,x20
71004fb9d8  bl 0x710392eb40
71004fb9dc  cbz x27,0x71004fba00
71004fb9e0  cbz x28,0x71004fba00
71004fb9e4  ldr x8,[x27]
71004fb9e8  cmp x8,x22
71004fb9ec  b.ne 0x71004fba00
71004fb9f0  ldr x8,[x28]
71004fb9f4  ldr x8,[x8, #0x8]
71004fb9f8  mov x0,x28
71004fb9fc  blr x8
71004fba00  cbnz w21,0x71004fbf38
71004fba04  add w8,w19,#0x1
71004fba08  mov w19,w8
71004fba0c  ldr x8,[sp, #0xa8]
71004fba10  ldr x9,[x8]
71004fba14  ldr x8,[sp, #0xd8]
71004fba18  sub x9,x9,x8
71004fba1c  asr x9,x9,#0x5
71004fba20  cmp x9,x19
71004fba24  b.hi 0x71004fb4cc
71004fba28  b 0x71004fc270
71004fba2c  add x8,x28,#0x10
71004fba30  and x20,x8,#-0x10
71004fba34  sub x0,x29,#0xb0
71004fba38  mov w1,#0x10
71004fba3c  mov x2,x20
71004fba40  bl 0x710392e1f0
71004fba44  cmp w0,#0xc
71004fba48  b.ne 0x71004fba80
71004fba4c  adrp x8,0x710593d000
71004fba50  ldr x0,[x8, #0x2b0]
71004fba54  cbz x0,0x71004fba80
71004fba58  stur x20,[x29, #-0xf8]
71004fba5c  ldr x8,[x0]
71004fba60  ldr x8,[x8, #0x30]
71004fba64  sub x1,x29,#0xf8
71004fba68  blr x8
71004fba6c  tbz w0,#0x0,0x71004fba80
71004fba70  sub x0,x29,#0xb0
71004fba74  mov w1,#0x10
71004fba78  mov x2,x20
71004fba7c  bl 0x710392e1f0
71004fba80  adrp x8,0x71052a8000
71004fba84  ldr x8,[x8, #0xa78]
71004fba88  cbz x8,0x71004fba9c
71004fba8c  ldur x2,[x29, #-0xb0]
71004fba90  mov w1,#0x10
71004fba94  mov x0,x20
71004fba98  bl 0x71039c19e0
71004fba9c  ldur x21,[x29, #-0xb0]
71004fbaa0  orr x8,x20,#0x1
71004fbaa4  str x8,[sp, #0xf8]
71004fbaa8  stp x28,x21,[sp, #0x100]
71004fbaac  mov x0,x21
71004fbab0  mov x1,x27
71004fbab4  mov x2,x28
71004fbab8  bl 0x71039c00e0
71004fbabc  strb wzr,[x21, x28, LSL ]
71004fbac0  mov x8,#0x331
71004fbac4  movk x8,#0x4, LSL #32
71004fbac8  str wzr,[sp, #0x110]
71004fbacc  str x8,[sp, #0x118]
71004fbad0  adrp x8,0x7106d43000
71004fbad4  add x8,x8,#0x310
71004fbad8  ldarb w8,[x8]
71004fbadc  ldr x9,[sp, #0x58]
71004fbae0  tbz w8,#0x0,0x71004fbe60
71004fbae4  adrp x8,0x7106d43000
71004fbae8  ldrb w8,[x8, #0x278]
71004fbaec  str xzr,[x9]
71004fbaf0  stp xzr,xzr,[x9, #0x8]
71004fbaf4  tbnz w8,#0x0,0x71004fbb24
71004fbaf8  adrp x8,0x7106d43000
71004fbafc  add x8,x8,#0x278
71004fbb00  mov x10,x8
71004fbb04  ldr x8,[x8]
71004fbb08  ldp x9,x10,[x10, #0x8]
71004fbb0c  ldr x11,[sp, #0x58]
71004fbb10  str x9,[x11, #0x8]
71004fbb14  ldr x9,[sp, #0x58]
71004fbb18  str x10,[x9, #0x10]
71004fbb1c  str x8,[x9]
71004fbb20  b 0x71004fbbf4
71004fbb24  adrp x8,0x7106d43000
71004fbb28  add x8,x8,#0x280
71004fbb2c  ldr x28,[x8]
71004fbb30  cmn x28,#0x10
71004fbb34  b.cs 0x71004fd200
71004fbb38  ldr x27,[x8, #0x8]
71004fbb3c  cmp x28,#0x17
71004fbb40  b.cs 0x71004fbb58
71004fbb44  ldr x21,[sp, #0x10]
71004fbb48  lsl w8,w28,#0x1
71004fbb4c  strb w8,[sp, #0x120]
71004fbb50  cbnz x28,0x71004fbbe0
71004fbb54  b 0x71004fbbf0
71004fbb58  add x8,x28,#0x10
71004fbb5c  and x20,x8,#-0x10
71004fbb60  sub x0,x29,#0xb0
71004fbb64  mov w1,#0x10
71004fbb68  mov x2,x20
71004fbb6c  bl 0x710392e1f0
71004fbb70  cmp w0,#0xc
71004fbb74  b.ne 0x71004fbbb0
71004fbb78  adrp x8,0x710593d000
71004fbb7c  ldr x0,[x8, #0x2b0]
71004fbb80  cbz x0,0x71004fbbb0
71004fbb84  stur x20,[x29, #-0xf8]
71004fbb88  ldr x8,[x0]
71004fbb8c  ldr x8,[x8, #0x30]
71004fbb90  sub x1,x29,#0xf8
71004fbb94  mov w21,#0x1
71004fbb98  blr x8
71004fbb9c  tbz w0,#0x0,0x71004fbbb0
71004fbba0  sub x0,x29,#0xb0
71004fbba4  mov w1,#0x10
71004fbba8  mov x2,x20
71004fbbac  bl 0x710392e1f0
71004fbbb0  adrp x8,0x71052a8000
71004fbbb4  ldr x8,[x8, #0xa78]
71004fbbb8  cbz x8,0x71004fbbd0
71004fbbbc  ldur x2,[x29, #-0xb0]
71004fbbc0  mov w21,#0x1
71004fbbc4  mov w1,#0x10
71004fbbc8  mov x0,x20
71004fbbcc  bl 0x71039c19e0
71004fbbd0  ldur x21,[x29, #-0xb0]
71004fbbd4  orr x8,x20,#0x1
71004fbbd8  str x8,[sp, #0x120]
71004fbbdc  stp x28,x21,[sp, #0x128]
71004fbbe0  mov x0,x21
71004fbbe4  mov x1,x27
71004fbbe8  mov x2,x28
71004fbbec  bl 0x71039c00e0
71004fbbf0  strb wzr,[x21, x28, LSL ]
71004fbbf4  mov x8,#0x331
71004fbbf8  movk x8,#0x8, LSL #32
71004fbbfc  str wzr,[sp, #0x138]
71004fbc00  str x8,[sp, #0x140]
71004fbc04  adrp x8,0x7106d43000
71004fbc08  add x8,x8,#0x318
71004fbc0c  ldarb w8,[x8]
71004fbc10  ldr x9,[sp, #0x40]
71004fbc14  tbz w8,#0x0,0x71004fbecc
71004fbc18  adrp x8,0x7106d43000
71004fbc1c  ldrb w8,[x8, #0x290]
71004fbc20  str xzr,[x9]
71004fbc24  stp xzr,xzr,[x9, #0x8]
71004fbc28  tbnz w8,#0x0,0x71004fbc50
71004fbc2c  adrp x8,0x7106d43000
71004fbc30  add x8,x8,#0x290
71004fbc34  mov x10,x8
71004fbc38  ldr x8,[x8]
71004fbc3c  mov x11,x9
71004fbc40  str x8,[x11]
71004fbc44  ldp x9,x10,[x10, #0x8]
71004fbc48  stp x9,x10,[x11, #0x8]
71004fbc4c  b 0x71004fbd20
71004fbc50  adrp x8,0x7106d43000
71004fbc54  add x8,x8,#0x298
71004fbc58  ldr x28,[x8]
71004fbc5c  cmn x28,#0x10
71004fbc60  b.cs 0x71004fd20c
71004fbc64  ldr x27,[x8, #0x8]
71004fbc68  cmp x28,#0x17
71004fbc6c  b.cs 0x71004fbc84
71004fbc70  ldr x21,[sp, #0x8]
71004fbc74  lsl w8,w28,#0x1
71004fbc78  strb w8,[sp, #0x148]
71004fbc7c  cbnz x28,0x71004fbd0c
71004fbc80  b 0x71004fbd1c
71004fbc84  add x8,x28,#0x10
71004fbc88  and x20,x8,#-0x10
71004fbc8c  sub x0,x29,#0xb0
71004fbc90  mov w1,#0x10
71004fbc94  mov x2,x20
71004fbc98  bl 0x710392e1f0
71004fbc9c  cmp w0,#0xc
71004fbca0  b.ne 0x71004fbcdc
71004fbca4  adrp x8,0x710593d000
71004fbca8  ldr x0,[x8, #0x2b0]
71004fbcac  cbz x0,0x71004fbcdc
71004fbcb0  stur x20,[x29, #-0xf8]
71004fbcb4  ldr x8,[x0]
71004fbcb8  ldr x8,[x8, #0x30]
71004fbcbc  sub x1,x29,#0xf8
71004fbcc0  mov w21,#0x2
71004fbcc4  blr x8
71004fbcc8  tbz w0,#0x0,0x71004fbcdc
71004fbccc  sub x0,x29,#0xb0
71004fbcd0  mov w1,#0x10
71004fbcd4  mov x2,x20
71004fbcd8  bl 0x710392e1f0
71004fbcdc  adrp x8,0x71052a8000
71004fbce0  ldr x8,[x8, #0xa78]
71004fbce4  cbz x8,0x71004fbcfc
71004fbce8  ldur x2,[x29, #-0xb0]
71004fbcec  mov w21,#0x2
71004fbcf0  mov w1,#0x10
71004fbcf4  mov x0,x20
71004fbcf8  bl 0x71039c19e0
71004fbcfc  ldur x21,[x29, #-0xb0]
71004fbd00  orr x8,x20,#0x1
71004fbd04  str x8,[sp, #0x148]
71004fbd08  stp x28,x21,[sp, #0x150]
71004fbd0c  mov x0,x21
71004fbd10  mov x1,x27
71004fbd14  mov x2,x28
71004fbd18  bl 0x71039c00e0
71004fbd1c  strb wzr,[x21, x28, LSL ]
71004fbd20  add x8,sp,#0xf0
71004fbd24  stur x8,[x29, #-0xf0]
71004fbd28  orr w8,wzr,#0x3
71004fbd2c  stur w8,[x29, #-0xe8]
71004fbd30  orr w8,wzr,#0xc
71004fbd34  str wzr,[sp, #0x160]
71004fbd38  stur xzr,[x29, #-0xe0]
71004fbd3c  stur w8,[x29, #-0xf8]
71004fbd40  sub x0,x29,#0x78
71004fbd44  sub x1,x29,#0xf8
71004fbd48  bl 0x71038ce3e0
71004fbd4c  ldrb w8,[sp, #0x148]
71004fbd50  tbz w8,#0x0,0x71004fbd74
71004fbd54  adrp x8,0x71052a8000
71004fbd58  ldr x20,[sp, #0x158]
71004fbd5c  ldr x8,[x8, #0xa70]
71004fbd60  cbz x8,0x71004fbd6c
71004fbd64  mov x0,x20
71004fbd68  bl 0x71039c19b0
71004fbd6c  mov x0,x20
71004fbd70  bl 0x710392eb40
71004fbd74  ldrb w8,[sp, #0x120]
71004fbd78  tbz w8,#0x0,0x71004fbd9c
71004fbd7c  adrp x8,0x71052a8000
71004fbd80  ldr x20,[sp, #0x130]
71004fbd84  ldr x8,[x8, #0xa70]
71004fbd88  cbz x8,0x71004fbd94
71004fbd8c  mov x0,x20
71004fbd90  bl 0x71039c19b0
71004fbd94  mov x0,x20
71004fbd98  bl 0x710392eb40
71004fbd9c  ldrb w8,[sp, #0xf8]
71004fbda0  tbz w8,#0x0,0x71004fbdc4
71004fbda4  adrp x8,0x71052a8000
71004fbda8  ldr x20,[sp, #0x108]
71004fbdac  ldr x8,[x8, #0xa70]
71004fbdb0  cbz x8,0x71004fbdbc
71004fbdb4  mov x0,x20
71004fbdb8  bl 0x71039c19b0
71004fbdbc  mov x0,x20
71004fbdc0  bl 0x710392eb40
71004fbdc4  ldur x8,[x29, #-0x68]
71004fbdc8  cbz x8,0x71004fbdf0
71004fbdcc  ldr x8,[x8]
71004fbdd0  ldur x9,[x29, #-0x60]
71004fbdd4  cmp x8,x9
71004fbdd8  b.ne 0x71004fbdf0
71004fbddc  ldur x28,[x29, #-0x70]
71004fbde0  ldr x8,[sp, #0x28]
71004fbde4  str xzr,[x8]
71004fbde8  stp xzr,xzr,[x8, #0x8]
71004fbdec  b 0x71004fbdf4
71004fbdf0  mov x28,xzr
71004fbdf4  adrp x8,0x7105239000
71004fbdf8  add x8,x8,#0x490
71004fbdfc  stur x8,[x29, #-0x78]
71004fbe00  cbnz x28,0x71004fb5a8
71004fbe04  b 0x71004fbf38
71004fbe08  adrp x0,0x7106d43000
71004fbe0c  add x0,x0,#0x308
71004fbe10  bl 0x71039c06b0
71004fbe14  cbz w0,0x71004fb530
71004fbe18  adrp x1,0x7106d43000
71004fbe1c  add x1,x1,#0x260
71004fbe20  orr w8,wzr,#0x6
71004fbe24  str xzr,[x1]
71004fbe28  strb w8,[x1]
71004fbe2c  mov w8,#0x4f46
71004fbe30  movk w8,#0x56, LSL #16
71004fbe34  adrp x0,0x7103558000
71004fbe38  add x0,x0,#0x230
71004fbe3c  adrp x2,0x7104f17000
71004fbe40  add x2,x2,#0x0
71004fbe44  stur w8,[x1, #0x1]
71004fbe48  stp xzr,xzr,[x1, #0x8]
71004fbe4c  bl 0x71000001c0
71004fbe50  adrp x0,0x7106d43000
71004fbe54  add x0,x0,#0x308
71004fbe58  bl 0x71039c06c0
71004fbe5c  b 0x71004fb530
71004fbe60  adrp x0,0x7106d43000
71004fbe64  add x0,x0,#0x310
71004fbe68  bl 0x71039c06b0
71004fbe6c  ldr x9,[sp, #0x58]
71004fbe70  cbz w0,0x71004fbae4
71004fbe74  adrp x1,0x7106d43000
71004fbe78  add x1,x1,#0x278
71004fbe7c  mov w8,#0x12
71004fbe80  stp xzr,xzr,[x1]
71004fbe84  strb w8,[x1]
71004fbe88  adrp x8,0x7104348000
71004fbe8c  add x8,x8,#0xe8f
71004fbe90  ldr x8,[x8]
71004fbe94  stur x8,[x1, #0x1]
71004fbe98  mov w8,#0x45
71004fbe9c  adrp x0,0x7103558000
71004fbea0  add x0,x0,#0x230
71004fbea4  adrp x2,0x7104f17000
71004fbea8  add x2,x2,#0x0
71004fbeac  str xzr,[x1, #0x10]
71004fbeb0  sturh w8,[x1, #0x9]
71004fbeb4  bl 0x71000001c0
71004fbeb8  adrp x0,0x7106d43000
71004fbebc  add x0,x0,#0x310
71004fbec0  bl 0x71039c06c0
71004fbec4  ldr x9,[sp, #0x58]
71004fbec8  b 0x71004fbae4
71004fbecc  adrp x0,0x7106d43000
71004fbed0  add x0,x0,#0x318
71004fbed4  bl 0x71039c06b0
71004fbed8  ldr x9,[sp, #0x40]
71004fbedc  cbz w0,0x71004fbc18
71004fbee0  adrp x1,0x7106d43000
71004fbee4  add x1,x1,#0x290
71004fbee8  mov w8,#0x10
71004fbeec  stp xzr,xzr,[x1]
71004fbef0  strb w8,[x1]
71004fbef4  mov x8,#0x4146
71004fbef8  movk x8,#0x5052, LSL #16
71004fbefc  movk x8,#0x414c, LSL #32
71004fbf00  movk x8,#0x454e, LSL #48
71004fbf04  adrp x0,0x7103558000
71004fbf08  add x0,x0,#0x230
71004fbf0c  adrp x2,0x7104f17000
71004fbf10  add x2,x2,#0x0
71004fbf14  str xzr,[x1, #0x10]
71004fbf18  stur x8,[x1, #0x1]
71004fbf1c  strb wzr,[x1, #0x9]
71004fbf20  bl 0x71000001c0
71004fbf24  adrp x0,0x7106d43000
71004fbf28  add x0,x0,#0x318
71004fbf2c  bl 0x71039c06c0
71004fbf30  ldr x9,[sp, #0x40]
71004fbf34  b 0x71004fbc18
71004fbf38  ldr x26,[sp, #0x30]
71004fbf3c  ldr x25,[sp, #0x88]
71004fbf40  ldr x19,[sp, #0xa0]
71004fbf44  cbz x19,0x71004fbf70
71004fbf48  ldr x8,[sp, #0x78]
71004fbf4c  cbz x8,0x71004fbf70
71004fbf50  ldr x8,[x19]
71004fbf54  ldr x9,[sp, #0x68]
71004fbf58  cmp x8,x9
71004fbf5c  b.ne 0x71004fbf70
71004fbf60  ldr x0,[sp, #0x78]
71004fbf64  ldr x8,[x0]
71004fbf68  ldr x8,[x8, #0x8]
71004fbf6c  blr x8
71004fbf70  cbz x25,0x71004fbf9c
71004fbf74  ldr x8,[sp, #0x80]
71004fbf78  cbz x8,0x71004fbf9c
71004fbf7c  ldr x8,[x25]
71004fbf80  ldr x9,[sp, #0x60]
71004fbf84  cmp x8,x9
71004fbf88  b.ne 0x71004fbf9c
71004fbf8c  ldr x0,[sp, #0x80]
71004fbf90  ldr x8,[x0]
71004fbf94  ldr x8,[x8, #0x8]
71004fbf98  blr x8
71004fbf9c  ldr x8,[x26]
71004fbfa0  ldrb w9,[x8, #0x98]
71004fbfa4  cbz w9,0x71004fc144
71004fbfa8  ldr x0,[x8, #0x88]
71004fbfac  ldr x8,[x0]
71004fbfb0  ldr x8,[x8, #0x10]
71004fbfb4  ldr x2,[sp, #0x38]
71004fbfb8  mov x1,xzr
71004fbfbc  mov w3,wzr
71004fbfc0  blr x8
71004fbfc4  ldr x19,[x26]
71004fbfc8  ldrb w8,[x19, #0x98]
71004fbfcc  cbz w8,0x71004fc144
71004fbfd0  ldr x0,[x19, #0x88]
71004fbfd4  ldr x8,[x0]
71004fbfd8  ldr x8,[x8, #0x20]
71004fbfdc  mov x1,xzr
71004fbfe0  blr x8
71004fbfe4  cbz x0,0x71004fc144
71004fbfe8  ldr x20,[x19, #0x8]
71004fbfec  ldr x8,[x20]
71004fbff0  ldr x8,[x8, #0x38]
71004fbff4  mov x0,x20
71004fbff8  blr x8
71004fbffc  ldr x8,[x0, #0x30]
71004fc000  cbz x8,0x71004fc028
71004fc004  ldr x8,[x8]
71004fc008  ldr x9,[x0, #0x38]
71004fc00c  cmp x8,x9
71004fc010  b.ne 0x71004fc028
71004fc014  ldr x8,[x0, #0x28]
71004fc018  cbz x8,0x71004fc028
71004fc01c  ldr x23,[x8, #0x8]
71004fc020  ldr x24,[x23]
71004fc024  b 0x71004fc030
71004fc028  mov x23,xzr
71004fc02c  mov x24,xzr
71004fc030  ldr x8,[x20]
71004fc034  ldr x8,[x8, #0x38]
71004fc038  mov x0,x20
71004fc03c  blr x8
71004fc040  ldr x8,[x0, #0x70]
71004fc044  cbz x8,0x71004fc070
71004fc048  ldr x8,[x8]
71004fc04c  ldr x9,[x0, #0x78]
71004fc050  cmp x8,x9
71004fc054  b.ne 0x71004fc070
71004fc058  ldr x8,[x0, #0x68]
71004fc05c  cbz x8,0x71004fc070
71004fc060  ldr x22,[x8, #0x8]
71004fc064  ldr x21,[x22]
71004fc068  cbnz x23,0x71004fc07c
71004fc06c  b 0x71004fc104
71004fc070  mov x21,xzr
71004fc074  mov x22,xzr
71004fc078  cbz x23,0x71004fc104
71004fc07c  ldr x8,[x23]
71004fc080  cmp x8,x24
71004fc084  b.ne 0x71004fc104
71004fc088  ldr x20,[x19, #0x10]
71004fc08c  ldr x8,[x20]
71004fc090  ldr x8,[x8, #0x38]
71004fc094  mov x0,x20
71004fc098  mov w1,wzr
71004fc09c  blr x8
71004fc0a0  cbz x0,0x71004fc0b4
71004fc0a4  ldr x8,[x0]
71004fc0a8  ldr x8,[x8, #0x40]
71004fc0ac  mov w1,wzr
71004fc0b0  blr x8
71004fc0b4  ldr x8,[x0]
71004fc0b8  ldr x8,[x8, #0x30]
71004fc0bc  mov w2,#0x1
71004fc0c0  mov x1,xzr
71004fc0c4  blr x8
71004fc0c8  tbz w0,#0x0,0x71004fc144
71004fc0cc  ldr x8,[x20]
71004fc0d0  ldr x8,[x8, #0x38]
71004fc0d4  mov x0,x20
71004fc0d8  mov w1,wzr
71004fc0dc  blr x8
71004fc0e0  cbz x0,0x71004fc0f4
71004fc0e4  ldr x8,[x0]
71004fc0e8  ldr x8,[x8, #0x40]
71004fc0ec  mov w1,wzr
71004fc0f0  blr x8
71004fc0f4  ldr x8,[x0]
71004fc0f8  ldr x8,[x8, #0x18]
71004fc0fc  mov w1,#0x1
71004fc100  blr x8
71004fc104  cbz x22,0x71004fc144
71004fc108  ldr x8,[x22]
71004fc10c  cmp x8,x21
71004fc110  b.ne 0x71004fc144
71004fc114  ldr x20,[x19, #0x80]
71004fc118  ldr x8,[x20]
71004fc11c  ldr x8,[x8, #0x38]
71004fc120  mov x0,x20
71004fc124  mov x1,xzr
71004fc128  blr x8
71004fc12c  tbz w0,#0x0,0x71004fc144
71004fc130  ldr x8,[x20]
71004fc134  ldr x8,[x8, #0x20]
71004fc138  mov w1,#0x1
71004fc13c  mov x0,x20
71004fc140  blr x8
71004fc144  ldr x0,[x26]
71004fc148  fmov s0,wzr
71004fc14c  bl 0x7103674f00
71004fc150  ldr x0,[x26]
71004fc154  bl 0x7103675050
71004fc158  str s0,[x26, #0x14]
71004fc15c  ldr x19,[sp, #0xc0]
71004fc160  cbz x19,0x71004fc1a4
71004fc164  ldr x8,[sp, #0xc8]
71004fc168  cmp x8,x19
71004fc16c  b.eq 0x71004fc260
71004fc170  mov x20,x8
71004fc174  ldrb w9,[x20, #-0x18]!
71004fc178  tbz w9,#0x0,0x71004fc188
71004fc17c  ldur x0,[x8, #-0x8]
71004fc180  cbz x0,0x71004fc188
71004fc184  bl 0x710392eb40
71004fc188  cmp x19,x20
71004fc18c  mov x8,x20
71004fc190  b.ne 0x71004fc174
71004fc194  ldr x0,[sp, #0xc0]
71004fc198  str x19,[sp, #0xc8]
71004fc19c  cbz x0,0x71004fc1a4
71004fc1a0  bl 0x710392eb40
71004fc1a4  ldr x19,[sp, #0xd8]
71004fc1a8  cbz x19,0x71004fc240
71004fc1ac  ldr x21,[sp, #0xe0]
71004fc1b0  cmp x21,x19
71004fc1b4  b.ne 0x71004fc1d8
71004fc1b8  mov x0,x19
71004fc1bc  str x19,[sp, #0xe0]
71004fc1c0  cbnz x0,0x71004fc23c
71004fc1c4  b 0x71004fc240
71004fc1c8  mov x0,x22
71004fc1cc  stur x22,[x21, #-0x10]
71004fc1d0  cbnz x0,0x71004fc220
71004fc1d4  b 0x71004fc224
71004fc1d8  ldur x22,[x21, #-0x18]
71004fc1dc  sub x20,x21,#0x20
71004fc1e0  cbz x22,0x71004fc224
71004fc1e4  ldur x8,[x21, #-0x10]
71004fc1e8  cmp x8,x22
71004fc1ec  b.eq 0x71004fc1c8
71004fc1f0  mov x23,x8
71004fc1f4  ldrb w9,[x23, #-0x18]!
71004fc1f8  tbz w9,#0x0,0x71004fc208
71004fc1fc  ldur x0,[x8, #-0x8]
71004fc200  cbz x0,0x71004fc208
71004fc204  bl 0x710392eb40
71004fc208  cmp x22,x23
71004fc20c  mov x8,x23
71004fc210  b.ne 0x71004fc1f4
71004fc214  ldur x0,[x21, #-0x18]
71004fc218  stur x22,[x21, #-0x10]
71004fc21c  cbz x0,0x71004fc224
71004fc220  bl 0x710392eb40
71004fc224  cmp x20,x19
71004fc228  mov x21,x20
71004fc22c  b.ne 0x71004fc1d8
71004fc230  ldr x0,[sp, #0xd8]
71004fc234  str x19,[sp, #0xe0]
71004fc238  cbz x0,0x71004fc240
71004fc23c  bl 0x710392eb40
71004fc240  add sp,sp,#0xab0
71004fc244  ldp x29,x30,[sp, #0x50]
71004fc248  ldp x20,x19,[sp, #0x40]
71004fc24c  ldp x22,x21,[sp, #0x30]
71004fc250  ldp x24,x23,[sp, #0x20]
71004fc254  ldp x26,x25,[sp, #0x10]
71004fc258  ldp x28,x27,[sp], #0x60
71004fc25c  ret
71004fc260  mov x0,x19
71004fc264  str x19,[sp, #0xc8]
71004fc268  cbnz x0,0x71004fc1a0
71004fc26c  b 0x71004fc1a4
71004fc270  ldr x25,[sp, #0x88]
71004fc274  cbz x25,0x71004fc29c
71004fc278  ldr x8,[x25]
71004fc27c  ldr x9,[sp, #0x60]
71004fc280  cmp x8,x9
71004fc284  ldr x9,[sp, #0x80]
71004fc288  cset w8,ne
71004fc28c  cmp x9,#0x0
71004fc290  cset w9,eq
71004fc294  orr w20,w9,w8
71004fc298  b 0x71004fc2a0
71004fc29c  mov w20,#0x1
71004fc2a0  ldr x26,[sp, #0x30]
71004fc2a4  ldr x8,[sp, #0xa0]
71004fc2a8  cbz x8,0x71004fc2d0
71004fc2ac  ldr x8,[x8]
71004fc2b0  ldr x9,[sp, #0x68]
71004fc2b4  cmp x8,x9
71004fc2b8  ldr x9,[sp, #0x78]
71004fc2bc  cset w8,ne
71004fc2c0  cmp x9,#0x0
71004fc2c4  cset w9,eq
71004fc2c8  orr w19,w9,w8
71004fc2cc  b 0x71004fc2d4
71004fc2d0  mov w19,#0x1
71004fc2d4  ldr x8,[sp, #0x20]
71004fc2d8  ldr x23,[x8, #0x8]
71004fc2dc  ldr x8,[x23]
71004fc2e0  ldr x8,[x8, #0x38]
71004fc2e4  mov x0,x23
71004fc2e8  blr x8
71004fc2ec  mov x1,x0
71004fc2f0  cbz x25,0x71004fc350
71004fc2f4  ldr x8,[x25]
71004fc2f8  ldr x9,[sp, #0x60]
71004fc2fc  cmp x8,x9
71004fc300  ldr x8,[sp, #0x80]
71004fc304  csel x25,xzr,x25,eq
71004fc308  csel x9,xzr,x9,eq
71004fc30c  str x9,[sp, #0x60]
71004fc310  csel x22,x8,xzr,eq
71004fc314  csel x8,xzr,x8,eq
71004fc318  str x8,[sp, #0x80]
71004fc31c  ldr x28,[sp, #0xa0]
71004fc320  cbz x28,0x71004fc35c
71004fc324  ldr x8,[x28]
71004fc328  ldr x9,[sp, #0x68]
71004fc32c  cmp x8,x9
71004fc330  ldr x8,[sp, #0x78]
71004fc334  csel x9,xzr,x9,eq
71004fc338  str x9,[sp, #0x68]
71004fc33c  csel x21,x8,xzr,eq
71004fc340  csel x28,xzr,x28,eq
71004fc344  csel x8,xzr,x8,eq
71004fc348  str x8,[sp, #0x78]
71004fc34c  b 0x71004fc360
71004fc350  mov x22,xzr
71004fc354  ldr x28,[sp, #0xa0]
71004fc358  cbnz x28,0x71004fc324
71004fc35c  mov x21,xzr
71004fc360  add x0,sp,#0xf0
71004fc364  bl 0x7103682470
71004fc368  cbz x22,0x71004fc378
71004fc36c  ldr x8,[x22, #0x8]
71004fc370  ldr x9,[x8]
71004fc374  b 0x71004fc380
71004fc378  mov x8,xzr
71004fc37c  mov x9,xzr
71004fc380  ldp x0,x10,[sp, #0x150]
71004fc384  stp x22,x8,[sp, #0x150]
71004fc388  ldr x8,[sp, #0x160]
71004fc38c  str x9,[sp, #0x160]
71004fc390  cbz x10,0x71004fc3b0
71004fc394  cbz x0,0x71004fc3b0
71004fc398  ldr x9,[x10]
71004fc39c  cmp x9,x8
71004fc3a0  b.ne 0x71004fc3b0
71004fc3a4  ldr x8,[x0]
71004fc3a8  ldr x8,[x8, #0x8]
71004fc3ac  blr x8
71004fc3b0  ldp x0,x8,[sp, #0x170]
71004fc3b4  ldr x9,[sp, #0x180]
71004fc3b8  stp xzr,xzr,[sp, #0x170]
71004fc3bc  str xzr,[sp, #0x180]
71004fc3c0  cbz x8,0x71004fc3e0
71004fc3c4  cbz x0,0x71004fc3e0
71004fc3c8  ldr x8,[x8]
71004fc3cc  cmp x8,x9
71004fc3d0  b.ne 0x71004fc3e0
71004fc3d4  ldr x8,[x0]
71004fc3d8  ldr x8,[x8, #0x8]
71004fc3dc  blr x8
71004fc3e0  cbz x21,0x71004fc3f0
71004fc3e4  ldr x8,[x21, #0x8]
71004fc3e8  ldr x9,[x8]
71004fc3ec  b 0x71004fc3f8
71004fc3f0  mov x8,xzr
71004fc3f4  mov x9,xzr
71004fc3f8  ldp x0,x10,[sp, #0x190]
71004fc3fc  stp x21,x8,[sp, #0x190]
71004fc400  ldr x8,[sp, #0x1a0]
71004fc404  str x9,[sp, #0x1a0]
71004fc408  cbz x10,0x71004fc428
71004fc40c  cbz x0,0x71004fc428
71004fc410  ldr x9,[x10]
71004fc414  cmp x9,x8
71004fc418  b.ne 0x71004fc428
71004fc41c  ldr x8,[x0]
71004fc420  ldr x8,[x8, #0x8]
71004fc424  blr x8
71004fc428  tbz w20,#0x0,0x71004fc748
71004fc42c  tbz w19,#0x0,0x71004fce3c
71004fc430  add x0,sp,#0xf0
71004fc434  bl 0x7103682c00
71004fc438  ldr x8,[x23]
71004fc43c  ldr x8,[x8, #0x38]
71004fc440  mov x0,x23
71004fc444  blr x8
71004fc448  ldr x8,[x0, #0x30]
71004fc44c  cbz x8,0x71004fc478
71004fc450  ldr x8,[x8]
71004fc454  ldr x9,[x0, #0x38]
71004fc458  cmp x8,x9
71004fc45c  b.ne 0x71004fc478
71004fc460  ldr x8,[x0, #0x28]
71004fc464  cbz x8,0x71004fc478
71004fc468  ldr x8,[x8, #0x8]
71004fc46c  cbz x8,0x71004fc478
71004fc470  mov x0,x23
71004fc474  bl 0x71036afdc0
71004fc478  ldr x8,[x23]
71004fc47c  ldr x8,[x8, #0x38]
71004fc480  mov x0,x23
71004fc484  blr x8
71004fc488  ldr x8,[x0, #0x30]
71004fc48c  mov x19,x28
71004fc490  cbz x8,0x71004fc5dc
71004fc494  ldr x8,[x8]
71004fc498  ldr x9,[x0, #0x38]
71004fc49c  cmp x8,x9
71004fc4a0  b.ne 0x71004fc5dc
71004fc4a4  ldr x8,[x0, #0x28]
71004fc4a8  cbz x8,0x71004fc5dc
71004fc4ac  ldr x8,[x8, #0x8]
71004fc4b0  cbz x8,0x71004fc5dc
71004fc4b4  ldr x8,[sp, #0x20]
71004fc4b8  ldr x20,[x8, #0x10]
71004fc4bc  mov w1,#0x68
71004fc4c0  mov w0,#0x10
71004fc4c4  bl 0x710392e290
71004fc4c8  mov x21,x0
71004fc4cc  cbnz x0,0x71004fc518
71004fc4d0  adrp x8,0x7105332000
71004fc4d4  ldr x0,[x8, #0xf00]
71004fc4d8  cbz x0,0x71004fc514
71004fc4dc  mov w8,#0x68
71004fc4e0  stur wzr,[x29, #-0xf8]
71004fc4e4  sub x1,x29,#0xf8
71004fc4e8  str x8,[sp, #0xf0]
71004fc4ec  ldr x8,[x0]
71004fc4f0  ldr x8,[x8, #0x30]
71004fc4f4  add x2,sp,#0xf0
71004fc4f8  blr x8
71004fc4fc  tbz w0,#0x0,0x71004fc514
71004fc500  mov w1,#0x68
71004fc504  mov w0,#0x10
71004fc508  bl 0x710392e290
71004fc50c  mov x21,x0
71004fc510  cbnz x0,0x71004fc518
71004fc514  mov x21,xzr
71004fc518  mov x0,x21
71004fc51c  mov x1,x20
71004fc520  mov w2,wzr
71004fc524  mov w3,wzr
71004fc528  bl 0x71036dd480
71004fc52c  ldr x0,[x20, #0x10]
71004fc530  str x21,[x20, #0x10]
71004fc534  cbz x0,0x71004fc544
71004fc538  ldr x8,[x0]
71004fc53c  ldr x8,[x8, #0x8]
71004fc540  blr x8
71004fc544  mov w1,#0x68
71004fc548  mov w0,#0x10
71004fc54c  bl 0x710392e290
71004fc550  mov x21,x0
71004fc554  cbnz x0,0x71004fc5a0
71004fc558  adrp x8,0x7105332000
71004fc55c  ldr x0,[x8, #0xf00]
71004fc560  cbz x0,0x71004fc59c
71004fc564  mov w8,#0x68
71004fc568  stur wzr,[x29, #-0xf8]
71004fc56c  sub x1,x29,#0xf8
71004fc570  str x8,[sp, #0xf0]
71004fc574  ldr x8,[x0]
71004fc578  ldr x8,[x8, #0x30]
71004fc57c  add x2,sp,#0xf0
71004fc580  blr x8
71004fc584  tbz w0,#0x0,0x71004fc59c
71004fc588  mov w1,#0x68
71004fc58c  mov w0,#0x10
71004fc590  bl 0x710392e290
71004fc594  mov x21,x0
71004fc598  cbnz x0,0x71004fc5a0
71004fc59c  mov x21,xzr
71004fc5a0  mov w2,#0x1
71004fc5a4  mov x0,x21
71004fc5a8  mov x1,x20
71004fc5ac  mov w3,wzr
71004fc5b0  mov w19,#0x1
71004fc5b4  bl 0x71036dd480
71004fc5b8  ldr x0,[x20, #0x18]
71004fc5bc  str x21,[x20, #0x18]
71004fc5c0  cbz x0,0x71004fc5d0
71004fc5c4  ldr x8,[x0]
71004fc5c8  ldr x8,[x8, #0x8]
71004fc5cc  blr x8
71004fc5d0  strb w19,[x20, #0x24]
71004fc5d4  mov x19,x28
71004fc5d8  str wzr,[x20, #0x20]
71004fc5dc  ldr x8,[x23]
71004fc5e0  ldr x8,[x8, #0x38]
71004fc5e4  mov x0,x23
71004fc5e8  blr x8
71004fc5ec  ldr x8,[x0, #0x70]
71004fc5f0  cbz x8,0x71004fc884
71004fc5f4  ldr x8,[x8]
71004fc5f8  ldr x9,[x0, #0x78]
71004fc5fc  cmp x8,x9
71004fc600  b.ne 0x71004fc884
71004fc604  ldr x8,[x0, #0x68]
71004fc608  cbz x8,0x71004fc884
71004fc60c  ldr x8,[x8, #0x8]
71004fc610  cbz x8,0x71004fc884
71004fc614  ldr x8,[sp, #0x20]
71004fc618  ldr x19,[x8, #0x80]
71004fc61c  ldr x8,[x19, #0x8]
71004fc620  ldr x0,[x8]
71004fc624  ldr x8,[x0]
71004fc628  ldr x8,[x8, #0x38]
71004fc62c  mov x20,#0xe995
71004fc630  movk x20,#0x5bd1, LSL #16
71004fc634  movk x20,#0xa793, LSL #32
71004fc638  movk x20,#0xc6a4, LSL #48
71004fc63c  blr x8
71004fc640  mov w9,#0x14
71004fc644  stp xzr,xzr,[sp, #0xf0]
71004fc648  strb w9,[sp, #0xf0]
71004fc64c  adrp x9,0x7104328000
71004fc650  add x9,x9,#0x95b
71004fc654  ldr x9,[x9]
71004fc658  mov w10,#0x6172
71004fc65c  mov x8,xzr
71004fc660  sturh w10,[sp, #0xf9]
71004fc664  mov w12,#0x73
71004fc668  add x0,x0,#0x80
71004fc66c  stur x9,[sp, #0xf1]
71004fc670  mov w9,#0x2
71004fc674  mov w10,#0x6b64
71004fc678  movk w10,#0xe654, LSL #16
71004fc67c  add x11,sp,#0xf0
71004fc680  str xzr,[sp, #0x100]
71004fc684  strb wzr,[sp, #0xfb]
71004fc688  b 0x71004fc694
71004fc68c  ldrb w12,[x11, x9, LSL ]
71004fc690  add x9,x9,#0x1
71004fc694  and x12,x12,#0xff
71004fc698  mul x12,x12,x20
71004fc69c  eor x12,x12,x12, LSR #0x2f
71004fc6a0  mul x12,x12,x20
71004fc6a4  eor x8,x12,x8
71004fc6a8  mul x12,x8,x20
71004fc6ac  add x8,x12,x10
71004fc6b0  cmp x9,#0xb
71004fc6b4  b.ne 0x71004fc68c
71004fc6b8  mov x9,#-0x6b65
71004fc6bc  movk x9,#0x19ab, LSL #16
71004fc6c0  sub x9,x9,x12
71004fc6c4  add x8,x9,x8, LSL #0x15
71004fc6c8  mov w9,#0x109
71004fc6cc  eor x8,x8,x8, LSR #0x18
71004fc6d0  mul x8,x8,x9
71004fc6d4  mov w9,#0x15
71004fc6d8  eor x8,x8,x8, LSR #0xe
71004fc6dc  mul x8,x8,x9
71004fc6e0  eor x8,x8,x8, LSR #0x1c
71004fc6e4  add x1,x8,x8, LSL #0x1f
71004fc6e8  add x2,sp,#0xf0
71004fc6ec  bl 0x7103682860
71004fc6f0  cbz x0,0x71004fc870
71004fc6f4  ldr w8,[x0, #0x48]
71004fc6f8  eor w8,w8,w8, ASR #0x1f
71004fc6fc  cmp w8,#0x1
71004fc700  b.ne 0x71004fd21c
71004fc704  ldr x8,[x0, #0x50]
71004fc708  ldr x9,[x0, #0x38]
71004fc70c  cbz x9,0x71004fc830
71004fc710  ldr x9,[x9]
71004fc714  ldr x10,[x0, #0x40]
71004fc718  cmp x9,x10
71004fc71c  b.ne 0x71004fc830
71004fc720  ldr x9,[x0, #0x30]
71004fc724  str x9,[x19, #0x18]
71004fc728  cbz x9,0x71004fc834
71004fc72c  ldr x9,[x9, #0x8]
71004fc730  str x9,[x19, #0x20]
71004fc734  ldr x9,[x9]
71004fc738  str x9,[x19, #0x28]
71004fc73c  cbnz x8,0x71004fc844
71004fc740  add x9,x19,#0x30
71004fc744  b 0x71004fc864
71004fc748  ldr x8,[sp, #0xf0]
71004fc74c  cbz x8,0x71004fcec0
71004fc750  ldr x8,[sp, #0x158]
71004fc754  cbz x8,0x71004fcec0
71004fc758  ldr x8,[x8]
71004fc75c  ldr x9,[sp, #0x160]
71004fc760  cmp x8,x9
71004fc764  b.ne 0x71004fcec0
71004fc768  adrp x8,0x71042b2000
71004fc76c  add x8,x8,#0xa65
71004fc770  ldr x1,[sp, #0x100]
71004fc774  ldr x24,[x8]
71004fc778  orr w20,wzr,#0x18
71004fc77c  sub x8,x29,#0xf8
71004fc780  mov w26,#0x6170
71004fc784  movk w26,#0x6563, LSL #16
71004fc788  sub x0,x29,#0x78
71004fc78c  sub x2,x29,#0xf8
71004fc790  stp xzr,xzr,[x29, #-0xf8]
71004fc794  stur xzr,[x29, #-0xe8]
71004fc798  sturb w20,[x29, #-0xf8]
71004fc79c  stur x24,[x8, #0x1]
71004fc7a0  stur w26,[x8, #0x9]
71004fc7a4  sturb wzr,[x29, #-0xeb]
71004fc7a8  bl 0x71038db170
71004fc7ac  ldur x8,[x29, #-0x68]
71004fc7b0  cbz x8,0x71004fc7cc
71004fc7b4  ldr x8,[x8]
71004fc7b8  ldur x9,[x29, #-0x60]
71004fc7bc  cmp x8,x9
71004fc7c0  b.ne 0x71004fc7cc
71004fc7c4  ldr x26,[sp, #0x30]
71004fc7c8  b 0x71004fcec0
71004fc7cc  sub x8,x29,#0xf8
71004fc7d0  stp xzr,xzr,[x29, #-0x90]
71004fc7d4  ldr x1,[sp, #0x100]
71004fc7d8  stur xzr,[x29, #-0x80]
71004fc7dc  adrp x9,0x7105239000
71004fc7e0  add x9,x9,#0x630
71004fc7e4  sturb w20,[x29, #-0x90]
71004fc7e8  stur x24,[x8, #0x69]
71004fc7ec  stur w26,[x8, #0x71]
71004fc7f0  ldr x8,[sp, #0x158]
71004fc7f4  sturb wzr,[x29, #-0x83]
71004fc7f8  stp xzr,xzr,[x29, #-0xa0]
71004fc7fc  stp x9,xzr,[x29, #-0xb0]
71004fc800  cbz x8,0x71004fca10
71004fc804  ldr x8,[x8]
71004fc808  ldr x9,[sp, #0x160]
71004fc80c  cmp x8,x9
71004fc810  b.ne 0x71004fca10
71004fc814  ldr x8,[sp, #0x150]
71004fc818  stur x8,[x29, #-0xa8]
71004fc81c  cbz x8,0x71004fca08
71004fc820  ldr x8,[x8, #0x8]
71004fc824  stur x8,[x29, #-0xa0]
71004fc828  ldr x8,[x8]
71004fc82c  b 0x71004fca0c
71004fc830  str xzr,[x19, #0x18]
71004fc834  mov x9,xzr
71004fc838  str xzr,[x19, #0x20]
71004fc83c  str x9,[x19, #0x28]
71004fc840  cbz x8,0x71004fc740
71004fc844  ldr x10,[x8, #0x8]
71004fc848  add x9,x19,#0x30
71004fc84c  cbz x10,0x71004fc864
71004fc850  str x8,[x19, #0x38]
71004fc854  ldr x8,[x8, #0x8]
71004fc858  str x8,[x19, #0x40]
71004fc85c  ldr x8,[x8]
71004fc860  b 0x71004fc86c
71004fc864  mov x8,xzr
71004fc868  stp xzr,xzr,[x19, #0x38]
71004fc86c  str x8,[x9, #0x18]
71004fc870  ldr x8,[x19, #0x18]
71004fc874  mov w9,#0x1
71004fc878  strb w9,[x8, #0x114]
71004fc87c  strb w9,[x19, #0x58]
71004fc880  mov x19,x28
71004fc884  ldr x8,[sp, #0x20]
71004fc888  ldr x20,[x8, #0x18]
71004fc88c  mov w0,#0x10
71004fc890  orr w1,wzr,#0x30
71004fc894  bl 0x710392e290
71004fc898  mov x23,x0
71004fc89c  cbnz x0,0x71004fc8e8
71004fc8a0  adrp x8,0x7105332000
71004fc8a4  ldr x0,[x8, #0xf00]
71004fc8a8  cbz x0,0x71004fc8e4
71004fc8ac  orr w8,wzr,#0x30
71004fc8b0  stur wzr,[x29, #-0xf8]
71004fc8b4  sub x1,x29,#0xf8
71004fc8b8  str x8,[sp, #0xf0]
71004fc8bc  ldr x8,[x0]
71004fc8c0  ldr x8,[x8, #0x30]
71004fc8c4  add x2,sp,#0xf0
71004fc8c8  blr x8
71004fc8cc  tbz w0,#0x0,0x71004fc8e4
71004fc8d0  mov w0,#0x10
71004fc8d4  orr w1,wzr,#0x30
71004fc8d8  bl 0x710392e290
71004fc8dc  mov x23,x0
71004fc8e0  cbnz x0,0x71004fc8e8
71004fc8e4  mov x23,xzr
71004fc8e8  adrp x8,0x7105239000
71004fc8ec  add x8,x8,#0x200
71004fc8f0  mov w0,#0x10
71004fc8f4  str x8,[x23]
71004fc8f8  orr w8,wzr,#0x3f800000
71004fc8fc  mov w1,#0x20
71004fc900  stp xzr,xzr,[x23, #0x18]
71004fc904  str w8,[x23, #0x28]
71004fc908  stp xzr,xzr,[x23, #0x8]
71004fc90c  bl 0x710392e290
71004fc910  cbnz x0,0x71004fc958
71004fc914  adrp x8,0x7105332000
71004fc918  ldr x0,[x8, #0xf00]
71004fc91c  cbz x0,0x71004fc954
71004fc920  mov w8,#0x20
71004fc924  stur wzr,[x29, #-0xf8]
71004fc928  sub x1,x29,#0xf8
71004fc92c  str x8,[sp, #0xf0]
71004fc930  ldr x8,[x0]
71004fc934  ldr x8,[x8, #0x30]
71004fc938  add x2,sp,#0xf0
71004fc93c  blr x8
71004fc940  tbz w0,#0x0,0x71004fc954
71004fc944  mov w0,#0x10
71004fc948  mov w1,#0x20
71004fc94c  bl 0x710392e290
71004fc950  cbnz x0,0x71004fc958
71004fc954  mov x0,xzr
71004fc958  adrp x8,0x7105239000
71004fc95c  add x8,x8,#0x240
71004fc960  stp x8,xzr,[x0]
71004fc964  stp xzr,x23,[x0, #0x10]
71004fc968  ldr x8,[sp, #0x20]
71004fc96c  ldr x24,[x8, #0x90]
71004fc970  stp x23,x0,[x8, #0x88]
71004fc974  cbz x24,0x71004fc9bc
71004fc978  add x8,x24,#0x8
71004fc97c  ldaxr x9,[x8]
71004fc980  sub x10,x9,#0x1
71004fc984  stlxr w11,x10,[x8]
71004fc988  cbnz w11,0x71004fc97c
71004fc98c  cbnz x9,0x71004fc9a8
71004fc990  ldr x8,[x24]
71004fc994  ldr x8,[x8, #0x10]
71004fc998  mov x0,x24
71004fc99c  blr x8
71004fc9a0  mov x0,x24
71004fc9a4  bl 0x71039c2670
71004fc9a8  ldr x9,[sp, #0x20]
71004fc9ac  ldp x8,x0,[x9, #0x88]
71004fc9b0  stp x8,x0,[sp, #0xf0]
71004fc9b4  cbnz x0,0x71004fc9c0
71004fc9b8  b 0x71004fc9d4
71004fc9bc  stp x23,x0,[sp, #0xf0]
71004fc9c0  add x8,x0,#0x10
71004fc9c4  ldxr x9,[x8]
71004fc9c8  add x9,x9,#0x1
71004fc9cc  stxr w10,x9,[x8]
71004fc9d0  cbnz w10,0x71004fc9c4
71004fc9d4  ldr x8,[x20]
71004fc9d8  ldr x8,[x8, #0x10]
71004fc9dc  add x1,sp,#0xf0
71004fc9e0  mov x0,x20
71004fc9e4  blr x8
71004fc9e8  ldr x0,[sp, #0xf8]
71004fc9ec  cbz x0,0x71004fc9f4
71004fc9f0  bl 0x71039c2670
71004fc9f4  ldr x9,[sp, #0x20]
71004fc9f8  mov w8,#0x1
71004fc9fc  strb w8,[x9, #0x98]
71004fca00  cbnz x19,0x71004fbf48
71004fca04  b 0x71004fbf70
71004fca08  stur xzr,[x29, #-0xa0]
71004fca0c  stur x8,[x29, #-0x98]
71004fca10  sub x0,x29,#0xf8
71004fca14  sub x2,x29,#0x90
71004fca18  sub x3,x29,#0xb0
71004fca1c  bl 0x71038d9f10
71004fca20  ldur x8,[x29, #-0xe8]
71004fca24  cbz x8,0x71004fca58
71004fca28  ldr x8,[x8]
71004fca2c  ldur x9,[x29, #-0xe0]
71004fca30  cmp x8,x9
71004fca34  b.ne 0x71004fca58
71004fca38  ldur x20,[x29, #-0xf0]
71004fca3c  mov x27,x25
71004fca40  stur x20,[x29, #-0x70]
71004fca44  cbz x20,0x71004fca64
71004fca48  ldr x22,[x20, #0x8]
71004fca4c  stur x22,[x29, #-0x68]
71004fca50  ldr x25,[x22]
71004fca54  b 0x71004fca70
71004fca58  mov x27,x25
71004fca5c  mov x20,xzr
71004fca60  stur xzr,[x29, #-0x70]
71004fca64  mov x22,xzr
71004fca68  mov x25,xzr
71004fca6c  stur xzr,[x29, #-0x68]
71004fca70  ldurb w8,[x29, #-0x90]
71004fca74  stur x25,[x29, #-0x60]
71004fca78  tbz w8,#0x0,0x71004fca9c
71004fca7c  adrp x8,0x71052a8000
71004fca80  ldur x21,[x29, #-0x80]
71004fca84  ldr x8,[x8, #0xa70]
71004fca88  cbz x8,0x71004fca94
71004fca8c  mov x0,x21
71004fca90  bl 0x71039c19b0
71004fca94  mov x0,x21
71004fca98  bl 0x710392eb40
71004fca9c  add x8,sp,#0xf0
71004fcaa0  add x0,x8,#0xb8
71004fcaa4  orr w8,wzr,#0x18
71004fcaa8  stp xzr,xzr,[x29, #-0xf8]
71004fcaac  sturb w8,[x29, #-0xf8]
71004fcab0  sub x8,x29,#0xf8
71004fcab4  sub x1,x29,#0xf8
71004fcab8  stur xzr,[x29, #-0xe8]
71004fcabc  stur x24,[x8, #0x1]
71004fcac0  stur w26,[x8, #0x9]
71004fcac4  sturb wzr,[x29, #-0xeb]
71004fcac8  bl 0x7103676c70
71004fcacc  ldurb w8,[x29, #-0xf8]
71004fcad0  tbz w8,#0x0,0x71004fcaf4
71004fcad4  adrp x8,0x71052a8000
71004fcad8  ldur x21,[x29, #-0xe8]
71004fcadc  ldr x8,[x8, #0xa70]
71004fcae0  cbz x8,0x71004fcaec
71004fcae4  mov x0,x21
71004fcae8  bl 0x71039c19b0
71004fcaec  mov x0,x21
71004fcaf0  bl 0x710392eb40
71004fcaf4  ldr x21,[x20, #0x190]
71004fcaf8  mov w8,#0x2
71004fcafc  add x24,x20,#0x188
71004fcb00  str w8,[x20, #0x70]
71004fcb04  cbz x21,0x71004fcb28
71004fcb08  ldr x0,[x24]
71004fcb0c  mov x26,x0
71004fcb10  ldr x8,[x26], #0x20
71004fcb14  ldr x8,[x8]
71004fcb18  sub x21,x21,#0x1
71004fcb1c  blr x8
71004fcb20  mov x0,x26
71004fcb24  cbnz x21,0x71004fcb10
71004fcb28  ldr x8,[x20, #0x198]
71004fcb2c  cmp x8,#0x1
71004fcb30  str xzr,[x20, #0x190]
71004fcb34  b.hi 0x71004fcbbc
71004fcb38  sub x0,x29,#0xb0
71004fcb3c  mov w1,#0x10
71004fcb40  mov w2,#0x40
71004fcb44  bl 0x710392e1f0
71004fcb48  cmp w0,#0xc
71004fcb4c  b.ne 0x71004fcb88
71004fcb50  adrp x8,0x710593d000
71004fcb54  ldr x0,[x8, #0x2b0]
71004fcb58  cbz x0,0x71004fcb88
71004fcb5c  mov w8,#0x40
71004fcb60  stur x8,[x29, #-0xf8]
71004fcb64  ldr x8,[x0]
71004fcb68  ldr x8,[x8, #0x30]
71004fcb6c  sub x1,x29,#0xf8
71004fcb70  blr x8
71004fcb74  tbz w0,#0x0,0x71004fcb88
71004fcb78  sub x0,x29,#0xb0
71004fcb7c  mov w1,#0x10
71004fcb80  mov w2,#0x40
71004fcb84  bl 0x710392e1f0
71004fcb88  adrp x8,0x71052a8000
71004fcb8c  ldr x8,[x8, #0xa78]
71004fcb90  cbz x8,0x71004fcba4
71004fcb94  ldur x2,[x29, #-0xb0]
71004fcb98  mov w0,#0x40
71004fcb9c  mov w1,#0x10
71004fcba0  bl 0x71039c19e0
71004fcba4  ldp x8,x9,[x20, #0x188]
71004fcba8  ldur x1,[x29, #-0xb0]
71004fcbac  mov w2,#0x2
71004fcbb0  mov x0,x24
71004fcbb4  add x3,x8,x9, LSL #0x5
71004fcbb8  bl 0x71038d87d0
71004fcbbc  cbz x22,0x71004fcbe0
71004fcbc0  ldr x8,[x22]
71004fcbc4  cmp x8,x25
71004fcbc8  b.ne 0x71004fcbe0
71004fcbcc  str x20,[sp, #0x7c8]
71004fcbd0  ldr x8,[x20, #0x8]
71004fcbd4  str x8,[sp, #0x7d0]
71004fcbd8  ldr x8,[x8]
71004fcbdc  b 0x71004fcbec
71004fcbe0  mov x8,xzr
71004fcbe4  str xzr,[sp, #0x7c8]
71004fcbe8  str xzr,[sp, #0x7d0]
71004fcbec  adrp x1,0x710436a000
71004fcbf0  add x1,x1,#0xe33
71004fcbf4  sub x0,x29,#0xf8
71004fcbf8  mov w2,wzr
71004fcbfc  str x8,[sp, #0x7d8]
71004fcc00  bl 0x71039c0290
71004fcc04  sub x0,x29,#0xf8
71004fcc08  stp xzr,xzr,[x29, #-0xa8]
71004fcc0c  stur xzr,[x29, #-0xb0]
71004fcc10  bl 0x71039c0070
71004fcc14  cmn x0,#0x10
71004fcc18  b.cs 0x71004fd230
71004fcc1c  sub x8,x29,#0xb0
71004fcc20  mov x25,x0
71004fcc24  cmp x0,#0x17
71004fcc28  orr x24,x8,#0x1
71004fcc2c  b.cs 0x71004fcc44
71004fcc30  lsl w8,w25,#0x1
71004fcc34  mov x21,x24
71004fcc38  sturb w8,[x29, #-0xb0]
71004fcc3c  cbnz x25,0x71004fccc4
71004fcc40  b 0x71004fccd4
71004fcc44  add x8,x25,#0x10
71004fcc48  and x26,x8,#-0x10
71004fcc4c  sub x0,x29,#0xb8
71004fcc50  mov w1,#0x10
71004fcc54  mov x2,x26
71004fcc58  bl 0x710392e1f0
71004fcc5c  cmp w0,#0xc
71004fcc60  b.ne 0x71004fcc98
71004fcc64  adrp x8,0x710593d000
71004fcc68  ldr x0,[x8, #0x2b0]
71004fcc6c  cbz x0,0x71004fcc98
71004fcc70  stur x26,[x29, #-0x90]
71004fcc74  ldr x8,[x0]
71004fcc78  ldr x8,[x8, #0x30]
71004fcc7c  sub x1,x29,#0x90
71004fcc80  blr x8
71004fcc84  tbz w0,#0x0,0x71004fcc98
71004fcc88  sub x0,x29,#0xb8
71004fcc8c  mov w1,#0x10
71004fcc90  mov x2,x26
71004fcc94  bl 0x710392e1f0
71004fcc98  adrp x8,0x71052a8000
71004fcc9c  ldr x8,[x8, #0xa78]
71004fcca0  cbz x8,0x71004fccb4
71004fcca4  ldur x2,[x29, #-0xb8]
71004fcca8  mov w1,#0x10
71004fccac  mov x0,x26
71004fccb0  bl 0x71039c19e0
71004fccb4  ldur x21,[x29, #-0xb8]
71004fccb8  orr x8,x26,#0x1
71004fccbc  stur x8,[x29, #-0xb0]
71004fccc0  stp x25,x21,[x29, #-0xa8]
71004fccc4  sub x1,x29,#0xf8
71004fccc8  mov x0,x21
71004fcccc  mov x2,x25
71004fccd0  bl 0x71039c00e0
71004fccd4  add x0,sp,#0xf0
71004fccd8  sub x2,x29,#0xb0
71004fccdc  mov x1,x20
71004fcce0  strb wzr,[x21, x25, LSL ]
71004fcce4  bl 0x7103683440
71004fcce8  ldurb w8,[x29, #-0xb0]
71004fccec  str x0,[sp, #0x7e0]
71004fccf0  tbz w8,#0x0,0x71004fcd14
71004fccf4  adrp x8,0x71052a8000
71004fccf8  ldur x21,[x29, #-0xa0]
71004fccfc  ldr x8,[x8, #0xa70]
71004fcd00  cbz x8,0x71004fcd0c
71004fcd04  mov x0,x21
71004fcd08  bl 0x71039c19b0
71004fcd0c  mov x0,x21
71004fcd10  bl 0x710392eb40
71004fcd14  adrp x1,0x710436a000
71004fcd18  add x1,x1,#0xe33
71004fcd1c  sub x0,x29,#0xf8
71004fcd20  mov w2,#0x1
71004fcd24  bl 0x71039c0290
71004fcd28  sub x0,x29,#0xf8
71004fcd2c  stp xzr,xzr,[x29, #-0xa8]
71004fcd30  stur xzr,[x29, #-0xb0]
71004fcd34  bl 0x71039c0070
71004fcd38  cmn x0,#0x11
71004fcd3c  b.hi 0x71004fd230
71004fcd40  mov x25,x0
71004fcd44  cmp x0,#0x17
71004fcd48  b.cs 0x71004fcd60
71004fcd4c  ldr x26,[sp, #0x30]
71004fcd50  lsl w8,w25,#0x1
71004fcd54  sturb w8,[x29, #-0xb0]
71004fcd58  cbnz x25,0x71004fcde4
71004fcd5c  b 0x71004fcdf4
71004fcd60  add x8,x25,#0x10
71004fcd64  and x26,x8,#-0x10
71004fcd68  sub x0,x29,#0xb8
71004fcd6c  mov w1,#0x10
71004fcd70  mov x2,x26
71004fcd74  bl 0x710392e1f0
71004fcd78  cmp w0,#0xc
71004fcd7c  b.ne 0x71004fcdb4
71004fcd80  adrp x8,0x710593d000
71004fcd84  ldr x0,[x8, #0x2b0]
71004fcd88  cbz x0,0x71004fcdb4
71004fcd8c  stur x26,[x29, #-0x90]
71004fcd90  ldr x8,[x0]
71004fcd94  ldr x8,[x8, #0x30]
71004fcd98  sub x1,x29,#0x90
71004fcd9c  blr x8
71004fcda0  tbz w0,#0x0,0x71004fcdb4
71004fcda4  sub x0,x29,#0xb8
71004fcda8  mov w1,#0x10
71004fcdac  mov x2,x26
71004fcdb0  bl 0x710392e1f0
71004fcdb4  adrp x8,0x71052a8000
71004fcdb8  ldr x8,[x8, #0xa78]
71004fcdbc  cbz x8,0x71004fcdd0
71004fcdc0  ldur x2,[x29, #-0xb8]
71004fcdc4  mov w1,#0x10
71004fcdc8  mov x0,x26
71004fcdcc  bl 0x71039c19e0
71004fcdd0  ldur x24,[x29, #-0xb8]
71004fcdd4  orr x8,x26,#0x1
71004fcdd8  ldr x26,[sp, #0x30]
71004fcddc  stp x25,x24,[x29, #-0xa8]
71004fcde0  stur x8,[x29, #-0xb0]
71004fcde4  sub x1,x29,#0xf8
71004fcde8  mov x0,x24
71004fcdec  mov x2,x25
71004fcdf0  bl 0x71039c00e0
71004fcdf4  add x0,sp,#0xf0
71004fcdf8  sub x2,x29,#0xb0
71004fcdfc  mov x1,x20
71004fce00  strb wzr,[x24, x25, LSL ]
71004fce04  bl 0x7103683440
71004fce08  ldurb w8,[x29, #-0xb0]
71004fce0c  mov x25,x27
71004fce10  str x0,[sp, #0x7e8]
71004fce14  tbz w8,#0x0,0x71004fc42c
71004fce18  adrp x8,0x71052a8000
71004fce1c  ldur x20,[x29, #-0xa0]
71004fce20  ldr x8,[x8, #0xa70]
71004fce24  cbz x8,0x71004fce30
71004fce28  mov x0,x20
71004fce2c  bl 0x71039c19b0
71004fce30  mov x0,x20
71004fce34  bl 0x710392eb40
71004fce38  tbnz w19,#0x0,0x71004fc430
71004fce3c  ldr x8,[sp, #0xf0]
71004fce40  cbz x8,0x71004fcec0
71004fce44  ldr x8,[sp, #0x198]
71004fce48  cbz x8,0x71004fcec0
71004fce4c  ldr x8,[x8]
71004fce50  ldr x9,[sp, #0x1a0]
71004fce54  cmp x8,x9
71004fce58  b.ne 0x71004fcec0
71004fce5c  adrp x8,0x7104453000
71004fce60  add x8,x8,#0x326
71004fce64  ldr x1,[sp, #0x100]
71004fce68  ldr x24,[x8]
71004fce6c  mov x27,x25
71004fce70  orr w19,wzr,#0x18
71004fce74  sub x8,x29,#0xf8
71004fce78  mov w25,#0x6170
71004fce7c  movk w25,#0x6563, LSL #16
71004fce80  sub x0,x29,#0xf8
71004fce84  sub x2,x29,#0x78
71004fce88  stur xzr,[x29, #-0x68]
71004fce8c  stp xzr,xzr,[x29, #-0x78]
71004fce90  sturb w19,[x29, #-0x78]
71004fce94  stur x24,[x8, #0x81]
71004fce98  stur w25,[x8, #0x89]
71004fce9c  sturb wzr,[x29, #-0x6b]
71004fcea0  bl 0x71038db170
71004fcea4  ldur x8,[x29, #-0xe8]
71004fcea8  cbz x8,0x71004fced4
71004fceac  ldr x8,[x8]
71004fceb0  ldur x9,[x29, #-0xe0]
71004fceb4  cmp x8,x9
71004fceb8  b.ne 0x71004fced4
71004fcebc  mov x25,x27
71004fcec0  add x0,sp,#0xf0
71004fcec4  bl 0x7103682c00
71004fcec8  mov x19,x28
71004fcecc  cbnz x19,0x71004fbf48
71004fced0  b 0x71004fbf70
71004fced4  sub x8,x29,#0xf8
71004fced8  stp xzr,xzr,[x29, #-0x90]
71004fcedc  ldr x1,[sp, #0x100]
71004fcee0  stur xzr,[x29, #-0x80]
71004fcee4  adrp x9,0x7105239000
71004fcee8  add x9,x9,#0x630
71004fceec  sturb w19,[x29, #-0x90]
71004fcef0  stur x24,[x8, #0x69]
71004fcef4  stur w25,[x8, #0x71]
71004fcef8  ldr x8,[sp, #0x198]
71004fcefc  sturb wzr,[x29, #-0x83]
71004fcf00  stp xzr,xzr,[x29, #-0xa0]
71004fcf04  stp x9,xzr,[x29, #-0xb0]
71004fcf08  cbz x8,0x71004fcf40
71004fcf0c  ldr x8,[x8]
71004fcf10  ldr x9,[sp, #0x1a0]
71004fcf14  cmp x8,x9
71004fcf18  b.ne 0x71004fcf40
71004fcf1c  ldr x8,[sp, #0x190]
71004fcf20  stur x8,[x29, #-0xa8]
71004fcf24  cbz x8,0x71004fcf38
71004fcf28  ldr x8,[x8, #0x8]
71004fcf2c  stur x8,[x29, #-0xa0]
71004fcf30  ldr x8,[x8]
71004fcf34  b 0x71004fcf3c
71004fcf38  stur xzr,[x29, #-0xa0]
71004fcf3c  stur x8,[x29, #-0x98]
71004fcf40  sub x0,x29,#0x78
71004fcf44  sub x2,x29,#0x90
71004fcf48  sub x3,x29,#0xb0
71004fcf4c  bl 0x71038d9f10
71004fcf50  ldur x8,[x29, #-0x68]
71004fcf54  cbz x8,0x71004fcf84
71004fcf58  ldr x8,[x8]
71004fcf5c  ldur x9,[x29, #-0x60]
71004fcf60  cmp x8,x9
71004fcf64  b.ne 0x71004fcf84
71004fcf68  ldur x20,[x29, #-0x70]
71004fcf6c  stur x20,[x29, #-0xf0]
71004fcf70  cbz x20,0x71004fcf8c
71004fcf74  ldr x19,[x20, #0x8]
71004fcf78  stur x19,[x29, #-0xe8]
71004fcf7c  ldr x22,[x19]
71004fcf80  b 0x71004fcf98
71004fcf84  mov x20,xzr
71004fcf88  stur xzr,[x29, #-0xf0]
71004fcf8c  mov x19,xzr
71004fcf90  mov x22,xzr
71004fcf94  stur xzr,[x29, #-0xe8]
71004fcf98  ldurb w8,[x29, #-0x90]
71004fcf9c  stur x22,[x29, #-0xe0]
71004fcfa0  tbz w8,#0x0,0x71004fcfc4
71004fcfa4  adrp x8,0x71052a8000
71004fcfa8  ldur x21,[x29, #-0x80]
71004fcfac  ldr x8,[x8, #0xa70]
71004fcfb0  cbz x8,0x71004fcfbc
71004fcfb4  mov x0,x21
71004fcfb8  bl 0x71039c19b0
71004fcfbc  mov x0,x21
71004fcfc0  bl 0x710392eb40
71004fcfc4  add x8,sp,#0xf0
71004fcfc8  add x0,x8,#0xb8
71004fcfcc  orr w8,wzr,#0x18
71004fcfd0  stp xzr,xzr,[x29, #-0x78]
71004fcfd4  sturb w8,[x29, #-0x78]
71004fcfd8  sub x8,x29,#0xf8
71004fcfdc  sub x1,x29,#0x78
71004fcfe0  stur xzr,[x29, #-0x68]
71004fcfe4  stur x24,[x8, #0x81]
71004fcfe8  stur w25,[x8, #0x89]
71004fcfec  sturb wzr,[x29, #-0x6b]
71004fcff0  bl 0x7103676c70
71004fcff4  ldurb w8,[x29, #-0x78]
71004fcff8  tbz w8,#0x0,0x71004fd01c
71004fcffc  adrp x8,0x71052a8000
71004fd000  ldur x21,[x29, #-0x68]
71004fd004  ldr x8,[x8, #0xa70]
71004fd008  cbz x8,0x71004fd014
71004fd00c  mov x0,x21
71004fd010  bl 0x71039c19b0
71004fd014  mov x0,x21
71004fd018  bl 0x710392eb40
71004fd01c  ldr x21,[x20, #0x190]
71004fd020  mov w8,#0x1
71004fd024  add x24,x20,#0x188
71004fd028  str w8,[x20, #0x70]
71004fd02c  cbz x21,0x71004fd050
71004fd030  ldr x0,[x24]
71004fd034  mov x25,x0
71004fd038  ldr x8,[x25], #0x20
71004fd03c  ldr x8,[x8]
71004fd040  sub x21,x21,#0x1
71004fd044  blr x8
71004fd048  mov x0,x25
71004fd04c  cbnz x21,0x71004fd038
71004fd050  ldr x8,[x20, #0x198]
71004fd054  mov x25,x27
71004fd058  str xzr,[x20, #0x190]
71004fd05c  cbnz x8,0x71004fd0e4
71004fd060  sub x0,x29,#0xb0
71004fd064  mov w1,#0x10
71004fd068  mov w2,#0x20
71004fd06c  bl 0x710392e1f0
71004fd070  cmp w0,#0xc
71004fd074  b.ne 0x71004fd0b0
71004fd078  adrp x8,0x710593d000
71004fd07c  ldr x0,[x8, #0x2b0]
71004fd080  cbz x0,0x71004fd0b0
71004fd084  mov w8,#0x20
71004fd088  stur x8,[x29, #-0x78]
71004fd08c  ldr x8,[x0]
71004fd090  ldr x8,[x8, #0x30]
71004fd094  sub x1,x29,#0x78
71004fd098  blr x8
71004fd09c  tbz w0,#0x0,0x71004fd0b0
71004fd0a0  sub x0,x29,#0xb0
71004fd0a4  mov w1,#0x10
71004fd0a8  mov w2,#0x20
71004fd0ac  bl 0x710392e1f0
71004fd0b0  adrp x8,0x71052a8000
71004fd0b4  ldr x8,[x8, #0xa78]
71004fd0b8  cbz x8,0x71004fd0cc
71004fd0bc  ldur x2,[x29, #-0xb0]
71004fd0c0  mov w0,#0x20
71004fd0c4  mov w1,#0x10
71004fd0c8  bl 0x71039c19e0
71004fd0cc  ldp x8,x9,[x20, #0x188]
71004fd0d0  ldur x1,[x29, #-0xb0]
71004fd0d4  mov w2,#0x1
71004fd0d8  mov x0,x24
71004fd0dc  add x3,x8,x9, LSL #0x5
71004fd0e0  bl 0x71038d87d0
71004fd0e4  cbz x19,0x71004fd108
71004fd0e8  ldr x8,[x19]
71004fd0ec  cmp x8,x22
71004fd0f0  b.ne 0x71004fd108
71004fd0f4  str x20,[sp, #0x9a8]
71004fd0f8  ldr x8,[x20, #0x8]
71004fd0fc  str x8,[sp, #0x9b0]
71004fd100  ldr x8,[x8]
71004fd104  b 0x71004fd114
71004fd108  mov x8,xzr
71004fd10c  str xzr,[sp, #0x9a8]
71004fd110  str xzr,[sp, #0x9b0]
71004fd114  str x8,[sp, #0x9b8]
71004fd118  mov w8,#0x14
71004fd11c  sub x9,x29,#0xf8
71004fd120  stp xzr,xzr,[x29, #-0x78]
71004fd124  add x0,sp,#0xf0
71004fd128  sturb w8,[x29, #-0x78]
71004fd12c  adrp x8,0x7104328000
71004fd130  add x8,x8,#0x95b
71004fd134  ldr x8,[x8]
71004fd138  stur xzr,[x29, #-0x68]
71004fd13c  sub x2,x29,#0x78
71004fd140  stur x8,[x9, #0x81]
71004fd144  mov w8,#0x6172
71004fd148  mov x1,x20
71004fd14c  sturh w8,[x9, #0x89]
71004fd150  sturb wzr,[x29, #-0x6d]
71004fd154  bl 0x7103683440
71004fd158  ldurb w8,[x29, #-0x78]
71004fd15c  str x0,[sp, #0x9c0]
71004fd160  tbz w8,#0x0,0x71004fc430
71004fd164  adrp x8,0x71052a8000
71004fd168  ldur x20,[x29, #-0x68]
71004fd16c  ldr x8,[x8, #0xa70]
71004fd170  cbz x8,0x71004fd17c
71004fd174  mov x0,x20
71004fd178  bl 0x71039c19b0
71004fd17c  mov x0,x20
71004fd180  bl 0x710392eb40
71004fd184  b 0x71004fc430
71004fd188  adrp x0,0x7105339000
71004fd18c  add x0,x0,#0xfb0
71004fd190  bl 0x71039c06b0
71004fd194  cbz w0,0x71004fb340
71004fd198  adrp x8,0x7105339000
71004fd19c  add x8,x8,#0xfb8
71004fd1a0  adrp x9,0x7105339000
71004fd1a4  add x9,x9,#0xdc8
71004fd1a8  adrp x10,0x710523a000
71004fd1ac  add x10,x10,#0xf50
71004fd1b0  adrp x0,0x7105339000
71004fd1b4  add x0,x0,#0xfb0
71004fd1b8  stp x10,x9,[x8]
71004fd1bc  bl 0x71039c06c0
71004fd1c0  b 0x71004fb340
71004fd1c4  adrp x0,0x7105339000
71004fd1c8  add x0,x0,#0xfb0
71004fd1cc  bl 0x71039c06b0
71004fd1d0  cbz w0,0x71004fb36c
71004fd1d4  adrp x8,0x7105339000
71004fd1d8  add x8,x8,#0xdc8
71004fd1dc  adrp x9,0x710523a000
71004fd1e0  add x9,x9,#0xf50
71004fd1e4  adrp x0,0x7105339000
71004fd1e8  add x0,x0,#0xfb0
71004fd1ec  stp x9,x8,[x24]
71004fd1f0  bl 0x71039c06c0
71004fd1f4  b 0x71004fb36c
71004fd1f8  mov x0,x24
71004fd1fc  bl 0x71039c1a00
71004fd200  mov w21,#0x1
71004fd204  mov x0,x9
71004fd208  bl 0x71039c1a00
71004fd20c  mov w21,#0x2
71004fd210  mov x0,x9
71004fd214  bl 0x71039c1a00
71004fd218  bl 0x71039c0c00
71004fd21c  sub w9,w8,#0x2
71004fd220  cmp w9,#0x11
71004fd224  ccmp w8,#0x0,#0x4,cs
71004fd228  b.ne 0x71004fd238
71004fd22c  bl 0x7103741710
71004fd230  sub x0,x29,#0xb0
71004fd234  bl 0x71039c1a00
71004fd238  cmp w8,#0x13
71004fd23c  bl 0x71036acd30
71004fd240  bl 0x71039c19f0
71004fd244  b 0x71004fd24c
71004fd248  bl 0x71039c19f0
71004fd24c  bfm x21,x21,#0x3e,#0x1
71004fd250  mov x19,x0
71004fd254  add x22,sp,#0xf0
71004fd258  lsl x21,x21,#0x3
71004fd25c  add x8,x22,x21
71004fd260  ldurb w9,[x8, #-0x20]
71004fd264  tbz w9,#0x0,0x71004fd288
71004fd268  ldur x20,[x8, #-0x10]
71004fd26c  adrp x8,0x71052a8000
71004fd270  ldr x8,[x8, #0xa70]
71004fd274  cbz x8,0x71004fd280
71004fd278  mov x0,x20
71004fd27c  bl 0x71039c19b0
71004fd280  mov x0,x20
71004fd284  bl 0x710392eb40
71004fd288  subs x21,x21,#0x28
71004fd28c  b.ne 0x71004fd25c
71004fd290  b 0x71004fd318
71004fd294  bl 0x71037b2bc0
71004fd298  bl 0x71037b2bc0
71004fd29c  ldrb w8,[sp, #0x148]
71004fd2a0  mov x19,x0
71004fd2a4  tbz w8,#0x0,0x71004fd2c8
71004fd2a8  adrp x8,0x71052a8000
71004fd2ac  ldr x20,[sp, #0x158]
71004fd2b0  ldr x8,[x8, #0xa70]
71004fd2b4  cbz x8,0x71004fd2c0
71004fd2b8  mov x0,x20
71004fd2bc  bl 0x71039c19b0
71004fd2c0  mov x0,x20
71004fd2c4  bl 0x710392eb40
71004fd2c8  ldrb w8,[sp, #0x120]
71004fd2cc  tbz w8,#0x0,0x71004fd2f0
71004fd2d0  adrp x8,0x71052a8000
71004fd2d4  ldr x20,[sp, #0x130]
71004fd2d8  ldr x8,[x8, #0xa70]
71004fd2dc  cbz x8,0x71004fd2e8
71004fd2e0  mov x0,x20
71004fd2e4  bl 0x71039c19b0
71004fd2e8  mov x0,x20
71004fd2ec  bl 0x710392eb40
71004fd2f0  ldrb w8,[sp, #0xf8]
71004fd2f4  tbz w8,#0x0,0x71004fd318
71004fd2f8  adrp x8,0x71052a8000
71004fd2fc  ldr x20,[sp, #0x108]
71004fd300  ldr x8,[x8, #0xa70]
71004fd304  cbz x8,0x71004fd310
71004fd308  mov x0,x20
71004fd30c  bl 0x71039c19b0
71004fd310  mov x0,x20
71004fd314  bl 0x710392eb40
71004fd318  mov x0,x19
71004fd31c  bl 0x71039c19f0
71004fd320  bl 0x71037b2bc0
