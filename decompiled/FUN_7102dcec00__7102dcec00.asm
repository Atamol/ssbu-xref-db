// addr:      7102dcec00
// offset:    0x2dcec00
// name:      FUN_7102dcec00
// mangled:   
// size:      11032

7102dcec00  str d8,[sp, #-0x70]!
7102dcec04  stp x28,x27,[sp, #0x10]
7102dcec08  stp x26,x25,[sp, #0x20]
7102dcec0c  stp x24,x23,[sp, #0x30]
7102dcec10  stp x22,x21,[sp, #0x40]
7102dcec14  stp x20,x19,[sp, #0x50]
7102dcec18  stp x29,x30,[sp, #0x60]
7102dcec1c  add x29,sp,#0x60
7102dcec20  sub sp,sp,#0x430
7102dcec24  ldr x9,[x0, #0x310]
7102dcec28  ldp x8,x9,[x9, #0xd0]
7102dcec2c  mov x19,x0
7102dcec30  cmp x8,x9
7102dcec34  b.eq 0x7102dcec6c
7102dcec38  mov x10,#0xa064
7102dcec3c  movk x10,#0x47bf, LSL #16
7102dcec40  movk x10,#0xa, LSL #32
7102dcec44  ldr w11,[x8, #0x8]
7102dcec48  cmp w11,#0x1
7102dcec4c  b.hi 0x7102dcec60
7102dcec50  ldr x20,[x8]
7102dcec54  ldr x11,[x20, #0x68]
7102dcec58  cmp x11,x10
7102dcec5c  b.eq 0x7102dcfd7c
7102dcec60  add x8,x8,#0x10
7102dcec64  cmp x9,x8
7102dcec68  b.ne 0x7102dcec44
7102dcec6c  ldrb w8,[x19, #0x972]
7102dcec70  cbz w8,0x7102dcece8
7102dcec74  mov w1,#0x14
7102dcec78  mov w0,#0x10
7102dcec7c  bl 0x710392e290
7102dcec80  cbnz x0,0x7102dcecc8
7102dcec84  adrp x8,0x7105332000
7102dcec88  ldr x0,[x8, #0xf00]
7102dcec8c  cbz x0,0x7102dcecc4
7102dcec90  mov w8,#0x14
7102dcec94  str wzr,[sp, #0x160]
7102dcec98  add x1,sp,#0x160
7102dcec9c  str x8,[sp, #0x2b0]
7102dceca0  ldr x8,[x0]
7102dceca4  ldr x8,[x8, #0x30]
7102dceca8  add x2,sp,#0x2b0
7102dcecac  blr x8
7102dcecb0  tbz w0,#0x0,0x7102dcecc4
7102dcecb4  mov w1,#0x14
7102dcecb8  mov w0,#0x10
7102dcecbc  bl 0x710392e290
7102dcecc0  cbnz x0,0x7102dcecc8
7102dcecc4  mov x0,xzr
7102dcecc8  stur xzr,[x0, #0xc]
7102dceccc  strb wzr,[x0, #0x8]
7102dcecd0  str xzr,[x0]
7102dcecd4  ldr x8,[x19, #0x748]
7102dcecd8  str x0,[x19, #0x748]
7102dcecdc  cbz x8,0x7102dcece8
7102dcece0  mov x0,x8
7102dcece4  bl 0x710392eb40
7102dcece8  ldrb w8,[x19, #0x975]
7102dcecec  cbz w8,0x7102dced7c
7102dcecf0  mov w1,#0xd0
7102dcecf4  mov w0,#0x10
7102dcecf8  add x20,x19,#0x7b0
7102dcecfc  bl 0x710392e290
7102dced00  mov x21,x0
7102dced04  cbnz x0,0x7102dced50
7102dced08  adrp x8,0x7105332000
7102dced0c  ldr x0,[x8, #0xf00]
7102dced10  cbz x0,0x7102dced4c
7102dced14  mov w8,#0xd0
7102dced18  str wzr,[sp, #0x160]
7102dced1c  add x1,sp,#0x160
7102dced20  str x8,[sp, #0x2b0]
7102dced24  ldr x8,[x0]
7102dced28  ldr x8,[x8, #0x30]
7102dced2c  add x2,sp,#0x2b0
7102dced30  blr x8
7102dced34  tbz w0,#0x0,0x7102dced4c
7102dced38  mov w1,#0xd0
7102dced3c  mov w0,#0x10
7102dced40  bl 0x710392e290
7102dced44  mov x21,x0
7102dced48  cbnz x0,0x7102dced50
7102dced4c  mov x21,xzr
7102dced50  mov x0,x21
7102dced54  mov x1,x19
7102dced58  mov x2,x20
7102dced5c  bl 0x7102dd8690
7102dced60  ldr x0,[x19, #0x738]
7102dced64  str x21,[x19, #0x738]
7102dced68  cbz x0,0x7102dcedc0
7102dced6c  ldr x8,[x0]
7102dced70  ldr x8,[x8, #0x8]
7102dced74  blr x8
7102dced78  b 0x7102dcedc0
7102dced7c  ldr x9,[x19, #0x310]
7102dced80  ldp x8,x9,[x9, #0xd0]
7102dced84  cmp x8,x9
7102dced88  b.eq 0x7102dcedc0
7102dced8c  mov x10,#0x68d0
7102dced90  movk x10,#0x45cb, LSL #16
7102dced94  movk x10,#0x8, LSL #32
7102dced98  ldr w11,[x8, #0x8]
7102dced9c  cmp w11,#0x1
7102dceda0  b.hi 0x7102dcedb4
7102dceda4  ldr x20,[x8]
7102dceda8  ldr x11,[x20, #0x68]
7102dcedac  cmp x11,x10
7102dcedb0  b.eq 0x7102dd0b08
7102dcedb4  add x8,x8,#0x10
7102dcedb8  cmp x9,x8
7102dcedbc  b.ne 0x7102dced98
7102dcedc0  mov w0,#0x10
7102dcedc4  orr w1,wzr,#0x1f0
7102dcedc8  bl 0x710392e290
7102dcedcc  mov x20,x0
7102dcedd0  cbnz x0,0x7102dcee1c
7102dcedd4  adrp x8,0x7105332000
7102dcedd8  ldr x0,[x8, #0xf00]
7102dceddc  cbz x0,0x7102dcee18
7102dcede0  orr w8,wzr,#0x1f0
7102dcede4  str wzr,[sp, #0x160]
7102dcede8  add x1,sp,#0x160
7102dcedec  str x8,[sp, #0x2b0]
7102dcedf0  ldr x8,[x0]
7102dcedf4  ldr x8,[x8, #0x30]
7102dcedf8  add x2,sp,#0x2b0
7102dcedfc  blr x8
7102dcee00  tbz w0,#0x0,0x7102dcee18
7102dcee04  mov w0,#0x10
7102dcee08  orr w1,wzr,#0x1f0
7102dcee0c  bl 0x710392e290
7102dcee10  mov x20,x0
7102dcee14  cbnz x0,0x7102dcee1c
7102dcee18  mov x20,xzr
7102dcee1c  mov x0,x20
7102dcee20  mov x1,x19
7102dcee24  bl 0x7102ddca30
7102dcee28  ldr x0,[x19, #0x7a0]
7102dcee2c  str x20,[x19, #0x7a0]
7102dcee30  cbz x0,0x7102dcee40
7102dcee34  ldr x8,[x0]
7102dcee38  ldr x8,[x8, #0x8]
7102dcee3c  blr x8
7102dcee40  add x8,x19,#0x7b0
7102dcee44  mov w0,#0x10
7102dcee48  orr w1,wzr,#0xf0
7102dcee4c  stur x8,[x29, #-0x58]
7102dcee50  bl 0x710392e290
7102dcee54  cbnz x0,0x7102dcee9c
7102dcee58  adrp x8,0x7105332000
7102dcee5c  ldr x0,[x8, #0xf00]
7102dcee60  cbz x0,0x7102dcee98
7102dcee64  orr w8,wzr,#0xf0
7102dcee68  str wzr,[sp, #0x160]
7102dcee6c  add x1,sp,#0x160
7102dcee70  str x8,[sp, #0x2b0]
7102dcee74  ldr x8,[x0]
7102dcee78  ldr x8,[x8, #0x30]
7102dcee7c  add x2,sp,#0x2b0
7102dcee80  blr x8
7102dcee84  tbz w0,#0x0,0x7102dcee98
7102dcee88  mov w0,#0x10
7102dcee8c  orr w1,wzr,#0xf0
7102dcee90  bl 0x710392e290
7102dcee94  cbnz x0,0x7102dcee9c
7102dcee98  mov x0,xzr
7102dcee9c  stp xzr,xzr,[x0, #0x10]
7102dceea0  ldur x8,[x29, #-0x58]
7102dceea4  str x8,[x0, #0x20]
7102dceea8  adrp x22,0x71052a8000
7102dceeac  ldr x22,[x22, #0xa88]
7102dceeb0  adrp x20,0x710513c000
7102dceeb4  add x20,x20,#0xbf0
7102dceeb8  orr x8,xzr,#0x3ffffffff
7102dceebc  stp x20,x19,[x0]
7102dceec0  ldr q0,[x22]
7102dceec4  stp q0,q0,[x0, #0x30]
7102dceec8  strb wzr,[x0, #0x90]
7102dceecc  str q0,[x0, #0x50]
7102dceed0  stp xzr,xzr,[x0, #0x70]
7102dceed4  stur xzr,[x0, #0xb4]
7102dceed8  stp xzr,xzr,[x0, #0x60]
7102dceedc  stur xzr,[x0, #0xac]
7102dceee0  stur xzr,[x0, #0xa4]
7102dceee4  stur xzr,[x0, #0x9c]
7102dceee8  stur xzr,[x0, #0x94]
7102dceeec  stp x8,xzr,[x0, #0x80]
7102dceef0  stp q0,q0,[x0, #0xc0]
7102dceef4  ldr x8,[x19, #0x750]
7102dceef8  str x0,[x19, #0x750]
7102dceefc  cbz x8,0x7102dcef10
7102dcef00  ldr x9,[x8]
7102dcef04  ldr x9,[x9, #0x8]
7102dcef08  mov x0,x8
7102dcef0c  blr x9
7102dcef10  mov w0,#0x10
7102dcef14  orr w1,wzr,#0xf0
7102dcef18  bl 0x710392e290
7102dcef1c  cbnz x0,0x7102dcef64
7102dcef20  adrp x8,0x7105332000
7102dcef24  ldr x0,[x8, #0xf00]
7102dcef28  cbz x0,0x7102dcef60
7102dcef2c  orr w8,wzr,#0xf0
7102dcef30  str wzr,[sp, #0x160]
7102dcef34  add x1,sp,#0x160
7102dcef38  str x8,[sp, #0x2b0]
7102dcef3c  ldr x8,[x0]
7102dcef40  ldr x8,[x8, #0x30]
7102dcef44  add x2,sp,#0x2b0
7102dcef48  blr x8
7102dcef4c  tbz w0,#0x0,0x7102dcef60
7102dcef50  mov w0,#0x10
7102dcef54  orr w1,wzr,#0xf0
7102dcef58  bl 0x710392e290
7102dcef5c  cbnz x0,0x7102dcef64
7102dcef60  mov x0,xzr
7102dcef64  stp x20,x19,[x0]
7102dcef68  stp xzr,xzr,[x0, #0x10]
7102dcef6c  ldur x8,[x29, #-0x58]
7102dcef70  str x8,[x0, #0x20]
7102dcef74  ldr q0,[x22]
7102dcef78  orr x8,xzr,#0x3ffffffff
7102dcef7c  stp xzr,xzr,[x0, #0x70]
7102dcef80  strb wzr,[x0, #0x90]
7102dcef84  stur xzr,[x0, #0xb4]
7102dcef88  stur xzr,[x0, #0xac]
7102dcef8c  stur xzr,[x0, #0xa4]
7102dcef90  stur xzr,[x0, #0x9c]
7102dcef94  stur xzr,[x0, #0x94]
7102dcef98  stp xzr,xzr,[x0, #0x60]
7102dcef9c  stp x8,xzr,[x0, #0x80]
7102dcefa0  str q0,[x0, #0x50]
7102dcefa4  stp q0,q0,[x0, #0x30]
7102dcefa8  stp q0,q0,[x0, #0xc0]
7102dcefac  ldr x8,[x19, #0x758]
7102dcefb0  str x0,[x19, #0x758]
7102dcefb4  cbz x8,0x7102dcefc8
7102dcefb8  ldr x9,[x8]
7102dcefbc  ldr x9,[x9, #0x8]
7102dcefc0  mov x0,x8
7102dcefc4  blr x9
7102dcefc8  mov w0,#0x10
7102dcefcc  orr w1,wzr,#0xf0
7102dcefd0  bl 0x710392e290
7102dcefd4  cbnz x0,0x7102dcf01c
7102dcefd8  adrp x8,0x7105332000
7102dcefdc  ldr x0,[x8, #0xf00]
7102dcefe0  cbz x0,0x7102dcf018
7102dcefe4  orr w8,wzr,#0xf0
7102dcefe8  str wzr,[sp, #0x160]
7102dcefec  add x1,sp,#0x160
7102dceff0  str x8,[sp, #0x2b0]
7102dceff4  ldr x8,[x0]
7102dceff8  ldr x8,[x8, #0x30]
7102dceffc  add x2,sp,#0x2b0
7102dcf000  blr x8
7102dcf004  tbz w0,#0x0,0x7102dcf018
7102dcf008  mov w0,#0x10
7102dcf00c  orr w1,wzr,#0xf0
7102dcf010  bl 0x710392e290
7102dcf014  cbnz x0,0x7102dcf01c
7102dcf018  mov x0,xzr
7102dcf01c  stp x20,x19,[x0]
7102dcf020  stp xzr,xzr,[x0, #0x10]
7102dcf024  ldur x8,[x29, #-0x58]
7102dcf028  str x8,[x0, #0x20]
7102dcf02c  ldr q0,[x22]
7102dcf030  orr x8,xzr,#0x3ffffffff
7102dcf034  stp xzr,xzr,[x0, #0x70]
7102dcf038  strb wzr,[x0, #0x90]
7102dcf03c  stur xzr,[x0, #0xb4]
7102dcf040  stur xzr,[x0, #0xac]
7102dcf044  stur xzr,[x0, #0xa4]
7102dcf048  stur xzr,[x0, #0x9c]
7102dcf04c  stur xzr,[x0, #0x94]
7102dcf050  stp xzr,xzr,[x0, #0x60]
7102dcf054  stp x8,xzr,[x0, #0x80]
7102dcf058  str q0,[x0, #0x50]
7102dcf05c  stp q0,q0,[x0, #0x30]
7102dcf060  stp q0,q0,[x0, #0xc0]
7102dcf064  ldr x8,[x19, #0x760]
7102dcf068  str x0,[x19, #0x760]
7102dcf06c  cbz x8,0x7102dcf080
7102dcf070  ldr x9,[x8]
7102dcf074  ldr x9,[x9, #0x8]
7102dcf078  mov x0,x8
7102dcf07c  blr x9
7102dcf080  ldr x0,[x19, #0x750]
7102dcf084  ldr x3,[x19, #0x9d8]
7102dcf088  fmov s0,0xc1700000
7102dcf08c  mov x1,#0xa077
7102dcf090  movk x1,#0x9623, LSL #16
7102dcf094  movk x1,#0x11, LSL #32
7102dcf098  mov w2,wzr
7102dcf09c  bl 0x7102dd7140
7102dcf0a0  ldr x0,[x19, #0x758]
7102dcf0a4  ldr x3,[x19, #0x9d8]
7102dcf0a8  fmov s0,0xc1a00000
7102dcf0ac  mov x1,#0xddcd
7102dcf0b0  movk x1,#0x6512, LSL #16
7102dcf0b4  movk x1,#0x13, LSL #32
7102dcf0b8  mov w2,#0x1
7102dcf0bc  bl 0x7102dd7140
7102dcf0c0  ldr x0,[x19, #0x760]
7102dcf0c4  ldr x3,[x19, #0x9d8]
7102dcf0c8  fmov s0,0xc1c80000
7102dcf0cc  mov x1,#0x3ca6
7102dcf0d0  movk x1,#0x392e, LSL #16
7102dcf0d4  movk x1,#0x12, LSL #32
7102dcf0d8  mov w2,#0x2
7102dcf0dc  bl 0x7102dd7140
7102dcf0e0  ldrb w8,[x19, #0x972]
7102dcf0e4  cbz w8,0x7102dcf200
7102dcf0e8  mov w0,#0x10
7102dcf0ec  orr w1,wzr,#0x30
7102dcf0f0  bl 0x710392e290
7102dcf0f4  mov x21,x0
7102dcf0f8  cbnz x0,0x7102dcf144
7102dcf0fc  adrp x8,0x7105332000
7102dcf100  ldr x0,[x8, #0xf00]
7102dcf104  cbz x0,0x7102dcf140
7102dcf108  orr w8,wzr,#0x30
7102dcf10c  str wzr,[sp, #0x160]
7102dcf110  add x1,sp,#0x160
7102dcf114  str x8,[sp, #0x2b0]
7102dcf118  ldr x8,[x0]
7102dcf11c  ldr x8,[x8, #0x30]
7102dcf120  add x2,sp,#0x2b0
7102dcf124  blr x8
7102dcf128  tbz w0,#0x0,0x7102dcf140
7102dcf12c  mov w0,#0x10
7102dcf130  orr w1,wzr,#0x30
7102dcf134  bl 0x710392e290
7102dcf138  mov x21,x0
7102dcf13c  cbnz x0,0x7102dcf144
7102dcf140  mov x21,xzr
7102dcf144  ldur x2,[x29, #-0x58]
7102dcf148  mov x0,x21
7102dcf14c  mov x1,x19
7102dcf150  bl 0x7102dda610
7102dcf154  ldr x0,[x19, #0x768]
7102dcf158  str x21,[x19, #0x768]
7102dcf15c  cbz x0,0x7102dcf16c
7102dcf160  ldr x8,[x0]
7102dcf164  ldr x8,[x8, #0x8]
7102dcf168  blr x8
7102dcf16c  mov w0,#0x10
7102dcf170  orr w1,wzr,#0x38
7102dcf174  bl 0x710392e290
7102dcf178  cbnz x0,0x7102dcf1c0
7102dcf17c  adrp x8,0x7105332000
7102dcf180  ldr x0,[x8, #0xf00]
7102dcf184  cbz x0,0x7102dcf1bc
7102dcf188  orr w8,wzr,#0x38
7102dcf18c  str wzr,[sp, #0x160]
7102dcf190  add x1,sp,#0x160
7102dcf194  str x8,[sp, #0x2b0]
7102dcf198  ldr x8,[x0]
7102dcf19c  ldr x8,[x8, #0x30]
7102dcf1a0  add x2,sp,#0x2b0
7102dcf1a4  blr x8
7102dcf1a8  tbz w0,#0x0,0x7102dcf1bc
7102dcf1ac  mov w0,#0x10
7102dcf1b0  orr w1,wzr,#0x38
7102dcf1b4  bl 0x710392e290
7102dcf1b8  cbnz x0,0x7102dcf1c0
7102dcf1bc  mov x0,xzr
7102dcf1c0  adrp x8,0x710513c000
7102dcf1c4  add x8,x8,#0xcd8
7102dcf1c8  strb wzr,[x0, #0x18]
7102dcf1cc  stp x8,x19,[x0]
7102dcf1d0  mov w8,#0x1
7102dcf1d4  str x8,[x0, #0x10]
7102dcf1d8  str xzr,[x0, #0x20]
7102dcf1dc  stp xzr,xzr,[x0, #0x28]
7102dcf1e0  ldr x8,[x19, #0x7a8]
7102dcf1e4  str x0,[x19, #0x7a8]
7102dcf1e8  cbz x8,0x7102dcf288
7102dcf1ec  ldr x9,[x8]
7102dcf1f0  ldr x9,[x9, #0x8]
7102dcf1f4  mov x0,x8
7102dcf1f8  blr x9
7102dcf1fc  b 0x7102dcf288
7102dcf200  ldr x9,[x19, #0x310]
7102dcf204  ldp x8,x9,[x9, #0xd0]
7102dcf208  cmp x8,x9
7102dcf20c  b.eq 0x7102dcf244
7102dcf210  mov x10,#0xa770
7102dcf214  movk x10,#0xb7bf, LSL #16
7102dcf218  movk x10,#0x9, LSL #32
7102dcf21c  ldr w11,[x8, #0x8]
7102dcf220  cmp w11,#0x1
7102dcf224  b.hi 0x7102dcf238
7102dcf228  ldr x20,[x8]
7102dcf22c  ldr x11,[x20, #0x68]
7102dcf230  cmp x11,x10
7102dcf234  b.eq 0x7102dd0b60
7102dcf238  add x8,x8,#0x10
7102dcf23c  cmp x9,x8
7102dcf240  b.ne 0x7102dcf21c
7102dcf244  ldr x9,[x19, #0x310]
7102dcf248  ldp x8,x9,[x9, #0xd0]
7102dcf24c  cmp x8,x9
7102dcf250  b.eq 0x7102dcf288
7102dcf254  mov x10,#0x42c7
7102dcf258  movk x10,#0xf4ac, LSL #16
7102dcf25c  movk x10,#0x8, LSL #32
7102dcf260  ldr w11,[x8, #0x8]
7102dcf264  cmp w11,#0x1
7102dcf268  b.hi 0x7102dcf27c
7102dcf26c  ldr x20,[x8]
7102dcf270  ldr x11,[x20, #0x68]
7102dcf274  cmp x11,x10
7102dcf278  b.eq 0x7102dd0bb8
7102dcf27c  add x8,x8,#0x10
7102dcf280  cmp x9,x8
7102dcf284  b.ne 0x7102dcf260
7102dcf288  ldr x8,[x19, #0x318]
7102dcf28c  ldr x0,[x8, #0x10]
7102dcf290  adrp x1,0x710426e000
7102dcf294  add x1,x1,#0x3ca
7102dcf298  bl 0x71025f7350
7102dcf29c  ldr x0,[x19, #0x318]
7102dcf2a0  adrp x1,0x7104359000
7102dcf2a4  add x1,x1,#0x726
7102dcf2a8  mov w2,#0x1
7102dcf2ac  bl 0x7102633a10
7102dcf2b0  ldr x0,[x19, #0x318]
7102dcf2b4  adrp x1,0x71042e5000
7102dcf2b8  add x1,x1,#0x4f0
7102dcf2bc  mov w2,#0x1
7102dcf2c0  bl 0x7102633b90
7102dcf2c4  ldrb w8,[x19, #0x973]
7102dcf2c8  cbz w8,0x7102dcf464
7102dcf2cc  mov w1,#0x3a0
7102dcf2d0  mov w0,#0x10
7102dcf2d4  bl 0x710392e290
7102dcf2d8  mov x21,x0
7102dcf2dc  cbnz x0,0x7102dcf328
7102dcf2e0  adrp x8,0x7105332000
7102dcf2e4  ldr x0,[x8, #0xf00]
7102dcf2e8  cbz x0,0x7102dcf324
7102dcf2ec  mov w8,#0x3a0
7102dcf2f0  str wzr,[sp, #0x160]
7102dcf2f4  add x1,sp,#0x160
7102dcf2f8  str x8,[sp, #0x2b0]
7102dcf2fc  ldr x8,[x0]
7102dcf300  ldr x8,[x8, #0x30]
7102dcf304  add x2,sp,#0x2b0
7102dcf308  blr x8
7102dcf30c  tbz w0,#0x0,0x7102dcf324
7102dcf310  mov w1,#0x3a0
7102dcf314  mov w0,#0x10
7102dcf318  bl 0x710392e290
7102dcf31c  mov x21,x0
7102dcf320  cbnz x0,0x7102dcf328
7102dcf324  mov x21,xzr
7102dcf328  adrp x8,0x7104468000
7102dcf32c  ldr q0,[x8, #0xca0]
7102dcf330  adrp x8,0x710446a000
7102dcf334  ldr q1,[x8, #0x360]
7102dcf338  ldur x9,[x29, #-0x58]
7102dcf33c  adrp x8,0x710513c000
7102dcf340  add x8,x8,#0xa68
7102dcf344  stp x8,x19,[x21]
7102dcf348  adrp x8,0x7104465000
7102dcf34c  stp xzr,x9,[x21, #0x10]
7102dcf350  stp q1,q0,[sp, #0x80]
7102dcf354  add x0,x21,#0x80
7102dcf358  stp q0,q1,[x21, #0x40]
7102dcf35c  ldr q1,[x8, #0x6b0]
7102dcf360  adrp x8,0x710446a000
7102dcf364  ldr q0,[x8, #0x350]
7102dcf368  mov w2,#0x250
7102dcf36c  mov w1,wzr
7102dcf370  str xzr,[x21, #0x20]
7102dcf374  str q1,[sp, #0x70]
7102dcf378  stp q1,q0,[x21, #0x60]
7102dcf37c  bl 0x71039c02a0
7102dcf380  mov w8,#0xffffffff
7102dcf384  mov x24,#-0x1
7102dcf388  strh wzr,[x21, #0x2f0]
7102dcf38c  strb wzr,[x21, #0x2f2]
7102dcf390  str x8,[x21, #0x2d0]
7102dcf394  adrp x9,0x7104468000
7102dcf398  str x24,[x21, #0x2e8]
7102dcf39c  ldr q1,[x9, #0xac0]
7102dcf3a0  mov w9,#0x1f3b
7102dcf3a4  movk w9,#0x434e, LSL #16
7102dcf3a8  str x24,[x21, #0x2e0]
7102dcf3ac  add x10,x21,#0x344
7102dcf3b0  str x24,[x21, #0x2d8]
7102dcf3b4  ldr q0,[x22]
7102dcf3b8  add x0,sp,#0x2b0
7102dcf3bc  str w9,[x21, #0x330]
7102dcf3c0  add x9,x21,#0x334
7102dcf3c4  mov w3,#0x1
7102dcf3c8  str q1,[x21, #0x320]
7102dcf3cc  add x20,x21,#0x388
7102dcf3d0  stp q0,q0,[x21, #0x300]
7102dcf3d4  str xzr,[x10]
7102dcf3d8  add x10,x21,#0x33c
7102dcf3dc  str xzr,[x9]
7102dcf3e0  add x9,x21,#0x364
7102dcf3e4  str xzr,[x10]
7102dcf3e8  strh wzr,[x21, #0x360]
7102dcf3ec  strh wzr,[x21, #0x36c]
7102dcf3f0  str q0,[x21, #0x350]
7102dcf3f4  str xzr,[x9]
7102dcf3f8  adrp x9,0x710532a000
7102dcf3fc  strb wzr,[x21, #0x380]
7102dcf400  str xzr,[x21, #0x378]
7102dcf404  str xzr,[x21, #0x370]
7102dcf408  strb wzr,[x21, #0x398]
7102dcf40c  str xzr,[x21, #0x390]
7102dcf410  str xzr,[x21, #0x388]
7102dcf414  str x24,[x21, #0x28]
7102dcf418  str w8,[x21, #0x30]
7102dcf41c  ldr x9,[x9, #0x9d8]
7102dcf420  ldr x8,[x19, #0x308]
7102dcf424  ldr x9,[x9]
7102dcf428  ldr x1,[x9, #0x1c0]
7102dcf42c  ldr x2,[x8, #0x8]
7102dcf430  bl 0x710315a0a0
7102dcf434  ldr x8,[sp, #0x2b0]
7102dcf438  str xzr,[sp, #0x2b0]
7102dcf43c  ldr x22,[x21, #0x388]
7102dcf440  str x8,[x21, #0x388]
7102dcf444  cbz x22,0x7102dcf4ac
7102dcf448  mov x0,x22
7102dcf44c  bl 0x71025e8370
7102dcf450  mov x0,x22
7102dcf454  bl 0x710392eb40
7102dcf458  str xzr,[sp, #0x2b0]
7102dcf45c  ldr x8,[x20]
7102dcf460  b 0x7102dcf4b0
7102dcf464  ldr x9,[x19, #0x310]
7102dcf468  ldp x8,x9,[x9, #0xd0]
7102dcf46c  cmp x8,x9
7102dcf470  b.eq 0x7102dd0af4
7102dcf474  mov x10,#0x22d2
7102dcf478  movk x10,#0x4dc0, LSL #16
7102dcf47c  movk x10,#0xa, LSL #32
7102dcf480  ldr w11,[x8, #0x8]
7102dcf484  cmp w11,#0x1
7102dcf488  b.hi 0x7102dcf49c
7102dcf48c  ldr x20,[x8]
7102dcf490  ldr x11,[x20, #0x68]
7102dcf494  cmp x11,x10
7102dcf498  b.eq 0x7102dd0c10
7102dcf49c  add x8,x8,#0x10
7102dcf4a0  cmp x9,x8
7102dcf4a4  b.ne 0x7102dcf480
7102dcf4a8  b 0x7102dd0af4
7102dcf4ac  str xzr,[sp, #0x2b0]
7102dcf4b0  ldr x8,[x8, #0x8]
7102dcf4b4  mov w23,#0x1
7102dcf4b8  str w23,[x8, #0x14]
7102dcf4bc  ldr x8,[x20]
7102dcf4c0  ldrb w9,[x8, #0x10]
7102dcf4c4  cbz w9,0x7102dcf508
7102dcf4c8  ldr x8,[x21, #0x388]
7102dcf4cc  ldr x8,[x8, #0x8]
7102dcf4d0  str w23,[x8, #0x10]
7102dcf4d4  str xzr,[sp, #0xa0]
7102dcf4d8  ldr x8,[x21, #0x8]
7102dcf4dc  ldr x9,[x8, #0x338]
7102dcf4e0  ldr x9,[x9]
7102dcf4e4  ldr x0,[x9, #0x8]
7102dcf4e8  add x20,x21,#0x2d8
7102dcf4ec  mov w9,#0xffffffff
7102dcf4f0  cbz x0,0x7102dcf54c
7102dcf4f4  add x1,sp,#0xa0
7102dcf4f8  mov w2,wzr
7102dcf4fc  bl 0x7102405040
7102dcf500  ldr x8,[x21, #0x8]
7102dcf504  b 0x7102dcf550
7102dcf508  ldr x22,[x8, #0x8]
7102dcf50c  strb w23,[x8, #0x10]
7102dcf510  ldrb w9,[x8, #0x11]
7102dcf514  ldrb w8,[x22, #0x1c]
7102dcf518  cbz w9,0x7102dcfddc
7102dcf51c  cbnz w8,0x7102dcf4c8
7102dcf520  adrp x8,0x71052b8000
7102dcf524  ldr x8,[x8, #0xf00]
7102dcf528  ldr x8,[x8]
7102dcf52c  add x0,x8,#0xa30
7102dcf530  ldr x8,[x8, #0xa30]
7102dcf534  ldr x8,[x8, #0x10]
7102dcf538  mov x1,x22
7102dcf53c  blr x8
7102dcf540  mov w8,#0x1
7102dcf544  strb w8,[x22, #0x1c]
7102dcf548  b 0x7102dcf4c8
7102dcf54c  mov w0,w9
7102dcf550  str w0,[x21, #0x2c8]
7102dcf554  stp x24,x24,[x20, #0x8]
7102dcf558  str x24,[x20]
7102dcf55c  str wzr,[x21, #0x2d4]
7102dcf560  ldr x9,[x8, #0x310]
7102dcf564  ldp x8,x9,[x9, #0xd0]
7102dcf568  cmp x8,x9
7102dcf56c  b.eq 0x7102dcf5a4
7102dcf570  mov x10,#0x22d2
7102dcf574  movk x10,#0x4dc0, LSL #16
7102dcf578  movk x10,#0xa, LSL #32
7102dcf57c  ldr w11,[x8, #0x8]
7102dcf580  cmp w11,#0x1
7102dcf584  b.hi 0x7102dcf598
7102dcf588  ldr x11,[x8]
7102dcf58c  ldr x12,[x11, #0x68]
7102dcf590  cmp x12,x10
7102dcf594  b.eq 0x7102dcf5a8
7102dcf598  add x8,x8,#0x10
7102dcf59c  cmp x9,x8
7102dcf5a0  b.ne 0x7102dcf57c
7102dcf5a4  mov x11,xzr
7102dcf5a8  ldr x8,[x21]
7102dcf5ac  str x11,[x21, #0x10]
7102dcf5b0  ldr x8,[x8, #0x88]
7102dcf5b4  mov x0,x21
7102dcf5b8  add x24,x21,#0x370
7102dcf5bc  blr x8
7102dcf5c0  mov x26,xzr
7102dcf5c4  orr w27,wzr,#0x18
7102dcf5c8  adrp x28,0x710532a000
7102dcf5cc  adrp x10,0x710455a000
7102dcf5d0  add x10,x10,#0x4b8
7102dcf5d4  str x24,[sp, #0x58]
7102dcf5d8  adrp x25,0x7105332000
7102dcf5dc  orr w13,wzr,#0xffffff
7102dcf5e0  madd x22,x26,x27,x21
7102dcf5e4  ldr x8,[x22, #0x88]!
7102dcf5e8  str x8,[x22, #0x8]
7102dcf5ec  ldr x8,[x21, #0x8]
7102dcf5f0  ldr w8,[x8, #0xb8]
7102dcf5f4  cmp w8,#0x3
7102dcf5f8  b.cs 0x7102dd16ec
7102dcf5fc  ldr x9,[x28, #0x9d0]
7102dcf600  ldr x9,[x9, x8, LSL #0x3]
7102dcf604  ldp x8,x9,[x9, #0x1c8]
7102dcf608  cmp x8,x9
7102dcf60c  b.eq 0x7102dcfe20
7102dcf610  ldr x10,[x10, x26, LSL #0x3]
7102dcf614  ldr x0,[x25, #0xf20]
7102dcf618  add x11,x22,#0x8
7102dcf61c  str x11,[sp, #0x60]
7102dcf620  and x10,x10,#0xffffffffff
7102dcf624  ldr w23,[x8]
7102dcf628  cmp w23,w13
7102dcf62c  b.eq 0x7102dcf660
7102dcf630  ldr x11,[x0, #0x78]
7102dcf634  ldr x11,[x11]
7102dcf638  ldr x12,[x11, #0x40]
7102dcf63c  ldr w12,[x12, #0x4]
7102dcf640  cmp w12,w23
7102dcf644  b.ls 0x7102dcf660
7102dcf648  ldr x11,[x11, #0x60]
7102dcf64c  add x11,x11,x23, LSL #0x5
7102dcf650  ldr x11,[x11, #0x18]
7102dcf654  cmp x11,x10
7102dcf658  b.ne 0x7102dcf66c
7102dcf65c  b 0x7102dcf67c
7102dcf660  mov x11,xzr
7102dcf664  cmp x11,x10
7102dcf668  b.eq 0x7102dcf67c
7102dcf66c  add x8,x8,#0x4
7102dcf670  cmp x9,x8
7102dcf674  b.ne 0x7102dcf624
7102dcf678  b 0x7102dcfe20
7102dcf67c  cmp w23,w13
7102dcf680  b.eq 0x7102dcfe20
7102dcf684  mov w1,w23
7102dcf688  bl 0x7103540a00
7102dcf68c  ldr x8,[x25, #0xf20]
7102dcf690  ldr w9,[x8, #0x18]
7102dcf694  cmp w9,w23
7102dcf698  b.ls 0x7102dcfe14
7102dcf69c  ldr x9,[x8, #0x8]
7102dcf6a0  add x10,x9,x23, LSL #0x3
7102dcf6a4  ldrb w10,[x10, #0x4]
7102dcf6a8  orr w12,wzr,#0xffffff
7102dcf6ac  cbz w10,0x7102dcfe08
7102dcf6b0  lsl x20,x23,#0x3
7102dcf6b4  ldr w9,[x9, x20, LSL #0x0]
7102dcf6b8  cmp w9,w12
7102dcf6bc  b.eq 0x7102dcfe08
7102dcf6c0  ldr w10,[x8, #0x1c]
7102dcf6c4  cmp w10,w9
7102dcf6c8  b.ls 0x7102dcfe08
7102dcf6cc  ldr x10,[x8, #0x10]
7102dcf6d0  madd x8,x9,x27,x10
7102dcf6d4  ldrb w11,[x8, #0xc]
7102dcf6d8  cmp w11,#0x0
7102dcf6dc  ccmp x8,#0x0,#0x4,ne
7102dcf6e0  b.eq 0x7102dcfe08
7102dcf6e4  madd x9,x9,x27,x10
7102dcf6e8  add x9,x9,#0xd
7102dcf6ec  ldarb w9,[x9]
7102dcf6f0  and w9,w9,#0xff
7102dcf6f4  cmp w9,#0x3
7102dcf6f8  b.ne 0x7102dcfe08
7102dcf6fc  ldr x8,[x8]
7102dcf700  cbz x8,0x7102dcfe08
7102dcf704  ldr x25,[x25, #0xf20]
7102dcf708  ldr x8,[x25, #0x78]
7102dcf70c  ldr x24,[x8]
7102dcf710  ldr x9,[x24, #0x40]
7102dcf714  ldr w8,[x9, #0x4]
7102dcf718  str x26,[sp, #0x48]
7102dcf71c  ldr x26,[sp, #0x60]
7102dcf720  orr w27,wzr,#0x18
7102dcf724  cmp w8,w23
7102dcf728  b.ls 0x7102dcf984
7102dcf72c  ldr x8,[x24, #0x60]
7102dcf730  lsl x10,x23,#0x5
7102dcf734  ldr x8,[x8, x10, LSL #0x0]
7102dcf738  lsr x8,x8,#0x28
7102dcf73c  cmp w8,w12
7102dcf740  b.eq 0x7102dcf984
7102dcf744  ldr w9,[x9, #0x8]
7102dcf748  cmp w9,w8
7102dcf74c  b.ls 0x7102dcf984
7102dcf750  ldp x9,x10,[x25, #0x8]
7102dcf754  mov x0,x24
7102dcf758  ldr w9,[x9, x20, LSL #0x0]
7102dcf75c  madd x9,x9,x27,x10
7102dcf760  ldr x10,[x24, #0x90]
7102dcf764  ldr w2,[x9, #0x10]
7102dcf768  ldr x9,[x24, #0x68]
7102dcf76c  add x8,x9,w8, UXTW  #0x3
7102dcf770  ldr w8,[x8, #0x4]
7102dcf774  and x8,x8,#0xffffff
7102dcf778  add x1,x10,x8, LSL #0x4
7102dcf77c  bl 0x7103541e10
7102dcf780  ldr w8,[x0, #0x4]
7102dcf784  ldr x9,[x24, #0xa0]
7102dcf788  add x8,x9,x8, LSL #0x4
7102dcf78c  ldr w8,[x8, #0x8]
7102dcf790  movi v0.2D,#0x0
7102dcf794  lsr x8,x8,#0x3
7102dcf798  str x8,[sp, #0x50]
7102dcf79c  cbz w8,0x7102dcf984
7102dcf7a0  ldr w8,[x25, #0x18]
7102dcf7a4  cmp w8,w23
7102dcf7a8  b.ls 0x7102dcf7f8
7102dcf7ac  ldr x8,[x25, #0x8]
7102dcf7b0  add x9,x8,x23, LSL #0x3
7102dcf7b4  ldrb w9,[x9, #0x4]
7102dcf7b8  cbz w9,0x7102dcf7f8
7102dcf7bc  ldr w8,[x8, x20, LSL #0x0]
7102dcf7c0  orr w9,wzr,#0xffffff
7102dcf7c4  cmp w8,w9
7102dcf7c8  b.eq 0x7102dcf7f8
7102dcf7cc  ldr w9,[x25, #0x1c]
7102dcf7d0  cmp w9,w8
7102dcf7d4  b.ls 0x7102dcf7f8
7102dcf7d8  ldr x9,[x25, #0x10]
7102dcf7dc  madd x8,x8,x27,x9
7102dcf7e0  ldrb w9,[x8, #0xc]
7102dcf7e4  mov x20,xzr
7102dcf7e8  cbz w9,0x7102dcf7fc
7102dcf7ec  cbz x8,0x7102dcf7fc
7102dcf7f0  ldr x20,[x8]
7102dcf7f4  b 0x7102dcf7fc
7102dcf7f8  mov x20,xzr
7102dcf7fc  ldr x8,[sp, #0x48]
7102dcf800  madd x8,x8,x27,x21
7102dcf804  mov x28,xzr
7102dcf808  add x25,x8,#0x98
7102dcf80c  str x25,[sp, #0x8]
7102dcf810  b 0x7102dcf820
7102dcf814  mov x8,xzr
7102dcf818  mov x26,xzr
7102dcf81c  b 0x7102dcf924
7102dcf820  mov v1.16B,v0.16B
7102dcf824  mov x8,x20
7102dcf828  ld1 {v1.S}[0],[x8], #0x4
7102dcf82c  ld1 {v1.S}[1],[x8]
7102dcf830  ldr x9,[x26]
7102dcf834  ldr x8,[x25]
7102dcf838  cmp x9,x8
7102dcf83c  b.cs 0x7102dcf854
7102dcf840  str q1,[x9]
7102dcf844  ldr x8,[x26]
7102dcf848  add x8,x8,#0x10
7102dcf84c  str x8,[x26]
7102dcf850  b 0x7102dcf970
7102dcf854  ldr x24,[x22]
7102dcf858  sub x2,x9,x24
7102dcf85c  asr x27,x2,#0x4
7102dcf860  add x9,x27,#0x1
7102dcf864  lsr x10,x9,#0x3c
7102dcf868  cbnz x10,0x7102dd1708
7102dcf86c  sub x8,x8,x24
7102dcf870  asr x10,x8,#0x4
7102dcf874  orr x11,xzr,#0x7fffffffffffffe
7102dcf878  cmp x10,x11
7102dcf87c  b.hi 0x7102dcf8a4
7102dcf880  asr x8,x8,#0x3
7102dcf884  cmp x8,x9
7102dcf888  csel x9,x9,x8,cc
7102dcf88c  cbz x9,0x7102dcf814
7102dcf890  lsr x8,x9,#0x3c
7102dcf894  str x2,[sp, #0x10]
7102dcf898  str q1,[sp, #0x30]
7102dcf89c  cbz x8,0x7102dcf8b0
7102dcf8a0  b 0x7102dd16ec
7102dcf8a4  str x2,[sp, #0x10]
7102dcf8a8  orr x9,xzr,#0xfffffffffffffff
7102dcf8ac  str q1,[sp, #0x30]
7102dcf8b0  lsl x8,x9,#0x4
7102dcf8b4  cmp x8,#0x0
7102dcf8b8  csinc x25,x8,xzr,ne
7102dcf8bc  mov w0,#0x10
7102dcf8c0  mov x1,x25
7102dcf8c4  str x9,[sp, #0x28]
7102dcf8c8  bl 0x710392e290
7102dcf8cc  mov x26,x0
7102dcf8d0  cbnz x0,0x7102dcf918
7102dcf8d4  adrp x8,0x7105332000
7102dcf8d8  ldr x0,[x8, #0xf00]
7102dcf8dc  cbz x0,0x7102dcf914
7102dcf8e0  str wzr,[sp, #0x160]
7102dcf8e4  str x25,[sp, #0x2b0]
7102dcf8e8  ldr x8,[x0]
7102dcf8ec  ldr x8,[x8, #0x30]
7102dcf8f0  add x1,sp,#0x160
7102dcf8f4  add x2,sp,#0x2b0
7102dcf8f8  blr x8
7102dcf8fc  tbz w0,#0x0,0x7102dcf914
7102dcf900  mov w0,#0x10
7102dcf904  mov x1,x25
7102dcf908  bl 0x710392e290
7102dcf90c  mov x26,x0
7102dcf910  cbnz x0,0x7102dcf918
7102dcf914  mov x26,xzr
7102dcf918  ldr q1,[sp, #0x30]
7102dcf91c  ldr x2,[sp, #0x10]
7102dcf920  ldr x8,[sp, #0x28]
7102dcf924  add x27,x26,x27, LSL #0x4
7102dcf928  add x25,x26,x8, LSL #0x4
7102dcf92c  cmp x2,#0x1
7102dcf930  str q1,[x27], #0x10
7102dcf934  b.lt 0x7102dcf944
7102dcf938  mov x0,x26
7102dcf93c  mov x1,x24
7102dcf940  bl 0x71039c00e0
7102dcf944  str x26,[x22]
7102dcf948  ldr x26,[sp, #0x60]
7102dcf94c  ldr x8,[sp, #0x8]
7102dcf950  movi v0.2D,#0x0
7102dcf954  str x27,[x26]
7102dcf958  str x25,[x8]
7102dcf95c  mov x25,x8
7102dcf960  cbz x24,0x7102dcf970
7102dcf964  mov x0,x24
7102dcf968  bl 0x710392eb40
7102dcf96c  movi v0.2D,#0x0
7102dcf970  ldr x8,[sp, #0x50]
7102dcf974  add x28,x28,#0x1
7102dcf978  add x20,x20,#0x8
7102dcf97c  cmp x28,x8
7102dcf980  b.cc 0x7102dcf820
7102dcf984  adrp x25,0x7105332000
7102dcf988  ldr x0,[x25, #0xf20]
7102dcf98c  mov w1,w23
7102dcf990  bl 0x7103540b10
7102dcf994  ldr x26,[sp, #0x48]
7102dcf998  orr w27,wzr,#0x18
7102dcf99c  madd x10,x26,x27,x21
7102dcf9a0  ldr x8,[x10, #0x1a8]
7102dcf9a4  str x8,[x10, #0x1b0]
7102dcf9a8  ldr x8,[x21, #0x8]
7102dcf9ac  ldr w8,[x8, #0xb8]
7102dcf9b0  cmp w8,#0x3
7102dcf9b4  adrp x11,0x710455a000
7102dcf9b8  add x11,x11,#0x518
7102dcf9bc  b.cs 0x7102dd16ec
7102dcf9c0  adrp x28,0x710532a000
7102dcf9c4  ldr x9,[x28, #0x9d0]
7102dcf9c8  orr w13,wzr,#0xffffff
7102dcf9cc  ldr x9,[x9, x8, LSL #0x3]
7102dcf9d0  ldp x8,x9,[x9, #0x1c8]
7102dcf9d4  cmp x8,x9
7102dcf9d8  b.eq 0x7102dcfe20
7102dcf9dc  ldr x11,[x11, x26, LSL #0x3]
7102dcf9e0  ldr x0,[x25, #0xf20]
7102dcf9e4  add x12,x10,#0x1a8
7102dcf9e8  add x10,x10,#0x1b0
7102dcf9ec  str x10,[sp, #0x50]
7102dcf9f0  and x10,x11,#0xffffffffff
7102dcf9f4  str x12,[sp, #0x60]
7102dcf9f8  ldr w23,[x8]
7102dcf9fc  cmp w23,w13
7102dcfa00  b.eq 0x7102dcfa34
7102dcfa04  ldr x11,[x0, #0x78]
7102dcfa08  ldr x11,[x11]
7102dcfa0c  ldr x12,[x11, #0x40]
7102dcfa10  ldr w12,[x12, #0x4]
7102dcfa14  cmp w12,w23
7102dcfa18  b.ls 0x7102dcfa34
7102dcfa1c  ldr x11,[x11, #0x60]
7102dcfa20  add x11,x11,x23, LSL #0x5
7102dcfa24  ldr x11,[x11, #0x18]
7102dcfa28  cmp x11,x10
7102dcfa2c  b.ne 0x7102dcfa40
7102dcfa30  b 0x7102dcfa50
7102dcfa34  mov x11,xzr
7102dcfa38  cmp x11,x10
7102dcfa3c  b.eq 0x7102dcfa50
7102dcfa40  add x8,x8,#0x4
7102dcfa44  cmp x9,x8
7102dcfa48  b.ne 0x7102dcf9f8
7102dcfa4c  b 0x7102dcfe20
7102dcfa50  cmp w23,w13
7102dcfa54  b.eq 0x7102dcfe20
7102dcfa58  mov w1,w23
7102dcfa5c  bl 0x7103540a00
7102dcfa60  ldr x8,[x25, #0xf20]
7102dcfa64  ldr w9,[x8, #0x18]
7102dcfa68  cmp w9,w23
7102dcfa6c  b.ls 0x7102dcfe14
7102dcfa70  ldr x9,[x8, #0x8]
7102dcfa74  add x10,x9,x23, LSL #0x3
7102dcfa78  ldrb w10,[x10, #0x4]
7102dcfa7c  orr w12,wzr,#0xffffff
7102dcfa80  cbz w10,0x7102dcfe08
7102dcfa84  lsl x20,x23,#0x3
7102dcfa88  ldr w9,[x9, x20, LSL #0x0]
7102dcfa8c  cmp w9,w12
7102dcfa90  b.eq 0x7102dcfe08
7102dcfa94  ldr w10,[x8, #0x1c]
7102dcfa98  cmp w10,w9
7102dcfa9c  b.ls 0x7102dcfe08
7102dcfaa0  ldr x10,[x8, #0x10]
7102dcfaa4  madd x8,x9,x27,x10
7102dcfaa8  ldrb w11,[x8, #0xc]
7102dcfaac  cmp w11,#0x0
7102dcfab0  ccmp x8,#0x0,#0x4,ne
7102dcfab4  b.eq 0x7102dcfe08
7102dcfab8  madd x9,x9,x27,x10
7102dcfabc  add x9,x9,#0xd
7102dcfac0  ldarb w9,[x9]
7102dcfac4  and w9,w9,#0xff
7102dcfac8  cmp w9,#0x3
7102dcfacc  b.ne 0x7102dcfe08
7102dcfad0  ldr x8,[x8]
7102dcfad4  cbz x8,0x7102dcfe08
7102dcfad8  ldr x22,[x25, #0xf20]
7102dcfadc  ldr x8,[x22, #0x78]
7102dcfae0  ldr x24,[x8]
7102dcfae4  ldr x9,[x24, #0x40]
7102dcfae8  ldr w8,[x9, #0x4]
7102dcfaec  cmp w8,w23
7102dcfaf0  b.ls 0x7102dcfd54
7102dcfaf4  ldr x8,[x24, #0x60]
7102dcfaf8  lsl x10,x23,#0x5
7102dcfafc  ldr x8,[x8, x10, LSL #0x0]
7102dcfb00  lsr x8,x8,#0x28
7102dcfb04  cmp w8,w12
7102dcfb08  b.eq 0x7102dcfd54
7102dcfb0c  ldr w9,[x9, #0x8]
7102dcfb10  cmp w9,w8
7102dcfb14  b.ls 0x7102dcfd54
7102dcfb18  ldp x9,x10,[x22, #0x8]
7102dcfb1c  mov x0,x24
7102dcfb20  ldr w9,[x9, x20, LSL #0x0]
7102dcfb24  madd x9,x9,x27,x10
7102dcfb28  ldr x10,[x24, #0x90]
7102dcfb2c  ldr w2,[x9, #0x10]
7102dcfb30  ldr x9,[x24, #0x68]
7102dcfb34  add x8,x9,w8, UXTW  #0x3
7102dcfb38  ldr w8,[x8, #0x4]
7102dcfb3c  and x8,x8,#0xffffff
7102dcfb40  add x1,x10,x8, LSL #0x4
7102dcfb44  bl 0x7103541e10
7102dcfb48  ldr w8,[x0, #0x4]
7102dcfb4c  ldr x9,[x24, #0xa0]
7102dcfb50  add x8,x9,x8, LSL #0x4
7102dcfb54  ldr w8,[x8, #0x8]
7102dcfb58  ldr x10,[sp, #0x50]
7102dcfb5c  movi v0.2D,#0x0
7102dcfb60  lsr x8,x8,#0x3
7102dcfb64  str x8,[sp, #0x28]
7102dcfb68  cbz w8,0x7102dcfd54
7102dcfb6c  ldr w8,[x22, #0x18]
7102dcfb70  cmp w8,w23
7102dcfb74  b.ls 0x7102dcfbc4
7102dcfb78  ldr x8,[x22, #0x8]
7102dcfb7c  add x9,x8,x23, LSL #0x3
7102dcfb80  ldrb w9,[x9, #0x4]
7102dcfb84  cbz w9,0x7102dcfbc4
7102dcfb88  ldr w8,[x8, x20, LSL #0x0]
7102dcfb8c  orr w9,wzr,#0xffffff
7102dcfb90  cmp w8,w9
7102dcfb94  b.eq 0x7102dcfbc4
7102dcfb98  ldr w9,[x22, #0x1c]
7102dcfb9c  cmp w9,w8
7102dcfba0  b.ls 0x7102dcfbc4
7102dcfba4  ldr x9,[x22, #0x10]
7102dcfba8  madd x8,x8,x27,x9
7102dcfbac  ldrb w9,[x8, #0xc]
7102dcfbb0  mov x20,xzr
7102dcfbb4  cbz w9,0x7102dcfbc8
7102dcfbb8  cbz x8,0x7102dcfbc8
7102dcfbbc  ldr x20,[x8]
7102dcfbc0  b 0x7102dcfbc8
7102dcfbc4  mov x20,xzr
7102dcfbc8  madd x8,x26,x27,x21
7102dcfbcc  mov x22,xzr
7102dcfbd0  add x8,x8,#0x1b8
7102dcfbd4  str x8,[sp, #0x30]
7102dcfbd8  b 0x7102dcfbe4
7102dcfbdc  mov x26,xzr
7102dcfbe0  b 0x7102dcfce0
7102dcfbe4  mov v1.16B,v0.16B
7102dcfbe8  mov x8,x20
7102dcfbec  ld1 {v1.S}[0],[x8], #0x4
7102dcfbf0  ld1 {v1.S}[1],[x8]
7102dcfbf4  ldr x8,[sp, #0x30]
7102dcfbf8  ldr x9,[x10]
7102dcfbfc  ldr x8,[x8]
7102dcfc00  cmp x9,x8
7102dcfc04  b.cs 0x7102dcfc1c
7102dcfc08  str q1,[x9]
7102dcfc0c  ldr x8,[x10]
7102dcfc10  add x8,x8,#0x10
7102dcfc14  str x8,[x10]
7102dcfc18  b 0x7102dcfd40
7102dcfc1c  ldr x10,[sp, #0x60]
7102dcfc20  ldr x24,[x10]
7102dcfc24  sub x25,x9,x24
7102dcfc28  asr x28,x25,#0x4
7102dcfc2c  add x9,x28,#0x1
7102dcfc30  lsr x10,x9,#0x3c
7102dcfc34  cbnz x10,0x7102dd1710
7102dcfc38  sub x8,x8,x24
7102dcfc3c  asr x10,x8,#0x4
7102dcfc40  orr x11,xzr,#0x7fffffffffffffe
7102dcfc44  cmp x10,x11
7102dcfc48  b.hi 0x7102dcfc6c
7102dcfc4c  asr x8,x8,#0x3
7102dcfc50  cmp x8,x9
7102dcfc54  csel x27,x9,x8,cc
7102dcfc58  cbz x27,0x7102dcfbdc
7102dcfc5c  lsr x8,x27,#0x3c
7102dcfc60  str q1,[sp, #0x10]
7102dcfc64  cbz x8,0x7102dcfc74
7102dcfc68  b 0x7102dd16ec
7102dcfc6c  str q1,[sp, #0x10]
7102dcfc70  orr x27,xzr,#0xfffffffffffffff
7102dcfc74  lsl x8,x27,#0x4
7102dcfc78  cmp x8,#0x0
7102dcfc7c  csinc x1,x8,xzr,ne
7102dcfc80  mov w0,#0x10
7102dcfc84  str x1,[sp, #0x8]
7102dcfc88  bl 0x710392e290
7102dcfc8c  mov x26,x0
7102dcfc90  cbnz x0,0x7102dcfcdc
7102dcfc94  adrp x8,0x7105332000
7102dcfc98  ldr x0,[x8, #0xf00]
7102dcfc9c  cbz x0,0x7102dcfcd8
7102dcfca0  ldr x8,[sp, #0x8]
7102dcfca4  str wzr,[sp, #0x160]
7102dcfca8  add x1,sp,#0x160
7102dcfcac  add x2,sp,#0x2b0
7102dcfcb0  str x8,[sp, #0x2b0]
7102dcfcb4  ldr x8,[x0]
7102dcfcb8  ldr x8,[x8, #0x30]
7102dcfcbc  blr x8
7102dcfcc0  tbz w0,#0x0,0x7102dcfcd8
7102dcfcc4  ldr x1,[sp, #0x8]
7102dcfcc8  mov w0,#0x10
7102dcfccc  bl 0x710392e290
7102dcfcd0  mov x26,x0
7102dcfcd4  cbnz x0,0x7102dcfcdc
7102dcfcd8  mov x26,xzr
7102dcfcdc  ldr q1,[sp, #0x10]
7102dcfce0  add x28,x26,x28, LSL #0x4
7102dcfce4  add x27,x26,x27, LSL #0x4
7102dcfce8  cmp x25,#0x1
7102dcfcec  str q1,[x28], #0x10
7102dcfcf0  b.lt 0x7102dcfd04
7102dcfcf4  mov x0,x26
7102dcfcf8  mov x1,x24
7102dcfcfc  mov x2,x25
7102dcfd00  bl 0x71039c00e0
7102dcfd04  ldr x8,[sp, #0x60]
7102dcfd08  str x26,[x8]
7102dcfd0c  ldr x8,[sp, #0x30]
7102dcfd10  ldp x26,x10,[sp, #0x48]
7102dcfd14  movi v0.2D,#0x0
7102dcfd18  str x28,[x10]
7102dcfd1c  str x27,[x8]
7102dcfd20  adrp x25,0x7105332000
7102dcfd24  orr w27,wzr,#0x18
7102dcfd28  adrp x28,0x710532a000
7102dcfd2c  cbz x24,0x7102dcfd40
7102dcfd30  mov x0,x24
7102dcfd34  bl 0x710392eb40
7102dcfd38  ldr x10,[sp, #0x50]
7102dcfd3c  movi v0.2D,#0x0
7102dcfd40  ldr x8,[sp, #0x28]
7102dcfd44  add x22,x22,#0x1
7102dcfd48  add x20,x20,#0x8
7102dcfd4c  cmp x22,x8
7102dcfd50  b.cc 0x7102dcfbe4
7102dcfd54  ldr x0,[x25, #0xf20]
7102dcfd58  mov w1,w23
7102dcfd5c  bl 0x7103540b10
7102dcfd60  add x26,x26,#0x1
7102dcfd64  cmp x26,#0xc
7102dcfd68  adrp x10,0x710455a000
7102dcfd6c  add x10,x10,#0x4b8
7102dcfd70  orr w13,wzr,#0xffffff
7102dcfd74  b.cc 0x7102dcf5e0
7102dcfd78  b 0x7102dcfe20
7102dcfd7c  cbz x20,0x7102dcec6c
7102dcfd80  add x0,x20,#0x108
7102dcfd84  strb wzr,[x20, #0x110]
7102dcfd88  bl 0x71025e9d50
7102dcfd8c  ldrb w8,[x20, #0x118]
7102dcfd90  orr w8,w8,#0x1
7102dcfd94  strb w8,[x20, #0x118]
7102dcfd98  ldrb w8,[x20, #0xe0]
7102dcfd9c  cbz w8,0x7102dcfdb0
7102dcfda0  ldr x8,[x20, #0xc8]
7102dcfda4  cbz x8,0x7102dcfdb0
7102dcfda8  mov w9,#0x101
7102dcfdac  strh w9,[x8, #0x30]
7102dcfdb0  ldr x8,[x20, #0xd8]
7102dcfdb4  cbz x8,0x7102dcfdc0
7102dcfdb8  mov w9,#0x1
7102dcfdbc  strb w9,[x8, #0x21]
7102dcfdc0  ldrb w8,[x20, #0xe0]
7102dcfdc4  cbz w8,0x7102dcec6c
7102dcfdc8  ldr x8,[x20, #0xb0]
7102dcfdcc  strb wzr,[x8, #0x10]
7102dcfdd0  ldrb w8,[x19, #0x972]
7102dcfdd4  cbnz w8,0x7102dcec74
7102dcfdd8  b 0x7102dcece8
7102dcfddc  cbz w8,0x7102dcf4c8
7102dcfde0  adrp x8,0x71052b8000
7102dcfde4  ldr x8,[x8, #0xf00]
7102dcfde8  ldr x8,[x8]
7102dcfdec  add x0,x8,#0xa30
7102dcfdf0  ldr x8,[x8, #0xa30]
7102dcfdf4  ldr x8,[x8, #0x18]
7102dcfdf8  mov x1,x22
7102dcfdfc  blr x8
7102dcfe00  strb wzr,[x22, #0x1c]
7102dcfe04  b 0x7102dcf4c8
7102dcfe08  orr w8,wzr,#0xffffff
7102dcfe0c  cmp w23,w8
7102dcfe10  b.eq 0x7102dcfe20
7102dcfe14  ldr x0,[x25, #0xf20]
7102dcfe18  mov w1,w23
7102dcfe1c  bl 0x7103540b10
7102dcfe20  ldr x20,[x21, #0x8]
7102dcfe24  ldr x8,[x20, #0x308]
7102dcfe28  ldr s0,[x8, #0x124]
7102dcfe2c  mov w2,#0x160
7102dcfe30  add x0,sp,#0x2b0
7102dcfe34  mov w1,wzr
7102dcfe38  str q0,[sp, #0x60]
7102dcfe3c  bl 0x71039c02a0
7102dcfe40  ldrsw x28,[x21, #0x84]
7102dcfe44  cmp w28,#0xc
7102dcfe48  b.cs 0x7102dd16ec
7102dcfe4c  orr w8,wzr,#0x18
7102dcfe50  madd x22,x28,x8,x21
7102dcfe54  movi v1.2D,#0x0
7102dcfe58  ldr x24,[x22, #0x88]!
7102dcfe5c  ldr w27,[x21, #0x80]
7102dcfe60  add w8,w27,w27, LSL #0x2
7102dcfe64  lsl w25,w8,#0x2
7102dcfe68  ldr x8,[x22, #0x8]
7102dcfe6c  sub x8,x8,x24
7102dcfe70  asr x26,x8,#0x4
7102dcfe74  cmp x26,x25
7102dcfe78  b.ls 0x7102dd16f0
7102dcfe7c  mov v0.16B,v1.16B
7102dcfe80  add x8,x24,x25, LSL #0x4
7102dcfe84  ldr q2,[sp, #0x60]
7102dcfe88  ld1 {v0.S}[0],[x8]
7102dcfe8c  add w8,w25,#0x13
7102dcfe90  cmp x26,x8
7102dcfe94  mov v0.S[0x1],v2.S[0x0]
7102dcfe98  str q0,[sp, #0x2b0]
7102dcfe9c  b.ls 0x7102dd16f0
7102dcfea0  mov v0.16B,v1.16B
7102dcfea4  add x8,x24,x8, LSL #0x4
7102dcfea8  mov w2,#0x130
7102dcfeac  ld1 {v0.S}[0],[x8]
7102dcfeb0  add x8,sp,#0x160
7102dcfeb4  add x23,x8,#0x10
7102dcfeb8  mov x0,x23
7102dcfebc  mov w1,wzr
7102dcfec0  mov v0.S[0x1],v2.S[0x0]
7102dcfec4  str q0,[sp, #0x400]
7102dcfec8  bl 0x71039c02a0
7102dcfecc  mov w9,#0x200
7102dcfed0  str w9,[sp, #0x100]
7102dcfed4  mov w9,#0x100
7102dcfed8  str w9,[sp, #0x150]
7102dcfedc  adrp x9,0x7104465000
7102dcfee0  ldr q0,[x9, #0x9c0]
7102dcfee4  mov x10,#0x9
7102dcfee8  orr w9,wzr,#0x18
7102dcfeec  movk x10,#0x9, LSL #32
7102dcfef0  add x12,sp,#0x100
7102dcfef4  stp x10,x10,[sp, #0xa8]
7102dcfef8  madd x9,x28,x9,x21
7102dcfefc  stp x10,x10,[sp, #0xb8]
7102dcff00  stp x10,x10,[sp, #0xc8]
7102dcff04  mov w11,#0x9
7102dcff08  mov x8,xzr
7102dcff0c  add x0,x9,#0x1a8
7102dcff10  str w11,[sp, #0xf8]
7102dcff14  stp x10,x10,[sp, #0xd8]
7102dcff18  add x9,x9,#0x1b0
7102dcff1c  adrp x13,0x710455a000
7102dcff20  add x13,x13,#0x46c
7102dcff24  str q0,[sp, #0x160]
7102dcff28  ldr q0,[sp, #0x90]
7102dcff2c  stp x10,x10,[sp, #0xe8]
7102dcff30  orr x10,x12,#0x4
7102dcff34  add x12,sp,#0x2b0
7102dcff38  add x11,x12,#0x10
7102dcff3c  mov w12,#0x13
7102dcff40  mul w12,w27,w12
7102dcff44  str q0,[sp, #0x2a0]
7102dcff48  add w14,w25,w8
7102dcff4c  cmp x26,x14
7102dcff50  b.ls 0x7102dd16f0
7102dcff54  add x14,x24,x14, LSL #0x4
7102dcff58  ldr x15,[x14, #0x8]
7102dcff5c  str x15,[x11, #0x8]
7102dcff60  ldr x14,[x14]
7102dcff64  cmp x8,#0x13
7102dcff68  str x14,[x11]
7102dcff6c  b.eq 0x7102dcffc0
7102dcff70  b.cs 0x7102dd16ec
7102dcff74  lsl x14,x8,#0x2
7102dcff78  ldr w15,[x13, x14, LSL #0x0]
7102dcff7c  str w15,[x10, x14, LSL #0x0]
7102dcff80  ldr x16,[x9]
7102dcff84  ldr x15,[x0]
7102dcff88  sub x16,x16,x15
7102dcff8c  add w14,w12,w8
7102dcff90  asr x16,x16,#0x4
7102dcff94  cmp x16,x14
7102dcff98  b.ls 0x7102dd16f4
7102dcff9c  add x14,x15,x14, LSL #0x4
7102dcffa0  ldr x15,[x14, #0x8]
7102dcffa4  str x15,[x23, #0x8]
7102dcffa8  ldr x14,[x14]
7102dcffac  add x8,x8,#0x1
7102dcffb0  add x11,x11,#0x10
7102dcffb4  str x14,[x23], #0x10
7102dcffb8  cmp x8,#0x14
7102dcffbc  b.cc 0x7102dcff48
7102dcffc0  ldr w8,[sp, #0x10c]
7102dcffc4  adrp x9,0x710532a000
7102dcffc8  ldr x9,[x9, #0x9d8]
7102dcffcc  orr w8,w8,#0x4000
7102dcffd0  str w8,[sp, #0x10c]
7102dcffd4  ldr x9,[x9]
7102dcffd8  ldr x11,[x9, #0x1c8]
7102dcffdc  ldr x8,[x20, #0x300]
7102dcffe0  ldr x8,[x8, #0x10]
7102dcffe4  mov x10,x11
7102dcffe8  ldr x9,[x10, #0x50]!
7102dcffec  cbz x9,0x7102dd0034
7102dcfff0  ldr x24,[sp, #0x58]
7102dcfff4  add x10,x11,#0x50
7102dcfff8  b 0x7102dd0004
7102dcfffc  mov x10,x9
7102dd0000  mov x9,x11
7102dd0004  ldr x11,[x9, #0x20]
7102dd0008  cmp x11,x8
7102dd000c  b.ls 0x7102dd0020
7102dd0010  ldr x11,[x9]
7102dd0014  mov x10,x9
7102dd0018  cbnz x11,0x7102dcfffc
7102dd001c  b 0x7102dd0038
7102dd0020  b.cs 0x7102dd0038
7102dd0024  ldr x11,[x9, #0x8]!
7102dd0028  mov x10,x9
7102dd002c  cbnz x11,0x7102dcfffc
7102dd0030  b 0x7102dd0038
7102dd0034  ldr x24,[sp, #0x58]
7102dd0038  ldr x8,[x10]
7102dd003c  ldr x23,[x8, #0x28]
7102dd0040  adrp x8,0x71052b9000
7102dd0044  ldr x0,[x8, #0x298]
7102dd0048  ldr x8,[x23, #0xc0]
7102dd004c  ldr w1,[x8]
7102dd0050  mov w3,#0x16
7102dd0054  add x2,sp,#0x2b0
7102dd0058  add x4,sp,#0x160
7102dd005c  add x5,sp,#0x100
7102dd0060  add x6,sp,#0xa8
7102dd0064  mov w7,wzr
7102dd0068  bl 0x7100523f10
7102dd006c  mov x22,x0
7102dd0070  mov x0,x23
7102dd0074  mov x1,x22
7102dd0078  bl 0x71031653d0
7102dd007c  str x22,[x21, #0x20]
7102dd0080  adrp x20,0x71052a8000
7102dd0084  ldr x8,[x22, #0x60]
7102dd0088  ldr x20,[x20, #0xa88]
7102dd008c  cbz x8,0x7102dd00c0
7102dd0090  ldrh w9,[x8, #0x8]
7102dd0094  sub w9,w9,#0x1
7102dd0098  sxth w10,w9
7102dd009c  cmp w10,#0x0
7102dd00a0  strh w9,[x8, #0x8]
7102dd00a4  b.gt 0x7102dd00bc
7102dd00a8  ldr x0,[x22, #0x60]
7102dd00ac  cbz x0,0x7102dd00bc
7102dd00b0  ldr x8,[x0]
7102dd00b4  ldr x8,[x8, #0x8]
7102dd00b8  blr x8
7102dd00bc  str xzr,[x22, #0x60]
7102dd00c0  mov w1,#0x28
7102dd00c4  mov w0,#0x10
7102dd00c8  bl 0x710392e290
7102dd00cc  cbnz x0,0x7102dd0114
7102dd00d0  adrp x8,0x7105332000
7102dd00d4  ldr x0,[x8, #0xf00]
7102dd00d8  cbz x0,0x7102dd0110
7102dd00dc  mov w8,#0x28
7102dd00e0  stur wzr,[x29, #-0x74]
7102dd00e4  sub x1,x29,#0x74
7102dd00e8  stur x8,[x29, #-0x80]
7102dd00ec  ldr x8,[x0]
7102dd00f0  ldr x8,[x8, #0x30]
7102dd00f4  sub x2,x29,#0x80
7102dd00f8  blr x8
7102dd00fc  tbz w0,#0x0,0x7102dd0110
7102dd0100  mov w1,#0x28
7102dd0104  mov w0,#0x10
7102dd0108  bl 0x710392e290
7102dd010c  cbnz x0,0x7102dd0114
7102dd0110  mov x0,xzr
7102dd0114  adrp x8,0x710513c000
7102dd0118  add x8,x8,#0xb40
7102dd011c  mov w9,#0x1
7102dd0120  str x8,[x0]
7102dd0124  adrp x8,0x7102dd4000
7102dd0128  add x8,x8,#0x3b0
7102dd012c  str w9,[x0, #0x8]
7102dd0130  stp x21,x8,[x0, #0x10]
7102dd0134  str xzr,[x0, #0x20]
7102dd0138  str x0,[x22, #0x60]
7102dd013c  ldr x8,[x21, #0x20]
7102dd0140  ldr x8,[x8, #0x8]
7102dd0144  strb w9,[x8, #0xe9]
7102dd0148  ldr x8,[x21, #0x20]
7102dd014c  strb w9,[x8, #0x128]
7102dd0150  ldr x9,[x8, #0x8]
7102dd0154  cbz x9,0x7102dd016c
7102dd0158  mov x10,#-0x1
7102dd015c  str x10,[x9, #0xd8]
7102dd0160  ldr x0,[x8, #0x8]
7102dd0164  mov w1,wzr
7102dd0168  bl 0x7100532bc0
7102dd016c  adrp x9,0x710532a000
7102dd0170  ldr x8,[x21, #0x8]
7102dd0174  ldr x8,[x8, #0x300]
7102dd0178  ldr x9,[x9, #0x9d8]
7102dd017c  ldr x9,[x9]
7102dd0180  ldr x0,[x9, #0x1c8]
7102dd0184  ldr x1,[x8, #0x10]
7102dd0188  mov w2,wzr
7102dd018c  bl 0x7103165120
7102dd0190  ldr x8,[x21, #0x20]
7102dd0194  ldr x8,[x8, #0x8]
7102dd0198  ldr x9,[x8, #0x98]!
7102dd019c  cmp x8,x9
7102dd01a0  b.eq 0x7102dd01b4
7102dd01a4  strb wzr,[x9, #0x44]
7102dd01a8  ldr x9,[x9]
7102dd01ac  cmp x8,x9
7102dd01b0  b.ne 0x7102dd01a4
7102dd01b4  adrp x8,0x7104469000
7102dd01b8  ldr q0,[x8, #0x9f0]
7102dd01bc  strh wzr,[x21, #0x36c]
7102dd01c0  str q0,[x21, #0x300]
7102dd01c4  adrp x8,0x71052a8000
7102dd01c8  ldr x8,[x8, #0xa80]
7102dd01cc  ldr q1,[x20]
7102dd01d0  fmov s0,wzr
7102dd01d4  ext v2.16B,v1.16B,v1.16B,0x8
7102dd01d8  orr x10,xzr,#0x3f8000003f800000
7102dd01dc  mov v2.S[0x1],v0.S[0x0]
7102dd01e0  ldr q0,[x8]
7102dd01e4  mov v1.D[0x1],v2.D[0x0]
7102dd01e8  mov w8,#0x169
7102dd01ec  str x10,[sp, #0x2d0]
7102dd01f0  str w8,[sp, #0x2d8]
7102dd01f4  mov w8,#0x3f
7102dd01f8  movk w8,#0x3, LSL #16
7102dd01fc  str x10,[sp, #0x2e8]
7102dd0200  mov w10,#0x19
7102dd0204  mov x11,#0x1fca
7102dd0208  movk x11,#0x1ed9, LSL #16
7102dd020c  orr w9,wzr,#0x3f800000
7102dd0210  movk x11,#0x3, LSL #32
7102dd0214  str w8,[sp, #0x300]
7102dd0218  mov w8,#0x100
7102dd021c  strb w10,[sp, #0x304]
7102dd0220  orr w10,wzr,#0xe
7102dd0224  add x12,sp,#0x2b0
7102dd0228  strb wzr,[sp, #0x356]
7102dd022c  strh wzr,[sp, #0x354]
7102dd0230  str wzr,[sp, #0x350]
7102dd0234  str w9,[sp, #0x358]
7102dd0238  str xzr,[sp, #0x2e0]
7102dd023c  str w9,[sp, #0x2f0]
7102dd0240  stp q1,q1,[sp, #0x2b0]
7102dd0244  str x11,[sp, #0x2f8]
7102dd0248  strb wzr,[sp, #0x310]
7102dd024c  strb wzr,[sp, #0x312]
7102dd0250  stur w8,[x12, #0x63]
7102dd0254  strb w10,[sp, #0x326]
7102dd0258  mov x10,#0xfc4f
7102dd025c  movk x10,#0x25cb, LSL #16
7102dd0260  mov x8,#0x100000001
7102dd0264  strh wzr,[sp, #0x324]
7102dd0268  stur xzr,[x12, #0x6c]
7102dd026c  stur xzr,[x12, #0x67]
7102dd0270  str x8,[sp, #0x328]
7102dd0274  movk x10,#0x4, LSL #32
7102dd0278  str x11,[sp, #0x338]
7102dd027c  str wzr,[sp, #0x350]
7102dd0280  strh wzr,[sp, #0x330]
7102dd0284  str q0,[sp, #0x340]
7102dd0288  strh wzr,[sp, #0x354]
7102dd028c  stur x9,[x12, #0xac]
7102dd0290  mov x20,#0x1
7102dd0294  movk x20,#0x10, LSL #32
7102dd0298  mov w1,#0x48
7102dd029c  mov w0,#0x10
7102dd02a0  strh wzr,[sp, #0x37c]
7102dd02a4  str x20,[sp, #0x170]
7102dd02a8  str x10,[sp, #0x368]
7102dd02ac  mov x10,#0x7a80
7102dd02b0  movk x10,#0xfb99, LSL #16
7102dd02b4  movk x10,#0x7, LSL #32
7102dd02b8  str x10,[sp, #0x370]
7102dd02bc  mov w10,#0xbf800000
7102dd02c0  strh wzr,[sp, #0x378]
7102dd02c4  str w10,[sp, #0x380]
7102dd02c8  mov w10,#0xffffffff
7102dd02cc  stur xzr,[x12, #0xe4]
7102dd02d0  stur xzr,[x12, #0xdc]
7102dd02d4  stur xzr,[x12, #0xd4]
7102dd02d8  str w9,[sp, #0x3a4]
7102dd02dc  mov w9,#0x64
7102dd02e0  str w9,[sp, #0x2dc]
7102dd02e4  mov x9,#0x4539
7102dd02e8  movk x9,#0x74a8, LSL #16
7102dd02ec  movk x9,#0x14, LSL #32
7102dd02f0  str w10,[sp, #0x39c]
7102dd02f4  orr w10,wzr,#0x3
7102dd02f8  strh w10,[sp, #0x3a0]
7102dd02fc  str x9,[sp, #0x308]
7102dd0300  mov w9,#0x4
7102dd0304  strh wzr,[sp, #0x3a8]
7102dd0308  strb wzr,[sp, #0x3aa]
7102dd030c  strb wzr,[sp, #0x311]
7102dd0310  stp x9,x8,[sp, #0x160]
7102dd0314  bl 0x710392e290
7102dd0318  mov x22,x0
7102dd031c  cbnz x0,0x7102dd0368
7102dd0320  adrp x8,0x7105332000
7102dd0324  ldr x0,[x8, #0xf00]
7102dd0328  cbz x0,0x7102dd0364
7102dd032c  mov w8,#0x48
7102dd0330  str wzr,[sp, #0xa8]
7102dd0334  add x1,sp,#0xa8
7102dd0338  str x8,[sp, #0x100]
7102dd033c  ldr x8,[x0]
7102dd0340  ldr x8,[x8, #0x30]
7102dd0344  add x2,sp,#0x100
7102dd0348  blr x8
7102dd034c  tbz w0,#0x0,0x7102dd0364
7102dd0350  mov w1,#0x48
7102dd0354  mov w0,#0x10
7102dd0358  bl 0x710392e290
7102dd035c  mov x22,x0
7102dd0360  cbnz x0,0x7102dd0368
7102dd0364  mov x22,xzr
7102dd0368  ldr x1,[x21, #0x8]
7102dd036c  add x2,sp,#0x160
7102dd0370  mov x0,x22
7102dd0374  bl 0x710313e6a0
7102dd0378  ldr x8,[x21, #0x18]
7102dd037c  str x22,[x21, #0x370]
7102dd0380  fmov s8,0xbf000000
7102dd0384  ldp s0,s1,[x8, #0xbc]
7102dd0388  movi v4.2D,#0x0
7102dd038c  mov v3.16B,v4.16B
7102dd0390  mov w8,#0x2
7102dd0394  str w8,[sp, #0x124]
7102dd0398  str s1,[sp, #0x120]
7102dd039c  fmul s2,s0,s8
7102dd03a0  mov v3.S[0x0],v2.S[0x0]
7102dd03a4  mov v2.16B,v4.16B
7102dd03a8  mov v2.S[0x0],v0.S[0x0]
7102dd03ac  mov v3.S[0x1],v1.S[0x0]
7102dd03b0  stp q3,q2,[sp, #0x100]
7102dd03b4  ldr x8,[x22, #0x38]
7102dd03b8  cbz x8,0x7102dd03dc
7102dd03bc  ldr x0,[x8, #0xa0]
7102dd03c0  ldr x8,[x0]
7102dd03c4  ldr x8,[x8, #0x68]
7102dd03c8  add x3,sp,#0x2b0
7102dd03cc  mov w1,wzr
7102dd03d0  mov w2,wzr
7102dd03d4  blr x8
7102dd03d8  ldr x22,[x24]
7102dd03dc  ldr x8,[x22, #0x38]
7102dd03e0  cbz x8,0x7102dd040c
7102dd03e4  ldr x0,[x8, #0x130]
7102dd03e8  ldr x8,[x0]
7102dd03ec  ldr x8,[x8, #0x100]
7102dd03f0  add x2,sp,#0x100
7102dd03f4  mov w1,wzr
7102dd03f8  mov w3,wzr
7102dd03fc  mov w4,wzr
7102dd0400  mov w5,wzr
7102dd0404  blr x8
7102dd0408  ldr x22,[x24]
7102dd040c  ldrb w8,[x22, #0x40]
7102dd0410  cbz w8,0x7102dd0460
7102dd0414  ldr x23,[x22, #0x30]
7102dd0418  cbz x23,0x7102dd0450
7102dd041c  ldrb w8,[x23, #0x10]
7102dd0420  cbz w8,0x7102dd0450
7102dd0424  ldrb w8,[x23, #0x50]
7102dd0428  strb wzr,[x23, #0x10]
7102dd042c  cbz w8,0x7102dd0450
7102dd0430  ldr x8,[x23]
7102dd0434  ldr w0,[x8, #0x8]
7102dd0438  bl 0x71003ac560
7102dd043c  ldr x8,[x0]
7102dd0440  ldr x8,[x8, #0x48]
7102dd0444  mov w1,wzr
7102dd0448  blr x8
7102dd044c  strb wzr,[x23, #0x50]
7102dd0450  ldr x8,[x22]
7102dd0454  ldr x8,[x8, #0x30]
7102dd0458  mov x0,x22
7102dd045c  blr x8
7102dd0460  strb wzr,[x22, #0x40]
7102dd0464  ldr x8,[x24]
7102dd0468  ldr x8,[x8, #0x38]
7102dd046c  cbz x8,0x7102dd0504
7102dd0470  ldr x0,[x8, #0x130]
7102dd0474  ldr x8,[x0]
7102dd0478  ldr x8,[x8, #0x1a8]
7102dd047c  blr x8
7102dd0480  ldr w8,[x0, #0x4c]
7102dd0484  ldr x9,[x0, #0x8]
7102dd0488  and w8,w8,#0xffffe07f
7102dd048c  orr w8,w8,#0x80
7102dd0490  str w8,[x0, #0x4c]
7102dd0494  ldr w8,[x9, #0x10]
7102dd0498  cmp w8,#0x1
7102dd049c  b.lt 0x7102dd0504
7102dd04a0  ldr x11,[x0, #0x40]
7102dd04a4  mov x8,xzr
7102dd04a8  orr w10,wzr,#0x30
7102dd04ac  lsl x12,x8,#0x5
7102dd04b0  ldr w13,[x11, x12, LSL #0x0]
7102dd04b4  cmp w13,#0x1
7102dd04b8  b.lt 0x7102dd04f0
7102dd04bc  mov x13,xzr
7102dd04c0  ldr x14,[x9, #0x18]
7102dd04c4  add x14,x14,x10
7102dd04c8  ldr x14,[x14, x13, LSL #0x3]
7102dd04cc  cbz x14,0x7102dd04e0
7102dd04d0  ldr x9,[x0, #0x48]
7102dd04d4  str x9,[x14, #0x8]
7102dd04d8  ldr x11,[x0, #0x40]
7102dd04dc  ldr x9,[x0, #0x8]
7102dd04e0  ldrsw x14,[x11, x12, LSL #0x0]
7102dd04e4  add x13,x13,#0x1
7102dd04e8  cmp x13,x14
7102dd04ec  b.lt 0x7102dd04c0
7102dd04f0  ldrsw x12,[x9, #0x10]
7102dd04f4  add x8,x8,#0x1
7102dd04f8  add x10,x10,#0x2d0
7102dd04fc  cmp x8,x12
7102dd0500  b.lt 0x7102dd04ac
7102dd0504  ldr x8,[x24]
7102dd0508  ldr x8,[x8, #0x38]
7102dd050c  cbz x8,0x7102dd05a4
7102dd0510  ldr x0,[x8, #0x130]
7102dd0514  ldr x8,[x0]
7102dd0518  ldr x8,[x8, #0x1a8]
7102dd051c  blr x8
7102dd0520  ldr w8,[x0, #0x4c]
7102dd0524  ldr x9,[x0, #0x8]
7102dd0528  and w8,w8,#0xff1fffff
7102dd052c  orr w8,w8,#0x200000
7102dd0530  str w8,[x0, #0x4c]
7102dd0534  ldr w8,[x9, #0x10]
7102dd0538  cmp w8,#0x1
7102dd053c  b.lt 0x7102dd05a4
7102dd0540  ldr x11,[x0, #0x40]
7102dd0544  mov x8,xzr
7102dd0548  orr w10,wzr,#0x30
7102dd054c  lsl x12,x8,#0x5
7102dd0550  ldr w13,[x11, x12, LSL #0x0]
7102dd0554  cmp w13,#0x1
7102dd0558  b.lt 0x7102dd0590
7102dd055c  mov x13,xzr
7102dd0560  ldr x14,[x9, #0x18]
7102dd0564  add x14,x14,x10
7102dd0568  ldr x14,[x14, x13, LSL #0x3]
7102dd056c  cbz x14,0x7102dd0580
7102dd0570  ldr x9,[x0, #0x48]
7102dd0574  str x9,[x14, #0x8]
7102dd0578  ldr x11,[x0, #0x40]
7102dd057c  ldr x9,[x0, #0x8]
7102dd0580  ldrsw x14,[x11, x12, LSL #0x0]
7102dd0584  add x13,x13,#0x1
7102dd0588  cmp x13,x14
7102dd058c  b.lt 0x7102dd0560
7102dd0590  ldrsw x12,[x9, #0x10]
7102dd0594  add x8,x8,#0x1
7102dd0598  add x10,x10,#0x2d0
7102dd059c  cmp x8,x12
7102dd05a0  b.lt 0x7102dd054c
7102dd05a4  ldr x8,[x24]
7102dd05a8  ldr x8,[x8, #0x38]
7102dd05ac  ldr x0,[x8, #0x130]
7102dd05b0  ldr x8,[x0]
7102dd05b4  ldr x8,[x8, #0x1a8]
7102dd05b8  blr x8
7102dd05bc  ldr x8,[x0, #0x8]
7102dd05c0  ldr w8,[x8, #0x10]
7102dd05c4  cmp w8,#0x1
7102dd05c8  b.lt 0x7102dd05dc
7102dd05cc  ldr x8,[x0, #0x38]
7102dd05d0  adrp x9,0x7102dd4000
7102dd05d4  add x9,x9,#0x2b0
7102dd05d8  str x9,[x8, #0x2c8]
7102dd05dc  ldr q0,[sp, #0x90]
7102dd05e0  fmov s2,0x3f800000
7102dd05e4  str q0,[sp, #0x160]
7102dd05e8  ldr q0,[sp, #0x80]
7102dd05ec  str q0,[sp, #0x170]
7102dd05f0  ldr q0,[sp, #0x70]
7102dd05f4  str q0,[sp, #0x180]
7102dd05f8  ldr q0,[x21, #0x300]
7102dd05fc  mov v1.16B,v0.16B
7102dd0600  mov v1.S[0x3],v2.S[0x0]
7102dd0604  ext v0.16B,v1.16B,v0.16B,0xc
7102dd0608  ext v1.16B,v0.16B,v1.16B,0x4
7102dd060c  ext v0.16B,v0.16B,v0.16B,0x8
7102dd0610  ext v0.16B,v1.16B,v0.16B,0xc
7102dd0614  str q0,[sp, #0x190]
7102dd0618  ldr x8,[x21, #0x370]
7102dd061c  ldr x8,[x8, #0x38]
7102dd0620  cbz x8,0x7102dd0640
7102dd0624  ldr x0,[x8, #0x130]
7102dd0628  ldr x8,[x0]
7102dd062c  ldr x8,[x8, #0x178]
7102dd0630  add x1,sp,#0x160
7102dd0634  add x2,sp,#0x160
7102dd0638  mov w3,#0x1
7102dd063c  blr x8
7102dd0640  mov w8,#0x4
7102dd0644  str x8,[sp, #0x160]
7102dd0648  mov x8,#0x100000001
7102dd064c  mov w1,#0x48
7102dd0650  mov w0,#0x10
7102dd0654  stp x8,x20,[sp, #0x168]
7102dd0658  bl 0x710392e290
7102dd065c  mov x22,x0
7102dd0660  cbnz x0,0x7102dd06ac
7102dd0664  adrp x8,0x7105332000
7102dd0668  ldr x0,[x8, #0xf00]
7102dd066c  cbz x0,0x7102dd06a8
7102dd0670  mov w8,#0x48
7102dd0674  str wzr,[sp, #0xa8]
7102dd0678  add x1,sp,#0xa8
7102dd067c  str x8,[sp, #0x100]
7102dd0680  ldr x8,[x0]
7102dd0684  ldr x8,[x8, #0x30]
7102dd0688  add x2,sp,#0x100
7102dd068c  blr x8
7102dd0690  tbz w0,#0x0,0x7102dd06a8
7102dd0694  mov w1,#0x48
7102dd0698  mov w0,#0x10
7102dd069c  bl 0x710392e290
7102dd06a0  mov x22,x0
7102dd06a4  cbnz x0,0x7102dd06ac
7102dd06a8  mov x22,xzr
7102dd06ac  ldr x1,[x21, #0x8]
7102dd06b0  add x2,sp,#0x160
7102dd06b4  mov x0,x22
7102dd06b8  bl 0x710313e6a0
7102dd06bc  ldr x8,[x21, #0x18]
7102dd06c0  str x22,[x21, #0x378]
7102dd06c4  movi v4.2D,#0x0
7102dd06c8  mov v3.16B,v4.16B
7102dd06cc  ldp s0,s1,[x8, #0xc4]
7102dd06d0  mov w8,#0x2
7102dd06d4  str w8,[sp, #0x124]
7102dd06d8  str s1,[sp, #0x120]
7102dd06dc  fmul s2,s0,s8
7102dd06e0  mov v3.S[0x0],v2.S[0x0]
7102dd06e4  mov v3.S[0x1],v1.S[0x0]
7102dd06e8  mov v4.S[0x0],v0.S[0x0]
7102dd06ec  stp q3,q4,[sp, #0x100]
7102dd06f0  ldr x8,[x22, #0x38]
7102dd06f4  cbz x8,0x7102dd0718
7102dd06f8  ldr x0,[x8, #0xa0]
7102dd06fc  ldr x8,[x0]
7102dd0700  ldr x8,[x8, #0x68]
7102dd0704  add x3,sp,#0x2b0
7102dd0708  mov w1,wzr
7102dd070c  mov w2,wzr
7102dd0710  blr x8
7102dd0714  ldr x22,[x21, #0x378]
7102dd0718  ldr x8,[x22, #0x38]
7102dd071c  cbz x8,0x7102dd0748
7102dd0720  ldr x0,[x8, #0x130]
7102dd0724  ldr x8,[x0]
7102dd0728  ldr x8,[x8, #0x100]
7102dd072c  add x2,sp,#0x100
7102dd0730  mov w1,wzr
7102dd0734  mov w3,wzr
7102dd0738  mov w4,wzr
7102dd073c  mov w5,wzr
7102dd0740  blr x8
7102dd0744  ldr x22,[x21, #0x378]
7102dd0748  ldrb w8,[x22, #0x40]
7102dd074c  cbz w8,0x7102dd079c
7102dd0750  ldr x20,[x22, #0x30]
7102dd0754  cbz x20,0x7102dd078c
7102dd0758  ldrb w8,[x20, #0x10]
7102dd075c  cbz w8,0x7102dd078c
7102dd0760  ldrb w8,[x20, #0x50]
7102dd0764  strb wzr,[x20, #0x10]
7102dd0768  cbz w8,0x7102dd078c
7102dd076c  ldr x8,[x20]
7102dd0770  ldr w0,[x8, #0x8]
7102dd0774  bl 0x71003ac560
7102dd0778  ldr x8,[x0]
7102dd077c  ldr x8,[x8, #0x48]
7102dd0780  mov w1,wzr
7102dd0784  blr x8
7102dd0788  strb wzr,[x20, #0x50]
7102dd078c  ldr x8,[x22]
7102dd0790  ldr x8,[x8, #0x30]
7102dd0794  mov x0,x22
7102dd0798  blr x8
7102dd079c  strb wzr,[x22, #0x40]
7102dd07a0  ldr x8,[x21, #0x378]
7102dd07a4  ldr x8,[x8, #0x38]
7102dd07a8  cbz x8,0x7102dd0840
7102dd07ac  ldr x0,[x8, #0x130]
7102dd07b0  ldr x8,[x0]
7102dd07b4  ldr x8,[x8, #0x1a8]
7102dd07b8  blr x8
7102dd07bc  ldr w8,[x0, #0x4c]
7102dd07c0  ldr x9,[x0, #0x8]
7102dd07c4  and w8,w8,#0xffffe07f
7102dd07c8  orr w8,w8,#0x80
7102dd07cc  str w8,[x0, #0x4c]
7102dd07d0  ldr w8,[x9, #0x10]
7102dd07d4  cmp w8,#0x1
7102dd07d8  b.lt 0x7102dd0840
7102dd07dc  ldr x11,[x0, #0x40]
7102dd07e0  mov x8,xzr
7102dd07e4  orr w10,wzr,#0x30
7102dd07e8  lsl x12,x8,#0x5
7102dd07ec  ldr w13,[x11, x12, LSL #0x0]
7102dd07f0  cmp w13,#0x1
7102dd07f4  b.lt 0x7102dd082c
7102dd07f8  mov x13,xzr
7102dd07fc  ldr x14,[x9, #0x18]
7102dd0800  add x14,x14,x10
7102dd0804  ldr x14,[x14, x13, LSL #0x3]
7102dd0808  cbz x14,0x7102dd081c
7102dd080c  ldr x9,[x0, #0x48]
7102dd0810  str x9,[x14, #0x8]
7102dd0814  ldr x11,[x0, #0x40]
7102dd0818  ldr x9,[x0, #0x8]
7102dd081c  ldrsw x14,[x11, x12, LSL #0x0]
7102dd0820  add x13,x13,#0x1
7102dd0824  cmp x13,x14
7102dd0828  b.lt 0x7102dd07fc
7102dd082c  ldrsw x12,[x9, #0x10]
7102dd0830  add x8,x8,#0x1
7102dd0834  add x10,x10,#0x2d0
7102dd0838  cmp x8,x12
7102dd083c  b.lt 0x7102dd07e8
7102dd0840  ldr x8,[x21, #0x378]
7102dd0844  ldr x8,[x8, #0x38]
7102dd0848  cbz x8,0x7102dd08e0
7102dd084c  ldr x0,[x8, #0x130]
7102dd0850  ldr x8,[x0]
7102dd0854  ldr x8,[x8, #0x1a8]
7102dd0858  blr x8
7102dd085c  ldr w8,[x0, #0x4c]
7102dd0860  ldr x9,[x0, #0x8]
7102dd0864  and w8,w8,#0xff1fffff
7102dd0868  orr w8,w8,#0x200000
7102dd086c  str w8,[x0, #0x4c]
7102dd0870  ldr w8,[x9, #0x10]
7102dd0874  cmp w8,#0x1
7102dd0878  b.lt 0x7102dd08e0
7102dd087c  ldr x11,[x0, #0x40]
7102dd0880  mov x8,xzr
7102dd0884  orr w10,wzr,#0x30
7102dd0888  lsl x12,x8,#0x5
7102dd088c  ldr w13,[x11, x12, LSL #0x0]
7102dd0890  cmp w13,#0x1
7102dd0894  b.lt 0x7102dd08cc
7102dd0898  mov x13,xzr
7102dd089c  ldr x14,[x9, #0x18]
7102dd08a0  add x14,x14,x10
7102dd08a4  ldr x14,[x14, x13, LSL #0x3]
7102dd08a8  cbz x14,0x7102dd08bc
7102dd08ac  ldr x9,[x0, #0x48]
7102dd08b0  str x9,[x14, #0x8]
7102dd08b4  ldr x11,[x0, #0x40]
7102dd08b8  ldr x9,[x0, #0x8]
7102dd08bc  ldrsw x14,[x11, x12, LSL #0x0]
7102dd08c0  add x13,x13,#0x1
7102dd08c4  cmp x13,x14
7102dd08c8  b.lt 0x7102dd089c
7102dd08cc  ldrsw x12,[x9, #0x10]
7102dd08d0  add x8,x8,#0x1
7102dd08d4  add x10,x10,#0x2d0
7102dd08d8  cmp x8,x12
7102dd08dc  b.lt 0x7102dd0888
7102dd08e0  ldr x8,[x21, #0x378]
7102dd08e4  ldr x8,[x8, #0x38]
7102dd08e8  ldr x0,[x8, #0x130]
7102dd08ec  ldr x8,[x0]
7102dd08f0  ldr x8,[x8, #0x1a8]
7102dd08f4  blr x8
7102dd08f8  ldr x8,[x0, #0x8]
7102dd08fc  ldr w8,[x8, #0x10]
7102dd0900  cmp w8,#0x1
7102dd0904  b.lt 0x7102dd0918
7102dd0908  ldr x8,[x0, #0x38]
7102dd090c  adrp x9,0x7102dd4000
7102dd0910  add x9,x9,#0x2b0
7102dd0914  str x9,[x8, #0x2c8]
7102dd0918  ldr q0,[sp, #0x90]
7102dd091c  fmov s2,0x3f800000
7102dd0920  str q0,[sp, #0x160]
7102dd0924  ldr q0,[sp, #0x80]
7102dd0928  str q0,[sp, #0x170]
7102dd092c  ldr q0,[sp, #0x70]
7102dd0930  str q0,[sp, #0x180]
7102dd0934  ldr q0,[x21, #0x300]
7102dd0938  mov v1.16B,v0.16B
7102dd093c  mov v1.S[0x3],v2.S[0x0]
7102dd0940  ext v0.16B,v1.16B,v0.16B,0xc
7102dd0944  ext v1.16B,v0.16B,v1.16B,0x4
7102dd0948  ext v0.16B,v0.16B,v0.16B,0x8
7102dd094c  ext v0.16B,v1.16B,v0.16B,0xc
7102dd0950  str q0,[sp, #0x190]
7102dd0954  ldr x8,[x21, #0x378]
7102dd0958  ldr x8,[x8, #0x38]
7102dd095c  cbz x8,0x7102dd097c
7102dd0960  ldr x0,[x8, #0x130]
7102dd0964  ldr x8,[x0]
7102dd0968  ldr x8,[x8, #0x178]
7102dd096c  add x1,sp,#0x160
7102dd0970  add x2,sp,#0x160
7102dd0974  mov w3,#0x1
7102dd0978  blr x8
7102dd097c  ldr x8,[x21]
7102dd0980  ldr x8,[x8, #0x68]
7102dd0984  fmov s0,0x3f800000
7102dd0988  mov x0,x21
7102dd098c  blr x8
7102dd0990  add x8,x21,#0x2cd
7102dd0994  mov w23,#0x1
7102dd0998  strh w23,[x8]
7102dd099c  strb wzr,[x21, #0x2cf]
7102dd09a0  adrp x8,0x71052b9000
7102dd09a4  ldr x8,[x8, #0x4f8]
7102dd09a8  ldr x20,[x8]
7102dd09ac  mov w1,#0x28
7102dd09b0  mov w0,#0x10
7102dd09b4  bl 0x710392e290
7102dd09b8  mov x22,x0
7102dd09bc  cbnz x0,0x7102dd0a08
7102dd09c0  adrp x8,0x7105332000
7102dd09c4  ldr x0,[x8, #0xf00]
7102dd09c8  cbz x0,0x7102dd0a04
7102dd09cc  mov w8,#0x28
7102dd09d0  str wzr,[sp, #0x160]
7102dd09d4  add x1,sp,#0x160
7102dd09d8  str x8,[sp, #0x2b0]
7102dd09dc  ldr x8,[x0]
7102dd09e0  ldr x8,[x8, #0x30]
7102dd09e4  add x2,sp,#0x2b0
7102dd09e8  blr x8
7102dd09ec  tbz w0,#0x0,0x7102dd0a04
7102dd09f0  mov w1,#0x28
7102dd09f4  mov w0,#0x10
7102dd09f8  bl 0x710392e290
7102dd09fc  mov x22,x0
7102dd0a00  cbnz x0,0x7102dd0a08
7102dd0a04  mov x22,xzr
7102dd0a08  adrp x8,0x710513c000
7102dd0a0c  add x8,x8,#0xb10
7102dd0a10  adrp x9,0x7102dd4000
7102dd0a14  add x9,x9,#0xc0
7102dd0a18  str w23,[x22, #0x8]
7102dd0a1c  str x8,[x22]
7102dd0a20  stp x21,x9,[x22, #0x10]
7102dd0a24  mov w0,#0x10
7102dd0a28  str xzr,[x22, #0x20]
7102dd0a2c  ldr x20,[x20, #0x8]
7102dd0a30  orr w1,wzr,#0x18
7102dd0a34  add x23,x20,#0x800
7102dd0a38  bl 0x710392e290
7102dd0a3c  cbnz x0,0x7102dd0a84
7102dd0a40  adrp x8,0x7105332000
7102dd0a44  ldr x0,[x8, #0xf00]
7102dd0a48  cbz x0,0x7102dd0a80
7102dd0a4c  orr w8,wzr,#0x18
7102dd0a50  str wzr,[sp, #0x160]
7102dd0a54  add x1,sp,#0x160
7102dd0a58  str x8,[sp, #0x2b0]
7102dd0a5c  ldr x8,[x0]
7102dd0a60  ldr x8,[x8, #0x30]
7102dd0a64  add x2,sp,#0x2b0
7102dd0a68  blr x8
7102dd0a6c  tbz w0,#0x0,0x7102dd0a80
7102dd0a70  mov w0,#0x10
7102dd0a74  orr w1,wzr,#0x18
7102dd0a78  bl 0x710392e290
7102dd0a7c  cbnz x0,0x7102dd0a84
7102dd0a80  mov x0,xzr
7102dd0a84  str x22,[x0, #0x10]
7102dd0a88  ldrh w8,[x22, #0x8]
7102dd0a8c  add w8,w8,#0x1
7102dd0a90  strh w8,[x22, #0x8]
7102dd0a94  ldr x8,[x20, #0x808]
7102dd0a98  stp x23,x8,[x0]
7102dd0a9c  str x0,[x20, #0x808]
7102dd0aa0  str x0,[x8]
7102dd0aa4  ldr x8,[x20, #0x7f8]
7102dd0aa8  add x8,x8,#0x1
7102dd0aac  str x8,[x20, #0x7f8]
7102dd0ab0  str x0,[x21, #0x390]
7102dd0ab4  ldrh w8,[x22, #0x8]
7102dd0ab8  sub w8,w8,#0x1
7102dd0abc  sxth w9,w8
7102dd0ac0  cmp w9,#0x0
7102dd0ac4  strh w8,[x22, #0x8]
7102dd0ac8  b.gt 0x7102dd0adc
7102dd0acc  ldr x8,[x22]
7102dd0ad0  ldr x8,[x8, #0x8]
7102dd0ad4  mov x0,x22
7102dd0ad8  blr x8
7102dd0adc  ldr x0,[x19, #0x740]
7102dd0ae0  str x21,[x19, #0x740]
7102dd0ae4  cbz x0,0x7102dd0af4
7102dd0ae8  ldr x8,[x0]
7102dd0aec  ldr x8,[x8, #0x8]
7102dd0af0  blr x8
7102dd0af4  ldrb w8,[x19, #0x974]
7102dd0af8  cbz w8,0x7102dd0c6c
7102dd0afc  ldrb w27,[x19, #0x7f4]
7102dd0b00  cbnz x27,0x7102dd0c70
7102dd0b04  b 0x7102dd140c
7102dd0b08  cbz x20,0x7102dcedc0
7102dd0b0c  add x0,x20,#0x108
7102dd0b10  strb wzr,[x20, #0x110]
7102dd0b14  bl 0x71025e9d50
7102dd0b18  ldrb w8,[x20, #0x118]
7102dd0b1c  orr w8,w8,#0x1
7102dd0b20  strb w8,[x20, #0x118]
7102dd0b24  ldrb w8,[x20, #0xe0]
7102dd0b28  cbz w8,0x7102dd0b3c
7102dd0b2c  ldr x8,[x20, #0xc8]
7102dd0b30  cbz x8,0x7102dd0b3c
7102dd0b34  mov w9,#0x101
7102dd0b38  strh w9,[x8, #0x30]
7102dd0b3c  ldr x8,[x20, #0xd8]
7102dd0b40  cbz x8,0x7102dd0b4c
7102dd0b44  mov w9,#0x1
7102dd0b48  strb w9,[x8, #0x21]
7102dd0b4c  ldrb w8,[x20, #0xe0]
7102dd0b50  cbz w8,0x7102dcedc0
7102dd0b54  ldr x8,[x20, #0xb0]
7102dd0b58  strb wzr,[x8, #0x10]
7102dd0b5c  b 0x7102dcedc0
7102dd0b60  cbz x20,0x7102dcf244
7102dd0b64  add x0,x20,#0x108
7102dd0b68  strb wzr,[x20, #0x110]
7102dd0b6c  bl 0x71025e9d50
7102dd0b70  ldrb w8,[x20, #0x118]
7102dd0b74  orr w8,w8,#0x1
7102dd0b78  strb w8,[x20, #0x118]
7102dd0b7c  ldrb w8,[x20, #0xe0]
7102dd0b80  cbz w8,0x7102dd0b94
7102dd0b84  ldr x8,[x20, #0xc8]
7102dd0b88  cbz x8,0x7102dd0b94
7102dd0b8c  mov w9,#0x101
7102dd0b90  strh w9,[x8, #0x30]
7102dd0b94  ldr x8,[x20, #0xd8]
7102dd0b98  cbz x8,0x7102dd0ba4
7102dd0b9c  mov w9,#0x1
7102dd0ba0  strb w9,[x8, #0x21]
7102dd0ba4  ldrb w8,[x20, #0xe0]
7102dd0ba8  cbz w8,0x7102dcf244
7102dd0bac  ldr x8,[x20, #0xb0]
7102dd0bb0  strb wzr,[x8, #0x10]
7102dd0bb4  b 0x7102dcf244
7102dd0bb8  cbz x20,0x7102dcf288
7102dd0bbc  add x0,x20,#0x108
7102dd0bc0  strb wzr,[x20, #0x110]
7102dd0bc4  bl 0x71025e9d50
7102dd0bc8  ldrb w8,[x20, #0x118]
7102dd0bcc  orr w8,w8,#0x1
7102dd0bd0  strb w8,[x20, #0x118]
7102dd0bd4  ldrb w8,[x20, #0xe0]
7102dd0bd8  cbz w8,0x7102dd0bec
7102dd0bdc  ldr x8,[x20, #0xc8]
7102dd0be0  cbz x8,0x7102dd0bec
7102dd0be4  mov w9,#0x101
7102dd0be8  strh w9,[x8, #0x30]
7102dd0bec  ldr x8,[x20, #0xd8]
7102dd0bf0  cbz x8,0x7102dd0bfc
7102dd0bf4  mov w9,#0x1
7102dd0bf8  strb w9,[x8, #0x21]
7102dd0bfc  ldrb w8,[x20, #0xe0]
7102dd0c00  cbz w8,0x7102dcf288
7102dd0c04  ldr x8,[x20, #0xb0]
7102dd0c08  strb wzr,[x8, #0x10]
7102dd0c0c  b 0x7102dcf288
7102dd0c10  cbz x20,0x7102dd0af4
7102dd0c14  add x0,x20,#0x108
7102dd0c18  strb wzr,[x20, #0x110]
7102dd0c1c  bl 0x71025e9d50
7102dd0c20  ldrb w8,[x20, #0x118]
7102dd0c24  orr w8,w8,#0x1
7102dd0c28  strb w8,[x20, #0x118]
7102dd0c2c  ldrb w8,[x20, #0xe0]
7102dd0c30  cbz w8,0x7102dd0c44
7102dd0c34  ldr x8,[x20, #0xc8]
7102dd0c38  cbz x8,0x7102dd0c44
7102dd0c3c  mov w9,#0x101
7102dd0c40  strh w9,[x8, #0x30]
7102dd0c44  ldr x8,[x20, #0xd8]
7102dd0c48  cbz x8,0x7102dd0c54
7102dd0c4c  mov w9,#0x1
7102dd0c50  strb w9,[x8, #0x21]
7102dd0c54  ldrb w8,[x20, #0xe0]
7102dd0c58  cbz w8,0x7102dd0af4
7102dd0c5c  ldr x8,[x20, #0xb0]
7102dd0c60  strb wzr,[x8, #0x10]
7102dd0c64  ldrb w8,[x19, #0x974]
7102dd0c68  cbnz w8,0x7102dd0afc
7102dd0c6c  mov w27,#0x1
7102dd0c70  add x9,x19,#0x788
7102dd0c74  mov x26,#0xcd36
7102dd0c78  movk x26,#0xa392, LSL #16
7102dd0c7c  mov x20,#0x69d6
7102dd0c80  movk x20,#0xea25, LSL #16
7102dd0c84  str x9,[sp, #0x90]
7102dd0c88  mov x28,xzr
7102dd0c8c  add x9,x19,#0x770
7102dd0c90  str x9,[sp, #0x80]
7102dd0c94  movk x26,#0xd, LSL #32
7102dd0c98  movk x20,#0x8, LSL #32
7102dd0c9c  mov w23,#0x90
7102dd0ca0  tst w8,#0xff
7102dd0ca4  b.eq 0x7102dd104c
7102dd0ca8  ldr x8,[x19, #0x9d8]
7102dd0cac  mov w0,#0x10
7102dd0cb0  mov w1,#0xa0
7102dd0cb4  madd x24,x28,x23,x8
7102dd0cb8  bl 0x710392e290
7102dd0cbc  mov x25,x0
7102dd0cc0  cbnz x0,0x7102dd0d0c
7102dd0cc4  adrp x8,0x7105332000
7102dd0cc8  ldr x0,[x8, #0xf00]
7102dd0ccc  cbz x0,0x7102dd0d08
7102dd0cd0  mov w8,#0xa0
7102dd0cd4  str wzr,[sp, #0x160]
7102dd0cd8  add x1,sp,#0x160
7102dd0cdc  str x8,[sp, #0x2b0]
7102dd0ce0  ldr x8,[x0]
7102dd0ce4  ldr x8,[x8, #0x30]
7102dd0ce8  add x2,sp,#0x2b0
7102dd0cec  blr x8
7102dd0cf0  tbz w0,#0x0,0x7102dd0d08
7102dd0cf4  mov w0,#0x10
7102dd0cf8  mov w1,#0xa0
7102dd0cfc  bl 0x710392e290
7102dd0d00  mov x25,x0
7102dd0d04  cbnz x0,0x7102dd0d0c
7102dd0d08  mov x25,xzr
7102dd0d0c  cmp x28,#0x0
7102dd0d10  cset w2,ne
7102dd0d14  mov x0,x25
7102dd0d18  mov x1,x19
7102dd0d1c  mov x3,x24
7102dd0d20  bl 0x7102ddb2a0
7102dd0d24  str x25,[sp, #0x160]
7102dd0d28  ldr x22,[x19, #0x790]
7102dd0d2c  ldr x8,[x19, #0x798]
7102dd0d30  cmp x22,x8
7102dd0d34  b.cs 0x7102dd0d94
7102dd0d38  str xzr,[sp, #0x160]
7102dd0d3c  str x25,[x22]
7102dd0d40  ldr x8,[x19, #0x790]
7102dd0d44  add x8,x8,#0x8
7102dd0d48  str x8,[x19, #0x790]
7102dd0d4c  str xzr,[sp, #0x160]
7102dd0d50  ldrb w8,[x19, #0x974]
7102dd0d54  cbnz w8,0x7102dd108c
7102dd0d58  ldr x9,[x19, #0x310]
7102dd0d5c  ldp x8,x9,[x9, #0xd0]
7102dd0d60  cmp x8,x9
7102dd0d64  b.eq 0x7102dd1388
7102dd0d68  ldr w10,[x8, #0x8]
7102dd0d6c  cmp w10,#0x1
7102dd0d70  b.hi 0x7102dd0d84
7102dd0d74  ldr x21,[x8]
7102dd0d78  ldr x10,[x21, #0x68]
7102dd0d7c  cmp x10,x20
7102dd0d80  b.eq 0x7102dd0fec
7102dd0d84  add x8,x8,#0x10
7102dd0d88  cmp x9,x8
7102dd0d8c  b.ne 0x7102dd0d68
7102dd0d90  b 0x7102dd1388
7102dd0d94  ldr x9,[sp, #0x90]
7102dd0d98  ldr x24,[x9]
7102dd0d9c  sub x9,x22,x24
7102dd0da0  asr x23,x9,#0x3
7102dd0da4  add x9,x23,#0x1
7102dd0da8  lsr x10,x9,#0x3d
7102dd0dac  cbnz x10,0x7102dd16f8
7102dd0db0  sub x8,x8,x24
7102dd0db4  asr x10,x8,#0x3
7102dd0db8  orr x11,xzr,#0xffffffffffffffe
7102dd0dbc  cmp x10,x11
7102dd0dc0  b.hi 0x7102dd0de0
7102dd0dc4  asr x8,x8,#0x2
7102dd0dc8  cmp x8,x9
7102dd0dcc  csel x21,x9,x8,cc
7102dd0dd0  cbz x21,0x7102dd1044
7102dd0dd4  lsr x8,x21,#0x3d
7102dd0dd8  cbz x8,0x7102dd0de4
7102dd0ddc  b 0x7102dd16ec
7102dd0de0  orr x21,xzr,#0x1fffffffffffffff
7102dd0de4  lsl x8,x21,#0x3
7102dd0de8  cmp x8,#0x0
7102dd0dec  csinc x24,x8,xzr,ne
7102dd0df0  mov w0,#0x10
7102dd0df4  mov x1,x24
7102dd0df8  bl 0x710392e290
7102dd0dfc  cbnz x0,0x7102dd0e40
7102dd0e00  adrp x8,0x7105332000
7102dd0e04  ldr x0,[x8, #0xf00]
7102dd0e08  cbz x0,0x7102dd0e3c
7102dd0e0c  str wzr,[sp, #0x100]
7102dd0e10  str x24,[sp, #0x2b0]
7102dd0e14  ldr x8,[x0]
7102dd0e18  ldr x8,[x8, #0x30]
7102dd0e1c  add x1,sp,#0x100
7102dd0e20  add x2,sp,#0x2b0
7102dd0e24  blr x8
7102dd0e28  tbz w0,#0x0,0x7102dd0e3c
7102dd0e2c  mov w0,#0x10
7102dd0e30  mov x1,x24
7102dd0e34  bl 0x710392e290
7102dd0e38  cbnz x0,0x7102dd0e40
7102dd0e3c  mov x0,xzr
7102dd0e40  ldr x24,[x19, #0x788]
7102dd0e44  ldr x22,[x19, #0x790]
7102dd0e48  add x10,x0,x23, LSL #0x3
7102dd0e4c  mov x9,x10
7102dd0e50  add x8,x0,x21, LSL #0x3
7102dd0e54  str xzr,[sp, #0x160]
7102dd0e58  cmp x22,x24
7102dd0e5c  str x25,[x9], #0x8
7102dd0e60  b.eq 0x7102dd0f84
7102dd0e64  sub x13,x22,#0x8
7102dd0e68  sub x12,x13,x24
7102dd0e6c  lsr x14,x12,#0x3
7102dd0e70  mvn x11,x14
7102dd0e74  add w14,w14,#0x1
7102dd0e78  ands x14,x14,#0x3
7102dd0e7c  b.eq 0x7102dd0eac
7102dd0e80  sub x15,x23,x14
7102dd0e84  neg x14,x14
7102dd0e88  sub x10,x10,#0x8
7102dd0e8c  mov x16,x14
7102dd0e90  ldr x17,[x13]
7102dd0e94  adds x16,x16,#0x1
7102dd0e98  str xzr,[x13], #-0x8
7102dd0e9c  str x17,[x10], #-0x8
7102dd0ea0  b.ne 0x7102dd0e90
7102dd0ea4  add x10,x0,x15, LSL #0x3
7102dd0ea8  add x22,x22,x14, LSL #0x3
7102dd0eac  add x11,x23,x11
7102dd0eb0  cmp x12,#0x18
7102dd0eb4  mov w23,#0x90
7102dd0eb8  b.cc 0x7102dd0f74
7102dd0ebc  sub x12,x22,#0x20
7102dd0ec0  sub x12,x12,x24
7102dd0ec4  tbnz w12,#0x5,0x7102dd0efc
7102dd0ec8  ldur x13,[x22, #-0x8]
7102dd0ecc  stur xzr,[x22, #-0x8]
7102dd0ed0  stur x13,[x10, #-0x8]
7102dd0ed4  ldur x13,[x22, #-0x10]
7102dd0ed8  stur xzr,[x22, #-0x10]
7102dd0edc  stur x13,[x10, #-0x10]
7102dd0ee0  ldur x13,[x22, #-0x18]
7102dd0ee4  stur xzr,[x22, #-0x18]
7102dd0ee8  stur x13,[x10, #-0x18]
7102dd0eec  ldr x13,[x22, #-0x20]!
7102dd0ef0  str xzr,[x22]
7102dd0ef4  stur x13,[x10, #-0x20]
7102dd0ef8  sub x10,x10,#0x20
7102dd0efc  cmp x12,#0x20
7102dd0f00  b.cc 0x7102dd0f74
7102dd0f04  sub x10,x10,#0x20
7102dd0f08  ldur x12,[x22, #-0x8]
7102dd0f0c  stur xzr,[x22, #-0x8]
7102dd0f10  str x12,[x10, #0x18]
7102dd0f14  ldur x12,[x22, #-0x10]
7102dd0f18  stur xzr,[x22, #-0x10]
7102dd0f1c  str x12,[x10, #0x10]
7102dd0f20  ldur x12,[x22, #-0x18]
7102dd0f24  stur xzr,[x22, #-0x18]
7102dd0f28  str x12,[x10, #0x8]
7102dd0f2c  ldur x12,[x22, #-0x20]
7102dd0f30  stur xzr,[x22, #-0x20]
7102dd0f34  str x12,[x10]
7102dd0f38  ldur x12,[x22, #-0x28]
7102dd0f3c  stur xzr,[x22, #-0x28]
7102dd0f40  stur x12,[x10, #-0x8]
7102dd0f44  ldur x12,[x22, #-0x30]
7102dd0f48  stur xzr,[x22, #-0x30]
7102dd0f4c  stur x12,[x10, #-0x10]
7102dd0f50  ldur x12,[x22, #-0x38]
7102dd0f54  stur xzr,[x22, #-0x38]
7102dd0f58  stur x12,[x10, #-0x18]
7102dd0f5c  ldr x12,[x22, #-0x40]!
7102dd0f60  str xzr,[x22]
7102dd0f64  stur x12,[x10, #-0x20]
7102dd0f68  sub x10,x10,#0x40
7102dd0f6c  cmp x24,x22
7102dd0f70  b.ne 0x7102dd0f08
7102dd0f74  ldr x24,[x19, #0x788]
7102dd0f78  ldr x22,[x19, #0x790]
7102dd0f7c  add x10,x0,x11, LSL #0x3
7102dd0f80  b 0x7102dd0f88
7102dd0f84  mov w23,#0x90
7102dd0f88  cmp x22,x24
7102dd0f8c  str x10,[x19, #0x788]
7102dd0f90  str x9,[x19, #0x790]
7102dd0f94  str x8,[x19, #0x798]
7102dd0f98  b.eq 0x7102dd0fbc
7102dd0f9c  ldr x0,[x22, #-0x8]!
7102dd0fa0  str xzr,[x22]
7102dd0fa4  cbz x0,0x7102dd0fb4
7102dd0fa8  ldr x8,[x0]
7102dd0fac  ldr x8,[x8, #0x8]
7102dd0fb0  blr x8
7102dd0fb4  cmp x24,x22
7102dd0fb8  b.ne 0x7102dd0f9c
7102dd0fbc  cbz x24,0x7102dd0fc8
7102dd0fc0  mov x0,x24
7102dd0fc4  bl 0x710392eb40
7102dd0fc8  ldr x0,[sp, #0x160]
7102dd0fcc  str xzr,[sp, #0x160]
7102dd0fd0  cbz x0,0x7102dd1084
7102dd0fd4  ldr x8,[x0]
7102dd0fd8  ldr x8,[x8, #0x8]
7102dd0fdc  blr x8
7102dd0fe0  ldrb w8,[x19, #0x974]
7102dd0fe4  cbnz w8,0x7102dd108c
7102dd0fe8  b 0x7102dd0d58
7102dd0fec  cbz x21,0x7102dd1388
7102dd0ff0  add x0,x21,#0x108
7102dd0ff4  strb wzr,[x21, #0x110]
7102dd0ff8  bl 0x71025e9d50
7102dd0ffc  ldrb w8,[x21, #0x118]
7102dd1000  orr w8,w8,#0x1
7102dd1004  strb w8,[x21, #0x118]
7102dd1008  ldrb w8,[x21, #0xe0]
7102dd100c  cbz w8,0x7102dd1020
7102dd1010  ldr x8,[x21, #0xc8]
7102dd1014  cbz x8,0x7102dd1020
7102dd1018  mov w9,#0x101
7102dd101c  strh w9,[x8, #0x30]
7102dd1020  ldr x8,[x21, #0xd8]
7102dd1024  cbz x8,0x7102dd1030
7102dd1028  mov w9,#0x1
7102dd102c  strb w9,[x8, #0x21]
7102dd1030  ldrb w8,[x21, #0xe0]
7102dd1034  cbz w8,0x7102dd1388
7102dd1038  ldr x8,[x21, #0xb0]
7102dd103c  strb wzr,[x8, #0x10]
7102dd1040  b 0x7102dd1388
7102dd1044  mov x0,xzr
7102dd1048  b 0x7102dd0e48
7102dd104c  ldr x9,[x19, #0x310]
7102dd1050  ldp x8,x9,[x9, #0xd0]
7102dd1054  cmp x8,x9
7102dd1058  b.eq 0x7102dd1084
7102dd105c  ldr w10,[x8, #0x8]
7102dd1060  cmp w10,#0x1
7102dd1064  b.hi 0x7102dd1078
7102dd1068  ldr x21,[x8]
7102dd106c  ldr x10,[x21, #0x68]
7102dd1070  cmp x10,x26
7102dd1074  b.eq 0x7102dd13a4
7102dd1078  add x8,x8,#0x10
7102dd107c  cmp x9,x8
7102dd1080  b.ne 0x7102dd105c
7102dd1084  ldrb w8,[x19, #0x974]
7102dd1088  cbz w8,0x7102dd0d58
7102dd108c  ldr x8,[x19, #0x9d8]
7102dd1090  mov w0,#0x10
7102dd1094  orr w1,wzr,#0x70
7102dd1098  madd x24,x28,x23,x8
7102dd109c  bl 0x710392e290
7102dd10a0  mov x25,x0
7102dd10a4  cbnz x0,0x7102dd10f0
7102dd10a8  adrp x8,0x7105332000
7102dd10ac  ldr x0,[x8, #0xf00]
7102dd10b0  cbz x0,0x7102dd10ec
7102dd10b4  orr w8,wzr,#0x70
7102dd10b8  str wzr,[sp, #0x160]
7102dd10bc  add x1,sp,#0x160
7102dd10c0  str x8,[sp, #0x2b0]
7102dd10c4  ldr x8,[x0]
7102dd10c8  ldr x8,[x8, #0x30]
7102dd10cc  add x2,sp,#0x2b0
7102dd10d0  blr x8
7102dd10d4  tbz w0,#0x0,0x7102dd10ec
7102dd10d8  mov w0,#0x10
7102dd10dc  orr w1,wzr,#0x70
7102dd10e0  bl 0x710392e290
7102dd10e4  mov x25,x0
7102dd10e8  cbnz x0,0x7102dd10f0
7102dd10ec  mov x25,xzr
7102dd10f0  ldur x2,[x29, #-0x58]
7102dd10f4  cmp x28,#0x0
7102dd10f8  cset w3,ne
7102dd10fc  mov x0,x25
7102dd1100  mov x1,x19
7102dd1104  mov x4,x24
7102dd1108  bl 0x7102ddac30
7102dd110c  str x25,[sp, #0x160]
7102dd1110  ldr x22,[x19, #0x778]
7102dd1114  ldr x8,[x19, #0x780]
7102dd1118  cmp x22,x8
7102dd111c  b.cs 0x7102dd113c
7102dd1120  str xzr,[sp, #0x160]
7102dd1124  str x25,[x22]
7102dd1128  ldr x8,[x19, #0x778]
7102dd112c  add x8,x8,#0x8
7102dd1130  str x8,[x19, #0x778]
7102dd1134  str xzr,[sp, #0x160]
7102dd1138  b 0x7102dd1388
7102dd113c  ldr x9,[sp, #0x80]
7102dd1140  ldr x24,[x9]
7102dd1144  sub x9,x22,x24
7102dd1148  asr x23,x9,#0x3
7102dd114c  add x9,x23,#0x1
7102dd1150  lsr x10,x9,#0x3d
7102dd1154  cbnz x10,0x7102dd1700
7102dd1158  sub x8,x8,x24
7102dd115c  asr x10,x8,#0x3
7102dd1160  orr x11,xzr,#0xffffffffffffffe
7102dd1164  cmp x10,x11
7102dd1168  b.hi 0x7102dd1188
7102dd116c  asr x8,x8,#0x2
7102dd1170  cmp x8,x9
7102dd1174  csel x21,x9,x8,cc
7102dd1178  cbz x21,0x7102dd1404
7102dd117c  lsr x8,x21,#0x3d
7102dd1180  cbz x8,0x7102dd118c
7102dd1184  b 0x7102dd16ec
7102dd1188  orr x21,xzr,#0x1fffffffffffffff
7102dd118c  lsl x8,x21,#0x3
7102dd1190  cmp x8,#0x0
7102dd1194  csinc x24,x8,xzr,ne
7102dd1198  mov w0,#0x10
7102dd119c  mov x1,x24
7102dd11a0  bl 0x710392e290
7102dd11a4  cbnz x0,0x7102dd11e8
7102dd11a8  adrp x8,0x7105332000
7102dd11ac  ldr x0,[x8, #0xf00]
7102dd11b0  cbz x0,0x7102dd11e4
7102dd11b4  str wzr,[sp, #0x100]
7102dd11b8  str x24,[sp, #0x2b0]
7102dd11bc  ldr x8,[x0]
7102dd11c0  ldr x8,[x8, #0x30]
7102dd11c4  add x1,sp,#0x100
7102dd11c8  add x2,sp,#0x2b0
7102dd11cc  blr x8
7102dd11d0  tbz w0,#0x0,0x7102dd11e4
7102dd11d4  mov w0,#0x10
7102dd11d8  mov x1,x24
7102dd11dc  bl 0x710392e290
7102dd11e0  cbnz x0,0x7102dd11e8
7102dd11e4  mov x0,xzr
7102dd11e8  ldr x24,[x19, #0x770]
7102dd11ec  ldr x22,[x19, #0x778]
7102dd11f0  add x10,x0,x23, LSL #0x3
7102dd11f4  mov x9,x10
7102dd11f8  add x8,x0,x21, LSL #0x3
7102dd11fc  str xzr,[sp, #0x160]
7102dd1200  cmp x22,x24
7102dd1204  str x25,[x9], #0x8
7102dd1208  b.eq 0x7102dd132c
7102dd120c  sub x13,x22,#0x8
7102dd1210  sub x12,x13,x24
7102dd1214  lsr x14,x12,#0x3
7102dd1218  mvn x11,x14
7102dd121c  add w14,w14,#0x1
7102dd1220  ands x14,x14,#0x3
7102dd1224  b.eq 0x7102dd1254
7102dd1228  sub x15,x23,x14
7102dd122c  neg x14,x14
7102dd1230  sub x10,x10,#0x8
7102dd1234  mov x16,x14
7102dd1238  ldr x17,[x13]
7102dd123c  adds x16,x16,#0x1
7102dd1240  str xzr,[x13], #-0x8
7102dd1244  str x17,[x10], #-0x8
7102dd1248  b.ne 0x7102dd1238
7102dd124c  add x10,x0,x15, LSL #0x3
7102dd1250  add x22,x22,x14, LSL #0x3
7102dd1254  add x11,x23,x11
7102dd1258  cmp x12,#0x18
7102dd125c  mov w23,#0x90
7102dd1260  b.cc 0x7102dd131c
7102dd1264  sub x12,x22,#0x20
7102dd1268  sub x12,x12,x24
7102dd126c  tbnz w12,#0x5,0x7102dd12a4
7102dd1270  ldur x13,[x22, #-0x8]
7102dd1274  stur xzr,[x22, #-0x8]
7102dd1278  stur x13,[x10, #-0x8]
7102dd127c  ldur x13,[x22, #-0x10]
7102dd1280  stur xzr,[x22, #-0x10]
7102dd1284  stur x13,[x10, #-0x10]
7102dd1288  ldur x13,[x22, #-0x18]
7102dd128c  stur xzr,[x22, #-0x18]
7102dd1290  stur x13,[x10, #-0x18]
7102dd1294  ldr x13,[x22, #-0x20]!
7102dd1298  str xzr,[x22]
7102dd129c  stur x13,[x10, #-0x20]
7102dd12a0  sub x10,x10,#0x20
7102dd12a4  cmp x12,#0x20
7102dd12a8  b.cc 0x7102dd131c
7102dd12ac  sub x10,x10,#0x20
7102dd12b0  ldur x12,[x22, #-0x8]
7102dd12b4  stur xzr,[x22, #-0x8]
7102dd12b8  str x12,[x10, #0x18]
7102dd12bc  ldur x12,[x22, #-0x10]
7102dd12c0  stur xzr,[x22, #-0x10]
7102dd12c4  str x12,[x10, #0x10]
7102dd12c8  ldur x12,[x22, #-0x18]
7102dd12cc  stur xzr,[x22, #-0x18]
7102dd12d0  str x12,[x10, #0x8]
7102dd12d4  ldur x12,[x22, #-0x20]
7102dd12d8  stur xzr,[x22, #-0x20]
7102dd12dc  str x12,[x10]
7102dd12e0  ldur x12,[x22, #-0x28]
7102dd12e4  stur xzr,[x22, #-0x28]
7102dd12e8  stur x12,[x10, #-0x8]
7102dd12ec  ldur x12,[x22, #-0x30]
7102dd12f0  stur xzr,[x22, #-0x30]
7102dd12f4  stur x12,[x10, #-0x10]
7102dd12f8  ldur x12,[x22, #-0x38]
7102dd12fc  stur xzr,[x22, #-0x38]
7102dd1300  stur x12,[x10, #-0x18]
7102dd1304  ldr x12,[x22, #-0x40]!
7102dd1308  str xzr,[x22]
7102dd130c  stur x12,[x10, #-0x20]
7102dd1310  sub x10,x10,#0x40
7102dd1314  cmp x24,x22
7102dd1318  b.ne 0x7102dd12b0
7102dd131c  ldr x24,[x19, #0x770]
7102dd1320  ldr x22,[x19, #0x778]
7102dd1324  add x10,x0,x11, LSL #0x3
7102dd1328  b 0x7102dd1330
7102dd132c  mov w23,#0x90
7102dd1330  cmp x22,x24
7102dd1334  str x10,[x19, #0x770]
7102dd1338  str x9,[x19, #0x778]
7102dd133c  str x8,[x19, #0x780]
7102dd1340  b.eq 0x7102dd1364
7102dd1344  ldr x0,[x22, #-0x8]!
7102dd1348  str xzr,[x22]
7102dd134c  cbz x0,0x7102dd135c
7102dd1350  ldr x8,[x0]
7102dd1354  ldr x8,[x8, #0x8]
7102dd1358  blr x8
7102dd135c  cmp x24,x22
7102dd1360  b.ne 0x7102dd1344
7102dd1364  cbz x24,0x7102dd1370
7102dd1368  mov x0,x24
7102dd136c  bl 0x710392eb40
7102dd1370  ldr x0,[sp, #0x160]
7102dd1374  str xzr,[sp, #0x160]
7102dd1378  cbz x0,0x7102dd1388
7102dd137c  ldr x8,[x0]
7102dd1380  ldr x8,[x8, #0x8]
7102dd1384  blr x8
7102dd1388  add x28,x28,#0x1
7102dd138c  cmp x28,x27
7102dd1390  b.eq 0x7102dd140c
7102dd1394  ldrb w8,[x19, #0x974]
7102dd1398  tst w8,#0xff
7102dd139c  b.ne 0x7102dd0ca8
7102dd13a0  b 0x7102dd104c
7102dd13a4  cbz x21,0x7102dd1084
7102dd13a8  add x0,x21,#0x108
7102dd13ac  strb wzr,[x21, #0x110]
7102dd13b0  bl 0x71025e9d50
7102dd13b4  ldrb w8,[x21, #0x118]
7102dd13b8  orr w8,w8,#0x1
7102dd13bc  strb w8,[x21, #0x118]
7102dd13c0  ldrb w8,[x21, #0xe0]
7102dd13c4  cbz w8,0x7102dd13d8
7102dd13c8  ldr x8,[x21, #0xc8]
7102dd13cc  cbz x8,0x7102dd13d8
7102dd13d0  mov w9,#0x101
7102dd13d4  strh w9,[x8, #0x30]
7102dd13d8  ldr x8,[x21, #0xd8]
7102dd13dc  cbz x8,0x7102dd13e8
7102dd13e0  mov w9,#0x1
7102dd13e4  strb w9,[x8, #0x21]
7102dd13e8  ldrb w8,[x21, #0xe0]
7102dd13ec  cbz w8,0x7102dd1084
7102dd13f0  ldr x8,[x21, #0xb0]
7102dd13f4  strb wzr,[x8, #0x10]
7102dd13f8  ldrb w8,[x19, #0x974]
7102dd13fc  cbnz w8,0x7102dd108c
7102dd1400  b 0x7102dd0d58
7102dd1404  mov x0,xzr
7102dd1408  b 0x7102dd11f0
7102dd140c  mov w1,#0x48
7102dd1410  mov w0,#0x10
7102dd1414  bl 0x710392e290
7102dd1418  mov x20,x0
7102dd141c  cbnz x0,0x7102dd1468
7102dd1420  adrp x8,0x7105332000
7102dd1424  ldr x0,[x8, #0xf00]
7102dd1428  cbz x0,0x7102dd1464
7102dd142c  mov w8,#0x48
7102dd1430  str wzr,[sp, #0x160]
7102dd1434  add x1,sp,#0x160
7102dd1438  str x8,[sp, #0x2b0]
7102dd143c  ldr x8,[x0]
7102dd1440  ldr x8,[x8, #0x30]
7102dd1444  add x2,sp,#0x2b0
7102dd1448  blr x8
7102dd144c  tbz w0,#0x0,0x7102dd1464
7102dd1450  mov w1,#0x48
7102dd1454  mov w0,#0x10
7102dd1458  bl 0x710392e290
7102dd145c  mov x20,x0
7102dd1460  cbnz x0,0x7102dd1468
7102dd1464  mov x20,xzr
7102dd1468  mov w8,#0x20
7102dd146c  str x8,[sp, #0x2b0]
7102dd1470  mov x8,#0x1
7102dd1474  mov x9,#0x100000001
7102dd1478  add x2,sp,#0x2b0
7102dd147c  mov x0,x20
7102dd1480  movk x8,#0x10, LSL #32
7102dd1484  mov x1,x19
7102dd1488  str x9,[sp, #0x2b8]
7102dd148c  str x8,[sp, #0x2c0]
7102dd1490  bl 0x710313e6a0
7102dd1494  adrp x8,0x710513c000
7102dd1498  add x8,x8,#0xb70
7102dd149c  str x8,[x20]
7102dd14a0  strb wzr,[x20, #0x43]
7102dd14a4  str x20,[x19, #0x968]
7102dd14a8  ldr x8,[x20, #0x38]
7102dd14ac  cbz x8,0x7102dd15b4
7102dd14b0  ldr x0,[x8, #0x130]
7102dd14b4  ldr x8,[x0]
7102dd14b8  ldr x8,[x8, #0x1c8]
7102dd14bc  blr x8
7102dd14c0  mov w8,#0x1a06
7102dd14c4  movk w8,#0x12, LSL #16
7102dd14c8  str wzr,[x0, #0x300]
7102dd14cc  str x8,[x0, #0x60]
7102dd14d0  adrp x8,0x7104467000
7102dd14d4  ldr q0,[x8, #0x860]
7102dd14d8  adrp x8,0x7104469000
7102dd14dc  ldr q1,[x8, #0x450]
7102dd14e0  mov x8,#0x1fca
7102dd14e4  movk x8,#0x1ed9, LSL #16
7102dd14e8  movk x8,#0x3, LSL #32
7102dd14ec  str x8,[x0, #0x70]
7102dd14f0  adrp x8,0x7104465000
7102dd14f4  mov w9,#0x1
7102dd14f8  str wzr,[x0, #0x68]
7102dd14fc  stp xzr,xzr,[x0, #0x78]
7102dd1500  strb w9,[x0, #0x304]
7102dd1504  stp q0,q1,[x0, #0x2d0]
7102dd1508  ldr q0,[x8, #0xb70]
7102dd150c  mov w8,#0x4
7102dd1510  add x9,x0,#0x305
7102dd1514  strh w8,[x0, #0x2c0]
7102dd1518  str q0,[x0, #0x2f0]
7102dd151c  ldrh w10,[sp, #0x2b0]
7102dd1520  ldrb w11,[sp, #0x2b2]
7102dd1524  strh w10,[x9]
7102dd1528  mov x9,#-0x3dcc000000000000
7102dd152c  strh w8,[x0, #0x268]
7102dd1530  add x8,x0,#0x26c
7102dd1534  strb w11,[x0, #0x307]
7102dd1538  strb wzr,[x0, #0x310]
7102dd153c  str x9,[x0, #0x308]
7102dd1540  str x9,[x8]
7102dd1544  strb wzr,[x0, #0x288]
7102dd1548  ldr x8,[x20, #0x38]
7102dd154c  cbz x8,0x7102dd15b4
7102dd1550  ldr x0,[x8, #0x130]
7102dd1554  ldr x8,[x0]
7102dd1558  ldr x8,[x8, #0x1c8]
7102dd155c  blr x8
7102dd1560  bl 0x7103148ab0
7102dd1564  ldr x8,[x20, #0x38]
7102dd1568  cbz x8,0x7102dd15b4
7102dd156c  ldr x0,[x8, #0x130]
7102dd1570  ldr x8,[x0]
7102dd1574  ldr x8,[x8, #0x1c8]
7102dd1578  blr x8
7102dd157c  ldr x8,[x0]
7102dd1580  ldr x8,[x8, #0x108]
7102dd1584  mov w1,wzr
7102dd1588  blr x8
7102dd158c  ldr x8,[x20, #0x38]
7102dd1590  cbz x8,0x7102dd15b4
7102dd1594  mov w21,w0
7102dd1598  ldr x0,[x8, #0x130]
7102dd159c  ldr x8,[x0]
7102dd15a0  ldr x8,[x8, #0x1c8]
7102dd15a4  blr x8
7102dd15a8  ldrh w8,[x0, #0x2a0]
7102dd15ac  cbz w8,0x7102dd15b4
7102dd15b0  str w21,[x0, #0x2a4]
7102dd15b4  mov x0,x20
7102dd15b8  bl 0x710313ef20
7102dd15bc  ldr x8,[x20, #0x30]
7102dd15c0  cbz x8,0x7102dd15cc
7102dd15c4  ldrb w8,[x8, #0x10]
7102dd15c8  cbnz w8,0x7102dd15d4
7102dd15cc  mov x0,x20
7102dd15d0  bl 0x710313f0a0
7102dd15d4  mov w8,#0x1
7102dd15d8  strb w8,[x20, #0x43]
7102dd15dc  ldr x8,[x19, #0x300]
7102dd15e0  ldr x9,[x8, #0x18]
7102dd15e4  ldp x8,x9,[x9]
7102dd15e8  cmp x8,x9
7102dd15ec  b.eq 0x7102dd163c
7102dd15f0  mov x10,#0xdf99
7102dd15f4  movk x10,#0xb569, LSL #16
7102dd15f8  movk x10,#0x7, LSL #32
7102dd15fc  ldr x11,[x8], #0x8
7102dd1600  ldr x12,[x11, #0xa0]
7102dd1604  and x12,x12,#0xffffffffff
7102dd1608  cmp x12,x10
7102dd160c  b.eq 0x7102dd161c
7102dd1610  cmp x9,x8
7102dd1614  b.ne 0x7102dd15fc
7102dd1618  b 0x7102dd163c
7102dd161c  cbz x11,0x7102dd163c
7102dd1620  ldr x19,[x11, #0x130]
7102dd1624  cbz x19,0x7102dd1640
7102dd1628  ldp x0,x1,[x19]
7102dd162c  adrp x2,0x71042a1000
7102dd1630  add x2,x2,#0x67e
7102dd1634  bl 0x71025f5420
7102dd1638  b 0x7102dd1640
7102dd163c  mov x19,xzr
7102dd1640  adrp x8,0x7105314000
7102dd1644  add x8,x8,#0x4d8
7102dd1648  ldarb w8,[x8]
7102dd164c  tbz w8,#0x0,0x7102dd16ac
7102dd1650  adrp x8,0x71052c5000
7102dd1654  ldrb w8,[x8, #0x1ba]
7102dd1658  cbz w8,0x7102dd1674
7102dd165c  cbz x19,0x7102dd1688
7102dd1660  ldp x0,x1,[x19]
7102dd1664  adrp x2,0x71043bc000
7102dd1668  add x2,x2,#0xb6c
7102dd166c  bl 0x71025f5420
7102dd1670  b 0x7102dd1688
7102dd1674  cbz x19,0x7102dd1688
7102dd1678  ldp x0,x1,[x19]
7102dd167c  adrp x2,0x71043bc000
7102dd1680  add x2,x2,#0xb6c
7102dd1684  bl 0x71025f55b0
7102dd1688  add sp,sp,#0x430
7102dd168c  ldp x29,x30,[sp, #0x60]
7102dd1690  ldp x20,x19,[sp, #0x50]
7102dd1694  ldp x22,x21,[sp, #0x40]
7102dd1698  ldp x24,x23,[sp, #0x30]
7102dd169c  ldp x26,x25,[sp, #0x20]
7102dd16a0  ldp x28,x27,[sp, #0x10]
7102dd16a4  ldr d8,[sp], #0x70
7102dd16a8  ret
7102dd16ac  adrp x0,0x7105314000
7102dd16b0  add x0,x0,#0x4d8
7102dd16b4  bl 0x71039c06b0
7102dd16b8  cbz w0,0x7102dd1650
7102dd16bc  bl 0x7101764000
7102dd16c0  adrp x0,0x7101763000
7102dd16c4  add x0,x0,#0xc40
7102dd16c8  adrp x1,0x71052c5000
7102dd16cc  add x1,x1,#0x180
7102dd16d0  adrp x2,0x7104f17000
7102dd16d4  add x2,x2,#0x0
7102dd16d8  bl 0x71000001c0
7102dd16dc  adrp x0,0x7105314000
7102dd16e0  add x0,x0,#0x4d8
7102dd16e4  bl 0x71039c06c0
7102dd16e8  b 0x7102dd1650
7102dd16ec  bl 0x71039c2650
7102dd16f0  mov x0,x22
7102dd16f4  bl 0x71039c1330
7102dd16f8  ldr x0,[sp, #0x90]
7102dd16fc  bl 0x71039c0c00
7102dd1700  ldr x0,[sp, #0x80]
7102dd1704  bl 0x71039c0c00
7102dd1708  mov x0,x22
7102dd170c  bl 0x71039c0c00
7102dd1710  ldr x0,[sp, #0x60]
7102dd1714  bl 0x71039c0c00
