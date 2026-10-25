// addr:      71019ceb30
// offset:    0x19ceb30
// name:      FUN_71019ceb30
// mangled:   
// size:      4344

71019ceb30  stp x28,x27,[sp, #-0x60]!
71019ceb34  stp x26,x25,[sp, #0x10]
71019ceb38  stp x24,x23,[sp, #0x20]
71019ceb3c  stp x22,x21,[sp, #0x30]
71019ceb40  stp x20,x19,[sp, #0x40]
71019ceb44  stp x29,x30,[sp, #0x50]
71019ceb48  add x29,sp,#0x50
71019ceb4c  sub sp,sp,#0x210
71019ceb50  adrp x8,0x71050a7000
71019ceb54  add x8,x8,#0xc00
71019ceb58  mov x27,x1
71019ceb5c  stp x8,xzr,[x0]
71019ceb60  orr x8,xzr,#0x1ffffffff
71019ceb64  stp xzr,x8,[x0, #0x60]
71019ceb68  mov w8,#0x1
71019ceb6c  mov x19,x0
71019ceb70  stp xzr,xzr,[x0, #0x10]
71019ceb74  mov x24,x2
71019ceb78  strb wzr,[x0, #0x58]
71019ceb7c  str x1,[x0, #0x78]
71019ceb80  mov w1,#0x170
71019ceb84  strb w8,[x0, #0x70]
71019ceb88  stp xzr,xzr,[x0, #0x48]
71019ceb8c  mov w0,#0x10
71019ceb90  bl 0x710392e290
71019ceb94  mov x20,x0
71019ceb98  cbnz x0,0x71019cebe4
71019ceb9c  adrp x8,0x7105332000
71019ceba0  ldr x0,[x8, #0xf00]
71019ceba4  cbz x0,0x71019cebe0
71019ceba8  mov w8,#0x170
71019cebac  str wzr,[sp, #0x70]
71019cebb0  add x1,sp,#0x70
71019cebb4  str x8,[sp, #0xd0]
71019cebb8  ldr x8,[x0]
71019cebbc  ldr x8,[x8, #0x30]
71019cebc0  add x2,sp,#0xd0
71019cebc4  blr x8
71019cebc8  tbz w0,#0x0,0x71019cebe0
71019cebcc  mov w1,#0x170
71019cebd0  mov w0,#0x10
71019cebd4  bl 0x710392e290
71019cebd8  mov x20,x0
71019cebdc  cbnz x0,0x71019cebe4
71019cebe0  mov x20,xzr
71019cebe4  mov w8,#0x1000
71019cebe8  str w8,[x20, #0x8]
71019cebec  mov x8,x20
71019cebf0  str xzr,[x8, #0x10]!
71019cebf4  str x8,[sp, #0x18]
71019cebf8  mov x8,x20
71019cebfc  mov x25,x20
71019cec00  stp xzr,xzr,[x20, #0x18]
71019cec04  mov w21,#0xffffffff
71019cec08  stp xzr,xzr,[x20, #0x38]
71019cec0c  add x23,x20,#0x100
71019cec10  mov x0,x23
71019cec14  add x28,x20,#0x50
71019cec18  str xzr,[x8, #0x30]!
71019cec1c  str x8,[x20, #0x28]
71019cec20  adrp x8,0x71050a7000
71019cec24  add x8,x8,#0xae0
71019cec28  add x9,x8,#0x58
71019cec2c  str x9,[x25, #0x48]!
71019cec30  str x8,[x20]
71019cec34  orr x8,xzr,#-0x100000000
71019cec38  stur x8,[x20, #0xe4]
71019cec3c  mov x8,x20
71019cec40  stp xzr,xzr,[x20, #0x60]
71019cec44  stp wzr,w21,[x20, #0xec]
71019cec48  strb wzr,[x20, #0xf4]
71019cec4c  str wzr,[x20, #0xe0]
71019cec50  stp x20,xzr,[x20, #0x50]
71019cec54  stp xzr,xzr,[x20, #0xd0]
71019cec58  stp xzr,xzr,[x20, #0xc0]
71019cec5c  stp xzr,xzr,[x20, #0xb0]
71019cec60  stp xzr,xzr,[x20, #0xa0]
71019cec64  stp xzr,xzr,[x20, #0x90]
71019cec68  stp xzr,xzr,[x20, #0x80]
71019cec6c  stp xzr,xzr,[x20, #0x70]
71019cec70  str xzr,[x8, #0xf8]!
71019cec74  str x8,[sp, #0x28]
71019cec78  bl 0x71032cc410
71019cec7c  mov x8,#0xff0000000000
71019cec80  movk x8,#0x5aff, LSL #48
71019cec84  mov w9,#0x100
71019cec88  stp xzr,x8,[x20, #0x138]
71019cec8c  strh w9,[x20, #0x168]
71019cec90  stp x8,x8,[x20, #0x148]
71019cec94  adrp x9,0x71019cc000
71019cec98  add x9,x9,#0x3e0
71019cec9c  mov x0,x28
71019ceca0  add x26,x20,#0x128
71019ceca4  stp x8,xzr,[x20, #0x158]
71019ceca8  adrp x8,0x71019cc000
71019cecac  add x8,x8,#0x3f0
71019cecb0  stur xzr,[x20, #0xdc]
71019cecb4  stur xzr,[x20, #0xd4]
71019cecb8  stur xzr,[x20, #0xcc]
71019cecbc  stur xzr,[x20, #0xc4]
71019cecc0  stur xzr,[x20, #0xbc]
71019cecc4  stur xzr,[x20, #0xb4]
71019cecc8  stur xzr,[x20, #0xac]
71019ceccc  stur xzr,[x20, #0xa4]
71019cecd0  stur xzr,[x20, #0x9c]
71019cecd4  stp wzr,w21,[x20, #0xe4]
71019cecd8  stp wzr,w21,[x20, #0xec]
71019cecdc  strb wzr,[x20, #0xf4]
71019cece0  str wzr,[x20, #0x98]
71019cece4  stp xzr,xzr,[x20, #0x128]
71019cece8  stp x9,xzr,[x20, #0x78]
71019cecec  stp x8,xzr,[x20, #0x88]
71019cecf0  stp xzr,xzr,[x20, #0x58]
71019cecf4  bl 0x71019cc910
71019cecf8  mov x3,#0x3fc6
71019cecfc  movk x3,#0xa5c1, LSL #16
71019ced00  adrp x2,0x71050a7000
71019ced04  add x2,x2,#0xb68
71019ced08  movk x3,#0x2f, LSL #32
71019ced0c  str x20,[x19, #0x80]
71019ced10  mov w4,#0x1
71019ced14  mov x0,x20
71019ced18  mov x1,x27
71019ced1c  bl 0x71032cb040
71019ced20  add x0,sp,#0xd0
71019ced24  mov x1,x24
71019ced28  bl 0x7103275200
71019ced2c  ldr x0,[x20, #0x128]
71019ced30  cbz x0,0x71019ced44
71019ced34  str x0,[x20, #0x130]
71019ced38  bl 0x710392eb40
71019ced3c  stp xzr,xzr,[x26, #0x8]
71019ced40  str xzr,[x26]
71019ced44  ldr x8,[sp, #0xd0]
71019ced48  str x8,[x20, #0x128]
71019ced4c  ldp x8,x22,[sp, #0xd8]
71019ced50  stp x8,x22,[x20, #0x130]
71019ced54  adrp x8,0x710532f000
71019ced58  ldr x8,[x8, #0x730]
71019ced5c  ldr x8,[x8, #0x8]
71019ced60  ldr x21,[x24, #0x58]
71019ced64  mov x1,x21
71019ced68  add x0,x8,#0x230
71019ced6c  bl 0x710328bb80
71019ced70  str x23,[sp, #0x20]
71019ced74  tbz w0,#0x0,0x71019ced90
71019ced78  ldr x8,[x20, #0x130]
71019ced7c  add x23,x20,#0x130
71019ced80  cmp x8,x22
71019ced84  b.eq 0x71019cee48
71019ced88  str x21,[x8]
71019ced8c  b 0x71019cee38
71019ced90  mov x0,x21
71019ced94  bl 0x71017979d0
71019ced98  add x23,x20,#0x130
71019ced9c  tbnz w0,#0x0,0x71019cef3c
71019ceda0  ldp x27,x8,[x20, #0x128]
71019ceda4  cmp x27,x8
71019ceda8  b.eq 0x71019cee24
71019cedac  ldr x10,[x24, #0x58]
71019cedb0  mov x9,#0x5a00000000000000
71019cedb4  tst x10,#0xffffffffff
71019cedb8  and x11,x10,#-0x100000000000000
71019cedbc  cset w12,ne
71019cedc0  cset w13,eq
71019cedc4  cmp x11,x9
71019cedc8  cset w11,eq
71019cedcc  and w11,w11,w12
71019cedd0  cset w12,ne
71019cedd4  orr w13,w12,w13
71019cedd8  mov x12,x27
71019ceddc  ldr x14,[x12]
71019cede0  and x16,x14,#-0x100000000000000
71019cede4  and x15,x14,#0xffffffffff
71019cede8  cmp x16,x9
71019cedec  ccmp x15,#0x0,#0x4,eq
71019cedf0  b.ne 0x71019cedfc
71019cedf4  tbz w13,#0x0,0x71019cee0c
71019cedf8  b 0x71019cee1c
71019cedfc  cbz w11,0x71019cee0c
71019cee00  eor x14,x10,x14
71019cee04  tst x14,#0xffffffffff
71019cee08  b.eq 0x71019cee1c
71019cee0c  add x12,x12,#0x8
71019cee10  cmp x8,x12
71019cee14  b.ne 0x71019ceddc
71019cee18  mov x12,x8
71019cee1c  cmp x12,x8
71019cee20  b.ne 0x71019cef3c
71019cee24  ldr x9,[x20, #0x138]
71019cee28  cmp x9,x8
71019cee2c  b.eq 0x71019cfb18
71019cee30  ldr x9,[x24, #0x58]
71019cee34  str x9,[x8]
71019cee38  ldr x8,[x23]
71019cee3c  add x8,x8,#0x8
71019cee40  str x8,[x23]
71019cee44  b 0x71019cef3c
71019cee48  ldr x10,[x26]
71019cee4c  sub x2,x22,x10
71019cee50  asr x27,x2,#0x3
71019cee54  add x8,x27,#0x1
71019cee58  lsr x9,x8,#0x3d
71019cee5c  cbnz x9,0x71019cfc20
71019cee60  orr x9,xzr,#0xffffffffffffffe
71019cee64  cmp x27,x9
71019cee68  str x10,[sp, #0x10]
71019cee6c  b.hi 0x71019cee90
71019cee70  asr x9,x2,#0x2
71019cee74  cmp x9,x8
71019cee78  csel x28,x8,x9,cc
71019cee7c  cbz x28,0x71019cfb58
71019cee80  lsr x8,x28,#0x3d
71019cee84  str x2,[sp, #0x8]
71019cee88  cbz x8,0x71019cee98
71019cee8c  bl 0x71039c2650
71019cee90  str x2,[sp, #0x8]
71019cee94  orr x28,xzr,#0x1fffffffffffffff
71019cee98  lsl x8,x28,#0x3
71019cee9c  cmp x8,#0x0
71019ceea0  csinc x21,x8,xzr,ne
71019ceea4  mov w0,#0x10
71019ceea8  mov x1,x21
71019ceeac  bl 0x710392e290
71019ceeb0  mov x22,x0
71019ceeb4  cbnz x0,0x71019ceefc
71019ceeb8  adrp x8,0x7105332000
71019ceebc  ldr x0,[x8, #0xf00]
71019ceec0  cbz x0,0x71019ceef8
71019ceec4  str wzr,[sp, #0x70]
71019ceec8  str x21,[sp, #0xd0]
71019ceecc  ldr x8,[x0]
71019ceed0  ldr x8,[x8, #0x30]
71019ceed4  add x1,sp,#0x70
71019ceed8  add x2,sp,#0xd0
71019ceedc  blr x8
71019ceee0  tbz w0,#0x0,0x71019ceef8
71019ceee4  mov w0,#0x10
71019ceee8  mov x1,x21
71019ceeec  bl 0x710392e290
71019ceef0  mov x22,x0
71019ceef4  cbnz x0,0x71019ceefc
71019ceef8  mov x22,xzr
71019ceefc  ldr x21,[x24, #0x58]
71019cef00  ldr x2,[sp, #0x8]
71019cef04  add x24,x22,x27, LSL #0x3
71019cef08  ldr x27,[sp, #0x10]
71019cef0c  cmp x2,#0x1
71019cef10  str x21,[x24], #0x8
71019cef14  add x21,x22,x28, LSL #0x3
71019cef18  b.lt 0x71019cef28
71019cef1c  mov x0,x22
71019cef20  mov x1,x27
71019cef24  bl 0x71039c00e0
71019cef28  stp x22,x24,[x20, #0x128]
71019cef2c  str x21,[x20, #0x138]
71019cef30  cbz x27,0x71019cef3c
71019cef34  mov x0,x27
71019cef38  bl 0x710392eb40
71019cef3c  ldp x8,x9,[x20, #0x10]
71019cef40  subs x9,x9,x8
71019cef44  b.eq 0x71019cfc10
71019cef48  asr x9,x9,#0x3
71019cef4c  cmp x9,#0x1
71019cef50  b.ls 0x71019cfc10
71019cef54  ldp x21,x8,[x8]
71019cef58  str x8,[sp, #0x18]
71019cef5c  ldr x8,[x21]
71019cef60  ldr x24,[x8]
71019cef64  mov w10,#0x40
71019cef68  ldr x8,[x24], #0x8
71019cef6c  ldr x9,[x8, #0x600]
71019cef70  str w10,[x9, #0x14]
71019cef74  ldr x10,[x8, #0x600]
71019cef78  mov w9,#0xf
71019cef7c  movk w9,#0xf0, LSL #16
71019cef80  str w9,[x10, #0x18]
71019cef84  ldr x8,[x8, #0x600]
71019cef88  mov w9,#0x80
71019cef8c  str w9,[x8, #0x1c]
71019cef90  mov x8,#0x41800000
71019cef94  movk x8,#0x4248, LSL #48
71019cef98  stp xzr,x8,[sp, #0xd0]
71019cef9c  mov x8,#0x3f800000
71019cefa0  movk x8,#0x101, LSL #32
71019cefa4  movk x8,#0x1, LSL #48
71019cefa8  str x8,[sp, #0xe0]
71019cefac  mov w8,#0x1
71019cefb0  strb w8,[sp, #0xea]
71019cefb4  add x8,sp,#0xd0
71019cefb8  add x0,sp,#0xd0
71019cefbc  strh wzr,[sp, #0xe8]
71019cefc0  mov w27,#0x9dc5
71019cefc4  movk w27,#0x811c, LSL #16
71019cefc8  str xzr,[sp, #0x120]
71019cefcc  str xzr,[sp, #0x150]
71019cefd0  str xzr,[sp, #0x180]
71019cefd4  str xzr,[sp, #0x1b0]
71019cefd8  str xzr,[sp, #0x1e0]
71019cefdc  strb wzr,[sp, #0xf1]
71019cefe0  sturh wzr,[x8, #0x1f]
71019cefe4  stur wzr,[x8, #0x1b]
71019cefe8  bl 0x710337e790
71019cefec  ldr x8,[x23]
71019ceff0  ldr x9,[x26]
71019ceff4  sub x8,x8,x9
71019ceff8  lsr x8,x8,#0x3
71019ceffc  str w8,[sp, #0xd4]
71019cf000  mov w8,#0x101
71019cf004  strh w8,[sp, #0xec]
71019cf008  ldr x8,[x21]
71019cf00c  ldr x8,[x8]
71019cf010  ldr x0,[sp, #0x28]
71019cf014  adrp x2,0x710424f000
71019cf018  add x2,x2,#0xc05
71019cf01c  add x3,sp,#0xd0
71019cf020  add x1,x8,#0x8
71019cf024  mov x4,x25
71019cf028  bl 0x7103781a20
71019cf02c  mov x21,#0x6e6d
71019cf030  movk x21,#0x5f75, LSL #16
71019cf034  mov x10,#0x5f66
71019cf038  movk x10,#0x6f73, LSL #16
71019cf03c  orr x8,xzr,#0x1000000000
71019cf040  str xzr,[sp, #0xb8]
71019cf044  movk x21,#0x6d6d, LSL #32
71019cf048  movk x21,#0x6969, LSL #48
71019cf04c  strb wzr,[sp, #0x88]
71019cf050  movk x10,#0x7472, LSL #32
71019cf054  movk x10,#0x315f, LSL #48
71019cf058  str x10,[sp, #0x80]
71019cf05c  stp x8,x21,[sp, #0x70]
71019cf060  mov w9,#0x6d
71019cf064  mov w8,#0x9
71019cf068  mov w25,#0x89
71019cf06c  add x10,sp,#0x70
71019cf070  mov w11,w27
71019cf074  stp xzr,xzr,[sp, #0xc0]
71019cf078  mul w11,w11,w25
71019cf07c  and w9,w9,#0xff
71019cf080  eor w11,w11,w9
71019cf084  ldrb w9,[x10, x8, LSL ]
71019cf088  add x8,x8,#0x1
71019cf08c  cbnz w9,0x71019cf078
71019cf090  add x0,sp,#0xb8
71019cf094  add x1,sp,#0x70
71019cf098  str w11,[sp, #0x70]
71019cf09c  add x22,sp,#0x70
71019cf0a0  bl 0x71019c1c50
71019cf0a4  mov x9,#0x5f66
71019cf0a8  movk x9,#0x6f73, LSL #16
71019cf0ac  orr x8,xzr,#0x1000000000
71019cf0b0  movk x9,#0x7472, LSL #32
71019cf0b4  movk x9,#0x335f, LSL #48
71019cf0b8  strb wzr,[sp, #0x88]
71019cf0bc  stp x8,x21,[sp, #0x70]
71019cf0c0  str x9,[sp, #0x80]
71019cf0c4  mov w9,#0x6d
71019cf0c8  mov w8,#0x9
71019cf0cc  mov w10,w27
71019cf0d0  mul w10,w10,w25
71019cf0d4  and w9,w9,#0xff
71019cf0d8  eor w10,w10,w9
71019cf0dc  ldrb w9,[x22, x8, LSL ]
71019cf0e0  add x8,x8,#0x1
71019cf0e4  cbnz w9,0x71019cf0d0
71019cf0e8  ldp x8,x9,[sp, #0xc0]
71019cf0ec  cmp x8,x9
71019cf0f0  str w10,[sp, #0x70]
71019cf0f4  b.cs 0x71019cf144
71019cf0f8  add x10,sp,#0x70
71019cf0fc  mov x9,xzr
71019cf100  str wzr,[x8]
71019cf104  add x10,x10,#0x8
71019cf108  b 0x71019cf114
71019cf10c  add x9,x9,#0x2
71019cf110  strb w11,[x12, #0x9]
71019cf114  add x11,x10,x9
71019cf118  ldrb w13,[x11]
71019cf11c  cbz w13,0x71019cf158
71019cf120  add w14,w9,#0x1
71019cf124  add x12,x8,x9
71019cf128  cmp w14,#0x3f
71019cf12c  strb w13,[x12, #0x8]
71019cf130  b.cs 0x71019cf154
71019cf134  ldrb w11,[x11, #0x1]
71019cf138  cbnz w11,0x71019cf10c
71019cf13c  add x9,x9,#0x1
71019cf140  b 0x71019cf158
71019cf144  add x0,sp,#0xb8
71019cf148  add x1,sp,#0x70
71019cf14c  bl 0x71019c1c50
71019cf150  b 0x71019cf19c
71019cf154  add w9,w9,#0x1
71019cf158  add x10,x8,#0x8
71019cf15c  strb wzr,[x10, w9, UXTW ]
71019cf160  str w9,[x8, #0x4]
71019cf164  ldrb w9,[x8, #0x8]
71019cf168  mov w11,w27
71019cf16c  cbz w9,0x71019cf18c
71019cf170  add x10,x8,#0x9
71019cf174  mov w11,w27
71019cf178  mul w11,w11,w25
71019cf17c  and w9,w9,#0xff
71019cf180  eor w11,w11,w9
71019cf184  ldrb w9,[x10], #0x1
71019cf188  cbnz w9,0x71019cf178
71019cf18c  str w11,[x8]
71019cf190  ldr x8,[sp, #0xc0]
71019cf194  add x8,x8,#0x48
71019cf198  str x8,[sp, #0xc0]
71019cf19c  mov x10,#0x5f66
71019cf1a0  movk x10,#0x6f73, LSL #16
71019cf1a4  orr x8,xzr,#0x1000000000
71019cf1a8  movk x10,#0x7472, LSL #32
71019cf1ac  movk x10,#0x345f, LSL #48
71019cf1b0  strb wzr,[sp, #0x88]
71019cf1b4  mov w9,#0x6d
71019cf1b8  stp x8,x21,[sp, #0x70]
71019cf1bc  str x10,[sp, #0x80]
71019cf1c0  mov w8,#0x9
71019cf1c4  add x10,sp,#0x70
71019cf1c8  mov w11,w27
71019cf1cc  mul w11,w11,w25
71019cf1d0  and w9,w9,#0xff
71019cf1d4  eor w11,w11,w9
71019cf1d8  ldrb w9,[x10, x8, LSL ]
71019cf1dc  add x8,x8,#0x1
71019cf1e0  cbnz w9,0x71019cf1cc
71019cf1e4  ldp x8,x9,[sp, #0xc0]
71019cf1e8  cmp x8,x9
71019cf1ec  str w11,[sp, #0x70]
71019cf1f0  b.cs 0x71019cf240
71019cf1f4  add x10,sp,#0x70
71019cf1f8  mov x9,xzr
71019cf1fc  str wzr,[x8]
71019cf200  add x10,x10,#0x8
71019cf204  b 0x71019cf210
71019cf208  add x9,x9,#0x2
71019cf20c  strb w11,[x12, #0x9]
71019cf210  add x11,x10,x9
71019cf214  ldrb w13,[x11]
71019cf218  cbz w13,0x71019cf254
71019cf21c  add w14,w9,#0x1
71019cf220  add x12,x8,x9
71019cf224  cmp w14,#0x3f
71019cf228  strb w13,[x12, #0x8]
71019cf22c  b.cs 0x71019cf250
71019cf230  ldrb w11,[x11, #0x1]
71019cf234  cbnz w11,0x71019cf208
71019cf238  add x9,x9,#0x1
71019cf23c  b 0x71019cf254
71019cf240  add x0,sp,#0xb8
71019cf244  add x1,sp,#0x70
71019cf248  bl 0x71019c1c50
71019cf24c  b 0x71019cf298
71019cf250  add w9,w9,#0x1
71019cf254  add x10,x8,#0x8
71019cf258  strb wzr,[x10, w9, UXTW ]
71019cf25c  str w9,[x8, #0x4]
71019cf260  ldrb w9,[x8, #0x8]
71019cf264  mov w11,w27
71019cf268  cbz w9,0x71019cf288
71019cf26c  add x10,x8,#0x9
71019cf270  mov w11,w27
71019cf274  mul w11,w11,w25
71019cf278  and w9,w9,#0xff
71019cf27c  eor w11,w11,w9
71019cf280  ldrb w9,[x10], #0x1
71019cf284  cbnz w9,0x71019cf274
71019cf288  str w11,[x8]
71019cf28c  ldr x8,[sp, #0xc0]
71019cf290  add x8,x8,#0x48
71019cf294  str x8,[sp, #0xc0]
71019cf298  add x8,sp,#0x70
71019cf29c  add x0,x8,#0x20
71019cf2a0  stp xzr,xzr,[sp, #0x80]
71019cf2a4  bl 0x7103776290
71019cf2a8  stur xzr,[sp, #0x74]
71019cf2ac  adrp x22,0x71052a8000
71019cf2b0  ldr x22,[x22, #0xa80]
71019cf2b4  ldr q0,[x22]
71019cf2b8  ldr x8,[sp, #0x98]
71019cf2bc  adrp x1,0x71043ae000
71019cf2c0  add x1,x1,#0xcc
71019cf2c4  mov x0,x24
71019cf2c8  str q0,[sp, #0x80]
71019cf2cc  str xzr,[x8, #0x8]
71019cf2d0  mov w8,#0x2
71019cf2d4  str w8,[sp, #0x70]
71019cf2d8  add x8,sp,#0x58
71019cf2dc  bl 0x7103776640
71019cf2e0  ldr x8,[sp, #0x60]
71019cf2e4  ldr x21,[sp, #0x98]
71019cf2e8  str xzr,[sp, #0x60]
71019cf2ec  str x8,[sp, #0x98]
71019cf2f0  cbz x21,0x71019cf314
71019cf2f4  ldr x0,[x21, #0x18]
71019cf2f8  adrp x8,0x710523d000
71019cf2fc  add x8,x8,#0x9a8
71019cf300  stp x8,xzr,[x21, #0x10]
71019cf304  cbz x0,0x71019cf30c
71019cf308  bl 0x710392eb40
71019cf30c  mov x0,x21
71019cf310  bl 0x710392eb40
71019cf314  adrp x8,0x710523d000
71019cf318  add x8,x8,#0x988
71019cf31c  mov x28,x8
71019cf320  stp x8,xzr,[sp, #0x58]
71019cf324  ldr x8,[sp, #0x98]
71019cf328  ldr x8,[x8, #0x18]
71019cf32c  ldr x8,[x8]
71019cf330  cbz x8,0x71019cf34c
71019cf334  movi v0.2D,#0x0
71019cf338  add x9,x8,#0x30
71019cf33c  add x8,x8,#0x34
71019cf340  ld1 {v0.S}[0],[x9]
71019cf344  ld1 {v0.S}[1],[x8]
71019cf348  b 0x71019cf350
71019cf34c  ldr q0,[x22]
71019cf350  ldp x26,x23,[sp, #0xb8]
71019cf354  str xzr,[sp, #0x58]
71019cf358  stp xzr,xzr,[sp, #0x60]
71019cf35c  subs x21,x23,x26
71019cf360  str q0,[sp, #0x80]
71019cf364  b.eq 0x71019cf4a8
71019cf368  mov x9,#0x8e39
71019cf36c  movk x9,#0x38e3, LSL #16
71019cf370  asr x8,x21,#0x3
71019cf374  movk x9,#0xe38e, LSL #32
71019cf378  movk x9,#0x8e38, LSL #48
71019cf37c  mul x22,x8,x9
71019cf380  mov x8,#0xe38f
71019cf384  movk x8,#0x8e38, LSL #16
71019cf388  movk x8,#0x38e3, LSL #32
71019cf38c  movk x8,#0x38e, LSL #48
71019cf390  cmp x22,x8
71019cf394  b.cs 0x71019cfc18
71019cf398  mov w0,#0x10
71019cf39c  mov x1,x21
71019cf3a0  bl 0x710392e290
71019cf3a4  cbnz x0,0x71019cf3e8
71019cf3a8  adrp x8,0x7105332000
71019cf3ac  ldr x0,[x8, #0xf00]
71019cf3b0  cbz x0,0x71019cf3e4
71019cf3b4  stur wzr,[x29, #-0x70]
71019cf3b8  str x21,[sp, #0x48]
71019cf3bc  ldr x8,[x0]
71019cf3c0  ldr x8,[x8, #0x30]
71019cf3c4  sub x1,x29,#0x70
71019cf3c8  add x2,sp,#0x48
71019cf3cc  blr x8
71019cf3d0  tbz w0,#0x0,0x71019cf3e4
71019cf3d4  mov w0,#0x10
71019cf3d8  mov x1,x21
71019cf3dc  bl 0x710392e290
71019cf3e0  cbnz x0,0x71019cf3e8
71019cf3e4  mov x0,xzr
71019cf3e8  mov w8,#0x48
71019cf3ec  madd x8,x22,x8,x0
71019cf3f0  str x8,[sp, #0x68]
71019cf3f4  stp x0,x0,[sp, #0x58]
71019cf3f8  cmp x26,x23
71019cf3fc  b.ne 0x71019cf420
71019cf400  b 0x71019cf4a8
71019cf404  str w10,[x0]
71019cf408  ldr x8,[sp, #0x60]
71019cf40c  add x0,x8,#0x48
71019cf410  add x26,x26,#0x48
71019cf414  str x0,[sp, #0x60]
71019cf418  cmp x26,x23
71019cf41c  b.eq 0x71019cf4a8
71019cf420  mov x8,xzr
71019cf424  str wzr,[x0]
71019cf428  add x9,x26,x8
71019cf42c  ldrb w11,[x9, #0x8]
71019cf430  cbz w11,0x71019cf470
71019cf434  add x10,x0,x8
71019cf438  strb w11,[x10, #0x8]
71019cf43c  ldrb w11,[x9, #0x9]
71019cf440  cbz w11,0x71019cf464
71019cf444  strb w11,[x10, #0x9]
71019cf448  ldrb w9,[x9, #0xa]
71019cf44c  cbz w9,0x71019cf46c
71019cf450  add x8,x8,#0x3
71019cf454  cmp w8,#0x3f
71019cf458  strb w9,[x10, #0xa]
71019cf45c  b.cc 0x71019cf428
71019cf460  b 0x71019cf470
71019cf464  add x8,x8,#0x1
71019cf468  b 0x71019cf470
71019cf46c  add x8,x8,#0x2
71019cf470  add x9,x0,#0x8
71019cf474  strb wzr,[x9, w8, UXTW ]
71019cf478  str w8,[x0, #0x4]
71019cf47c  ldrb w8,[x0, #0x8]
71019cf480  mov w10,w27
71019cf484  cbz w8,0x71019cf404
71019cf488  add x9,x0,#0x9
71019cf48c  mov w10,w27
71019cf490  mul w10,w10,w25
71019cf494  and w8,w8,#0xff
71019cf498  eor w10,w10,w8
71019cf49c  ldrb w8,[x9], #0x1
71019cf4a0  cbnz w8,0x71019cf490
71019cf4a4  b 0x71019cf404
71019cf4a8  add x0,sp,#0x48
71019cf4ac  bl 0x7103776290
71019cf4b0  ldp x23,x22,[sp, #0x18]
71019cf4b4  add x2,sp,#0x58
71019cf4b8  add x3,sp,#0x70
71019cf4bc  add x4,sp,#0x48
71019cf4c0  mov x0,x22
71019cf4c4  mov x1,x23
71019cf4c8  bl 0x71032ccb70
71019cf4cc  ldr x21,[sp, #0x50]
71019cf4d0  stp x28,xzr,[sp, #0x48]
71019cf4d4  cbz x21,0x71019cf4f8
71019cf4d8  ldr x0,[x21, #0x18]
71019cf4dc  adrp x8,0x710523d000
71019cf4e0  add x8,x8,#0x9a8
71019cf4e4  stp x8,xzr,[x21, #0x10]
71019cf4e8  cbz x0,0x71019cf4f0
71019cf4ec  bl 0x710392eb40
71019cf4f0  mov x0,x21
71019cf4f4  bl 0x710392eb40
71019cf4f8  ldr x0,[sp, #0x58]
71019cf4fc  cbz x0,0x71019cf508
71019cf500  str x0,[sp, #0x60]
71019cf504  bl 0x710392eb40
71019cf508  adrp x1,0x7104349000
71019cf50c  add x1,x1,#0xcc1
71019cf510  add x8,sp,#0x48
71019cf514  mov x0,x24
71019cf518  bl 0x7103776640
71019cf51c  add x0,sp,#0x48
71019cf520  bl 0x71019e0b00
71019cf524  ldr x8,[x20, #0x40]
71019cf528  ldr x8,[x8]
71019cf52c  cbz x8,0x71019cf538
71019cf530  ldr x21,[x8]
71019cf534  b 0x71019cf53c
71019cf538  mov x21,xzr
71019cf53c  ldr x2,[sp, #0x28]
71019cf540  adrp x1,0x710436c000
71019cf544  add x1,x1,#0x678
71019cf548  mov x0,x21
71019cf54c  bl 0x71033744b0
71019cf550  adrp x1,0x7104291000
71019cf554  add x1,x1,#0x570
71019cf558  mov x0,x21
71019cf55c  mov x2,x22
71019cf560  bl 0x71033745a0
71019cf564  ldr x21,[x20, #0x40]
71019cf568  ldr x0,[x21]
71019cf56c  cbz x0,0x71019cf58c
71019cf570  adrp x1,0x7104349000
71019cf574  add x1,x1,#0xc43
71019cf578  adrp x2,0x710439b000
71019cf57c  add x2,x2,#0x9ac
71019cf580  mov x3,x23
71019cf584  bl 0x7103375650
71019cf588  ldr x21,[x20, #0x40]
71019cf58c  mov w0,#0x10
71019cf590  orr w1,wzr,#0x38
71019cf594  bl 0x710392e290
71019cf598  cbnz x0,0x71019cf5e0
71019cf59c  adrp x8,0x7105332000
71019cf5a0  ldr x0,[x8, #0xf00]
71019cf5a4  cbz x0,0x71019cf5dc
71019cf5a8  orr w8,wzr,#0x38
71019cf5ac  str wzr,[sp, #0x40]
71019cf5b0  add x1,sp,#0x40
71019cf5b4  stur x8,[x29, #-0x70]
71019cf5b8  ldr x8,[x0]
71019cf5bc  ldr x8,[x8, #0x30]
71019cf5c0  sub x2,x29,#0x70
71019cf5c4  blr x8
71019cf5c8  tbz w0,#0x0,0x71019cf5dc
71019cf5cc  mov w0,#0x10
71019cf5d0  orr w1,wzr,#0x38
71019cf5d4  bl 0x710392e290
71019cf5d8  cbnz x0,0x71019cf5e0
71019cf5dc  mov x0,xzr
71019cf5e0  adrp x8,0x71050a7000
71019cf5e4  add x8,x8,#0xb88
71019cf5e8  adrp x9,0x71019cd000
71019cf5ec  add x9,x9,#0xb0
71019cf5f0  str x8,[x0]
71019cf5f4  mov w8,#0x1
71019cf5f8  stp x20,xzr,[x0, #0x10]
71019cf5fc  str xzr,[x0, #0x30]
71019cf600  stp xzr,x9,[x0, #0x20]
71019cf604  adrp x1,0x7104291000
71019cf608  add x1,x1,#0x580
71019cf60c  add x2,sp,#0x40
71019cf610  str w8,[x0, #0x8]
71019cf614  str x0,[sp, #0x40]
71019cf618  mov x0,x21
71019cf61c  bl 0x7103376af0
71019cf620  ldr x0,[sp, #0x40]
71019cf624  str xzr,[sp, #0x40]
71019cf628  cbz x0,0x71019cf638
71019cf62c  ldr x8,[x0]
71019cf630  ldr x8,[x8, #0x8]
71019cf634  blr x8
71019cf638  ldr x21,[x20, #0x40]
71019cf63c  mov w1,#0x28
71019cf640  mov w0,#0x10
71019cf644  bl 0x710392e290
71019cf648  cbnz x0,0x71019cf690
71019cf64c  adrp x8,0x7105332000
71019cf650  ldr x0,[x8, #0xf00]
71019cf654  cbz x0,0x71019cf68c
71019cf658  mov w8,#0x28
71019cf65c  str wzr,[sp, #0x38]
71019cf660  add x1,sp,#0x38
71019cf664  stur x8,[x29, #-0x70]
71019cf668  ldr x8,[x0]
71019cf66c  ldr x8,[x8, #0x30]
71019cf670  sub x2,x29,#0x70
71019cf674  blr x8
71019cf678  tbz w0,#0x0,0x71019cf68c
71019cf67c  mov w1,#0x28
71019cf680  mov w0,#0x10
71019cf684  bl 0x710392e290
71019cf688  cbnz x0,0x71019cf690
71019cf68c  mov x0,xzr
71019cf690  adrp x8,0x71050a7000
71019cf694  add x8,x8,#0xbb0
71019cf698  adrp x9,0x71019cd000
71019cf69c  add x9,x9,#0x100
71019cf6a0  str x8,[x0]
71019cf6a4  str xzr,[x0, #0x20]
71019cf6a8  stp x20,x9,[x0, #0x10]
71019cf6ac  adrp x1,0x7104280000
71019cf6b0  add x1,x1,#0x3a7
71019cf6b4  str wzr,[x0, #0x8]
71019cf6b8  add x2,sp,#0x38
71019cf6bc  str x0,[sp, #0x38]
71019cf6c0  mov x0,x21
71019cf6c4  bl 0x7103376af0
71019cf6c8  ldr x0,[sp, #0x38]
71019cf6cc  str xzr,[sp, #0x38]
71019cf6d0  cbz x0,0x71019cf6e0
71019cf6d4  ldr x8,[x0]
71019cf6d8  ldr x8,[x8, #0x8]
71019cf6dc  blr x8
71019cf6e0  ldr x21,[x20, #0x40]
71019cf6e4  mov w0,#0x10
71019cf6e8  orr w1,wzr,#0x38
71019cf6ec  bl 0x710392e290
71019cf6f0  cbnz x0,0x71019cf738
71019cf6f4  adrp x8,0x7105332000
71019cf6f8  ldr x0,[x8, #0xf00]
71019cf6fc  cbz x0,0x71019cf734
71019cf700  orr w8,wzr,#0x38
71019cf704  str wzr,[sp, #0x30]
71019cf708  add x1,sp,#0x30
71019cf70c  stur x8,[x29, #-0x70]
71019cf710  ldr x8,[x0]
71019cf714  ldr x8,[x8, #0x30]
71019cf718  sub x2,x29,#0x70
71019cf71c  blr x8
71019cf720  tbz w0,#0x0,0x71019cf734
71019cf724  mov w0,#0x10
71019cf728  orr w1,wzr,#0x38
71019cf72c  bl 0x710392e290
71019cf730  cbnz x0,0x71019cf738
71019cf734  mov x0,xzr
71019cf738  adrp x23,0x71050a7000
71019cf73c  add x23,x23,#0xbd8
71019cf740  adrp x8,0x71019cd000
71019cf744  add x8,x8,#0x2c0
71019cf748  stp xzr,xzr,[x0, #0x28]
71019cf74c  str x23,[x0]
71019cf750  str x20,[x0, #0x10]
71019cf754  adrp x1,0x7104455000
71019cf758  add x1,x1,#0x1fe
71019cf75c  stp x8,xzr,[x0, #0x18]
71019cf760  add x2,sp,#0x30
71019cf764  str wzr,[x0, #0x8]
71019cf768  str x0,[sp, #0x30]
71019cf76c  mov x0,x21
71019cf770  bl 0x7103376af0
71019cf774  ldr x0,[sp, #0x30]
71019cf778  str xzr,[sp, #0x30]
71019cf77c  cbz x0,0x71019cf78c
71019cf780  ldr x8,[x0]
71019cf784  ldr x8,[x8, #0x8]
71019cf788  blr x8
71019cf78c  ldr x21,[x20, #0x40]
71019cf790  mov w0,#0x10
71019cf794  orr w1,wzr,#0x38
71019cf798  bl 0x710392e290
71019cf79c  cbnz x0,0x71019cf7e4
71019cf7a0  adrp x8,0x7105332000
71019cf7a4  ldr x0,[x8, #0xf00]
71019cf7a8  cbz x0,0x71019cf7e0
71019cf7ac  orr w8,wzr,#0x38
71019cf7b0  stur wzr,[x29, #-0x64]
71019cf7b4  sub x1,x29,#0x64
71019cf7b8  stur x8,[x29, #-0x70]
71019cf7bc  ldr x8,[x0]
71019cf7c0  ldr x8,[x8, #0x30]
71019cf7c4  sub x2,x29,#0x70
71019cf7c8  blr x8
71019cf7cc  tbz w0,#0x0,0x71019cf7e0
71019cf7d0  mov w0,#0x10
71019cf7d4  orr w1,wzr,#0x38
71019cf7d8  bl 0x710392e290
71019cf7dc  cbnz x0,0x71019cf7e4
71019cf7e0  mov x0,xzr
71019cf7e4  adrp x8,0x71019cd000
71019cf7e8  add x8,x8,#0x310
71019cf7ec  str x23,[x0]
71019cf7f0  stp xzr,xzr,[x0, #0x28]
71019cf7f4  adrp x1,0x7104413000
71019cf7f8  add x1,x1,#0x4c
71019cf7fc  str x20,[x0, #0x10]
71019cf800  sub x2,x29,#0x70
71019cf804  stp x8,xzr,[x0, #0x18]
71019cf808  str wzr,[x0, #0x8]
71019cf80c  stur x0,[x29, #-0x70]
71019cf810  mov x0,x21
71019cf814  bl 0x7103376af0
71019cf818  ldur x0,[x29, #-0x70]
71019cf81c  stur xzr,[x29, #-0x70]
71019cf820  cbz x0,0x71019cf830
71019cf824  ldr x8,[x0]
71019cf828  ldr x8,[x8, #0x8]
71019cf82c  blr x8
71019cf830  ldr x0,[x20, #0x40]
71019cf834  ldr x8,[x0]
71019cf838  cbz x8,0x71019cf884
71019cf83c  ldr w3,[sp, #0xd4]
71019cf840  adrp x1,0x71042a2000
71019cf844  add x1,x1,#0x8e6
71019cf848  adrp x2,0x71042b2000
71019cf84c  add x2,x2,#0xa84
71019cf850  mov x0,x8
71019cf854  bl 0x7103375650
71019cf858  ldr x0,[x20, #0x40]
71019cf85c  ldr x8,[x0]
71019cf860  cbz x8,0x71019cf884
71019cf864  adrp x1,0x710437b000
71019cf868  add x1,x1,#0xf86
71019cf86c  adrp x2,0x71042b2000
71019cf870  add x2,x2,#0xa84
71019cf874  orr w3,wzr,#0x7
71019cf878  mov x0,x8
71019cf87c  bl 0x7103375650
71019cf880  ldr x0,[x20, #0x40]
71019cf884  bl 0x71019e0910
71019cf888  ldr x20,[x20, #0x40]
71019cf88c  ldr x8,[x20]
71019cf890  ldr x21,[x8]
71019cf894  str wzr,[x8, #0x10]
71019cf898  ldr x8,[x21, #0x10]
71019cf89c  mov w9,#0x48
71019cf8a0  str x21,[x8]
71019cf8a4  str w9,[x8, #0x8]
71019cf8a8  ldp x9,x8,[x21, #0x10]
71019cf8ac  add x10,x9,#0x10
71019cf8b0  str x10,[x21, #0x10]
71019cf8b4  ldr x10,[x8, #0xc8]
71019cf8b8  str x9,[x21, #0x10]
71019cf8bc  cmp x10,x21
71019cf8c0  b.eq 0x71019cf8e4
71019cf8c4  adrp x1,0x71042b1000
71019cf8c8  add x1,x1,#0xd8c
71019cf8cc  mov x0,x21
71019cf8d0  bl 0x71038f4b20
71019cf8d4  orr w1,wzr,#0xfffffffe
71019cf8d8  mov x0,x21
71019cf8dc  bl 0x71038f4fc0
71019cf8e0  b 0x71019cf95c
71019cf8e4  ldr x8,[x8, #0x40]
71019cf8e8  ldr w9,[x8, #0xc]
71019cf8ec  cmp w9,#0x2
71019cf8f0  b.cc 0x71019cf900
71019cf8f4  ldr x8,[x8, #0x10]
71019cf8f8  add x1,x8,#0x10
71019cf8fc  b 0x71019cf94c
71019cf900  ldr x9,[x8, #0x18]
71019cf904  ldrb w8,[x8, #0xb]
71019cf908  mov w10,#0xffffffff
71019cf90c  lsl x8,x10,x8
71019cf910  mvn w8,w8
71019cf914  and x8,x8,#0x2
71019cf918  add x1,x9,x8, LSL #0x5
71019cf91c  adrp x8,0x7104862000
71019cf920  add x8,x8,#0x960
71019cf924  ldr w9,[x1, #0x18]
71019cf928  cmp w9,#0x13
71019cf92c  b.ne 0x71019cf93c
71019cf930  ldr x9,[x1, #0x10]
71019cf934  cmp x9,#0x2
71019cf938  b.eq 0x71019cf94c
71019cf93c  ldrsw x9,[x1, #0x1c]
71019cf940  add x1,x1,x9, LSL #0x5
71019cf944  cbnz w9,0x71019cf924
71019cf948  mov x1,x8
71019cf94c  adrp x2,0x71042b1000
71019cf950  add x2,x2,#0xd8c
71019cf954  mov x0,x21
71019cf958  bl 0x71038f4d40
71019cf95c  ldr x9,[x21, #0x10]
71019cf960  sub x8,x9,#0x10
71019cf964  adrp x10,0x7104862000
71019cf968  add x10,x10,#0x960
71019cf96c  cmp x8,x10
71019cf970  b.eq 0x71019cf994
71019cf974  ldur w9,[x9, #-0x8]
71019cf978  and w9,w9,#0xf
71019cf97c  cmp w9,#0x6
71019cf980  b.ne 0x71019cf994
71019cf984  mov x0,x20
71019cf988  mov w1,wzr
71019cf98c  bl 0x7103377130
71019cf990  b 0x71019cf998
71019cf994  str x8,[x21, #0x10]
71019cf998  ldr x20,[sp, #0x50]
71019cf99c  stp x28,xzr,[sp, #0x48]
71019cf9a0  cbz x20,0x71019cf9c4
71019cf9a4  ldr x0,[x20, #0x18]
71019cf9a8  adrp x8,0x710523d000
71019cf9ac  add x8,x8,#0x9a8
71019cf9b0  stp x8,xzr,[x20, #0x10]
71019cf9b4  cbz x0,0x71019cf9bc
71019cf9b8  bl 0x710392eb40
71019cf9bc  mov x0,x20
71019cf9c0  bl 0x710392eb40
71019cf9c4  ldr x20,[sp, #0x98]
71019cf9c8  stp x28,xzr,[sp, #0x90]
71019cf9cc  cbz x20,0x71019cf9f0
71019cf9d0  ldr x0,[x20, #0x18]
71019cf9d4  adrp x8,0x710523d000
71019cf9d8  add x8,x8,#0x9a8
71019cf9dc  stp x8,xzr,[x20, #0x10]
71019cf9e0  cbz x0,0x71019cf9e8
71019cf9e4  bl 0x710392eb40
71019cf9e8  mov x0,x20
71019cf9ec  bl 0x710392eb40
71019cf9f0  ldr x0,[sp, #0xb8]
71019cf9f4  cbz x0,0x71019cfa00
71019cf9f8  str x0,[sp, #0xc0]
71019cf9fc  bl 0x710392eb40
71019cfa00  ldr x0,[sp, #0x1e0]
71019cfa04  add x8,sp,#0xd0
71019cfa08  add x8,x8,#0xf0
71019cfa0c  cmp x8,x0
71019cfa10  b.eq 0x71019cfa24
71019cfa14  cbz x0,0x71019cfa30
71019cfa18  ldr x8,[x0]
71019cfa1c  ldr x8,[x8, #0x28]
71019cfa20  b 0x71019cfa2c
71019cfa24  ldr x8,[x0]
71019cfa28  ldr x8,[x8, #0x20]
71019cfa2c  blr x8
71019cfa30  ldr x0,[sp, #0x1b0]
71019cfa34  add x8,sp,#0xd0
71019cfa38  add x8,x8,#0xc0
71019cfa3c  cmp x8,x0
71019cfa40  b.eq 0x71019cfa54
71019cfa44  cbz x0,0x71019cfa60
71019cfa48  ldr x8,[x0]
71019cfa4c  ldr x8,[x8, #0x28]
71019cfa50  b 0x71019cfa5c
71019cfa54  ldr x8,[x0]
71019cfa58  ldr x8,[x8, #0x20]
71019cfa5c  blr x8
71019cfa60  ldr x0,[sp, #0x180]
71019cfa64  add x8,sp,#0xd0
71019cfa68  add x8,x8,#0x90
71019cfa6c  cmp x8,x0
71019cfa70  b.eq 0x71019cfa84
71019cfa74  cbz x0,0x71019cfa90
71019cfa78  ldr x8,[x0]
71019cfa7c  ldr x8,[x8, #0x28]
71019cfa80  b 0x71019cfa8c
71019cfa84  ldr x8,[x0]
71019cfa88  ldr x8,[x8, #0x20]
71019cfa8c  blr x8
71019cfa90  ldr x0,[sp, #0x150]
71019cfa94  add x8,sp,#0xd0
71019cfa98  add x8,x8,#0x60
71019cfa9c  cmp x8,x0
71019cfaa0  b.eq 0x71019cfab4
71019cfaa4  cbz x0,0x71019cfac0
71019cfaa8  ldr x8,[x0]
71019cfaac  ldr x8,[x8, #0x28]
71019cfab0  b 0x71019cfabc
71019cfab4  ldr x8,[x0]
71019cfab8  ldr x8,[x8, #0x20]
71019cfabc  blr x8
71019cfac0  ldr x0,[sp, #0x120]
71019cfac4  add x8,sp,#0xd0
71019cfac8  add x8,x8,#0x30
71019cfacc  cmp x8,x0
71019cfad0  b.eq 0x71019cfae4
71019cfad4  cbz x0,0x71019cfaf0
71019cfad8  ldr x8,[x0]
71019cfadc  ldr x8,[x8, #0x28]
71019cfae0  b 0x71019cfaec
71019cfae4  ldr x8,[x0]
71019cfae8  ldr x8,[x8, #0x20]
71019cfaec  blr x8
71019cfaf0  mov w8,#0x1
71019cfaf4  strb w8,[x19, #0x70]
71019cfaf8  add sp,sp,#0x210
71019cfafc  ldp x29,x30,[sp, #0x50]
71019cfb00  ldp x20,x19,[sp, #0x40]
71019cfb04  ldp x22,x21,[sp, #0x30]
71019cfb08  ldp x24,x23,[sp, #0x20]
71019cfb0c  ldp x26,x25,[sp, #0x10]
71019cfb10  ldp x28,x27,[sp], #0x60
71019cfb14  ret
71019cfb18  sub x2,x8,x27
71019cfb1c  asr x21,x2,#0x3
71019cfb20  add x8,x21,#0x1
71019cfb24  lsr x9,x8,#0x3d
71019cfb28  cbnz x9,0x71019cfc20
71019cfb2c  orr x9,xzr,#0xffffffffffffffe
71019cfb30  cmp x21,x9
71019cfb34  b.hi 0x71019cfb60
71019cfb38  asr x9,x2,#0x2
71019cfb3c  cmp x9,x8
71019cfb40  csel x28,x8,x9,cc
71019cfb44  cbz x28,0x71019cfc08
71019cfb48  lsr x8,x28,#0x3d
71019cfb4c  str x2,[sp, #0x10]
71019cfb50  cbz x8,0x71019cfb68
71019cfb54  b 0x71019cee8c
71019cfb58  mov x22,xzr
71019cfb5c  b 0x71019cef04
71019cfb60  str x2,[sp, #0x10]
71019cfb64  orr x28,xzr,#0x1fffffffffffffff
71019cfb68  lsl x8,x28,#0x3
71019cfb6c  cmp x8,#0x0
71019cfb70  csinc x1,x8,xzr,ne
71019cfb74  mov w0,#0x10
71019cfb78  str x1,[sp, #0x8]
71019cfb7c  bl 0x710392e290
71019cfb80  mov x22,x0
71019cfb84  cbnz x0,0x71019cfbd0
71019cfb88  adrp x8,0x7105332000
71019cfb8c  ldr x0,[x8, #0xf00]
71019cfb90  cbz x0,0x71019cfbcc
71019cfb94  ldr x8,[sp, #0x8]
71019cfb98  str wzr,[sp, #0x70]
71019cfb9c  add x1,sp,#0x70
71019cfba0  add x2,sp,#0xd0
71019cfba4  str x8,[sp, #0xd0]
71019cfba8  ldr x8,[x0]
71019cfbac  ldr x8,[x8, #0x30]
71019cfbb0  blr x8
71019cfbb4  tbz w0,#0x0,0x71019cfbcc
71019cfbb8  ldr x1,[sp, #0x8]
71019cfbbc  mov w0,#0x10
71019cfbc0  bl 0x710392e290
71019cfbc4  mov x22,x0
71019cfbc8  cbnz x0,0x71019cfbd0
71019cfbcc  mov x22,xzr
71019cfbd0  ldr x2,[sp, #0x10]
71019cfbd4  ldr x8,[x24, #0x58]
71019cfbd8  add x21,x22,x21, LSL #0x3
71019cfbdc  add x24,x22,x28, LSL #0x3
71019cfbe0  str x8,[x21], #0x8
71019cfbe4  cmp x2,#0x1
71019cfbe8  b.lt 0x71019cfbf8
71019cfbec  mov x0,x22
71019cfbf0  mov x1,x27
71019cfbf4  bl 0x71039c00e0
71019cfbf8  stp x22,x21,[x20, #0x128]
71019cfbfc  str x24,[x20, #0x138]
71019cfc00  cbnz x27,0x71019cef34
71019cfc04  b 0x71019cef3c
71019cfc08  mov x22,xzr
71019cfc0c  b 0x71019cfbd4
71019cfc10  ldr x0,[sp, #0x18]
71019cfc14  bl 0x71039c1330
71019cfc18  add x0,sp,#0x58
71019cfc1c  bl 0x71039c0c00
71019cfc20  mov x0,x26
71019cfc24  bl 0x71039c0c00
