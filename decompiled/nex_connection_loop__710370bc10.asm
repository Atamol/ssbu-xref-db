// addr:      710370bc10
// offset:    0x370bc10
// name:      nex_connection_loop
// mangled:   
// size:      10148

710370bc10  stp d9,d8,[sp, #-0x70]!
710370bc14  stp x28,x27,[sp, #0x10]
710370bc18  stp x26,x25,[sp, #0x20]
710370bc1c  stp x24,x23,[sp, #0x30]
710370bc20  stp x22,x21,[sp, #0x40]
710370bc24  stp x20,x19,[sp, #0x50]
710370bc28  stp x29,x30,[sp, #0x60]
710370bc2c  add x29,sp,#0x60
710370bc30  sub sp,sp,#0x1b0
710370bc34  ldr x8,[x0, #0x10]
710370bc38  mov x28,x0
710370bc3c  cbnz x8,0x710370bca8
710370bc40  mov w0,#0x10
710370bc44  mov w1,#0x20000
710370bc48  bl 0x710392e290
710370bc4c  cbnz x0,0x710370bc94
710370bc50  adrp x8,0x7105332000
710370bc54  ldr x0,[x8, #0xf00]
710370bc58  cbz x0,0x710370bc90
710370bc5c  mov w8,#0x20000
710370bc60  stur wzr,[x29, #-0x88]
710370bc64  sub x1,x29,#0x88
710370bc68  stur x8,[x29, #-0xf8]
710370bc6c  ldr x8,[x0]
710370bc70  ldr x8,[x8, #0x30]
710370bc74  sub x2,x29,#0xf8
710370bc78  blr x8
710370bc7c  tbz w0,#0x0,0x710370bc90
710370bc80  mov w0,#0x10
710370bc84  mov w1,#0x20000
710370bc88  bl 0x710392e290
710370bc8c  cbnz x0,0x710370bc94
710370bc90  mov x0,xzr
710370bc94  orr w8,wzr,#0x1ffff
710370bc98  add x8,x0,x8
710370bc9c  stp x0,x0,[x28, #0x20]
710370bca0  stp x0,x8,[x28, #0x10]
710370bca4  stp xzr,xzr,[x28, #0x30]
710370bca8  adrp x8,0x71036f8000
710370bcac  add x8,x8,#0x320
710370bcb0  adrp x10,0x71052ae000
710370bcb4  adrp x9,0x71036f8000
710370bcb8  add x9,x9,#0x350
710370bcbc  str x8,[x10, #0xa8]
710370bcc0  adrp x8,0x71052ae000
710370bcc4  str x9,[x8, #0xb0]
710370bcc8  mov w23,#0x2110
710370bccc  bl 0x71001b87f0
710370bcd0  adrp x8,0x71052af000
710370bcd4  mov w9,#0x2
710370bcd8  str w9,[x8, #0xe0]
710370bcdc  bl 0x71001b1400
710370bce0  ldr x22,[x28]
710370bce4  ldr x8,[x22, #0x38]
710370bce8  cbz x8,0x710370bcf8
710370bcec  ldr x8,[x22, #0x48]
710370bcf0  cbnz x8,0x710370c374
710370bcf4  b 0x710370c128
710370bcf8  mov w21,#0xa288
710370bcfc  movk w21,#0x42, LSL #16
710370bd00  mov w0,#0x10
710370bd04  mov x1,x21
710370bd08  bl 0x710392e290
710370bd0c  mov x20,x0
710370bd10  cbnz x0,0x710370bd58
710370bd14  adrp x8,0x7105332000
710370bd18  ldr x0,[x8, #0xf00]
710370bd1c  cbz x0,0x710370bd54
710370bd20  stur wzr,[x29, #-0x88]
710370bd24  stur x21,[x29, #-0xf8]
710370bd28  ldr x8,[x0]
710370bd2c  ldr x8,[x8, #0x30]
710370bd30  sub x1,x29,#0x88
710370bd34  sub x2,x29,#0xf8
710370bd38  blr x8
710370bd3c  tbz w0,#0x0,0x710370bd54
710370bd40  mov w0,#0x10
710370bd44  mov x1,x21
710370bd48  bl 0x710392e290
710370bd4c  mov x20,x0
710370bd50  cbnz x0,0x710370bd58
710370bd54  mov x20,xzr
710370bd58  mov w8,#0x6018
710370bd5c  mov w9,#0x6018
710370bd60  movk w9,#0x20, LSL #16
710370bd64  add x8,x20,x8
710370bd68  str xzr,[x20, #0x2000]
710370bd6c  str xzr,[x20, #0x4008]
710370bd70  str xzr,[x20, #0x6010]
710370bd74  str x8,[x20, x9, LSL #0x0]
710370bd78  mov w8,#0x6020
710370bd7c  movk w8,#0x20, LSL #16
710370bd80  add x8,x20,x8
710370bd84  mov w9,#0x6020
710370bd88  movk w9,#0x40, LSL #16
710370bd8c  mov w2,#0x208
710370bd90  str x8,[x20, x9, LSL #0x0]
710370bd94  mov w8,#0x6028
710370bd98  movk w8,#0x40, LSL #16
710370bd9c  add x8,x20,x8
710370bda0  mov w9,#0x6028
710370bda4  movk w9,#0x42, LSL #16
710370bda8  str x8,[x20, x9, LSL #0x0]
710370bdac  mov w8,#0xa030
710370bdb0  movk w8,#0x42, LSL #16
710370bdb4  mov w1,wzr
710370bdb8  str xzr,[x20, x8, LSL #0x0]
710370bdbc  mov w8,#0xa038
710370bdc0  movk w8,#0x42, LSL #16
710370bdc4  str x22,[x20, x8, LSL #0x0]
710370bdc8  mov w8,#0xa058
710370bdcc  movk w8,#0x42, LSL #16
710370bdd0  add x0,x20,x8
710370bdd4  mov w8,#0xa050
710370bdd8  movk w8,#0x42, LSL #16
710370bddc  strb wzr,[x20, x8, LSL ]
710370bde0  mov w8,#0xa048
710370bde4  movk w8,#0x42, LSL #16
710370bde8  str xzr,[x20, x8, LSL #0x0]
710370bdec  mov w8,#0xa040
710370bdf0  movk w8,#0x42, LSL #16
710370bdf4  str xzr,[x20, x8, LSL #0x0]
710370bdf8  bl 0x71039c02a0
710370bdfc  mov w8,#0xa070
710370be00  movk w8,#0x42, LSL #16
710370be04  mov w9,#0xa068
710370be08  movk w9,#0x42, LSL #16
710370be0c  str xzr,[x20, x8, LSL #0x0]
710370be10  mov w8,#0xa078
710370be14  movk w8,#0x42, LSL #16
710370be18  str wzr,[x20, x8, LSL #0x0]
710370be1c  mov w8,#0xa158
710370be20  movk w8,#0x42, LSL #16
710370be24  str xzr,[x20, x8, LSL #0x0]
710370be28  mov w8,#0xa150
710370be2c  movk w8,#0x42, LSL #16
710370be30  str xzr,[x20, x8, LSL #0x0]
710370be34  mov w8,#0xa148
710370be38  movk w8,#0x42, LSL #16
710370be3c  str xzr,[x20, x8, LSL #0x0]
710370be40  mov w8,#0xa140
710370be44  movk w8,#0x42, LSL #16
710370be48  str xzr,[x20, x8, LSL #0x0]
710370be4c  mov w8,#0xa138
710370be50  movk w8,#0x42, LSL #16
710370be54  str xzr,[x20, x8, LSL #0x0]
710370be58  mov w8,#0xa130
710370be5c  movk w8,#0x42, LSL #16
710370be60  str xzr,[x20, x8, LSL #0x0]
710370be64  mov w8,#0xa128
710370be68  movk w8,#0x42, LSL #16
710370be6c  str xzr,[x20, x8, LSL #0x0]
710370be70  mov w8,#0xa120
710370be74  movk w8,#0x42, LSL #16
710370be78  str xzr,[x20, x8, LSL #0x0]
710370be7c  mov w8,#0xa118
710370be80  movk w8,#0x42, LSL #16
710370be84  str xzr,[x20, x8, LSL #0x0]
710370be88  mov w8,#0xa110
710370be8c  movk w8,#0x42, LSL #16
710370be90  str xzr,[x20, x8, LSL #0x0]
710370be94  mov w8,#0xa108
710370be98  movk w8,#0x42, LSL #16
710370be9c  str xzr,[x20, x8, LSL #0x0]
710370bea0  mov w8,#0xa100
710370bea4  movk w8,#0x42, LSL #16
710370bea8  str xzr,[x20, x8, LSL #0x0]
710370beac  mov w8,#0xa0f8
710370beb0  movk w8,#0x42, LSL #16
710370beb4  str xzr,[x20, x8, LSL #0x0]
710370beb8  mov w8,#0xa0f0
710370bebc  movk w8,#0x42, LSL #16
710370bec0  str xzr,[x20, x8, LSL #0x0]
710370bec4  mov w8,#0xa0e8
710370bec8  movk w8,#0x42, LSL #16
710370becc  str xzr,[x20, x8, LSL #0x0]
710370bed0  mov w8,#0xa0e0
710370bed4  movk w8,#0x42, LSL #16
710370bed8  str xzr,[x20, x8, LSL #0x0]
710370bedc  mov w8,#0xa0d8
710370bee0  movk w8,#0x42, LSL #16
710370bee4  str xzr,[x20, x8, LSL #0x0]
710370bee8  mov w8,#0xa0d0
710370beec  movk w8,#0x42, LSL #16
710370bef0  str xzr,[x20, x8, LSL #0x0]
710370bef4  mov w8,#0xa0c8
710370bef8  movk w8,#0x42, LSL #16
710370befc  str xzr,[x20, x8, LSL #0x0]
710370bf00  mov w8,#0xa0c0
710370bf04  movk w8,#0x42, LSL #16
710370bf08  str xzr,[x20, x8, LSL #0x0]
710370bf0c  mov w8,#0xa0b8
710370bf10  movk w8,#0x42, LSL #16
710370bf14  str xzr,[x20, x8, LSL #0x0]
710370bf18  mov w8,#0xa0b0
710370bf1c  movk w8,#0x42, LSL #16
710370bf20  str xzr,[x20, x8, LSL #0x0]
710370bf24  mov w8,#0xa0a8
710370bf28  movk w8,#0x42, LSL #16
710370bf2c  str xzr,[x20, x8, LSL #0x0]
710370bf30  mov w8,#0xa0a0
710370bf34  movk w8,#0x42, LSL #16
710370bf38  str xzr,[x20, x8, LSL #0x0]
710370bf3c  mov w8,#0xa098
710370bf40  movk w8,#0x42, LSL #16
710370bf44  str xzr,[x20, x8, LSL #0x0]
710370bf48  mov w8,#0xa090
710370bf4c  movk w8,#0x42, LSL #16
710370bf50  str wzr,[x20, x8, LSL #0x0]
710370bf54  mov w8,#0xa088
710370bf58  movk w8,#0x42, LSL #16
710370bf5c  str xzr,[x20, x8, LSL #0x0]
710370bf60  mov w8,#0xa080
710370bf64  movk w8,#0x42, LSL #16
710370bf68  str xzr,[x20, x8, LSL #0x0]
710370bf6c  adrp x8,0x710523b000
710370bf70  add x8,x8,#0xe60
710370bf74  str x8,[x20, x9, LSL #0x0]
710370bf78  mov w8,#0xa168
710370bf7c  movk w8,#0x42, LSL #16
710370bf80  str xzr,[x20, x8, LSL #0x0]
710370bf84  mov w8,#0xa250
710370bf88  movk w8,#0x42, LSL #16
710370bf8c  str xzr,[x20, x8, LSL #0x0]
710370bf90  mov w8,#0xa248
710370bf94  movk w8,#0x42, LSL #16
710370bf98  str xzr,[x20, x8, LSL #0x0]
710370bf9c  mov w8,#0xa240
710370bfa0  movk w8,#0x42, LSL #16
710370bfa4  str xzr,[x20, x8, LSL #0x0]
710370bfa8  mov w8,#0xa238
710370bfac  movk w8,#0x42, LSL #16
710370bfb0  str xzr,[x20, x8, LSL #0x0]
710370bfb4  mov w8,#0xa230
710370bfb8  movk w8,#0x42, LSL #16
710370bfbc  str xzr,[x20, x8, LSL #0x0]
710370bfc0  mov w8,#0xa228
710370bfc4  movk w8,#0x42, LSL #16
710370bfc8  str xzr,[x20, x8, LSL #0x0]
710370bfcc  mov w8,#0xa220
710370bfd0  movk w8,#0x42, LSL #16
710370bfd4  str xzr,[x20, x8, LSL #0x0]
710370bfd8  mov w8,#0xa218
710370bfdc  movk w8,#0x42, LSL #16
710370bfe0  str xzr,[x20, x8, LSL #0x0]
710370bfe4  mov w8,#0xa210
710370bfe8  movk w8,#0x42, LSL #16
710370bfec  str xzr,[x20, x8, LSL #0x0]
710370bff0  mov w8,#0xa208
710370bff4  movk w8,#0x42, LSL #16
710370bff8  str xzr,[x20, x8, LSL #0x0]
710370bffc  mov w8,#0xa200
710370c000  movk w8,#0x42, LSL #16
710370c004  str xzr,[x20, x8, LSL #0x0]
710370c008  mov w8,#0xa1f8
710370c00c  movk w8,#0x42, LSL #16
710370c010  str xzr,[x20, x8, LSL #0x0]
710370c014  mov w8,#0xa1f0
710370c018  movk w8,#0x42, LSL #16
710370c01c  str xzr,[x20, x8, LSL #0x0]
710370c020  mov w8,#0xa1e8
710370c024  movk w8,#0x42, LSL #16
710370c028  str xzr,[x20, x8, LSL #0x0]
710370c02c  mov w8,#0xa1e0
710370c030  movk w8,#0x42, LSL #16
710370c034  str xzr,[x20, x8, LSL #0x0]
710370c038  mov w8,#0xa1d8
710370c03c  movk w8,#0x42, LSL #16
710370c040  str xzr,[x20, x8, LSL #0x0]
710370c044  mov w8,#0xa1d0
710370c048  movk w8,#0x42, LSL #16
710370c04c  str xzr,[x20, x8, LSL #0x0]
710370c050  mov w8,#0xa1c8
710370c054  movk w8,#0x42, LSL #16
710370c058  str xzr,[x20, x8, LSL #0x0]
710370c05c  mov w8,#0xa1c0
710370c060  movk w8,#0x42, LSL #16
710370c064  str xzr,[x20, x8, LSL #0x0]
710370c068  mov w8,#0xa1b8
710370c06c  movk w8,#0x42, LSL #16
710370c070  str xzr,[x20, x8, LSL #0x0]
710370c074  mov w8,#0xa1b0
710370c078  movk w8,#0x42, LSL #16
710370c07c  str xzr,[x20, x8, LSL #0x0]
710370c080  mov w8,#0xa1a8
710370c084  movk w8,#0x42, LSL #16
710370c088  str xzr,[x20, x8, LSL #0x0]
710370c08c  mov w8,#0xa1a0
710370c090  movk w8,#0x42, LSL #16
710370c094  str xzr,[x20, x8, LSL #0x0]
710370c098  mov w8,#0xa198
710370c09c  movk w8,#0x42, LSL #16
710370c0a0  str xzr,[x20, x8, LSL #0x0]
710370c0a4  mov w8,#0xa190
710370c0a8  movk w8,#0x42, LSL #16
710370c0ac  str xzr,[x20, x8, LSL #0x0]
710370c0b0  mov w8,#0xa188
710370c0b4  movk w8,#0x42, LSL #16
710370c0b8  str wzr,[x20, x8, LSL #0x0]
710370c0bc  mov w8,#0xa180
710370c0c0  movk w8,#0x42, LSL #16
710370c0c4  str xzr,[x20, x8, LSL #0x0]
710370c0c8  mov w8,#0xa178
710370c0cc  movk w8,#0x42, LSL #16
710370c0d0  str xzr,[x20, x8, LSL #0x0]
710370c0d4  mov w8,#0xa268
710370c0d8  movk w8,#0x42, LSL #16
710370c0dc  add x0,x20,x8
710370c0e0  str xzr,[x0]
710370c0e4  mov w8,#0xa280
710370c0e8  movk w8,#0x42, LSL #16
710370c0ec  str xzr,[x20, x8, LSL #0x0]
710370c0f0  mov w8,#0xa278
710370c0f4  movk w8,#0x42, LSL #16
710370c0f8  str xzr,[x20, x8, LSL #0x0]
710370c0fc  mov w8,#0xa270
710370c100  movk w8,#0x42, LSL #16
710370c104  str xzr,[x20, x8, LSL #0x0]
710370c108  mov w8,#0xa260
710370c10c  movk w8,#0x42, LSL #16
710370c110  str xzr,[x20, x8, LSL #0x0]
710370c114  bl 0x71039c26d0
710370c118  str x20,[x22, #0x38]
710370c11c  ldr x22,[x28]
710370c120  ldr x8,[x22, #0x48]
710370c124  cbnz x8,0x710370c374
710370c128  adrp x24,0x710533a000
710370c12c  ldr x0,[x24, #0x88]
710370c130  cbz x0,0x710370c150
710370c134  ldr x8,[x0]
710370c138  ldr x8,[x8, #0x28]
710370c13c  mov w1,#0xa0
710370c140  mov w2,#0x8
710370c144  blr x8
710370c148  mov x20,x0
710370c14c  b 0x710370c154
710370c150  mov x20,xzr
710370c154  mov w0,#0x10
710370c158  orr w1,wzr,#0xf8
710370c15c  str xzr,[x20, #0x48]
710370c160  strb wzr,[x20, #0x50]
710370c164  strh wzr,[x20, #0x40]
710370c168  stp xzr,xzr,[x20, #0x30]
710370c16c  stp xzr,xzr,[x20, #0x20]
710370c170  stp xzr,xzr,[x20, #0x10]
710370c174  stp x22,xzr,[x20]
710370c178  bl 0x710392e290
710370c17c  mov x21,x0
710370c180  cbnz x0,0x710370c1cc
710370c184  adrp x8,0x7105332000
710370c188  ldr x0,[x8, #0xf00]
710370c18c  cbz x0,0x710370c1c8
710370c190  orr w8,wzr,#0xf8
710370c194  stur wzr,[x29, #-0x88]
710370c198  sub x1,x29,#0x88
710370c19c  stur x8,[x29, #-0xf8]
710370c1a0  ldr x8,[x0]
710370c1a4  ldr x8,[x8, #0x30]
710370c1a8  sub x2,x29,#0xf8
710370c1ac  blr x8
710370c1b0  tbz w0,#0x0,0x710370c1c8
710370c1b4  mov w0,#0x10
710370c1b8  orr w1,wzr,#0xf8
710370c1bc  bl 0x710392e290
710370c1c0  mov x21,x0
710370c1c4  cbnz x0,0x710370c1cc
710370c1c8  mov x21,xzr
710370c1cc  add x0,x21,#0x8
710370c1d0  mov x1,xzr
710370c1d4  str xzr,[x21]
710370c1d8  bl 0x710022e6b0
710370c1dc  add x0,x21,#0xd4
710370c1e0  strb wzr,[x21, #0xd2]
710370c1e4  strh wzr,[x21, #0xd0]
710370c1e8  str xzr,[x21, #0xc8]
710370c1ec  bl 0x71039c0a80
710370c1f0  mov x8,x21
710370c1f4  add x0,x20,#0x60
710370c1f8  str xzr,[x21, #0xf0]
710370c1fc  str xzr,[x8, #0xe8]!
710370c200  str x8,[x21, #0xe0]
710370c204  str x21,[x20, #0x58]
710370c208  bl 0x7103709800
710370c20c  add x0,x20,#0x68
710370c210  bl 0x71036fe100
710370c214  mov w0,#0x10
710370c218  orr w1,wzr,#0xf8
710370c21c  bl 0x710392e290
710370c220  mov x21,x0
710370c224  cbnz x0,0x710370c270
710370c228  adrp x8,0x7105332000
710370c22c  ldr x0,[x8, #0xf00]
710370c230  cbz x0,0x710370c26c
710370c234  orr w8,wzr,#0xf8
710370c238  stur wzr,[x29, #-0x88]
710370c23c  sub x1,x29,#0x88
710370c240  stur x8,[x29, #-0xf8]
710370c244  ldr x8,[x0]
710370c248  ldr x8,[x8, #0x30]
710370c24c  sub x2,x29,#0xf8
710370c250  blr x8
710370c254  tbz w0,#0x0,0x710370c26c
710370c258  mov w0,#0x10
710370c25c  orr w1,wzr,#0xf8
710370c260  bl 0x710392e290
710370c264  mov x21,x0
710370c268  cbnz x0,0x710370c270
710370c26c  mov x21,xzr
710370c270  add x0,x21,#0x8
710370c274  mov x1,xzr
710370c278  str xzr,[x21]
710370c27c  bl 0x710022e6b0
710370c280  adrp x8,0x710523b000
710370c284  add x8,x8,#0xd78
710370c288  add x0,x21,#0xe4
710370c28c  strb wzr,[x21, #0xe2]
710370c290  strh wzr,[x21, #0xe0]
710370c294  str x8,[x21, #0xc8]
710370c298  stp xzr,xzr,[x21, #0xd0]
710370c29c  bl 0x71039c0a80
710370c2a0  mov w0,#0x10
710370c2a4  orr w1,wzr,#0xe0
710370c2a8  strb wzr,[x21, #0xf0]
710370c2ac  str x21,[x20, #0x70]
710370c2b0  bl 0x710392e290
710370c2b4  mov x21,x0
710370c2b8  cbnz x0,0x710370c304
710370c2bc  adrp x8,0x7105332000
710370c2c0  ldr x0,[x8, #0xf00]
710370c2c4  cbz x0,0x710370c300
710370c2c8  orr w8,wzr,#0xe0
710370c2cc  stur wzr,[x29, #-0x88]
710370c2d0  sub x1,x29,#0x88
710370c2d4  stur x8,[x29, #-0xf8]
710370c2d8  ldr x8,[x0]
710370c2dc  ldr x8,[x8, #0x30]
710370c2e0  sub x2,x29,#0xf8
710370c2e4  blr x8
710370c2e8  tbz w0,#0x0,0x710370c300
710370c2ec  mov w0,#0x10
710370c2f0  orr w1,wzr,#0xe0
710370c2f4  bl 0x710392e290
710370c2f8  mov x21,x0
710370c2fc  cbnz x0,0x710370c304
710370c300  mov x21,xzr
710370c304  add x0,x21,#0x8
710370c308  mov x1,xzr
710370c30c  str xzr,[x21]
710370c310  bl 0x710022e6b0
710370c314  add x0,x21,#0xd4
710370c318  strb wzr,[x21, #0xd2]
710370c31c  strh wzr,[x21, #0xd0]
710370c320  str xzr,[x21, #0xc8]
710370c324  bl 0x71039c0a80
710370c328  add x0,x20,#0x8c
710370c32c  strb wzr,[x20, #0x8a]
710370c330  strh wzr,[x20, #0x88]
710370c334  stp x21,xzr,[x20, #0x78]
710370c338  bl 0x71039c0a80
710370c33c  strb wzr,[x20, #0x98]
710370c340  ldr x0,[x24, #0x88]
710370c344  cbz x0,0x710370c36c
710370c348  ldr x8,[x0]
710370c34c  ldr x8,[x8, #0x28]
710370c350  mov w1,#0x10
710370c354  mov w2,#0x8
710370c358  blr x8
710370c35c  cbz x0,0x710370c36c
710370c360  adrp x8,0x710523b000
710370c364  add x8,x8,#0xe18
710370c368  stp x8,x22,[x0]
710370c36c  str x0,[x20, #0x8]
710370c370  str x20,[x22, #0x48]
710370c374  add x8,x28,x23
710370c378  str x8,[sp, #0x100]
710370c37c  ldr x8,[x22, #0x50]
710370c380  cbnz x8,0x710370c49c
710370c384  adrp x8,0x710533a000
710370c388  ldr x0,[x8, #0x88]
710370c38c  cbz x0,0x710370c3ac
710370c390  ldr x8,[x0]
710370c394  ldr x8,[x8, #0x28]
710370c398  mov w1,#0x2d8
710370c39c  mov w2,#0x8
710370c3a0  blr x8
710370c3a4  mov x20,x0
710370c3a8  b 0x710370c3b0
710370c3ac  mov x20,xzr
710370c3b0  mov w8,#0xffffffff
710370c3b4  add x0,x20,#0x3c
710370c3b8  str wzr,[x20, #0x10]
710370c3bc  stp x22,xzr,[x20]
710370c3c0  strb wzr,[x20, #0x14]
710370c3c4  str wzr,[x20, #0x18]
710370c3c8  strb wzr,[x20, #0x1c]
710370c3cc  str w8,[x20, #0x20]
710370c3d0  strb wzr,[x20, #0x24]
710370c3d4  strb wzr,[x20, #0x28]
710370c3d8  stur xzr,[x20, #0x33]
710370c3dc  stur xzr,[x20, #0x2c]
710370c3e0  bl 0x71039c0a80
710370c3e4  add x0,x20,#0x48
710370c3e8  mov w2,#0x148
710370c3ec  mov w1,wzr
710370c3f0  bl 0x71039c02a0
710370c3f4  adrp x8,0x710523b000
710370c3f8  add x8,x8,#0xe80
710370c3fc  add x0,x20,#0x290
710370c400  str wzr,[x20, #0x1a0]
710370c404  stp x8,xzr,[x20, #0x190]
710370c408  str wzr,[x20, #0x1b8]
710370c40c  str xzr,[x20, #0x2a8]
710370c410  str xzr,[x20, #0x2a0]
710370c414  str xzr,[x20, #0x298]
710370c418  str xzr,[x20, #0x290]
710370c41c  strh wzr,[x20, #0x288]
710370c420  str xzr,[x20, #0x280]
710370c424  str xzr,[x20, #0x278]
710370c428  str xzr,[x20, #0x270]
710370c42c  str xzr,[x20, #0x268]
710370c430  str xzr,[x20, #0x260]
710370c434  str xzr,[x20, #0x258]
710370c438  str xzr,[x20, #0x250]
710370c43c  str xzr,[x20, #0x248]
710370c440  str xzr,[x20, #0x240]
710370c444  str xzr,[x20, #0x238]
710370c448  str xzr,[x20, #0x230]
710370c44c  str xzr,[x20, #0x228]
710370c450  str xzr,[x20, #0x220]
710370c454  str xzr,[x20, #0x218]
710370c458  str xzr,[x20, #0x210]
710370c45c  str xzr,[x20, #0x208]
710370c460  str xzr,[x20, #0x1c0]
710370c464  stp xzr,xzr,[x20, #0x1a8]
710370c468  stp xzr,xzr,[x20, #0x1f8]
710370c46c  stp xzr,xzr,[x20, #0x1e8]
710370c470  stp xzr,xzr,[x20, #0x1d8]
710370c474  stp xzr,xzr,[x20, #0x1c8]
710370c478  bl 0x71039c26d0
710370c47c  str xzr,[x20, #0x2d0]
710370c480  str xzr,[x20, #0x2c8]
710370c484  str xzr,[x20, #0x2c0]
710370c488  str xzr,[x20, #0x2b8]
710370c48c  str xzr,[x20, #0x2b0]
710370c490  str x20,[x22, #0x50]
710370c494  ldr x8,[x20, #0x8]
710370c498  cbz x8,0x710370c4cc
710370c49c  ldr x8,[x22, #0x40]
710370c4a0  cbnz x8,0x710370c59c
710370c4a4  adrp x8,0x710533a000
710370c4a8  ldr x0,[x8, #0x88]
710370c4ac  cbz x0,0x710370c53c
710370c4b0  ldr x8,[x0]
710370c4b4  ldr x8,[x8, #0x28]
710370c4b8  orr w1,wzr,#0x380
710370c4bc  mov w2,#0x8
710370c4c0  blr x8
710370c4c4  mov x20,x0
710370c4c8  b 0x710370c540
710370c4cc  ldr w23,[x22, #0x30]
710370c4d0  cmp w23,#0x0
710370c4d4  csinc w21,w23,wzr,ne
710370c4d8  mov w0,#0x8
710370c4dc  mov x1,x21
710370c4e0  bl 0x710392e290
710370c4e4  cbnz x0,0x710370c528
710370c4e8  adrp x8,0x7105332000
710370c4ec  ldr x0,[x8, #0xf00]
710370c4f0  cbz x0,0x710370c524
710370c4f4  stur wzr,[x29, #-0x88]
710370c4f8  stur x21,[x29, #-0xf8]
710370c4fc  ldr x8,[x0]
710370c500  ldr x8,[x8, #0x30]
710370c504  sub x1,x29,#0x88
710370c508  sub x2,x29,#0xf8
710370c50c  blr x8
710370c510  tbz w0,#0x0,0x710370c524
710370c514  mov w0,#0x8
710370c518  mov x1,x21
710370c51c  bl 0x710392e290
710370c520  cbnz x0,0x710370c528
710370c524  mov x0,xzr
710370c528  str x0,[x20, #0x8]
710370c52c  str w23,[x20, #0x10]
710370c530  ldr x8,[x22, #0x40]
710370c534  cbnz x8,0x710370c59c
710370c538  b 0x710370c4a4
710370c53c  mov x20,xzr
710370c540  adrp x8,0x710523c000
710370c544  add x8,x8,#0x110
710370c548  add x0,x20,#0x18
710370c54c  mov w2,#0x223
710370c550  mov w1,wzr
710370c554  strb wzr,[x20, #0x10]
710370c558  stp x8,x22,[x20]
710370c55c  add x21,x20,#0x23c
710370c560  bl 0x71039c02a0
710370c564  mov x0,x21
710370c568  bl 0x71039c0a80
710370c56c  adrp x8,0x710523c000
710370c570  add x8,x8,#0x130
710370c574  add x0,x20,#0x270
710370c578  mov w2,#0x110
710370c57c  mov w1,wzr
710370c580  str xzr,[x20, #0x250]
710370c584  str x20,[x20, #0x258]
710370c588  str x8,[x20, #0x248]
710370c58c  str xzr,[x20, #0x260]
710370c590  strb wzr,[x20, #0x268]
710370c594  bl 0x71039c02a0
710370c598  str x20,[x22, #0x40]
710370c59c  ldr x8,[x28]
710370c5a0  ldr x8,[x8, #0x38]
710370c5a4  str x8,[x28, #0x2108]
710370c5a8  mov w8,#0x1
710370c5ac  strb w8,[x28, #0x8]
710370c5b0  ldr x8,[sp, #0x100]
710370c5b4  ldrb w8,[x8]
710370c5b8  add x20,x28,#0x40
710370c5bc  cbz w8,0x710370e070
710370c5c0  mov w8,#0x10a0
710370c5c4  add x19,x28,x8
710370c5c8  mov w8,#0x20e0
710370c5cc  add x21,x28,x8
710370c5d0  add x8,x28,#0x68
710370c5d4  str x8,[sp, #0xe8]
710370c5d8  sub x8,x29,#0xf8
710370c5dc  add x9,x8,#0xc
710370c5e0  orr x8,x8,#0x4
710370c5e4  str x9,[sp, #0x30]
710370c5e8  add x9,x28,#0x270
710370c5ec  str x9,[sp, #0xe0]
710370c5f0  add x9,x28,#0x478
710370c5f4  str x8,[sp, #0x60]
710370c5f8  add x8,x28,#0x680
710370c5fc  stp x8,x9,[sp, #0xd0]
710370c600  add x8,x28,#0x888
710370c604  str x8,[sp, #0xc8]
710370c608  sub x8,x29,#0xa0
710370c60c  orr x8,x8,#0x4
710370c610  str x8,[sp, #0x8]
710370c614  add x8,x28,#0xa90
710370c618  str x8,[sp, #0xc0]
710370c61c  add x8,x28,#0xc98
710370c620  str x8,[sp, #0xb8]
710370c624  add x8,x28,#0xea0
710370c628  str x8,[sp, #0xb0]
710370c62c  mov w8,#0x10a8
710370c630  add x8,x28,x8
710370c634  str x8,[sp, #0xa8]
710370c638  sub x8,x29,#0x88
710370c63c  orr x8,x8,#0x4
710370c640  str x8,[sp]
710370c644  mov w8,#0x12b0
710370c648  add x8,x28,x8
710370c64c  str x8,[sp, #0xa0]
710370c650  mov w8,#0x14b8
710370c654  add x8,x28,x8
710370c658  str x8,[sp, #0x98]
710370c65c  mov w8,#0x16c0
710370c660  add x8,x28,x8
710370c664  str x8,[sp, #0x90]
710370c668  mov w8,#0x18c8
710370c66c  add x8,x28,x8
710370c670  str x8,[sp, #0x88]
710370c674  mov w8,#0x1ad0
710370c678  add x8,x28,x8
710370c67c  str x8,[sp, #0x80]
710370c680  mov w8,#0x1cd8
710370c684  add x8,x28,x8
710370c688  fmov s8,wzr
710370c68c  fmov s9,0x3f000000
710370c690  str x19,[sp, #0xf8]
710370c694  str x8,[sp, #0x78]
710370c698  mov w8,#0x1ee0
710370c69c  add x8,x28,x8
710370c6a0  stp x20,x8,[sp, #0x68]
710370c6a4  str x28,[sp, #0x48]
710370c6a8  adrp x8,0x71052ac000
710370c6ac  ldr x0,[x8, #0x580]
710370c6b0  cbz x0,0x710370c6bc
710370c6b4  mov w1,wzr
710370c6b8  bl 0x71000b68a0
710370c6bc  ldr x24,[x28, #0x2108]
710370c6c0  cbz x24,0x710370c7b0
710370c6c4  mov w8,#0xa040
710370c6c8  movk w8,#0x42, LSL #16
710370c6cc  add x23,x24,x8
710370c6d0  ldrb w8,[x23, #0x10]
710370c6d4  cbz w8,0x710370c7b0
710370c6d8  mov w8,#0xa268
710370c6dc  movk w8,#0x42, LSL #16
710370c6e0  add x25,x24,x8
710370c6e4  mov x0,x25
710370c6e8  bl 0x71039c1a40
710370c6ec  ldr x0,[x23]
710370c6f0  cbz x0,0x710370c754
710370c6f4  ldr x8,[x24, #0x6010]
710370c6f8  lsl x20,x8,#0x3
710370c6fc  cbz x20,0x710370c754
710370c700  ldr x2,[x24, #0x4010]
710370c704  add x8,x24,x20
710370c708  mov w9,#0x4010
710370c70c  ldr x1,[x2], #0x8
710370c710  add x22,x8,x9
710370c714  ldr x8,[x0]
710370c718  ldr x8,[x8, #0x10]
710370c71c  blr x8
710370c720  mov w8,#0x4018
710370c724  add x19,x24,x8
710370c728  cmp x22,x19
710370c72c  b.eq 0x710370c754
710370c730  sub x20,x20,#0x8
710370c734  ldr x0,[x23]
710370c738  ldr x2,[x19], #0x8
710370c73c  ldr x1,[x2], #0x8
710370c740  ldr x8,[x0]
710370c744  ldr x8,[x8, #0x10]
710370c748  blr x8
710370c74c  subs x20,x20,#0x8
710370c750  b.ne 0x710370c734
710370c754  mov w8,#0x6028
710370c758  movk w8,#0x40, LSL #16
710370c75c  add x8,x24,x8
710370c760  mov w9,#0x6028
710370c764  movk w9,#0x42, LSL #16
710370c768  str xzr,[x24, #0x6010]
710370c76c  mov x0,x25
710370c770  str x8,[x24, x9, LSL #0x0]
710370c774  bl 0x71039c1a50
710370c778  adrp x8,0x71052ad000
710370c77c  ldr x27,[x8, #0xb38]
710370c780  ldr x20,[sp, #0x68]
710370c784  ldr x19,[sp, #0xf8]
710370c788  cbz x27,0x710370c7b0
710370c78c  mov x0,x27
710370c790  bl 0x7100146ba0
710370c794  cmp w0,#0x1
710370c798  b.ne 0x710370c7b0
710370c79c  add x8,sp,#0x108
710370c7a0  mov x0,x27
710370c7a4  bl 0x7100147ac0
710370c7a8  ldr w8,[sp, #0x108]
710370c7ac  cbz w8,0x710370ce4c
710370c7b0  ldr x22,[x28]
710370c7b4  cbz x22,0x710370d6d4
710370c7b8  ldr x25,[x22, #0x48]
710370c7bc  ldrb w8,[x25, #0x98]
710370c7c0  cmp w8,#0x1
710370c7c4  b.eq 0x710370c8d8
710370c7c8  cmp w8,#0x3
710370c7cc  b.eq 0x710370c8b0
710370c7d0  cmp w8,#0x2
710370c7d4  b.ne 0x710370cb54
710370c7d8  ldr x0,[x25, #0x30]
710370c7dc  sub x8,x29,#0x88
710370c7e0  bl 0x7100238f30
710370c7e4  ldur w8,[x29, #-0x88]
710370c7e8  cmp w8,#0x0
710370c7ec  adrp x8,0x710170d000
710370c7f0  add x8,x8,#0x30
710370c7f4  csel x8,x8,xzr,ge
710370c7f8  cbnz x8,0x710370cb54
710370c7fc  sub x0,x29,#0xf8
710370c800  sub x1,x29,#0x88
710370c804  orr w2,wzr,#0x3
710370c808  bl 0x710170cea0
710370c80c  adrp x11,0x710533a000
710370c810  ldp x9,x8,[x29, #-0xf0]
710370c814  ldur x10,[x29, #-0xf8]
710370c818  ldr x27,[x11, #0xb0]
710370c81c  stur x10,[x29, #-0xa0]
710370c820  stp x9,x8,[x29, #-0x98]
710370c824  mov x0,x27
710370c828  stp x9,x8,[x29, #-0xf0]
710370c82c  mov x8,x10
710370c830  stur x8,[x29, #-0xf8]
710370c834  bl 0x71039c1a40
710370c838  ldr x8,[x27, #0x30]
710370c83c  ldr x9,[x27, #0x40]
710370c840  cbz x8,0x710370c858
710370c844  ldr x10,[x27, #0x28]
710370c848  add x9,x9,#0x1
710370c84c  udiv x11,x9,x10
710370c850  msub x9,x11,x10,x9
710370c854  str x9,[x27, #0x40]
710370c858  ldr x10,[x27, #0x48]
710370c85c  add x9,x10,x9, LSL #0x6
710370c860  add x8,x8,#0x1
710370c864  str x8,[x27, #0x30]
710370c868  mov w8,#0x1
710370c86c  strb w8,[x9]
710370c870  ldp x8,x10,[x29, #-0xf8]
710370c874  mov x0,x27
710370c878  ldp x11,x12,[x29, #-0xe8]
710370c87c  stur x12,[x9, #0x19]
710370c880  stur x11,[x9, #0x11]
710370c884  stur x10,[x9, #0x9]
710370c888  stur x8,[x9, #0x1]
710370c88c  ldp x8,x10,[x29, #-0xd8]
710370c890  ldur x11,[x29, #-0xc8]
710370c894  ldur x12,[x29, #-0xc1]
710370c898  str x12,[x9, #0x38]
710370c89c  stur x11,[x9, #0x31]
710370c8a0  stur x10,[x9, #0x29]
710370c8a4  stur x8,[x9, #0x21]
710370c8a8  bl 0x71039c1a50
710370c8ac  b 0x710370cae8
710370c8b0  ldr x8,[x25, #0x18]
710370c8b4  cbz x8,0x710370ca88
710370c8b8  ldr w9,[x8, #0x14]
710370c8bc  cmp w9,#0x1
710370c8c0  b.eq 0x710370cb54
710370c8c4  cmp w9,#0x2
710370c8c8  b.ne 0x710370ca88
710370c8cc  mov x0,x25
710370c8d0  bl 0x7103700d80
710370c8d4  b 0x710370cae8
710370c8d8  ldr x8,[x25, #0x18]
710370c8dc  cbz x8,0x710370caf0
710370c8e0  ldr w8,[x8, #0x14]
710370c8e4  cmp w8,#0x1
710370c8e8  b.eq 0x710370cb54
710370c8ec  cmp w8,#0x2
710370c8f0  b.ne 0x710370caf0
710370c8f4  ldr x8,[x25, #0x10]
710370c8f8  ldr x0,[x25, #0x30]
710370c8fc  cbnz x8,0x710370c908
710370c900  ldr x8,[x0, #0xc0]
710370c904  str x8,[x25, #0x10]
710370c908  ldr x1,[x25, #0x8]
710370c90c  bl 0x7100239ae0
710370c910  ldr x0,[x25, #0x20]
710370c914  cbz x0,0x710370c928
710370c918  ldr x8,[x0]
710370c91c  ldr x1,[x25, #0x10]
710370c920  ldr x8,[x8, #0x18]
710370c924  blr x8
710370c928  ldr x0,[x25, #0x28]
710370c92c  cbz x0,0x710370c940
710370c930  ldr x8,[x0]
710370c934  ldr x1,[x25, #0x10]
710370c938  ldr x8,[x8, #0x18]
710370c93c  blr x8
710370c940  ldr x8,[x25, #0x60]
710370c944  ldr x0,[x8]
710370c948  cbz x0,0x710370c95c
710370c94c  ldr x8,[x0]
710370c950  ldr x1,[x25, #0x10]
710370c954  ldr x8,[x8, #0x18]
710370c958  blr x8
710370c95c  ldr x8,[x25, #0x68]
710370c960  ldr x0,[x8]
710370c964  cbz x0,0x710370c978
710370c968  ldr x8,[x0]
710370c96c  ldr x1,[x25, #0x10]
710370c970  ldr x8,[x8, #0x18]
710370c974  blr x8
710370c978  ldr x8,[x25, #0x78]
710370c97c  ldr x0,[x8]
710370c980  cbz x0,0x710370c994
710370c984  ldr x8,[x0]
710370c988  ldr x1,[x25, #0x10]
710370c98c  ldr x8,[x8, #0x18]
710370c990  blr x8
710370c994  adrp x8,0x710533a000
710370c998  ldr x20,[x8, #0xb8]
710370c99c  ldr x0,[x20, #0x8]
710370c9a0  cbz x0,0x710370c9b4
710370c9a4  ldr x8,[x0]
710370c9a8  str x25,[x0, #0x8]
710370c9ac  ldr x8,[x8, #0x10]
710370c9b0  blr x8
710370c9b4  ldr x0,[x20, #0x20]
710370c9b8  cbz x0,0x710370c9cc
710370c9bc  ldr x8,[x0]
710370c9c0  str x25,[x0, #0x8]
710370c9c4  ldr x8,[x8, #0x10]
710370c9c8  blr x8
710370c9cc  ldr x0,[x20, #0x38]
710370c9d0  cbz x0,0x710370c9e4
710370c9d4  ldr x8,[x0]
710370c9d8  str x25,[x0, #0x8]
710370c9dc  ldr x8,[x8, #0x10]
710370c9e0  blr x8
710370c9e4  ldr x0,[x20, #0x50]
710370c9e8  cbz x0,0x710370c9fc
710370c9ec  ldr x8,[x0]
710370c9f0  str x25,[x0, #0x8]
710370c9f4  ldr x8,[x8, #0x10]
710370c9f8  blr x8
710370c9fc  ldr x0,[x20, #0x68]
710370ca00  cbz x0,0x710370ca14
710370ca04  ldr x8,[x0]
710370ca08  str x25,[x0, #0x8]
710370ca0c  ldr x8,[x8, #0x10]
710370ca10  blr x8
710370ca14  ldr x0,[x20, #0x80]
710370ca18  cbz x0,0x710370ca2c
710370ca1c  ldr x8,[x0]
710370ca20  str x25,[x0, #0x8]
710370ca24  ldr x8,[x8, #0x10]
710370ca28  blr x8
710370ca2c  ldr x0,[x20, #0x98]
710370ca30  cbz x0,0x710370ca44
710370ca34  ldr x8,[x0]
710370ca38  str x25,[x0, #0x8]
710370ca3c  ldr x8,[x8, #0x10]
710370ca40  blr x8
710370ca44  ldr x0,[x20, #0xb0]
710370ca48  cbz x0,0x710370ca5c
710370ca4c  ldr x8,[x0]
710370ca50  str x25,[x0, #0x8]
710370ca54  ldr x8,[x8, #0x10]
710370ca58  blr x8
710370ca5c  mov w8,#0x2
710370ca60  sub x0,x29,#0xf8
710370ca64  strb w8,[x25, #0x98]
710370ca68  bl 0x71001b04d0
710370ca6c  ldr x0,[x25, #0x30]
710370ca70  sub x1,x29,#0xf8
710370ca74  bl 0x7100242d60
710370ca78  sub x0,x29,#0xf8
710370ca7c  bl 0x71001b0920
710370ca80  ldr x20,[sp, #0x68]
710370ca84  b 0x710370cb54
710370ca88  ldp x9,x10,[x8, #0x58]
710370ca8c  ldr x8,[x8, #0x68]
710370ca90  sub x0,x29,#0xf8
710370ca94  sub x1,x29,#0x88
710370ca98  orr w2,wzr,#0x3
710370ca9c  stp x10,x8,[x29, #-0x80]
710370caa0  stur x9,[x29, #-0x88]
710370caa4  bl 0x710170cea0
710370caa8  ldp x8,x9,[x29, #-0xf8]
710370caac  ldur x10,[x29, #-0xe8]
710370cab0  ldr x0,[x25, #0x30]
710370cab4  str x8,[x25, #0x80]
710370cab8  sub x8,x29,#0xf8
710370cabc  stp x9,x10,[x25, #0x88]
710370cac0  bl 0x7100238f30
710370cac4  ldur w8,[x29, #-0xf8]
710370cac8  cmp w8,#0x0
710370cacc  adrp x8,0x710170d000
710370cad0  add x8,x8,#0x30
710370cad4  csel x8,x8,xzr,ge
710370cad8  cbz x8,0x710370cae8
710370cadc  mov w8,#0x2
710370cae0  strb w8,[x25, #0x98]
710370cae4  b 0x710370cb54
710370cae8  strb wzr,[x25, #0x98]
710370caec  b 0x710370cb54
710370caf0  ldr x0,[x25, #0x30]
710370caf4  bl 0x7100248210
710370caf8  ldr x23,[sp, #0x30]
710370cafc  stur x0,[x29, #-0x88]
710370cb00  mov x0,x23
710370cb04  sturb wzr,[x29, #-0xee]
710370cb08  sturh wzr,[x29, #-0xf0]
710370cb0c  stur xzr,[x29, #-0xf8]
710370cb10  bl 0x71039c0a80
710370cb14  sub x1,x29,#0x88
710370cb18  mov x0,x23
710370cb1c  bl 0x71039c0bd0
710370cb20  mov w8,#0x1
710370cb24  sturb w8,[x29, #-0xee]
710370cb28  orr w10,wzr,#0x3
710370cb2c  ldp w8,w9,[x29, #-0x88]
710370cb30  sturh w10,[x29, #-0xf0]
710370cb34  ldur x10,[x29, #-0xe8]
710370cb38  stp w8,w9,[x29, #-0xf8]
710370cb3c  mov x0,x25
710370cb40  ldp x8,x9,[x29, #-0xf8]
710370cb44  str x8,[x25, #0x80]
710370cb48  stp x9,x10,[x25, #0x88]
710370cb4c  strb wzr,[x25, #0x98]
710370cb50  bl 0x7103700d80
710370cb54  ldr x22,[x22, #0x40]
710370cb58  ldrb w8,[x22, #0x10]
710370cb5c  cmp w8,#0x4
710370cb60  b.eq 0x710370cb70
710370cb64  cmp w8,#0x2
710370cb68  b.eq 0x710370cb84
710370cb6c  cbnz w8,0x710370ce24
710370cb70  ldr x8,[x22, #0x8]
710370cb74  ldr x8,[x8, #0x50]
710370cb78  cbz x8,0x710370ce24
710370cb7c  ldrb w8,[x8, #0x14]
710370cb80  cbz w8,0x710370ce24
710370cb84  adrp x8,0x71052ad000
710370cb88  ldr x25,[x8, #0xb38]
710370cb8c  cbz x25,0x710370ce24
710370cb90  sub x8,x29,#0x88
710370cb94  mov x0,x25
710370cb98  bl 0x7100147ac0
710370cb9c  ldur w8,[x29, #-0x88]
710370cba0  cbz w8,0x710370cd18
710370cba4  ldr x23,[sp, #0x60]
710370cba8  mov w8,#0x8c56
710370cbac  stur w8,[x29, #-0xf8]
710370cbb0  mov x0,x23
710370cbb4  bl 0x71039c0a80
710370cbb8  sub x1,x29,#0xa0
710370cbbc  mov x0,x23
710370cbc0  stur wzr,[x29, #-0xa0]
710370cbc4  bl 0x71039c0a90
710370cbc8  ldur w8,[x29, #-0x88]
710370cbcc  ldur w9,[x29, #-0xf8]
710370cbd0  cmp w8,w9
710370cbd4  b.ne 0x710370cbec
710370cbd8  adrp x8,0x71052ad000
710370cbdc  ldr x0,[x8, #0xfc0]
710370cbe0  cbz x0,0x710370cbec
710370cbe4  bl 0x7100193770
710370cbe8  cbnz w0,0x710370d138
710370cbec  mov w8,#0x5
710370cbf0  mov x0,x25
710370cbf4  strb w8,[x22, #0x10]
710370cbf8  bl 0x7100147c10
710370cbfc  ldr x23,[sp, #0x60]
710370cc00  and w19,w0,#0xfffffffe
710370cc04  mov w8,#0x8c79
710370cc08  stur w8,[x29, #-0xf8]
710370cc0c  mov x0,x23
710370cc10  bl 0x71039c0a80
710370cc14  sub x1,x29,#0xa0
710370cc18  mov x0,x23
710370cc1c  stur wzr,[x29, #-0xa0]
710370cc20  bl 0x71039c0a90
710370cc24  cmp w19,#0x4
710370cc28  b.eq 0x710370cf80
710370cc2c  ldur w8,[x29, #-0x88]
710370cc30  ldur w9,[x29, #-0xf8]
710370cc34  cmp w8,w9
710370cc38  b.eq 0x710370cf80
710370cc3c  ldr x23,[sp, #0x60]
710370cc40  mov w8,#0x8c56
710370cc44  stur w8,[x29, #-0xf8]
710370cc48  mov x0,x23
710370cc4c  bl 0x71039c0a80
710370cc50  sub x1,x29,#0xa0
710370cc54  mov x0,x23
710370cc58  stur wzr,[x29, #-0xa0]
710370cc5c  bl 0x71039c0a90
710370cc60  ldur w8,[x29, #-0x88]
710370cc64  ldur w9,[x29, #-0xf8]
710370cc68  cmp w8,w9
710370cc6c  ldr x19,[sp, #0xf8]
710370cc70  b.eq 0x710370d018
710370cc74  mov w8,#0x8c78
710370cc78  mov x0,x23
710370cc7c  stur w8,[x29, #-0xf8]
710370cc80  bl 0x71039c0a80
710370cc84  sub x1,x29,#0xa0
710370cc88  mov x0,x23
710370cc8c  stur wzr,[x29, #-0xa0]
710370cc90  bl 0x71039c0a90
710370cc94  ldur w8,[x29, #-0x88]
710370cc98  ldur w9,[x29, #-0xf8]
710370cc9c  cmp w8,w9
710370cca0  b.eq 0x710370d04c
710370cca4  sub x0,x29,#0xf8
710370cca8  sub x1,x29,#0x88
710370ccac  orr w2,wzr,#0x3
710370ccb0  bl 0x7103701060
710370ccb4  ldp x8,x9,[x29, #-0xf8]
710370ccb8  ldur x10,[x29, #-0xe8]
710370ccbc  str x10,[x22, #0x240]
710370ccc0  str x9,[x22, #0x238]
710370ccc4  str x8,[x22, #0x230]
710370ccc8  stp x9,x10,[x29, #-0xf0]
710370cccc  adrp x10,0x710533a000
710370ccd0  ldr x25,[x10, #0xb0]
710370ccd4  mov x0,x25
710370ccd8  stur x8,[x29, #-0xf8]
710370ccdc  bl 0x71039c1a40
710370cce0  ldr x8,[x25, #0x30]
710370cce4  ldr x9,[x25, #0x40]
710370cce8  cbz x8,0x710370cd00
710370ccec  ldr x10,[x25, #0x28]
710370ccf0  add x9,x9,#0x1
710370ccf4  udiv x11,x9,x10
710370ccf8  msub x9,x11,x10,x9
710370ccfc  str x9,[x25, #0x40]
710370cd00  ldr x10,[x25, #0x48]
710370cd04  add x9,x10,x9, LSL #0x6
710370cd08  add x8,x8,#0x1
710370cd0c  str x8,[x25, #0x30]
710370cd10  strb wzr,[x9]
710370cd14  b 0x710370d0fc
710370cd18  mov x20,xzr
710370cd1c  add x23,x22,x20
710370cd20  ldrb w8,[x23, #0x28]
710370cd24  cmp w8,#0x1
710370cd28  b.ne 0x710370ce14
710370cd2c  ldr x8,[x23, #0x20]
710370cd30  cbz x8,0x710370ce14
710370cd34  ldr x8,[x22, #0x220]
710370cd38  ldr x9,[x23, #0x18]
710370cd3c  cmp x9,x8
710370cd40  b.eq 0x710370ce14
710370cd44  adrp x8,0x71052ad000
710370cd48  ldr x0,[x8, #0xd68]
710370cd4c  bl 0x7100161fa0
710370cd50  cbz x0,0x710370ce14
710370cd54  ldr x8,[x0]
710370cd58  ldr x1,[x23, #0x18]
710370cd5c  ldr x8,[x8, #0x38]
710370cd60  blr x8
710370cd64  cbz x0,0x710370cdb0
710370cd68  bl 0x710015e850
710370cd6c  scvtf s0,w0
710370cd70  str s0,[x23, #0x2c]
710370cd74  tbnz w0,#0x1f,0x710370cdec
710370cd78  ldr s1,[x23, #0x30]
710370cd7c  fcmp s1,#0.0
710370cd80  mov v2.16B,v0.16B
710370cd84  b.eq 0x710370cd94
710370cd88  fsub s2,s0,s1
710370cd8c  fmul s2,s2,s9
710370cd90  fadd s2,s1,s2
710370cd94  str s2,[x23, #0x30]
710370cd98  mov x8,x23
710370cd9c  ldr s1,[x8, #0x34]!
710370cda0  fcmp s1,#0.0
710370cda4  b.ne 0x710370cdf4
710370cda8  str s0,[x8]
710370cdac  b 0x710370ce14
710370cdb0  ldr s0,[x23, #0x30]
710370cdb4  fcmp s0,#0.0
710370cdb8  mov v1.16B,v8.16B
710370cdbc  str wzr,[x23, #0x2c]
710370cdc0  b.eq 0x710370cdd0
710370cdc4  fsub s1,s8,s0
710370cdc8  fmul s1,s1,s9
710370cdcc  fadd s1,s0,s1
710370cdd0  str s1,[x23, #0x30]
710370cdd4  mov x8,x23
710370cdd8  ldr s0,[x8, #0x34]!
710370cddc  fcmp s0,#0.0
710370cde0  b.ne 0x710370ce00
710370cde4  str wzr,[x8]
710370cde8  b 0x710370ce14
710370cdec  str xzr,[x23, #0x30]
710370cdf0  b 0x710370ce14
710370cdf4  stur s0,[x29, #-0xf8]
710370cdf8  fcmp s1,s0
710370cdfc  b 0x710370ce04
710370ce00  stur wzr,[x29, #-0xf8]
710370ce04  sub x9,x29,#0xf8
710370ce08  csel x8,x9,x8,gt
710370ce0c  ldr w8,[x8]
710370ce10  str w8,[x23, #0x34]
710370ce14  add x20,x20,#0x20
710370ce18  cmp x20,#0x200
710370ce1c  b.ne 0x710370cd1c
710370ce20  ldr x20,[sp, #0x68]
710370ce24  ldr x8,[x22, #0x8]
710370ce28  ldr x0,[x8, #0x50]
710370ce2c  cbz x0,0x710370d138
710370ce30  ldr x8,[x22, #0x228]
710370ce34  ldr x9,[x22, #0x220]
710370ce38  cmp x8,x9
710370ce3c  ldrb w1,[x22, #0x10]
710370ce40  cset w2,eq
710370ce44  bl 0x7103703fd0
710370ce48  b 0x710370d138
710370ce4c  mov w8,#0x6020
710370ce50  movk w8,#0x40, LSL #16
710370ce54  add x22,x24,x8
710370ce58  mov w8,#0xa058
710370ce5c  movk w8,#0x42, LSL #16
710370ce60  ldr x27,[x24, x8, LSL #0x0]
710370ce64  cbz x27,0x710370d378
710370ce68  ldrb w8,[x23, #0x10]
710370ce6c  cbz w8,0x710370d378
710370ce70  ldr x19,[sp, #0x8]
710370ce74  mov x0,x19
710370ce78  stur wzr,[x29, #-0xa0]
710370ce7c  bl 0x71039c0a80
710370ce80  sub x1,x29,#0xf8
710370ce84  mov x0,x19
710370ce88  stur wzr,[x29, #-0xf8]
710370ce8c  bl 0x71039c0a90
710370ce90  mov x0,x25
710370ce94  bl 0x71039c1a40
710370ce98  ldr x8,[x24, #0x4008]
710370ce9c  cmp x8,#0x400
710370cea0  b.eq 0x710370d364
710370cea4  mov w8,#0x2008
710370cea8  add x20,x24,x8
710370ceac  mov w8,#0x6020
710370ceb0  movk w8,#0x20, LSL #16
710370ceb4  add x26,x24,x8
710370ceb8  ldr x19,[x22]
710370cebc  sub w8,w26,w19
710370cec0  add w4,w8,#0x200, LSL #12
710370cec4  ldr x8,[x27]
710370cec8  ldr x9,[x8, #0x80]
710370cecc  add x28,x19,#0x8
710370ced0  sub x8,x29,#0xf8
710370ced4  sub x1,x29,#0xb8
710370ced8  sub x3,x29,#0xac
710370cedc  mov x0,x27
710370cee0  mov x2,x28
710370cee4  blr x9
710370cee8  sub x0,x29,#0xa0
710370ceec  sub x1,x29,#0xf8
710370cef0  bl 0x71000bcf30
710370cef4  ldur w8,[x29, #-0xa0]
710370cef8  cbnz w8,0x710370d144
710370cefc  ldrh w8,[x19, #0x8]
710370cf00  ldur x1,[x29, #-0xb8]
710370cf04  cmp w8,#0x7e
710370cf08  str x1,[x19]
710370cf0c  b.hi 0x710370cf2c
710370cf10  ldr x0,[x23]
710370cf14  cbz x0,0x710370cf60
710370cf18  ldr x8,[x0]
710370cf1c  ldr x8,[x8, #0x10]
710370cf20  mov x2,x28
710370cf24  blr x8
710370cf28  b 0x710370cf60
710370cf2c  ldr x8,[x24, #0x4008]
710370cf30  cmp x8,#0x400
710370cf34  b.cs 0x710370e3b0
710370cf38  str x19,[x20, x8, LSL #0x3]
710370cf3c  ldr x8,[x24, #0x4008]
710370cf40  add x8,x8,#0x1
710370cf44  str x8,[x24, #0x4008]
710370cf48  ldur w8,[x29, #-0xac]
710370cf4c  ldr x9,[x22]
710370cf50  add w8,w8,#0xf
710370cf54  and w8,w8,#0xfffffff8
710370cf58  add x8,x9,x8
710370cf5c  str x8,[x22]
710370cf60  mov x0,x25
710370cf64  bl 0x71039c1a50
710370cf68  mov x0,x25
710370cf6c  bl 0x71039c1a40
710370cf70  ldr x8,[x24, #0x4008]
710370cf74  cmp x8,#0x400
710370cf78  b.ne 0x710370ceb8
710370cf7c  b 0x710370d364
710370cf80  adrp x8,0x71052ad000
710370cf84  ldr x0,[x8, #0xfc0]
710370cf88  ldr x19,[sp, #0xf8]
710370cf8c  cbz x0,0x710370cfa4
710370cf90  bl 0x7100192f00
710370cf94  cmp w0,#0x3
710370cf98  b.eq 0x710370d04c
710370cf9c  cmp w0,#0x4
710370cfa0  b.ne 0x710370d018
710370cfa4  sub x0,x29,#0xf8
710370cfa8  sub x1,x29,#0x88
710370cfac  mov w2,#0x2
710370cfb0  bl 0x7103701060
710370cfb4  ldp x8,x9,[x29, #-0xf8]
710370cfb8  ldur x10,[x29, #-0xe8]
710370cfbc  str x10,[x22, #0x240]
710370cfc0  str x9,[x22, #0x238]
710370cfc4  str x8,[x22, #0x230]
710370cfc8  stp x9,x10,[x29, #-0xf0]
710370cfcc  adrp x10,0x710533a000
710370cfd0  ldr x25,[x10, #0xb0]
710370cfd4  mov x0,x25
710370cfd8  stur x8,[x29, #-0xf8]
710370cfdc  bl 0x71039c1a40
710370cfe0  ldr x8,[x25, #0x30]
710370cfe4  ldr x9,[x25, #0x40]
710370cfe8  cbz x8,0x710370d000
710370cfec  ldr x10,[x25, #0x28]
710370cff0  add x9,x9,#0x1
710370cff4  udiv x11,x9,x10
710370cff8  msub x9,x11,x10,x9
710370cffc  str x9,[x25, #0x40]
710370d000  ldr x10,[x25, #0x48]
710370d004  add x8,x8,#0x1
710370d008  str x8,[x25, #0x30]
710370d00c  mov w8,#0x8
710370d010  add x9,x10,x9, LSL #0x6
710370d014  b 0x710370d0f8
710370d018  sub x0,x29,#0xf8
710370d01c  sub x1,x29,#0x88
710370d020  mov w2,#0x2
710370d024  bl 0x7103701060
710370d028  ldp x8,x9,[x29, #-0xf8]
710370d02c  ldur x10,[x29, #-0xe8]
710370d030  str x10,[x22, #0x240]
710370d034  str x9,[x22, #0x238]
710370d038  str x8,[x22, #0x230]
710370d03c  stur x10,[x29, #-0xe8]
710370d040  adrp x10,0x710533a000
710370d044  ldr x25,[x10, #0xb0]
710370d048  b 0x710370d0b8
710370d04c  ldr x23,[sp, #0x30]
710370d050  mov x0,x23
710370d054  sturb wzr,[x29, #-0xee]
710370d058  sturh wzr,[x29, #-0xf0]
710370d05c  stur xzr,[x29, #-0xf8]
710370d060  bl 0x71039c0a80
710370d064  sub x0,x29,#0xa0
710370d068  bl 0x71039c0a80
710370d06c  ldur x8,[x29, #-0xa0]
710370d070  ldur w9,[x29, #-0x98]
710370d074  str x8,[x23]
710370d078  mov w8,#0x2
710370d07c  str w9,[x23, #0x8]
710370d080  sturb wzr,[x29, #-0xee]
710370d084  sturh w8,[x29, #-0xf0]
710370d088  ldp x8,x9,[x29, #-0xf0]
710370d08c  orr x10,xzr,#0x200000000
710370d090  stur x10,[x29, #-0xf8]
710370d094  str x9,[x22, #0x240]
710370d098  str x8,[x22, #0x238]
710370d09c  str x10,[x22, #0x230]
710370d0a0  adrp x8,0x710533a000
710370d0a4  ldr x25,[x8, #0xb0]
710370d0a8  mov x8,x10
710370d0ac  ldr x10,[x22, #0x240]
710370d0b0  ldr x9,[x22, #0x238]
710370d0b4  stur x10,[x29, #-0xe8]
710370d0b8  mov x0,x25
710370d0bc  stp x8,x9,[x29, #-0xf8]
710370d0c0  bl 0x71039c1a40
710370d0c4  ldr x8,[x25, #0x30]
710370d0c8  ldr x9,[x25, #0x40]
710370d0cc  cbz x8,0x710370d0e4
710370d0d0  ldr x10,[x25, #0x28]
710370d0d4  add x9,x9,#0x1
710370d0d8  udiv x11,x9,x10
710370d0dc  msub x9,x11,x10,x9
710370d0e0  str x9,[x25, #0x40]
710370d0e4  ldr x10,[x25, #0x48]
710370d0e8  add x9,x10,x9, LSL #0x6
710370d0ec  add x8,x8,#0x1
710370d0f0  str x8,[x25, #0x30]
710370d0f4  mov w8,#0x2
710370d0f8  strb w8,[x9]
710370d0fc  ldp x8,x10,[x29, #-0xf8]
710370d100  mov x0,x25
710370d104  ldp x11,x12,[x29, #-0xe8]
710370d108  stur x12,[x9, #0x19]
710370d10c  stur x11,[x9, #0x11]
710370d110  stur x10,[x9, #0x9]
710370d114  stur x8,[x9, #0x1]
710370d118  ldp x8,x10,[x29, #-0xd8]
710370d11c  ldur x11,[x29, #-0xc8]
710370d120  ldur x12,[x29, #-0xc1]
710370d124  str x12,[x9, #0x38]
710370d128  stur x11,[x9, #0x31]
710370d12c  stur x10,[x9, #0x29]
710370d130  stur x8,[x9, #0x21]
710370d134  bl 0x71039c1a50
710370d138  ldr x8,[x28]
710370d13c  ldr w23,[x8, #0x28]
710370d140  b 0x710370d6d8
710370d144  ldr x19,[sp, #0x60]
710370d148  mov w8,#0x2c09
710370d14c  stur w8,[x29, #-0xf8]
710370d150  mov x0,x19
710370d154  bl 0x71039c0a80
710370d158  sub x1,x29,#0x88
710370d15c  mov x0,x19
710370d160  stur wzr,[x29, #-0x88]
710370d164  bl 0x71039c0a90
710370d168  ldur w8,[x29, #-0xa0]
710370d16c  ldur w9,[x29, #-0xf8]
710370d170  cmp w8,w9
710370d174  b.eq 0x710370d364
710370d178  ldr x19,[sp]
710370d17c  mov w8,#0x2c27
710370d180  stur w8,[x29, #-0x88]
710370d184  mov x0,x19
710370d188  bl 0x71039c0a80
710370d18c  sub x1,x29,#0xa8
710370d190  mov x0,x19
710370d194  stur wzr,[x29, #-0xa8]
710370d198  bl 0x71039c0a90
710370d19c  ldur w8,[x29, #-0xa0]
710370d1a0  ldur w9,[x29, #-0x88]
710370d1a4  cmp w8,w9
710370d1a8  b.eq 0x710370d364
710370d1ac  ldr x19,[sp, #0x60]
710370d1b0  mov w8,#0xc04
710370d1b4  movk w8,#0x1, LSL #16
710370d1b8  stur w8,[x29, #-0xf8]
710370d1bc  mov x0,x19
710370d1c0  bl 0x71039c0a80
710370d1c4  sub x1,x29,#0x88
710370d1c8  mov x0,x19
710370d1cc  stur wzr,[x29, #-0x88]
710370d1d0  bl 0x71039c0a90
710370d1d4  ldur w8,[x29, #-0xa0]
710370d1d8  ldur w9,[x29, #-0xf8]
710370d1dc  cmp w8,w9
710370d1e0  b.eq 0x710370d364
710370d1e4  ldr x19,[sp, #0x60]
710370d1e8  mov w8,#0x4c11
710370d1ec  stur w8,[x29, #-0xf8]
710370d1f0  mov x0,x19
710370d1f4  bl 0x71039c0a80
710370d1f8  sub x1,x29,#0x88
710370d1fc  mov x0,x19
710370d200  stur wzr,[x29, #-0x88]
710370d204  bl 0x71039c0a90
710370d208  ldur w8,[x29, #-0xa0]
710370d20c  ldur w9,[x29, #-0xf8]
710370d210  cmp w8,w9
710370d214  b.eq 0x710370d364
710370d218  ldr x19,[sp, #0x60]
710370d21c  mov w8,#0xc04
710370d220  movk w8,#0x1, LSL #16
710370d224  add w8,w8,#0x4
710370d228  stur w8,[x29, #-0xf8]
710370d22c  mov x0,x19
710370d230  bl 0x71039c0a80
710370d234  sub x1,x29,#0x88
710370d238  mov x0,x19
710370d23c  stur wzr,[x29, #-0x88]
710370d240  bl 0x71039c0a90
710370d244  ldur w8,[x29, #-0xa0]
710370d248  ldur w9,[x29, #-0xf8]
710370d24c  cmp w8,w9
710370d250  b.eq 0x710370d364
710370d254  ldr x19,[sp, #0x60]
710370d258  mov w8,#0xc04
710370d25c  movk w8,#0x1, LSL #16
710370d260  add w8,w8,#0x3
710370d264  stur w8,[x29, #-0xf8]
710370d268  mov x0,x19
710370d26c  bl 0x71039c0a80
710370d270  sub x1,x29,#0x88
710370d274  mov x0,x19
710370d278  stur wzr,[x29, #-0x88]
710370d27c  bl 0x71039c0a90
710370d280  ldur w8,[x29, #-0xa0]
710370d284  ldur w9,[x29, #-0xf8]
710370d288  cmp w8,w9
710370d28c  b.eq 0x710370d364
710370d290  ldr x19,[sp, #0x60]
710370d294  mov w8,#0x2c03
710370d298  stur w8,[x29, #-0xf8]
710370d29c  mov x0,x19
710370d2a0  bl 0x71039c0a80
710370d2a4  sub x1,x29,#0x88
710370d2a8  mov x0,x19
710370d2ac  stur wzr,[x29, #-0x88]
710370d2b0  bl 0x71039c0a90
710370d2b4  sub x0,x29,#0xf8
710370d2b8  sub x1,x29,#0xa0
710370d2bc  mov w2,#0x2
710370d2c0  bl 0x7103701060
710370d2c4  adrp x11,0x710533a000
710370d2c8  ldp x9,x8,[x29, #-0xf0]
710370d2cc  ldur x10,[x29, #-0xf8]
710370d2d0  ldr x27,[x11, #0xb0]
710370d2d4  stur x10,[x29, #-0x88]
710370d2d8  stp x9,x8,[x29, #-0x80]
710370d2dc  mov x0,x27
710370d2e0  stp x9,x8,[x29, #-0xf0]
710370d2e4  mov x8,x10
710370d2e8  stur x8,[x29, #-0xf8]
710370d2ec  bl 0x71039c1a40
710370d2f0  ldr x8,[x27, #0x30]
710370d2f4  ldr x9,[x27, #0x40]
710370d2f8  cbz x8,0x710370d310
710370d2fc  ldr x10,[x27, #0x28]
710370d300  add x9,x9,#0x1
710370d304  udiv x11,x9,x10
710370d308  msub x9,x11,x10,x9
710370d30c  str x9,[x27, #0x40]
710370d310  ldr x10,[x27, #0x48]
710370d314  add x9,x10,x9, LSL #0x6
710370d318  add x8,x8,#0x1
710370d31c  str x8,[x27, #0x30]
710370d320  mov w8,#0x2
710370d324  strb w8,[x9]
710370d328  ldp x8,x10,[x29, #-0xf8]
710370d32c  mov x0,x27
710370d330  ldp x11,x12,[x29, #-0xe8]
710370d334  stur x12,[x9, #0x19]
710370d338  stur x11,[x9, #0x11]
710370d33c  stur x10,[x9, #0x9]
710370d340  stur x8,[x9, #0x1]
710370d344  ldp x8,x10,[x29, #-0xd8]
710370d348  ldur x11,[x29, #-0xc8]
710370d34c  ldur x12,[x29, #-0xc1]
710370d350  str x12,[x9, #0x38]
710370d354  stur x11,[x9, #0x31]
710370d358  stur x10,[x9, #0x29]
710370d35c  stur x8,[x9, #0x21]
710370d360  bl 0x71039c1a50
710370d364  mov x0,x25
710370d368  bl 0x71039c1a50
710370d36c  ldr x28,[sp, #0x48]
710370d370  ldr x20,[sp, #0x68]
710370d374  ldr x19,[sp, #0xf8]
710370d378  mov w8,#0xa060
710370d37c  movk w8,#0x42, LSL #16
710370d380  ldr x27,[x24, x8, LSL #0x0]
710370d384  cbz x27,0x710370c7b0
710370d388  ldrb w8,[x23, #0x10]
710370d38c  cbz w8,0x710370c7b0
710370d390  ldr x19,[sp, #0x8]
710370d394  mov x0,x19
710370d398  stur wzr,[x29, #-0xa0]
710370d39c  bl 0x71039c0a80
710370d3a0  sub x1,x29,#0xf8
710370d3a4  mov x0,x19
710370d3a8  stur wzr,[x29, #-0xf8]
710370d3ac  bl 0x71039c0a90
710370d3b0  mov x0,x25
710370d3b4  bl 0x71039c1a40
710370d3b8  ldr x8,[x24, #0x4008]
710370d3bc  cmp x8,#0x400
710370d3c0  b.eq 0x710370d6b8
710370d3c4  mov w8,#0x2008
710370d3c8  add x20,x24,x8
710370d3cc  mov w8,#0x6020
710370d3d0  movk w8,#0x20, LSL #16
710370d3d4  add x26,x24,x8
710370d3d8  ldr x19,[x22]
710370d3dc  add x28,x19,#0x8
710370d3e0  sub w8,w26,w19
710370d3e4  add w4,w8,#0x200, LSL #12
710370d3e8  sub x8,x29,#0xf8
710370d3ec  sub x1,x29,#0xb8
710370d3f0  sub x3,x29,#0xac
710370d3f4  mov x0,x27
710370d3f8  mov x2,x28
710370d3fc  bl 0x7100165f60
710370d400  sub x0,x29,#0xa0
710370d404  sub x1,x29,#0xf8
710370d408  bl 0x71000bcf30
710370d40c  ldur w8,[x29, #-0xa0]
710370d410  cbnz w8,0x710370d498
710370d414  ldrh w8,[x19, #0x8]
710370d418  ldur x1,[x29, #-0xb8]
710370d41c  cmp w8,#0x7e
710370d420  str x1,[x19]
710370d424  b.hi 0x710370d444
710370d428  ldr x0,[x23]
710370d42c  cbz x0,0x710370d478
710370d430  ldr x8,[x0]
710370d434  ldr x8,[x8, #0x10]
710370d438  mov x2,x28
710370d43c  blr x8
710370d440  b 0x710370d478
710370d444  ldr x8,[x24, #0x4008]
710370d448  cmp x8,#0x400
710370d44c  b.cs 0x710370e3b0
710370d450  str x19,[x20, x8, LSL #0x3]
710370d454  ldr x8,[x24, #0x4008]
710370d458  add x8,x8,#0x1
710370d45c  str x8,[x24, #0x4008]
710370d460  ldur w8,[x29, #-0xac]
710370d464  ldr x9,[x22]
710370d468  add w8,w8,#0xf
710370d46c  and w8,w8,#0xfffffff8
710370d470  add x8,x9,x8
710370d474  str x8,[x22]
710370d478  mov x0,x25
710370d47c  bl 0x71039c1a50
710370d480  mov x0,x25
710370d484  bl 0x71039c1a40
710370d488  ldr x8,[x24, #0x4008]
710370d48c  cmp x8,#0x400
710370d490  b.ne 0x710370d3d8
710370d494  b 0x710370d6b8
710370d498  ldr x19,[sp, #0x60]
710370d49c  mov w8,#0x2c09
710370d4a0  stur w8,[x29, #-0xf8]
710370d4a4  mov x0,x19
710370d4a8  bl 0x71039c0a80
710370d4ac  sub x1,x29,#0x88
710370d4b0  mov x0,x19
710370d4b4  stur wzr,[x29, #-0x88]
710370d4b8  bl 0x71039c0a90
710370d4bc  ldur w8,[x29, #-0xa0]
710370d4c0  ldur w9,[x29, #-0xf8]
710370d4c4  cmp w8,w9
710370d4c8  b.eq 0x710370d6b8
710370d4cc  ldr x19,[sp]
710370d4d0  mov w8,#0x2c27
710370d4d4  stur w8,[x29, #-0x88]
710370d4d8  mov x0,x19
710370d4dc  bl 0x71039c0a80
710370d4e0  sub x1,x29,#0xa8
710370d4e4  mov x0,x19
710370d4e8  stur wzr,[x29, #-0xa8]
710370d4ec  bl 0x71039c0a90
710370d4f0  ldur w8,[x29, #-0xa0]
710370d4f4  ldur w9,[x29, #-0x88]
710370d4f8  cmp w8,w9
710370d4fc  b.eq 0x710370d6b8
710370d500  ldr x19,[sp, #0x60]
710370d504  mov w8,#0xc04
710370d508  movk w8,#0x1, LSL #16
710370d50c  stur w8,[x29, #-0xf8]
710370d510  mov x0,x19
710370d514  bl 0x71039c0a80
710370d518  sub x1,x29,#0x88
710370d51c  mov x0,x19
710370d520  stur wzr,[x29, #-0x88]
710370d524  bl 0x71039c0a90
710370d528  ldur w8,[x29, #-0xa0]
710370d52c  ldur w9,[x29, #-0xf8]
710370d530  cmp w8,w9
710370d534  b.eq 0x710370d6b8
710370d538  ldr x19,[sp, #0x60]
710370d53c  mov w8,#0x4c11
710370d540  stur w8,[x29, #-0xf8]
710370d544  mov x0,x19
710370d548  bl 0x71039c0a80
710370d54c  sub x1,x29,#0x88
710370d550  mov x0,x19
710370d554  stur wzr,[x29, #-0x88]
710370d558  bl 0x71039c0a90
710370d55c  ldur w8,[x29, #-0xa0]
710370d560  ldur w9,[x29, #-0xf8]
710370d564  cmp w8,w9
710370d568  b.eq 0x710370d6b8
710370d56c  ldr x19,[sp, #0x60]
710370d570  mov w8,#0xc04
710370d574  movk w8,#0x1, LSL #16
710370d578  add w8,w8,#0x4
710370d57c  stur w8,[x29, #-0xf8]
710370d580  mov x0,x19
710370d584  bl 0x71039c0a80
710370d588  sub x1,x29,#0x88
710370d58c  mov x0,x19
710370d590  stur wzr,[x29, #-0x88]
710370d594  bl 0x71039c0a90
710370d598  ldur w8,[x29, #-0xa0]
710370d59c  ldur w9,[x29, #-0xf8]
710370d5a0  cmp w8,w9
710370d5a4  b.eq 0x710370d6b8
710370d5a8  ldr x19,[sp, #0x60]
710370d5ac  mov w8,#0xc04
710370d5b0  movk w8,#0x1, LSL #16
710370d5b4  add w8,w8,#0x3
710370d5b8  stur w8,[x29, #-0xf8]
710370d5bc  mov x0,x19
710370d5c0  bl 0x71039c0a80
710370d5c4  sub x1,x29,#0x88
710370d5c8  mov x0,x19
710370d5cc  stur wzr,[x29, #-0x88]
710370d5d0  bl 0x71039c0a90
710370d5d4  ldur w8,[x29, #-0xa0]
710370d5d8  ldur w9,[x29, #-0xf8]
710370d5dc  cmp w8,w9
710370d5e0  b.eq 0x710370d6b8
710370d5e4  ldr x19,[sp, #0x60]
710370d5e8  mov w8,#0x2c03
710370d5ec  stur w8,[x29, #-0xf8]
710370d5f0  mov x0,x19
710370d5f4  bl 0x71039c0a80
710370d5f8  sub x1,x29,#0x88
710370d5fc  mov x0,x19
710370d600  stur wzr,[x29, #-0x88]
710370d604  bl 0x71039c0a90
710370d608  sub x0,x29,#0xf8
710370d60c  sub x1,x29,#0xa0
710370d610  mov w2,#0x2
710370d614  bl 0x7103701060
710370d618  adrp x11,0x710533a000
710370d61c  ldp x9,x8,[x29, #-0xf0]
710370d620  ldur x10,[x29, #-0xf8]
710370d624  ldr x27,[x11, #0xb0]
710370d628  stur x10,[x29, #-0x88]
710370d62c  stp x9,x8,[x29, #-0x80]
710370d630  mov x0,x27
710370d634  stp x9,x8,[x29, #-0xf0]
710370d638  mov x8,x10
710370d63c  stur x8,[x29, #-0xf8]
710370d640  bl 0x71039c1a40
710370d644  ldr x8,[x27, #0x30]
710370d648  ldr x9,[x27, #0x40]
710370d64c  cbz x8,0x710370d664
710370d650  ldr x10,[x27, #0x28]
710370d654  add x9,x9,#0x1
710370d658  udiv x11,x9,x10
710370d65c  msub x9,x11,x10,x9
710370d660  str x9,[x27, #0x40]
710370d664  ldr x10,[x27, #0x48]
710370d668  add x9,x10,x9, LSL #0x6
710370d66c  add x8,x8,#0x1
710370d670  str x8,[x27, #0x30]
710370d674  mov w8,#0x2
710370d678  strb w8,[x9]
710370d67c  ldp x8,x10,[x29, #-0xf8]
710370d680  mov x0,x27
710370d684  ldp x11,x12,[x29, #-0xe8]
710370d688  stur x12,[x9, #0x19]
710370d68c  stur x11,[x9, #0x11]
710370d690  stur x10,[x9, #0x9]
710370d694  stur x8,[x9, #0x1]
710370d698  ldp x8,x10,[x29, #-0xd8]
710370d69c  ldur x11,[x29, #-0xc8]
710370d6a0  ldur x12,[x29, #-0xc1]
710370d6a4  str x12,[x9, #0x38]
710370d6a8  stur x11,[x9, #0x31]
710370d6ac  stur x10,[x9, #0x29]
710370d6b0  stur x8,[x9, #0x21]
710370d6b4  bl 0x71039c1a50
710370d6b8  mov x0,x25
710370d6bc  bl 0x71039c1a50
710370d6c0  ldr x28,[sp, #0x48]
710370d6c4  ldr x20,[sp, #0x68]
710370d6c8  ldr x19,[sp, #0xf8]
710370d6cc  ldr x22,[x28]
710370d6d0  cbnz x22,0x710370c7b8
710370d6d4  mov x23,xzr
710370d6d8  mov x0,x20
710370d6dc  bl 0x71039c1a40
710370d6e0  ldr x8,[x28, #0x30]
710370d6e4  add x9,x8,#0x10
710370d6e8  cmp x8,#0x0
710370d6ec  csel x25,xzr,x9,eq
710370d6f0  cbz x8,0x710370d700
710370d6f4  ldrb w8,[x25, #0x70]
710370d6f8  cmp w8,#0x6
710370d6fc  b.ne 0x710370d70c
710370d700  mov x0,x20
710370d704  bl 0x71039c1a50
710370d708  b 0x710370d720
710370d70c  mov x0,x20
710370d710  bl 0x71039c1a50
710370d714  ldr x1,[x28]
710370d718  mov x0,x25
710370d71c  bl 0x710370e500
710370d720  ldr x25,[x28]
710370d724  mov x0,x21
710370d728  bl 0x71039c1a40
710370d72c  mov x0,x21
710370d730  bl 0x71039c1a50
710370d734  mov x0,x21
710370d738  bl 0x71039c1a40
710370d73c  ldrb w8,[x28, #0x60]
710370d740  cbz w8,0x710370d760
710370d744  mov x0,x21
710370d748  bl 0x71039c1a50
710370d74c  ldr x0,[sp, #0xe8]
710370d750  mov x1,x25
710370d754  bl 0x710370e500
710370d758  mov x0,x21
710370d75c  bl 0x71039c1a40
710370d760  ldrb w8,[x28, #0x268]
710370d764  cbz w8,0x710370d784
710370d768  mov x0,x21
710370d76c  bl 0x71039c1a50
710370d770  ldr x0,[sp, #0xe0]
710370d774  mov x1,x25
710370d778  bl 0x710370e500
710370d77c  mov x0,x21
710370d780  bl 0x71039c1a40
710370d784  ldrb w8,[x28, #0x470]
710370d788  cbz w8,0x710370d7a8
710370d78c  mov x0,x21
710370d790  bl 0x71039c1a50
710370d794  ldr x0,[sp, #0xd8]
710370d798  mov x1,x25
710370d79c  bl 0x710370e500
710370d7a0  mov x0,x21
710370d7a4  bl 0x71039c1a40
710370d7a8  ldrb w8,[x28, #0x678]
710370d7ac  cbz w8,0x710370d7cc
710370d7b0  mov x0,x21
710370d7b4  bl 0x71039c1a50
710370d7b8  ldr x0,[sp, #0xd0]
710370d7bc  mov x1,x25
710370d7c0  bl 0x710370e500
710370d7c4  mov x0,x21
710370d7c8  bl 0x71039c1a40
710370d7cc  ldrb w8,[x28, #0x880]
710370d7d0  cbz w8,0x710370d7f0
710370d7d4  mov x0,x21
710370d7d8  bl 0x71039c1a50
710370d7dc  ldr x0,[sp, #0xc8]
710370d7e0  mov x1,x25
710370d7e4  bl 0x710370e500
710370d7e8  mov x0,x21
710370d7ec  bl 0x71039c1a40
710370d7f0  ldrb w8,[x28, #0xa88]
710370d7f4  cbz w8,0x710370d814
710370d7f8  mov x0,x21
710370d7fc  bl 0x71039c1a50
710370d800  ldr x0,[sp, #0xc0]
710370d804  mov x1,x25
710370d808  bl 0x710370e500
710370d80c  mov x0,x21
710370d810  bl 0x71039c1a40
710370d814  ldrb w8,[x28, #0xc90]
710370d818  cbz w8,0x710370d838
710370d81c  mov x0,x21
710370d820  bl 0x71039c1a50
710370d824  ldr x0,[sp, #0xb8]
710370d828  mov x1,x25
710370d82c  bl 0x710370e500
710370d830  mov x0,x21
710370d834  bl 0x71039c1a40
710370d838  ldrb w8,[x28, #0xe98]
710370d83c  cbz w8,0x710370d85c
710370d840  mov x0,x21
710370d844  bl 0x71039c1a50
710370d848  ldr x0,[sp, #0xb0]
710370d84c  mov x1,x25
710370d850  bl 0x710370e500
710370d854  mov x0,x21
710370d858  bl 0x71039c1a40
710370d85c  ldrb w8,[x19]
710370d860  cbz w8,0x710370d880
710370d864  mov x0,x21
710370d868  bl 0x71039c1a50
710370d86c  ldr x0,[sp, #0xa8]
710370d870  mov x1,x25
710370d874  bl 0x710370e500
710370d878  mov x0,x21
710370d87c  bl 0x71039c1a40
710370d880  ldrb w8,[x19, #0x208]
710370d884  cbz w8,0x710370d8a4
710370d888  mov x0,x21
710370d88c  bl 0x71039c1a50
710370d890  ldr x0,[sp, #0xa0]
710370d894  mov x1,x25
710370d898  bl 0x710370e500
710370d89c  mov x0,x21
710370d8a0  bl 0x71039c1a40
710370d8a4  ldrb w8,[x19, #0x410]
710370d8a8  cbz w8,0x710370d8c8
710370d8ac  mov x0,x21
710370d8b0  bl 0x71039c1a50
710370d8b4  ldr x0,[sp, #0x98]
710370d8b8  mov x1,x25
710370d8bc  bl 0x710370e500
710370d8c0  mov x0,x21
710370d8c4  bl 0x71039c1a40
710370d8c8  ldrb w8,[x19, #0x618]
710370d8cc  cbz w8,0x710370d8ec
710370d8d0  mov x0,x21
710370d8d4  bl 0x71039c1a50
710370d8d8  ldr x0,[sp, #0x90]
710370d8dc  mov x1,x25
710370d8e0  bl 0x710370e500
710370d8e4  mov x0,x21
710370d8e8  bl 0x71039c1a40
710370d8ec  ldrb w8,[x19, #0x820]
710370d8f0  cbz w8,0x710370d910
710370d8f4  mov x0,x21
710370d8f8  bl 0x71039c1a50
710370d8fc  ldr x0,[sp, #0x88]
710370d900  mov x1,x25
710370d904  bl 0x710370e500
710370d908  mov x0,x21
710370d90c  bl 0x71039c1a40
710370d910  ldrb w8,[x19, #0xa28]
710370d914  cbz w8,0x710370d934
710370d918  mov x0,x21
710370d91c  bl 0x71039c1a50
710370d920  ldr x0,[sp, #0x80]
710370d924  mov x1,x25
710370d928  bl 0x710370e500
710370d92c  mov x0,x21
710370d930  bl 0x71039c1a40
710370d934  ldrb w8,[x19, #0xc30]
710370d938  cbz w8,0x710370d958
710370d93c  mov x0,x21
710370d940  bl 0x71039c1a50
710370d944  ldr x0,[sp, #0x78]
710370d948  mov x1,x25
710370d94c  bl 0x710370e500
710370d950  mov x0,x21
710370d954  bl 0x71039c1a40
710370d958  ldrb w8,[x19, #0xe38]
710370d95c  cbz w8,0x710370d97c
710370d960  mov x0,x21
710370d964  bl 0x71039c1a50
710370d968  ldr x0,[sp, #0x70]
710370d96c  mov x1,x25
710370d970  bl 0x710370e500
710370d974  mov x0,x21
710370d978  bl 0x71039c1a40
710370d97c  mov x0,x21
710370d980  bl 0x71039c1a50
710370d984  ldr x26,[x28, #0x2108]
710370d988  cbz x26,0x710370de28
710370d98c  mov w8,#0xa038
710370d990  movk w8,#0x42, LSL #16
710370d994  ldr x8,[x26, x8, LSL #0x0]
710370d998  cbz x8,0x710370de28
710370d99c  mov w8,#0xa050
710370d9a0  movk w8,#0x42, LSL #16
710370d9a4  ldrb w8,[x26, x8, LSL ]
710370d9a8  cbz w8,0x710370de28
710370d9ac  adrp x8,0x710523b000
710370d9b0  add x8,x8,#0xea8
710370d9b4  stur x8,[x29, #-0x88]
710370d9b8  adrp x8,0x71052ad000
710370d9bc  ldr x8,[x8, #0xb38]
710370d9c0  cbz x8,0x710370de28
710370d9c4  mov w9,#0xa058
710370d9c8  movk w9,#0x42, LSL #16
710370d9cc  ldr x10,[x26, x9, LSL #0x0]
710370d9d0  mov w9,#0xa060
710370d9d4  movk w9,#0x42, LSL #16
710370d9d8  ldr x9,[x26, x9, LSL #0x0]
710370d9dc  stp x10,x9,[x29, #-0x78]
710370d9e0  cbz x10,0x710370de28
710370d9e4  cbz x9,0x710370de28
710370d9e8  mov w9,#0x6028
710370d9ec  movk w9,#0x42, LSL #16
710370d9f0  add x24,x26,x9
710370d9f4  mov w9,#0xa268
710370d9f8  movk w9,#0x42, LSL #16
710370d9fc  add x27,x26,x9
710370da00  ldp x20,x25,[x8, #0xf0]
710370da04  mov x0,x27
710370da08  bl 0x71039c1a40
710370da0c  ldr x8,[x26, #0x2000]
710370da10  lsl x28,x8,#0x3
710370da14  cbz x28,0x710370dd44
710370da18  mov w8,#0x6020
710370da1c  movk w8,#0x40, LSL #16
710370da20  add x8,x26,x8
710370da24  stp x27,x23,[sp, #0x20]
710370da28  stp x8,x24,[sp, #0x50]
710370da2c  mov w8,#0x6030
710370da30  movk w8,#0x42, LSL #16
710370da34  add x22,x26,x8
710370da38  mov w8,#0x4008
710370da3c  add x8,x24,x8
710370da40  mov x24,x26
710370da44  str x8,[sp, #0xf0]
710370da48  mov w8,#0x4010
710370da4c  add x8,x26,x8
710370da50  str x8,[sp, #0x18]
710370da54  mov w8,#0x2008
710370da58  add x8,x26,x8
710370da5c  str x8,[sp, #0x10]
710370da60  mov w8,#0x6028
710370da64  movk w8,#0x40, LSL #16
710370da68  add x8,x26,x8
710370da6c  str x8,[sp, #0x40]
710370da70  mov w8,#0x6020
710370da74  movk w8,#0x20, LSL #16
710370da78  add x8,x26,x8
710370da7c  str x8,[sp, #0x38]
710370da80  b 0x710370db78
710370da84  ldr x8,[x26, #0x4008]
710370da88  cmp x8,#0x400
710370da8c  b.eq 0x710370db28
710370da90  ldr x9,[sp, #0x50]
710370da94  ldr w8,[x23, #0x10]
710370da98  add w8,w8,#0x2b
710370da9c  ldr x19,[x9]
710370daa0  ldr x9,[sp, #0x38]
710370daa4  and w8,w8,#0xfffffff8
710370daa8  sub w9,w19,w9
710370daac  add w9,w8,w9
710370dab0  lsr w9,w9,#0x15
710370dab4  cbnz w9,0x710370db28
710370dab8  ldr x9,[sp, #0x50]
710370dabc  add x8,x19,w8, UXTW 
710370dac0  str x8,[x9]
710370dac4  cbz x19,0x710370db28
710370dac8  stp xzr,xzr,[x19, #0x8]
710370dacc  add x1,x27,#0xc
710370dad0  str xzr,[x19]
710370dad4  add x0,x19,#0x14
710370dad8  str wzr,[x19, #0x10]
710370dadc  ldrh w8,[x23, #0x8]
710370dae0  strh w8,[x19, #0x8]
710370dae4  ldrh w8,[x23, #0xe]
710370dae8  strh w8,[x19, #0xe]
710370daec  ldr w27,[x23, #0x10]
710370daf0  mov x2,x27
710370daf4  bl 0x71039c00e0
710370daf8  str w27,[x19, #0x10]
710370dafc  str x20,[x19]
710370db00  ldr x8,[x26, #0x4008]
710370db04  cmp x8,#0x400
710370db08  b.cs 0x710370e3b0
710370db0c  ldr x9,[sp, #0x10]
710370db10  str x19,[x9, x8, LSL #0x3]
710370db14  ldr x8,[x26, #0x4008]
710370db18  ldr x19,[sp, #0xf8]
710370db1c  add x8,x8,#0x1
710370db20  str x8,[x26, #0x4008]
710370db24  b 0x710370dd2c
710370db28  ldrh w8,[x23, #0xe]
710370db2c  ldr x19,[sp, #0xf8]
710370db30  tbz w8,#0x0,0x710370dd2c
710370db34  ldr x9,[sp, #0xf0]
710370db38  ldr x9,[x9]
710370db3c  cmp x9,#0x400
710370db40  b.eq 0x710370dd2c
710370db44  b.cs 0x710370e3b0
710370db48  ldrh w11,[x23, #0x8]
710370db4c  ldur w10,[x29, #-0x80]
710370db50  add x9,x22,x9, LSL #0x4
710370db54  ldrh w12,[x23, #0xa]
710370db58  stp w11,w8,[x9]
710370db5c  strh w12,[x9, #0x8]
710370db60  str w10,[x9, #0xc]
710370db64  ldr x9,[sp, #0xf0]
710370db68  ldr x8,[x9]
710370db6c  add x8,x8,#0x1
710370db70  str x8,[x9]
710370db74  b 0x710370dd2c
710370db78  ldr x23,[x24]
710370db7c  ldrh w8,[x23, #0xe]
710370db80  add x27,x23,#0x8
710370db84  tbnz w8,#0x1,0x710370db90
710370db88  mov x9,x23
710370db8c  b 0x710370dc74
710370db90  cmp x25,x20
710370db94  str x25,[x23]
710370db98  b.ne 0x710370dc70
710370db9c  orr w8,w8,#0x8
710370dba0  strh w8,[x23, #0xe]
710370dba4  ldrh w8,[x23, #0xe]
710370dba8  tbz w8,#0x3,0x710370dd2c
710370dbac  tbnz w8,#0x2,0x710370dbc0
710370dbb0  ldr x8,[x24]
710370dbb4  ldr x8,[x8]
710370dbb8  cmp x8,x20
710370dbbc  b.ne 0x710370dd2c
710370dbc0  ldrh w8,[x27]
710370dbc4  cmp w8,#0x7e
710370dbc8  b.hi 0x710370da84
710370dbcc  ldr x8,[x26, #0x6010]
710370dbd0  cmp x8,#0x400
710370dbd4  b.eq 0x710370db28
710370dbd8  ldr x9,[sp, #0x58]
710370dbdc  ldr w8,[x23, #0x10]
710370dbe0  add w8,w8,#0x2b
710370dbe4  ldr x19,[x9]
710370dbe8  ldr x9,[sp, #0x40]
710370dbec  and w8,w8,#0xfffffff8
710370dbf0  sub w9,w19,w9
710370dbf4  add w9,w8,w9
710370dbf8  lsr w9,w9,#0x11
710370dbfc  cbnz w9,0x710370db28
710370dc00  ldr x9,[sp, #0x58]
710370dc04  add x8,x19,w8, UXTW 
710370dc08  str x8,[x9]
710370dc0c  cbz x19,0x710370db28
710370dc10  stp xzr,xzr,[x19, #0x8]
710370dc14  add x1,x27,#0xc
710370dc18  str xzr,[x19]
710370dc1c  add x0,x19,#0x14
710370dc20  str wzr,[x19, #0x10]
710370dc24  ldrh w8,[x23, #0x8]
710370dc28  strh w8,[x19, #0x8]
710370dc2c  ldrh w8,[x23, #0xe]
710370dc30  strh w8,[x19, #0xe]
710370dc34  ldr w27,[x23, #0x10]
710370dc38  mov x2,x27
710370dc3c  bl 0x71039c00e0
710370dc40  str w27,[x19, #0x10]
710370dc44  str x20,[x19]
710370dc48  ldr x8,[x26, #0x6010]
710370dc4c  cmp x8,#0x400
710370dc50  b.cs 0x710370e3b0
710370dc54  ldr x9,[sp, #0x18]
710370dc58  str x19,[x9, x8, LSL #0x3]
710370dc5c  ldr x8,[x26, #0x6010]
710370dc60  ldr x19,[sp, #0xf8]
710370dc64  add x8,x8,#0x1
710370dc68  str x8,[x26, #0x6010]
710370dc6c  b 0x710370dd2c
710370dc70  ldr x9,[x24]
710370dc74  ldr w10,[x23, #0x10]
710370dc78  add w3,w10,#0xc
710370dc7c  tbnz w8,#0x2,0x710370dc94
710370dc80  ldr x1,[x9]
710370dc84  ldur x9,[x29, #-0x88]
710370dc88  tbz w8,#0x0,0x710370dca4
710370dc8c  ldr x8,[x9, #0x8]
710370dc90  b 0x710370dca8
710370dc94  ldur x9,[x29, #-0x88]
710370dc98  tbz w8,#0x0,0x710370dd0c
710370dc9c  ldr x8,[x9, #0x18]
710370dca0  b 0x710370dd10
710370dca4  ldr x8,[x9, #0x10]
710370dca8  sub x0,x29,#0x88
710370dcac  mov x2,x27
710370dcb0  blr x8
710370dcb4  tbnz w0,#0x0,0x710370dd24
710370dcb8  ldrh w8,[x23, #0xe]
710370dcbc  tbz w8,#0x0,0x710370dd24
710370dcc0  ldr x9,[sp, #0xf0]
710370dcc4  ldr x9,[x9]
710370dcc8  cmp x9,#0x400
710370dccc  b.eq 0x710370dd24
710370dcd0  b.cs 0x710370e3b0
710370dcd4  ldrh w11,[x23, #0x8]
710370dcd8  ldur w10,[x29, #-0x80]
710370dcdc  add x9,x22,x9, LSL #0x4
710370dce0  ldrh w12,[x23, #0xa]
710370dce4  stp w11,w8,[x9]
710370dce8  strh w12,[x9, #0x8]
710370dcec  str w10,[x9, #0xc]
710370dcf0  ldr x9,[sp, #0xf0]
710370dcf4  ldr x8,[x9]
710370dcf8  add x8,x8,#0x1
710370dcfc  str x8,[x9]
710370dd00  ldrh w8,[x23, #0xe]
710370dd04  tbnz w8,#0x3,0x710370dbac
710370dd08  b 0x710370dd2c
710370dd0c  ldr x8,[x9, #0x20]
710370dd10  sub x0,x29,#0x88
710370dd14  mov x1,x27
710370dd18  mov w2,w3
710370dd1c  blr x8
710370dd20  tbz w0,#0x0,0x710370dcb8
710370dd24  ldrh w8,[x23, #0xe]
710370dd28  tbnz w8,#0x3,0x710370dbac
710370dd2c  add x24,x24,#0x8
710370dd30  subs x28,x28,#0x8
710370dd34  b.ne 0x710370db78
710370dd38  ldp x27,x23,[sp, #0x20]
710370dd3c  ldr x24,[sp, #0xf0]
710370dd40  b 0x710370dd58
710370dd44  mov w8,#0x6030
710370dd48  movk w8,#0x42, LSL #16
710370dd4c  add x22,x26,x8
710370dd50  mov w8,#0x4008
710370dd54  add x24,x24,x8
710370dd58  mov w8,#0x6018
710370dd5c  add x8,x26,x8
710370dd60  mov w9,#0x6018
710370dd64  movk w9,#0x20, LSL #16
710370dd68  mov x0,x27
710370dd6c  str xzr,[x26, #0x2000]
710370dd70  str x8,[x26, x9, LSL #0x0]
710370dd74  bl 0x71039c1a50
710370dd78  ldr x8,[x24]
710370dd7c  ldr x28,[sp, #0x48]
710370dd80  cbz x8,0x710370de20
710370dd84  adrp x9,0x710533a000
710370dd88  ldr x25,[x9, #0xb0]
710370dd8c  lsl x20,x8,#0x4
710370dd90  ldp x8,x9,[x22]
710370dd94  mov x0,x25
710370dd98  stp x8,x9,[x29, #-0xf8]
710370dd9c  bl 0x71039c1a40
710370dda0  ldr x8,[x25, #0x30]
710370dda4  ldr x9,[x25, #0x40]
710370dda8  cbz x8,0x710370ddc0
710370ddac  ldr x10,[x25, #0x28]
710370ddb0  add x9,x9,#0x1
710370ddb4  udiv x11,x9,x10
710370ddb8  msub x9,x11,x10,x9
710370ddbc  str x9,[x25, #0x40]
710370ddc0  ldr x10,[x25, #0x48]
710370ddc4  add x9,x10,x9, LSL #0x6
710370ddc8  add x8,x8,#0x1
710370ddcc  str x8,[x25, #0x30]
710370ddd0  mov w8,#0x9
710370ddd4  strb w8,[x9]
710370ddd8  ldp x8,x10,[x29, #-0xf8]
710370dddc  mov x0,x25
710370dde0  ldp x11,x12,[x29, #-0xe8]
710370dde4  stur x12,[x9, #0x19]
710370dde8  stur x11,[x9, #0x11]
710370ddec  stur x10,[x9, #0x9]
710370ddf0  stur x8,[x9, #0x1]
710370ddf4  ldp x8,x10,[x29, #-0xd8]
710370ddf8  ldur x11,[x29, #-0xc8]
710370ddfc  ldur x12,[x29, #-0xc1]
710370de00  str x12,[x9, #0x38]
710370de04  stur x11,[x9, #0x31]
710370de08  stur x10,[x9, #0x29]
710370de0c  stur x8,[x9, #0x21]
710370de10  bl 0x71039c1a50
710370de14  add x22,x22,#0x10
710370de18  subs x20,x20,#0x10
710370de1c  b.ne 0x710370dd90
710370de20  ldr x20,[sp, #0x68]
710370de24  str xzr,[x24]
710370de28  adrp x8,0x71052af000
710370de2c  ldrb w8,[x8, #0x1d8]
710370de30  cbz w8,0x710370df74
710370de34  adrp x8,0x71052af000
710370de38  ldr x0,[x8, #0x1d0]
710370de3c  bl 0x7101717960
710370de40  ldr w8,[x0]
710370de44  cbz w8,0x710370df74
710370de48  adrp x9,0x71052af000
710370de4c  ldr x10,[x9, #0x1b0]
710370de50  ldp x9,x10,[x10]
710370de54  sub x10,x10,x9
710370de58  asr x10,x10,#0x3
710370de5c  cmp x10,x8
710370de60  b.ls 0x710370df88
710370de64  ldr x8,[x9, x8, LSL #0x3]
710370de68  add x8,x8,#0x20
710370de6c  ldr x8,[x8]
710370de70  cbz x8,0x710370e044
710370de74  ldr x8,[x8, #0x10]
710370de78  cbz x8,0x710370e044
710370de7c  ldr x8,[x8, #0x10]
710370de80  cbz x8,0x710370e044
710370de84  ldr x8,[x28, #0x2100]
710370de88  cbz x8,0x710370df18
710370de8c  bl 0x71039c07b0
710370de90  adrp x8,0x7107447000
710370de94  ldr x8,[x8, #0xe8]
710370de98  sub x0,x0,x8
710370de9c  bl 0x71039c0c80
710370dea0  mov w10,#0xf7cf
710370dea4  movk w10,#0xe353, LSL #16
710370dea8  and x8,x0,#0xffffffff
710370deac  asr x9,x0,#0x20
710370deb0  mov x11,x10
710370deb4  mul x10,x9,x10
710370deb8  mul x11,x8,x11
710370debc  add x10,x10,x11, LSR #0x20
710370dec0  mov w11,#0x9ba5
710370dec4  movk w11,#0x20c4, LSL #16
710370dec8  mul x9,x9,x11
710370decc  mul x8,x8,x11
710370ded0  add x8,x8,w10, UXTW 
710370ded4  add x9,x9,x10, ASR #0x20
710370ded8  mov w10,#0x3e8
710370dedc  add x8,x9,x8, LSR #0x20
710370dee0  ldr x9,[x28, #0x2100]
710370dee4  asr x8,x8,#0x7
710370dee8  add x8,x8,x0, LSR #0x3f
710370deec  neg x9,x9
710370def0  madd x8,x8,x10,x9
710370def4  mov x9,#0x34db
710370def8  movk x9,#0xd7b6, LSL #16
710370defc  movk x9,#0xde82, LSL #32
710370df00  movk x9,#0x431b, LSL #48
710370df04  smulh x8,x8,x9
710370df08  asr x9,x8,#0x12
710370df0c  add x8,x9,x8, LSR #0x3f
710370df10  cmp x8,x23
710370df14  b.le 0x710370e044
710370df18  adrp x8,0x71052af000
710370df1c  ldrb w8,[x8, #0x1d8]
710370df20  cbz w8,0x710370dfa4
710370df24  adrp x8,0x71052af000
710370df28  ldr x0,[x8, #0x1d0]
710370df2c  bl 0x7101717960
710370df30  ldr w8,[x0]
710370df34  cbz w8,0x710370dfa4
710370df38  adrp x9,0x71052af000
710370df3c  ldr x10,[x9, #0x1b0]
710370df40  ldp x9,x10,[x10]
710370df44  sub x10,x10,x9
710370df48  asr x10,x10,#0x3
710370df4c  cmp x10,x8
710370df50  b.ls 0x710370dfb8
710370df54  ldr x8,[x9, x8, LSL #0x3]
710370df58  add x8,x8,#0x20
710370df5c  ldr x8,[x8]
710370df60  cbz x8,0x710370dfd0
710370df64  ldr x8,[x8, #0x10]
710370df68  cbz x8,0x710370dfd0
710370df6c  ldr x0,[x8, #0x10]
710370df70  b 0x710370dfd4
710370df74  adrp x8,0x71052af000
710370df78  add x8,x8,#0x138
710370df7c  ldr x8,[x8]
710370df80  cbnz x8,0x710370de74
710370df84  b 0x710370e044
710370df88  orr w2,wzr,#0xe0000003
710370df8c  adrp x0,0x710437b000
710370df90  add x0,x0,#0xda
710370df94  mov w1,#0x47
710370df98  mov w3,wzr
710370df9c  bl 0x71001b1300
710370dfa0  b 0x710370e044
710370dfa4  adrp x8,0x71052af000
710370dfa8  add x8,x8,#0x138
710370dfac  ldr x8,[x8]
710370dfb0  cbnz x8,0x710370df64
710370dfb4  b 0x710370dfd0
710370dfb8  orr w2,wzr,#0xe0000003
710370dfbc  adrp x0,0x710437b000
710370dfc0  add x0,x0,#0xda
710370dfc4  mov w1,#0x47
710370dfc8  mov w3,wzr
710370dfcc  bl 0x71001b1300
710370dfd0  mov x0,xzr
710370dfd4  mov w1,#0x8
710370dfd8  mov w2,wzr
710370dfdc  bl 0x71001d9090
710370dfe0  bl 0x71039c07b0
710370dfe4  adrp x8,0x7107447000
710370dfe8  ldr x8,[x8, #0xe8]
710370dfec  sub x0,x0,x8
710370dff0  bl 0x71039c0c80
710370dff4  mov w10,#0xf7cf
710370dff8  movk w10,#0xe353, LSL #16
710370dffc  and x8,x0,#0xffffffff
710370e000  asr x9,x0,#0x20
710370e004  mov x11,x10
710370e008  mul x10,x9,x10
710370e00c  mul x11,x8,x11
710370e010  add x10,x10,x11, LSR #0x20
710370e014  mov w11,#0x9ba5
710370e018  movk w11,#0x20c4, LSL #16
710370e01c  mul x9,x9,x11
710370e020  mul x8,x8,x11
710370e024  add x8,x8,w10, UXTW 
710370e028  add x9,x9,x10, ASR #0x20
710370e02c  add x8,x9,x8, LSR #0x20
710370e030  mov w9,#0x3e8
710370e034  asr x8,x8,#0x7
710370e038  add x8,x8,x0, LSR #0x3f
710370e03c  mul x8,x8,x9
710370e040  str x8,[x28, #0x2100]
710370e044  adrp x8,0x71052ac000
710370e048  ldr x0,[x8, #0x580]
710370e04c  cbz x0,0x710370e058
710370e050  mov w1,wzr
710370e054  bl 0x71000b68a0
710370e058  mov w0,#0x4b40
710370e05c  movk w0,#0x4c, LSL #16
710370e060  bl 0x71039c0d80
710370e064  ldr x8,[sp, #0x100]
710370e068  ldrb w8,[x8]
710370e06c  cbnz w8,0x710370c6a8
710370e070  mov x0,x20
710370e074  strb wzr,[x28, #0x8]
710370e078  bl 0x71039c1a40
710370e07c  mov x19,x28
710370e080  ldr x0,[x19, #0x10]!
710370e084  cbz x0,0x710370e098
710370e088  bl 0x710392eb40
710370e08c  stp xzr,xzr,[x19, #0x20]
710370e090  stp xzr,xzr,[x19, #0x10]
710370e094  stp xzr,xzr,[x19]
710370e098  mov x0,x20
710370e09c  bl 0x71039c1a50
710370e0a0  ldr x8,[x28, #0x2108]
710370e0a4  cbz x8,0x710370e0f8
710370e0a8  mov w9,#0xa040
710370e0ac  movk w9,#0x42, LSL #16
710370e0b0  add x19,x8,x9
710370e0b4  ldr x0,[x19]
710370e0b8  cbz x0,0x710370e0c8
710370e0bc  ldr x8,[x0]
710370e0c0  ldr x8,[x8, #0x20]
710370e0c4  blr x8
710370e0c8  str xzr,[x19]
710370e0cc  ldr x8,[x28, #0x2108]
710370e0d0  mov w9,#0xa048
710370e0d4  movk w9,#0x42, LSL #16
710370e0d8  add x19,x8,x9
710370e0dc  ldr x0,[x19]
710370e0e0  cbz x0,0x710370e0f0
710370e0e4  ldr x8,[x0]
710370e0e8  ldr x8,[x8, #0x20]
710370e0ec  blr x8
710370e0f0  str xzr,[x19]
710370e0f4  str xzr,[x28, #0x2108]
710370e0f8  ldr x23,[x28]
710370e0fc  cbz x23,0x710370e380
710370e100  ldr x0,[x23, #0x40]
710370e104  cbz x0,0x710370e134
710370e108  ldr x8,[x0]
710370e10c  ldr x8,[x8]
710370e110  blr x8
710370e114  adrp x8,0x710533a000
710370e118  ldr x0,[x8, #0x88]
710370e11c  cbz x0,0x710370e130
710370e120  ldr x8,[x0]
710370e124  ldr x1,[x23, #0x40]
710370e128  ldr x8,[x8, #0x30]
710370e12c  blr x8
710370e130  str xzr,[x23, #0x40]
710370e134  ldr x19,[x23, #0x50]
710370e138  cbz x19,0x710370e178
710370e13c  ldr x0,[x19, #0x8]
710370e140  cbz x0,0x710370e148
710370e144  bl 0x710392eb40
710370e148  str xzr,[x19, #0x8]
710370e14c  str wzr,[x19, #0x10]
710370e150  ldr x0,[x23, #0x50]
710370e154  bl 0x7103703d70
710370e158  adrp x8,0x710533a000
710370e15c  ldr x0,[x8, #0x88]
710370e160  cbz x0,0x710370e174
710370e164  ldr x8,[x0]
710370e168  ldr x1,[x23, #0x50]
710370e16c  ldr x8,[x8, #0x30]
710370e170  blr x8
710370e174  str xzr,[x23, #0x50]
710370e178  ldr x20,[x23, #0x48]
710370e17c  cbz x20,0x710370e2f8
710370e180  adrp x8,0x710533a000
710370e184  ldr x0,[x8, #0xb8]
710370e188  bl 0x7103700a90
710370e18c  ldr x8,[x20, #0x78]
710370e190  ldr x0,[x8]
710370e194  cbz x0,0x710370e1a4
710370e198  ldr x8,[x0]
710370e19c  ldr x8,[x8, #0x20]
710370e1a0  blr x8
710370e1a4  mov x21,x20
710370e1a8  ldr x8,[x21, #0x68]!
710370e1ac  ldr x0,[x8]
710370e1b0  cbz x0,0x710370e1c0
710370e1b4  ldr x8,[x0]
710370e1b8  ldr x8,[x8, #0x20]
710370e1bc  blr x8
710370e1c0  ldr x8,[x20, #0x60]
710370e1c4  ldr x0,[x8]
710370e1c8  cbz x0,0x710370e1d8
710370e1cc  ldr x8,[x0]
710370e1d0  ldr x8,[x8, #0x20]
710370e1d4  blr x8
710370e1d8  ldr x0,[x20, #0x28]
710370e1dc  cbz x0,0x710370e1ec
710370e1e0  ldr x8,[x0]
710370e1e4  ldr x8,[x8, #0x20]
710370e1e8  blr x8
710370e1ec  ldr x0,[x20, #0x20]
710370e1f0  cbz x0,0x710370e200
710370e1f4  ldr x8,[x0]
710370e1f8  ldr x8,[x8, #0x20]
710370e1fc  blr x8
710370e200  ldr x0,[x20, #0x30]
710370e204  cbz x0,0x710370e218
710370e208  mov x19,x20
710370e20c  ldr x1,[x19, #0x8]!
710370e210  bl 0x7100239af0
710370e214  b 0x710370e21c
710370e218  add x19,x20,#0x8
710370e21c  mov x0,x20
710370e220  str xzr,[x20, #0x10]
710370e224  bl 0x7103700d80
710370e228  ldr x0,[x20, #0x8]
710370e22c  ldr x8,[x0]
710370e230  ldr x8,[x8]
710370e234  blr x8
710370e238  adrp x24,0x710533a000
710370e23c  ldr x0,[x24, #0x88]
710370e240  cbz x0,0x710370e254
710370e244  ldr x8,[x0]
710370e248  ldr x1,[x19]
710370e24c  ldr x8,[x8, #0x30]
710370e250  blr x8
710370e254  ldr x22,[x20, #0x78]
710370e258  str xzr,[x20, #0x8]
710370e25c  str xzr,[x20, #0x78]
710370e260  cbz x22,0x710370e274
710370e264  add x0,x22,#0x8
710370e268  bl 0x710022e920
710370e26c  mov x0,x22
710370e270  bl 0x710392eb40
710370e274  ldr x22,[x20, #0x70]
710370e278  str xzr,[x20, #0x70]
710370e27c  cbz x22,0x710370e290
710370e280  add x0,x22,#0x8
710370e284  bl 0x710022e920
710370e288  mov x0,x22
710370e28c  bl 0x710392eb40
710370e290  mov x0,x21
710370e294  bl 0x71036fe470
710370e298  ldr x21,[x20, #0x60]
710370e29c  str xzr,[x20, #0x60]
710370e2a0  cbz x21,0x710370e2b4
710370e2a4  add x0,x21,#0x8
710370e2a8  bl 0x710022e920
710370e2ac  mov x0,x21
710370e2b0  bl 0x710392eb40
710370e2b4  ldr x21,[x20, #0x58]
710370e2b8  str xzr,[x20, #0x58]
710370e2bc  cbz x21,0x710370e2dc
710370e2c0  ldr x1,[x21, #0xe8]
710370e2c4  add x0,x21,#0xe0
710370e2c8  bl 0x710370e4c0
710370e2cc  add x0,x21,#0x8
710370e2d0  bl 0x710022e920
710370e2d4  mov x0,x21
710370e2d8  bl 0x710392eb40
710370e2dc  ldr x0,[x24, #0x88]
710370e2e0  cbz x0,0x710370e2f4
710370e2e4  ldr x8,[x0]
710370e2e8  ldr x1,[x23, #0x48]
710370e2ec  ldr x8,[x8, #0x30]
710370e2f0  blr x8
710370e2f4  str xzr,[x23, #0x48]
710370e2f8  ldr x20,[x28]
710370e2fc  ldr x19,[x20, #0x38]
710370e300  cbz x19,0x710370e378
710370e304  mov w8,#0xa268
710370e308  movk w8,#0x42, LSL #16
710370e30c  add x0,x19,x8
710370e310  bl 0x71039c26c0
710370e314  mov w8,#0xa068
710370e318  movk w8,#0x42, LSL #16
710370e31c  add x21,x19,x8
710370e320  adrp x8,0x710523b000
710370e324  add x8,x8,#0xe60
710370e328  str x8,[x21]
710370e32c  mov w8,#0xa260
710370e330  movk w8,#0x42, LSL #16
710370e334  ldr x0,[x19, x8, LSL #0x0]
710370e338  str xzr,[x19, x8, LSL #0x0]
710370e33c  cbz x0,0x710370e344
710370e340  bl 0x710392eb40
710370e344  adrp x8,0x710523b000
710370e348  add x8,x8,#0xe80
710370e34c  str x8,[x21]
710370e350  mov w8,#0xa070
710370e354  movk w8,#0x42, LSL #16
710370e358  ldr x0,[x19, x8, LSL #0x0]
710370e35c  str xzr,[x19, x8, LSL #0x0]
710370e360  cbz x0,0x710370e368
710370e364  bl 0x710392eb40
710370e368  ldr x0,[x20, #0x38]
710370e36c  cbz x0,0x710370e374
710370e370  bl 0x710392eb40
710370e374  str xzr,[x20, #0x38]
710370e378  str xzr,[x20, #0x38]
710370e37c  bl 0x71001b89e0
710370e380  mov w8,#0x2111
710370e384  mov w9,#0x1
710370e388  strb w9,[x28, x8, LSL ]
710370e38c  add sp,sp,#0x1b0
710370e390  ldp x29,x30,[sp, #0x60]
710370e394  ldp x20,x19,[sp, #0x50]
710370e398  ldp x22,x21,[sp, #0x40]
710370e39c  ldp x24,x23,[sp, #0x30]
710370e3a0  ldp x26,x25,[sp, #0x20]
710370e3a4  ldp x28,x27,[sp, #0x10]
710370e3a8  ldp d9,d8,[sp], #0x70
710370e3ac  ret
710370e3b0  bl 0x71039c2650
