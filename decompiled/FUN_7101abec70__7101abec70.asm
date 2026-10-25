// addr:      7101abec70
// offset:    0x1abec70
// name:      FUN_7101abec70
// mangled:   
// size:      1872

7101abec70  sub sp,sp,#0xe0
7101abec74  str x23,[sp, #0xa0]
7101abec78  stp x22,x21,[sp, #0xb0]
7101abec7c  stp x20,x19,[sp, #0xc0]
7101abec80  stp x29,x30,[sp, #0xd0]
7101abec84  add x29,sp,#0xd0
7101abec88  mov x19,x0
7101abec8c  add x21,x0,#0x250
7101abec90  ldr x0,[x0, #0x250]
7101abec94  ldr x8,[x0]
7101abec98  ldr x8,[x8, #0x78]
7101abec9c  mov x20,x1
7101abeca0  blr x8
7101abeca4  ldrb w8,[x19, #0x3ac]
7101abeca8  and w9,w0,#0x1
7101abecac  cmp w9,w8
7101abecb0  b.eq 0x7101abeccc
7101abecb4  ldr x0,[x21]
7101abecb8  cmp w8,#0x0
7101abecbc  cset w1,ne
7101abecc0  ldr x8,[x0]
7101abecc4  ldr x8,[x8, #0x70]
7101abecc8  blr x8
7101abeccc  ldr x0,[x19, #0x258]
7101abecd0  ldr x8,[x0]
7101abecd4  ldr x8,[x8, #0x68]
7101abecd8  blr x8
7101abecdc  ldrb w8,[x19, #0x3ac]
7101abece0  and w9,w0,#0x1
7101abece4  cmp w9,w8
7101abece8  b.eq 0x7101abed08
7101abecec  ldr x0,[x19, #0x258]
7101abecf0  cmp w8,#0x0
7101abecf4  cset w1,ne
7101abecf8  ldr x8,[x0]
7101abecfc  ldr x8,[x8, #0x60]
7101abed00  blr x8
7101abed04  ldrb w8,[x19, #0x3ac]
7101abed08  cbz w8,0x7101abed34
7101abed0c  ldr w8,[x19, #0x20c]
7101abed10  cbz w8,0x7101abed54
7101abed14  ldrb w8,[x19, #0x220]
7101abed18  cbz w8,0x7101abeec0
7101abed1c  ldr x0,[x21]
7101abed20  ldr x8,[x0]
7101abed24  ldr x8,[x8, #0x70]
7101abed28  mov w1,wzr
7101abed2c  blr x8
7101abed30  b 0x7101abee1c
7101abed34  ldr x8,[x20, #0x8]
7101abed38  ldrb w9,[x8, #0x4aa]
7101abed3c  cbz w9,0x7101abf224
7101abed40  ldrb w8,[x8, #0x1ac]
7101abed44  tbz w8,#0x1,0x7101abf224
7101abed48  mov w8,#0x1
7101abed4c  strb w8,[x19, #0x220]
7101abed50  b 0x7101abf224
7101abed54  ldr x0,[x19, #0x248]
7101abed58  str wzr,[x19, #0x3a4]
7101abed5c  ldr x8,[x0]
7101abed60  ldr x8,[x8, #0x60]
7101abed64  mov w1,#0x1
7101abed68  blr x8
7101abed6c  ldr x0,[x19, #0x240]
7101abed70  ldr x8,[x0]
7101abed74  ldr x8,[x8, #0x60]
7101abed78  mov w1,#0x1
7101abed7c  blr x8
7101abed80  ldr x0,[x19, #0x250]
7101abed84  ldr x8,[x0]
7101abed88  ldr x8,[x8, #0x60]
7101abed8c  mov w1,#0x1
7101abed90  blr x8
7101abed94  ldr x0,[x19, #0x258]
7101abed98  ldr x8,[x0]
7101abed9c  ldr x8,[x8, #0x60]
7101abeda0  mov w1,#0x1
7101abeda4  blr x8
7101abeda8  ldr x0,[x19, #0x260]
7101abedac  ldr x8,[x0]
7101abedb0  ldr x8,[x8, #0x60]
7101abedb4  mov w1,wzr
7101abedb8  blr x8
7101abedbc  ldr x0,[x19, #0x268]
7101abedc0  ldr x8,[x0]
7101abedc4  ldr x8,[x8, #0x60]
7101abedc8  mov w1,wzr
7101abedcc  blr x8
7101abedd0  ldr x0,[x19, #0x248]
7101abedd4  ldr x8,[x0]
7101abedd8  ldr x8,[x8, #0x70]
7101abeddc  mov w1,wzr
7101abede0  blr x8
7101abede4  ldr x0,[x19, #0x240]
7101abede8  ldr x8,[x0]
7101abedec  ldr x8,[x8, #0x70]
7101abedf0  mov w1,wzr
7101abedf4  blr x8
7101abedf8  ldr x0,[x19, #0x250]
7101abedfc  ldr x8,[x0]
7101abee00  ldr x8,[x8, #0x70]
7101abee04  mov w1,#0x1
7101abee08  blr x8
7101abee0c  mov w1,#0x5
7101abee10  mov x0,x21
7101abee14  mov w2,wzr
7101abee18  bl 0x7103771a80
7101abee1c  ldr x8,[x20, #0x8]
7101abee20  ldrb w9,[x8, #0x4aa]
7101abee24  cbz w9,0x7101abf07c
7101abee28  ldrb w9,[x8, #0x198]
7101abee2c  tbnz w9,#0x1,0x7101abee7c
7101abee30  ldrb w9,[x8, #0x1a4]
7101abee34  tbz w9,#0x1,0x7101abf074
7101abee38  ldr x0,[x21]
7101abee3c  ldr x8,[x0]
7101abee40  ldr x8,[x8, #0x70]
7101abee44  mov w1,wzr
7101abee48  blr x8
7101abee4c  adrp x8,0x710532f000
7101abee50  ldr x8,[x8, #0x8d0]
7101abee54  ldr x0,[x8, #0x8]
7101abee58  ldp x8,x9,[x0, #0x40]
7101abee5c  sub x9,x9,x8
7101abee60  asr x9,x9,#0x3
7101abee64  cmp x9,#0x2
7101abee68  b.cc 0x7101abefa0
7101abee6c  ldr x21,[x8, #0x8]
7101abee70  ldrb w8,[x0, #0x191]
7101abee74  cbnz w8,0x7101abf01c
7101abee78  b 0x7101abefac
7101abee7c  ldr x0,[x21]
7101abee80  ldr x8,[x0]
7101abee84  ldr x8,[x8, #0x70]
7101abee88  mov w1,wzr
7101abee8c  blr x8
7101abee90  adrp x8,0x710532f000
7101abee94  ldr x8,[x8, #0x8d0]
7101abee98  ldr x0,[x8, #0x8]
7101abee9c  ldp x8,x9,[x0, #0x40]
7101abeea0  sub x9,x9,x8
7101abeea4  asr x9,x9,#0x3
7101abeea8  cmp x9,#0x2
7101abeeac  b.cc 0x7101abeedc
7101abeeb0  ldr x21,[x8, #0x8]
7101abeeb4  ldrb w8,[x0, #0x191]
7101abeeb8  cbnz w8,0x7101abef58
7101abeebc  b 0x7101abeee8
7101abeec0  add x1,sp,#0x8
7101abeec4  mov x0,x19
7101abeec8  strb wzr,[sp, #0x8]
7101abeecc  bl 0x7101ac7fe0
7101abeed0  ldrb w8,[sp, #0x8]
7101abeed4  cbnz w8,0x7101abf224
7101abeed8  b 0x7101abee1c
7101abeedc  mov x21,xzr
7101abeee0  ldrb w8,[x0, #0x191]
7101abeee4  cbnz w8,0x7101abef58
7101abeee8  mov w2,#0x4
7101abeeec  mov x1,x21
7101abeef0  bl 0x7103313f20
7101abeef4  tbz w0,#0x0,0x7101abef58
7101abeef8  add x0,sp,#0x58
7101abeefc  mov x1,x21
7101abef00  bl 0x71024076d0
7101abef04  ldr x8,[sp, #0x68]
7101abef08  adrp x9,0x7104f73000
7101abef0c  add x9,x9,#0xd50
7101abef10  str x9,[sp, #0x60]
7101abef14  cbz x8,0x7101abef84
7101abef18  adrp x8,0x7106dd5000
7101abef1c  ldrb w8,[x8, #0x3a8]
7101abef20  cmp w8,#0x1
7101abef24  b.ne 0x7101abef84
7101abef28  adrp x9,0x7106dd5000
7101abef2c  ldr w8,[sp, #0x70]
7101abef30  ldr w9,[x9, #0x3ac]
7101abef34  cmp w8,w9
7101abef38  b.ne 0x7101abef84
7101abef3c  ldr x8,[sp, #0x68]
7101abef40  ldr wzr,[x8, #0x38]!
7101abef44  ldaxr w9,[x8]
7101abef48  sub w9,w9,#0x1
7101abef4c  stlxr w10,w9,[x8]
7101abef50  cbnz w10,0x7101abef44
7101abef54  b 0x7101abef84
7101abef58  mov x8,#0x650000000000
7101abef5c  movk x8,#0x87, LSL #48
7101abef60  strb wzr,[sp, #0x78]
7101abef64  stp xzr,x8,[sp, #0x68]
7101abef68  mov x8,#-0x1
7101abef6c  stp x8,xzr,[sp, #0x80]
7101abef70  adrp x8,0x7104f73000
7101abef74  add x8,x8,#0xd50
7101abef78  str wzr,[sp, #0x58]
7101abef7c  str xzr,[sp, #0x90]
7101abef80  str x8,[sp, #0x60]
7101abef84  str xzr,[sp, #0x68]
7101abef88  strb wzr,[sp, #0x78]
7101abef8c  ldr w8,[x19, #0x204]
7101abef90  cmp w8,#0x13
7101abef94  b.cs 0x7101abf3bc
7101abef98  mov w9,#0x2
7101abef9c  b 0x7101abf060
7101abefa0  mov x21,xzr
7101abefa4  ldrb w8,[x0, #0x191]
7101abefa8  cbnz w8,0x7101abf01c
7101abefac  mov w2,#0x4
7101abefb0  mov x1,x21
7101abefb4  bl 0x7103313f20
7101abefb8  tbz w0,#0x0,0x7101abf01c
7101abefbc  add x0,sp,#0x18
7101abefc0  mov x1,x21
7101abefc4  bl 0x71024076d0
7101abefc8  ldr x8,[sp, #0x28]
7101abefcc  adrp x9,0x7104f73000
7101abefd0  add x9,x9,#0xd50
7101abefd4  str x9,[sp, #0x20]
7101abefd8  cbz x8,0x7101abf048
7101abefdc  adrp x8,0x7106dd5000
7101abefe0  ldrb w8,[x8, #0x3a8]
7101abefe4  cmp w8,#0x1
7101abefe8  b.ne 0x7101abf048
7101abefec  adrp x9,0x7106dd5000
7101abeff0  ldr w8,[sp, #0x30]
7101abeff4  ldr w9,[x9, #0x3ac]
7101abeff8  cmp w8,w9
7101abeffc  b.ne 0x7101abf048
7101abf000  ldr x8,[sp, #0x28]
7101abf004  ldr wzr,[x8, #0x38]!
7101abf008  ldaxr w9,[x8]
7101abf00c  sub w9,w9,#0x1
7101abf010  stlxr w10,w9,[x8]
7101abf014  cbnz w10,0x7101abf008
7101abf018  b 0x7101abf048
7101abf01c  mov x8,#0x650000000000
7101abf020  movk x8,#0x87, LSL #48
7101abf024  strb wzr,[sp, #0x38]
7101abf028  stp xzr,x8,[sp, #0x28]
7101abf02c  mov x8,#-0x1
7101abf030  stp x8,xzr,[sp, #0x40]
7101abf034  adrp x8,0x7104f73000
7101abf038  add x8,x8,#0xd50
7101abf03c  str wzr,[sp, #0x18]
7101abf040  str xzr,[sp, #0x50]
7101abf044  str x8,[sp, #0x20]
7101abf048  str xzr,[sp, #0x28]
7101abf04c  strb wzr,[sp, #0x38]
7101abf050  ldr w8,[x19, #0x204]
7101abf054  cmp w8,#0x13
7101abf058  b.cs 0x7101abf3bc
7101abf05c  orr w9,wzr,#0x3
7101abf060  add x8,x19,w8, SXTW  #0x2
7101abf064  str w9,[x8, #0x1b8]
7101abf068  ldr x8,[x20, #0x8]
7101abf06c  ldrb w9,[x8, #0x4aa]
7101abf070  cbz w9,0x7101abf07c
7101abf074  ldrb w8,[x8, #0x1b0]
7101abf078  tbnz w8,#0x1,0x7101abf23c
7101abf07c  add x20,x19,#0x230
7101abf080  adrp x1,0x71042e7000
7101abf084  add x1,x1,#0x35a
7101abf088  add x8,sp,#0x8
7101abf08c  mov x0,x20
7101abf090  bl 0x7103776640
7101abf094  mov w0,#0x10
7101abf098  mov w1,#0x8
7101abf09c  bl 0x710392e290
7101abf0a0  mov x21,x0
7101abf0a4  cbnz x0,0x7101abf0f0
7101abf0a8  adrp x8,0x7105332000
7101abf0ac  ldr x0,[x8, #0xf00]
7101abf0b0  cbz x0,0x7101abf0ec
7101abf0b4  mov w8,#0x8
7101abf0b8  stur wzr,[x29, #-0x24]
7101abf0bc  sub x1,x29,#0x24
7101abf0c0  stur x8,[x29, #-0x38]
7101abf0c4  ldr x8,[x0]
7101abf0c8  ldr x8,[x8, #0x30]
7101abf0cc  sub x2,x29,#0x38
7101abf0d0  blr x8
7101abf0d4  tbz w0,#0x0,0x7101abf0ec
7101abf0d8  mov w0,#0x10
7101abf0dc  mov w1,#0x8
7101abf0e0  bl 0x710392e290
7101abf0e4  mov x21,x0
7101abf0e8  cbnz x0,0x7101abf0f0
7101abf0ec  mov x21,xzr
7101abf0f0  str xzr,[x21]
7101abf0f4  ldr x20,[sp, #0x10]
7101abf0f8  ldr x8,[x20, #0x8]
7101abf0fc  cbz x8,0x7101abf130
7101abf100  ldr x0,[x8, #0x60]
7101abf104  cbz x0,0x7101abf130
7101abf108  ldr x8,[x8, #0x18]
7101abf10c  add x1,x8,#0xb0
7101abf110  bl 0x7103796f20
7101abf114  str x0,[x21]
7101abf118  cbz x0,0x7101abf374
7101abf11c  ldr x8,[x0]
7101abf120  ldr x8,[x8, #0x2f8]
7101abf124  blr x8
7101abf128  mov w22,w0
7101abf12c  b 0x7101abf138
7101abf130  mov w22,wzr
7101abf134  str xzr,[x21]
7101abf138  mov x0,x21
7101abf13c  bl 0x710392eb40
7101abf140  adrp x8,0x710523d000
7101abf144  add x8,x8,#0x988
7101abf148  stp x8,xzr,[sp, #0x8]
7101abf14c  cbz x20,0x7101abf170
7101abf150  ldr x0,[x20, #0x18]
7101abf154  adrp x8,0x710523d000
7101abf158  add x8,x8,#0x9a8
7101abf15c  stp x8,xzr,[x20, #0x10]
7101abf160  cbz x0,0x7101abf168
7101abf164  bl 0x710392eb40
7101abf168  mov x0,x20
7101abf16c  bl 0x710392eb40
7101abf170  tbz w22,#0x0,0x7101abf1b8
7101abf174  ldr x8,[x19, #0x238]
7101abf178  ldr x0,[x8, #0x8]
7101abf17c  cbz x0,0x7101abf1a0
7101abf180  adrp x1,0x71042d6000
7101abf184  add x1,x1,#0x3b4
7101abf188  bl 0x71037964b0
7101abf18c  cbz x0,0x7101abf1a0
7101abf190  ldr x8,[x0]
7101abf194  ldr x8,[x8, #0x138]
7101abf198  blr x8
7101abf19c  tbz w0,#0x0,0x7101abf1b8
7101abf1a0  ldrsw x8,[x19, #0x204]
7101abf1a4  cmp w8,#0x13
7101abf1a8  b.cs 0x7101abf3bc
7101abf1ac  add x8,x19,x8, LSL #0x2
7101abf1b0  orr w9,wzr,#0xf
7101abf1b4  str w9,[x8, #0x1b8]
7101abf1b8  ldr x0,[x19, #0x248]
7101abf1bc  ldr x8,[x0]
7101abf1c0  ldr x8,[x8, #0x80]
7101abf1c4  blr x8
7101abf1c8  tbz w0,#0x0,0x7101abf1f8
7101abf1cc  ldr x0,[x19, #0x250]
7101abf1d0  ldr x8,[x0]
7101abf1d4  ldr x8,[x8, #0x70]
7101abf1d8  mov w1,wzr
7101abf1dc  blr x8
7101abf1e0  ldrsw x8,[x19, #0x204]
7101abf1e4  cmp w8,#0x13
7101abf1e8  b.cs 0x7101abf3bc
7101abf1ec  add x8,x19,x8, LSL #0x2
7101abf1f0  orr w9,wzr,#0x3
7101abf1f4  b 0x7101abf220
7101abf1f8  ldr x0,[x19, #0x240]
7101abf1fc  ldr x8,[x0]
7101abf200  ldr x8,[x8, #0x80]
7101abf204  blr x8
7101abf208  tbz w0,#0x0,0x7101abf224
7101abf20c  ldrsw x8,[x19, #0x204]
7101abf210  cmp w8,#0x13
7101abf214  b.cs 0x7101abf3bc
7101abf218  add x8,x19,x8, LSL #0x2
7101abf21c  mov w9,#0x2
7101abf220  str w9,[x8, #0x1b8]
7101abf224  ldp x29,x30,[sp, #0xd0]
7101abf228  ldr x23,[sp, #0xa0]
7101abf22c  ldp x20,x19,[sp, #0xc0]
7101abf230  ldp x22,x21,[sp, #0xb0]
7101abf234  add sp,sp,#0xe0
7101abf238  ret
7101abf23c  add x20,x19,#0x230
7101abf240  adrp x1,0x71042e7000
7101abf244  add x1,x1,#0x35a
7101abf248  add x8,sp,#0x8
7101abf24c  mov x0,x20
7101abf250  bl 0x7103776640
7101abf254  mov w0,#0x10
7101abf258  mov w1,#0x8
7101abf25c  bl 0x710392e290
7101abf260  mov x22,x0
7101abf264  cbnz x0,0x7101abf2b0
7101abf268  adrp x8,0x7105332000
7101abf26c  ldr x0,[x8, #0xf00]
7101abf270  cbz x0,0x7101abf2ac
7101abf274  mov w8,#0x8
7101abf278  stur wzr,[x29, #-0x24]
7101abf27c  sub x1,x29,#0x24
7101abf280  stur x8,[x29, #-0x38]
7101abf284  ldr x8,[x0]
7101abf288  ldr x8,[x8, #0x30]
7101abf28c  sub x2,x29,#0x38
7101abf290  blr x8
7101abf294  tbz w0,#0x0,0x7101abf2ac
7101abf298  mov w0,#0x10
7101abf29c  mov w1,#0x8
7101abf2a0  bl 0x710392e290
7101abf2a4  mov x22,x0
7101abf2a8  cbnz x0,0x7101abf2b0
7101abf2ac  mov x22,xzr
7101abf2b0  str xzr,[x22]
7101abf2b4  ldr x21,[sp, #0x10]
7101abf2b8  ldr x8,[x21, #0x8]
7101abf2bc  cbz x8,0x7101abf37c
7101abf2c0  ldr x0,[x8, #0x60]
7101abf2c4  cbz x0,0x7101abf37c
7101abf2c8  ldr x8,[x8, #0x18]
7101abf2cc  add x1,x8,#0xb0
7101abf2d0  bl 0x7103796f20
7101abf2d4  str x0,[x22]
7101abf2d8  cbz x0,0x7101abf380
7101abf2dc  ldr x8,[x0]
7101abf2e0  ldr x8,[x8, #0x238]
7101abf2e4  mov w1,wzr
7101abf2e8  mov x23,x0
7101abf2ec  blr x8
7101abf2f0  ldr x8,[x23]
7101abf2f4  ldr x8,[x8, #0x228]
7101abf2f8  mov x0,x23
7101abf2fc  mov w1,wzr
7101abf300  blr x8
7101abf304  ldr x8,[x23]
7101abf308  ldr x8,[x8, #0x200]
7101abf30c  mov x0,x23
7101abf310  blr x8
7101abf314  tbz w0,#0x0,0x7101abf380
7101abf318  ldr x8,[x23]
7101abf31c  ldr x8,[x8, #0x210]
7101abf320  mov x0,x23
7101abf324  blr x8
7101abf328  tbz w0,#0x0,0x7101abf380
7101abf32c  ldr x8,[x23]
7101abf330  ldr x8,[x8, #0x238]
7101abf334  mov w1,#0x1
7101abf338  mov x0,x23
7101abf33c  blr x8
7101abf340  ldr x8,[x23]
7101abf344  ldr x8,[x8, #0x3c8]
7101abf348  mov x0,x23
7101abf34c  blr x8
7101abf350  ldr x8,[x23]
7101abf354  ldr x8,[x8, #0x10]
7101abf358  mov x0,x23
7101abf35c  blr x8
7101abf360  ldr x8,[x23]
7101abf364  ldr x8,[x8, #0x18]
7101abf368  mov x0,x23
7101abf36c  blr x8
7101abf370  b 0x7101abf380
7101abf374  mov w22,wzr
7101abf378  b 0x7101abf138
7101abf37c  str xzr,[x22]
7101abf380  mov x0,x22
7101abf384  bl 0x710392eb40
7101abf388  adrp x8,0x710523d000
7101abf38c  add x8,x8,#0x988
7101abf390  stp x8,xzr,[sp, #0x8]
7101abf394  cbz x21,0x7101abf080
7101abf398  ldr x0,[x21, #0x18]
7101abf39c  adrp x8,0x710523d000
7101abf3a0  add x8,x8,#0x9a8
7101abf3a4  stp x8,xzr,[x21, #0x10]
7101abf3a8  cbz x0,0x7101abf3b0
7101abf3ac  bl 0x710392eb40
7101abf3b0  mov x0,x21
7101abf3b4  bl 0x710392eb40
7101abf3b8  b 0x7101abf080
7101abf3bc  bl 0x71039c2650
