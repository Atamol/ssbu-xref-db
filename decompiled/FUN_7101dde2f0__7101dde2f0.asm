// addr:      7101dde2f0
// offset:    0x1dde2f0
// name:      FUN_7101dde2f0
// mangled:   
// size:      3160

7101dde2f0  sub sp,sp,#0x1b0
7101dde2f4  str d10,[sp, #0x130]
7101dde2f8  stp d9,d8,[sp, #0x140]
7101dde2fc  stp x28,x27,[sp, #0x150]
7101dde300  stp x26,x25,[sp, #0x160]
7101dde304  stp x24,x23,[sp, #0x170]
7101dde308  stp x22,x21,[sp, #0x180]
7101dde30c  stp x20,x19,[sp, #0x190]
7101dde310  stp x29,x30,[sp, #0x1a0]
7101dde314  add x29,sp,#0x1a0
7101dde318  ldr x20,[x0, #0x80]
7101dde31c  ldr w8,[x20, #0xa0]
7101dde320  mov x25,x0
7101dde324  cmp w8,#0x2
7101dde328  b.ne 0x7101dde368
7101dde32c  ldr x8,[x20, #0x20]
7101dde330  ldr x0,[x8, #0x8]
7101dde334  cbz x0,0x7101dde358
7101dde338  adrp x1,0x710428f000
7101dde33c  add x1,x1,#0xf7d
7101dde340  bl 0x71037964b0
7101dde344  cbz x0,0x7101dde358
7101dde348  ldr x8,[x0]
7101dde34c  ldr x8,[x8, #0x138]
7101dde350  blr x8
7101dde354  tbz w0,#0x0,0x7101dde368
7101dde358  ldr x8,[x20, #0x8]
7101dde35c  ldr x0,[x8]
7101dde360  bl 0x7103775fa0
7101dde364  str wzr,[x20, #0xa0]
7101dde368  ldr w8,[x20, #0xa4]
7101dde36c  cbz w8,0x7101dde3e0
7101dde370  cmp w8,#0x1
7101dde374  b.ne 0x7101dde50c
7101dde378  ldr w8,[x20, #0xa8]
7101dde37c  sub w8,w8,#0x3
7101dde380  cmp w8,#0x1
7101dde384  b.hi 0x7101dde404
7101dde388  ldr w8,[x20, #0xb8]
7101dde38c  cmn w8,#0x1
7101dde390  b.eq 0x7101dde50c
7101dde394  add x0,x20,#0x18
7101dde398  adrp x1,0x7104338000
7101dde39c  add x1,x1,#0xd31
7101dde3a0  add x8,sp,#0xa8
7101dde3a4  bl 0x7103776910
7101dde3a8  ldr x0,[sp, #0xb0]
7101dde3ac  ldr x8,[x0]
7101dde3b0  cbz x8,0x7101dde3c0
7101dde3b4  ldrb w9,[x8, #0x58]
7101dde3b8  and w9,w9,#0xfe
7101dde3bc  strb w9,[x8, #0x58]
7101dde3c0  adrp x8,0x710523d000
7101dde3c4  add x8,x8,#0x9a8
7101dde3c8  stp x8,xzr,[sp, #0xa8]
7101dde3cc  cbz x0,0x7101dde3d4
7101dde3d0  bl 0x710392eb40
7101dde3d4  mov w8,#0xffffffff
7101dde3d8  str w8,[x20, #0xb8]
7101dde3dc  b 0x7101dde50c
7101dde3e0  ldr x8,[x20, #0x28]
7101dde3e4  ldr w8,[x8, #0x254]
7101dde3e8  ldr w9,[x20, #0xb4]
7101dde3ec  cmp w9,w8
7101dde3f0  b.eq 0x7101dde50c
7101dde3f4  mov x0,x20
7101dde3f8  str w8,[x20, #0xb4]
7101dde3fc  bl 0x7101ddcea0
7101dde400  b 0x7101dde50c
7101dde404  ldr x8,[x20, #0x40]
7101dde408  ldr w19,[x8, #0x2a4]
7101dde40c  ldr w8,[x20, #0xb8]
7101dde410  cmp w8,w19
7101dde414  b.eq 0x7101dde50c
7101dde418  cmn w8,#0x1
7101dde41c  b.eq 0x7101dde500
7101dde420  adrp x8,0x710532f000
7101dde424  ldr x8,[x8, #0x8d0]
7101dde428  ldr x0,[x8, #0x8]
7101dde42c  ldp x8,x9,[x0, #0x40]
7101dde430  sub x9,x9,x8
7101dde434  asr x9,x9,#0x3
7101dde438  cmp x9,#0x2
7101dde43c  b.cc 0x7101dde450
7101dde440  ldr x21,[x8, #0x8]
7101dde444  ldrb w8,[x0, #0x191]
7101dde448  cbnz w8,0x7101dde4cc
7101dde44c  b 0x7101dde45c
7101dde450  mov x21,xzr
7101dde454  ldrb w8,[x0, #0x191]
7101dde458  cbnz w8,0x7101dde4cc
7101dde45c  mov w2,#0x4
7101dde460  mov x1,x21
7101dde464  bl 0x7103313f20
7101dde468  tbz w0,#0x0,0x7101dde4cc
7101dde46c  add x0,sp,#0x58
7101dde470  mov x1,x21
7101dde474  bl 0x71024076d0
7101dde478  ldr x8,[sp, #0x68]
7101dde47c  adrp x9,0x7104f73000
7101dde480  add x9,x9,#0xd50
7101dde484  str x9,[sp, #0x60]
7101dde488  cbz x8,0x7101dde4f8
7101dde48c  adrp x8,0x7106dd5000
7101dde490  ldrb w8,[x8, #0x3a8]
7101dde494  cmp w8,#0x1
7101dde498  b.ne 0x7101dde4f8
7101dde49c  adrp x9,0x7106dd5000
7101dde4a0  ldr w8,[sp, #0x70]
7101dde4a4  ldr w9,[x9, #0x3ac]
7101dde4a8  cmp w8,w9
7101dde4ac  b.ne 0x7101dde4f8
7101dde4b0  ldr x8,[sp, #0x68]
7101dde4b4  ldr wzr,[x8, #0x38]!
7101dde4b8  ldaxr w9,[x8]
7101dde4bc  sub w9,w9,#0x1
7101dde4c0  stlxr w10,w9,[x8]
7101dde4c4  cbnz w10,0x7101dde4b8
7101dde4c8  b 0x7101dde4f8
7101dde4cc  mov x8,#0x650000000000
7101dde4d0  movk x8,#0x87, LSL #48
7101dde4d4  strb wzr,[sp, #0x78]
7101dde4d8  stp xzr,x8,[sp, #0x68]
7101dde4dc  mov x8,#-0x1
7101dde4e0  stp x8,xzr,[sp, #0x80]
7101dde4e4  adrp x8,0x7104f73000
7101dde4e8  add x8,x8,#0xd50
7101dde4ec  str wzr,[sp, #0x58]
7101dde4f0  str xzr,[sp, #0x90]
7101dde4f4  str x8,[sp, #0x60]
7101dde4f8  str xzr,[sp, #0x68]
7101dde4fc  strb wzr,[sp, #0x78]
7101dde500  mov x0,x20
7101dde504  str w19,[x20, #0xb8]
7101dde508  bl 0x7101ddcd20
7101dde50c  ldr w8,[x20, #0xbc]
7101dde510  subs w8,w8,#0x1
7101dde514  b.lt 0x7101dde51c
7101dde518  str w8,[x20, #0xbc]
7101dde51c  add x22,x20,#0x18
7101dde520  adrp x1,0x71042b4000
7101dde524  add x1,x1,#0xa41
7101dde528  add x8,sp,#0x48
7101dde52c  mov x0,x22
7101dde530  bl 0x7103776640
7101dde534  ldr x26,[sp, #0x50]
7101dde538  ldr x23,[x26, #0x8]
7101dde53c  cbz x23,0x7101dde590
7101dde540  adrp x1,0x71043be000
7101dde544  add x1,x1,#0xb1c
7101dde548  mov x0,x23
7101dde54c  bl 0x71037964b0
7101dde550  cbz x0,0x7101dde56c
7101dde554  ldr x8,[x0]
7101dde558  ldr x8,[x8, #0x138]
7101dde55c  blr x8
7101dde560  tbz w0,#0x0,0x7101dde590
7101dde564  ldr x23,[x26, #0x8]
7101dde568  cbz x23,0x7101dde590
7101dde56c  adrp x1,0x71043be000
7101dde570  add x1,x1,#0xb1c
7101dde574  mov x0,x23
7101dde578  bl 0x71037964b0
7101dde57c  cbz x0,0x7101dde590
7101dde580  ldr x8,[x0]
7101dde584  ldr x8,[x8, #0x1a0]
7101dde588  fmov s0,wzr
7101dde58c  blr x8
7101dde590  ldr x0,[x20, #0x98]
7101dde594  bl 0x7103399c10
7101dde598  ldr w8,[x20, #0x101c]
7101dde59c  subs w8,w8,#0x1
7101dde5a0  b.lt 0x7101dde65c
7101dde5a4  str w8,[x20, #0x101c]
7101dde5a8  b.ne 0x7101dde65c
7101dde5ac  ldr x8,[x20, #0x8]
7101dde5b0  ldr x8,[x8]
7101dde5b4  ldr x8,[x8]
7101dde5b8  ldr x8,[x8, #0x600]
7101dde5bc  mov w19,#0x1
7101dde5c0  strb w19,[x8, #0x4aa]
7101dde5c4  ldr x8,[x20, #0x8]
7101dde5c8  ldr x8,[x8]
7101dde5cc  ldr x8,[x8]
7101dde5d0  ldr x21,[x8, #0x600]
7101dde5d4  add x0,x21,#0x198
7101dde5d8  mov w2,#0x264
7101dde5dc  mov w1,wzr
7101dde5e0  bl 0x71039c02a0
7101dde5e4  add x8,x21,#0x40c
7101dde5e8  str xzr,[x8]
7101dde5ec  add x8,x21,#0x424
7101dde5f0  str xzr,[x8]
7101dde5f4  str wzr,[x21, #0x480]
7101dde5f8  adrp x8,0x71052a8000
7101dde5fc  ldr x8,[x8, #0xa80]
7101dde600  ldr q0,[x8]
7101dde604  str xzr,[x21, #0x4a0]
7101dde608  str q0,[x21, #0x460]
7101dde60c  str q0,[x21, #0x430]
7101dde610  str q0,[x21, #0x440]
7101dde614  str q0,[x21, #0x450]
7101dde618  str xzr,[x21, #0x498]
7101dde61c  ldr x8,[x20, #0x8]
7101dde620  ldr x8,[x8]
7101dde624  ldr x8,[x8]
7101dde628  ldr x10,[x8, #0x610]
7101dde62c  ldr x9,[x8, #0x608]
7101dde630  cmp x10,x9
7101dde634  b.eq 0x7101ddef40
7101dde638  ldr x8,[x9, #0x8]
7101dde63c  strb w19,[x8, #0x4aa]
7101dde640  ldr w1,[x20, #0x1020]
7101dde644  add x0,x20,#0x40
7101dde648  mov w3,#0x1
7101dde64c  mov w2,wzr
7101dde650  bl 0x7103783c10
7101dde654  mov x0,x20
7101dde658  bl 0x7101ddcd20
7101dde65c  ldr w8,[x20, #0xa8]
7101dde660  sub w8,w8,#0x2
7101dde664  cmp w8,#0x3
7101dde668  b.hi 0x7101ddeae4
7101dde66c  adrp x9,0x71044fb000
7101dde670  add x9,x9,#0x6b8
7101dde674  ldrsw x8,[x9, x8, LSL #0x2]
7101dde678  add x8,x8,x9
7101dde67c  br x8
7101dde680  ldr x8,[x20, #0x40]
7101dde684  ldr w8,[x8, #0x2b8]
7101dde688  cmp w8,#0x2
7101dde68c  b.eq 0x7101dde870
7101dde690  cmp w8,#0x1
7101dde694  b.eq 0x7101dde890
7101dde698  b 0x7101ddeae4
7101dde69c  ldr x23,[x20, #0x90]
7101dde6a0  mov x0,x23
7101dde6a4  bl 0x71032cc6c0
7101dde6a8  ldr x9,[x23]
7101dde6ac  cbz x9,0x7101dde6d4
7101dde6b0  ldp x8,x11,[x23, #0x8]
7101dde6b4  and x10,x11,#0x1
7101dde6b8  orr x12,x10,x8
7101dde6bc  cbz x12,0x7101dde6d4
7101dde6c0  add x0,x9,x11, ASR #0x1
7101dde6c4  cbz x10,0x7101dde6d0
7101dde6c8  ldr x9,[x0]
7101dde6cc  ldr x8,[x9, x8, LSL #0x0]
7101dde6d0  blr x8
7101dde6d4  ldr w8,[x23, #0xbc]
7101dde6d8  add w8,w8,#0x1
7101dde6dc  str w8,[x23, #0xbc]
7101dde6e0  ldr x8,[x20, #0x90]
7101dde6e4  ldr w9,[x8, #0xb8]
7101dde6e8  cbz w9,0x7101dde7b4
7101dde6ec  ldr w19,[x8, #0x130]
7101dde6f0  cmn w19,#0x2
7101dde6f4  b.eq 0x7101ddeae4
7101dde6f8  add x0,x20,#0x70
7101dde6fc  bl 0x71032cc9f0
7101dde700  tbnz w19,#0x1f,0x7101dde93c
7101dde704  mov x0,x20
7101dde708  ldr x8,[x0, #0xc8]!
7101dde70c  ldr x9,[x0, #0x8]
7101dde710  sxtw x10,w19
7101dde714  sub x9,x9,x8
7101dde718  cmp x9,x10
7101dde71c  b.ls 0x7101dde94c
7101dde720  str w19,[x20, #0xc0]
7101dde724  b 0x7101dde94c
7101dde728  ldp x8,x9,[x20, #0x50]
7101dde72c  sub x8,x9,x8
7101dde730  lsr x8,x8,#0x2
7101dde734  cbz w8,0x7101ddeae4
7101dde738  ldr x8,[x20, #0x8]
7101dde73c  ldr x8,[x8]
7101dde740  ldr x8,[x8]
7101dde744  ldr x8,[x8, #0x600]
7101dde748  ldrb w9,[x8, #0x4aa]
7101dde74c  cbz w9,0x7101dde8c0
7101dde750  ldrb w10,[x8, #0x198]
7101dde754  ldrb w11,[x8, #0x19c]
7101dde758  ubfx w10,w10,#0x1,#0x1
7101dde75c  ubfx w11,w11,#0x1,#0x1
7101dde760  tbnz w10,#0x0,0x7101ddead8
7101dde764  cbnz w11,0x7101ddead8
7101dde768  cbz w9,0x7101dde9a4
7101dde76c  ldrb w9,[x8, #0x1a0]
7101dde770  ldrb w8,[x8, #0x1a4]
7101dde774  ubfx w9,w9,#0x1,#0x1
7101dde778  ubfx w8,w8,#0x1,#0x1
7101dde77c  tbnz w8,#0x0,0x7101dde9ac
7101dde780  cbz w9,0x7101ddeae4
7101dde784  b 0x7101dde9ac
7101dde788  ldr x8,[x20, #0x8]
7101dde78c  ldr x8,[x8]
7101dde790  ldr x8,[x8]
7101dde794  ldr x8,[x8, #0x600]
7101dde798  ldrb w10,[x8, #0x4aa]
7101dde79c  cbz w10,0x7101dde80c
7101dde7a0  ldrb w9,[x8, #0x1a4]
7101dde7a4  ldrb w11,[x8, #0x1a0]
7101dde7a8  ubfx w9,w9,#0x1,#0x1
7101dde7ac  ubfx w11,w11,#0x1,#0x1
7101dde7b0  b 0x7101dde814
7101dde7b4  ldr x8,[x20, #0x10]
7101dde7b8  ldr x0,[x8]
7101dde7bc  bl 0x7103775fa0
7101dde7c0  adrp x9,0x710593b000
7101dde7c4  ldr x9,[x9, #0x988]
7101dde7c8  ldr w8,[x20, #0x84]
7101dde7cc  mov w10,#0x1
7101dde7d0  lsl w8,w10,w8
7101dde7d4  ldr x9,[x9, #0x8]
7101dde7d8  ldr w10,[x9]
7101dde7dc  bic w8,w10,w8
7101dde7e0  str w8,[x9]
7101dde7e4  ldrb w8,[x20, #0xb0]
7101dde7e8  cbnz w8,0x7101ddead8
7101dde7ec  ldr w8,[x20, #0xa8]
7101dde7f0  cmp w8,#0x3
7101dde7f4  b.eq 0x7101ddeae4
7101dde7f8  mov x23,x20
7101dde7fc  ldr x0,[x23, #0x30]!
7101dde800  orr w9,wzr,#0x3
7101dde804  stp w9,w8,[x23, #0x78]
7101dde808  b 0x7101dde9c0
7101dde80c  mov w9,wzr
7101dde810  mov w11,wzr
7101dde814  orr w9,w9,w11
7101dde818  ldr x11,[x20, #0x30]
7101dde81c  ldr w12,[x11, #0x254]
7101dde820  cmp w12,#0xb
7101dde824  b.ne 0x7101dde850
7101dde828  cbz w10,0x7101dde844
7101dde82c  ldrb w10,[x8, #0x198]
7101dde830  tbnz w10,#0x1,0x7101dde8d0
7101dde834  ldrb w10,[x8, #0x19c]
7101dde838  tbnz w10,#0x1,0x7101ddea20
7101dde83c  ldrb w8,[x8, #0x19c]
7101dde840  tbnz w8,#0x3,0x7101ddea20
7101dde844  cbz w9,0x7101ddeae4
7101dde848  str wzr,[x20, #0xe4]
7101dde84c  b 0x7101ddead8
7101dde850  ldr w8,[x11, #0x25c]
7101dde854  cmp w8,#0xa
7101dde858  b.ne 0x7101dde8a4
7101dde85c  mov w1,#0x4
7101dde860  mov x0,x20
7101dde864  bl 0x7101ddc990
7101dde868  strb wzr,[x20, #0xb0]
7101dde86c  b 0x7101ddeae4
7101dde870  ldr x8,[x20, #0x8]
7101dde874  ldr x8,[x8]
7101dde878  ldr x8,[x8]
7101dde87c  ldr x8,[x8, #0x600]
7101dde880  ldrb w9,[x8, #0x4aa]
7101dde884  cbz w9,0x7101ddeae4
7101dde888  ldrb w8,[x8, #0x19c]
7101dde88c  tbz w8,#0x1,0x7101ddeae4
7101dde890  mov x23,x20
7101dde894  ldr x0,[x23, #0x30]!
7101dde898  mov x8,#0x3
7101dde89c  movk x8,#0x2, LSL #32
7101dde8a0  b 0x7101dde9bc
7101dde8a4  mov w8,#0x1039
7101dde8a8  ldrb w8,[x20, x8, LSL ]
7101dde8ac  cbz w8,0x7101ddeae4
7101dde8b0  eor w8,w9,#0x1
7101dde8b4  tbnz w8,#0x0,0x7101ddeae4
7101dde8b8  mov w1,#0x5
7101dde8bc  b 0x7101ddeadc
7101dde8c0  mov w10,wzr
7101dde8c4  mov w11,wzr
7101dde8c8  tbz w10,#0x0,0x7101dde764
7101dde8cc  b 0x7101ddead8
7101dde8d0  ldr x8,[x20, #0x40]
7101dde8d4  ldr w9,[x8, #0x2a4]
7101dde8d8  cmn w9,#0x1
7101dde8dc  b.eq 0x7101dde8ec
7101dde8e0  ldr w10,[x8, #0x28c]
7101dde8e4  sdiv w11,w9,w10
7101dde8e8  msub w9,w11,w10,w9
7101dde8ec  ldp x10,x11,[x20, #0x50]
7101dde8f0  sub x10,x11,x10
7101dde8f4  lsr x12,x10,#0x2
7101dde8f8  sub w11,w12,#0x1
7101dde8fc  cbz w12,0x7101ddeac4
7101dde900  ldr w10,[x8, #0x28c]
7101dde904  sdiv w13,w11,w10
7101dde908  msub w10,w13,w10,w11
7101dde90c  subs w13,w9,w10
7101dde910  b.le 0x7101ddead0
7101dde914  cbz w12,0x7101ddead4
7101dde918  ldr w8,[x8, #0x28c]
7101dde91c  sdiv w8,w11,w8
7101dde920  cmp w8,#0x1
7101dde924  b.lt 0x7101ddead4
7101dde928  sub w10,w11,w10
7101dde92c  sdiv w8,w10,w8
7101dde930  add w9,w10,w9
7101dde934  sub w10,w9,w8
7101dde938  b 0x7101ddead4
7101dde93c  mov x0,x20
7101dde940  ldr x8,[x0, #0xc8]!
7101dde944  ldr x9,[x0, #0x8]
7101dde948  sub x9,x9,x8
7101dde94c  ldrsw x10,[x20, #0xc0]
7101dde950  cmp x9,x10
7101dde954  b.ls 0x7101ddef44
7101dde958  ldrb w24,[x8, x10, LSL ]
7101dde95c  ldrb w8,[x20, #0xb0]
7101dde960  orr w21,wzr,#0xffff
7101dde964  cbz w8,0x7101ddea44
7101dde968  cmp w24,#0x3
7101dde96c  orr w19,wzr,#0xffff
7101dde970  b.cc 0x7101ddea48
7101dde974  mov x0,x20
7101dde978  ldr x8,[x0, #0x50]!
7101dde97c  ldur x9,[x0, #-0x10]
7101dde980  ldr x10,[x0, #0x8]
7101dde984  ldrsw x9,[x9, #0x2a4]
7101dde988  sub x10,x10,x8
7101dde98c  asr x10,x10,#0x2
7101dde990  cmp x10,x9
7101dde994  b.ls 0x7101ddef44
7101dde998  lsl x9,x9,#0x2
7101dde99c  ldrh w19,[x8, x9, LSL #0x0]
7101dde9a0  b 0x7101ddea48
7101dde9a4  mov w8,wzr
7101dde9a8  tbz w8,#0x0,0x7101dde780
7101dde9ac  mov x23,x20
7101dde9b0  ldr x0,[x23, #0x30]!
7101dde9b4  mov x8,#0x3
7101dde9b8  movk x8,#0x5, LSL #32
7101dde9bc  str x8,[x23, #0x78]
7101dde9c0  ldr x8,[x0]
7101dde9c4  ldr x8,[x8, #0x70]
7101dde9c8  mov w1,#0x1
7101dde9cc  blr x8
7101dde9d0  ldr x0,[x23]
7101dde9d4  ldr x8,[x0]
7101dde9d8  ldr x8,[x8, #0x60]
7101dde9dc  mov w1,#0x1
7101dde9e0  blr x8
7101dde9e4  mov w1,#0xa
7101dde9e8  mov x0,x23
7101dde9ec  mov w2,wzr
7101dde9f0  bl 0x7103771a80
7101dde9f4  ldr x0,[x23, #0x10]
7101dde9f8  ldr x8,[x0]
7101dde9fc  ldr x8,[x8, #0x70]
7101ddea00  mov w1,wzr
7101ddea04  blr x8
7101ddea08  ldr x0,[x23, #0x8]
7101ddea0c  ldr x8,[x0]
7101ddea10  ldr x8,[x8, #0x70]
7101ddea14  mov w1,wzr
7101ddea18  blr x8
7101ddea1c  b 0x7101ddeae4
7101ddea20  ldr x9,[x20, #0x40]
7101ddea24  ldr w8,[x9, #0x2a4]
7101ddea28  cmn w8,#0x1
7101ddea2c  b.eq 0x7101ddea3c
7101ddea30  ldr w9,[x9, #0x28c]
7101ddea34  sdiv w10,w8,w9
7101ddea38  msub w8,w10,w9,w8
7101ddea3c  str w8,[x20, #0xe4]
7101ddea40  b 0x7101ddead8
7101ddea44  orr w19,wzr,#0xffff
7101ddea48  mov x0,x20
7101ddea4c  mov w1,w24
7101ddea50  bl 0x7101ddc3a0
7101ddea54  add x0,x20,#0x50
7101ddea58  mov w1,w24
7101ddea5c  bl 0x7102528ea0
7101ddea60  mov x23,x20
7101ddea64  ldr x0,[x23, #0x40]!
7101ddea68  mov w1,#0x1
7101ddea6c  strb w24,[x23, #0x28]
7101ddea70  bl 0x710377cc80
7101ddea74  cmp w19,w21
7101ddea78  b.eq 0x7101ddeab4
7101ddea7c  ldp x8,x9,[x20, #0x50]
7101ddea80  subs x10,x9,x8
7101ddea84  b.eq 0x7101ddeaac
7101ddea88  mov x9,xzr
7101ddea8c  asr x10,x10,#0x2
7101ddea90  ldrh w11,[x8]
7101ddea94  cmp w11,w19
7101ddea98  b.eq 0x7101ddee30
7101ddea9c  add x9,x9,#0x1
7101ddeaa0  add x8,x8,#0x4
7101ddeaa4  cmp x10,x9
7101ddeaa8  b.hi 0x7101ddea90
7101ddeaac  mov w1,wzr
7101ddeab0  b 0x7101ddee34
7101ddeab4  mov x19,x20
7101ddeab8  mov w1,wzr
7101ddeabc  str wzr,[x19, #0xe4]!
7101ddeac0  b 0x7101ddee3c
7101ddeac4  mov w10,#0xffffffff
7101ddeac8  subs w13,w9,w10
7101ddeacc  b.gt 0x7101dde914
7101ddead0  add w10,w13,w11
7101ddead4  str w10,[x20, #0xe4]
7101ddead8  mov w1,#0x2
7101ddeadc  mov x0,x20
7101ddeae0  bl 0x7101ddc990
7101ddeae4  ldr w8,[x20, #0xa4]
7101ddeae8  cmp w8,#0x1
7101ddeaec  b.ne 0x7101ddeb34
7101ddeaf0  ldr x8,[x20, #0x30]
7101ddeaf4  ldr w8,[x8, #0x25c]
7101ddeaf8  cmp w8,#0xa
7101ddeafc  b.ne 0x7101ddeb34
7101ddeb00  mov x0,x20
7101ddeb04  bl 0x7101ddd370
7101ddeb08  tbnz w0,#0x0,0x7101ddeb34
7101ddeb0c  mov w1,#0x4
7101ddeb10  mov x0,x20
7101ddeb14  bl 0x7101ddc990
7101ddeb18  ldr w8,[x20, #0xa8]
7101ddeb1c  cmp w8,#0x3
7101ddeb20  b.ne 0x7101ddeb2c
7101ddeb24  strb wzr,[x20, #0xb0]
7101ddeb28  b 0x7101ddeb34
7101ddeb2c  mov w8,#0x1
7101ddeb30  strb w8,[x20, #0xb0]
7101ddeb34  strb wzr,[x20, #0xff0]
7101ddeb38  str wzr,[x20, #0xff4]
7101ddeb3c  adrp x9,0x7105329000
7101ddeb40  ldr x9,[x9, #0xf98]
7101ddeb44  adrp x8,0x710532f000
7101ddeb48  ldr x8,[x8, #0x730]
7101ddeb4c  ldr x10,[x9]
7101ddeb50  ldrh w9,[x20, #0x1018]
7101ddeb54  ldr x8,[x8, #0x8]
7101ddeb58  ldr x10,[x10, #0x30]
7101ddeb5c  ubfx x11,x9,#0x4,#0x1c
7101ddeb60  add x23,x8,#0x1e0
7101ddeb64  cmp w11,#0x177
7101ddeb68  stur x25,[x29, #-0x68]
7101ddeb6c  str x26,[sp, #0x8]
7101ddeb70  b.cc 0x7101ddebc0
7101ddeb74  mov w11,#0xffffe890
7101ddeb78  add w11,w9,w11
7101ddeb7c  adrp x9,0x710532a000
7101ddeb80  add x9,x9,#0x878
7101ddeb84  and w12,w11,#0xffff
7101ddeb88  cmp w12,#0x63
7101ddeb8c  b.hi 0x7101ddebd4
7101ddeb90  and x11,x11,#0xffff
7101ddeb94  mov w12,#0x50
7101ddeb98  madd x10,x11,x12,x10
7101ddeb9c  mov w12,#0x8cc8
7101ddeba0  movk w12,#0x8, LSL #16
7101ddeba4  mov w11,#0x8cc0
7101ddeba8  movk w11,#0x8, LSL #16
7101ddebac  ldrsh w12,[x10, x12, LSL #0x0]
7101ddebb0  add x10,x10,x11
7101ddebb4  cmn w12,#0x1
7101ddebb8  csel x9,x9,x10,eq
7101ddebbc  b 0x7101ddebd4
7101ddebc0  mov w11,#0x50
7101ddebc4  madd x9,x9,x11,x10
7101ddebc8  mov w10,#0x1940
7101ddebcc  movk w10,#0x1, LSL #16
7101ddebd0  add x9,x9,x10
7101ddebd4  ldrh w1,[x9, #0x8]
7101ddebd8  ldr x0,[x8, #0x1d8]
7101ddebdc  bl 0x71032a9470
7101ddebe0  mov x1,x0
7101ddebe4  orr w8,wzr,#0x3f800000
7101ddebe8  orr x9,xzr,#0x3f80000000000000
7101ddebec  sub x2,x29,#0xb0
7101ddebf0  mov x0,x23
7101ddebf4  stur x9,[x29, #-0x80]
7101ddebf8  stp xzr,xzr,[x29, #-0xb0]
7101ddebfc  stp x8,x9,[x29, #-0xa0]
7101ddec00  stp xzr,x8,[x29, #-0x90]
7101ddec04  bl 0x71032ab730
7101ddec08  adrp x8,0x7104472000
7101ddec0c  ldur s0,[x29, #-0x9c]
7101ddec10  fmov s3,0x41200000
7101ddec14  ldr s1,[x8, #0x61c]
7101ddec18  adrp x8,0x7104472000
7101ddec1c  ldr s2,[x8, #0x2bc]
7101ddec20  add x8,sp,#0xa8
7101ddec24  add x24,x8,#0x8
7101ddec28  adrp x8,0x7104471000
7101ddec2c  ldr s9,[x8, #0xd10]
7101ddec30  adrp x8,0x7104473000
7101ddec34  ldr s10,[x8, #0x91c]
7101ddec38  fadd s0,s0,s1
7101ddec3c  ldur s1,[x29, #-0xa8]
7101ddec40  fmul s1,s1,s2
7101ddec44  fsub s0,s0,s1
7101ddec48  ldur s1,[x29, #-0x98]
7101ddec4c  fadd s1,s1,s3
7101ddec50  ldur s3,[x29, #-0xa4]
7101ddec54  fmul s2,s3,s2
7101ddec58  movi v3.2D,#0x0
7101ddec5c  mov v3.S[0x0],v0.S[0x0]
7101ddec60  fsub s0,s1,s2
7101ddec64  mov v3.S[0x1],v0.S[0x0]
7101ddec68  fmov s8,0x41400000
7101ddec6c  mov x23,xzr
7101ddec70  add x25,x20,#0x110
7101ddec74  adrp x26,0x710435b000
7101ddec78  add x26,x26,#0xca0
7101ddec7c  mov w28,#0x1
7101ddec80  adrp x27,0x710523d000
7101ddec84  add x27,x27,#0x9a8
7101ddec88  orr w19,wzr,#0x3
7101ddec8c  mov w21,#0x2
7101ddec90  str q3,[sp, #0x10]
7101ddec94  ldur w8,[x25, #-0x20]
7101ddec98  cbz w8,0x7101ddeda8
7101ddec9c  ldr w8,[x20, #0xff4]
7101ddeca0  add w8,w8,#0x1
7101ddeca4  str w8,[x20, #0xff4]
7101ddeca8  add x8,sp,#0xa8
7101ddecac  mov x0,x26
7101ddecb0  mov w1,w23
7101ddecb4  bl 0x71003a4ca0
7101ddecb8  add x8,sp,#0x98
7101ddecbc  mov x0,x22
7101ddecc0  mov x1,x24
7101ddecc4  bl 0x7103776910
7101ddecc8  ldur w8,[x25, #-0x20]
7101ddeccc  cmp w8,#0x3
7101ddecd0  b.eq 0x7101dded4c
7101ddecd4  cmp w8,#0x2
7101ddecd8  b.eq 0x7101dded20
7101ddecdc  cmp w8,#0x1
7101ddece0  b.ne 0x7101dded98
7101ddece4  ldur w8,[x25, #-0x1c]
7101ddece8  add w8,w8,#0x1
7101ddecec  ldur q1,[x25, #-0x10]
7101ddecf0  scvtf s0,w8
7101ddecf4  fdiv s0,s0,s8
7101ddecf8  stur w8,[x25, #-0x1c]
7101ddecfc  stp q0,q1,[sp, #0x20]
7101dded00  fmul s0,s0,s9
7101dded04  bl 0x71039c07e0
7101dded08  ldur w8,[x25, #-0x1c]
7101dded0c  cmp w8,#0xd
7101dded10  b.lt 0x7101dded58
7101dded14  ldr q1,[sp, #0x10]
7101dded18  stur w21,[x25, #-0x20]
7101dded1c  b 0x7101dded7c
7101dded20  ldr x8,[sp, #0xa0]
7101dded24  ldr x8,[x8]
7101dded28  cbz x8,0x7101dded38
7101dded2c  ldrb w9,[x8, #0x58]
7101dded30  and w9,w9,#0xfe
7101dded34  strb w9,[x8, #0x58]
7101dded38  mov x0,x25
7101dded3c  mov w1,wzr
7101dded40  stur w19,[x25, #-0x20]
7101dded44  bl 0x710373b540
7101dded48  b 0x7101dded98
7101dded4c  strb w28,[x20, #0xff0]
7101dded50  stur wzr,[x25, #-0x20]
7101dded54  b 0x7101dded98
7101dded58  ldp q1,q3,[sp, #0x10]
7101dded5c  ldr q2,[sp, #0x30]
7101dded60  fsub v1.4S,v1.4S,v2.4S
7101dded64  fmul v1.4S,v1.4S,v3.S[0x0]
7101dded68  fmul s0,s0,s10
7101dded6c  fadd v1.4S,v2.4S,v1.4S
7101dded70  dup s2,v1.S[0x1]
7101dded74  fadd s0,s0,s2
7101dded78  mov v1.S[0x1],v0.S[0x0]
7101dded7c  ldr x0,[sp, #0xa0]
7101dded80  ldr x8,[x0]
7101dded84  cbz x8,0x7101dded9c
7101dded88  ldrb w9,[x8, #0x58]
7101dded8c  orr w9,w9,#0x10
7101dded90  str d1,[x8, #0x30]
7101dded94  strb w9,[x8, #0x58]
7101dded98  ldr x0,[sp, #0xa0]
7101dded9c  stp x27,xzr,[sp, #0x98]
7101ddeda0  cbz x0,0x7101ddeda8
7101ddeda4  bl 0x710392eb40
7101ddeda8  add x23,x23,#0x1
7101ddedac  add x25,x25,#0x60
7101ddedb0  cmp x23,#0x28
7101ddedb4  b.ne 0x7101ddec94
7101ddedb8  ldur x19,[x29, #-0x68]
7101ddedbc  ldr x20,[sp, #0x8]
7101ddedc0  adrp x8,0x710523d000
7101ddedc4  add x8,x8,#0x988
7101ddedc8  stp x8,xzr,[sp, #0x48]
7101ddedcc  cbz x20,0x7101ddede8
7101ddedd0  ldr x0,[x20, #0x18]
7101ddedd4  stp x27,xzr,[x20, #0x10]
7101ddedd8  cbz x0,0x7101ddede0
7101ddeddc  bl 0x710392eb40
7101ddede0  mov x0,x20
7101ddede4  bl 0x710392eb40
7101ddede8  ldr x8,[x19, #0x80]
7101ddedec  ldr w8,[x8, #0xa0]
7101ddedf0  cbnz w8,0x7101ddee08
7101ddedf4  ldrb w8,[x19, #0x70]
7101ddedf8  cmp w8,#0x1
7101ddedfc  b.eq 0x7101ddee08
7101ddee00  mov w8,#0x1
7101ddee04  strb w8,[x19, #0x70]
7101ddee08  ldp d9,d8,[sp, #0x140]
7101ddee0c  ldr d10,[sp, #0x130]
7101ddee10  ldp x29,x30,[sp, #0x1a0]
7101ddee14  ldp x20,x19,[sp, #0x190]
7101ddee18  ldp x22,x21,[sp, #0x180]
7101ddee1c  ldp x24,x23,[sp, #0x170]
7101ddee20  ldp x26,x25,[sp, #0x160]
7101ddee24  ldp x28,x27,[sp, #0x150]
7101ddee28  add sp,sp,#0x1b0
7101ddee2c  ret
7101ddee30  bic w1,w9,w9, ASR #0x1f
7101ddee34  mov x19,x20
7101ddee38  str w1,[x19, #0xe4]!
7101ddee3c  mov w3,#0x1
7101ddee40  mov x0,x23
7101ddee44  mov w2,wzr
7101ddee48  bl 0x7103783c10
7101ddee4c  ldrb w8,[x20, #0xb0]
7101ddee50  cbnz w8,0x7101ddeae4
7101ddee54  ldr w9,[x19]
7101ddee58  tbnz w9,#0x1f,0x7101ddeae4
7101ddee5c  ldr x8,[x23]
7101ddee60  ldr w10,[x8, #0x288]
7101ddee64  cmp w10,w9
7101ddee68  b.le 0x7101ddeae4
7101ddee6c  ldr w10,[x8, #0x29c]
7101ddee70  subs w9,w9,w10
7101ddee74  b.mi 0x7101ddeae4
7101ddee78  ldr w10,[x8, #0x2c4]
7101ddee7c  cmp w10,w9
7101ddee80  b.le 0x7101ddeae4
7101ddee84  ldr w10,[x8, #0x2c0]
7101ddee88  cmp w10,w9
7101ddee8c  b.le 0x7101ddeae4
7101ddee90  ldr x8,[x8, #0x168]
7101ddee94  ldr x8,[x8, w9, SXTW #0x3]
7101ddee98  ldr x23,[x8, #0x28]
7101ddee9c  cbz x23,0x7101ddeae4
7101ddeea0  ldr x8,[x23]
7101ddeea4  ldr x8,[x8, #0x218]
7101ddeea8  mov x0,x23
7101ddeeac  mov w1,wzr
7101ddeeb0  blr x8
7101ddeeb4  ldr x8,[x23]
7101ddeeb8  ldr x8,[x8, #0x410]
7101ddeebc  mov x0,x23
7101ddeec0  blr x8
7101ddeec4  ldr x8,[x23]
7101ddeec8  ldr x8,[x8, #0x3f0]
7101ddeecc  mov x0,x23
7101ddeed0  mov w1,wzr
7101ddeed4  blr x8
7101ddeed8  ldr x8,[x23]
7101ddeedc  ldr x8,[x8, #0x140]
7101ddeee0  mov x0,x23
7101ddeee4  blr x8
7101ddeee8  cmp w0,#0x6
7101ddeeec  b.eq 0x7101ddef18
7101ddeef0  ldr x8,[x23]
7101ddeef4  ldr x8,[x8, #0x140]
7101ddeef8  mov x0,x23
7101ddeefc  blr x8
7101ddef00  cmp w0,#0x1
7101ddef04  b.eq 0x7101ddef18
7101ddef08  ldr x8,[x23]
7101ddef0c  ldr x8,[x8, #0x400]
7101ddef10  mov x0,x23
7101ddef14  blr x8
7101ddef18  ldr x8,[x23]
7101ddef1c  ldr x8,[x8, #0x158]
7101ddef20  mov x0,x23
7101ddef24  blr x8
7101ddef28  tbnz w0,#0x0,0x7101ddeae4
7101ddef2c  ldr x8,[x23]
7101ddef30  ldr x8,[x8, #0x370]
7101ddef34  mov x0,x23
7101ddef38  blr x8
7101ddef3c  b 0x7101ddeae4
7101ddef40  add x0,x8,#0x608
7101ddef44  bl 0x71039c1330
