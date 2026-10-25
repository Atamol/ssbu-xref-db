// addr:      7101bbcca0
// offset:    0x1bbcca0
// name:      FUN_7101bbcca0
// mangled:   
// size:      1520

7101bbcca0  sub sp,sp,#0x70
7101bbcca4  str d8,[sp, #0x20]
7101bbcca8  str x25,[sp, #0x28]
7101bbccac  stp x24,x23,[sp, #0x30]
7101bbccb0  stp x22,x21,[sp, #0x40]
7101bbccb4  stp x20,x19,[sp, #0x50]
7101bbccb8  stp x29,x30,[sp, #0x60]
7101bbccbc  add x29,sp,#0x60
7101bbccc0  ldr w9,[x0, #0xb74]
7101bbccc4  cmp w9,#0x3
7101bbccc8  b.hi 0x7101bbd250
7101bbcccc  adrp x8,0x71044f8000
7101bbccd0  add x8,x8,#0xa54
7101bbccd4  mov x19,x2
7101bbccd8  ldrsw x10,[x8, x9, LSL #0x2]
7101bbccdc  add x8,x10,x8
7101bbcce0  mov x20,x0
7101bbcce4  br x8
7101bbcce8  add x8,x20,#0xa58
7101bbccec  adrp x22,0x7104318000
7101bbccf0  add x22,x22,#0xd23
7101bbccf4  b 0x7101bbcd24
7101bbccf8  add x8,x20,#0xa70
7101bbccfc  adrp x22,0x71042d6000
7101bbcd00  add x22,x22,#0xf5
7101bbcd04  b 0x7101bbcd24
7101bbcd08  add x8,x20,#0xa88
7101bbcd0c  adrp x22,0x710434a000
7101bbcd10  add x22,x22,#0x18a
7101bbcd14  b 0x7101bbcd24
7101bbcd18  add x8,x20,#0xaa0
7101bbcd1c  adrp x22,0x7104318000
7101bbcd20  add x22,x22,#0xd2c
7101bbcd24  ldp x10,x8,[x8]
7101bbcd28  sub x8,x8,x10
7101bbcd2c  sxtw x25,w1
7101bbcd30  asr x8,x8,#0x3
7101bbcd34  cmp x8,x25
7101bbcd38  b.ls 0x7101bbd250
7101bbcd3c  ldr x21,[x10, x25, LSL #0x3]
7101bbcd40  cmp w9,#0x3
7101bbcd44  b.hi 0x7101bbce5c
7101bbcd48  adrp x8,0x710532f000
7101bbcd4c  ldr x8,[x8, #0x730]
7101bbcd50  mov w9,w9
7101bbcd54  adrp x10,0x71044f8000
7101bbcd58  add x10,x10,#0xa64
7101bbcd5c  ldr x8,[x8, #0x8]
7101bbcd60  ldrsw x9,[x10, x9, LSL #0x2]
7101bbcd64  add x9,x9,x10
7101bbcd68  br x9
7101bbcd6c  and x9,x21,#-0x100000000000000
7101bbcd70  orr x10,xzr,#0x1e00000000000000
7101bbcd74  adrp x24,0x710436c000
7101bbcd78  add x24,x24,#0x146
7101bbcd7c  cmp x9,x10
7101bbcd80  adrp x23,0x71043be000
7101bbcd84  add x23,x23,#0x48d
7101bbcd88  b.ne 0x7101bbcfc0
7101bbcd8c  and x9,x21,#0xffffffffff
7101bbcd90  cbz x9,0x7101bbcfc0
7101bbcd94  ldr x8,[x8, #0x268]
7101bbcd98  ldr x23,[x8, #0x8]
7101bbcd9c  mov x1,#0x64e2
7101bbcda0  movk x1,#0xbd35, LSL #16
7101bbcda4  movk x1,#0x10, LSL #32
7101bbcda8  mov x0,x23
7101bbcdac  bl 0x710327fb30
7101bbcdb0  and x9,x0,#-0x100000000000000
7101bbcdb4  orr x24,xzr,#0x1e00000000000000
7101bbcdb8  and x8,x0,#0xffffffffff
7101bbcdbc  cmp x9,x24
7101bbcdc0  ccmp x8,#0x0,#0x4,eq
7101bbcdc4  b.eq 0x7101bbcdd4
7101bbcdc8  eor x8,x21,x0
7101bbcdcc  tst x8,#0xffffffffff
7101bbcdd0  b.eq 0x7101bbd270
7101bbcdd4  mov x1,#0xf289
7101bbcdd8  movk x1,#0x346e, LSL #16
7101bbcddc  movk x1,#0xe, LSL #32
7101bbcde0  mov x0,x23
7101bbcde4  bl 0x710327fb30
7101bbcde8  and x8,x0,#-0x100000000000000
7101bbcdec  cmp x8,x24
7101bbcdf0  b.ne 0x7101bbce08
7101bbcdf4  and x8,x0,#0xffffffffff
7101bbcdf8  cbz x8,0x7101bbce08
7101bbcdfc  eor x8,x21,x0
7101bbce00  tst x8,#0xffffffffff
7101bbce04  b.eq 0x7101bbd27c
7101bbce08  mov x1,#0xc799
7101bbce0c  movk x1,#0x4c25, LSL #16
7101bbce10  movk x1,#0x12, LSL #32
7101bbce14  mov x0,x23
7101bbce18  bl 0x710327fb30
7101bbce1c  and x8,x0,#-0x100000000000000
7101bbce20  orr x9,xzr,#0x1e00000000000000
7101bbce24  adrp x24,0x710436c000
7101bbce28  add x24,x24,#0x146
7101bbce2c  cmp x8,x9
7101bbce30  adrp x23,0x71042d6000
7101bbce34  add x23,x23,#0x10f
7101bbce38  b.ne 0x7101bbcfc0
7101bbce3c  and x8,x0,#0xffffffffff
7101bbce40  cbz x8,0x7101bbcfc0
7101bbce44  eor x8,x21,x0
7101bbce48  adrp x9,0x71042d6000
7101bbce4c  add x9,x9,#0x102
7101bbce50  tst x8,#0xffffffffff
7101bbce54  csel x24,x9,x24,eq
7101bbce58  b 0x7101bbd284
7101bbce5c  mov x23,xzr
7101bbce60  b 0x7101bbcfb8
7101bbce64  and x9,x21,#-0x100000000000000
7101bbce68  orr x10,xzr,#0x1e00000000000000
7101bbce6c  adrp x24,0x710436c000
7101bbce70  add x24,x24,#0x146
7101bbce74  cmp x9,x10
7101bbce78  adrp x23,0x71042e6000
7101bbce7c  add x23,x23,#0xf6f
7101bbce80  b.ne 0x7101bbcfc0
7101bbce84  and x9,x21,#0xffffffffff
7101bbce88  cbz x9,0x7101bbcfc0
7101bbce8c  ldr x8,[x8, #0x268]
7101bbce90  ldr x0,[x8, #0x8]
7101bbce94  mov x1,#0x64e2
7101bbce98  movk x1,#0xbd35, LSL #16
7101bbce9c  movk x1,#0x10, LSL #32
7101bbcea0  bl 0x710327fb30
7101bbcea4  and x9,x0,#-0x100000000000000
7101bbcea8  orr x10,xzr,#0x1e00000000000000
7101bbceac  and x8,x0,#0xffffffffff
7101bbceb0  cmp x9,x10
7101bbceb4  adrp x23,0x71042d6000
7101bbceb8  add x23,x23,#0x10f
7101bbcebc  ccmp x8,#0x0,#0x4,eq
7101bbcec0  b.eq 0x7101bbcfb8
7101bbcec4  eor x8,x21,x0
7101bbcec8  adrp x9,0x71042b4000
7101bbcecc  add x9,x9,#0x182
7101bbced0  b 0x7101bbcfb0
7101bbced4  and x9,x21,#-0x100000000000000
7101bbced8  orr x10,xzr,#0x1e00000000000000
7101bbcedc  adrp x24,0x710436c000
7101bbcee0  add x24,x24,#0x146
7101bbcee4  cmp x9,x10
7101bbcee8  adrp x23,0x710434a000
7101bbceec  add x23,x23,#0x196
7101bbcef0  b.ne 0x7101bbcfc0
7101bbcef4  and x9,x21,#0xffffffffff
7101bbcef8  cbz x9,0x7101bbcfc0
7101bbcefc  ldr x8,[x8, #0x268]
7101bbcf00  ldr x0,[x8, #0x8]
7101bbcf04  mov x1,#0xf289
7101bbcf08  movk x1,#0x346e, LSL #16
7101bbcf0c  movk x1,#0xe, LSL #32
7101bbcf10  bl 0x710327fb30
7101bbcf14  and x9,x0,#-0x100000000000000
7101bbcf18  orr x10,xzr,#0x1e00000000000000
7101bbcf1c  and x8,x0,#0xffffffffff
7101bbcf20  cmp x9,x10
7101bbcf24  adrp x23,0x71042d6000
7101bbcf28  add x23,x23,#0x10f
7101bbcf2c  ccmp x8,#0x0,#0x4,eq
7101bbcf30  b.eq 0x7101bbcfb8
7101bbcf34  eor x8,x21,x0
7101bbcf38  adrp x9,0x710425f000
7101bbcf3c  add x9,x9,#0x1f0
7101bbcf40  b 0x7101bbcfb0
7101bbcf44  and x9,x21,#-0x100000000000000
7101bbcf48  orr x10,xzr,#0x1e00000000000000
7101bbcf4c  adrp x24,0x710436c000
7101bbcf50  add x24,x24,#0x146
7101bbcf54  cmp x9,x10
7101bbcf58  adrp x23,0x710439d000
7101bbcf5c  add x23,x23,#0x2ed
7101bbcf60  b.ne 0x7101bbcfc0
7101bbcf64  and x9,x21,#0xffffffffff
7101bbcf68  cbz x9,0x7101bbcfc0
7101bbcf6c  ldr x8,[x8, #0x268]
7101bbcf70  ldr x0,[x8, #0x8]
7101bbcf74  mov x1,#0xc799
7101bbcf78  movk x1,#0x4c25, LSL #16
7101bbcf7c  movk x1,#0x12, LSL #32
7101bbcf80  bl 0x710327fb30
7101bbcf84  and x9,x0,#-0x100000000000000
7101bbcf88  orr x10,xzr,#0x1e00000000000000
7101bbcf8c  and x8,x0,#0xffffffffff
7101bbcf90  cmp x9,x10
7101bbcf94  adrp x23,0x71042d6000
7101bbcf98  add x23,x23,#0x10f
7101bbcf9c  ccmp x8,#0x0,#0x4,eq
7101bbcfa0  b.eq 0x7101bbcfb8
7101bbcfa4  eor x8,x21,x0
7101bbcfa8  adrp x9,0x71042f8000
7101bbcfac  add x9,x9,#0x119
7101bbcfb0  tst x8,#0xffffffffff
7101bbcfb4  csel x23,x9,x23,eq
7101bbcfb8  adrp x24,0x710436c000
7101bbcfbc  add x24,x24,#0x146
7101bbcfc0  ldr x0,[x19, #0x8]
7101bbcfc4  ldr x8,[x0, #0x8]
7101bbcfc8  cbz x8,0x7101bbcfe4
7101bbcfcc  ldr x8,[x8, #0x18]
7101bbcfd0  cbz x8,0x7101bbcfe4
7101bbcfd4  ldrb w9,[x8, #0x58]
7101bbcfd8  orr w9,w9,#0x1
7101bbcfdc  strb w9,[x8, #0x58]
7101bbcfe0  ldr x0,[x19, #0x8]
7101bbcfe4  fmov s8,0x3f800000
7101bbcfe8  mov v0.16B,v8.16B
7101bbcfec  mov x1,x22
7101bbcff0  bl 0x7103778300
7101bbcff4  ldr x0,[x19, #0x8]
7101bbcff8  mov v0.16B,v8.16B
7101bbcffc  mov x1,x24
7101bbd000  bl 0x7103778300
7101bbd004  cbz x23,0x7101bbd0b4
7101bbd008  ldr x0,[x19, #0x8]
7101bbd00c  fmov s0,0x3f800000
7101bbd010  mov x1,x23
7101bbd014  bl 0x7103778300
7101bbd018  and x8,x21,#-0x100000000000000
7101bbd01c  orr x9,xzr,#0x1e00000000000000
7101bbd020  cmp x8,x9
7101bbd024  b.ne 0x7101bbd0b4
7101bbd028  and x8,x21,#0xffffffffff
7101bbd02c  cbz x8,0x7101bbd0b4
7101bbd030  ldr x0,[x20, #0x8]
7101bbd034  mov w2,#0x15
7101bbd038  mov x1,x21
7101bbd03c  bl 0x710323f8d0
7101bbd040  mov x22,x0
7101bbd044  adrp x1,0x71042e7000
7101bbd048  add x1,x1,#0x963
7101bbd04c  add x8,sp,#0x8
7101bbd050  mov x0,x19
7101bbd054  bl 0x7103776910
7101bbd058  ldr x23,[sp, #0x10]
7101bbd05c  mov x0,x23
7101bbd060  mov x1,x22
7101bbd064  bl 0x7103778b80
7101bbd068  adrp x24,0x710523d000
7101bbd06c  add x24,x24,#0x9a8
7101bbd070  stp x24,xzr,[sp, #0x8]
7101bbd074  cbz x23,0x7101bbd080
7101bbd078  mov x0,x23
7101bbd07c  bl 0x710392eb40
7101bbd080  adrp x1,0x7104401000
7101bbd084  add x1,x1,#0x863
7101bbd088  add x8,sp,#0x8
7101bbd08c  mov x0,x19
7101bbd090  bl 0x7103776910
7101bbd094  ldr x23,[sp, #0x10]
7101bbd098  mov x0,x23
7101bbd09c  mov x1,x22
7101bbd0a0  bl 0x7103778b80
7101bbd0a4  stp x24,xzr,[sp, #0x8]
7101bbd0a8  cbz x23,0x7101bbd0b4
7101bbd0ac  mov x0,x23
7101bbd0b0  bl 0x710392eb40
7101bbd0b4  ldr w2,[x20, #0xad0]
7101bbd0b8  mov x0,x20
7101bbd0bc  mov x1,x21
7101bbd0c0  bl 0x7101bbd2b0
7101bbd0c4  mov w21,w0
7101bbd0c8  mov w0,#0x10
7101bbd0cc  mov w1,#0x8
7101bbd0d0  bl 0x710392e290
7101bbd0d4  mov x22,x0
7101bbd0d8  cbnz x0,0x7101bbd124
7101bbd0dc  adrp x8,0x7105332000
7101bbd0e0  ldr x0,[x8, #0xf00]
7101bbd0e4  cbz x0,0x7101bbd120
7101bbd0e8  mov w8,#0x8
7101bbd0ec  str wzr,[sp, #0x1c]
7101bbd0f0  add x1,sp,#0x1c
7101bbd0f4  str x8,[sp, #0x8]
7101bbd0f8  ldr x8,[x0]
7101bbd0fc  ldr x8,[x8, #0x30]
7101bbd100  add x2,sp,#0x8
7101bbd104  blr x8
7101bbd108  tbz w0,#0x0,0x7101bbd120
7101bbd10c  mov w0,#0x10
7101bbd110  mov w1,#0x8
7101bbd114  bl 0x710392e290
7101bbd118  mov x22,x0
7101bbd11c  cbnz x0,0x7101bbd124
7101bbd120  mov x22,xzr
7101bbd124  str xzr,[x22]
7101bbd128  ldr x8,[x19, #0x8]
7101bbd12c  ldr x8,[x8, #0x8]
7101bbd130  cbz x8,0x7101bbd190
7101bbd134  ldr x0,[x8, #0x60]
7101bbd138  cbz x0,0x7101bbd190
7101bbd13c  ldr x8,[x8, #0x18]
7101bbd140  add x1,x8,#0xb0
7101bbd144  bl 0x7103796f20
7101bbd148  str x0,[x22]
7101bbd14c  cbz x0,0x7101bbd1b4
7101bbd150  ldr x8,[x0]
7101bbd154  ldr x8,[x8, #0x208]
7101bbd158  and w1,w21,#0x1
7101bbd15c  mov x23,x0
7101bbd160  blr x8
7101bbd164  ldr x8,[x23]
7101bbd168  ldr x8,[x8, #0x200]
7101bbd16c  mov x0,x23
7101bbd170  blr x8
7101bbd174  tbz w0,#0x0,0x7101bbd198
7101bbd178  ldr x8,[x23]
7101bbd17c  ldr x8,[x8, #0x210]
7101bbd180  mov x0,x23
7101bbd184  blr x8
7101bbd188  eor w8,w0,#0x1
7101bbd18c  b 0x7101bbd19c
7101bbd190  str xzr,[x22]
7101bbd194  b 0x7101bbd1b4
7101bbd198  mov w8,#0x1
7101bbd19c  ldr x9,[x23]
7101bbd1a0  ldr x9,[x9, #0x388]
7101bbd1a4  and w1,w8,#0x1
7101bbd1a8  mov x0,x23
7101bbd1ac  mov w2,wzr
7101bbd1b0  blr x9
7101bbd1b4  mov x0,x22
7101bbd1b8  bl 0x710392eb40
7101bbd1bc  ldr x9,[x20, #0xac0]
7101bbd1c0  ldr x8,[x20, #0xab8]
7101bbd1c4  sub x9,x9,x8
7101bbd1c8  asr x9,x9,#0x4
7101bbd1cc  cmp x9,x25
7101bbd1d0  b.ls 0x7101bbd250
7101bbd1d4  add x8,x8,x25, LSL #0x4
7101bbd1d8  cmp x8,x19
7101bbd1dc  b.eq 0x7101bbd250
7101bbd1e0  ldr x9,[x19, #0x8]
7101bbd1e4  ldr x9,[x9]
7101bbd1e8  ldr x10,[x8, #0x8]
7101bbd1ec  str x9,[x10]
7101bbd1f0  ldr x9,[x19, #0x8]
7101bbd1f4  ldr x9,[x9, #0x8]
7101bbd1f8  ldr x10,[x8, #0x8]
7101bbd1fc  str x9,[x10, #0x8]
7101bbd200  ldr x9,[x19, #0x8]
7101bbd204  ldr x8,[x8, #0x8]
7101bbd208  cmp x8,x9
7101bbd20c  b.eq 0x7101bbd250
7101bbd210  ldr x10,[x9, #0x18]
7101bbd214  ldr x10,[x10]
7101bbd218  ldr x11,[x8, #0x18]
7101bbd21c  str x10,[x11]
7101bbd220  ldr x10,[x9, #0x18]
7101bbd224  ldr x10,[x10, #0x8]
7101bbd228  ldr x11,[x8, #0x18]
7101bbd22c  str x10,[x11, #0x8]
7101bbd230  ldr x10,[x9, #0x18]
7101bbd234  ldr x10,[x10, #0x10]
7101bbd238  ldr x11,[x8, #0x18]
7101bbd23c  str x10,[x11, #0x10]
7101bbd240  ldr x9,[x9, #0x18]
7101bbd244  ldr x9,[x9, #0x18]
7101bbd248  ldr x8,[x8, #0x18]
7101bbd24c  str x9,[x8, #0x18]
7101bbd250  ldr d8,[sp, #0x20]
7101bbd254  ldp x29,x30,[sp, #0x60]
7101bbd258  ldp x20,x19,[sp, #0x50]
7101bbd25c  ldr x25,[sp, #0x28]
7101bbd260  ldp x22,x21,[sp, #0x40]
7101bbd264  ldp x24,x23,[sp, #0x30]
7101bbd268  add sp,sp,#0x70
7101bbd26c  ret
7101bbd270  adrp x24,0x710434a000
7101bbd274  add x24,x24,#0x1a2
7101bbd278  b 0x7101bbd284
7101bbd27c  adrp x24,0x7104412000
7101bbd280  add x24,x24,#0x81a
7101bbd284  adrp x23,0x71042d6000
7101bbd288  add x23,x23,#0x10f
7101bbd28c  b 0x7101bbcfc0
