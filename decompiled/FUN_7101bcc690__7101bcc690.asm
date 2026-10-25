// addr:      7101bcc690
// offset:    0x1bcc690
// name:      FUN_7101bcc690
// mangled:   
// size:      2344

7101bcc690  sub sp,sp,#0x110
7101bcc694  stp x28,x23,[sp, #0xd0]
7101bcc698  stp x22,x21,[sp, #0xe0]
7101bcc69c  stp x20,x19,[sp, #0xf0]
7101bcc6a0  stp x29,x30,[sp, #0x100]
7101bcc6a4  add x29,sp,#0x100
7101bcc6a8  mov x19,x0
7101bcc6ac  mov x0,sp
7101bcc6b0  mov w21,w4
7101bcc6b4  mov w22,w3
7101bcc6b8  mov x20,x2
7101bcc6bc  bl 0x7103776390
7101bcc6c0  cmp w22,#0x9
7101bcc6c4  b.cs 0x7101bcc6dc
7101bcc6c8  mov x23,x19
7101bcc6cc  str w22,[x23, #0x40]!
7101bcc6d0  str w21,[x23, #0x4]
7101bcc6d4  cbnz w22,0x7101bcc6f8
7101bcc6d8  b 0x7101bccbbc
7101bcc6dc  cmp w22,#0x0
7101bcc6e0  b.le 0x7101bccbb8
7101bcc6e4  cmp w22,#0x8
7101bcc6e8  mov w8,#0x8
7101bcc6ec  csel w8,w22,w8,lt
7101bcc6f0  add x23,x19,#0x40
7101bcc6f4  stp w8,w21,[x19, #0x40]
7101bcc6f8  adrp x1,0x7104401000
7101bcc6fc  add x1,x1,#0x320
7101bcc700  add x8,sp,#0x10
7101bcc704  mov x0,sp
7101bcc708  mov w2,wzr
7101bcc70c  bl 0x7103776640
7101bcc710  sub x0,x29,#0x60
7101bcc714  add x1,sp,#0x10
7101bcc718  bl 0x7103776390
7101bcc71c  ldr x0,[x19]
7101bcc720  sub x1,x29,#0x60
7101bcc724  mov x2,x20
7101bcc728  bl 0x7101bcb6b0
7101bcc72c  ldur x21,[x29, #-0x58]
7101bcc730  adrp x22,0x710523d000
7101bcc734  add x22,x22,#0x988
7101bcc738  stp x22,xzr,[x29, #-0x60]
7101bcc73c  cbz x21,0x7101bcc760
7101bcc740  ldr x0,[x21, #0x18]
7101bcc744  adrp x8,0x710523d000
7101bcc748  add x8,x8,#0x9a8
7101bcc74c  stp x8,xzr,[x21, #0x10]
7101bcc750  cbz x0,0x7101bcc758
7101bcc754  bl 0x710392eb40
7101bcc758  mov x0,x21
7101bcc75c  bl 0x710392eb40
7101bcc760  ldr x21,[sp, #0x18]
7101bcc764  stp x22,xzr,[sp, #0x10]
7101bcc768  cbz x21,0x7101bcc78c
7101bcc76c  ldr x0,[x21, #0x18]
7101bcc770  adrp x8,0x710523d000
7101bcc774  add x8,x8,#0x9a8
7101bcc778  stp x8,xzr,[x21, #0x10]
7101bcc77c  cbz x0,0x7101bcc784
7101bcc780  bl 0x710392eb40
7101bcc784  mov x0,x21
7101bcc788  bl 0x710392eb40
7101bcc78c  ldr w8,[x23]
7101bcc790  cmp w8,#0x2
7101bcc794  b.lt 0x7101bccbbc
7101bcc798  adrp x1,0x7104401000
7101bcc79c  add x1,x1,#0x320
7101bcc7a0  add x8,sp,#0x10
7101bcc7a4  mov x0,sp
7101bcc7a8  mov w2,#0x1
7101bcc7ac  bl 0x7103776640
7101bcc7b0  sub x0,x29,#0x60
7101bcc7b4  add x1,sp,#0x10
7101bcc7b8  bl 0x7103776390
7101bcc7bc  ldr x0,[x19, #0x8]
7101bcc7c0  sub x1,x29,#0x60
7101bcc7c4  mov x2,x20
7101bcc7c8  bl 0x7101bcb6b0
7101bcc7cc  ldur x21,[x29, #-0x58]
7101bcc7d0  stp x22,xzr,[x29, #-0x60]
7101bcc7d4  cbz x21,0x7101bcc7f8
7101bcc7d8  ldr x0,[x21, #0x18]
7101bcc7dc  adrp x8,0x710523d000
7101bcc7e0  add x8,x8,#0x9a8
7101bcc7e4  stp x8,xzr,[x21, #0x10]
7101bcc7e8  cbz x0,0x7101bcc7f0
7101bcc7ec  bl 0x710392eb40
7101bcc7f0  mov x0,x21
7101bcc7f4  bl 0x710392eb40
7101bcc7f8  ldr x21,[sp, #0x18]
7101bcc7fc  stp x22,xzr,[sp, #0x10]
7101bcc800  cbz x21,0x7101bcc824
7101bcc804  ldr x0,[x21, #0x18]
7101bcc808  adrp x8,0x710523d000
7101bcc80c  add x8,x8,#0x9a8
7101bcc810  stp x8,xzr,[x21, #0x10]
7101bcc814  cbz x0,0x7101bcc81c
7101bcc818  bl 0x710392eb40
7101bcc81c  mov x0,x21
7101bcc820  bl 0x710392eb40
7101bcc824  ldr w8,[x23]
7101bcc828  cmp w8,#0x3
7101bcc82c  b.lt 0x7101bccbbc
7101bcc830  adrp x1,0x7104401000
7101bcc834  add x1,x1,#0x320
7101bcc838  add x8,sp,#0x10
7101bcc83c  mov x0,sp
7101bcc840  mov w2,#0x2
7101bcc844  bl 0x7103776640
7101bcc848  sub x0,x29,#0x60
7101bcc84c  add x1,sp,#0x10
7101bcc850  bl 0x7103776390
7101bcc854  ldr x0,[x19, #0x10]
7101bcc858  sub x1,x29,#0x60
7101bcc85c  mov x2,x20
7101bcc860  bl 0x7101bcb6b0
7101bcc864  ldur x21,[x29, #-0x58]
7101bcc868  stp x22,xzr,[x29, #-0x60]
7101bcc86c  cbz x21,0x7101bcc890
7101bcc870  ldr x0,[x21, #0x18]
7101bcc874  adrp x8,0x710523d000
7101bcc878  add x8,x8,#0x9a8
7101bcc87c  stp x8,xzr,[x21, #0x10]
7101bcc880  cbz x0,0x7101bcc888
7101bcc884  bl 0x710392eb40
7101bcc888  mov x0,x21
7101bcc88c  bl 0x710392eb40
7101bcc890  ldr x21,[sp, #0x18]
7101bcc894  stp x22,xzr,[sp, #0x10]
7101bcc898  cbz x21,0x7101bcc8bc
7101bcc89c  ldr x0,[x21, #0x18]
7101bcc8a0  adrp x8,0x710523d000
7101bcc8a4  add x8,x8,#0x9a8
7101bcc8a8  stp x8,xzr,[x21, #0x10]
7101bcc8ac  cbz x0,0x7101bcc8b4
7101bcc8b0  bl 0x710392eb40
7101bcc8b4  mov x0,x21
7101bcc8b8  bl 0x710392eb40
7101bcc8bc  ldr w8,[x23]
7101bcc8c0  cmp w8,#0x4
7101bcc8c4  b.lt 0x7101bccbbc
7101bcc8c8  adrp x1,0x7104401000
7101bcc8cc  add x1,x1,#0x320
7101bcc8d0  add x8,sp,#0x10
7101bcc8d4  mov x0,sp
7101bcc8d8  orr w2,wzr,#0x3
7101bcc8dc  bl 0x7103776640
7101bcc8e0  sub x0,x29,#0x60
7101bcc8e4  add x1,sp,#0x10
7101bcc8e8  bl 0x7103776390
7101bcc8ec  ldr x0,[x19, #0x18]
7101bcc8f0  sub x1,x29,#0x60
7101bcc8f4  mov x2,x20
7101bcc8f8  bl 0x7101bcb6b0
7101bcc8fc  ldur x21,[x29, #-0x58]
7101bcc900  stp x22,xzr,[x29, #-0x60]
7101bcc904  cbz x21,0x7101bcc928
7101bcc908  ldr x0,[x21, #0x18]
7101bcc90c  adrp x8,0x710523d000
7101bcc910  add x8,x8,#0x9a8
7101bcc914  stp x8,xzr,[x21, #0x10]
7101bcc918  cbz x0,0x7101bcc920
7101bcc91c  bl 0x710392eb40
7101bcc920  mov x0,x21
7101bcc924  bl 0x710392eb40
7101bcc928  ldr x21,[sp, #0x18]
7101bcc92c  stp x22,xzr,[sp, #0x10]
7101bcc930  cbz x21,0x7101bcc954
7101bcc934  ldr x0,[x21, #0x18]
7101bcc938  adrp x8,0x710523d000
7101bcc93c  add x8,x8,#0x9a8
7101bcc940  stp x8,xzr,[x21, #0x10]
7101bcc944  cbz x0,0x7101bcc94c
7101bcc948  bl 0x710392eb40
7101bcc94c  mov x0,x21
7101bcc950  bl 0x710392eb40
7101bcc954  ldr w8,[x23]
7101bcc958  cmp w8,#0x5
7101bcc95c  b.lt 0x7101bccbbc
7101bcc960  adrp x1,0x7104401000
7101bcc964  add x1,x1,#0x320
7101bcc968  add x8,sp,#0x10
7101bcc96c  mov x0,sp
7101bcc970  mov w2,#0x4
7101bcc974  bl 0x7103776640
7101bcc978  sub x0,x29,#0x60
7101bcc97c  add x1,sp,#0x10
7101bcc980  bl 0x7103776390
7101bcc984  ldr x0,[x19, #0x20]
7101bcc988  sub x1,x29,#0x60
7101bcc98c  mov x2,x20
7101bcc990  bl 0x7101bcb6b0
7101bcc994  ldur x21,[x29, #-0x58]
7101bcc998  stp x22,xzr,[x29, #-0x60]
7101bcc99c  cbz x21,0x7101bcc9c0
7101bcc9a0  ldr x0,[x21, #0x18]
7101bcc9a4  adrp x8,0x710523d000
7101bcc9a8  add x8,x8,#0x9a8
7101bcc9ac  stp x8,xzr,[x21, #0x10]
7101bcc9b0  cbz x0,0x7101bcc9b8
7101bcc9b4  bl 0x710392eb40
7101bcc9b8  mov x0,x21
7101bcc9bc  bl 0x710392eb40
7101bcc9c0  ldr x21,[sp, #0x18]
7101bcc9c4  stp x22,xzr,[sp, #0x10]
7101bcc9c8  cbz x21,0x7101bcc9ec
7101bcc9cc  ldr x0,[x21, #0x18]
7101bcc9d0  adrp x8,0x710523d000
7101bcc9d4  add x8,x8,#0x9a8
7101bcc9d8  stp x8,xzr,[x21, #0x10]
7101bcc9dc  cbz x0,0x7101bcc9e4
7101bcc9e0  bl 0x710392eb40
7101bcc9e4  mov x0,x21
7101bcc9e8  bl 0x710392eb40
7101bcc9ec  ldr w8,[x23]
7101bcc9f0  cmp w8,#0x6
7101bcc9f4  b.lt 0x7101bccbbc
7101bcc9f8  adrp x1,0x7104401000
7101bcc9fc  add x1,x1,#0x320
7101bcca00  mov w2,#0x5
7101bcca04  add x8,sp,#0x10
7101bcca08  mov x0,sp
7101bcca0c  bl 0x7103776640
7101bcca10  sub x0,x29,#0x60
7101bcca14  add x1,sp,#0x10
7101bcca18  bl 0x7103776390
7101bcca1c  ldr x0,[x19, #0x28]
7101bcca20  sub x1,x29,#0x60
7101bcca24  mov x2,x20
7101bcca28  bl 0x7101bcb6b0
7101bcca2c  ldur x21,[x29, #-0x58]
7101bcca30  stp x22,xzr,[x29, #-0x60]
7101bcca34  cbz x21,0x7101bcca58
7101bcca38  ldr x0,[x21, #0x18]
7101bcca3c  adrp x8,0x710523d000
7101bcca40  add x8,x8,#0x9a8
7101bcca44  stp x8,xzr,[x21, #0x10]
7101bcca48  cbz x0,0x7101bcca50
7101bcca4c  bl 0x710392eb40
7101bcca50  mov x0,x21
7101bcca54  bl 0x710392eb40
7101bcca58  ldr x21,[sp, #0x18]
7101bcca5c  stp x22,xzr,[sp, #0x10]
7101bcca60  cbz x21,0x7101bcca84
7101bcca64  ldr x0,[x21, #0x18]
7101bcca68  adrp x8,0x710523d000
7101bcca6c  add x8,x8,#0x9a8
7101bcca70  stp x8,xzr,[x21, #0x10]
7101bcca74  cbz x0,0x7101bcca7c
7101bcca78  bl 0x710392eb40
7101bcca7c  mov x0,x21
7101bcca80  bl 0x710392eb40
7101bcca84  ldr w8,[x23]
7101bcca88  cmp w8,#0x7
7101bcca8c  b.lt 0x7101bccbbc
7101bcca90  adrp x1,0x7104401000
7101bcca94  add x1,x1,#0x320
7101bcca98  add x8,sp,#0x10
7101bcca9c  mov x0,sp
7101bccaa0  orr w2,wzr,#0x6
7101bccaa4  bl 0x7103776640
7101bccaa8  sub x0,x29,#0x60
7101bccaac  add x1,sp,#0x10
7101bccab0  bl 0x7103776390
7101bccab4  ldr x0,[x19, #0x30]
7101bccab8  sub x1,x29,#0x60
7101bccabc  mov x2,x20
7101bccac0  bl 0x7101bcb6b0
7101bccac4  ldur x21,[x29, #-0x58]
7101bccac8  stp x22,xzr,[x29, #-0x60]
7101bccacc  cbz x21,0x7101bccaf0
7101bccad0  ldr x0,[x21, #0x18]
7101bccad4  adrp x8,0x710523d000
7101bccad8  add x8,x8,#0x9a8
7101bccadc  stp x8,xzr,[x21, #0x10]
7101bccae0  cbz x0,0x7101bccae8
7101bccae4  bl 0x710392eb40
7101bccae8  mov x0,x21
7101bccaec  bl 0x710392eb40
7101bccaf0  ldr x21,[sp, #0x18]
7101bccaf4  stp x22,xzr,[sp, #0x10]
7101bccaf8  cbz x21,0x7101bccb1c
7101bccafc  ldr x0,[x21, #0x18]
7101bccb00  adrp x8,0x710523d000
7101bccb04  add x8,x8,#0x9a8
7101bccb08  stp x8,xzr,[x21, #0x10]
7101bccb0c  cbz x0,0x7101bccb14
7101bccb10  bl 0x710392eb40
7101bccb14  mov x0,x21
7101bccb18  bl 0x710392eb40
7101bccb1c  ldr w8,[x23]
7101bccb20  cmp w8,#0x8
7101bccb24  b.lt 0x7101bccbbc
7101bccb28  adrp x1,0x7104401000
7101bccb2c  add x1,x1,#0x320
7101bccb30  add x8,sp,#0x10
7101bccb34  mov x0,sp
7101bccb38  orr w2,wzr,#0x7
7101bccb3c  bl 0x7103776640
7101bccb40  sub x0,x29,#0x60
7101bccb44  add x1,sp,#0x10
7101bccb48  bl 0x7103776390
7101bccb4c  ldr x0,[x19, #0x38]
7101bccb50  sub x1,x29,#0x60
7101bccb54  mov x2,x20
7101bccb58  bl 0x7101bcb6b0
7101bccb5c  ldur x20,[x29, #-0x58]
7101bccb60  stp x22,xzr,[x29, #-0x60]
7101bccb64  cbz x20,0x7101bccb88
7101bccb68  ldr x0,[x20, #0x18]
7101bccb6c  adrp x8,0x710523d000
7101bccb70  add x8,x8,#0x9a8
7101bccb74  stp x8,xzr,[x20, #0x10]
7101bccb78  cbz x0,0x7101bccb80
7101bccb7c  bl 0x710392eb40
7101bccb80  mov x0,x20
7101bccb84  bl 0x710392eb40
7101bccb88  ldr x20,[sp, #0x18]
7101bccb8c  stp x22,xzr,[sp, #0x10]
7101bccb90  cbz x20,0x7101bccbbc
7101bccb94  ldr x0,[x20, #0x18]
7101bccb98  adrp x8,0x710523d000
7101bccb9c  add x8,x8,#0x9a8
7101bccba0  stp x8,xzr,[x20, #0x10]
7101bccba4  cbz x0,0x7101bccbac
7101bccba8  bl 0x710392eb40
7101bccbac  mov x0,x20
7101bccbb0  bl 0x710392eb40
7101bccbb4  b 0x7101bccbbc
7101bccbb8  stp wzr,w21,[x19, #0x40]
7101bccbbc  adrp x8,0x71042b4000
7101bccbc0  add x8,x8,#0x212
7101bccbc4  str x8,[sp, #0x18]
7101bccbc8  adrp x8,0x71043df000
7101bccbcc  add x8,x8,#0xfa4
7101bccbd0  str x8,[sp, #0x28]
7101bccbd4  mov w8,#0x2
7101bccbd8  str w8,[sp, #0x30]
7101bccbdc  orr w8,wzr,#0x3
7101bccbe0  str w8,[sp, #0x40]
7101bccbe4  adrp x8,0x7104454000
7101bccbe8  add x8,x8,#0x8a2
7101bccbec  str x8,[sp, #0x48]
7101bccbf0  mov w8,#0x4
7101bccbf4  str w8,[sp, #0x50]
7101bccbf8  adrp x8,0x7104318000
7101bccbfc  add x8,x8,#0xd47
7101bccc00  str x8,[sp, #0x58]
7101bccc04  mov w8,#0x5
7101bccc08  str w8,[sp, #0x60]
7101bccc0c  orr w8,wzr,#0x6
7101bccc10  str w8,[sp, #0x70]
7101bccc14  adrp x8,0x710438c000
7101bccc18  add x8,x8,#0x83f
7101bccc1c  adrp x9,0x7104401000
7101bccc20  add x9,x9,#0x32c
7101bccc24  str x9,[sp, #0x38]
7101bccc28  adrp x9,0x7104422000
7101bccc2c  add x9,x9,#0x230
7101bccc30  str x9,[sp, #0x68]
7101bccc34  str x8,[sp, #0x78]
7101bccc38  orr w8,wzr,#0x7
7101bccc3c  mov w21,#0x1
7101bccc40  str w8,[sp, #0x80]
7101bccc44  adrp x8,0x7104280000
7101bccc48  add x8,x8,#0x863
7101bccc4c  str x8,[sp, #0x88]
7101bccc50  mov w8,#0x8
7101bccc54  adrp x9,0x7104412000
7101bccc58  add x9,x9,#0x871
7101bccc5c  adrp x20,0x710523d000
7101bccc60  add x20,x20,#0x9e8
7101bccc64  mov w0,#0x10
7101bccc68  orr w1,wzr,#0x18
7101bccc6c  str wzr,[sp, #0x10]
7101bccc70  str w21,[sp, #0x20]
7101bccc74  str w8,[sp, #0x90]
7101bccc78  add x22,x19,#0x50
7101bccc7c  str x9,[sp, #0x98]
7101bccc80  stur x20,[x29, #-0x50]
7101bccc84  bl 0x710392e290
7101bccc88  cbnz x0,0x7101bcccd0
7101bccc8c  adrp x8,0x7105332000
7101bccc90  ldr x0,[x8, #0xf00]
7101bccc94  cbz x0,0x7101bccccc
7101bccc98  orr w8,wzr,#0x18
7101bccc9c  stur wzr,[x29, #-0x34]
7101bccca0  sub x1,x29,#0x34
7101bccca4  stur x8,[x29, #-0x40]
7101bccca8  ldr x8,[x0]
7101bcccac  ldr x8,[x8, #0x30]
7101bcccb0  sub x2,x29,#0x40
7101bcccb4  blr x8
7101bcccb8  tbz w0,#0x0,0x7101bccccc
7101bcccbc  mov w0,#0x10
7101bcccc0  orr w1,wzr,#0x18
7101bcccc4  bl 0x710392e290
7101bcccc8  cbnz x0,0x7101bcccd0
7101bccccc  mov x0,xzr
7101bcccd0  sub x8,x29,#0x50
7101bcccd4  cmp x22,x8
7101bcccd8  strb w21,[x0, #0x10]
7101bcccdc  stp xzr,xzr,[x0]
7101bccce0  stur x0,[x29, #-0x48]
7101bccce4  b.eq 0x7101bccd14
7101bccce8  ldr x9,[x0]
7101bcccec  ldr x10,[x19, #0x58]
7101bcccf0  str x9,[x10]
7101bcccf4  ldur x9,[x29, #-0x48]
7101bcccf8  ldr x9,[x9, #0x8]
7101bcccfc  ldr x10,[x19, #0x58]
7101bccd00  str x9,[x10, #0x8]
7101bccd04  ldur x0,[x29, #-0x48]
7101bccd08  ldrb w9,[x0, #0x10]
7101bccd0c  ldr x10,[x19, #0x58]
7101bccd10  strb w9,[x10, #0x10]
7101bccd14  add x9,x19,#0x60
7101bccd18  cmp x9,x8
7101bccd1c  b.eq 0x7101bccd4c
7101bccd20  ldr x8,[x0]
7101bccd24  ldr x9,[x19, #0x68]
7101bccd28  str x8,[x9]
7101bccd2c  ldur x8,[x29, #-0x48]
7101bccd30  ldr x8,[x8, #0x8]
7101bccd34  ldr x9,[x19, #0x68]
7101bccd38  str x8,[x9, #0x8]
7101bccd3c  ldur x0,[x29, #-0x48]
7101bccd40  ldrb w8,[x0, #0x10]
7101bccd44  ldr x9,[x19, #0x68]
7101bccd48  strb w8,[x9, #0x10]
7101bccd4c  add x9,x19,#0x70
7101bccd50  sub x8,x29,#0x50
7101bccd54  cmp x9,x8
7101bccd58  b.eq 0x7101bccd88
7101bccd5c  ldr x9,[x0]
7101bccd60  ldr x10,[x19, #0x78]
7101bccd64  str x9,[x10]
7101bccd68  ldur x9,[x29, #-0x48]
7101bccd6c  ldr x9,[x9, #0x8]
7101bccd70  ldr x10,[x19, #0x78]
7101bccd74  str x9,[x10, #0x8]
7101bccd78  ldur x0,[x29, #-0x48]
7101bccd7c  ldrb w9,[x0, #0x10]
7101bccd80  ldr x10,[x19, #0x78]
7101bccd84  strb w9,[x10, #0x10]
7101bccd88  add x9,x19,#0x80
7101bccd8c  cmp x9,x8
7101bccd90  b.eq 0x7101bccdc0
7101bccd94  ldr x8,[x0]
7101bccd98  ldr x9,[x19, #0x88]
7101bccd9c  str x8,[x9]
7101bccda0  ldur x8,[x29, #-0x48]
7101bccda4  ldr x8,[x8, #0x8]
7101bccda8  ldr x9,[x19, #0x88]
7101bccdac  str x8,[x9, #0x8]
7101bccdb0  ldur x0,[x29, #-0x48]
7101bccdb4  ldrb w8,[x0, #0x10]
7101bccdb8  ldr x9,[x19, #0x88]
7101bccdbc  strb w8,[x9, #0x10]
7101bccdc0  add x9,x19,#0x90
7101bccdc4  sub x8,x29,#0x50
7101bccdc8  cmp x9,x8
7101bccdcc  b.eq 0x7101bccdfc
7101bccdd0  ldr x9,[x0]
7101bccdd4  ldr x10,[x19, #0x98]
7101bccdd8  str x9,[x10]
7101bccddc  ldur x9,[x29, #-0x48]
7101bccde0  ldr x9,[x9, #0x8]
7101bccde4  ldr x10,[x19, #0x98]
7101bccde8  str x9,[x10, #0x8]
7101bccdec  ldur x0,[x29, #-0x48]
7101bccdf0  ldrb w9,[x0, #0x10]
7101bccdf4  ldr x10,[x19, #0x98]
7101bccdf8  strb w9,[x10, #0x10]
7101bccdfc  add x9,x19,#0xa0
7101bcce00  cmp x9,x8
7101bcce04  b.eq 0x7101bcce34
7101bcce08  ldr x8,[x0]
7101bcce0c  ldr x9,[x19, #0xa8]
7101bcce10  str x8,[x9]
7101bcce14  ldur x8,[x29, #-0x48]
7101bcce18  ldr x8,[x8, #0x8]
7101bcce1c  ldr x9,[x19, #0xa8]
7101bcce20  str x8,[x9, #0x8]
7101bcce24  ldur x0,[x29, #-0x48]
7101bcce28  ldrb w8,[x0, #0x10]
7101bcce2c  ldr x9,[x19, #0xa8]
7101bcce30  strb w8,[x9, #0x10]
7101bcce34  add x9,x19,#0xb0
7101bcce38  sub x8,x29,#0x50
7101bcce3c  cmp x9,x8
7101bcce40  b.eq 0x7101bcce70
7101bcce44  ldr x9,[x0]
7101bcce48  ldr x10,[x19, #0xb8]
7101bcce4c  str x9,[x10]
7101bcce50  ldur x9,[x29, #-0x48]
7101bcce54  ldr x9,[x9, #0x8]
7101bcce58  ldr x10,[x19, #0xb8]
7101bcce5c  str x9,[x10, #0x8]
7101bcce60  ldur x0,[x29, #-0x48]
7101bcce64  ldrb w9,[x0, #0x10]
7101bcce68  ldr x10,[x19, #0xb8]
7101bcce6c  strb w9,[x10, #0x10]
7101bcce70  add x9,x19,#0xc0
7101bcce74  cmp x9,x8
7101bcce78  b.eq 0x7101bccea8
7101bcce7c  ldr x8,[x0]
7101bcce80  ldr x9,[x19, #0xc8]
7101bcce84  str x8,[x9]
7101bcce88  ldur x8,[x29, #-0x48]
7101bcce8c  ldr x8,[x8, #0x8]
7101bcce90  ldr x9,[x19, #0xc8]
7101bcce94  str x8,[x9, #0x8]
7101bcce98  ldur x0,[x29, #-0x48]
7101bcce9c  ldrb w8,[x0, #0x10]
7101bccea0  ldr x9,[x19, #0xc8]
7101bccea4  strb w8,[x9, #0x10]
7101bccea8  add x8,x19,#0xd0
7101bcceac  sub x9,x29,#0x50
7101bcceb0  cmp x8,x9
7101bcceb4  b.eq 0x7101bccee4
7101bcceb8  ldr x8,[x0]
7101bccebc  ldr x9,[x19, #0xd8]
7101bccec0  str x8,[x9]
7101bccec4  ldur x8,[x29, #-0x48]
7101bccec8  ldr x8,[x8, #0x8]
7101bccecc  ldr x9,[x19, #0xd8]
7101bcced0  str x8,[x9, #0x8]
7101bcced4  ldur x0,[x29, #-0x48]
7101bcced8  ldrb w8,[x0, #0x10]
7101bccedc  ldr x9,[x19, #0xd8]
7101bccee0  strb w8,[x9, #0x10]
7101bccee4  stp x20,xzr,[x29, #-0x50]
7101bccee8  cbz x0,0x7101bccef0
7101bcceec  bl 0x710392eb40
7101bccef0  add x21,sp,#0x10
7101bccef4  add x22,x21,#0x90
7101bccef8  sub x23,x29,#0x50
7101bccefc  ldr w8,[x21]
7101bccf00  cmp w8,#0x9
7101bccf04  b.cs 0x7101bccfb4
7101bccf08  ldr x1,[x21, #0x8]
7101bccf0c  sub x8,x29,#0x50
7101bccf10  mov x0,sp
7101bccf14  bl 0x71037780e0
7101bccf18  ldrsw x8,[x21]
7101bccf1c  cmp w8,#0x9
7101bccf20  b.cs 0x7101bccfb4
7101bccf24  add x8,x19,x8, LSL #0x4
7101bccf28  add x9,x8,#0x50
7101bccf2c  cmp x9,x23
7101bccf30  b.eq 0x7101bccf4c
7101bccf34  ldur x9,[x29, #-0x48]
7101bccf38  stur xzr,[x29, #-0x48]
7101bccf3c  ldr x0,[x8, #0x58]
7101bccf40  str x9,[x8, #0x58]
7101bccf44  cbz x0,0x7101bccf4c
7101bccf48  bl 0x710392eb40
7101bccf4c  ldur x0,[x29, #-0x48]
7101bccf50  stp x20,xzr,[x29, #-0x50]
7101bccf54  cbz x0,0x7101bccf5c
7101bccf58  bl 0x710392eb40
7101bccf5c  add x21,x21,#0x10
7101bccf60  cmp x21,x22
7101bccf64  b.ne 0x7101bccefc
7101bccf68  ldr x19,[sp, #0x8]
7101bccf6c  adrp x8,0x710523d000
7101bccf70  add x8,x8,#0x988
7101bccf74  stp x8,xzr,[sp]
7101bccf78  cbz x19,0x7101bccf9c
7101bccf7c  ldr x0,[x19, #0x18]
7101bccf80  adrp x8,0x710523d000
7101bccf84  add x8,x8,#0x9a8
7101bccf88  stp x8,xzr,[x19, #0x10]
7101bccf8c  cbz x0,0x7101bccf94
7101bccf90  bl 0x710392eb40
7101bccf94  mov x0,x19
7101bccf98  bl 0x710392eb40
7101bccf9c  ldp x29,x30,[sp, #0x100]
7101bccfa0  ldp x20,x19,[sp, #0xf0]
7101bccfa4  ldp x22,x21,[sp, #0xe0]
7101bccfa8  ldp x28,x23,[sp, #0xd0]
7101bccfac  add sp,sp,#0x110
7101bccfb0  ret
7101bccfb4  bl 0x71039c2650
