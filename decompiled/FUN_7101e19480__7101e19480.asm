// addr:      7101e19480
// offset:    0x1e19480
// name:      FUN_7101e19480
// mangled:   
// size:      8916

7101e19480  str d8,[sp, #-0x70]!
7101e19484  stp x28,x27,[sp, #0x10]
7101e19488  stp x26,x25,[sp, #0x20]
7101e1948c  stp x24,x23,[sp, #0x30]
7101e19490  stp x22,x21,[sp, #0x40]
7101e19494  stp x20,x19,[sp, #0x50]
7101e19498  stp x29,x30,[sp, #0x60]
7101e1949c  add x29,sp,#0x60
7101e194a0  sub sp,sp,#0x4c0
7101e194a4  ldr w8,[x0, #0x13c]
7101e194a8  mov x19,x0
7101e194ac  stur x0,[x29, #-0x58]
7101e194b0  cbz w8,0x7101e1958c
7101e194b4  ldr w9,[x19, #0xbc4]
7101e194b8  cmp w9,#0x4
7101e194bc  b.hi 0x7101e1aaf4
7101e194c0  ldr x8,[x19, #0x168]
7101e194c4  ldr x8,[x8]
7101e194c8  adrp x10,0x71044fb000
7101e194cc  add x10,x10,#0xa4c
7101e194d0  ldrsw x9,[x10, x9, LSL #0x2]
7101e194d4  add x9,x9,x10
7101e194d8  ldr x8,[x8]
7101e194dc  br x9
7101e194e0  ldr x8,[x8, #0x600]
7101e194e4  ldrb w9,[x8, #0x4aa]
7101e194e8  cbz w9,0x7101e1acd8
7101e194ec  ldr w8,[x8, #0x1ac]
7101e194f0  ubfx w9,w8,#0x1,#0x1
7101e194f4  strb w9,[x19, #0xbb1]
7101e194f8  tbz w8,#0x1,0x7101e1aaf4
7101e194fc  adrp x8,0x710532f000
7101e19500  ldr x8,[x8, #0x8d0]
7101e19504  ldr x0,[x8, #0x8]
7101e19508  ldrb w8,[x0, #0x191]
7101e1950c  cbnz w8,0x7101e1ad18
7101e19510  mov x19,#0xfe8c
7101e19514  movk x19,#0x53df, LSL #16
7101e19518  movk x19,#0x10, LSL #32
7101e1951c  mov w2,#0x4
7101e19520  mov x1,x19
7101e19524  bl 0x7103313f20
7101e19528  tbz w0,#0x0,0x7101e1ad18
7101e1952c  add x0,sp,#0x20
7101e19530  mov x1,x19
7101e19534  bl 0x71024076d0
7101e19538  ldr x8,[sp, #0x30]
7101e1953c  adrp x9,0x7104f73000
7101e19540  add x9,x9,#0xd50
7101e19544  str x9,[sp, #0x28]
7101e19548  cbz x8,0x7101e1ad44
7101e1954c  adrp x8,0x7106dd5000
7101e19550  ldrb w8,[x8, #0x3a8]
7101e19554  cmp w8,#0x1
7101e19558  b.ne 0x7101e1ad44
7101e1955c  adrp x9,0x7106dd5000
7101e19560  ldr w8,[sp, #0x38]
7101e19564  ldr w9,[x9, #0x3ac]
7101e19568  cmp w8,w9
7101e1956c  b.ne 0x7101e1ad44
7101e19570  ldr x8,[sp, #0x30]
7101e19574  ldr wzr,[x8, #0x38]!
7101e19578  ldaxr w9,[x8]
7101e1957c  sub w9,w9,#0x1
7101e19580  stlxr w10,w9,[x8]
7101e19584  cbnz w10,0x7101e19578
7101e19588  b 0x7101e1ad44
7101e1958c  ldr x8,[x19, #0x168]
7101e19590  ldr x8,[x8]
7101e19594  add x9,x8,#0x8
7101e19598  add x26,x19,#0xba0
7101e1959c  cmp x26,x9
7101e195a0  b.eq 0x7101e19614
7101e195a4  ldr x9,[x8, #0x10]
7101e195a8  ldr x9,[x9]
7101e195ac  ldr x10,[x19, #0xba8]
7101e195b0  str x9,[x10]
7101e195b4  ldr x9,[x8, #0x10]
7101e195b8  ldr x9,[x9, #0x8]
7101e195bc  ldr x10,[x19, #0xba8]
7101e195c0  str x9,[x10, #0x8]
7101e195c4  ldr x9,[x8, #0x10]
7101e195c8  ldr x8,[x19, #0xba8]
7101e195cc  cmp x8,x9
7101e195d0  b.eq 0x7101e19614
7101e195d4  ldr x10,[x9, #0x18]
7101e195d8  ldr x10,[x10]
7101e195dc  ldr x11,[x8, #0x18]
7101e195e0  str x10,[x11]
7101e195e4  ldr x10,[x9, #0x18]
7101e195e8  ldr x10,[x10, #0x8]
7101e195ec  ldr x11,[x8, #0x18]
7101e195f0  str x10,[x11, #0x8]
7101e195f4  ldr x10,[x9, #0x18]
7101e195f8  ldr x10,[x10, #0x10]
7101e195fc  ldr x11,[x8, #0x18]
7101e19600  str x10,[x11, #0x10]
7101e19604  ldr x9,[x9, #0x18]
7101e19608  ldr x9,[x9, #0x18]
7101e1960c  ldr x8,[x8, #0x18]
7101e19610  str x9,[x8, #0x18]
7101e19614  ldr x8,[x19, #0x168]
7101e19618  ldr x0,[x8]
7101e1961c  mov w2,#0x5000
7101e19620  mov w1,wzr
7101e19624  bl 0x7103775dc0
7101e19628  ldr x0,[x19, #0xba8]
7101e1962c  fmov s0,0x3f800000
7101e19630  adrp x1,0x7104421000
7101e19634  add x1,x1,#0x55
7101e19638  bl 0x7103778300
7101e1963c  mov w8,#0x101
7101e19640  strh w8,[sp, #0x2f8]
7101e19644  add x8,sp,#0x1fb
7101e19648  str xzr,[sp, #0x2f0]
7101e1964c  stur wzr,[x8, #0xff]
7101e19650  mov w8,#0x1
7101e19654  str w8,[sp, #0x300]
7101e19658  strh w8,[sp, #0x304]
7101e1965c  add x0,sp,#0x2f0
7101e19660  strb w8,[sp, #0x306]
7101e19664  mov x8,#0x41f0000000000000
7101e19668  str x8,[sp, #0x308]
7101e1966c  add x8,sp,#0x2f0
7101e19670  add x21,x8,#0x60
7101e19674  strh wzr,[sp, #0x2fe]
7101e19678  str wzr,[sp, #0x310]
7101e1967c  str xzr,[sp, #0x340]
7101e19680  str xzr,[sp, #0x370]
7101e19684  str xzr,[sp, #0x3a0]
7101e19688  str xzr,[sp, #0x3d0]
7101e1968c  str xzr,[sp, #0x400]
7101e19690  str wzr,[sp, #0x410]
7101e19694  bl 0x710337df20
7101e19698  adrp x8,0x71050b1000
7101e1969c  add x8,x8,#0x6f0
7101e196a0  add x19,sp,#0x1a0
7101e196a4  add x0,sp,#0x1a0
7101e196a8  mov x1,x21
7101e196ac  str x8,[sp, #0x1a0]
7101e196b0  str x19,[sp, #0x1c0]
7101e196b4  bl 0x7101989a30
7101e196b8  ldr x0,[sp, #0x1c0]
7101e196bc  cmp x19,x0
7101e196c0  b.eq 0x7101e196d4
7101e196c4  cbz x0,0x7101e196e0
7101e196c8  ldr x8,[x0]
7101e196cc  ldr x8,[x8, #0x28]
7101e196d0  b 0x7101e196dc
7101e196d4  ldr x8,[x0]
7101e196d8  ldr x8,[x8, #0x20]
7101e196dc  blr x8
7101e196e0  ldur x19,[x29, #-0x58]
7101e196e4  add x21,x19,#0x4f8
7101e196e8  adrp x2,0x7104307000
7101e196ec  add x2,x2,#0x72
7101e196f0  add x3,sp,#0x2f0
7101e196f4  mov x0,x21
7101e196f8  mov x1,x26
7101e196fc  bl 0x7103770b30
7101e19700  mov w22,#0x67
7101e19704  adrp x2,0x71043ae000
7101e19708  add x2,x2,#0xcc
7101e1970c  mov x0,x21
7101e19710  mov w1,w22
7101e19714  bl 0x71037717d0
7101e19718  mov x8,#0xce8
7101e1971c  movk x8,#0xfc42, LSL #16
7101e19720  movk x8,#0x7, LSL #32
7101e19724  str x8,[sp, #0x1a0]
7101e19728  ldr x0,[x19, #0x170]
7101e1972c  add x2,sp,#0x1a0
7101e19730  mov w1,w22
7101e19734  bl 0x7103772070
7101e19738  ldr x8,[x19, #0x150]
7101e1973c  ldr x8,[x8]
7101e19740  ldr x0,[x8]
7101e19744  mov w1,wzr
7101e19748  bl 0x71037760f0
7101e1974c  ldr x8,[x19, #0x168]
7101e19750  ldr x8,[x8]
7101e19754  ldr x0,[x8]
7101e19758  mov w1,#0x1
7101e1975c  bl 0x71037760f0
7101e19760  ldr x8,[x19, #0x160]
7101e19764  ldr x8,[x8]
7101e19768  ldr x0,[x8]
7101e1976c  mov w1,wzr
7101e19770  bl 0x71037760f0
7101e19774  ldr x8,[x19, #0x168]
7101e19778  ldr x8,[x8]
7101e1977c  ldr x8,[x8]
7101e19780  ldr x9,[x8, #0x600]
7101e19784  mov w10,#0x80
7101e19788  str w10,[x9, #0xdc]
7101e1978c  ldr x8,[x8, #0x600]
7101e19790  str w10,[x8, #0x24]
7101e19794  ldr x0,[x19, #0x4f8]
7101e19798  mov w2,#0x9
7101e1979c  mov w1,w22
7101e197a0  mov w3,wzr
7101e197a4  bl 0x7103771930
7101e197a8  str xzr,[sp, #0x2e8]
7101e197ac  str xzr,[sp, #0x2e0]
7101e197b0  mov w11,#0x5d8
7101e197b4  movk w11,#0x3, LSL #16
7101e197b8  str xzr,[sp, #0x2d8]
7101e197bc  ldr x8,[x19, #0x1020]
7101e197c0  add x20,x8,x11
7101e197c4  mov w11,#0x5e0
7101e197c8  movk w11,#0x3, LSL #16
7101e197cc  add x25,x8,x11
7101e197d0  ldr x11,[x25]
7101e197d4  ldr x8,[x20]
7101e197d8  mov x10,xzr
7101e197dc  mov x9,xzr
7101e197e0  str x26,[sp, #0x18]
7101e197e4  cmp x11,x8
7101e197e8  b.eq 0x7101e19a20
7101e197ec  adrp x9,0x7105329000
7101e197f0  ldr x9,[x9, #0xf98]
7101e197f4  ldr x22,[x9]
7101e197f8  mov x26,xzr
7101e197fc  adrp x23,0x710532f000
7101e19800  mov w24,#0xcccd
7101e19804  movk w24,#0xcccc, LSL #16
7101e19808  mov w28,#0x24
7101e1980c  str x22,[sp, #0x10]
7101e19810  ldr x8,[x8, x26, LSL #0x3]
7101e19814  ldrsh w8,[x8, #0x48]
7101e19818  cmn w8,#0x1
7101e1981c  b.eq 0x7101e199f8
7101e19820  cmp w8,#0x7cf
7101e19824  b.gt 0x7101e199f8
7101e19828  ldr x9,[x23, #0x730]
7101e1982c  ldr x9,[x9, #0x8]
7101e19830  ldr x13,[x9, #0x1d8]
7101e19834  ldp x10,x11,[x13, #0x20]
7101e19838  sxtw x27,w8
7101e1983c  add x14,x13,x27, LSL #0x1
7101e19840  ldrh w9,[x14, #0x60]
7101e19844  sub x12,x11,x10
7101e19848  lsr x12,x12,#0x6
7101e1984c  mul w12,w12,w24
7101e19850  cmp w12,w9
7101e19854  b.ls 0x7101e19868
7101e19858  mul x15,x27,x28
7101e1985c  ldr x12,[x22, #0x30]
7101e19860  ldrb w15,[x12, x15, LSL ]
7101e19864  cbnz w15,0x7101e19894
7101e19868  ldp x10,x11,[x13, #0x20]
7101e1986c  sub x12,x11,x10
7101e19870  ldrh w9,[x14, #0x60]
7101e19874  lsr x12,x12,#0x6
7101e19878  mul w12,w12,w24
7101e1987c  cmp w12,w9
7101e19880  b.ls 0x7101e199f8
7101e19884  ldr x12,[x22, #0x30]
7101e19888  madd x13,x27,x28,x12
7101e1988c  ldrh w13,[x13, #0x20]
7101e19890  cbz w13,0x7101e199f8
7101e19894  sub x10,x11,x10
7101e19898  lsr x10,x10,#0x6
7101e1989c  mul w10,w10,w24
7101e198a0  cmp w10,w9
7101e198a4  b.ls 0x7101e198b4
7101e198a8  mul x9,x27,x28
7101e198ac  ldrb w19,[x12, x9, LSL ]
7101e198b0  b 0x7101e198b8
7101e198b4  mov w19,wzr
7101e198b8  ldr x10,[sp, #0x2e0]
7101e198bc  ldr x9,[sp, #0x2e8]
7101e198c0  cmp x10,x9
7101e198c4  b.eq 0x7101e198e8
7101e198c8  and w8,w8,#0xffff
7101e198cc  bfm w8,w19,#0x10,#0x7
7101e198d0  ldur x19,[x29, #-0x58]
7101e198d4  str w8,[x10]
7101e198d8  ldr x8,[sp, #0x2e0]
7101e198dc  add x8,x8,#0x4
7101e198e0  str x8,[sp, #0x2e0]
7101e198e4  b 0x7101e199f8
7101e198e8  ldr x21,[sp, #0x2d8]
7101e198ec  sub x22,x10,x21
7101e198f0  asr x28,x22,#0x2
7101e198f4  add x8,x28,#0x1
7101e198f8  lsr x10,x8,#0x3e
7101e198fc  cbnz x10,0x7101e1b718
7101e19900  sub x9,x9,x21
7101e19904  asr x10,x9,#0x2
7101e19908  orr x11,xzr,#0x1ffffffffffffffe
7101e1990c  cmp x10,x11
7101e19910  b.hi 0x7101e19930
7101e19914  asr x9,x9,#0x1
7101e19918  cmp x9,x8
7101e1991c  csel x24,x8,x9,cc
7101e19920  cbz x24,0x7101e19998
7101e19924  lsr x8,x24,#0x3e
7101e19928  cbz x8,0x7101e19934
7101e1992c  b 0x7101e1b720
7101e19930  orr x24,xzr,#0x3fffffffffffffff
7101e19934  lsl x8,x24,#0x2
7101e19938  cmp x8,#0x0
7101e1993c  csinc x1,x8,xzr,ne
7101e19940  mov w0,#0x10
7101e19944  str x1,[sp, #0x8]
7101e19948  bl 0x710392e290
7101e1994c  mov x23,x0
7101e19950  cbnz x0,0x7101e1999c
7101e19954  adrp x8,0x7105332000
7101e19958  ldr x0,[x8, #0xf00]
7101e1995c  cbz x0,0x7101e19998
7101e19960  ldr x8,[sp, #0x8]
7101e19964  stur wzr,[x29, #-0xd0]
7101e19968  sub x1,x29,#0xd0
7101e1996c  add x2,sp,#0x1a0
7101e19970  str x8,[sp, #0x1a0]
7101e19974  ldr x8,[x0]
7101e19978  ldr x8,[x8, #0x30]
7101e1997c  blr x8
7101e19980  tbz w0,#0x0,0x7101e19998
7101e19984  ldr x1,[sp, #0x8]
7101e19988  mov w0,#0x10
7101e1998c  bl 0x710392e290
7101e19990  mov x23,x0
7101e19994  cbnz x0,0x7101e1999c
7101e19998  mov x23,xzr
7101e1999c  and w8,w27,#0xffff
7101e199a0  add x28,x23,x28, LSL #0x2
7101e199a4  cmp x22,#0x1
7101e199a8  bfm w8,w19,#0x10,#0x7
7101e199ac  add x19,x23,x24, LSL #0x2
7101e199b0  str w8,[x28], #0x4
7101e199b4  b.lt 0x7101e199c8
7101e199b8  mov x0,x23
7101e199bc  mov x1,x21
7101e199c0  mov x2,x22
7101e199c4  bl 0x71039c00e0
7101e199c8  str x19,[sp, #0x2e8]
7101e199cc  ldur x19,[x29, #-0x58]
7101e199d0  ldr x22,[sp, #0x10]
7101e199d4  str x23,[sp, #0x2d8]
7101e199d8  str x28,[sp, #0x2e0]
7101e199dc  adrp x23,0x710532f000
7101e199e0  mov w24,#0xcccd
7101e199e4  movk w24,#0xcccc, LSL #16
7101e199e8  mov w28,#0x24
7101e199ec  cbz x21,0x7101e199f8
7101e199f0  mov x0,x21
7101e199f4  bl 0x710392eb40
7101e199f8  ldr x9,[x25]
7101e199fc  ldr x8,[x20]
7101e19a00  sub x9,x9,x8
7101e19a04  add x26,x26,#0x1
7101e19a08  asr x9,x9,#0x3
7101e19a0c  cmp x9,x26
7101e19a10  b.hi 0x7101e19810
7101e19a14  ldr x9,[sp, #0x2e0]
7101e19a18  ldr x10,[sp, #0x2d8]
7101e19a1c  ldr x26,[sp, #0x18]
7101e19a20  sub x8,x9,x10
7101e19a24  lsr x27,x8,#0x2
7101e19a28  cbz w27,0x7101e19a40
7101e19a2c  ldr x0,[x19, #0xba8]
7101e19a30  adrp x1,0x710438d000
7101e19a34  add x1,x1,#0x6f
7101e19a38  str wzr,[x19, #0xdd8]
7101e19a3c  b 0x7101e19a54
7101e19a40  ldr x0,[x19, #0xba8]
7101e19a44  mov w8,#0x1
7101e19a48  str w8,[x19, #0xdd8]
7101e19a4c  adrp x1,0x7104455000
7101e19a50  add x1,x1,#0x5e
7101e19a54  fmov s0,0x3f800000
7101e19a58  bl 0x7103778300
7101e19a5c  ldr x8,[sp, #0x2e0]
7101e19a60  ldr x22,[sp, #0x2d8]
7101e19a64  subs x21,x8,x22
7101e19a68  str xzr,[sp, #0x2d0]
7101e19a6c  str xzr,[sp, #0x2c8]
7101e19a70  str xzr,[sp, #0x2c0]
7101e19a74  b.eq 0x7101e19b14
7101e19a78  asr x19,x21,#0x2
7101e19a7c  lsr x8,x19,#0x3e
7101e19a80  cbnz x8,0x7101e1b72c
7101e19a84  mov w0,#0x10
7101e19a88  mov x1,x21
7101e19a8c  bl 0x710392e290
7101e19a90  mov x23,x0
7101e19a94  cbnz x0,0x7101e19adc
7101e19a98  adrp x8,0x7105332000
7101e19a9c  ldr x0,[x8, #0xf00]
7101e19aa0  cbz x0,0x7101e19ad8
7101e19aa4  stur wzr,[x29, #-0xd0]
7101e19aa8  str x21,[sp, #0x1a0]
7101e19aac  ldr x8,[x0]
7101e19ab0  ldr x8,[x8, #0x30]
7101e19ab4  sub x1,x29,#0xd0
7101e19ab8  add x2,sp,#0x1a0
7101e19abc  blr x8
7101e19ac0  tbz w0,#0x0,0x7101e19ad8
7101e19ac4  mov w0,#0x10
7101e19ac8  mov x1,x21
7101e19acc  bl 0x710392e290
7101e19ad0  mov x23,x0
7101e19ad4  cbnz x0,0x7101e19adc
7101e19ad8  mov x23,xzr
7101e19adc  add x8,x23,x19, LSL #0x2
7101e19ae0  cmp x21,#0x1
7101e19ae4  str x23,[sp, #0x2c8]
7101e19ae8  str x23,[sp, #0x2c0]
7101e19aec  str x8,[sp, #0x2d0]
7101e19af0  b.lt 0x7101e19d64
7101e19af4  mov x0,x23
7101e19af8  mov x1,x22
7101e19afc  mov x2,x21
7101e19b00  bl 0x71039c00e0
7101e19b04  add x2,x23,x21
7101e19b08  mov x1,x23
7101e19b0c  str x2,[sp, #0x2c8]
7101e19b10  b 0x7101e19d6c
7101e19b14  mov x23,xzr
7101e19b18  mov x1,xzr
7101e19b1c  mov x2,xzr
7101e19b20  b 0x7101e19d70
7101e19b24  ldr x20,[x19, #0x4f0]
7101e19b28  mov x0,x20
7101e19b2c  bl 0x71032cc6c0
7101e19b30  ldr x9,[x20]
7101e19b34  cbz x9,0x7101e19b5c
7101e19b38  ldp x8,x11,[x20, #0x8]
7101e19b3c  and x10,x11,#0x1
7101e19b40  orr x12,x10,x8
7101e19b44  cbz x12,0x7101e19b5c
7101e19b48  add x0,x9,x11, ASR #0x1
7101e19b4c  cbz x10,0x7101e19b58
7101e19b50  ldr x9,[x0]
7101e19b54  ldr x8,[x9, x8, LSL #0x0]
7101e19b58  blr x8
7101e19b5c  ldr w8,[x20, #0xbc]
7101e19b60  add w8,w8,#0x1
7101e19b64  str w8,[x20, #0xbc]
7101e19b68  ldr x8,[x19, #0x4f0]
7101e19b6c  ldr w9,[x8, #0xb8]
7101e19b70  cbz w9,0x7101e1ab2c
7101e19b74  mov x21,x19
7101e19b78  ldr w19,[x8, #0x130]
7101e19b7c  cmn w19,#0x2
7101e19b80  b.eq 0x7101e1aaf4
7101e19b84  add x0,x21,#0x4d0
7101e19b88  bl 0x71032cc9f0
7101e19b8c  tbnz w19,#0x1f,0x7101e1aaf4
7101e19b90  ldr x9,[x21, #0xb68]
7101e19b94  ldr x8,[x21, #0xb60]
7101e19b98  sxtw x10,w19
7101e19b9c  sub x9,x9,x8
7101e19ba0  cmp x9,x10
7101e19ba4  b.ls 0x7101e1aaf4
7101e19ba8  ldr w10,[x21, #0xb78]
7101e19bac  cmp w10,w19
7101e19bb0  b.eq 0x7101e1aaf4
7101e19bb4  cmp x9,x19
7101e19bb8  str w19,[x21, #0xb78]
7101e19bbc  b.ls 0x7101e1b744
7101e19bc0  ldrb w20,[x8, x19, LSL ]
7101e19bc4  ldrb w8,[x21, #0xf05]
7101e19bc8  orr w22,wzr,#0xffff
7101e19bcc  mov x19,x21
7101e19bd0  cbz w8,0x7101e1b2e0
7101e19bd4  cmp w20,#0x3
7101e19bd8  b.cc 0x7101e1b2e0
7101e19bdc  ldr x8,[x19, #0x500]
7101e19be0  ldrsw x8,[x8, #0x2a4]
7101e19be4  cbz w8,0x7101e1b2dc
7101e19be8  ldr x10,[x19, #0x518]
7101e19bec  ldr x9,[x19, #0x510]
7101e19bf0  sub x10,x10,x9
7101e19bf4  sub x8,x8,#0x1
7101e19bf8  asr x10,x10,#0x2
7101e19bfc  cmp x10,x8
7101e19c00  b.ls 0x7101e1b74c
7101e19c04  lsl x8,x8,#0x2
7101e19c08  ldrh w22,[x9, x8, LSL #0x0]
7101e19c0c  b 0x7101e1b2e0
7101e19c10  ldr x9,[x8, #0x600]
7101e19c14  ldrb w10,[x9, #0x4aa]
7101e19c18  cbz w10,0x7101e1ab90
7101e19c1c  ldrb w9,[x9, #0x1a8]
7101e19c20  ubfx w9,w9,#0x1,#0x1
7101e19c24  b 0x7101e1ab94
7101e19c28  ldr x9,[x8, #0x600]
7101e19c2c  ldrb w10,[x9, #0x4aa]
7101e19c30  cbz w10,0x7101e1ac0c
7101e19c34  ldr w9,[x9, #0x1ac]
7101e19c38  ubfx w10,w9,#0x1,#0x1
7101e19c3c  strb w10,[x19, #0xbb1]
7101e19c40  tbz w9,#0x1,0x7101e1ac10
7101e19c44  adrp x8,0x710532f000
7101e19c48  ldr x8,[x8, #0x8d0]
7101e19c4c  ldr x0,[x8, #0x8]
7101e19c50  ldrb w8,[x0, #0x191]
7101e19c54  cbnz w8,0x7101e1ace0
7101e19c58  mov x19,#0xfe8c
7101e19c5c  movk x19,#0x53df, LSL #16
7101e19c60  movk x19,#0x10, LSL #32
7101e19c64  mov w2,#0x4
7101e19c68  mov x1,x19
7101e19c6c  bl 0x7103313f20
7101e19c70  tbz w0,#0x0,0x7101e1ace0
7101e19c74  add x0,sp,#0x160
7101e19c78  mov x1,x19
7101e19c7c  bl 0x71024076d0
7101e19c80  ldr x8,[sp, #0x170]
7101e19c84  adrp x9,0x7104f73000
7101e19c88  add x9,x9,#0xd50
7101e19c8c  str x9,[sp, #0x168]
7101e19c90  cbz x8,0x7101e1ad0c
7101e19c94  adrp x8,0x7106dd5000
7101e19c98  ldrb w8,[x8, #0x3a8]
7101e19c9c  cmp w8,#0x1
7101e19ca0  b.ne 0x7101e1ad0c
7101e19ca4  adrp x9,0x7106dd5000
7101e19ca8  ldr w8,[sp, #0x178]
7101e19cac  ldr w9,[x9, #0x3ac]
7101e19cb0  cmp w8,w9
7101e19cb4  b.ne 0x7101e1ad0c
7101e19cb8  ldr x8,[sp, #0x170]
7101e19cbc  ldr wzr,[x8, #0x38]!
7101e19cc0  ldaxr w9,[x8]
7101e19cc4  sub w9,w9,#0x1
7101e19cc8  stlxr w10,w9,[x8]
7101e19ccc  cbnz w10,0x7101e19cc0
7101e19cd0  b 0x7101e1ad0c
7101e19cd4  ldr x8,[x19, #0xba8]
7101e19cd8  ldr x0,[x8, #0x8]
7101e19cdc  cbz x0,0x7101e19d00
7101e19ce0  adrp x1,0x7104421000
7101e19ce4  add x1,x1,#0x55
7101e19ce8  bl 0x71037964b0
7101e19cec  cbz x0,0x7101e19d00
7101e19cf0  ldr x8,[x0]
7101e19cf4  ldr x8,[x8, #0x138]
7101e19cf8  blr x8
7101e19cfc  tbz w0,#0x0,0x7101e1aaf4
7101e19d00  add x0,x19,#0x170
7101e19d04  mov w1,#0x68
7101e19d08  mov w2,#0x1
7101e19d0c  bl 0x7103771a80
7101e19d10  ldr w8,[x19, #0xbc4]
7101e19d14  cmp w8,#0x2
7101e19d18  b.eq 0x7101e1aaf4
7101e19d1c  str w8,[x19, #0xbc8]
7101e19d20  mov w8,#0x2
7101e19d24  ldr x0,[x19, #0x4f8]
7101e19d28  str w8,[x19, #0xbc4]
7101e19d2c  ldr x8,[x0]
7101e19d30  ldr x8,[x8, #0x70]
7101e19d34  mov w1,wzr
7101e19d38  blr x8
7101e19d3c  ldr x0,[x19, #0x4f8]
7101e19d40  ldr x8,[x0]
7101e19d44  ldr x8,[x8, #0x60]
7101e19d48  mov w1,#0x1
7101e19d4c  blr x8
7101e19d50  ldr x0,[x19, #0x500]
7101e19d54  ldr x8,[x0]
7101e19d58  ldr x2,[x8, #0x70]
7101e19d5c  mov w1,#0x1
7101e19d60  b 0x7101e1afec
7101e19d64  mov x1,x23
7101e19d68  mov x2,x23
7101e19d6c  ldur x19,[x29, #-0x58]
7101e19d70  ldr x8,[x19, #0x510]
7101e19d74  add x0,x19,#0x510
7101e19d78  str x8,[x19, #0x518]
7101e19d7c  add x8,sp,#0x2c0
7101e19d80  cmp x0,x8
7101e19d84  b.eq 0x7101e19d94
7101e19d88  bl 0x7101ddb3c0
7101e19d8c  ldr x23,[sp, #0x2c0]
7101e19d90  mov x1,x23
7101e19d94  cbz x1,0x7101e19da4
7101e19d98  mov x0,x23
7101e19d9c  str x1,[sp, #0x2c8]
7101e19da0  bl 0x710392eb40
7101e19da4  ldr x21,[x19, #0xb60]
7101e19da8  ldr x8,[x19, #0xb70]
7101e19dac  subs x8,x8,x21
7101e19db0  str x21,[x19, #0xb68]
7101e19db4  b.ls 0x7101e19dcc
7101e19db8  strb wzr,[x21]
7101e19dbc  ldr x8,[x19, #0xb68]
7101e19dc0  add x8,x8,#0x1
7101e19dc4  str x8,[x19, #0xb68]
7101e19dc8  b 0x7101e19e64
7101e19dcc  orr x9,xzr,#0x3ffffffffffffffe
7101e19dd0  cmp x8,x9
7101e19dd4  b.hi 0x7101e19de8
7101e19dd8  lsl x8,x8,#0x1
7101e19ddc  cmp x8,#0x0
7101e19de0  csinc x22,x8,xzr,ne
7101e19de4  b 0x7101e19dec
7101e19de8  orr x22,xzr,#0x7fffffffffffffff
7101e19dec  mov w0,#0x10
7101e19df0  mov x1,x22
7101e19df4  bl 0x710392e290
7101e19df8  cbnz x0,0x7101e19e3c
7101e19dfc  adrp x8,0x7105332000
7101e19e00  ldr x0,[x8, #0xf00]
7101e19e04  cbz x0,0x7101e19e38
7101e19e08  stur wzr,[x29, #-0xd0]
7101e19e0c  str x22,[sp, #0x1a0]
7101e19e10  ldr x8,[x0]
7101e19e14  ldr x8,[x8, #0x30]
7101e19e18  sub x1,x29,#0xd0
7101e19e1c  add x2,sp,#0x1a0
7101e19e20  blr x8
7101e19e24  tbz w0,#0x0,0x7101e19e38
7101e19e28  mov w0,#0x10
7101e19e2c  mov x1,x22
7101e19e30  bl 0x710392e290
7101e19e34  cbnz x0,0x7101e19e3c
7101e19e38  mov x0,xzr
7101e19e3c  mov x8,x0
7101e19e40  add x9,x0,x22
7101e19e44  strb wzr,[x8], #0x1
7101e19e48  str x0,[x19, #0xb60]
7101e19e4c  str x8,[x19, #0xb68]
7101e19e50  str x9,[x19, #0xb70]
7101e19e54  cbz x21,0x7101e19e64
7101e19e58  mov x0,x21
7101e19e5c  bl 0x710392eb40
7101e19e60  ldr x8,[x19, #0xb68]
7101e19e64  ldr x9,[x19, #0xb70]
7101e19e68  add x21,x19,#0xb60
7101e19e6c  cmp x8,x9
7101e19e70  b.cs 0x7101e19e8c
7101e19e74  mov w9,#0x4
7101e19e78  strb w9,[x8]
7101e19e7c  ldr x8,[x19, #0xb68]
7101e19e80  add x8,x8,#0x1
7101e19e84  str x8,[x19, #0xb68]
7101e19e88  b 0x7101e19f64
7101e19e8c  ldr x22,[x21]
7101e19e90  sub x23,x8,x22
7101e19e94  adds x8,x23,#0x1
7101e19e98  b.mi 0x7101e1b73c
7101e19e9c  sub x9,x9,x22
7101e19ea0  orr x10,xzr,#0x3ffffffffffffffe
7101e19ea4  cmp x9,x10
7101e19ea8  b.hi 0x7101e19ec0
7101e19eac  lsl x9,x9,#0x1
7101e19eb0  cmp x9,x8
7101e19eb4  csel x24,x8,x9,cc
7101e19eb8  cbnz x24,0x7101e19ec4
7101e19ebc  b 0x7101e19f18
7101e19ec0  orr x24,xzr,#0x7fffffffffffffff
7101e19ec4  mov w0,#0x10
7101e19ec8  mov x1,x24
7101e19ecc  bl 0x710392e290
7101e19ed0  cbz x0,0x7101e19edc
7101e19ed4  mov x25,x0
7101e19ed8  b 0x7101e19f1c
7101e19edc  adrp x8,0x7105332000
7101e19ee0  ldr x0,[x8, #0xf00]
7101e19ee4  cbz x0,0x7101e19f18
7101e19ee8  stur wzr,[x29, #-0xd0]
7101e19eec  str x24,[sp, #0x1a0]
7101e19ef0  ldr x8,[x0]
7101e19ef4  ldr x8,[x8, #0x30]
7101e19ef8  sub x1,x29,#0xd0
7101e19efc  add x2,sp,#0x1a0
7101e19f00  blr x8
7101e19f04  tbz w0,#0x0,0x7101e19f18
7101e19f08  mov w0,#0x10
7101e19f0c  mov x1,x24
7101e19f10  bl 0x710392e290
7101e19f14  cbnz x0,0x7101e19ed4
7101e19f18  mov x25,xzr
7101e19f1c  add x20,x25,x23
7101e19f20  mov w8,#0x4
7101e19f24  add x19,x25,x24
7101e19f28  cmp x23,#0x1
7101e19f2c  strb w8,[x20], #0x1
7101e19f30  b.lt 0x7101e19f44
7101e19f34  mov x0,x25
7101e19f38  mov x1,x22
7101e19f3c  mov x2,x23
7101e19f40  bl 0x71039c00e0
7101e19f44  ldur x8,[x29, #-0x58]
7101e19f48  str x19,[x8, #0xb70]
7101e19f4c  mov x19,x8
7101e19f50  str x25,[x8, #0xb60]
7101e19f54  str x20,[x8, #0xb68]
7101e19f58  cbz x22,0x7101e19f64
7101e19f5c  mov x0,x22
7101e19f60  bl 0x710392eb40
7101e19f64  adrp x1,0x71043ae000
7101e19f68  add x1,x1,#0xcc
7101e19f6c  sub x8,x29,#0x90
7101e19f70  mov x0,x26
7101e19f74  str wzr,[x19, #0xb78]
7101e19f78  bl 0x7103776640
7101e19f7c  adrp x1,0x71043ad000
7101e19f80  add x1,x1,#0xfe3
7101e19f84  sub x8,x29,#0xa0
7101e19f88  sub x0,x29,#0x90
7101e19f8c  bl 0x7103776910
7101e19f90  adrp x1,0x7104431000
7101e19f94  add x1,x1,#0x6d5
7101e19f98  sub x8,x29,#0xd0
7101e19f9c  sub x0,x29,#0x90
7101e19fa0  bl 0x7103776910
7101e19fa4  ldr x10,[x19, #0xb68]
7101e19fa8  ldr x9,[x19, #0xb60]
7101e19fac  sub x10,x10,x9
7101e19fb0  ldr w8,[x19, #0xb78]
7101e19fb4  cmp x10,x8
7101e19fb8  b.ls 0x7101e1b724
7101e19fbc  ldrb w8,[x9, x8, LSL ]
7101e19fc0  mov w23,#0x9dc5
7101e19fc4  movk w23,#0x811c, LSL #16
7101e19fc8  cmp w8,#0x4
7101e19fcc  b.hi 0x7101e1ab18
7101e19fd0  adrp x9,0x71044fb000
7101e19fd4  add x9,x9,#0xa74
7101e19fd8  ldrsw x8,[x9, x8, LSL #0x2]
7101e19fdc  add x8,x8,x9
7101e19fe0  br x8
7101e19fe4  mov x10,#0x6e6d
7101e19fe8  movk x10,#0x5f75, LSL #16
7101e19fec  mov x8,#0x1300000000
7101e19ff0  add x9,sp,#0x1a0
7101e19ff4  movk x10,#0x7073, LSL #32
7101e19ff8  movk x10,#0x7269, LSL #48
7101e19ffc  stp x8,x10,[sp, #0x1a0]
7101e1a000  add x1,x9,#0x8
7101e1a004  add x8,x9,#0x9
7101e1a008  mov x9,#0x7469
7101e1a00c  movk x9,#0x5f73, LSL #16
7101e1a010  movk x9,#0x6f73, LSL #32
7101e1a014  movk x9,#0x7472, LSL #48
7101e1a018  str x9,[sp, #0x1b0]
7101e1a01c  mov w9,#0x315f
7101e1a020  movk w9,#0x38, LSL #16
7101e1a024  str w9,[sp, #0x1b8]
7101e1a028  mov w10,#0x6d
7101e1a02c  mov w9,#0x89
7101e1a030  mov w11,w23
7101e1a034  mul w11,w11,w9
7101e1a038  and w10,w10,#0xff
7101e1a03c  eor w11,w11,w10
7101e1a040  ldrb w10,[x8], #0x1
7101e1a044  cbnz w10,0x7101e1a034
7101e1a048  b 0x7101e1a1e8
7101e1a04c  mov x10,#0x6e6d
7101e1a050  movk x10,#0x5f75, LSL #16
7101e1a054  mov x8,#0x1300000000
7101e1a058  add x9,sp,#0x1a0
7101e1a05c  movk x10,#0x7073, LSL #32
7101e1a060  movk x10,#0x7269, LSL #48
7101e1a064  stp x8,x10,[sp, #0x1a0]
7101e1a068  add x1,x9,#0x8
7101e1a06c  add x8,x9,#0x9
7101e1a070  mov x9,#0x7469
7101e1a074  movk x9,#0x5f73, LSL #16
7101e1a078  movk x9,#0x6f73, LSL #32
7101e1a07c  movk x9,#0x7472, LSL #48
7101e1a080  str x9,[sp, #0x1b0]
7101e1a084  mov w9,#0x325f
7101e1a088  movk w9,#0x32, LSL #16
7101e1a08c  str w9,[sp, #0x1b8]
7101e1a090  mov w10,#0x6d
7101e1a094  mov w9,#0x89
7101e1a098  mov w11,w23
7101e1a09c  mul w11,w11,w9
7101e1a0a0  and w10,w10,#0xff
7101e1a0a4  eor w11,w11,w10
7101e1a0a8  ldrb w10,[x8], #0x1
7101e1a0ac  cbnz w10,0x7101e1a09c
7101e1a0b0  b 0x7101e1a1e8
7101e1a0b4  mov x10,#0x6e6d
7101e1a0b8  movk x10,#0x5f75, LSL #16
7101e1a0bc  mov x8,#0x1300000000
7101e1a0c0  add x9,sp,#0x1a0
7101e1a0c4  movk x10,#0x7073, LSL #32
7101e1a0c8  movk x10,#0x7269, LSL #48
7101e1a0cc  stp x8,x10,[sp, #0x1a0]
7101e1a0d0  add x1,x9,#0x8
7101e1a0d4  add x8,x9,#0x9
7101e1a0d8  mov x9,#0x7469
7101e1a0dc  movk x9,#0x5f73, LSL #16
7101e1a0e0  movk x9,#0x6f73, LSL #32
7101e1a0e4  movk x9,#0x7472, LSL #48
7101e1a0e8  str x9,[sp, #0x1b0]
7101e1a0ec  mov w9,#0x305f
7101e1a0f0  movk w9,#0x34, LSL #16
7101e1a0f4  str w9,[sp, #0x1b8]
7101e1a0f8  mov w10,#0x6d
7101e1a0fc  mov w9,#0x89
7101e1a100  mov w11,w23
7101e1a104  mul w11,w11,w9
7101e1a108  and w10,w10,#0xff
7101e1a10c  eor w11,w11,w10
7101e1a110  ldrb w10,[x8], #0x1
7101e1a114  cbnz w10,0x7101e1a104
7101e1a118  b 0x7101e1a1e8
7101e1a11c  mov x10,#0x6e6d
7101e1a120  movk x10,#0x5f75, LSL #16
7101e1a124  mov x8,#0x1300000000
7101e1a128  add x9,sp,#0x1a0
7101e1a12c  movk x10,#0x7073, LSL #32
7101e1a130  movk x10,#0x7269, LSL #48
7101e1a134  stp x8,x10,[sp, #0x1a0]
7101e1a138  add x1,x9,#0x8
7101e1a13c  add x8,x9,#0x9
7101e1a140  mov x9,#0x7469
7101e1a144  movk x9,#0x5f73, LSL #16
7101e1a148  movk x9,#0x6f73, LSL #32
7101e1a14c  movk x9,#0x7472, LSL #48
7101e1a150  str x9,[sp, #0x1b0]
7101e1a154  mov w9,#0x305f
7101e1a158  movk w9,#0x32, LSL #16
7101e1a15c  str w9,[sp, #0x1b8]
7101e1a160  mov w10,#0x6d
7101e1a164  mov w9,#0x89
7101e1a168  mov w11,w23
7101e1a16c  mul w11,w11,w9
7101e1a170  and w10,w10,#0xff
7101e1a174  eor w11,w11,w10
7101e1a178  ldrb w10,[x8], #0x1
7101e1a17c  cbnz w10,0x7101e1a16c
7101e1a180  b 0x7101e1a1e8
7101e1a184  mov x10,#0x6e6d
7101e1a188  movk x10,#0x5f75, LSL #16
7101e1a18c  mov x8,#0x1300000000
7101e1a190  add x9,sp,#0x1a0
7101e1a194  movk x10,#0x7073, LSL #32
7101e1a198  movk x10,#0x7269, LSL #48
7101e1a19c  stp x8,x10,[sp, #0x1a0]
7101e1a1a0  add x1,x9,#0x8
7101e1a1a4  add x8,x9,#0x9
7101e1a1a8  mov x9,#0x7469
7101e1a1ac  movk x9,#0x5f73, LSL #16
7101e1a1b0  movk x9,#0x6f73, LSL #32
7101e1a1b4  movk x9,#0x7472, LSL #48
7101e1a1b8  str x9,[sp, #0x1b0]
7101e1a1bc  mov w9,#0x305f
7101e1a1c0  movk w9,#0x33, LSL #16
7101e1a1c4  str w9,[sp, #0x1b8]
7101e1a1c8  mov w10,#0x6d
7101e1a1cc  mov w9,#0x89
7101e1a1d0  mov w11,w23
7101e1a1d4  mul w11,w11,w9
7101e1a1d8  and w10,w10,#0xff
7101e1a1dc  eor w11,w11,w10
7101e1a1e0  ldrb w10,[x8], #0x1
7101e1a1e4  cbnz w10,0x7101e1a1d4
7101e1a1e8  str w11,[sp, #0x1a0]
7101e1a1ec  sub x0,x29,#0xd0
7101e1a1f0  sub x19,x29,#0xd0
7101e1a1f4  bl 0x710377a120
7101e1a1f8  ldur x0,[x29, #-0xc8]
7101e1a1fc  adrp x8,0x710523d000
7101e1a200  add x8,x8,#0x9a8
7101e1a204  stp x8,xzr,[x29, #-0xd0]
7101e1a208  cbz x0,0x7101e1a210
7101e1a20c  bl 0x710392eb40
7101e1a210  fmov s8,0x3f800000
7101e1a214  ldur x20,[x29, #-0x88]
7101e1a218  adrp x1,0x710438d000
7101e1a21c  add x1,x1,#0x79
7101e1a220  mov v0.16B,v8.16B
7101e1a224  mov x0,x20
7101e1a228  bl 0x7103778300
7101e1a22c  mov v0.16B,v8.16B
7101e1a230  adrp x1,0x7104281000
7101e1a234  add x1,x1,#0x6d
7101e1a238  mov x0,x20
7101e1a23c  bl 0x7103778300
7101e1a240  adrp x1,0x71042b4000
7101e1a244  add x1,x1,#0x8bc
7101e1a248  sub x0,x29,#0xa0
7101e1a24c  bl 0x710377a120
7101e1a250  add x0,x19,#0x20
7101e1a254  stp xzr,xzr,[x29, #-0xc0]
7101e1a258  bl 0x7103776290
7101e1a25c  adrp x8,0x71052a8000
7101e1a260  ldr x8,[x8, #0xa80]
7101e1a264  ldr q0,[x8]
7101e1a268  ldur x9,[x29, #-0xa8]
7101e1a26c  stur q0,[x29, #-0xc0]
7101e1a270  str xzr,[x9, #0x8]
7101e1a274  mov x9,#0x4
7101e1a278  movk x9,#0x1, LSL #32
7101e1a27c  stur x9,[x29, #-0xd0]
7101e1a280  mov w9,#0x1
7101e1a284  stur w9,[x29, #-0xc8]
7101e1a288  ldr x9,[x20]
7101e1a28c  ldur x10,[x29, #-0xa8]
7101e1a290  str x9,[x10]
7101e1a294  ldr x9,[x20, #0x8]
7101e1a298  ldur x10,[x29, #-0xa8]
7101e1a29c  str x9,[x10, #0x8]
7101e1a2a0  ldur x9,[x29, #-0xa8]
7101e1a2a4  cmp x9,x20
7101e1a2a8  mov x10,x20
7101e1a2ac  b.eq 0x7101e1a2f4
7101e1a2b0  ldr x10,[x20, #0x18]
7101e1a2b4  ldr x10,[x10]
7101e1a2b8  ldr x11,[x9, #0x18]
7101e1a2bc  str x10,[x11]
7101e1a2c0  ldr x10,[x20, #0x18]
7101e1a2c4  ldr x10,[x10, #0x8]
7101e1a2c8  ldr x11,[x9, #0x18]
7101e1a2cc  str x10,[x11, #0x8]
7101e1a2d0  ldr x10,[x20, #0x18]
7101e1a2d4  ldr x10,[x10, #0x10]
7101e1a2d8  ldr x11,[x9, #0x18]
7101e1a2dc  str x10,[x11, #0x10]
7101e1a2e0  ldr x10,[x20, #0x18]
7101e1a2e4  ldr x10,[x10, #0x18]
7101e1a2e8  ldr x9,[x9, #0x18]
7101e1a2ec  str x10,[x9, #0x18]
7101e1a2f0  ldur x10,[x29, #-0xa8]
7101e1a2f4  ldr x9,[x10, #0x18]
7101e1a2f8  str x27,[sp, #0x10]
7101e1a2fc  ldur x19,[x29, #-0x58]
7101e1a300  str x20,[sp, #0x8]
7101e1a304  ldr x9,[x9]
7101e1a308  cbz x9,0x7101e1a324
7101e1a30c  movi v0.2D,#0x0
7101e1a310  add x8,x9,#0x30
7101e1a314  ld1 {v0.S}[0],[x8]
7101e1a318  add x8,x9,#0x34
7101e1a31c  ld1 {v0.S}[1],[x8]
7101e1a320  b 0x7101e1a328
7101e1a324  ldr q0,[x8]
7101e1a328  adrp x8,0x7104472000
7101e1a32c  ldr s1,[x8, #0xd30]
7101e1a330  fadd s1,s0,s1
7101e1a334  stp xzr,xzr,[x29, #-0xe0]
7101e1a338  stur xzr,[x29, #-0xe8]
7101e1a33c  mov v0.S[0x0],v1.S[0x0]
7101e1a340  stur q0,[x29, #-0xc0]
7101e1a344  ldr x9,[x19, #0xb68]
7101e1a348  ldr x8,[x19, #0xb60]
7101e1a34c  cmp x9,x8
7101e1a350  b.eq 0x7101e1a5ac
7101e1a354  add x9,sp,#0x1a0
7101e1a358  mov x20,#0x6e6d
7101e1a35c  movk x20,#0x5f75, LSL #16
7101e1a360  mov x24,#0x7469
7101e1a364  movk x24,#0x5f73, LSL #16
7101e1a368  mov x22,xzr
7101e1a36c  add x25,x9,#0x9
7101e1a370  add x28,x9,#0x8
7101e1a374  mov w26,#0x89
7101e1a378  movk x20,#0x7073, LSL #32
7101e1a37c  movk x20,#0x7269, LSL #48
7101e1a380  movk x24,#0x6f73, LSL #32
7101e1a384  movk x24,#0x7472, LSL #48
7101e1a388  mov w21,#0x6d
7101e1a38c  adrp x27,0x71044fb000
7101e1a390  add x27,x27,#0xa88
7101e1a394  ldrb w8,[x8, x22, LSL ]
7101e1a398  cmp w8,#0x4
7101e1a39c  b.hi 0x7101e1a538
7101e1a3a0  ldrsw x8,[x27, x8, LSL #0x2]
7101e1a3a4  add x8,x8,x27
7101e1a3a8  br x8
7101e1a3ac  mov x8,#0x1300000000
7101e1a3b0  stp x8,x20,[sp, #0x1a0]
7101e1a3b4  mov x8,x25
7101e1a3b8  mov w10,w21
7101e1a3bc  mov w9,w23
7101e1a3c0  mov w11,#0x315f
7101e1a3c4  movk w11,#0x38, LSL #16
7101e1a3c8  str x24,[sp, #0x1b0]
7101e1a3cc  str w11,[sp, #0x1b8]
7101e1a3d0  mul w9,w9,w26
7101e1a3d4  and w10,w10,#0xff
7101e1a3d8  eor w9,w9,w10
7101e1a3dc  ldrb w10,[x8], #0x1
7101e1a3e0  cbnz w10,0x7101e1a3d0
7101e1a3e4  b 0x7101e1a4d4
7101e1a3e8  mov x8,#0x1300000000
7101e1a3ec  stp x8,x20,[sp, #0x1a0]
7101e1a3f0  mov x8,x25
7101e1a3f4  mov w10,w21
7101e1a3f8  mov w9,w23
7101e1a3fc  mov w11,#0x325f
7101e1a400  movk w11,#0x32, LSL #16
7101e1a404  str x24,[sp, #0x1b0]
7101e1a408  str w11,[sp, #0x1b8]
7101e1a40c  mul w9,w9,w26
7101e1a410  and w10,w10,#0xff
7101e1a414  eor w9,w9,w10
7101e1a418  ldrb w10,[x8], #0x1
7101e1a41c  cbnz w10,0x7101e1a40c
7101e1a420  b 0x7101e1a4d4
7101e1a424  mov x8,#0x1300000000
7101e1a428  stp x8,x20,[sp, #0x1a0]
7101e1a42c  mov x8,x25
7101e1a430  mov w10,w21
7101e1a434  mov w9,w23
7101e1a438  mov w11,#0x305f
7101e1a43c  movk w11,#0x34, LSL #16
7101e1a440  str x24,[sp, #0x1b0]
7101e1a444  str w11,[sp, #0x1b8]
7101e1a448  mul w9,w9,w26
7101e1a44c  and w10,w10,#0xff
7101e1a450  eor w9,w9,w10
7101e1a454  ldrb w10,[x8], #0x1
7101e1a458  cbnz w10,0x7101e1a448
7101e1a45c  b 0x7101e1a4d4
7101e1a460  mov x8,#0x1300000000
7101e1a464  stp x8,x20,[sp, #0x1a0]
7101e1a468  mov x8,x25
7101e1a46c  mov w10,w21
7101e1a470  mov w9,w23
7101e1a474  mov w11,#0x305f
7101e1a478  movk w11,#0x32, LSL #16
7101e1a47c  str x24,[sp, #0x1b0]
7101e1a480  str w11,[sp, #0x1b8]
7101e1a484  mul w9,w9,w26
7101e1a488  and w10,w10,#0xff
7101e1a48c  eor w9,w9,w10
7101e1a490  ldrb w10,[x8], #0x1
7101e1a494  cbnz w10,0x7101e1a484
7101e1a498  b 0x7101e1a4d4
7101e1a49c  mov x8,#0x1300000000
7101e1a4a0  stp x8,x20,[sp, #0x1a0]
7101e1a4a4  mov x8,x25
7101e1a4a8  mov w10,w21
7101e1a4ac  mov w9,w23
7101e1a4b0  mov w11,#0x305f
7101e1a4b4  movk w11,#0x33, LSL #16
7101e1a4b8  str x24,[sp, #0x1b0]
7101e1a4bc  str w11,[sp, #0x1b8]
7101e1a4c0  mul w9,w9,w26
7101e1a4c4  and w10,w10,#0xff
7101e1a4c8  eor w9,w9,w10
7101e1a4cc  ldrb w10,[x8], #0x1
7101e1a4d0  cbnz w10,0x7101e1a4c0
7101e1a4d4  str w9,[sp, #0x1a0]
7101e1a4d8  ldp x8,x9,[x29, #-0xe0]
7101e1a4dc  cmp x8,x9
7101e1a4e0  b.cs 0x7101e1a528
7101e1a4e4  mov x9,xzr
7101e1a4e8  str wzr,[x8]
7101e1a4ec  add x10,x28,x9
7101e1a4f0  ldrb w12,[x10]
7101e1a4f4  cbz w12,0x7101e1a550
7101e1a4f8  add x11,x8,x9
7101e1a4fc  strb w12,[x11, #0x8]
7101e1a500  ldrb w12,[x10, #0x1]
7101e1a504  cbz w12,0x7101e1a544
7101e1a508  strb w12,[x11, #0x9]
7101e1a50c  ldrb w10,[x10, #0x2]
7101e1a510  cbz w10,0x7101e1a54c
7101e1a514  add x9,x9,#0x3
7101e1a518  cmp w9,#0x3f
7101e1a51c  strb w10,[x11, #0xa]
7101e1a520  b.cc 0x7101e1a4ec
7101e1a524  b 0x7101e1a550
7101e1a528  sub x0,x29,#0xe8
7101e1a52c  add x1,sp,#0x1a0
7101e1a530  bl 0x71019c1c50
7101e1a534  b 0x7101e1a594
7101e1a538  strb wzr,[sp, #0x1a8]
7101e1a53c  str xzr,[sp, #0x1a0]
7101e1a540  b 0x7101e1a4d8
7101e1a544  add x9,x9,#0x1
7101e1a548  b 0x7101e1a550
7101e1a54c  add x9,x9,#0x2
7101e1a550  add x10,x8,#0x8
7101e1a554  strb wzr,[x10, w9, UXTW ]
7101e1a558  str w9,[x8, #0x4]
7101e1a55c  ldrb w9,[x8, #0x8]
7101e1a560  mov w11,w23
7101e1a564  cbz w9,0x7101e1a584
7101e1a568  add x10,x8,#0x9
7101e1a56c  mov w11,w23
7101e1a570  mul w11,w11,w26
7101e1a574  and w9,w9,#0xff
7101e1a578  eor w11,w11,w9
7101e1a57c  ldrb w9,[x10], #0x1
7101e1a580  cbnz w9,0x7101e1a570
7101e1a584  str w11,[x8]
7101e1a588  ldur x8,[x29, #-0xe0]
7101e1a58c  add x8,x8,#0x48
7101e1a590  stur x8,[x29, #-0xe0]
7101e1a594  ldr x9,[x19, #0xb68]
7101e1a598  ldr x8,[x19, #0xb60]
7101e1a59c  add w22,w22,#0x1
7101e1a5a0  sub x9,x9,x8
7101e1a5a4  cmp x9,x22
7101e1a5a8  b.hi 0x7101e1a394
7101e1a5ac  ldr x24,[sp, #0x18]
7101e1a5b0  adrp x1,0x710436c000
7101e1a5b4  add x1,x1,#0xc09
7101e1a5b8  sub x8,x29,#0xf8
7101e1a5bc  mov x0,x24
7101e1a5c0  bl 0x7103776640
7101e1a5c4  ldp x21,x20,[x29, #-0xe8]
7101e1a5c8  ldr x25,[sp, #0x10]
7101e1a5cc  stp xzr,xzr,[sp, #0x1a8]
7101e1a5d0  str xzr,[sp, #0x1a0]
7101e1a5d4  subs x22,x20,x21
7101e1a5d8  b.eq 0x7101e1a71c
7101e1a5dc  mov x9,#0x8e39
7101e1a5e0  movk x9,#0x38e3, LSL #16
7101e1a5e4  asr x8,x22,#0x3
7101e1a5e8  movk x9,#0xe38e, LSL #32
7101e1a5ec  movk x9,#0x8e38, LSL #48
7101e1a5f0  mul x19,x8,x9
7101e1a5f4  mov x8,#0xe38f
7101e1a5f8  movk x8,#0x8e38, LSL #16
7101e1a5fc  movk x8,#0x38e3, LSL #32
7101e1a600  movk x8,#0x38e, LSL #48
7101e1a604  cmp x19,x8
7101e1a608  b.cs 0x7101e1b734
7101e1a60c  mov w0,#0x10
7101e1a610  mov x1,x22
7101e1a614  bl 0x710392e290
7101e1a618  cbnz x0,0x7101e1a65c
7101e1a61c  adrp x8,0x7105332000
7101e1a620  ldr x0,[x8, #0xf00]
7101e1a624  cbz x0,0x7101e1a658
7101e1a628  stur wzr,[x29, #-0x74]
7101e1a62c  stur x22,[x29, #-0x80]
7101e1a630  ldr x8,[x0]
7101e1a634  ldr x8,[x8, #0x30]
7101e1a638  sub x1,x29,#0x74
7101e1a63c  sub x2,x29,#0x80
7101e1a640  blr x8
7101e1a644  tbz w0,#0x0,0x7101e1a658
7101e1a648  mov w0,#0x10
7101e1a64c  mov x1,x22
7101e1a650  bl 0x710392e290
7101e1a654  cbnz x0,0x7101e1a65c
7101e1a658  mov x0,xzr
7101e1a65c  mov w8,#0x48
7101e1a660  stp x0,x0,[sp, #0x1a0]
7101e1a664  madd x8,x19,x8,x0
7101e1a668  ldur x19,[x29, #-0x58]
7101e1a66c  cmp x21,x20
7101e1a670  str x8,[sp, #0x1b0]
7101e1a674  b.eq 0x7101e1a71c
7101e1a678  mov w8,#0x89
7101e1a67c  mov x9,xzr
7101e1a680  str wzr,[x0]
7101e1a684  add x10,x21,x9
7101e1a688  ldrb w12,[x10, #0x8]
7101e1a68c  cbz w12,0x7101e1a6cc
7101e1a690  add x11,x0,x9
7101e1a694  strb w12,[x11, #0x8]
7101e1a698  ldrb w12,[x10, #0x9]
7101e1a69c  cbz w12,0x7101e1a6c0
7101e1a6a0  strb w12,[x11, #0x9]
7101e1a6a4  ldrb w10,[x10, #0xa]
7101e1a6a8  cbz w10,0x7101e1a6c8
7101e1a6ac  add x9,x9,#0x3
7101e1a6b0  cmp w9,#0x3f
7101e1a6b4  strb w10,[x11, #0xa]
7101e1a6b8  b.cc 0x7101e1a684
7101e1a6bc  b 0x7101e1a6cc
7101e1a6c0  add x9,x9,#0x1
7101e1a6c4  b 0x7101e1a6cc
7101e1a6c8  add x9,x9,#0x2
7101e1a6cc  add x10,x0,#0x8
7101e1a6d0  strb wzr,[x10, w9, UXTW ]
7101e1a6d4  str w9,[x0, #0x4]
7101e1a6d8  ldrb w9,[x0, #0x8]
7101e1a6dc  mov w11,w23
7101e1a6e0  cbz w9,0x7101e1a700
7101e1a6e4  add x10,x0,#0x9
7101e1a6e8  mov w11,w23
7101e1a6ec  mul w11,w11,w8
7101e1a6f0  and w9,w9,#0xff
7101e1a6f4  eor w11,w11,w9
7101e1a6f8  ldrb w9,[x10], #0x1
7101e1a6fc  cbnz w9,0x7101e1a6ec
7101e1a700  str w11,[x0]
7101e1a704  ldr x9,[sp, #0x1a8]
7101e1a708  add x21,x21,#0x48
7101e1a70c  cmp x21,x20
7101e1a710  add x0,x9,#0x48
7101e1a714  str x0,[sp, #0x1a8]
7101e1a718  b.ne 0x7101e1a67c
7101e1a71c  add x0,x19,#0x4d0
7101e1a720  add x1,x19,#0x158
7101e1a724  add x2,sp,#0x1a0
7101e1a728  sub x3,x29,#0xd0
7101e1a72c  sub x4,x29,#0xf8
7101e1a730  bl 0x71032ccb70
7101e1a734  ldr x0,[sp, #0x1a0]
7101e1a738  cbz x0,0x7101e1a744
7101e1a73c  str x0,[sp, #0x1a8]
7101e1a740  bl 0x710392eb40
7101e1a744  adrp x19,0x710523d000
7101e1a748  add x19,x19,#0x988
7101e1a74c  ldur x22,[x29, #-0xf0]
7101e1a750  stp x19,xzr,[x29, #-0xf8]
7101e1a754  ldr x21,[sp, #0x8]
7101e1a758  adrp x23,0x710523d000
7101e1a75c  add x23,x23,#0x9a8
7101e1a760  cbz x22,0x7101e1a77c
7101e1a764  ldr x0,[x22, #0x18]
7101e1a768  stp x23,xzr,[x22, #0x10]
7101e1a76c  cbz x0,0x7101e1a774
7101e1a770  bl 0x710392eb40
7101e1a774  mov x0,x22
7101e1a778  bl 0x710392eb40
7101e1a77c  ldur x0,[x29, #-0xe8]
7101e1a780  cbz x0,0x7101e1a78c
7101e1a784  stur x0,[x29, #-0xe0]
7101e1a788  bl 0x710392eb40
7101e1a78c  ldur x22,[x29, #-0xa8]
7101e1a790  stp x19,xzr,[x29, #-0xb0]
7101e1a794  cbz x22,0x7101e1a7b0
7101e1a798  ldr x0,[x22, #0x18]
7101e1a79c  stp x23,xzr,[x22, #0x10]
7101e1a7a0  cbz x0,0x7101e1a7a8
7101e1a7a4  bl 0x710392eb40
7101e1a7a8  mov x0,x22
7101e1a7ac  bl 0x710392eb40
7101e1a7b0  ldur x0,[x29, #-0x98]
7101e1a7b4  stp x23,xzr,[x29, #-0xa0]
7101e1a7b8  cbz x0,0x7101e1a7c0
7101e1a7bc  bl 0x710392eb40
7101e1a7c0  stp x19,xzr,[x29, #-0x90]
7101e1a7c4  ldur x19,[x29, #-0x58]
7101e1a7c8  add x20,sp,#0x1a0
7101e1a7cc  cbz x21,0x7101e1a7e8
7101e1a7d0  ldr x0,[x21, #0x18]
7101e1a7d4  stp x23,xzr,[x21, #0x10]
7101e1a7d8  cbz x0,0x7101e1a7e0
7101e1a7dc  bl 0x710392eb40
7101e1a7e0  mov x0,x21
7101e1a7e4  bl 0x710392eb40
7101e1a7e8  ldr x0,[x19, #0x510]
7101e1a7ec  ldr x1,[x19, #0x518]
7101e1a7f0  adrp x8,0x7102524000
7101e1a7f4  add x8,x8,#0x60
7101e1a7f8  add x2,sp,#0x1a0
7101e1a7fc  add x21,x19,#0x508
7101e1a800  str x8,[sp, #0x1a0]
7101e1a804  bl 0x71025241c0
7101e1a808  mov x8,#0x41800000
7101e1a80c  movk x8,#0x4248, LSL #48
7101e1a810  mov w22,#0x1
7101e1a814  stp xzr,x8,[sp, #0x1a0]
7101e1a818  mov x8,#0x3f800000
7101e1a81c  movk x8,#0x101, LSL #32
7101e1a820  movk x8,#0x1, LSL #48
7101e1a824  add x0,sp,#0x1a0
7101e1a828  strh wzr,[sp, #0x1b8]
7101e1a82c  strb w22,[sp, #0x1ba]
7101e1a830  str xzr,[sp, #0x1f0]
7101e1a834  str x8,[sp, #0x1b0]
7101e1a838  str xzr,[sp, #0x220]
7101e1a83c  str xzr,[sp, #0x250]
7101e1a840  str xzr,[sp, #0x280]
7101e1a844  str xzr,[sp, #0x2b0]
7101e1a848  strb wzr,[sp, #0x1c1]
7101e1a84c  sturh wzr,[x20, #0x1f]
7101e1a850  stur wzr,[x20, #0x1b]
7101e1a854  mov x20,x19
7101e1a858  add x19,sp,#0x1a0
7101e1a85c  bl 0x710337e790
7101e1a860  mov w8,#0x101
7101e1a864  cmp w25,#0x0
7101e1a868  add x0,x20,#0x500
7101e1a86c  str w8,[sp, #0x1bc]
7101e1a870  csinc w8,wzr,w25,eq
7101e1a874  adrp x2,0x710424f000
7101e1a878  add x2,x2,#0xc05
7101e1a87c  add x3,sp,#0x1a0
7101e1a880  str w22,[sp, #0x1b4]
7101e1a884  mov x1,x24
7101e1a888  mov x4,x21
7101e1a88c  str w8,[x20, #0xbcc]
7101e1a890  str w8,[sp, #0x1a4]
7101e1a894  bl 0x7103781a20
7101e1a898  ldr x8,[x20, #0x178]
7101e1a89c  ldr w8,[x8, #0x2a4]
7101e1a8a0  str w8,[x20, #0xbe8]
7101e1a8a4  ldr w8,[x20, #0xbc4]
7101e1a8a8  cmp w8,#0x1
7101e1a8ac  b.eq 0x7101e1a8f8
7101e1a8b0  ldur x20,[x29, #-0x58]
7101e1a8b4  ldr x0,[x20, #0x4f8]
7101e1a8b8  str w8,[x20, #0xbc8]
7101e1a8bc  str w22,[x20, #0xbc4]
7101e1a8c0  ldr x8,[x0]
7101e1a8c4  ldr x8,[x8, #0x70]
7101e1a8c8  mov w1,wzr
7101e1a8cc  blr x8
7101e1a8d0  ldr x0,[x20, #0x4f8]
7101e1a8d4  ldr x8,[x0]
7101e1a8d8  ldr x8,[x8, #0x60]
7101e1a8dc  mov w1,#0x1
7101e1a8e0  blr x8
7101e1a8e4  ldr x0,[x20, #0x500]
7101e1a8e8  ldr x8,[x0]
7101e1a8ec  ldr x8,[x8, #0x70]
7101e1a8f0  mov w1,#0x1
7101e1a8f4  blr x8
7101e1a8f8  ldr x0,[sp, #0x2b0]
7101e1a8fc  add x8,x19,#0xf0
7101e1a900  cmp x8,x0
7101e1a904  b.eq 0x7101e1a920
7101e1a908  ldur x19,[x29, #-0x58]
7101e1a90c  cbz x0,0x7101e1a930
7101e1a910  ldr x8,[x0]
7101e1a914  ldr x8,[x8, #0x28]
7101e1a918  blr x8
7101e1a91c  b 0x7101e1a930
7101e1a920  ldr x8,[x0]
7101e1a924  ldr x8,[x8, #0x20]
7101e1a928  blr x8
7101e1a92c  ldur x19,[x29, #-0x58]
7101e1a930  ldr x0,[sp, #0x280]
7101e1a934  add x8,sp,#0x1a0
7101e1a938  add x8,x8,#0xc0
7101e1a93c  cmp x8,x0
7101e1a940  b.eq 0x7101e1a954
7101e1a944  cbz x0,0x7101e1a960
7101e1a948  ldr x8,[x0]
7101e1a94c  ldr x8,[x8, #0x28]
7101e1a950  b 0x7101e1a95c
7101e1a954  ldr x8,[x0]
7101e1a958  ldr x8,[x8, #0x20]
7101e1a95c  blr x8
7101e1a960  ldr x0,[sp, #0x250]
7101e1a964  add x8,sp,#0x1a0
7101e1a968  add x8,x8,#0x90
7101e1a96c  cmp x8,x0
7101e1a970  b.eq 0x7101e1a984
7101e1a974  cbz x0,0x7101e1a990
7101e1a978  ldr x8,[x0]
7101e1a97c  ldr x8,[x8, #0x28]
7101e1a980  b 0x7101e1a98c
7101e1a984  ldr x8,[x0]
7101e1a988  ldr x8,[x8, #0x20]
7101e1a98c  blr x8
7101e1a990  ldr x0,[sp, #0x220]
7101e1a994  add x8,sp,#0x1a0
7101e1a998  add x8,x8,#0x60
7101e1a99c  cmp x8,x0
7101e1a9a0  b.eq 0x7101e1a9b4
7101e1a9a4  cbz x0,0x7101e1a9c0
7101e1a9a8  ldr x8,[x0]
7101e1a9ac  ldr x8,[x8, #0x28]
7101e1a9b0  b 0x7101e1a9bc
7101e1a9b4  ldr x8,[x0]
7101e1a9b8  ldr x8,[x8, #0x20]
7101e1a9bc  blr x8
7101e1a9c0  ldr x0,[sp, #0x1f0]
7101e1a9c4  add x8,sp,#0x1a0
7101e1a9c8  add x8,x8,#0x30
7101e1a9cc  cmp x8,x0
7101e1a9d0  b.eq 0x7101e1a9e4
7101e1a9d4  cbz x0,0x7101e1a9f0
7101e1a9d8  ldr x8,[x0]
7101e1a9dc  ldr x8,[x8, #0x28]
7101e1a9e0  b 0x7101e1a9ec
7101e1a9e4  ldr x8,[x0]
7101e1a9e8  ldr x8,[x8, #0x20]
7101e1a9ec  blr x8
7101e1a9f0  ldr x0,[sp, #0x2d8]
7101e1a9f4  cbz x0,0x7101e1aa00
7101e1a9f8  str x0,[sp, #0x2e0]
7101e1a9fc  bl 0x710392eb40
7101e1aa00  ldr x0,[sp, #0x400]
7101e1aa04  add x8,sp,#0x2f0
7101e1aa08  add x8,x8,#0xf0
7101e1aa0c  cmp x8,x0
7101e1aa10  b.eq 0x7101e1aa24
7101e1aa14  cbz x0,0x7101e1aa30
7101e1aa18  ldr x8,[x0]
7101e1aa1c  ldr x8,[x8, #0x28]
7101e1aa20  b 0x7101e1aa2c
7101e1aa24  ldr x8,[x0]
7101e1aa28  ldr x8,[x8, #0x20]
7101e1aa2c  blr x8
7101e1aa30  ldr x0,[sp, #0x3d0]
7101e1aa34  add x8,sp,#0x2f0
7101e1aa38  add x8,x8,#0xc0
7101e1aa3c  cmp x8,x0
7101e1aa40  b.eq 0x7101e1aa54
7101e1aa44  cbz x0,0x7101e1aa60
7101e1aa48  ldr x8,[x0]
7101e1aa4c  ldr x8,[x8, #0x28]
7101e1aa50  b 0x7101e1aa5c
7101e1aa54  ldr x8,[x0]
7101e1aa58  ldr x8,[x8, #0x20]
7101e1aa5c  blr x8
7101e1aa60  ldr x0,[sp, #0x3a0]
7101e1aa64  add x8,sp,#0x2f0
7101e1aa68  add x8,x8,#0x90
7101e1aa6c  cmp x8,x0
7101e1aa70  b.eq 0x7101e1aa84
7101e1aa74  cbz x0,0x7101e1aa90
7101e1aa78  ldr x8,[x0]
7101e1aa7c  ldr x8,[x8, #0x28]
7101e1aa80  b 0x7101e1aa8c
7101e1aa84  ldr x8,[x0]
7101e1aa88  ldr x8,[x8, #0x20]
7101e1aa8c  blr x8
7101e1aa90  ldr x0,[sp, #0x370]
7101e1aa94  add x8,sp,#0x2f0
7101e1aa98  add x8,x8,#0x60
7101e1aa9c  cmp x8,x0
7101e1aaa0  b.eq 0x7101e1aab4
7101e1aaa4  cbz x0,0x7101e1aac0
7101e1aaa8  ldr x8,[x0]
7101e1aaac  ldr x8,[x8, #0x28]
7101e1aab0  b 0x7101e1aabc
7101e1aab4  ldr x8,[x0]
7101e1aab8  ldr x8,[x8, #0x20]
7101e1aabc  blr x8
7101e1aac0  ldr x0,[sp, #0x340]
7101e1aac4  add x8,sp,#0x2f0
7101e1aac8  add x8,x8,#0x30
7101e1aacc  cmp x8,x0
7101e1aad0  b.eq 0x7101e1aae4
7101e1aad4  cbz x0,0x7101e1aaf0
7101e1aad8  ldr x8,[x0]
7101e1aadc  ldr x8,[x8, #0x28]
7101e1aae0  b 0x7101e1aaec
7101e1aae4  ldr x8,[x0]
7101e1aae8  ldr x8,[x8, #0x20]
7101e1aaec  blr x8
7101e1aaf0  strb wzr,[x19, #0xbb4]
7101e1aaf4  add sp,sp,#0x4c0
7101e1aaf8  ldp x29,x30,[sp, #0x60]
7101e1aafc  ldp x20,x19,[sp, #0x50]
7101e1ab00  ldp x22,x21,[sp, #0x40]
7101e1ab04  ldp x24,x23,[sp, #0x30]
7101e1ab08  ldp x26,x25,[sp, #0x20]
7101e1ab0c  ldp x28,x27,[sp, #0x10]
7101e1ab10  ldr d8,[sp], #0x70
7101e1ab14  ret
7101e1ab18  add x8,sp,#0x1a0
7101e1ab1c  add x1,x8,#0x8
7101e1ab20  strb wzr,[sp, #0x1a8]
7101e1ab24  str xzr,[sp, #0x1a0]
7101e1ab28  b 0x7101e1a1ec
7101e1ab2c  ldr x8,[x19, #0x158]
7101e1ab30  ldr x0,[x8]
7101e1ab34  bl 0x7103775fa0
7101e1ab38  adrp x9,0x710593b000
7101e1ab3c  ldr x9,[x9, #0x988]
7101e1ab40  ldr w8,[x19, #0x4e4]
7101e1ab44  mov w10,#0x1
7101e1ab48  lsl w8,w10,w8
7101e1ab4c  ldr x9,[x9, #0x8]
7101e1ab50  ldr w10,[x9]
7101e1ab54  bic w8,w10,w8
7101e1ab58  str w8,[x9]
7101e1ab5c  ldr w9,[x19, #0xbc8]
7101e1ab60  ldr w8,[x19, #0xbc4]
7101e1ab64  cmp w9,#0x3
7101e1ab68  b.ne 0x7101e1addc
7101e1ab6c  ldur x19,[x29, #-0x58]
7101e1ab70  cmp w8,#0x3
7101e1ab74  b.eq 0x7101e1aaf4
7101e1ab78  ldr x0,[x19, #0x4f8]
7101e1ab7c  str w8,[x19, #0xbc8]
7101e1ab80  orr w8,wzr,#0x3
7101e1ab84  str w8,[x19, #0xbc4]
7101e1ab88  add x20,x19,#0x4f8
7101e1ab8c  b 0x7101e1afa8
7101e1ab90  mov w9,wzr
7101e1ab94  strb w9,[x19, #0xbb0]
7101e1ab98  ldr x10,[x8, #0x600]
7101e1ab9c  ldrb w11,[x10, #0x4aa]
7101e1aba0  cbz w11,0x7101e1abd4
7101e1aba4  ldrb w10,[x10, #0x1ac]
7101e1aba8  ubfx w10,w10,#0x1,#0x1
7101e1abac  strb w10,[x19, #0xbb1]
7101e1abb0  cbz w9,0x7101e1abe0
7101e1abb4  ldr w8,[x19, #0xdd8]
7101e1abb8  cmp w8,#0x1
7101e1abbc  b.eq 0x7101e1aaf4
7101e1abc0  ldr x8,[x19, #0x500]
7101e1abc4  ldr w8,[x8, #0x2a4]
7101e1abc8  cbz w8,0x7101e1aaf4
7101e1abcc  str wzr,[x19, #0xbe8]
7101e1abd0  b 0x7101e1aaf4
7101e1abd4  mov w10,wzr
7101e1abd8  strb w10,[x19, #0xbb1]
7101e1abdc  cbnz w9,0x7101e1abb4
7101e1abe0  tbnz w10,#0x0,0x7101e1aaf4
7101e1abe4  ldr x0,[x19, #0x4f8]
7101e1abe8  ldr w9,[x0, #0x25c]
7101e1abec  cmp w9,#0x67
7101e1abf0  b.ne 0x7101e1adf4
7101e1abf4  mov w8,#0x1
7101e1abf8  mov x9,#0x4
7101e1abfc  strb w8,[x19, #0xf05]
7101e1ac00  add x8,x19,#0xbc4
7101e1ac04  movk x9,#0x2, LSL #32
7101e1ac08  b 0x7101e1ad64
7101e1ac0c  strb wzr,[x19, #0xbb1]
7101e1ac10  ldr x8,[x8, #0x600]
7101e1ac14  ldrb w9,[x8, #0x4aa]
7101e1ac18  cbz w9,0x7101e1aaf4
7101e1ac1c  ldrb w9,[x8, #0x1bc]
7101e1ac20  tbnz w9,#0x1,0x7101e1ad50
7101e1ac24  ldrb w9,[x8, #0x1a8]
7101e1ac28  ldur x19,[x29, #-0x58]
7101e1ac2c  tbnz w9,#0x1,0x7101e1ad54
7101e1ac30  ldrb w9,[x8, #0x198]
7101e1ac34  tbnz w9,#0x1,0x7101e1ae18
7101e1ac38  ldrb w8,[x8, #0x19c]
7101e1ac3c  tbz w8,#0x1,0x7101e1aaf4
7101e1ac40  adrp x21,0x710532f000
7101e1ac44  ldr x8,[x21, #0x8d0]
7101e1ac48  ldr x0,[x8, #0x8]
7101e1ac4c  ldrb w8,[x0, #0x191]
7101e1ac50  mov w19,#0x6500
7101e1ac54  movk w19,#0x87, LSL #16
7101e1ac58  cbnz w8,0x7101e1b010
7101e1ac5c  mov x20,#0x5170
7101e1ac60  movk x20,#0xc0b6, LSL #16
7101e1ac64  movk x20,#0x10, LSL #32
7101e1ac68  mov w2,#0x4
7101e1ac6c  mov x1,x20
7101e1ac70  bl 0x7103313f20
7101e1ac74  tbz w0,#0x0,0x7101e1b010
7101e1ac78  add x0,sp,#0xa0
7101e1ac7c  mov x1,x20
7101e1ac80  bl 0x71024076d0
7101e1ac84  ldr x8,[sp, #0xb0]
7101e1ac88  adrp x9,0x7104f73000
7101e1ac8c  add x9,x9,#0xd50
7101e1ac90  str x9,[sp, #0xa8]
7101e1ac94  cbz x8,0x7101e1b034
7101e1ac98  adrp x8,0x7106dd5000
7101e1ac9c  ldrb w8,[x8, #0x3a8]
7101e1aca0  cmp w8,#0x1
7101e1aca4  b.ne 0x7101e1b034
7101e1aca8  adrp x9,0x7106dd5000
7101e1acac  ldr w8,[sp, #0xb8]
7101e1acb0  ldr w9,[x9, #0x3ac]
7101e1acb4  cmp w8,w9
7101e1acb8  b.ne 0x7101e1b034
7101e1acbc  ldr x8,[sp, #0xb0]
7101e1acc0  ldr wzr,[x8, #0x38]!
7101e1acc4  ldaxr w9,[x8]
7101e1acc8  sub w9,w9,#0x1
7101e1accc  stlxr w10,w9,[x8]
7101e1acd0  cbnz w10,0x7101e1acc4
7101e1acd4  b 0x7101e1b034
7101e1acd8  strb wzr,[x19, #0xbb1]
7101e1acdc  b 0x7101e1aaf4
7101e1ace0  mov x8,#0x650000000000
7101e1ace4  movk x8,#0x87, LSL #48
7101e1ace8  strb wzr,[sp, #0x180]
7101e1acec  stp xzr,x8,[sp, #0x170]
7101e1acf0  mov x8,#-0x1
7101e1acf4  stp x8,xzr,[sp, #0x188]
7101e1acf8  adrp x8,0x7104f73000
7101e1acfc  add x8,x8,#0xd50
7101e1ad00  str wzr,[sp, #0x160]
7101e1ad04  str xzr,[sp, #0x198]
7101e1ad08  str x8,[sp, #0x168]
7101e1ad0c  str xzr,[sp, #0x170]
7101e1ad10  strb wzr,[sp, #0x180]
7101e1ad14  b 0x7101e1aaf4
7101e1ad18  mov x8,#0x650000000000
7101e1ad1c  movk x8,#0x87, LSL #48
7101e1ad20  strb wzr,[sp, #0x40]
7101e1ad24  stp xzr,x8,[sp, #0x30]
7101e1ad28  mov x8,#-0x1
7101e1ad2c  stp x8,xzr,[sp, #0x48]
7101e1ad30  adrp x8,0x7104f73000
7101e1ad34  add x8,x8,#0xd50
7101e1ad38  str wzr,[sp, #0x20]
7101e1ad3c  str xzr,[sp, #0x58]
7101e1ad40  str x8,[sp, #0x28]
7101e1ad44  str xzr,[sp, #0x30]
7101e1ad48  strb wzr,[sp, #0x40]
7101e1ad4c  b 0x7101e1aaf4
7101e1ad50  ldur x19,[x29, #-0x58]
7101e1ad54  mov x9,#0x4
7101e1ad58  add x8,x19,#0xbc4
7101e1ad5c  movk x9,#0x3, LSL #32
7101e1ad60  strb wzr,[x19, #0xf05]
7101e1ad64  str x9,[x8]
7101e1ad68  ldr x0,[x19, #0x500]
7101e1ad6c  ldr x8,[x0]
7101e1ad70  ldr x8,[x8, #0x70]
7101e1ad74  mov w1,wzr
7101e1ad78  blr x8
7101e1ad7c  ldr x8,[x19, #0x158]
7101e1ad80  ldr x0,[x8]
7101e1ad84  mov w2,#0x3
7101e1ad88  movk w2,#0x1, LSL #16
7101e1ad8c  mov w1,#0x1
7101e1ad90  bl 0x7103775dc0
7101e1ad94  ldr w1,[x19, #0xb78]
7101e1ad98  add x0,x19,#0x4d0
7101e1ad9c  bl 0x71032cc8f0
7101e1ada0  ldr x8,[x19, #0x158]
7101e1ada4  ldr x8,[x8]
7101e1ada8  ldr x0,[x8, #0x10]
7101e1adac  adrp x1,0x710438d000
7101e1adb0  add x1,x1,#0x42
7101e1adb4  fmov s0,0x3f800000
7101e1adb8  add sp,sp,#0x4c0
7101e1adbc  ldp x29,x30,[sp, #0x60]
7101e1adc0  ldp x20,x19,[sp, #0x50]
7101e1adc4  ldp x22,x21,[sp, #0x40]
7101e1adc8  ldp x24,x23,[sp, #0x30]
7101e1adcc  ldp x26,x25,[sp, #0x20]
7101e1add0  ldp x28,x27,[sp, #0x10]
7101e1add4  ldr d8,[sp], #0x70
7101e1add8  b 0x7103778300
7101e1addc  ldur x19,[x29, #-0x58]
7101e1ade0  cmp w8,#0x1
7101e1ade4  b.eq 0x7101e1aaf4
7101e1ade8  str w8,[x19, #0xbc8]
7101e1adec  mov w8,#0x1
7101e1adf0  b 0x7101e19d24
7101e1adf4  ldr x9,[x19, #0x500]
7101e1adf8  ldr w9,[x9, #0x2b8]
7101e1adfc  add x20,x19,#0x4f8
7101e1ae00  cmp w9,#0x2
7101e1ae04  b.eq 0x7101e1af80
7101e1ae08  ldur x19,[x29, #-0x58]
7101e1ae0c  cmp w9,#0x1
7101e1ae10  b.eq 0x7101e1af98
7101e1ae14  b 0x7101e1aaf4
7101e1ae18  adrp x21,0x710532f000
7101e1ae1c  ldr x8,[x21, #0x8d0]
7101e1ae20  ldr x0,[x8, #0x8]
7101e1ae24  ldrb w8,[x0, #0x191]
7101e1ae28  mov w19,#0x6500
7101e1ae2c  movk w19,#0x87, LSL #16
7101e1ae30  cbnz w8,0x7101e1aeb0
7101e1ae34  mov x20,#0x5170
7101e1ae38  movk x20,#0xc0b6, LSL #16
7101e1ae3c  movk x20,#0x10, LSL #32
7101e1ae40  mov w2,#0x4
7101e1ae44  mov x1,x20
7101e1ae48  bl 0x7103313f20
7101e1ae4c  tbz w0,#0x0,0x7101e1aeb0
7101e1ae50  add x0,sp,#0x120
7101e1ae54  mov x1,x20
7101e1ae58  bl 0x71024076d0
7101e1ae5c  ldr x8,[sp, #0x130]
7101e1ae60  adrp x9,0x7104f73000
7101e1ae64  add x9,x9,#0xd50
7101e1ae68  str x9,[sp, #0x128]
7101e1ae6c  cbz x8,0x7101e1aed8
7101e1ae70  adrp x8,0x7106dd5000
7101e1ae74  ldrb w8,[x8, #0x3a8]
7101e1ae78  cmp w8,#0x1
7101e1ae7c  b.ne 0x7101e1aed8
7101e1ae80  adrp x9,0x7106dd5000
7101e1ae84  ldr w8,[sp, #0x138]
7101e1ae88  ldr w9,[x9, #0x3ac]
7101e1ae8c  cmp w8,w9
7101e1ae90  b.ne 0x7101e1aed8
7101e1ae94  ldr x8,[sp, #0x130]
7101e1ae98  ldr wzr,[x8, #0x38]!
7101e1ae9c  ldaxr w9,[x8]
7101e1aea0  sub w9,w9,#0x1
7101e1aea4  stlxr w10,w9,[x8]
7101e1aea8  cbnz w10,0x7101e1ae9c
7101e1aeac  b 0x7101e1aed8
7101e1aeb0  mov x8,#-0x1
7101e1aeb4  stp x8,xzr,[sp, #0x148]
7101e1aeb8  adrp x8,0x7104f73000
7101e1aebc  add x8,x8,#0xd50
7101e1aec0  str wzr,[sp, #0x138]
7101e1aec4  str w19,[sp, #0x13c]
7101e1aec8  strb wzr,[sp, #0x140]
7101e1aecc  str wzr,[sp, #0x120]
7101e1aed0  str xzr,[sp, #0x158]
7101e1aed4  stp x8,xzr,[sp, #0x128]
7101e1aed8  ldur x22,[x29, #-0x58]
7101e1aedc  str xzr,[sp, #0x130]
7101e1aee0  strb wzr,[sp, #0x140]
7101e1aee4  ldr x8,[x22, #0x500]
7101e1aee8  ldr w8,[x8, #0x2a4]
7101e1aeec  add x20,x22,#0x500
7101e1aef0  cbnz w8,0x7101e1b110
7101e1aef4  ldr x8,[x21, #0x8d0]
7101e1aef8  ldr x0,[x8, #0x8]
7101e1aefc  ldrb w8,[x0, #0x191]
7101e1af00  cbnz w8,0x7101e1b0e0
7101e1af04  mov x21,#0x7cd7
7101e1af08  movk x21,#0x36ca, LSL #16
7101e1af0c  movk x21,#0x13, LSL #32
7101e1af10  mov w2,#0x4
7101e1af14  mov x1,x21
7101e1af18  bl 0x7103313f20
7101e1af1c  tbz w0,#0x0,0x7101e1b0e0
7101e1af20  add x0,sp,#0xe0
7101e1af24  mov x1,x21
7101e1af28  bl 0x71024076d0
7101e1af2c  ldr x8,[sp, #0xf0]
7101e1af30  adrp x9,0x7104f73000
7101e1af34  add x9,x9,#0xd50
7101e1af38  str x9,[sp, #0xe8]
7101e1af3c  cbz x8,0x7101e1b104
7101e1af40  adrp x8,0x7106dd5000
7101e1af44  ldrb w8,[x8, #0x3a8]
7101e1af48  cmp w8,#0x1
7101e1af4c  b.ne 0x7101e1b104
7101e1af50  adrp x9,0x7106dd5000
7101e1af54  ldr w8,[sp, #0xf8]
7101e1af58  ldr w9,[x9, #0x3ac]
7101e1af5c  cmp w8,w9
7101e1af60  b.ne 0x7101e1b104
7101e1af64  ldr x8,[sp, #0xf0]
7101e1af68  ldr wzr,[x8, #0x38]!
7101e1af6c  ldaxr w9,[x8]
7101e1af70  sub w9,w9,#0x1
7101e1af74  stlxr w10,w9,[x8]
7101e1af78  cbnz w10,0x7101e1af6c
7101e1af7c  b 0x7101e1b104
7101e1af80  ldr x8,[x8, #0x600]
7101e1af84  ldrb w9,[x8, #0x4aa]
7101e1af88  ldur x19,[x29, #-0x58]
7101e1af8c  cbz w9,0x7101e1aaf4
7101e1af90  ldrb w8,[x8, #0x19c]
7101e1af94  tbz w8,#0x1,0x7101e1aaf4
7101e1af98  mov x9,#0x3
7101e1af9c  add x8,x19,#0xbc4
7101e1afa0  movk x9,#0x2, LSL #32
7101e1afa4  str x9,[x8]
7101e1afa8  ldr x8,[x0]
7101e1afac  ldr x8,[x8, #0x70]
7101e1afb0  mov w1,#0x1
7101e1afb4  blr x8
7101e1afb8  ldr x0,[x19, #0x4f8]
7101e1afbc  ldr x8,[x0]
7101e1afc0  ldr x8,[x8, #0x60]
7101e1afc4  mov w1,wzr
7101e1afc8  blr x8
7101e1afcc  mov w1,#0x67
7101e1afd0  mov x0,x20
7101e1afd4  mov w2,wzr
7101e1afd8  bl 0x7103771a80
7101e1afdc  ldr x0,[x19, #0x500]
7101e1afe0  ldr x8,[x0]
7101e1afe4  ldr x2,[x8, #0x70]
7101e1afe8  mov w1,wzr
7101e1afec  add sp,sp,#0x4c0
7101e1aff0  ldp x29,x30,[sp, #0x60]
7101e1aff4  ldp x20,x19,[sp, #0x50]
7101e1aff8  ldp x22,x21,[sp, #0x40]
7101e1affc  ldp x24,x23,[sp, #0x30]
7101e1b000  ldp x26,x25,[sp, #0x20]
7101e1b004  ldp x28,x27,[sp, #0x10]
7101e1b008  ldr d8,[sp], #0x70
7101e1b00c  br x2
7101e1b010  mov x8,#-0x1
7101e1b014  stp x8,xzr,[sp, #0xc8]
7101e1b018  adrp x8,0x7104f73000
7101e1b01c  add x8,x8,#0xd50
7101e1b020  stp wzr,w19,[sp, #0xb8]
7101e1b024  strb wzr,[sp, #0xc0]
7101e1b028  str wzr,[sp, #0xa0]
7101e1b02c  str xzr,[sp, #0xd8]
7101e1b030  stp x8,xzr,[sp, #0xa8]
7101e1b034  ldur x8,[x29, #-0x58]
7101e1b038  str xzr,[sp, #0xb0]
7101e1b03c  strb wzr,[sp, #0xc0]
7101e1b040  add x20,x8,#0x500
7101e1b044  ldr x8,[x8, #0x500]
7101e1b048  ldr w8,[x8, #0x2a4]
7101e1b04c  cmp w8,#0x1
7101e1b050  b.lt 0x7101e1b188
7101e1b054  ldr x8,[x21, #0x8d0]
7101e1b058  ldr x0,[x8, #0x8]
7101e1b05c  ldrb w8,[x0, #0x191]
7101e1b060  cbnz w8,0x7101e1b15c
7101e1b064  mov x21,#0x7cd7
7101e1b068  movk x21,#0x36ca, LSL #16
7101e1b06c  movk x21,#0x13, LSL #32
7101e1b070  mov w2,#0x4
7101e1b074  mov x1,x21
7101e1b078  bl 0x7103313f20
7101e1b07c  tbz w0,#0x0,0x7101e1b15c
7101e1b080  add x0,sp,#0x60
7101e1b084  mov x1,x21
7101e1b088  bl 0x71024076d0
7101e1b08c  ldr x8,[sp, #0x70]
7101e1b090  adrp x9,0x7104f73000
7101e1b094  add x9,x9,#0xd50
7101e1b098  str x9,[sp, #0x68]
7101e1b09c  cbz x8,0x7101e1b180
7101e1b0a0  adrp x8,0x7106dd5000
7101e1b0a4  ldrb w8,[x8, #0x3a8]
7101e1b0a8  cmp w8,#0x1
7101e1b0ac  b.ne 0x7101e1b180
7101e1b0b0  adrp x9,0x7106dd5000
7101e1b0b4  ldr w8,[sp, #0x78]
7101e1b0b8  ldr w9,[x9, #0x3ac]
7101e1b0bc  cmp w8,w9
7101e1b0c0  b.ne 0x7101e1b180
7101e1b0c4  ldr x8,[sp, #0x70]
7101e1b0c8  ldr wzr,[x8, #0x38]!
7101e1b0cc  ldaxr w9,[x8]
7101e1b0d0  sub w9,w9,#0x1
7101e1b0d4  stlxr w10,w9,[x8]
7101e1b0d8  cbnz w10,0x7101e1b0cc
7101e1b0dc  b 0x7101e1b180
7101e1b0e0  mov x8,#-0x1
7101e1b0e4  stp x8,xzr,[sp, #0x108]
7101e1b0e8  adrp x8,0x7104f73000
7101e1b0ec  add x8,x8,#0xd50
7101e1b0f0  stp wzr,w19,[sp, #0xf8]
7101e1b0f4  strb wzr,[sp, #0x100]
7101e1b0f8  str wzr,[sp, #0xe0]
7101e1b0fc  str xzr,[sp, #0x118]
7101e1b100  stp x8,xzr,[sp, #0xe8]
7101e1b104  ldur x22,[x29, #-0x58]
7101e1b108  str xzr,[sp, #0xf0]
7101e1b10c  strb wzr,[sp, #0x100]
7101e1b110  ldr w8,[x22, #0xbcc]
7101e1b114  sub w1,w8,#0x1
7101e1b118  mov w3,#0x1
7101e1b11c  mov x0,x20
7101e1b120  mov w2,wzr
7101e1b124  bl 0x7103783c10
7101e1b128  ldr x8,[x22, #0x4f8]
7101e1b12c  ldr x9,[x8, #0x1b8]
7101e1b130  mov x19,x22
7101e1b134  cbz x9,0x7101e1b284
7101e1b138  add x10,x8,#0x1b8
7101e1b13c  mov x8,x10
7101e1b140  ldr w11,[x9, #0x20]
7101e1b144  cmp w11,#0x67
7101e1b148  cset w11,lt
7101e1b14c  csel x8,x8,x9,lt
7101e1b150  ldr x9,[x9, w11, UXTW #0x3]
7101e1b154  cbnz x9,0x7101e1b140
7101e1b158  b 0x7101e1b1cc
7101e1b15c  mov x8,#-0x1
7101e1b160  stp x8,xzr,[sp, #0x88]
7101e1b164  adrp x8,0x7104f73000
7101e1b168  add x8,x8,#0xd50
7101e1b16c  stp wzr,w19,[sp, #0x78]
7101e1b170  strb wzr,[sp, #0x80]
7101e1b174  str wzr,[sp, #0x60]
7101e1b178  str xzr,[sp, #0x98]
7101e1b17c  stp x8,xzr,[sp, #0x68]
7101e1b180  str xzr,[sp, #0x70]
7101e1b184  strb wzr,[sp, #0x80]
7101e1b188  mov w3,#0x1
7101e1b18c  mov x0,x20
7101e1b190  mov w1,wzr
7101e1b194  mov w2,wzr
7101e1b198  bl 0x7103783c10
7101e1b19c  ldur x19,[x29, #-0x58]
7101e1b1a0  ldr x8,[x19, #0x4f8]
7101e1b1a4  ldr x9,[x8, #0x1b8]
7101e1b1a8  cbz x9,0x7101e1b284
7101e1b1ac  add x10,x8,#0x1b8
7101e1b1b0  mov x8,x10
7101e1b1b4  ldr w11,[x9, #0x20]
7101e1b1b8  cmp w11,#0x67
7101e1b1bc  cset w11,lt
7101e1b1c0  csel x8,x8,x9,lt
7101e1b1c4  ldr x9,[x9, w11, UXTW #0x3]
7101e1b1c8  cbnz x9,0x7101e1b1b4
7101e1b1cc  cmp x8,x10
7101e1b1d0  b.eq 0x7101e1b284
7101e1b1d4  ldr w9,[x8, #0x20]
7101e1b1d8  cmp w9,#0x67
7101e1b1dc  b.gt 0x7101e1b284
7101e1b1e0  ldr x20,[x8, #0x28]
7101e1b1e4  cbz x20,0x7101e1b284
7101e1b1e8  ldr x8,[x20]
7101e1b1ec  ldr x8,[x8, #0x218]
7101e1b1f0  mov x0,x20
7101e1b1f4  mov w1,wzr
7101e1b1f8  blr x8
7101e1b1fc  ldr x8,[x20]
7101e1b200  ldr x8,[x8, #0x410]
7101e1b204  mov x0,x20
7101e1b208  blr x8
7101e1b20c  ldr x8,[x20]
7101e1b210  ldr x8,[x8, #0x3f0]
7101e1b214  mov x0,x20
7101e1b218  mov w1,wzr
7101e1b21c  blr x8
7101e1b220  ldr x8,[x20]
7101e1b224  ldr x8,[x8, #0x140]
7101e1b228  mov x0,x20
7101e1b22c  blr x8
7101e1b230  cmp w0,#0x6
7101e1b234  b.eq 0x7101e1b260
7101e1b238  ldr x8,[x20]
7101e1b23c  ldr x8,[x8, #0x140]
7101e1b240  mov x0,x20
7101e1b244  blr x8
7101e1b248  cmp w0,#0x1
7101e1b24c  b.eq 0x7101e1b260
7101e1b250  ldr x8,[x20]
7101e1b254  ldr x8,[x8, #0x400]
7101e1b258  mov x0,x20
7101e1b25c  blr x8
7101e1b260  ldr x8,[x20]
7101e1b264  ldr x8,[x8, #0x158]
7101e1b268  mov x0,x20
7101e1b26c  blr x8
7101e1b270  tbnz w0,#0x0,0x7101e1b284
7101e1b274  ldr x8,[x20]
7101e1b278  ldr x8,[x8, #0x370]
7101e1b27c  mov x0,x20
7101e1b280  blr x8
7101e1b284  ldr w8,[x19, #0xbc4]
7101e1b288  cmp w8,#0x2
7101e1b28c  b.eq 0x7101e1aaf4
7101e1b290  ldr x0,[x19, #0x4f8]
7101e1b294  str w8,[x19, #0xbc8]
7101e1b298  mov w8,#0x2
7101e1b29c  str w8,[x19, #0xbc4]
7101e1b2a0  ldr x8,[x0]
7101e1b2a4  ldr x8,[x8, #0x70]
7101e1b2a8  mov w1,wzr
7101e1b2ac  blr x8
7101e1b2b0  ldr x0,[x19, #0x4f8]
7101e1b2b4  ldr x8,[x0]
7101e1b2b8  ldr x8,[x8, #0x60]
7101e1b2bc  mov w1,#0x1
7101e1b2c0  blr x8
7101e1b2c4  ldr x0,[x19, #0x500]
7101e1b2c8  ldr x8,[x0]
7101e1b2cc  ldr x8,[x8, #0x70]
7101e1b2d0  mov w1,#0x1
7101e1b2d4  blr x8
7101e1b2d8  b 0x7101e1aaf4
7101e1b2dc  orr w22,wzr,#0xffff
7101e1b2e0  add x0,x19,#0xba0
7101e1b2e4  adrp x1,0x71043ae000
7101e1b2e8  add x1,x1,#0xcc
7101e1b2ec  add x8,sp,#0x1a0
7101e1b2f0  bl 0x7103776640
7101e1b2f4  cmp w20,#0x4
7101e1b2f8  b.hi 0x7101e1b704
7101e1b2fc  adrp x8,0x71044fb000
7101e1b300  add x8,x8,#0xa60
7101e1b304  ldrsw x9,[x8, x20, LSL #0x2]
7101e1b308  add x8,x9,x8
7101e1b30c  br x8
7101e1b310  mov x9,#0x1300000000
7101e1b314  str x9,[sp, #0x2f0]
7101e1b318  mov x9,#0x6e6d
7101e1b31c  movk x9,#0x5f75, LSL #16
7101e1b320  add x10,sp,#0x2f0
7101e1b324  add x21,x10,#0x8
7101e1b328  movk x9,#0x7073, LSL #32
7101e1b32c  movk x9,#0x7269, LSL #48
7101e1b330  str x9,[sp, #0x2f8]
7101e1b334  add x9,x10,#0x9
7101e1b338  mov x10,#0x7469
7101e1b33c  movk x10,#0x5f73, LSL #16
7101e1b340  movk x10,#0x6f73, LSL #32
7101e1b344  movk x10,#0x7472, LSL #48
7101e1b348  str x10,[sp, #0x300]
7101e1b34c  mov w10,#0x315f
7101e1b350  movk w10,#0x38, LSL #16
7101e1b354  str w10,[sp, #0x308]
7101e1b358  mov w8,#0x9dc5
7101e1b35c  movk w8,#0x811c, LSL #16
7101e1b360  mov w11,#0x6d
7101e1b364  mov w10,#0x89
7101e1b368  mul w8,w8,w10
7101e1b36c  and w11,w11,#0xff
7101e1b370  eor w8,w8,w11
7101e1b374  ldrb w11,[x9], #0x1
7101e1b378  cbnz w11,0x7101e1b368
7101e1b37c  b 0x7101e1b53c
7101e1b380  mov x9,#0x1300000000
7101e1b384  str x9,[sp, #0x2f0]
7101e1b388  mov x9,#0x6e6d
7101e1b38c  movk x9,#0x5f75, LSL #16
7101e1b390  add x10,sp,#0x2f0
7101e1b394  add x21,x10,#0x8
7101e1b398  movk x9,#0x7073, LSL #32
7101e1b39c  movk x9,#0x7269, LSL #48
7101e1b3a0  str x9,[sp, #0x2f8]
7101e1b3a4  add x9,x10,#0x9
7101e1b3a8  mov x10,#0x7469
7101e1b3ac  movk x10,#0x5f73, LSL #16
7101e1b3b0  movk x10,#0x6f73, LSL #32
7101e1b3b4  movk x10,#0x7472, LSL #48
7101e1b3b8  str x10,[sp, #0x300]
7101e1b3bc  mov w10,#0x325f
7101e1b3c0  movk w10,#0x32, LSL #16
7101e1b3c4  str w10,[sp, #0x308]
7101e1b3c8  mov w8,#0x9dc5
7101e1b3cc  movk w8,#0x811c, LSL #16
7101e1b3d0  mov w11,#0x6d
7101e1b3d4  mov w10,#0x89
7101e1b3d8  mul w8,w8,w10
7101e1b3dc  and w11,w11,#0xff
7101e1b3e0  eor w8,w8,w11
7101e1b3e4  ldrb w11,[x9], #0x1
7101e1b3e8  cbnz w11,0x7101e1b3d8
7101e1b3ec  b 0x7101e1b53c
7101e1b3f0  mov x9,#0x1300000000
7101e1b3f4  str x9,[sp, #0x2f0]
7101e1b3f8  mov x9,#0x6e6d
7101e1b3fc  movk x9,#0x5f75, LSL #16
7101e1b400  add x10,sp,#0x2f0
7101e1b404  add x21,x10,#0x8
7101e1b408  movk x9,#0x7073, LSL #32
7101e1b40c  movk x9,#0x7269, LSL #48
7101e1b410  str x9,[sp, #0x2f8]
7101e1b414  add x9,x10,#0x9
7101e1b418  mov x10,#0x7469
7101e1b41c  movk x10,#0x5f73, LSL #16
7101e1b420  movk x10,#0x6f73, LSL #32
7101e1b424  movk x10,#0x7472, LSL #48
7101e1b428  str x10,[sp, #0x300]
7101e1b42c  mov w10,#0x305f
7101e1b430  movk w10,#0x34, LSL #16
7101e1b434  str w10,[sp, #0x308]
7101e1b438  mov w8,#0x9dc5
7101e1b43c  movk w8,#0x811c, LSL #16
7101e1b440  mov w11,#0x6d
7101e1b444  mov w10,#0x89
7101e1b448  mul w8,w8,w10
7101e1b44c  and w11,w11,#0xff
7101e1b450  eor w8,w8,w11
7101e1b454  ldrb w11,[x9], #0x1
7101e1b458  cbnz w11,0x7101e1b448
7101e1b45c  b 0x7101e1b53c
7101e1b460  mov x9,#0x1300000000
7101e1b464  str x9,[sp, #0x2f0]
7101e1b468  mov x9,#0x6e6d
7101e1b46c  movk x9,#0x5f75, LSL #16
7101e1b470  add x10,sp,#0x2f0
7101e1b474  add x21,x10,#0x8
7101e1b478  movk x9,#0x7073, LSL #32
7101e1b47c  movk x9,#0x7269, LSL #48
7101e1b480  str x9,[sp, #0x2f8]
7101e1b484  add x9,x10,#0x9
7101e1b488  mov x10,#0x7469
7101e1b48c  movk x10,#0x5f73, LSL #16
7101e1b490  movk x10,#0x6f73, LSL #32
7101e1b494  movk x10,#0x7472, LSL #48
7101e1b498  str x10,[sp, #0x300]
7101e1b49c  mov w10,#0x305f
7101e1b4a0  movk w10,#0x32, LSL #16
7101e1b4a4  str w10,[sp, #0x308]
7101e1b4a8  mov w8,#0x9dc5
7101e1b4ac  movk w8,#0x811c, LSL #16
7101e1b4b0  mov w11,#0x6d
7101e1b4b4  mov w10,#0x89
7101e1b4b8  mul w8,w8,w10
7101e1b4bc  and w11,w11,#0xff
7101e1b4c0  eor w8,w8,w11
7101e1b4c4  ldrb w11,[x9], #0x1
7101e1b4c8  cbnz w11,0x7101e1b4b8
7101e1b4cc  b 0x7101e1b53c
7101e1b4d0  mov x9,#0x1300000000
7101e1b4d4  str x9,[sp, #0x2f0]
7101e1b4d8  mov x9,#0x6e6d
7101e1b4dc  movk x9,#0x5f75, LSL #16
7101e1b4e0  add x10,sp,#0x2f0
7101e1b4e4  add x21,x10,#0x8
7101e1b4e8  movk x9,#0x7073, LSL #32
7101e1b4ec  movk x9,#0x7269, LSL #48
7101e1b4f0  str x9,[sp, #0x2f8]
7101e1b4f4  add x9,x10,#0x9
7101e1b4f8  mov x10,#0x7469
7101e1b4fc  movk x10,#0x5f73, LSL #16
7101e1b500  movk x10,#0x6f73, LSL #32
7101e1b504  movk x10,#0x7472, LSL #48
7101e1b508  str x10,[sp, #0x300]
7101e1b50c  mov w10,#0x305f
7101e1b510  movk w10,#0x33, LSL #16
7101e1b514  str w10,[sp, #0x308]
7101e1b518  mov w8,#0x9dc5
7101e1b51c  movk w8,#0x811c, LSL #16
7101e1b520  mov w11,#0x6d
7101e1b524  mov w10,#0x89
7101e1b528  mul w8,w8,w10
7101e1b52c  and w11,w11,#0xff
7101e1b530  eor w8,w8,w11
7101e1b534  ldrb w11,[x9], #0x1
7101e1b538  cbnz w11,0x7101e1b528
7101e1b53c  str w8,[sp, #0x2f0]
7101e1b540  adrp x1,0x7104431000
7101e1b544  add x1,x1,#0x6d5
7101e1b548  sub x8,x29,#0xd0
7101e1b54c  add x0,sp,#0x1a0
7101e1b550  bl 0x7103776910
7101e1b554  sub x0,x29,#0xd0
7101e1b558  mov x1,x21
7101e1b55c  bl 0x710377a120
7101e1b560  ldur x0,[x29, #-0xc8]
7101e1b564  adrp x23,0x710523d000
7101e1b568  add x23,x23,#0x9a8
7101e1b56c  stp x23,xzr,[x29, #-0xd0]
7101e1b570  cbz x0,0x7101e1b578
7101e1b574  bl 0x710392eb40
7101e1b578  add x0,x19,#0x510
7101e1b57c  mov w1,w20
7101e1b580  bl 0x7102528ea0
7101e1b584  ldr x0,[x19, #0x500]
7101e1b588  mov w1,#0x1
7101e1b58c  add x20,x19,#0x500
7101e1b590  bl 0x710377cc80
7101e1b594  orr w8,wzr,#0xffff
7101e1b598  cmp w22,w8
7101e1b59c  b.eq 0x7101e1b5d4
7101e1b5a0  ldr x10,[x19, #0x518]
7101e1b5a4  ldr x9,[x19, #0x510]
7101e1b5a8  sub x10,x10,x9
7101e1b5ac  mov x8,xzr
7101e1b5b0  asr x10,x10,#0x2
7101e1b5b4  cmp x10,x8
7101e1b5b8  b.ls 0x7101e1b5d4
7101e1b5bc  ldrh w11,[x9], #0x4
7101e1b5c0  add x8,x8,#0x1
7101e1b5c4  cmp w11,w22
7101e1b5c8  b.ne 0x7101e1b5b4
7101e1b5cc  bic w21,w8,w8, ASR #0x1f
7101e1b5d0  b 0x7101e1b5d8
7101e1b5d4  mov w21,wzr
7101e1b5d8  mov w3,#0x1
7101e1b5dc  mov x0,x20
7101e1b5e0  mov w1,w21
7101e1b5e4  mov w2,wzr
7101e1b5e8  bl 0x7103783c10
7101e1b5ec  ldrb w8,[x19, #0xf05]
7101e1b5f0  cbnz w8,0x7101e1b6d4
7101e1b5f4  ldr x8,[x20]
7101e1b5f8  ldr w9,[x8, #0x288]
7101e1b5fc  cmp w9,w21
7101e1b600  b.le 0x7101e1b6d4
7101e1b604  ldr w9,[x8, #0x29c]
7101e1b608  subs w9,w21,w9
7101e1b60c  b.mi 0x7101e1b6d4
7101e1b610  ldr w10,[x8, #0x2c4]
7101e1b614  cmp w10,w9
7101e1b618  b.le 0x7101e1b6d4
7101e1b61c  ldr w10,[x8, #0x2c0]
7101e1b620  cmp w10,w9
7101e1b624  b.le 0x7101e1b6d4
7101e1b628  ldr x8,[x8, #0x168]
7101e1b62c  ldr x8,[x8, w9, SXTW #0x3]
7101e1b630  ldr x19,[x8, #0x28]
7101e1b634  cbz x19,0x7101e1b6d4
7101e1b638  ldr x8,[x19]
7101e1b63c  ldr x8,[x8, #0x218]
7101e1b640  mov x0,x19
7101e1b644  mov w1,wzr
7101e1b648  blr x8
7101e1b64c  ldr x8,[x19]
7101e1b650  ldr x8,[x8, #0x410]
7101e1b654  mov x0,x19
7101e1b658  blr x8
7101e1b65c  ldr x8,[x19]
7101e1b660  ldr x8,[x8, #0x3f0]
7101e1b664  mov x0,x19
7101e1b668  mov w1,wzr
7101e1b66c  blr x8
7101e1b670  ldr x8,[x19]
7101e1b674  ldr x8,[x8, #0x140]
7101e1b678  mov x0,x19
7101e1b67c  blr x8
7101e1b680  cmp w0,#0x6
7101e1b684  b.eq 0x7101e1b6b0
7101e1b688  ldr x8,[x19]
7101e1b68c  ldr x8,[x8, #0x140]
7101e1b690  mov x0,x19
7101e1b694  blr x8
7101e1b698  cmp w0,#0x1
7101e1b69c  b.eq 0x7101e1b6b0
7101e1b6a0  ldr x8,[x19]
7101e1b6a4  ldr x8,[x8, #0x400]
7101e1b6a8  mov x0,x19
7101e1b6ac  blr x8
7101e1b6b0  ldr x8,[x19]
7101e1b6b4  ldr x8,[x8, #0x158]
7101e1b6b8  mov x0,x19
7101e1b6bc  blr x8
7101e1b6c0  tbnz w0,#0x0,0x7101e1b6d4
7101e1b6c4  ldr x8,[x19]
7101e1b6c8  ldr x8,[x8, #0x370]
7101e1b6cc  mov x0,x19
7101e1b6d0  blr x8
7101e1b6d4  ldr x19,[sp, #0x1a8]
7101e1b6d8  adrp x8,0x710523d000
7101e1b6dc  add x8,x8,#0x988
7101e1b6e0  stp x8,xzr,[sp, #0x1a0]
7101e1b6e4  cbz x19,0x7101e1aaf4
7101e1b6e8  ldr x0,[x19, #0x18]
7101e1b6ec  stp x23,xzr,[x19, #0x10]
7101e1b6f0  cbz x0,0x7101e1b6f8
7101e1b6f4  bl 0x710392eb40
7101e1b6f8  mov x0,x19
7101e1b6fc  bl 0x710392eb40
7101e1b700  b 0x7101e1aaf4
7101e1b704  add x8,sp,#0x2f0
7101e1b708  add x21,x8,#0x8
7101e1b70c  strb wzr,[sp, #0x2f8]
7101e1b710  str xzr,[sp, #0x2f0]
7101e1b714  b 0x7101e1b540
7101e1b718  add x0,sp,#0x2d8
7101e1b71c  bl 0x71039c0c00
7101e1b720  bl 0x71039c2650
7101e1b724  mov x0,x21
7101e1b728  bl 0x71039c1330
7101e1b72c  add x0,sp,#0x2c0
7101e1b730  bl 0x71039c0c00
7101e1b734  add x0,sp,#0x1a0
7101e1b738  bl 0x71039c0c00
7101e1b73c  mov x0,x21
7101e1b740  bl 0x71039c0c00
7101e1b744  add x0,x21,#0xb60
7101e1b748  bl 0x71039c1330
7101e1b74c  add x0,x19,#0x510
7101e1b750  bl 0x71039c1330
