// addr:      71032cdd90
// offset:    0x32cdd90
// name:      FUN_71032cdd90
// mangled:   
// size:      1176

71032cdd90  str d8,[sp, #-0x30]!
71032cdd94  str x21,[sp, #0x8]
71032cdd98  stp x20,x19,[sp, #0x10]
71032cdd9c  stp x29,x30,[sp, #0x20]
71032cdda0  add x29,sp,#0x20
71032cdda4  ldr s1,[x0, #0x108]
71032cdda8  ldr s0,[x0, #0x10c]
71032cddac  fcmp s1,s0
71032cddb0  mov x19,x0
71032cddb4  strb wzr,[x0, #0x124]
71032cddb8  b.eq 0x71032cde00
71032cddbc  ldr x8,[x19, #0x28]
71032cddc0  str s0,[x19, #0x108]
71032cddc4  ldr x8,[x8, #0x18]
71032cddc8  ldr x8,[x8]
71032cddcc  cbz x8,0x71032cdde0
71032cddd0  ldrb w9,[x8, #0x58]
71032cddd4  orr w9,w9,#0x10
71032cddd8  stp s0,s0,[x8, #0x48]
71032cdddc  strb w9,[x8, #0x58]
71032cdde0  ldr s0,[x19, #0x100]
71032cdde4  ldr q1,[x19, #0xa0]
71032cdde8  mov w8,#0xcccd
71032cddec  movk w8,#0x3f4c, LSL #16
71032cddf0  fmul v0.4S,v1.4S,v0.S[0x0]
71032cddf4  dup v1.4S,w8
71032cddf8  fmul v0.4S,v0.4S,v1.4S
71032cddfc  str q0,[x19, #0xb0]
71032cde00  ldrb w8,[x19, #0x125]
71032cde04  cbnz w8,0x71032ce19c
71032cde08  mov x10,x19
71032cde0c  ldr q1,[x10, #0xf0]!
71032cde10  mov x9,x10
71032cde14  ldrb w8,[x10, #0x2f]
71032cde18  ldr q0,[x9, #-0x10]!
71032cde1c  fcmeq v2.4S,v0.4S,v1.4S
71032cde20  ext v3.16B,v2.16B,v2.16B,0x8
71032cde24  and v2.8B,v2.8B,v3.8B
71032cde28  mov w11,v2.S[0x1]
71032cde2c  fmov w12,s2
71032cde30  tst w12,w11
71032cde34  b.eq 0x71032cdee8
71032cde38  ldr x11,[x19, #0x110]
71032cde3c  cbz x11,0x71032ce044
71032cde40  cbz w8,0x71032ce044
71032cde44  ldr x8,[x11, #0x8]
71032cde48  ldr x8,[x8, #0x100]
71032cde4c  ldr q0,[x8, #0x70]
71032cde50  str q0,[x19, #0xf0]
71032cde54  ldr x8,[x10, #0x8]
71032cde58  str x8,[x9, #0x8]
71032cde5c  ldr x8,[x10]
71032cde60  str x8,[x9]
71032cde64  ldr x8,[x19, #0x28]
71032cde68  ldr x8,[x8, #0x18]
71032cde6c  ldr q0,[x19, #0xe0]
71032cde70  ldr x8,[x8]
71032cde74  cbz x8,0x71032cde8c
71032cde78  ldrb w10,[x8, #0x58]
71032cde7c  orr w10,w10,#0x10
71032cde80  str d0,[x8, #0x30]
71032cde84  strb w10,[x8, #0x58]
71032cde88  ldr q0,[x9]
71032cde8c  ldr s1,[x19, #0xc4]
71032cde90  fcmp s1,s0
71032cde94  b.lt 0x71032cdeb4
71032cde98  ldr s1,[x19, #0xc0]
71032cde9c  fcmp s1,s0
71032cdea0  b.hi 0x71032cdeb4
71032cdea4  dup s0,v0.S[0x1]
71032cdea8  ldr s1,[x19, #0xcc]
71032cdeac  fcmp s1,s0
71032cdeb0  b.ge 0x71032ce1e4
71032cdeb4  mov w8,wzr
71032cdeb8  strb wzr,[x19, #0x118]
71032cdebc  ldr x9,[x19, #0x28]
71032cdec0  ldr x9,[x9, #0x8]
71032cdec4  cbz x9,0x71032cdee0
71032cdec8  ldr x9,[x9, #0x18]
71032cdecc  cbz x9,0x71032cdee0
71032cded0  ldrb w10,[x9, #0x58]
71032cded4  and w10,w10,#0xfe
71032cded8  orr w8,w10,w8
71032cdedc  strb w8,[x9, #0x58]
71032cdee0  mov w8,#0x1
71032cdee4  b 0x71032ce044
71032cdee8  cbz w8,0x71032cdf04
71032cdeec  ldr x11,[x19, #0x110]
71032cdef0  cbz x11,0x71032cdf0c
71032cdef4  ldr x11,[x11, #0x8]
71032cdef8  ldr x11,[x11, #0x100]
71032cdefc  add x11,x11,#0x70
71032cdf00  b 0x71032cdf14
71032cdf04  mov w11,wzr
71032cdf08  b 0x71032cdf20
71032cdf0c  adrp x11,0x71052a8000
71032cdf10  ldr x11,[x11, #0xa80]
71032cdf14  ldr q1,[x11]
71032cdf18  mov w11,#0x1
71032cdf1c  str q1,[x19, #0xf0]
71032cdf20  fsub v1.4S,v1.4S,v0.4S
71032cdf24  ldr s2,[x19, #0xb0]
71032cdf28  fmul v3.4S,v1.4S,v1.4S
71032cdf2c  fmul s2,s2,s2
71032cdf30  faddp v3.2S,v3.2S,v3.2S
71032cdf34  fcmp s2,s3
71032cdf38  b.pl 0x71032cdf60
71032cdf3c  mov w10,#0xcccd
71032cdf40  movk w10,#0x3ecc, LSL #16
71032cdf44  dup v2.4S,w10
71032cdf48  fmul v1.4S,v1.4S,v2.4S
71032cdf4c  fadd v0.4S,v0.4S,v1.4S
71032cdf50  str q0,[x9]
71032cdf54  ldr q0,[x9]
71032cdf58  cbnz w11,0x71032cdfc8
71032cdf5c  b 0x71032cdf90
71032cdf60  ldr x8,[x10, #0x8]
71032cdf64  str x8,[x9, #0x8]
71032cdf68  ldr x8,[x10]
71032cdf6c  str x8,[x9]
71032cdf70  ldrb w8,[x19, #0x123]
71032cdf74  cbz w8,0x71032cdf84
71032cdf78  add x8,x19,#0x123
71032cdf7c  mov w10,#0x100
71032cdf80  strh w10,[x8]
71032cdf84  mov w8,#0x1
71032cdf88  ldr q0,[x9]
71032cdf8c  cbnz w11,0x71032cdfc8
71032cdf90  ldp s1,s2,[x19, #0xd0]
71032cdf94  fcmp s0,s1
71032cdf98  fcsel s1,s1,s0,mi
71032cdf9c  fcmp s2,s1
71032cdfa0  fcsel s1,s2,s1,mi
71032cdfa4  dup s0,v0.S[0x1]
71032cdfa8  ldp s2,s3,[x19, #0xd8]
71032cdfac  fcmp s0,s2
71032cdfb0  fcsel s2,s2,s0,mi
71032cdfb4  movi v0.2D,#0x0
71032cdfb8  fcmp s3,s2
71032cdfbc  mov v0.S[0x0],v1.S[0x0]
71032cdfc0  fcsel s1,s3,s2,mi
71032cdfc4  mov v0.S[0x1],v1.S[0x0]
71032cdfc8  ldr x10,[x19, #0x28]
71032cdfcc  str q0,[x19, #0xe0]
71032cdfd0  ldr x10,[x10, #0x18]
71032cdfd4  ldr x10,[x10]
71032cdfd8  cbz x10,0x71032cdff0
71032cdfdc  ldrb w11,[x10, #0x58]
71032cdfe0  orr w11,w11,#0x10
71032cdfe4  str d0,[x10, #0x30]
71032cdfe8  strb w11,[x10, #0x58]
71032cdfec  ldr q0,[x9]
71032cdff0  ldr s1,[x19, #0xc4]
71032cdff4  fcmp s1,s0
71032cdff8  b.lt 0x71032ce018
71032cdffc  ldr s1,[x19, #0xc0]
71032ce000  fcmp s1,s0
71032ce004  b.hi 0x71032ce018
71032ce008  dup s0,v0.S[0x1]
71032ce00c  ldr s1,[x19, #0xcc]
71032ce010  fcmp s1,s0
71032ce014  b.ge 0x71032ce1b0
71032ce018  mov w9,wzr
71032ce01c  strb wzr,[x19, #0x118]
71032ce020  ldr x10,[x19, #0x28]
71032ce024  ldr x10,[x10, #0x8]
71032ce028  cbz x10,0x71032ce044
71032ce02c  ldr x10,[x10, #0x18]
71032ce030  cbz x10,0x71032ce044
71032ce034  ldrb w11,[x10, #0x58]
71032ce038  and w11,w11,#0xfe
71032ce03c  orr w9,w11,w9
71032ce040  strb w9,[x10, #0x58]
71032ce044  ldrb w21,[x19, #0x11e]
71032ce048  ldrb w9,[x19, #0x120]
71032ce04c  cmp w8,#0x0
71032ce050  cset w20,ne
71032ce054  cmp w21,w9
71032ce058  b.ne 0x71032ce078
71032ce05c  ldrb w10,[x19, #0x121]
71032ce060  cmp w8,#0x0
71032ce064  cset w9,ne
71032ce068  cmp w9,w10
71032ce06c  b.ne 0x71032ce078
71032ce070  ldrb w9,[x19, #0x122]
71032ce074  cbz w9,0x71032ce194
71032ce078  cbz w8,0x71032ce084
71032ce07c  add x8,x19,#0x78
71032ce080  b 0x71032ce094
71032ce084  cbz w21,0x71032ce090
71032ce088  add x8,x19,#0x68
71032ce08c  b 0x71032ce094
71032ce090  add x8,x19,#0x58
71032ce094  ldr x9,[x8]
71032ce098  ldr x9,[x9]
71032ce09c  ldr x10,[x19, #0x48]
71032ce0a0  str x9,[x10]
71032ce0a4  ldr x9,[x8]
71032ce0a8  ldr x9,[x9, #0x8]
71032ce0ac  ldr x10,[x19, #0x48]
71032ce0b0  str x9,[x10, #0x8]
71032ce0b4  ldr x9,[x8]
71032ce0b8  ldr x9,[x9, #0x10]
71032ce0bc  ldr x10,[x19, #0x48]
71032ce0c0  str x9,[x10, #0x10]
71032ce0c4  ldr x8,[x8]
71032ce0c8  ldr x8,[x8, #0x18]
71032ce0cc  ldr x9,[x19, #0x48]
71032ce0d0  str x8,[x9, #0x18]
71032ce0d4  ldr x8,[x19, #0x48]
71032ce0d8  ldr x8,[x8]
71032ce0dc  cbz x8,0x71032ce10c
71032ce0e0  ldr x8,[x19, #0x38]
71032ce0e4  ldr x1,[x8]
71032ce0e8  cbz x1,0x71032ce10c
71032ce0ec  ldr x0,[x1, #0x18]
71032ce0f0  cbz x0,0x71032ce10c
71032ce0f4  bl 0x7100058290
71032ce0f8  ldr x8,[x19, #0x48]
71032ce0fc  ldr x0,[x8]
71032ce100  ldr x8,[x19, #0x38]
71032ce104  ldr x1,[x8]
71032ce108  bl 0x7100058250
71032ce10c  ldrb w8,[x19, #0x120]
71032ce110  cmp w8,w21
71032ce114  strb wzr,[x19, #0x122]
71032ce118  b.eq 0x71032ce194
71032ce11c  ldrb w8,[x19, #0x126]
71032ce120  cbz w8,0x71032ce140
71032ce124  ldr x0,[x19, #0x28]
71032ce128  cbz w21,0x71032ce170
71032ce12c  fmov s0,0x3f800000
71032ce130  adrp x1,0x71042d4000
71032ce134  add x1,x1,#0xaad
71032ce138  bl 0x7103778300
71032ce13c  b 0x71032ce144
71032ce140  cbz w21,0x71032ce180
71032ce144  fmov s8,0x3f800000
71032ce148  ldr x0,[x19, #0x28]
71032ce14c  adrp x1,0x7104464000
71032ce150  add x1,x1,#0x1ee
71032ce154  mov v0.16B,v8.16B
71032ce158  bl 0x7103778300
71032ce15c  ldr x0,[x19, #0x28]
71032ce160  adrp x1,0x710426e000
71032ce164  add x1,x1,#0x47f
71032ce168  mov v0.16B,v8.16B
71032ce16c  b 0x71032ce190
71032ce170  fmov s0,0x3f800000
71032ce174  adrp x1,0x71043ef000
71032ce178  add x1,x1,#0x55
71032ce17c  bl 0x7103778300
71032ce180  ldr x0,[x19, #0x28]
71032ce184  fmov s0,0x3f800000
71032ce188  adrp x1,0x71042f6000
71032ce18c  add x1,x1,#0x3e8
71032ce190  bl 0x7103778300
71032ce194  strb w21,[x19, #0x120]
71032ce198  strb w20,[x19, #0x121]
71032ce19c  ldp x29,x30,[sp, #0x20]
71032ce1a0  ldr x21,[sp, #0x8]
71032ce1a4  ldp x20,x19,[sp, #0x10]
71032ce1a8  ldr d8,[sp], #0x30
71032ce1ac  ret
71032ce1b0  ldr s1,[x19, #0xc8]
71032ce1b4  fcmp s1,s0
71032ce1b8  cset w9,ls
71032ce1bc  strb w9,[x19, #0x118]
71032ce1c0  b.hi 0x71032ce218
71032ce1c4  ldrb w9,[x19, #0x119]
71032ce1c8  cbz w9,0x71032ce020
71032ce1cc  ldrb w9,[x19, #0x11a]
71032ce1d0  cbz w9,0x71032ce020
71032ce1d4  ldrb w9,[x19, #0x11b]
71032ce1d8  cbz w9,0x71032ce020
71032ce1dc  ldrb w9,[x19, #0x11c]
71032ce1e0  b 0x71032ce020
71032ce1e4  ldr s1,[x19, #0xc8]
71032ce1e8  fcmp s1,s0
71032ce1ec  cset w8,ls
71032ce1f0  strb w8,[x19, #0x118]
71032ce1f4  b.hi 0x71032ce220
71032ce1f8  ldrb w8,[x19, #0x119]
71032ce1fc  cbz w8,0x71032cdebc
71032ce200  ldrb w8,[x19, #0x11a]
71032ce204  cbz w8,0x71032cdebc
71032ce208  ldrb w8,[x19, #0x11b]
71032ce20c  cbz w8,0x71032cdebc
71032ce210  ldrb w8,[x19, #0x11c]
71032ce214  b 0x71032cdebc
71032ce218  mov w9,wzr
71032ce21c  b 0x71032ce020
71032ce220  mov w8,wzr
71032ce224  b 0x71032cdebc
