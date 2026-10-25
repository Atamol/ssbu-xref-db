// addr:      7101ebadf0
// offset:    0x1ebadf0
// name:      FUN_7101ebadf0
// mangled:   
// size:      1092

7101ebadf0  sub sp,sp,#0xf0
7101ebadf4  str d8,[sp, #0xa0]
7101ebadf8  str x25,[sp, #0xa8]
7101ebadfc  stp x24,x23,[sp, #0xb0]
7101ebae00  stp x22,x21,[sp, #0xc0]
7101ebae04  stp x20,x19,[sp, #0xd0]
7101ebae08  stp x29,x30,[sp, #0xe0]
7101ebae0c  add x29,sp,#0xe0
7101ebae10  ldr x8,[x0, #0x18]
7101ebae14  strb wzr,[x0, #0x35]
7101ebae18  ldr x8,[x8, #0x8]
7101ebae1c  mov v8.16B,v0.16B
7101ebae20  mov x20,x1
7101ebae24  mov x19,x0
7101ebae28  cbz x8,0x7101ebaefc
7101ebae2c  ldr x21,[x8, #0x78]
7101ebae30  adrp x8,0x710593b000
7101ebae34  add x8,x8,#0xa40
7101ebae38  ldarb w8,[x8]
7101ebae3c  tbz w8,#0x0,0x7101ebb1c8
7101ebae40  cbz x21,0x7101ebaefc
7101ebae44  ldr x8,[x21]
7101ebae48  ldr x8,[x8]
7101ebae4c  mov x0,x21
7101ebae50  blr x8
7101ebae54  cbz x0,0x7101ebaefc
7101ebae58  adrp x8,0x710593b000
7101ebae5c  add x8,x8,#0xa58
7101ebae60  cmp x0,x8
7101ebae64  b.eq 0x7101ebae74
7101ebae68  ldr x0,[x0]
7101ebae6c  cbnz x0,0x7101ebae60
7101ebae70  b 0x7101ebaefc
7101ebae74  ldr w9,[x21, #0x54]
7101ebae78  ldr x8,[x21, #0x18]
7101ebae7c  str w9,[x21, #0x58]
7101ebae80  cbz x8,0x7101ebae94
7101ebae84  str w9,[x8, #0x30]
7101ebae88  ldrb w9,[x8, #0x58]
7101ebae8c  orr w9,w9,#0x10
7101ebae90  strb w9,[x8, #0x58]
7101ebae94  ldr x8,[x21, #0x20]
7101ebae98  cbz x8,0x7101ebaeb0
7101ebae9c  ldr w9,[x21, #0x58]
7101ebaea0  str w9,[x8, #0x30]
7101ebaea4  ldrb w9,[x8, #0x58]
7101ebaea8  orr w9,w9,#0x10
7101ebaeac  strb w9,[x8, #0x58]
7101ebaeb0  ldr x0,[x21, #0x28]
7101ebaeb4  cbz x0,0x7101ebaec8
7101ebaeb8  ldr x8,[x0]
7101ebaebc  ldr x8,[x8, #0x180]
7101ebaec0  fmov s0,wzr
7101ebaec4  blr x8
7101ebaec8  ldr x0,[x21, #0x30]
7101ebaecc  cbz x0,0x7101ebaef8
7101ebaed0  ldrb w8,[x21, #0x63]
7101ebaed4  cbz w8,0x7101ebaee8
7101ebaed8  ldr x8,[x0]
7101ebaedc  ldr x8,[x8, #0x190]
7101ebaee0  blr x8
7101ebaee4  b 0x7101ebaef8
7101ebaee8  ldr x8,[x0]
7101ebaeec  ldr x8,[x8, #0x180]
7101ebaef0  fmov s0,wzr
7101ebaef4  blr x8
7101ebaef8  strh wzr,[x21, #0x64]
7101ebaefc  ldr x8,[x19, #0x18]
7101ebaf00  ldr x0,[x8, #0x8]
7101ebaf04  bl 0x7103778950
7101ebaf08  adrp x1,0x71042d6000
7101ebaf0c  add x1,x1,#0xa7f
7101ebaf10  add x8,sp,#0x48
7101ebaf14  mov x0,x19
7101ebaf18  bl 0x7103776910
7101ebaf1c  ldr x21,[sp, #0x50]
7101ebaf20  ldr x8,[x21]
7101ebaf24  and x9,x20,#-0x100000000000000
7101ebaf28  mov x10,#-0x2700000000000000
7101ebaf2c  cmp x9,x10
7101ebaf30  b.ne 0x7101ebb0d0
7101ebaf34  and x9,x20,#0xffffffffff
7101ebaf38  cbz x9,0x7101ebb0d0
7101ebaf3c  add x23,x19,#0x10
7101ebaf40  cbz x8,0x7101ebaf50
7101ebaf44  ldrb w9,[x8, #0x58]
7101ebaf48  orr w9,w9,#0x1
7101ebaf4c  strb w9,[x8, #0x58]
7101ebaf50  adrp x8,0x710532f000
7101ebaf54  ldr x8,[x8, #0x730]
7101ebaf58  ldr x25,[x8, #0x8]
7101ebaf5c  ldr x1,[x25, #0x278]
7101ebaf60  add x0,sp,#0x58
7101ebaf64  mov x2,x20
7101ebaf68  add x22,sp,#0x58
7101ebaf6c  bl 0x71032570e0
7101ebaf70  add x1,x22,#0x8
7101ebaf74  adrp x0,0x710428f000
7101ebaf78  add x0,x0,#0xf21
7101ebaf7c  mov x8,sp
7101ebaf80  mov x22,sp
7101ebaf84  bl 0x71003a4ca0
7101ebaf88  add x22,x22,#0x8
7101ebaf8c  add x0,sp,#0x48
7101ebaf90  mov x1,x22
7101ebaf94  bl 0x710377a120
7101ebaf98  adrp x1,0x710437a000
7101ebaf9c  add x1,x1,#0xe67
7101ebafa0  add x8,sp,#0x58
7101ebafa4  mov x0,x23
7101ebafa8  bl 0x7103776910
7101ebafac  add x0,sp,#0x58
7101ebafb0  mov x1,x22
7101ebafb4  bl 0x710377a120
7101ebafb8  ldr x0,[sp, #0x60]
7101ebafbc  adrp x24,0x710523d000
7101ebafc0  add x24,x24,#0x9a8
7101ebafc4  stp x24,xzr,[sp, #0x58]
7101ebafc8  cbz x0,0x7101ebafd0
7101ebafcc  bl 0x710392eb40
7101ebafd0  adrp x1,0x71042c3000
7101ebafd4  add x1,x1,#0x645
7101ebafd8  add x8,sp,#0x58
7101ebafdc  mov x0,x23
7101ebafe0  bl 0x7103776910
7101ebafe4  add x0,sp,#0x58
7101ebafe8  mov x1,x22
7101ebafec  bl 0x710377a120
7101ebaff0  ldr x0,[sp, #0x60]
7101ebaff4  stp x24,xzr,[sp, #0x58]
7101ebaff8  cbz x0,0x7101ebb000
7101ebaffc  bl 0x710392eb40
7101ebb000  add x23,x19,#0x20
7101ebb004  adrp x1,0x710437a000
7101ebb008  add x1,x1,#0xe67
7101ebb00c  add x8,sp,#0x58
7101ebb010  mov x0,x23
7101ebb014  bl 0x7103776910
7101ebb018  add x0,sp,#0x58
7101ebb01c  mov x1,x22
7101ebb020  bl 0x710377a120
7101ebb024  ldr x0,[sp, #0x60]
7101ebb028  stp x24,xzr,[sp, #0x58]
7101ebb02c  cbz x0,0x7101ebb034
7101ebb030  bl 0x710392eb40
7101ebb034  adrp x1,0x71042c3000
7101ebb038  add x1,x1,#0x645
7101ebb03c  add x8,sp,#0x58
7101ebb040  mov x0,x23
7101ebb044  bl 0x7103776910
7101ebb048  add x0,sp,#0x58
7101ebb04c  mov x1,x22
7101ebb050  bl 0x710377a120
7101ebb054  ldr x0,[sp, #0x60]
7101ebb058  stp x24,xzr,[sp, #0x58]
7101ebb05c  cbz x0,0x7101ebb064
7101ebb060  bl 0x710392eb40
7101ebb064  ldr x8,[x21, #0x10]
7101ebb068  cbz x8,0x7101ebb120
7101ebb06c  adrp x9,0x7104472000
7101ebb070  ldr q0,[x8, #0x230]
7101ebb074  ldr s2,[x9, #0x970]
7101ebb078  fcmp s0,s2
7101ebb07c  b.ls 0x7101ebb120
7101ebb080  dup s1,v0.S[0x1]
7101ebb084  fcmp s1,s2
7101ebb088  b.ls 0x7101ebb120
7101ebb08c  ldr q2,[x8, #0x240]
7101ebb090  fdiv s3,s2,s0
7101ebb094  movi v0.2D,#0x0
7101ebb098  dup s2,v2.S[0x1]
7101ebb09c  fdiv s1,s2,s1
7101ebb0a0  mov v0.S[0x0],v3.S[0x0]
7101ebb0a4  mov v0.S[0x1],v1.S[0x0]
7101ebb0a8  fcmp s0,s8
7101ebb0ac  b.hi 0x7101ebb134
7101ebb0b0  ldr x0,[x19, #0x8]
7101ebb0b4  mov w8,#0x1
7101ebb0b8  strb w8,[x19, #0x34]
7101ebb0bc  mov w8,#0xffffffff
7101ebb0c0  str w8,[x19, #0x30]
7101ebb0c4  adrp x1,0x7104281000
7101ebb0c8  add x1,x1,#0x227
7101ebb0cc  b 0x7101ebb144
7101ebb0d0  cbz x8,0x7101ebb0e0
7101ebb0d4  ldrb w9,[x8, #0x58]
7101ebb0d8  and w9,w9,#0xfe
7101ebb0dc  strb w9,[x8, #0x58]
7101ebb0e0  fmov s8,0x3f800000
7101ebb0e4  ldr x0,[x19, #0x8]
7101ebb0e8  adrp x1,0x71043e0000
7101ebb0ec  add x1,x1,#0x91b
7101ebb0f0  mov v0.16B,v8.16B
7101ebb0f4  bl 0x7103778300
7101ebb0f8  ldr x0,[x19, #0x8]
7101ebb0fc  mov v0.16B,v8.16B
7101ebb100  adrp x1,0x710424f000
7101ebb104  add x1,x1,#0xc57
7101ebb108  bl 0x7103778300
7101ebb10c  adrp x8,0x710523d000
7101ebb110  add x8,x8,#0x9a8
7101ebb114  stp x8,xzr,[sp, #0x48]
7101ebb118  cbnz x21,0x7101ebb1a0
7101ebb11c  b 0x7101ebb1a8
7101ebb120  adrp x8,0x71052a8000
7101ebb124  ldr x8,[x8, #0xb00]
7101ebb128  ldr q0,[x8]
7101ebb12c  fcmp s0,s8
7101ebb130  b.ls 0x7101ebb0b0
7101ebb134  ldr x0,[x19, #0x8]
7101ebb138  adrp x1,0x71043e0000
7101ebb13c  add x1,x1,#0x91b
7101ebb140  strb wzr,[x19, #0x34]
7101ebb144  fmov s0,0x3f800000
7101ebb148  bl 0x7103778300
7101ebb14c  ldr x0,[x25, #0x278]
7101ebb150  mov x1,x20
7101ebb154  bl 0x710325d9e0
7101ebb158  cmp w0,#0x3
7101ebb15c  b.eq 0x7101ebb178
7101ebb160  cmp w0,#0x2
7101ebb164  b.ne 0x7101ebb188
7101ebb168  ldr x0,[x19, #0x8]
7101ebb16c  adrp x1,0x7104422000
7101ebb170  add x1,x1,#0xaf8
7101ebb174  b 0x7101ebb194
7101ebb178  ldr x0,[x19, #0x8]
7101ebb17c  adrp x1,0x710425f000
7101ebb180  add x1,x1,#0xc5e
7101ebb184  b 0x7101ebb194
7101ebb188  ldr x0,[x19, #0x8]
7101ebb18c  adrp x1,0x710424f000
7101ebb190  add x1,x1,#0xc57
7101ebb194  fmov s0,0x3f800000
7101ebb198  bl 0x7103778300
7101ebb19c  stp x24,xzr,[sp, #0x48]
7101ebb1a0  mov x0,x21
7101ebb1a4  bl 0x710392eb40
7101ebb1a8  ldr d8,[sp, #0xa0]
7101ebb1ac  ldp x29,x30,[sp, #0xe0]
7101ebb1b0  ldp x20,x19,[sp, #0xd0]
7101ebb1b4  ldr x25,[sp, #0xa8]
7101ebb1b8  ldp x22,x21,[sp, #0xc0]
7101ebb1bc  ldp x24,x23,[sp, #0xb0]
7101ebb1c0  add sp,sp,#0xf0
7101ebb1c4  ret
7101ebb1c8  adrp x0,0x710593b000
7101ebb1cc  add x0,x0,#0xa40
7101ebb1d0  bl 0x71039c06b0
7101ebb1d4  cbz w0,0x7101ebae40
7101ebb1d8  adrp x8,0x710593b000
7101ebb1dc  add x8,x8,#0xa48
7101ebb1e0  ldarb w8,[x8]
7101ebb1e4  tbz w8,#0x0,0x7101ebb20c
7101ebb1e8  adrp x8,0x710593b000
7101ebb1ec  adrp x9,0x710593b000
7101ebb1f0  add x9,x9,#0xa50
7101ebb1f4  adrp x0,0x710593b000
7101ebb1f8  add x0,x0,#0xa40
7101ebb1fc  str x9,[x8, #0xa58]
7101ebb200  bl 0x71039c06c0
7101ebb204  cbnz x21,0x7101ebae44
7101ebb208  b 0x7101ebaefc
7101ebb20c  adrp x0,0x710593b000
7101ebb210  add x0,x0,#0xa48
7101ebb214  bl 0x71039c06b0
7101ebb218  cbz w0,0x7101ebb1e8
7101ebb21c  adrp x8,0x710593b000
7101ebb220  adrp x0,0x710593b000
7101ebb224  add x0,x0,#0xa48
7101ebb228  str xzr,[x8, #0xa50]
7101ebb22c  bl 0x71039c06c0
7101ebb230  b 0x7101ebb1e8
