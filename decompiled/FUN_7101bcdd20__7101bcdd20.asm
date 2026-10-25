// addr:      7101bcdd20
// offset:    0x1bcdd20
// name:      FUN_7101bcdd20
// mangled:   
// size:      2800

7101bcdd20  sub sp,sp,#0x190
7101bcdd24  stp x28,x27,[sp, #0x130]
7101bcdd28  stp x26,x25,[sp, #0x140]
7101bcdd2c  stp x24,x23,[sp, #0x150]
7101bcdd30  stp x22,x21,[sp, #0x160]
7101bcdd34  stp x20,x19,[sp, #0x170]
7101bcdd38  stp x29,x30,[sp, #0x180]
7101bcdd3c  add x29,sp,#0x180
7101bcdd40  mov x19,x0
7101bcdd44  add x0,sp,#0x30
7101bcdd48  mov w20,w2
7101bcdd4c  bl 0x7103776390
7101bcdd50  mov w0,#0x10
7101bcdd54  mov w1,#0x10
7101bcdd58  str w20,[x19]
7101bcdd5c  bl 0x710392e290
7101bcdd60  mov x21,x0
7101bcdd64  cbnz x0,0x7101bcddb0
7101bcdd68  adrp x8,0x7105332000
7101bcdd6c  ldr x0,[x8, #0xf00]
7101bcdd70  cbz x0,0x7101bcddac
7101bcdd74  mov w8,#0x10
7101bcdd78  stur wzr,[x29, #-0x70]
7101bcdd7c  sub x1,x29,#0x70
7101bcdd80  str x8,[sp, #0x40]
7101bcdd84  ldr x8,[x0]
7101bcdd88  ldr x8,[x8, #0x30]
7101bcdd8c  add x2,sp,#0x40
7101bcdd90  blr x8
7101bcdd94  tbz w0,#0x0,0x7101bcddac
7101bcdd98  mov w0,#0x10
7101bcdd9c  mov w1,#0x10
7101bcdda0  bl 0x710392e290
7101bcdda4  mov x21,x0
7101bcdda8  cbnz x0,0x7101bcddb0
7101bcddac  mov x21,xzr
7101bcddb0  adrp x26,0x710438c000
7101bcddb4  add x26,x26,#0x84a
7101bcddb8  adrp x8,0x71043df000
7101bcddbc  add x8,x8,#0xfaf
7101bcddc0  mov w0,#0x10
7101bcddc4  mov w1,#0x10
7101bcddc8  stp x26,x8,[x21]
7101bcddcc  str wzr,[sp, #0x40]
7101bcddd0  bl 0x710392e290
7101bcddd4  cbnz x0,0x7101bcde1c
7101bcddd8  adrp x8,0x7105332000
7101bcdddc  ldr x0,[x8, #0xf00]
7101bcdde0  cbz x0,0x7101bcde18
7101bcdde4  mov w8,#0x10
7101bcdde8  stur wzr,[x29, #-0x80]
7101bcddec  sub x1,x29,#0x80
7101bcddf0  stur x8,[x29, #-0x70]
7101bcddf4  ldr x8,[x0]
7101bcddf8  ldr x8,[x8, #0x30]
7101bcddfc  sub x2,x29,#0x70
7101bcde00  blr x8
7101bcde04  tbz w0,#0x0,0x7101bcde18
7101bcde08  mov w0,#0x10
7101bcde0c  mov w1,#0x10
7101bcde10  bl 0x710392e290
7101bcde14  cbnz x0,0x7101bcde1c
7101bcde18  mov x0,xzr
7101bcde1c  add x8,x0,#0x10
7101bcde20  str x8,[sp, #0x58]
7101bcde24  mov w1,#0x10
7101bcde28  ldp x9,x10,[x21]
7101bcde2c  stp x9,x10,[x0]
7101bcde30  stp x0,x8,[sp, #0x48]
7101bcde34  mov w0,#0x10
7101bcde38  bl 0x710392e290
7101bcde3c  mov x22,x0
7101bcde40  cbnz x0,0x7101bcde8c
7101bcde44  adrp x8,0x7105332000
7101bcde48  ldr x0,[x8, #0xf00]
7101bcde4c  cbz x0,0x7101bcde88
7101bcde50  mov w8,#0x10
7101bcde54  stur wzr,[x29, #-0x80]
7101bcde58  sub x1,x29,#0x80
7101bcde5c  stur x8,[x29, #-0x70]
7101bcde60  ldr x8,[x0]
7101bcde64  ldr x8,[x8, #0x30]
7101bcde68  sub x2,x29,#0x70
7101bcde6c  blr x8
7101bcde70  tbz w0,#0x0,0x7101bcde88
7101bcde74  mov w0,#0x10
7101bcde78  mov w1,#0x10
7101bcde7c  bl 0x710392e290
7101bcde80  mov x22,x0
7101bcde84  cbnz x0,0x7101bcde8c
7101bcde88  mov x22,xzr
7101bcde8c  adrp x8,0x7104454000
7101bcde90  add x8,x8,#0x8ad
7101bcde94  mov w0,#0x10
7101bcde98  stp x26,x8,[x22]
7101bcde9c  mov w8,#0x1
7101bcdea0  mov w1,#0x10
7101bcdea4  str w8,[sp, #0x60]
7101bcdea8  bl 0x710392e290
7101bcdeac  cbnz x0,0x7101bcdef4
7101bcdeb0  adrp x8,0x7105332000
7101bcdeb4  ldr x0,[x8, #0xf00]
7101bcdeb8  cbz x0,0x7101bcdef0
7101bcdebc  mov w8,#0x10
7101bcdec0  stur wzr,[x29, #-0x80]
7101bcdec4  sub x1,x29,#0x80
7101bcdec8  stur x8,[x29, #-0x70]
7101bcdecc  ldr x8,[x0]
7101bcded0  ldr x8,[x8, #0x30]
7101bcded4  sub x2,x29,#0x70
7101bcded8  blr x8
7101bcdedc  tbz w0,#0x0,0x7101bcdef0
7101bcdee0  mov w0,#0x10
7101bcdee4  mov w1,#0x10
7101bcdee8  bl 0x710392e290
7101bcdeec  cbnz x0,0x7101bcdef4
7101bcdef0  mov x0,xzr
7101bcdef4  add x8,x0,#0x10
7101bcdef8  str x8,[sp, #0x78]
7101bcdefc  mov w1,#0x10
7101bcdf00  ldp x9,x10,[x22]
7101bcdf04  stp x9,x10,[x0]
7101bcdf08  stp x0,x8,[sp, #0x68]
7101bcdf0c  mov w0,#0x10
7101bcdf10  bl 0x710392e290
7101bcdf14  mov x23,x0
7101bcdf18  cbnz x0,0x7101bcdf64
7101bcdf1c  adrp x8,0x7105332000
7101bcdf20  ldr x0,[x8, #0xf00]
7101bcdf24  cbz x0,0x7101bcdf60
7101bcdf28  mov w8,#0x10
7101bcdf2c  stur wzr,[x29, #-0x80]
7101bcdf30  sub x1,x29,#0x80
7101bcdf34  stur x8,[x29, #-0x70]
7101bcdf38  ldr x8,[x0]
7101bcdf3c  ldr x8,[x8, #0x30]
7101bcdf40  sub x2,x29,#0x70
7101bcdf44  blr x8
7101bcdf48  tbz w0,#0x0,0x7101bcdf60
7101bcdf4c  mov w0,#0x10
7101bcdf50  mov w1,#0x10
7101bcdf54  bl 0x710392e290
7101bcdf58  mov x23,x0
7101bcdf5c  cbnz x0,0x7101bcdf64
7101bcdf60  mov x23,xzr
7101bcdf64  adrp x8,0x7104454000
7101bcdf68  add x8,x8,#0x8bb
7101bcdf6c  mov w0,#0x10
7101bcdf70  stp x26,x8,[x23]
7101bcdf74  mov w8,#0x2
7101bcdf78  mov w1,#0x10
7101bcdf7c  str w8,[sp, #0x80]
7101bcdf80  bl 0x710392e290
7101bcdf84  cbnz x0,0x7101bcdfcc
7101bcdf88  adrp x8,0x7105332000
7101bcdf8c  ldr x0,[x8, #0xf00]
7101bcdf90  cbz x0,0x7101bcdfc8
7101bcdf94  mov w8,#0x10
7101bcdf98  stur wzr,[x29, #-0x80]
7101bcdf9c  sub x1,x29,#0x80
7101bcdfa0  stur x8,[x29, #-0x70]
7101bcdfa4  ldr x8,[x0]
7101bcdfa8  ldr x8,[x8, #0x30]
7101bcdfac  sub x2,x29,#0x70
7101bcdfb0  blr x8
7101bcdfb4  tbz w0,#0x0,0x7101bcdfc8
7101bcdfb8  mov w0,#0x10
7101bcdfbc  mov w1,#0x10
7101bcdfc0  bl 0x710392e290
7101bcdfc4  cbnz x0,0x7101bcdfcc
7101bcdfc8  mov x0,xzr
7101bcdfcc  add x8,x0,#0x10
7101bcdfd0  str x8,[sp, #0x98]
7101bcdfd4  mov w1,#0x10
7101bcdfd8  ldp x9,x10,[x23]
7101bcdfdc  stp x9,x10,[x0]
7101bcdfe0  stp x0,x8,[sp, #0x88]
7101bcdfe4  mov w0,#0x10
7101bcdfe8  bl 0x710392e290
7101bcdfec  mov x20,x0
7101bcdff0  cbnz x0,0x7101bce03c
7101bcdff4  adrp x8,0x7105332000
7101bcdff8  ldr x0,[x8, #0xf00]
7101bcdffc  cbz x0,0x7101bce038
7101bce000  mov w8,#0x10
7101bce004  stur wzr,[x29, #-0x80]
7101bce008  sub x1,x29,#0x80
7101bce00c  stur x8,[x29, #-0x70]
7101bce010  ldr x8,[x0]
7101bce014  ldr x8,[x8, #0x30]
7101bce018  sub x2,x29,#0x70
7101bce01c  blr x8
7101bce020  tbz w0,#0x0,0x7101bce038
7101bce024  mov w0,#0x10
7101bce028  mov w1,#0x10
7101bce02c  bl 0x710392e290
7101bce030  mov x20,x0
7101bce034  cbnz x0,0x7101bce03c
7101bce038  mov x20,xzr
7101bce03c  adrp x8,0x710433a000
7101bce040  add x8,x8,#0x49
7101bce044  mov w0,#0x10
7101bce048  stp x26,x8,[x20]
7101bce04c  orr w8,wzr,#0x3
7101bce050  mov w1,#0x10
7101bce054  str w8,[sp, #0xa0]
7101bce058  bl 0x710392e290
7101bce05c  cbnz x0,0x7101bce0a4
7101bce060  adrp x8,0x7105332000
7101bce064  ldr x0,[x8, #0xf00]
7101bce068  cbz x0,0x7101bce0a0
7101bce06c  mov w8,#0x10
7101bce070  stur wzr,[x29, #-0x80]
7101bce074  sub x1,x29,#0x80
7101bce078  stur x8,[x29, #-0x70]
7101bce07c  ldr x8,[x0]
7101bce080  ldr x8,[x8, #0x30]
7101bce084  sub x2,x29,#0x70
7101bce088  blr x8
7101bce08c  tbz w0,#0x0,0x7101bce0a0
7101bce090  mov w0,#0x10
7101bce094  mov w1,#0x10
7101bce098  bl 0x710392e290
7101bce09c  cbnz x0,0x7101bce0a4
7101bce0a0  mov x0,xzr
7101bce0a4  add x8,x0,#0x10
7101bce0a8  str x8,[sp, #0xb8]
7101bce0ac  mov w1,#0x10
7101bce0b0  ldp x9,x10,[x20]
7101bce0b4  stp x9,x10,[x0]
7101bce0b8  stp x0,x8,[sp, #0xa8]
7101bce0bc  mov w0,#0x10
7101bce0c0  bl 0x710392e290
7101bce0c4  mov x24,x0
7101bce0c8  cbnz x0,0x7101bce114
7101bce0cc  adrp x8,0x7105332000
7101bce0d0  ldr x0,[x8, #0xf00]
7101bce0d4  cbz x0,0x7101bce110
7101bce0d8  mov w8,#0x10
7101bce0dc  stur wzr,[x29, #-0x80]
7101bce0e0  sub x1,x29,#0x80
7101bce0e4  stur x8,[x29, #-0x70]
7101bce0e8  ldr x8,[x0]
7101bce0ec  ldr x8,[x8, #0x30]
7101bce0f0  sub x2,x29,#0x70
7101bce0f4  blr x8
7101bce0f8  tbz w0,#0x0,0x7101bce110
7101bce0fc  mov w0,#0x10
7101bce100  mov w1,#0x10
7101bce104  bl 0x710392e290
7101bce108  mov x24,x0
7101bce10c  cbnz x0,0x7101bce114
7101bce110  mov x24,xzr
7101bce114  adrp x8,0x71042b4000
7101bce118  add x8,x8,#0x21d
7101bce11c  mov w0,#0x10
7101bce120  stp x26,x8,[x24]
7101bce124  mov w8,#0x4
7101bce128  mov w1,#0x10
7101bce12c  str w8,[sp, #0xc0]
7101bce130  bl 0x710392e290
7101bce134  cbnz x0,0x7101bce17c
7101bce138  adrp x8,0x7105332000
7101bce13c  ldr x0,[x8, #0xf00]
7101bce140  cbz x0,0x7101bce178
7101bce144  mov w8,#0x10
7101bce148  stur wzr,[x29, #-0x80]
7101bce14c  sub x1,x29,#0x80
7101bce150  stur x8,[x29, #-0x70]
7101bce154  ldr x8,[x0]
7101bce158  ldr x8,[x8, #0x30]
7101bce15c  sub x2,x29,#0x70
7101bce160  blr x8
7101bce164  tbz w0,#0x0,0x7101bce178
7101bce168  mov w0,#0x10
7101bce16c  mov w1,#0x10
7101bce170  bl 0x710392e290
7101bce174  cbnz x0,0x7101bce17c
7101bce178  mov x0,xzr
7101bce17c  add x8,x0,#0x10
7101bce180  str x8,[sp, #0xd8]
7101bce184  mov w1,#0x10
7101bce188  ldp x9,x10,[x24]
7101bce18c  stp x9,x10,[x0]
7101bce190  stp x0,x8,[sp, #0xc8]
7101bce194  mov w0,#0x10
7101bce198  bl 0x710392e290
7101bce19c  mov x25,x0
7101bce1a0  cbnz x0,0x7101bce1ec
7101bce1a4  adrp x8,0x7105332000
7101bce1a8  ldr x0,[x8, #0xf00]
7101bce1ac  cbz x0,0x7101bce1e8
7101bce1b0  mov w8,#0x10
7101bce1b4  stur wzr,[x29, #-0x80]
7101bce1b8  sub x1,x29,#0x80
7101bce1bc  stur x8,[x29, #-0x70]
7101bce1c0  ldr x8,[x0]
7101bce1c4  ldr x8,[x8, #0x30]
7101bce1c8  sub x2,x29,#0x70
7101bce1cc  blr x8
7101bce1d0  tbz w0,#0x0,0x7101bce1e8
7101bce1d4  mov w0,#0x10
7101bce1d8  mov w1,#0x10
7101bce1dc  bl 0x710392e290
7101bce1e0  mov x25,x0
7101bce1e4  cbnz x0,0x7101bce1ec
7101bce1e8  mov x25,xzr
7101bce1ec  adrp x8,0x71042d6000
7101bce1f0  add x8,x8,#0x18b
7101bce1f4  str x20,[sp, #0x10]
7101bce1f8  stp x26,x8,[x25]
7101bce1fc  mov w8,#0x5
7101bce200  mov w0,#0x10
7101bce204  mov w1,#0x10
7101bce208  str w8,[sp, #0xe0]
7101bce20c  bl 0x710392e290
7101bce210  cbnz x0,0x7101bce258
7101bce214  adrp x8,0x7105332000
7101bce218  ldr x0,[x8, #0xf00]
7101bce21c  cbz x0,0x7101bce254
7101bce220  mov w8,#0x10
7101bce224  stur wzr,[x29, #-0x80]
7101bce228  sub x1,x29,#0x80
7101bce22c  stur x8,[x29, #-0x70]
7101bce230  ldr x8,[x0]
7101bce234  ldr x8,[x8, #0x30]
7101bce238  sub x2,x29,#0x70
7101bce23c  blr x8
7101bce240  tbz w0,#0x0,0x7101bce254
7101bce244  mov w0,#0x10
7101bce248  mov w1,#0x10
7101bce24c  bl 0x710392e290
7101bce250  cbnz x0,0x7101bce258
7101bce254  mov x0,xzr
7101bce258  add x8,x0,#0x10
7101bce25c  str x8,[sp, #0xf8]
7101bce260  adrp x28,0x710523d000
7101bce264  add x28,x28,#0x9e8
7101bce268  ldp x9,x10,[x25]
7101bce26c  str x25,[sp]
7101bce270  stp x9,x10,[x0]
7101bce274  stp x0,x8,[sp, #0xe8]
7101bce278  mov w0,#0x10
7101bce27c  orr w1,wzr,#0x18
7101bce280  add x20,x19,#0x10
7101bce284  stur x28,[x29, #-0x70]
7101bce288  bl 0x710392e290
7101bce28c  cbnz x0,0x7101bce2d4
7101bce290  adrp x8,0x7105332000
7101bce294  ldr x0,[x8, #0xf00]
7101bce298  cbz x0,0x7101bce2d0
7101bce29c  orr w8,wzr,#0x18
7101bce2a0  stur wzr,[x29, #-0x5c]
7101bce2a4  sub x1,x29,#0x5c
7101bce2a8  stur x8,[x29, #-0x80]
7101bce2ac  ldr x8,[x0]
7101bce2b0  ldr x8,[x8, #0x30]
7101bce2b4  sub x2,x29,#0x80
7101bce2b8  blr x8
7101bce2bc  tbz w0,#0x0,0x7101bce2d0
7101bce2c0  mov w0,#0x10
7101bce2c4  orr w1,wzr,#0x18
7101bce2c8  bl 0x710392e290
7101bce2cc  cbnz x0,0x7101bce2d4
7101bce2d0  mov x0,xzr
7101bce2d4  mov w8,#0x1
7101bce2d8  strb w8,[x0, #0x10]
7101bce2dc  sub x8,x29,#0x70
7101bce2e0  stp xzr,xzr,[x0]
7101bce2e4  cmp x20,x8
7101bce2e8  stur x0,[x29, #-0x68]
7101bce2ec  b.eq 0x7101bce31c
7101bce2f0  ldr x9,[x0]
7101bce2f4  ldr x10,[x19, #0x18]
7101bce2f8  str x9,[x10]
7101bce2fc  ldur x9,[x29, #-0x68]
7101bce300  ldr x9,[x9, #0x8]
7101bce304  ldr x10,[x19, #0x18]
7101bce308  str x9,[x10, #0x8]
7101bce30c  ldur x0,[x29, #-0x68]
7101bce310  ldrb w9,[x0, #0x10]
7101bce314  ldr x10,[x19, #0x18]
7101bce318  strb w9,[x10, #0x10]
7101bce31c  add x9,x19,#0x20
7101bce320  cmp x9,x8
7101bce324  b.eq 0x7101bce354
7101bce328  ldr x8,[x0]
7101bce32c  ldr x9,[x19, #0x28]
7101bce330  str x8,[x9]
7101bce334  ldur x8,[x29, #-0x68]
7101bce338  ldr x8,[x8, #0x8]
7101bce33c  ldr x9,[x19, #0x28]
7101bce340  str x8,[x9, #0x8]
7101bce344  ldur x0,[x29, #-0x68]
7101bce348  ldrb w8,[x0, #0x10]
7101bce34c  ldr x9,[x19, #0x28]
7101bce350  strb w8,[x9, #0x10]
7101bce354  add x9,x19,#0x30
7101bce358  sub x8,x29,#0x70
7101bce35c  cmp x9,x8
7101bce360  b.eq 0x7101bce390
7101bce364  ldr x9,[x0]
7101bce368  ldr x10,[x19, #0x38]
7101bce36c  str x9,[x10]
7101bce370  ldur x9,[x29, #-0x68]
7101bce374  ldr x9,[x9, #0x8]
7101bce378  ldr x10,[x19, #0x38]
7101bce37c  str x9,[x10, #0x8]
7101bce380  ldur x0,[x29, #-0x68]
7101bce384  ldrb w9,[x0, #0x10]
7101bce388  ldr x10,[x19, #0x38]
7101bce38c  strb w9,[x10, #0x10]
7101bce390  add x9,x19,#0x40
7101bce394  cmp x9,x8
7101bce398  b.eq 0x7101bce3c8
7101bce39c  ldr x8,[x0]
7101bce3a0  ldr x9,[x19, #0x48]
7101bce3a4  str x8,[x9]
7101bce3a8  ldur x8,[x29, #-0x68]
7101bce3ac  ldr x8,[x8, #0x8]
7101bce3b0  ldr x9,[x19, #0x48]
7101bce3b4  str x8,[x9, #0x8]
7101bce3b8  ldur x0,[x29, #-0x68]
7101bce3bc  ldrb w8,[x0, #0x10]
7101bce3c0  ldr x9,[x19, #0x48]
7101bce3c4  strb w8,[x9, #0x10]
7101bce3c8  add x9,x19,#0x50
7101bce3cc  sub x8,x29,#0x70
7101bce3d0  cmp x9,x8
7101bce3d4  b.eq 0x7101bce404
7101bce3d8  ldr x9,[x0]
7101bce3dc  ldr x10,[x19, #0x58]
7101bce3e0  str x9,[x10]
7101bce3e4  ldur x9,[x29, #-0x68]
7101bce3e8  ldr x9,[x9, #0x8]
7101bce3ec  ldr x10,[x19, #0x58]
7101bce3f0  str x9,[x10, #0x8]
7101bce3f4  ldur x0,[x29, #-0x68]
7101bce3f8  ldrb w9,[x0, #0x10]
7101bce3fc  ldr x10,[x19, #0x58]
7101bce400  strb w9,[x10, #0x10]
7101bce404  add x9,x19,#0x60
7101bce408  cmp x9,x8
7101bce40c  b.eq 0x7101bce43c
7101bce410  ldr x8,[x0]
7101bce414  ldr x9,[x19, #0x68]
7101bce418  str x8,[x9]
7101bce41c  ldur x8,[x29, #-0x68]
7101bce420  ldr x8,[x8, #0x8]
7101bce424  ldr x9,[x19, #0x68]
7101bce428  str x8,[x9, #0x8]
7101bce42c  ldur x0,[x29, #-0x68]
7101bce430  ldrb w8,[x0, #0x10]
7101bce434  ldr x9,[x19, #0x68]
7101bce438  strb w8,[x9, #0x10]
7101bce43c  str x24,[sp, #0x8]
7101bce440  stp x23,x22,[sp, #0x18]
7101bce444  str x21,[sp, #0x28]
7101bce448  stp x28,xzr,[x29, #-0x70]
7101bce44c  cbz x0,0x7101bce454
7101bce450  bl 0x710392eb40
7101bce454  add x26,sp,#0x40
7101bce458  adrp x21,0x710523d000
7101bce45c  add x21,x21,#0x988
7101bce460  add x23,x26,#0xc0
7101bce464  sub x24,x29,#0x80
7101bce468  adrp x20,0x710523d000
7101bce46c  add x20,x20,#0x9a8
7101bce470  ldr w8,[x26]
7101bce474  cmp w8,#0x6
7101bce478  b.cs 0x7101bce80c
7101bce47c  sub x0,x29,#0x70
7101bce480  add x1,sp,#0x30
7101bce484  bl 0x7103776390
7101bce488  mov x22,x26
7101bce48c  ldr x8,[x22, #0x8]!
7101bce490  ldr x9,[x22, #0x8]
7101bce494  subs x10,x9,x8
7101bce498  b.eq 0x7101bce578
7101bce49c  mov x25,xzr
7101bce4a0  asr x10,x10,#0x3
7101bce4a4  sub x10,x10,#0x1
7101bce4a8  sub x9,x9,x8
7101bce4ac  asr x9,x9,#0x3
7101bce4b0  cmp x25,x10
7101bce4b4  b.ne 0x7101bce518
7101bce4b8  cmp x9,x25
7101bce4bc  b.ls 0x7101bce804
7101bce4c0  ldr x1,[x8, x25, LSL #0x3]
7101bce4c4  sub x8,x29,#0x80
7101bce4c8  sub x0,x29,#0x70
7101bce4cc  bl 0x71037780e0
7101bce4d0  ldrsw x8,[x26]
7101bce4d4  cmp w8,#0x6
7101bce4d8  b.cs 0x7101bce80c
7101bce4dc  add x8,x19,x8, LSL #0x4
7101bce4e0  add x9,x8,#0x10
7101bce4e4  cmp x9,x24
7101bce4e8  b.eq 0x7101bce504
7101bce4ec  ldur x9,[x29, #-0x78]
7101bce4f0  stur xzr,[x29, #-0x78]
7101bce4f4  ldr x0,[x8, #0x18]
7101bce4f8  str x9,[x8, #0x18]
7101bce4fc  cbz x0,0x7101bce504
7101bce500  bl 0x710392eb40
7101bce504  ldur x0,[x29, #-0x78]
7101bce508  stp x28,xzr,[x29, #-0x80]
7101bce50c  cbz x0,0x7101bce560
7101bce510  bl 0x710392eb40
7101bce514  b 0x7101bce560
7101bce518  cmp x9,x25
7101bce51c  b.ls 0x7101bce804
7101bce520  ldr x1,[x8, x25, LSL #0x3]
7101bce524  sub x8,x29,#0x80
7101bce528  sub x0,x29,#0x70
7101bce52c  bl 0x7103776640
7101bce530  ldur x8,[x29, #-0x78]
7101bce534  ldur x27,[x29, #-0x68]
7101bce538  stur xzr,[x29, #-0x78]
7101bce53c  stur x8,[x29, #-0x68]
7101bce540  cbz x27,0x7101bce55c
7101bce544  ldr x0,[x27, #0x18]
7101bce548  stp x20,xzr,[x27, #0x10]
7101bce54c  cbz x0,0x7101bce554
7101bce550  bl 0x710392eb40
7101bce554  mov x0,x27
7101bce558  bl 0x710392eb40
7101bce55c  stp x21,xzr,[x29, #-0x80]
7101bce560  ldp x8,x9,[x26, #0x8]
7101bce564  sub x10,x9,x8
7101bce568  add x25,x25,#0x1
7101bce56c  asr x10,x10,#0x3
7101bce570  cmp x10,x25
7101bce574  b.hi 0x7101bce4a4
7101bce578  ldur x22,[x29, #-0x68]
7101bce57c  stp x21,xzr,[x29, #-0x70]
7101bce580  cbz x22,0x7101bce59c
7101bce584  ldr x0,[x22, #0x18]
7101bce588  stp x20,xzr,[x22, #0x10]
7101bce58c  cbz x0,0x7101bce594
7101bce590  bl 0x710392eb40
7101bce594  mov x0,x22
7101bce598  bl 0x710392eb40
7101bce59c  add x26,x26,#0x20
7101bce5a0  cmp x26,x23
7101bce5a4  b.ne 0x7101bce470
7101bce5a8  ldr x0,[sp, #0xe8]
7101bce5ac  cbz x0,0x7101bce5b8
7101bce5b0  str x0,[sp, #0xf0]
7101bce5b4  bl 0x710392eb40
7101bce5b8  ldr x0,[sp, #0xc8]
7101bce5bc  ldp x23,x22,[sp, #0x20]
7101bce5c0  ldr x24,[sp, #0x18]
7101bce5c4  cbz x0,0x7101bce5d0
7101bce5c8  str x0,[sp, #0xd0]
7101bce5cc  bl 0x710392eb40
7101bce5d0  ldr x0,[sp, #0xa8]
7101bce5d4  cbz x0,0x7101bce5e0
7101bce5d8  str x0,[sp, #0xb0]
7101bce5dc  bl 0x710392eb40
7101bce5e0  ldr x0,[sp, #0x88]
7101bce5e4  cbz x0,0x7101bce5f0
7101bce5e8  str x0,[sp, #0x90]
7101bce5ec  bl 0x710392eb40
7101bce5f0  ldr x0,[sp, #0x68]
7101bce5f4  cbz x0,0x7101bce600
7101bce5f8  str x0,[sp, #0x70]
7101bce5fc  bl 0x710392eb40
7101bce600  ldr x0,[sp, #0x48]
7101bce604  cbz x0,0x7101bce610
7101bce608  str x0,[sp, #0x50]
7101bce60c  bl 0x710392eb40
7101bce610  ldr x0,[sp]
7101bce614  cbz x0,0x7101bce61c
7101bce618  bl 0x710392eb40
7101bce61c  ldr x0,[sp, #0x8]
7101bce620  cbz x0,0x7101bce628
7101bce624  bl 0x710392eb40
7101bce628  ldr x0,[sp, #0x10]
7101bce62c  cbz x0,0x7101bce634
7101bce630  bl 0x710392eb40
7101bce634  cbz x24,0x7101bce640
7101bce638  mov x0,x24
7101bce63c  bl 0x710392eb40
7101bce640  cbz x23,0x7101bce64c
7101bce644  mov x0,x23
7101bce648  bl 0x710392eb40
7101bce64c  cbz x22,0x7101bce658
7101bce650  mov x0,x22
7101bce654  bl 0x710392eb40
7101bce658  sub x0,x29,#0x80
7101bce65c  add x1,sp,#0x30
7101bce660  bl 0x7103776390
7101bce664  adrp x8,0x71043cf000
7101bce668  add x8,x8,#0x439
7101bce66c  ldr w22,[x19]
7101bce670  str x8,[sp, #0x48]
7101bce674  adrp x8,0x71043ad000
7101bce678  add x8,x8,#0x651
7101bce67c  str x8,[sp, #0x58]
7101bce680  add x8,sp,#0x40
7101bce684  mov w23,#0x1
7101bce688  add x0,x19,#0x140
7101bce68c  stur x8,[x29, #-0x70]
7101bce690  mov w8,#0x2
7101bce694  sub x1,x29,#0x80
7101bce698  sub x2,x29,#0x70
7101bce69c  str wzr,[sp, #0x40]
7101bce6a0  str w23,[sp, #0x50]
7101bce6a4  stur x8,[x29, #-0x68]
7101bce6a8  bl 0x7101bc9fe0
7101bce6ac  adrp x8,0x71043f0000
7101bce6b0  add x8,x8,#0x7f4
7101bce6b4  mov w0,#0x10
7101bce6b8  orr w1,wzr,#0x18
7101bce6bc  stur wzr,[x29, #-0x70]
7101bce6c0  stur x8,[x29, #-0x68]
7101bce6c4  bl 0x710392e290
7101bce6c8  cbnz x0,0x7101bce710
7101bce6cc  adrp x8,0x7105332000
7101bce6d0  ldr x0,[x8, #0xf00]
7101bce6d4  cbz x0,0x7101bce70c
7101bce6d8  orr w8,wzr,#0x18
7101bce6dc  stur wzr,[x29, #-0x5c]
7101bce6e0  sub x1,x29,#0x5c
7101bce6e4  str x8,[sp, #0x40]
7101bce6e8  ldr x8,[x0]
7101bce6ec  ldr x8,[x8, #0x30]
7101bce6f0  add x2,sp,#0x40
7101bce6f4  blr x8
7101bce6f8  tbz w0,#0x0,0x7101bce70c
7101bce6fc  mov w0,#0x10
7101bce700  orr w1,wzr,#0x18
7101bce704  bl 0x710392e290
7101bce708  cbnz x0,0x7101bce710
7101bce70c  mov x0,xzr
7101bce710  stp xzr,xzr,[x0]
7101bce714  strb w23,[x0, #0x10]
7101bce718  ldr x8,[x19, #0x178]
7101bce71c  str xzr,[x8]
7101bce720  ldr x8,[x0, #0x8]
7101bce724  ldr x9,[x19, #0x178]
7101bce728  str x8,[x9, #0x8]
7101bce72c  ldrb w8,[x0, #0x10]
7101bce730  ldr x9,[x19, #0x178]
7101bce734  strb w8,[x9, #0x10]
7101bce738  cbz x0,0x7101bce740
7101bce73c  bl 0x710392eb40
7101bce740  ldur w8,[x29, #-0x70]
7101bce744  cbnz w8,0x7101bce80c
7101bce748  ldur x1,[x29, #-0x68]
7101bce74c  add x8,sp,#0x40
7101bce750  sub x0,x29,#0x80
7101bce754  add x23,sp,#0x40
7101bce758  bl 0x71037780e0
7101bce75c  ldur w8,[x29, #-0x70]
7101bce760  cbnz w8,0x7101bce80c
7101bce764  add x8,x19,#0x170
7101bce768  cmp x8,x23
7101bce76c  b.eq 0x7101bce788
7101bce770  ldr x8,[sp, #0x48]
7101bce774  str xzr,[sp, #0x48]
7101bce778  ldr x0,[x19, #0x178]
7101bce77c  str x8,[x19, #0x178]
7101bce780  cbz x0,0x7101bce788
7101bce784  bl 0x710392eb40
7101bce788  ldr x0,[sp, #0x48]
7101bce78c  stp x28,xzr,[sp, #0x40]
7101bce790  cbz x0,0x7101bce798
7101bce794  bl 0x710392eb40
7101bce798  str w22,[x19, #0x70]
7101bce79c  ldur x19,[x29, #-0x78]
7101bce7a0  stp x21,xzr,[x29, #-0x80]
7101bce7a4  cbz x19,0x7101bce7c0
7101bce7a8  ldr x0,[x19, #0x18]
7101bce7ac  stp x20,xzr,[x19, #0x10]
7101bce7b0  cbz x0,0x7101bce7b8
7101bce7b4  bl 0x710392eb40
7101bce7b8  mov x0,x19
7101bce7bc  bl 0x710392eb40
7101bce7c0  ldr x19,[sp, #0x38]
7101bce7c4  stp x21,xzr,[sp, #0x30]
7101bce7c8  cbz x19,0x7101bce7e4
7101bce7cc  ldr x0,[x19, #0x18]
7101bce7d0  stp x20,xzr,[x19, #0x10]
7101bce7d4  cbz x0,0x7101bce7dc
7101bce7d8  bl 0x710392eb40
7101bce7dc  mov x0,x19
7101bce7e0  bl 0x710392eb40
7101bce7e4  ldp x29,x30,[sp, #0x180]
7101bce7e8  ldp x20,x19,[sp, #0x170]
7101bce7ec  ldp x22,x21,[sp, #0x160]
7101bce7f0  ldp x24,x23,[sp, #0x150]
7101bce7f4  ldp x26,x25,[sp, #0x140]
7101bce7f8  ldp x28,x27,[sp, #0x130]
7101bce7fc  add sp,sp,#0x190
7101bce800  ret
7101bce804  mov x0,x22
7101bce808  bl 0x71039c1330
7101bce80c  bl 0x71039c2650
