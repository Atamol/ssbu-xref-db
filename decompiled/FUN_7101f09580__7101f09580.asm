// addr:      7101f09580
// offset:    0x1f09580
// name:      FUN_7101f09580
// mangled:   
// size:      22960

7101f09580  stp d15,d14,[sp, #-0xa0]!
7101f09584  stp d13,d12,[sp, #0x10]
7101f09588  stp d11,d10,[sp, #0x20]
7101f0958c  stp d9,d8,[sp, #0x30]
7101f09590  stp x28,x27,[sp, #0x40]
7101f09594  stp x26,x25,[sp, #0x50]
7101f09598  stp x24,x23,[sp, #0x60]
7101f0959c  stp x22,x21,[sp, #0x70]
7101f095a0  stp x20,x19,[sp, #0x80]
7101f095a4  stp x29,x30,[sp, #0x90]
7101f095a8  add x29,sp,#0x90
7101f095ac  sub sp,sp,#0x1d0
7101f095b0  mov w28,#0xffffffff
7101f095b4  mov x19,x1
7101f095b8  mov x26,x0
7101f095bc  str wzr,[x0, #0x2a4]
7101f095c0  stp xzr,xzr,[x0, #0x18]
7101f095c4  stp xzr,xzr,[x0, #0x8]
7101f095c8  mov w2,#0x27c
7101f095cc  mov w1,wzr
7101f095d0  str x0,[x0]
7101f095d4  str x28,[x0, #0x2a8]
7101f095d8  str w28,[x0, #0x2b0]
7101f095dc  add x0,x0,#0x28
7101f095e0  strb wzr,[x26, #0x2b4]
7101f095e4  bl 0x71039c02a0
7101f095e8  adrp x8,0x7104742000
7101f095ec  add x8,x8,#0xdbb
7101f095f0  str x8,[x26, #0x2d0]
7101f095f4  orr w8,wzr,#0xffffff
7101f095f8  add x9,x26,#0x2c8
7101f095fc  add x20,x26,#0x300
7101f09600  str w8,[x26, #0x2d8]
7101f09604  add x8,x26,#0x318
7101f09608  str wzr,[x26, #0x2b8]
7101f0960c  str x19,[x26, #0x2c0]
7101f09610  str x9,[x26, #0x2c8]
7101f09614  add x0,x26,#0x338
7101f09618  str xzr,[x26, #0x2f0]
7101f0961c  str xzr,[x26, #0x2e8]
7101f09620  str xzr,[x26, #0x2e0]
7101f09624  str xzr,[x26, #0x308]
7101f09628  str xzr,[x26, #0x300]
7101f0962c  str x20,[x26, #0x2f8]
7101f09630  str xzr,[x26, #0x320]
7101f09634  str xzr,[x26, #0x318]
7101f09638  str x19,[sp, #0x30]
7101f0963c  stp x8,x9,[sp, #0x10]
7101f09640  str x8,[x26, #0x310]
7101f09644  mov w8,#0x1
7101f09648  str w8,[x26, #0x328]
7101f0964c  adrp x8,0x710532f000
7101f09650  ldr x8,[x8, #0x840]
7101f09654  ldr x8,[x8, #0x8]
7101f09658  ldr x8,[x8, #0xb8]
7101f0965c  str x8,[x26, #0x330]
7101f09660  bl 0x7101f387a0
7101f09664  adrp x8,0x71050b4000
7101f09668  add x8,x8,#0x10
7101f0966c  mov w1,#0x68
7101f09670  mov w0,#0x10
7101f09674  str x8,[x26, #0x348]
7101f09678  bl 0x710392e290
7101f0967c  mov x22,x0
7101f09680  cbnz x0,0x7101f096cc
7101f09684  adrp x8,0x7105332000
7101f09688  ldr x0,[x8, #0xf00]
7101f0968c  cbz x0,0x7101f096c8
7101f09690  mov w8,#0x68
7101f09694  stur wzr,[x29, #-0xe0]
7101f09698  sub x1,x29,#0xe0
7101f0969c  str x8,[sp, #0x50]
7101f096a0  ldr x8,[x0]
7101f096a4  ldr x8,[x8, #0x30]
7101f096a8  add x2,sp,#0x50
7101f096ac  blr x8
7101f096b0  tbz w0,#0x0,0x7101f096c8
7101f096b4  mov w1,#0x68
7101f096b8  mov w0,#0x10
7101f096bc  bl 0x710392e290
7101f096c0  mov x22,x0
7101f096c4  cbnz x0,0x7101f096cc
7101f096c8  mov x22,xzr
7101f096cc  mov w0,#0x10
7101f096d0  mov w1,#0x8
7101f096d4  bl 0x710392e290
7101f096d8  mov x23,x0
7101f096dc  cbnz x0,0x7101f09728
7101f096e0  adrp x8,0x7105332000
7101f096e4  ldr x0,[x8, #0xf00]
7101f096e8  cbz x0,0x7101f09724
7101f096ec  mov w8,#0x8
7101f096f0  stur wzr,[x29, #-0xe0]
7101f096f4  sub x1,x29,#0xe0
7101f096f8  str x8,[sp, #0x50]
7101f096fc  ldr x8,[x0]
7101f09700  ldr x8,[x8, #0x30]
7101f09704  add x2,sp,#0x50
7101f09708  blr x8
7101f0970c  tbz w0,#0x0,0x7101f09724
7101f09710  mov w0,#0x10
7101f09714  mov w1,#0x8
7101f09718  bl 0x710392e290
7101f0971c  mov x23,x0
7101f09720  cbnz x0,0x7101f09728
7101f09724  mov x23,xzr
7101f09728  mov x0,x23
7101f0972c  bl 0x7103773200
7101f09730  mov x0,x22
7101f09734  str x23,[x22]
7101f09738  str xzr,[x22, #0x10]
7101f0973c  stp xzr,xzr,[x22, #0x28]
7101f09740  stp xzr,xzr,[x22, #0x18]
7101f09744  str xzr,[x0, #0x8]!
7101f09748  bl 0x7103776290
7101f0974c  adrp x19,0x710523d000
7101f09750  add x19,x19,#0x9a8
7101f09754  mov w0,#0x10
7101f09758  mov w1,#0x20
7101f0975c  str x19,[x22, #0x18]
7101f09760  bl 0x710392e290
7101f09764  cbnz x0,0x7101f097ac
7101f09768  adrp x8,0x7105332000
7101f0976c  ldr x0,[x8, #0xf00]
7101f09770  cbz x0,0x7101f097a8
7101f09774  mov w8,#0x20
7101f09778  stur wzr,[x29, #-0xe0]
7101f0977c  sub x1,x29,#0xe0
7101f09780  str x8,[sp, #0x50]
7101f09784  ldr x8,[x0]
7101f09788  ldr x8,[x8, #0x30]
7101f0978c  add x2,sp,#0x50
7101f09790  blr x8
7101f09794  tbz w0,#0x0,0x7101f097a8
7101f09798  mov w0,#0x10
7101f0979c  mov w1,#0x20
7101f097a0  bl 0x710392e290
7101f097a4  cbnz x0,0x7101f097ac
7101f097a8  mov x0,xzr
7101f097ac  stp xzr,xzr,[x0, #0x10]
7101f097b0  mov w1,#0x20
7101f097b4  stp xzr,xzr,[x0]
7101f097b8  stp x0,x19,[x22, #0x20]
7101f097bc  mov w0,#0x10
7101f097c0  bl 0x710392e290
7101f097c4  cbnz x0,0x7101f0980c
7101f097c8  adrp x8,0x7105332000
7101f097cc  ldr x0,[x8, #0xf00]
7101f097d0  cbz x0,0x7101f09808
7101f097d4  mov w8,#0x20
7101f097d8  stur wzr,[x29, #-0xe0]
7101f097dc  sub x1,x29,#0xe0
7101f097e0  str x8,[sp, #0x50]
7101f097e4  ldr x8,[x0]
7101f097e8  ldr x8,[x8, #0x30]
7101f097ec  add x2,sp,#0x50
7101f097f0  blr x8
7101f097f4  tbz w0,#0x0,0x7101f09808
7101f097f8  mov w0,#0x10
7101f097fc  mov w1,#0x20
7101f09800  bl 0x710392e290
7101f09804  cbnz x0,0x7101f0980c
7101f09808  mov x0,xzr
7101f0980c  stp xzr,xzr,[x0, #0x10]
7101f09810  adrp x8,0x71050b3000
7101f09814  add x8,x8,#0xff0
7101f09818  stp xzr,xzr,[x0]
7101f0981c  mov w1,#0x340
7101f09820  stur xzr,[x22, #0x5f]
7101f09824  stp x0,xzr,[x22, #0x30]
7101f09828  mov w0,#0x10
7101f0982c  stp xzr,xzr,[x22, #0x50]
7101f09830  stp xzr,xzr,[x22, #0x40]
7101f09834  str x22,[x26, #0x350]
7101f09838  str x8,[x26, #0x358]
7101f0983c  bl 0x710392e290
7101f09840  mov x22,x0
7101f09844  cbnz x0,0x7101f09890
7101f09848  adrp x8,0x7105332000
7101f0984c  ldr x0,[x8, #0xf00]
7101f09850  cbz x0,0x7101f0988c
7101f09854  mov w8,#0x340
7101f09858  stur wzr,[x29, #-0xe0]
7101f0985c  sub x1,x29,#0xe0
7101f09860  str x8,[sp, #0x50]
7101f09864  ldr x8,[x0]
7101f09868  ldr x8,[x8, #0x30]
7101f0986c  add x2,sp,#0x50
7101f09870  blr x8
7101f09874  tbz w0,#0x0,0x7101f0988c
7101f09878  mov w1,#0x340
7101f0987c  mov w0,#0x10
7101f09880  bl 0x710392e290
7101f09884  mov x22,x0
7101f09888  cbnz x0,0x7101f09890
7101f0988c  mov x22,xzr
7101f09890  mov w0,#0x10
7101f09894  mov w1,#0x8
7101f09898  bl 0x710392e290
7101f0989c  mov x23,x0
7101f098a0  cbnz x0,0x7101f098ec
7101f098a4  adrp x8,0x7105332000
7101f098a8  ldr x0,[x8, #0xf00]
7101f098ac  cbz x0,0x7101f098e8
7101f098b0  mov w8,#0x8
7101f098b4  stur wzr,[x29, #-0xe0]
7101f098b8  sub x1,x29,#0xe0
7101f098bc  str x8,[sp, #0x50]
7101f098c0  ldr x8,[x0]
7101f098c4  ldr x8,[x8, #0x30]
7101f098c8  add x2,sp,#0x50
7101f098cc  blr x8
7101f098d0  tbz w0,#0x0,0x7101f098e8
7101f098d4  mov w0,#0x10
7101f098d8  mov w1,#0x8
7101f098dc  bl 0x710392e290
7101f098e0  mov x23,x0
7101f098e4  cbnz x0,0x7101f098ec
7101f098e8  mov x23,xzr
7101f098ec  mov x0,x23
7101f098f0  bl 0x7103773200
7101f098f4  add x0,x22,#0x10
7101f098f8  mov w2,#0x158
7101f098fc  mov w1,wzr
7101f09900  str x23,[x22]
7101f09904  bl 0x71039c02a0
7101f09908  mov w0,#0x10
7101f0990c  mov w1,#0x20
7101f09910  str x19,[x22, #0x8]
7101f09914  bl 0x710392e290
7101f09918  cbnz x0,0x7101f09960
7101f0991c  adrp x8,0x7105332000
7101f09920  ldr x0,[x8, #0xf00]
7101f09924  cbz x0,0x7101f0995c
7101f09928  mov w8,#0x20
7101f0992c  stur wzr,[x29, #-0xe0]
7101f09930  sub x1,x29,#0xe0
7101f09934  str x8,[sp, #0x50]
7101f09938  ldr x8,[x0]
7101f0993c  ldr x8,[x8, #0x30]
7101f09940  add x2,sp,#0x50
7101f09944  blr x8
7101f09948  tbz w0,#0x0,0x7101f0995c
7101f0994c  mov w0,#0x10
7101f09950  mov w1,#0x20
7101f09954  bl 0x710392e290
7101f09958  cbnz x0,0x7101f09960
7101f0995c  mov x0,xzr
7101f09960  stp xzr,xzr,[x0, #0x10]
7101f09964  mov w1,#0x20
7101f09968  stp xzr,xzr,[x0]
7101f0996c  stp x0,x19,[x22, #0x10]
7101f09970  mov w0,#0x10
7101f09974  bl 0x710392e290
7101f09978  cbnz x0,0x7101f099c0
7101f0997c  adrp x8,0x7105332000
7101f09980  ldr x0,[x8, #0xf00]
7101f09984  cbz x0,0x7101f099bc
7101f09988  mov w8,#0x20
7101f0998c  stur wzr,[x29, #-0xe0]
7101f09990  sub x1,x29,#0xe0
7101f09994  str x8,[sp, #0x50]
7101f09998  ldr x8,[x0]
7101f0999c  ldr x8,[x8, #0x30]
7101f099a0  add x2,sp,#0x50
7101f099a4  blr x8
7101f099a8  tbz w0,#0x0,0x7101f099bc
7101f099ac  mov w0,#0x10
7101f099b0  mov w1,#0x20
7101f099b4  bl 0x710392e290
7101f099b8  cbnz x0,0x7101f099c0
7101f099bc  mov x0,xzr
7101f099c0  stp xzr,xzr,[x0, #0x10]
7101f099c4  mov w1,#0x20
7101f099c8  stp xzr,xzr,[x0]
7101f099cc  stp x0,x19,[x22, #0x20]
7101f099d0  mov w0,#0x10
7101f099d4  bl 0x710392e290
7101f099d8  cbnz x0,0x7101f09a20
7101f099dc  adrp x8,0x7105332000
7101f099e0  ldr x0,[x8, #0xf00]
7101f099e4  cbz x0,0x7101f09a1c
7101f099e8  mov w8,#0x20
7101f099ec  stur wzr,[x29, #-0xe0]
7101f099f0  sub x1,x29,#0xe0
7101f099f4  str x8,[sp, #0x50]
7101f099f8  ldr x8,[x0]
7101f099fc  ldr x8,[x8, #0x30]
7101f09a00  add x2,sp,#0x50
7101f09a04  blr x8
7101f09a08  tbz w0,#0x0,0x7101f09a1c
7101f09a0c  mov w0,#0x10
7101f09a10  mov w1,#0x20
7101f09a14  bl 0x710392e290
7101f09a18  cbnz x0,0x7101f09a20
7101f09a1c  mov x0,xzr
7101f09a20  stp xzr,xzr,[x0, #0x10]
7101f09a24  mov w1,#0x20
7101f09a28  stp xzr,xzr,[x0]
7101f09a2c  stp x0,x19,[x22, #0x30]
7101f09a30  mov w0,#0x10
7101f09a34  bl 0x710392e290
7101f09a38  cbnz x0,0x7101f09a80
7101f09a3c  adrp x8,0x7105332000
7101f09a40  ldr x0,[x8, #0xf00]
7101f09a44  cbz x0,0x7101f09a7c
7101f09a48  mov w8,#0x20
7101f09a4c  stur wzr,[x29, #-0xe0]
7101f09a50  sub x1,x29,#0xe0
7101f09a54  str x8,[sp, #0x50]
7101f09a58  ldr x8,[x0]
7101f09a5c  ldr x8,[x8, #0x30]
7101f09a60  add x2,sp,#0x50
7101f09a64  blr x8
7101f09a68  tbz w0,#0x0,0x7101f09a7c
7101f09a6c  mov w0,#0x10
7101f09a70  mov w1,#0x20
7101f09a74  bl 0x710392e290
7101f09a78  cbnz x0,0x7101f09a80
7101f09a7c  mov x0,xzr
7101f09a80  stp xzr,xzr,[x0, #0x10]
7101f09a84  mov w1,#0x20
7101f09a88  stp xzr,xzr,[x0]
7101f09a8c  stp x0,x19,[x22, #0x40]
7101f09a90  mov w0,#0x10
7101f09a94  bl 0x710392e290
7101f09a98  cbnz x0,0x7101f09ae0
7101f09a9c  adrp x8,0x7105332000
7101f09aa0  ldr x0,[x8, #0xf00]
7101f09aa4  cbz x0,0x7101f09adc
7101f09aa8  mov w8,#0x20
7101f09aac  stur wzr,[x29, #-0xe0]
7101f09ab0  sub x1,x29,#0xe0
7101f09ab4  str x8,[sp, #0x50]
7101f09ab8  ldr x8,[x0]
7101f09abc  ldr x8,[x8, #0x30]
7101f09ac0  add x2,sp,#0x50
7101f09ac4  blr x8
7101f09ac8  tbz w0,#0x0,0x7101f09adc
7101f09acc  mov w0,#0x10
7101f09ad0  mov w1,#0x20
7101f09ad4  bl 0x710392e290
7101f09ad8  cbnz x0,0x7101f09ae0
7101f09adc  mov x0,xzr
7101f09ae0  stp xzr,xzr,[x0, #0x10]
7101f09ae4  mov w1,#0x20
7101f09ae8  stp xzr,xzr,[x0]
7101f09aec  stp x0,x19,[x22, #0x50]
7101f09af0  mov w0,#0x10
7101f09af4  bl 0x710392e290
7101f09af8  cbnz x0,0x7101f09b40
7101f09afc  adrp x8,0x7105332000
7101f09b00  ldr x0,[x8, #0xf00]
7101f09b04  cbz x0,0x7101f09b3c
7101f09b08  mov w8,#0x20
7101f09b0c  stur wzr,[x29, #-0xe0]
7101f09b10  sub x1,x29,#0xe0
7101f09b14  str x8,[sp, #0x50]
7101f09b18  ldr x8,[x0]
7101f09b1c  ldr x8,[x8, #0x30]
7101f09b20  add x2,sp,#0x50
7101f09b24  blr x8
7101f09b28  tbz w0,#0x0,0x7101f09b3c
7101f09b2c  mov w0,#0x10
7101f09b30  mov w1,#0x20
7101f09b34  bl 0x710392e290
7101f09b38  cbnz x0,0x7101f09b40
7101f09b3c  mov x0,xzr
7101f09b40  stp xzr,xzr,[x0, #0x10]
7101f09b44  mov w1,#0x20
7101f09b48  stp xzr,xzr,[x0]
7101f09b4c  stp x0,x19,[x22, #0x60]
7101f09b50  mov w0,#0x10
7101f09b54  bl 0x710392e290
7101f09b58  cbnz x0,0x7101f09ba0
7101f09b5c  adrp x8,0x7105332000
7101f09b60  ldr x0,[x8, #0xf00]
7101f09b64  cbz x0,0x7101f09b9c
7101f09b68  mov w8,#0x20
7101f09b6c  stur wzr,[x29, #-0xe0]
7101f09b70  sub x1,x29,#0xe0
7101f09b74  str x8,[sp, #0x50]
7101f09b78  ldr x8,[x0]
7101f09b7c  ldr x8,[x8, #0x30]
7101f09b80  add x2,sp,#0x50
7101f09b84  blr x8
7101f09b88  tbz w0,#0x0,0x7101f09b9c
7101f09b8c  mov w0,#0x10
7101f09b90  mov w1,#0x20
7101f09b94  bl 0x710392e290
7101f09b98  cbnz x0,0x7101f09ba0
7101f09b9c  mov x0,xzr
7101f09ba0  stp xzr,xzr,[x0, #0x10]
7101f09ba4  mov w1,#0x20
7101f09ba8  stp xzr,xzr,[x0]
7101f09bac  stp x0,x19,[x22, #0x70]
7101f09bb0  mov w0,#0x10
7101f09bb4  bl 0x710392e290
7101f09bb8  cbnz x0,0x7101f09c00
7101f09bbc  adrp x8,0x7105332000
7101f09bc0  ldr x0,[x8, #0xf00]
7101f09bc4  cbz x0,0x7101f09bfc
7101f09bc8  mov w8,#0x20
7101f09bcc  stur wzr,[x29, #-0xe0]
7101f09bd0  sub x1,x29,#0xe0
7101f09bd4  str x8,[sp, #0x50]
7101f09bd8  ldr x8,[x0]
7101f09bdc  ldr x8,[x8, #0x30]
7101f09be0  add x2,sp,#0x50
7101f09be4  blr x8
7101f09be8  tbz w0,#0x0,0x7101f09bfc
7101f09bec  mov w0,#0x10
7101f09bf0  mov w1,#0x20
7101f09bf4  bl 0x710392e290
7101f09bf8  cbnz x0,0x7101f09c00
7101f09bfc  mov x0,xzr
7101f09c00  stp xzr,xzr,[x0, #0x10]
7101f09c04  mov w1,#0x20
7101f09c08  stp xzr,xzr,[x0]
7101f09c0c  stp x0,x19,[x22, #0x80]
7101f09c10  mov w0,#0x10
7101f09c14  bl 0x710392e290
7101f09c18  cbnz x0,0x7101f09c60
7101f09c1c  adrp x8,0x7105332000
7101f09c20  ldr x0,[x8, #0xf00]
7101f09c24  cbz x0,0x7101f09c5c
7101f09c28  mov w8,#0x20
7101f09c2c  stur wzr,[x29, #-0xe0]
7101f09c30  sub x1,x29,#0xe0
7101f09c34  str x8,[sp, #0x50]
7101f09c38  ldr x8,[x0]
7101f09c3c  ldr x8,[x8, #0x30]
7101f09c40  add x2,sp,#0x50
7101f09c44  blr x8
7101f09c48  tbz w0,#0x0,0x7101f09c5c
7101f09c4c  mov w0,#0x10
7101f09c50  mov w1,#0x20
7101f09c54  bl 0x710392e290
7101f09c58  cbnz x0,0x7101f09c60
7101f09c5c  mov x0,xzr
7101f09c60  stp xzr,xzr,[x0, #0x10]
7101f09c64  mov w1,#0x20
7101f09c68  stp xzr,xzr,[x0]
7101f09c6c  stp x0,x19,[x22, #0x90]
7101f09c70  mov w0,#0x10
7101f09c74  bl 0x710392e290
7101f09c78  cbnz x0,0x7101f09cc0
7101f09c7c  adrp x8,0x7105332000
7101f09c80  ldr x0,[x8, #0xf00]
7101f09c84  cbz x0,0x7101f09cbc
7101f09c88  mov w8,#0x20
7101f09c8c  stur wzr,[x29, #-0xe0]
7101f09c90  sub x1,x29,#0xe0
7101f09c94  str x8,[sp, #0x50]
7101f09c98  ldr x8,[x0]
7101f09c9c  ldr x8,[x8, #0x30]
7101f09ca0  add x2,sp,#0x50
7101f09ca4  blr x8
7101f09ca8  tbz w0,#0x0,0x7101f09cbc
7101f09cac  mov w0,#0x10
7101f09cb0  mov w1,#0x20
7101f09cb4  bl 0x710392e290
7101f09cb8  cbnz x0,0x7101f09cc0
7101f09cbc  mov x0,xzr
7101f09cc0  stp xzr,xzr,[x0, #0x10]
7101f09cc4  mov w1,#0x20
7101f09cc8  stp xzr,xzr,[x0]
7101f09ccc  stp x0,x19,[x22, #0xa0]
7101f09cd0  mov w0,#0x10
7101f09cd4  bl 0x710392e290
7101f09cd8  cbnz x0,0x7101f09d20
7101f09cdc  adrp x8,0x7105332000
7101f09ce0  ldr x0,[x8, #0xf00]
7101f09ce4  cbz x0,0x7101f09d1c
7101f09ce8  mov w8,#0x20
7101f09cec  stur wzr,[x29, #-0xe0]
7101f09cf0  sub x1,x29,#0xe0
7101f09cf4  str x8,[sp, #0x50]
7101f09cf8  ldr x8,[x0]
7101f09cfc  ldr x8,[x8, #0x30]
7101f09d00  add x2,sp,#0x50
7101f09d04  blr x8
7101f09d08  tbz w0,#0x0,0x7101f09d1c
7101f09d0c  mov w0,#0x10
7101f09d10  mov w1,#0x20
7101f09d14  bl 0x710392e290
7101f09d18  cbnz x0,0x7101f09d20
7101f09d1c  mov x0,xzr
7101f09d20  stp xzr,xzr,[x0, #0x10]
7101f09d24  mov w1,#0x20
7101f09d28  stp xzr,xzr,[x0]
7101f09d2c  stp x0,x19,[x22, #0xb0]
7101f09d30  mov w0,#0x10
7101f09d34  bl 0x710392e290
7101f09d38  cbnz x0,0x7101f09d80
7101f09d3c  adrp x8,0x7105332000
7101f09d40  ldr x0,[x8, #0xf00]
7101f09d44  cbz x0,0x7101f09d7c
7101f09d48  mov w8,#0x20
7101f09d4c  stur wzr,[x29, #-0xe0]
7101f09d50  sub x1,x29,#0xe0
7101f09d54  str x8,[sp, #0x50]
7101f09d58  ldr x8,[x0]
7101f09d5c  ldr x8,[x8, #0x30]
7101f09d60  add x2,sp,#0x50
7101f09d64  blr x8
7101f09d68  tbz w0,#0x0,0x7101f09d7c
7101f09d6c  mov w0,#0x10
7101f09d70  mov w1,#0x20
7101f09d74  bl 0x710392e290
7101f09d78  cbnz x0,0x7101f09d80
7101f09d7c  mov x0,xzr
7101f09d80  stp xzr,xzr,[x0, #0x10]
7101f09d84  mov w1,#0x20
7101f09d88  stp xzr,xzr,[x0]
7101f09d8c  stp x0,x19,[x22, #0xc0]
7101f09d90  mov w0,#0x10
7101f09d94  bl 0x710392e290
7101f09d98  cbnz x0,0x7101f09de0
7101f09d9c  adrp x8,0x7105332000
7101f09da0  ldr x0,[x8, #0xf00]
7101f09da4  cbz x0,0x7101f09ddc
7101f09da8  mov w8,#0x20
7101f09dac  stur wzr,[x29, #-0xe0]
7101f09db0  sub x1,x29,#0xe0
7101f09db4  str x8,[sp, #0x50]
7101f09db8  ldr x8,[x0]
7101f09dbc  ldr x8,[x8, #0x30]
7101f09dc0  add x2,sp,#0x50
7101f09dc4  blr x8
7101f09dc8  tbz w0,#0x0,0x7101f09ddc
7101f09dcc  mov w0,#0x10
7101f09dd0  mov w1,#0x20
7101f09dd4  bl 0x710392e290
7101f09dd8  cbnz x0,0x7101f09de0
7101f09ddc  mov x0,xzr
7101f09de0  stp xzr,xzr,[x0, #0x10]
7101f09de4  mov w1,#0x20
7101f09de8  stp xzr,xzr,[x0]
7101f09dec  stp x0,x19,[x22, #0xd0]
7101f09df0  mov w0,#0x10
7101f09df4  bl 0x710392e290
7101f09df8  cbnz x0,0x7101f09e40
7101f09dfc  adrp x8,0x7105332000
7101f09e00  ldr x0,[x8, #0xf00]
7101f09e04  cbz x0,0x7101f09e3c
7101f09e08  mov w8,#0x20
7101f09e0c  stur wzr,[x29, #-0xe0]
7101f09e10  sub x1,x29,#0xe0
7101f09e14  str x8,[sp, #0x50]
7101f09e18  ldr x8,[x0]
7101f09e1c  ldr x8,[x8, #0x30]
7101f09e20  add x2,sp,#0x50
7101f09e24  blr x8
7101f09e28  tbz w0,#0x0,0x7101f09e3c
7101f09e2c  mov w0,#0x10
7101f09e30  mov w1,#0x20
7101f09e34  bl 0x710392e290
7101f09e38  cbnz x0,0x7101f09e40
7101f09e3c  mov x0,xzr
7101f09e40  stp xzr,xzr,[x0, #0x10]
7101f09e44  mov w1,#0x20
7101f09e48  stp xzr,xzr,[x0]
7101f09e4c  stp x0,x19,[x22, #0xe0]
7101f09e50  mov w0,#0x10
7101f09e54  bl 0x710392e290
7101f09e58  cbnz x0,0x7101f09ea0
7101f09e5c  adrp x8,0x7105332000
7101f09e60  ldr x0,[x8, #0xf00]
7101f09e64  cbz x0,0x7101f09e9c
7101f09e68  mov w8,#0x20
7101f09e6c  stur wzr,[x29, #-0xe0]
7101f09e70  sub x1,x29,#0xe0
7101f09e74  str x8,[sp, #0x50]
7101f09e78  ldr x8,[x0]
7101f09e7c  ldr x8,[x8, #0x30]
7101f09e80  add x2,sp,#0x50
7101f09e84  blr x8
7101f09e88  tbz w0,#0x0,0x7101f09e9c
7101f09e8c  mov w0,#0x10
7101f09e90  mov w1,#0x20
7101f09e94  bl 0x710392e290
7101f09e98  cbnz x0,0x7101f09ea0
7101f09e9c  mov x0,xzr
7101f09ea0  stp xzr,xzr,[x0, #0x10]
7101f09ea4  mov w1,#0x20
7101f09ea8  stp xzr,xzr,[x0]
7101f09eac  stp x0,x19,[x22, #0xf0]
7101f09eb0  mov w0,#0x10
7101f09eb4  bl 0x710392e290
7101f09eb8  cbnz x0,0x7101f09f00
7101f09ebc  adrp x8,0x7105332000
7101f09ec0  ldr x0,[x8, #0xf00]
7101f09ec4  cbz x0,0x7101f09efc
7101f09ec8  mov w8,#0x20
7101f09ecc  stur wzr,[x29, #-0xe0]
7101f09ed0  sub x1,x29,#0xe0
7101f09ed4  str x8,[sp, #0x50]
7101f09ed8  ldr x8,[x0]
7101f09edc  ldr x8,[x8, #0x30]
7101f09ee0  add x2,sp,#0x50
7101f09ee4  blr x8
7101f09ee8  tbz w0,#0x0,0x7101f09efc
7101f09eec  mov w0,#0x10
7101f09ef0  mov w1,#0x20
7101f09ef4  bl 0x710392e290
7101f09ef8  cbnz x0,0x7101f09f00
7101f09efc  mov x0,xzr
7101f09f00  stp xzr,xzr,[x0, #0x10]
7101f09f04  mov w1,#0x20
7101f09f08  stp xzr,xzr,[x0]
7101f09f0c  stp x0,x19,[x22, #0x100]
7101f09f10  mov w0,#0x10
7101f09f14  bl 0x710392e290
7101f09f18  cbnz x0,0x7101f09f60
7101f09f1c  adrp x8,0x7105332000
7101f09f20  ldr x0,[x8, #0xf00]
7101f09f24  cbz x0,0x7101f09f5c
7101f09f28  mov w8,#0x20
7101f09f2c  stur wzr,[x29, #-0xe0]
7101f09f30  sub x1,x29,#0xe0
7101f09f34  str x8,[sp, #0x50]
7101f09f38  ldr x8,[x0]
7101f09f3c  ldr x8,[x8, #0x30]
7101f09f40  add x2,sp,#0x50
7101f09f44  blr x8
7101f09f48  tbz w0,#0x0,0x7101f09f5c
7101f09f4c  mov w0,#0x10
7101f09f50  mov w1,#0x20
7101f09f54  bl 0x710392e290
7101f09f58  cbnz x0,0x7101f09f60
7101f09f5c  mov x0,xzr
7101f09f60  stp xzr,xzr,[x0, #0x10]
7101f09f64  mov w1,#0x20
7101f09f68  stp xzr,xzr,[x0]
7101f09f6c  stp x0,x19,[x22, #0x110]
7101f09f70  mov w0,#0x10
7101f09f74  bl 0x710392e290
7101f09f78  cbnz x0,0x7101f09fc0
7101f09f7c  adrp x8,0x7105332000
7101f09f80  ldr x0,[x8, #0xf00]
7101f09f84  cbz x0,0x7101f09fbc
7101f09f88  mov w8,#0x20
7101f09f8c  stur wzr,[x29, #-0xe0]
7101f09f90  sub x1,x29,#0xe0
7101f09f94  str x8,[sp, #0x50]
7101f09f98  ldr x8,[x0]
7101f09f9c  ldr x8,[x8, #0x30]
7101f09fa0  add x2,sp,#0x50
7101f09fa4  blr x8
7101f09fa8  tbz w0,#0x0,0x7101f09fbc
7101f09fac  mov w0,#0x10
7101f09fb0  mov w1,#0x20
7101f09fb4  bl 0x710392e290
7101f09fb8  cbnz x0,0x7101f09fc0
7101f09fbc  mov x0,xzr
7101f09fc0  stp xzr,xzr,[x0, #0x10]
7101f09fc4  mov w1,#0x20
7101f09fc8  stp xzr,xzr,[x0]
7101f09fcc  stp x0,x19,[x22, #0x120]
7101f09fd0  mov w0,#0x10
7101f09fd4  bl 0x710392e290
7101f09fd8  cbnz x0,0x7101f0a020
7101f09fdc  adrp x8,0x7105332000
7101f09fe0  ldr x0,[x8, #0xf00]
7101f09fe4  cbz x0,0x7101f0a01c
7101f09fe8  mov w8,#0x20
7101f09fec  stur wzr,[x29, #-0xe0]
7101f09ff0  sub x1,x29,#0xe0
7101f09ff4  str x8,[sp, #0x50]
7101f09ff8  ldr x8,[x0]
7101f09ffc  ldr x8,[x8, #0x30]
7101f0a000  add x2,sp,#0x50
7101f0a004  blr x8
7101f0a008  tbz w0,#0x0,0x7101f0a01c
7101f0a00c  mov w0,#0x10
7101f0a010  mov w1,#0x20
7101f0a014  bl 0x710392e290
7101f0a018  cbnz x0,0x7101f0a020
7101f0a01c  mov x0,xzr
7101f0a020  stp xzr,xzr,[x0, #0x10]
7101f0a024  mov w1,#0x20
7101f0a028  stp xzr,xzr,[x0]
7101f0a02c  stp x0,x19,[x22, #0x130]
7101f0a030  mov w0,#0x10
7101f0a034  bl 0x710392e290
7101f0a038  cbnz x0,0x7101f0a080
7101f0a03c  adrp x8,0x7105332000
7101f0a040  ldr x0,[x8, #0xf00]
7101f0a044  cbz x0,0x7101f0a07c
7101f0a048  mov w8,#0x20
7101f0a04c  stur wzr,[x29, #-0xe0]
7101f0a050  sub x1,x29,#0xe0
7101f0a054  str x8,[sp, #0x50]
7101f0a058  ldr x8,[x0]
7101f0a05c  ldr x8,[x8, #0x30]
7101f0a060  add x2,sp,#0x50
7101f0a064  blr x8
7101f0a068  tbz w0,#0x0,0x7101f0a07c
7101f0a06c  mov w0,#0x10
7101f0a070  mov w1,#0x20
7101f0a074  bl 0x710392e290
7101f0a078  cbnz x0,0x7101f0a080
7101f0a07c  mov x0,xzr
7101f0a080  stp xzr,xzr,[x0, #0x10]
7101f0a084  mov w1,#0x20
7101f0a088  stp xzr,xzr,[x0]
7101f0a08c  stp x0,x19,[x22, #0x140]
7101f0a090  mov w0,#0x10
7101f0a094  bl 0x710392e290
7101f0a098  cbnz x0,0x7101f0a0e0
7101f0a09c  adrp x8,0x7105332000
7101f0a0a0  ldr x0,[x8, #0xf00]
7101f0a0a4  cbz x0,0x7101f0a0dc
7101f0a0a8  mov w8,#0x20
7101f0a0ac  stur wzr,[x29, #-0xe0]
7101f0a0b0  sub x1,x29,#0xe0
7101f0a0b4  str x8,[sp, #0x50]
7101f0a0b8  ldr x8,[x0]
7101f0a0bc  ldr x8,[x8, #0x30]
7101f0a0c0  add x2,sp,#0x50
7101f0a0c4  blr x8
7101f0a0c8  tbz w0,#0x0,0x7101f0a0dc
7101f0a0cc  mov w0,#0x10
7101f0a0d0  mov w1,#0x20
7101f0a0d4  bl 0x710392e290
7101f0a0d8  cbnz x0,0x7101f0a0e0
7101f0a0dc  mov x0,xzr
7101f0a0e0  stp xzr,xzr,[x0, #0x10]
7101f0a0e4  mov w1,#0x20
7101f0a0e8  stp xzr,xzr,[x0]
7101f0a0ec  stp x0,x19,[x22, #0x150]
7101f0a0f0  mov w0,#0x10
7101f0a0f4  bl 0x710392e290
7101f0a0f8  cbnz x0,0x7101f0a140
7101f0a0fc  adrp x8,0x7105332000
7101f0a100  ldr x0,[x8, #0xf00]
7101f0a104  cbz x0,0x7101f0a13c
7101f0a108  mov w8,#0x20
7101f0a10c  stur wzr,[x29, #-0xe0]
7101f0a110  sub x1,x29,#0xe0
7101f0a114  str x8,[sp, #0x50]
7101f0a118  ldr x8,[x0]
7101f0a11c  ldr x8,[x8, #0x30]
7101f0a120  add x2,sp,#0x50
7101f0a124  blr x8
7101f0a128  tbz w0,#0x0,0x7101f0a13c
7101f0a12c  mov w0,#0x10
7101f0a130  mov w1,#0x20
7101f0a134  bl 0x710392e290
7101f0a138  cbnz x0,0x7101f0a140
7101f0a13c  mov x0,xzr
7101f0a140  orr x8,xzr,#0x3f80000000000000
7101f0a144  stp xzr,xzr,[x0, #0x10]
7101f0a148  stp xzr,xzr,[x0]
7101f0a14c  orr w1,wzr,#0x18
7101f0a150  str wzr,[x22, #0x190]
7101f0a154  str xzr,[x22, #0x1c0]
7101f0a158  str xzr,[x22, #0x210]
7101f0a15c  str wzr,[x22, #0x1e0]
7101f0a160  str xzr,[x22, #0x228]
7101f0a164  str xzr,[x22, #0x220]
7101f0a168  str xzr,[x22, #0x260]
7101f0a16c  strb wzr,[x22, #0x282]
7101f0a170  strh wzr,[x22, #0x280]
7101f0a174  str xzr,[x22, #0x278]
7101f0a178  str xzr,[x22, #0x288]
7101f0a17c  stp x0,x8,[x22, #0x160]
7101f0a180  orr x8,xzr,#-0xfffffffd
7101f0a184  mov w0,#0x10
7101f0a188  str x8,[x22, #0x180]
7101f0a18c  mov w8,#0x8
7101f0a190  str w8,[x22, #0x188]
7101f0a194  mov w8,#0x41000000
7101f0a198  str w8,[x22, #0x230]
7101f0a19c  str w8,[x22, #0x270]
7101f0a1a0  str w8,[x22, #0x274]
7101f0a1a4  adrp x8,0x71050b4000
7101f0a1a8  add x8,x8,#0x1f8
7101f0a1ac  str x8,[x22, #0x290]
7101f0a1b0  stp xzr,xzr,[x22, #0x170]
7101f0a1b4  stp xzr,xzr,[x22, #0x1d0]
7101f0a1b8  bl 0x710392e290
7101f0a1bc  cbnz x0,0x7101f0a204
7101f0a1c0  adrp x8,0x7105332000
7101f0a1c4  ldr x0,[x8, #0xf00]
7101f0a1c8  cbz x0,0x7101f0a200
7101f0a1cc  orr w8,wzr,#0x18
7101f0a1d0  stur wzr,[x29, #-0xe0]
7101f0a1d4  sub x1,x29,#0xe0
7101f0a1d8  str x8,[sp, #0x50]
7101f0a1dc  ldr x8,[x0]
7101f0a1e0  ldr x8,[x8, #0x30]
7101f0a1e4  add x2,sp,#0x50
7101f0a1e8  blr x8
7101f0a1ec  tbz w0,#0x0,0x7101f0a200
7101f0a1f0  mov w0,#0x10
7101f0a1f4  orr w1,wzr,#0x18
7101f0a1f8  bl 0x710392e290
7101f0a1fc  cbnz x0,0x7101f0a204
7101f0a200  mov x0,xzr
7101f0a204  stp xzr,xzr,[x0, #0x8]
7101f0a208  adrp x19,0x71050b4000
7101f0a20c  add x19,x19,#0x2f8
7101f0a210  str xzr,[x0]
7101f0a214  mov w1,#0x20
7101f0a218  str x0,[x22, #0x298]
7101f0a21c  mov w0,#0x10
7101f0a220  str xzr,[x22, #0x2c8]
7101f0a224  str xzr,[x22, #0x2c0]
7101f0a228  str xzr,[x22, #0x2b8]
7101f0a22c  str xzr,[x22, #0x2b0]
7101f0a230  str xzr,[x22, #0x2a8]
7101f0a234  str x19,[x22, #0x2a0]
7101f0a238  bl 0x710392e290
7101f0a23c  cbnz x0,0x7101f0a284
7101f0a240  adrp x8,0x7105332000
7101f0a244  ldr x0,[x8, #0xf00]
7101f0a248  cbz x0,0x7101f0a280
7101f0a24c  mov w8,#0x20
7101f0a250  stur wzr,[x29, #-0xe0]
7101f0a254  sub x1,x29,#0xe0
7101f0a258  str x8,[sp, #0x50]
7101f0a25c  ldr x8,[x0]
7101f0a260  ldr x8,[x8, #0x30]
7101f0a264  add x2,sp,#0x50
7101f0a268  blr x8
7101f0a26c  tbz w0,#0x0,0x7101f0a280
7101f0a270  mov w0,#0x10
7101f0a274  mov w1,#0x20
7101f0a278  bl 0x710392e290
7101f0a27c  cbnz x0,0x7101f0a284
7101f0a280  mov x0,xzr
7101f0a284  str wzr,[x0]
7101f0a288  stp xzr,xzr,[x0, #0x10]
7101f0a28c  mov w1,#0x20
7101f0a290  str xzr,[x0, #0x8]
7101f0a294  str x0,[x22, #0x2a8]
7101f0a298  mov w0,#0x10
7101f0a29c  str x19,[x22, #0x2b0]
7101f0a2a0  bl 0x710392e290
7101f0a2a4  cbnz x0,0x7101f0a2ec
7101f0a2a8  adrp x8,0x7105332000
7101f0a2ac  ldr x0,[x8, #0xf00]
7101f0a2b0  cbz x0,0x7101f0a2e8
7101f0a2b4  mov w8,#0x20
7101f0a2b8  stur wzr,[x29, #-0xe0]
7101f0a2bc  sub x1,x29,#0xe0
7101f0a2c0  str x8,[sp, #0x50]
7101f0a2c4  ldr x8,[x0]
7101f0a2c8  ldr x8,[x8, #0x30]
7101f0a2cc  add x2,sp,#0x50
7101f0a2d0  blr x8
7101f0a2d4  tbz w0,#0x0,0x7101f0a2e8
7101f0a2d8  mov w0,#0x10
7101f0a2dc  mov w1,#0x20
7101f0a2e0  bl 0x710392e290
7101f0a2e4  cbnz x0,0x7101f0a2ec
7101f0a2e8  mov x0,xzr
7101f0a2ec  str wzr,[x0]
7101f0a2f0  stp xzr,xzr,[x0, #0x10]
7101f0a2f4  mov w1,#0x20
7101f0a2f8  str xzr,[x0, #0x8]
7101f0a2fc  str x0,[x22, #0x2b8]
7101f0a300  mov w0,#0x10
7101f0a304  str x19,[x22, #0x2c0]
7101f0a308  bl 0x710392e290
7101f0a30c  cbnz x0,0x7101f0a354
7101f0a310  adrp x8,0x7105332000
7101f0a314  ldr x0,[x8, #0xf00]
7101f0a318  cbz x0,0x7101f0a350
7101f0a31c  mov w8,#0x20
7101f0a320  stur wzr,[x29, #-0xe0]
7101f0a324  sub x1,x29,#0xe0
7101f0a328  str x8,[sp, #0x50]
7101f0a32c  ldr x8,[x0]
7101f0a330  ldr x8,[x8, #0x30]
7101f0a334  add x2,sp,#0x50
7101f0a338  blr x8
7101f0a33c  tbz w0,#0x0,0x7101f0a350
7101f0a340  mov w0,#0x10
7101f0a344  mov w1,#0x20
7101f0a348  bl 0x710392e290
7101f0a34c  cbnz x0,0x7101f0a354
7101f0a350  mov x0,xzr
7101f0a354  str wzr,[x0]
7101f0a358  stp xzr,xzr,[x0, #0x10]
7101f0a35c  adrp x8,0x71050b4000
7101f0a360  add x8,x8,#0x278
7101f0a364  mov w1,#0x48
7101f0a368  str xzr,[x0, #0x8]
7101f0a36c  str x0,[x22, #0x2c8]
7101f0a370  mov w0,#0x10
7101f0a374  str x8,[x22, #0x2d0]
7101f0a378  bl 0x710392e290
7101f0a37c  mov x23,x0
7101f0a380  adrp x19,0x710523d000
7101f0a384  add x19,x19,#0x9a8
7101f0a388  cbnz x0,0x7101f0a3d4
7101f0a38c  adrp x8,0x7105332000
7101f0a390  ldr x0,[x8, #0xf00]
7101f0a394  cbz x0,0x7101f0a3d0
7101f0a398  mov w8,#0x48
7101f0a39c  stur wzr,[x29, #-0xe0]
7101f0a3a0  sub x1,x29,#0xe0
7101f0a3a4  str x8,[sp, #0x50]
7101f0a3a8  ldr x8,[x0]
7101f0a3ac  ldr x8,[x8, #0x30]
7101f0a3b0  add x2,sp,#0x50
7101f0a3b4  blr x8
7101f0a3b8  tbz w0,#0x0,0x7101f0a3d0
7101f0a3bc  mov w1,#0x48
7101f0a3c0  mov w0,#0x10
7101f0a3c4  bl 0x710392e290
7101f0a3c8  mov x23,x0
7101f0a3cc  cbnz x0,0x7101f0a3d4
7101f0a3d0  mov x23,xzr
7101f0a3d4  mov x0,x23
7101f0a3d8  stp xzr,xzr,[x23, #0x30]
7101f0a3dc  stp xzr,xzr,[x23, #0x20]
7101f0a3e0  stp xzr,xzr,[x23, #0x10]
7101f0a3e4  stp xzr,xzr,[x23]
7101f0a3e8  bl 0x7103776290
7101f0a3ec  mov w0,#0x10
7101f0a3f0  mov w1,#0x20
7101f0a3f4  str x19,[x23, #0x10]
7101f0a3f8  bl 0x710392e290
7101f0a3fc  cbnz x0,0x7101f0a444
7101f0a400  adrp x8,0x7105332000
7101f0a404  ldr x0,[x8, #0xf00]
7101f0a408  cbz x0,0x7101f0a440
7101f0a40c  mov w8,#0x20
7101f0a410  stur wzr,[x29, #-0xe0]
7101f0a414  sub x1,x29,#0xe0
7101f0a418  str x8,[sp, #0x50]
7101f0a41c  ldr x8,[x0]
7101f0a420  ldr x8,[x8, #0x30]
7101f0a424  add x2,sp,#0x50
7101f0a428  blr x8
7101f0a42c  tbz w0,#0x0,0x7101f0a440
7101f0a430  mov w0,#0x10
7101f0a434  mov w1,#0x20
7101f0a438  bl 0x710392e290
7101f0a43c  cbnz x0,0x7101f0a444
7101f0a440  mov x0,xzr
7101f0a444  stp xzr,xzr,[x0, #0x10]
7101f0a448  mov w1,#0x20
7101f0a44c  stp xzr,xzr,[x0]
7101f0a450  stp x0,x19,[x23, #0x18]
7101f0a454  mov w0,#0x10
7101f0a458  bl 0x710392e290
7101f0a45c  cbnz x0,0x7101f0a4a4
7101f0a460  adrp x8,0x7105332000
7101f0a464  ldr x0,[x8, #0xf00]
7101f0a468  cbz x0,0x7101f0a4a0
7101f0a46c  mov w8,#0x20
7101f0a470  stur wzr,[x29, #-0xe0]
7101f0a474  sub x1,x29,#0xe0
7101f0a478  str x8,[sp, #0x50]
7101f0a47c  ldr x8,[x0]
7101f0a480  ldr x8,[x8, #0x30]
7101f0a484  add x2,sp,#0x50
7101f0a488  blr x8
7101f0a48c  tbz w0,#0x0,0x7101f0a4a0
7101f0a490  mov w0,#0x10
7101f0a494  mov w1,#0x20
7101f0a498  bl 0x710392e290
7101f0a49c  cbnz x0,0x7101f0a4a4
7101f0a4a0  mov x0,xzr
7101f0a4a4  stp xzr,xzr,[x0, #0x10]
7101f0a4a8  mov w1,#0x20
7101f0a4ac  stp xzr,xzr,[x0]
7101f0a4b0  stp x0,x19,[x23, #0x28]
7101f0a4b4  mov w0,#0x10
7101f0a4b8  bl 0x710392e290
7101f0a4bc  cbnz x0,0x7101f0a504
7101f0a4c0  adrp x8,0x7105332000
7101f0a4c4  ldr x0,[x8, #0xf00]
7101f0a4c8  cbz x0,0x7101f0a500
7101f0a4cc  mov w8,#0x20
7101f0a4d0  stur wzr,[x29, #-0xe0]
7101f0a4d4  sub x1,x29,#0xe0
7101f0a4d8  str x8,[sp, #0x50]
7101f0a4dc  ldr x8,[x0]
7101f0a4e0  ldr x8,[x8, #0x30]
7101f0a4e4  add x2,sp,#0x50
7101f0a4e8  blr x8
7101f0a4ec  tbz w0,#0x0,0x7101f0a500
7101f0a4f0  mov w0,#0x10
7101f0a4f4  mov w1,#0x20
7101f0a4f8  bl 0x710392e290
7101f0a4fc  cbnz x0,0x7101f0a504
7101f0a500  mov x0,xzr
7101f0a504  stp xzr,xzr,[x0, #0x10]
7101f0a508  adrp x8,0x71050b4000
7101f0a50c  add x8,x8,#0x238
7101f0a510  stp xzr,xzr,[x0]
7101f0a514  mov w1,#0x50
7101f0a518  str x0,[x23, #0x38]
7101f0a51c  mov w0,#0x10
7101f0a520  str w28,[x23, #0x40]
7101f0a524  strb wzr,[x23, #0x44]
7101f0a528  str x23,[x22, #0x2d8]
7101f0a52c  str x8,[x22, #0x2e0]
7101f0a530  bl 0x710392e290
7101f0a534  mov x23,x0
7101f0a538  cbnz x0,0x7101f0a584
7101f0a53c  adrp x8,0x7105332000
7101f0a540  ldr x0,[x8, #0xf00]
7101f0a544  cbz x0,0x7101f0a580
7101f0a548  mov w8,#0x50
7101f0a54c  stur wzr,[x29, #-0xe0]
7101f0a550  sub x1,x29,#0xe0
7101f0a554  str x8,[sp, #0x50]
7101f0a558  ldr x8,[x0]
7101f0a55c  ldr x8,[x8, #0x30]
7101f0a560  add x2,sp,#0x50
7101f0a564  blr x8
7101f0a568  tbz w0,#0x0,0x7101f0a580
7101f0a56c  mov w1,#0x50
7101f0a570  mov w0,#0x10
7101f0a574  bl 0x710392e290
7101f0a578  mov x23,x0
7101f0a57c  cbnz x0,0x7101f0a584
7101f0a580  mov x23,xzr
7101f0a584  mov x24,x23
7101f0a588  mov x25,x23
7101f0a58c  mov x0,x23
7101f0a590  stp xzr,xzr,[x23, #0x38]
7101f0a594  str xzr,[x23]
7101f0a598  stp xzr,xzr,[x23, #0x20]
7101f0a59c  stp xzr,xzr,[x23, #0x8]
7101f0a5a0  str xzr,[x24, #0x30]!
7101f0a5a4  str xzr,[x25, #0x18]!
7101f0a5a8  bl 0x7101f3b930
7101f0a5ac  mov x0,x25
7101f0a5b0  bl 0x7101f3b930
7101f0a5b4  mov x0,x24
7101f0a5b8  bl 0x7101f3b930
7101f0a5bc  adrp x8,0x71050b4000
7101f0a5c0  add x8,x8,#0x298
7101f0a5c4  mov w1,#0x28
7101f0a5c8  mov w0,#0x10
7101f0a5cc  strb wzr,[x23, #0x48]
7101f0a5d0  str x23,[x22, #0x2e8]
7101f0a5d4  str x8,[x22, #0x2f0]
7101f0a5d8  bl 0x710392e290
7101f0a5dc  mov x23,x0
7101f0a5e0  cbnz x0,0x7101f0a62c
7101f0a5e4  adrp x8,0x7105332000
7101f0a5e8  ldr x0,[x8, #0xf00]
7101f0a5ec  cbz x0,0x7101f0a628
7101f0a5f0  mov w8,#0x28
7101f0a5f4  stur wzr,[x29, #-0xe0]
7101f0a5f8  sub x1,x29,#0xe0
7101f0a5fc  str x8,[sp, #0x50]
7101f0a600  ldr x8,[x0]
7101f0a604  ldr x8,[x8, #0x30]
7101f0a608  add x2,sp,#0x50
7101f0a60c  blr x8
7101f0a610  tbz w0,#0x0,0x7101f0a628
7101f0a614  mov w1,#0x28
7101f0a618  mov w0,#0x10
7101f0a61c  bl 0x710392e290
7101f0a620  mov x23,x0
7101f0a624  cbnz x0,0x7101f0a62c
7101f0a628  mov x23,xzr
7101f0a62c  mov x0,x23
7101f0a630  bl 0x7101f3b930
7101f0a634  adrp x8,0x71050b4000
7101f0a638  add x8,x8,#0x218
7101f0a63c  mov w1,#0x50
7101f0a640  mov w0,#0x10
7101f0a644  str xzr,[x23, #0x18]
7101f0a648  strb wzr,[x23, #0x20]
7101f0a64c  str x23,[x22, #0x2f8]
7101f0a650  str x8,[x22, #0x300]
7101f0a654  bl 0x710392e290
7101f0a658  mov x23,x0
7101f0a65c  cbnz x0,0x7101f0a6a8
7101f0a660  adrp x8,0x7105332000
7101f0a664  ldr x0,[x8, #0xf00]
7101f0a668  cbz x0,0x7101f0a6a4
7101f0a66c  mov w8,#0x50
7101f0a670  stur wzr,[x29, #-0xe0]
7101f0a674  sub x1,x29,#0xe0
7101f0a678  str x8,[sp, #0x50]
7101f0a67c  ldr x8,[x0]
7101f0a680  ldr x8,[x8, #0x30]
7101f0a684  add x2,sp,#0x50
7101f0a688  blr x8
7101f0a68c  tbz w0,#0x0,0x7101f0a6a4
7101f0a690  mov w1,#0x50
7101f0a694  mov w0,#0x10
7101f0a698  bl 0x710392e290
7101f0a69c  mov x23,x0
7101f0a6a0  cbnz x0,0x7101f0a6a8
7101f0a6a4  mov x23,xzr
7101f0a6a8  mov x0,x23
7101f0a6ac  stp xzr,xzr,[x23, #0x20]
7101f0a6b0  stp xzr,xzr,[x23, #0x10]
7101f0a6b4  stp xzr,xzr,[x23]
7101f0a6b8  bl 0x7103776290
7101f0a6bc  mov w0,#0x10
7101f0a6c0  mov w1,#0x20
7101f0a6c4  str x19,[x23, #0x10]
7101f0a6c8  bl 0x710392e290
7101f0a6cc  cbnz x0,0x7101f0a714
7101f0a6d0  adrp x8,0x7105332000
7101f0a6d4  ldr x0,[x8, #0xf00]
7101f0a6d8  cbz x0,0x7101f0a710
7101f0a6dc  mov w8,#0x20
7101f0a6e0  stur wzr,[x29, #-0xe0]
7101f0a6e4  sub x1,x29,#0xe0
7101f0a6e8  str x8,[sp, #0x50]
7101f0a6ec  ldr x8,[x0]
7101f0a6f0  ldr x8,[x8, #0x30]
7101f0a6f4  add x2,sp,#0x50
7101f0a6f8  blr x8
7101f0a6fc  tbz w0,#0x0,0x7101f0a710
7101f0a700  mov w0,#0x10
7101f0a704  mov w1,#0x20
7101f0a708  bl 0x710392e290
7101f0a70c  cbnz x0,0x7101f0a714
7101f0a710  mov x0,xzr
7101f0a714  stp xzr,xzr,[x0, #0x10]
7101f0a718  mov w1,#0x20
7101f0a71c  stp xzr,xzr,[x0]
7101f0a720  stp x0,x19,[x23, #0x18]
7101f0a724  mov w0,#0x10
7101f0a728  bl 0x710392e290
7101f0a72c  cbnz x0,0x7101f0a774
7101f0a730  adrp x8,0x7105332000
7101f0a734  ldr x0,[x8, #0xf00]
7101f0a738  cbz x0,0x7101f0a770
7101f0a73c  mov w8,#0x20
7101f0a740  stur wzr,[x29, #-0xe0]
7101f0a744  sub x1,x29,#0xe0
7101f0a748  str x8,[sp, #0x50]
7101f0a74c  ldr x8,[x0]
7101f0a750  ldr x8,[x8, #0x30]
7101f0a754  add x2,sp,#0x50
7101f0a758  blr x8
7101f0a75c  tbz w0,#0x0,0x7101f0a770
7101f0a760  mov w0,#0x10
7101f0a764  mov w1,#0x20
7101f0a768  bl 0x710392e290
7101f0a76c  cbnz x0,0x7101f0a774
7101f0a770  mov x0,xzr
7101f0a774  str x20,[sp, #0x20]
7101f0a778  stp xzr,xzr,[x0, #0x10]
7101f0a77c  adrp x8,0x710523d000
7101f0a780  add x8,x8,#0x9e8
7101f0a784  orr w1,wzr,#0x18
7101f0a788  stp xzr,xzr,[x0]
7101f0a78c  str x0,[x23, #0x28]
7101f0a790  mov w0,#0x10
7101f0a794  str wzr,[x23, #0x30]
7101f0a798  strb wzr,[x23, #0x34]
7101f0a79c  stp xzr,x8,[x23, #0x38]
7101f0a7a0  bl 0x710392e290
7101f0a7a4  cbnz x0,0x7101f0a7ec
7101f0a7a8  adrp x8,0x7105332000
7101f0a7ac  ldr x0,[x8, #0xf00]
7101f0a7b0  cbz x0,0x7101f0a7e8
7101f0a7b4  orr w8,wzr,#0x18
7101f0a7b8  stur wzr,[x29, #-0xe0]
7101f0a7bc  sub x1,x29,#0xe0
7101f0a7c0  str x8,[sp, #0x50]
7101f0a7c4  ldr x8,[x0]
7101f0a7c8  ldr x8,[x8, #0x30]
7101f0a7cc  add x2,sp,#0x50
7101f0a7d0  blr x8
7101f0a7d4  tbz w0,#0x0,0x7101f0a7e8
7101f0a7d8  mov w0,#0x10
7101f0a7dc  orr w1,wzr,#0x18
7101f0a7e0  bl 0x710392e290
7101f0a7e4  cbnz x0,0x7101f0a7ec
7101f0a7e8  mov x0,xzr
7101f0a7ec  mov w8,#0x1
7101f0a7f0  stp xzr,xzr,[x0]
7101f0a7f4  strb w8,[x0, #0x10]
7101f0a7f8  adrp x20,0x71050b4000
7101f0a7fc  add x20,x20,#0x258
7101f0a800  str x0,[x23, #0x48]
7101f0a804  mov w0,#0x10
7101f0a808  orr w1,wzr,#0x70
7101f0a80c  str x23,[x22, #0x308]
7101f0a810  str x20,[x22, #0x310]
7101f0a814  bl 0x710392e290
7101f0a818  mov x23,x0
7101f0a81c  cbnz x0,0x7101f0a868
7101f0a820  adrp x8,0x7105332000
7101f0a824  ldr x0,[x8, #0xf00]
7101f0a828  cbz x0,0x7101f0a864
7101f0a82c  orr w8,wzr,#0x70
7101f0a830  stur wzr,[x29, #-0xe0]
7101f0a834  sub x1,x29,#0xe0
7101f0a838  str x8,[sp, #0x50]
7101f0a83c  ldr x8,[x0]
7101f0a840  ldr x8,[x8, #0x30]
7101f0a844  add x2,sp,#0x50
7101f0a848  blr x8
7101f0a84c  tbz w0,#0x0,0x7101f0a864
7101f0a850  mov w0,#0x10
7101f0a854  orr w1,wzr,#0x70
7101f0a858  bl 0x710392e290
7101f0a85c  mov x23,x0
7101f0a860  cbnz x0,0x7101f0a868
7101f0a864  mov x23,xzr
7101f0a868  mov x0,x23
7101f0a86c  stp xzr,xzr,[x23, #0x20]
7101f0a870  stp xzr,xzr,[x23, #0x10]
7101f0a874  stp xzr,xzr,[x23]
7101f0a878  bl 0x7103776290
7101f0a87c  mov w0,#0x10
7101f0a880  mov w1,#0x20
7101f0a884  str x19,[x23, #0x10]
7101f0a888  bl 0x710392e290
7101f0a88c  cbnz x0,0x7101f0a8d4
7101f0a890  adrp x8,0x7105332000
7101f0a894  ldr x0,[x8, #0xf00]
7101f0a898  cbz x0,0x7101f0a8d0
7101f0a89c  mov w8,#0x20
7101f0a8a0  stur wzr,[x29, #-0xe0]
7101f0a8a4  sub x1,x29,#0xe0
7101f0a8a8  str x8,[sp, #0x50]
7101f0a8ac  ldr x8,[x0]
7101f0a8b0  ldr x8,[x8, #0x30]
7101f0a8b4  add x2,sp,#0x50
7101f0a8b8  blr x8
7101f0a8bc  tbz w0,#0x0,0x7101f0a8d0
7101f0a8c0  mov w0,#0x10
7101f0a8c4  mov w1,#0x20
7101f0a8c8  bl 0x710392e290
7101f0a8cc  cbnz x0,0x7101f0a8d4
7101f0a8d0  mov x0,xzr
7101f0a8d4  stp xzr,xzr,[x0, #0x10]
7101f0a8d8  mov w1,#0x20
7101f0a8dc  stp xzr,xzr,[x0]
7101f0a8e0  stp x0,x19,[x23, #0x18]
7101f0a8e4  mov w0,#0x10
7101f0a8e8  bl 0x710392e290
7101f0a8ec  cbnz x0,0x7101f0a934
7101f0a8f0  adrp x8,0x7105332000
7101f0a8f4  ldr x0,[x8, #0xf00]
7101f0a8f8  cbz x0,0x7101f0a930
7101f0a8fc  mov w8,#0x20
7101f0a900  stur wzr,[x29, #-0xe0]
7101f0a904  sub x1,x29,#0xe0
7101f0a908  str x8,[sp, #0x50]
7101f0a90c  ldr x8,[x0]
7101f0a910  ldr x8,[x8, #0x30]
7101f0a914  add x2,sp,#0x50
7101f0a918  blr x8
7101f0a91c  tbz w0,#0x0,0x7101f0a930
7101f0a920  mov w0,#0x10
7101f0a924  mov w1,#0x20
7101f0a928  bl 0x710392e290
7101f0a92c  cbnz x0,0x7101f0a934
7101f0a930  mov x0,xzr
7101f0a934  stp xzr,xzr,[x0, #0x10]
7101f0a938  stp xzr,xzr,[x0]
7101f0a93c  str x0,[x23, #0x28]
7101f0a940  add x0,x23,#0x38
7101f0a944  strb wzr,[x23, #0x30]
7101f0a948  bl 0x7101f42030
7101f0a94c  add x0,x23,#0x48
7101f0a950  bl 0x7101f3f770
7101f0a954  add x0,x23,#0x58
7101f0a958  bl 0x7101f40d20
7101f0a95c  mov w8,#0x1
7101f0a960  strb w8,[x23, #0x68]
7101f0a964  str x8,[x22, #0x320]
7101f0a968  add x8,x22,#0x32c
7101f0a96c  mov x24,#-0x1
7101f0a970  add x0,x26,#0x368
7101f0a974  str x23,[x22, #0x318]
7101f0a978  strb wzr,[x22, #0x328]
7101f0a97c  str x24,[x8]
7101f0a980  str w28,[x22, #0x334]
7101f0a984  str x22,[x26, #0x360]
7101f0a988  bl 0x7101f224f0
7101f0a98c  adrp x8,0x71050b4000
7101f0a990  add x8,x8,#0xd0
7101f0a994  mov w1,#0x150
7101f0a998  mov w0,#0x10
7101f0a99c  str x8,[x26, #0x378]
7101f0a9a0  bl 0x710392e290
7101f0a9a4  mov x22,x0
7101f0a9a8  cbnz x0,0x7101f0a9f4
7101f0a9ac  adrp x8,0x7105332000
7101f0a9b0  ldr x0,[x8, #0xf00]
7101f0a9b4  cbz x0,0x7101f0a9f0
7101f0a9b8  mov w8,#0x150
7101f0a9bc  stur wzr,[x29, #-0xe0]
7101f0a9c0  sub x1,x29,#0xe0
7101f0a9c4  str x8,[sp, #0x50]
7101f0a9c8  ldr x8,[x0]
7101f0a9cc  ldr x8,[x8, #0x30]
7101f0a9d0  add x2,sp,#0x50
7101f0a9d4  blr x8
7101f0a9d8  tbz w0,#0x0,0x7101f0a9f0
7101f0a9dc  mov w1,#0x150
7101f0a9e0  mov w0,#0x10
7101f0a9e4  bl 0x710392e290
7101f0a9e8  mov x22,x0
7101f0a9ec  cbnz x0,0x7101f0a9f4
7101f0a9f0  mov x22,xzr
7101f0a9f4  mov w0,#0x10
7101f0a9f8  mov w1,#0x8
7101f0a9fc  str w28,[x22, #0xe0]
7101f0aa00  stp xzr,xzr,[x22, #0x10]
7101f0aa04  strb wzr,[x22, #0xe4]
7101f0aa08  stp x22,xzr,[x22]
7101f0aa0c  stp xzr,x28,[x22, #0xd0]
7101f0aa10  stp xzr,xzr,[x22, #0xc0]
7101f0aa14  stp xzr,xzr,[x22, #0xb0]
7101f0aa18  stp xzr,xzr,[x22, #0xa0]
7101f0aa1c  stp xzr,xzr,[x22, #0x90]
7101f0aa20  stp xzr,xzr,[x22, #0x80]
7101f0aa24  stp xzr,xzr,[x22, #0x70]
7101f0aa28  stp xzr,xzr,[x22, #0x60]
7101f0aa2c  stp xzr,xzr,[x22, #0x50]
7101f0aa30  stp xzr,xzr,[x22, #0x40]
7101f0aa34  stp xzr,xzr,[x22, #0x30]
7101f0aa38  stp xzr,xzr,[x22, #0x20]
7101f0aa3c  bl 0x710392e290
7101f0aa40  mov x23,x0
7101f0aa44  cbnz x0,0x7101f0aa90
7101f0aa48  adrp x8,0x7105332000
7101f0aa4c  ldr x0,[x8, #0xf00]
7101f0aa50  cbz x0,0x7101f0aa8c
7101f0aa54  mov w8,#0x8
7101f0aa58  stur wzr,[x29, #-0xe0]
7101f0aa5c  sub x1,x29,#0xe0
7101f0aa60  str x8,[sp, #0x50]
7101f0aa64  ldr x8,[x0]
7101f0aa68  ldr x8,[x8, #0x30]
7101f0aa6c  add x2,sp,#0x50
7101f0aa70  blr x8
7101f0aa74  tbz w0,#0x0,0x7101f0aa8c
7101f0aa78  mov w0,#0x10
7101f0aa7c  mov w1,#0x8
7101f0aa80  bl 0x710392e290
7101f0aa84  mov x23,x0
7101f0aa88  cbnz x0,0x7101f0aa90
7101f0aa8c  mov x23,xzr
7101f0aa90  mov x0,x23
7101f0aa94  bl 0x7103773200
7101f0aa98  add x0,x22,#0x108
7101f0aa9c  stp xzr,xzr,[x22, #0xf8]
7101f0aaa0  stp x23,xzr,[x22, #0xe8]
7101f0aaa4  bl 0x7101f42030
7101f0aaa8  mov w0,#0x10
7101f0aaac  mov w1,#0x20
7101f0aab0  str x19,[x22, #0x118]
7101f0aab4  bl 0x710392e290
7101f0aab8  cbnz x0,0x7101f0ab00
7101f0aabc  adrp x8,0x7105332000
7101f0aac0  ldr x0,[x8, #0xf00]
7101f0aac4  cbz x0,0x7101f0aafc
7101f0aac8  mov w8,#0x20
7101f0aacc  stur wzr,[x29, #-0xe0]
7101f0aad0  sub x1,x29,#0xe0
7101f0aad4  str x8,[sp, #0x50]
7101f0aad8  ldr x8,[x0]
7101f0aadc  ldr x8,[x8, #0x30]
7101f0aae0  add x2,sp,#0x50
7101f0aae4  blr x8
7101f0aae8  tbz w0,#0x0,0x7101f0aafc
7101f0aaec  mov w0,#0x10
7101f0aaf0  mov w1,#0x20
7101f0aaf4  bl 0x710392e290
7101f0aaf8  cbnz x0,0x7101f0ab00
7101f0aafc  mov x0,xzr
7101f0ab00  adrp x8,0x7101f37000
7101f0ab04  add x8,x8,#0xe70
7101f0ab08  adrp x9,0x7101f37000
7101f0ab0c  add x9,x9,#0xe80
7101f0ab10  stp xzr,xzr,[x0, #0x10]
7101f0ab14  stp xzr,xzr,[x0]
7101f0ab18  stp x8,xzr,[x22, #0x28]
7101f0ab1c  adrp x8,0x7101f38000
7101f0ab20  add x8,x8,#0x60
7101f0ab24  stp x8,xzr,[x22, #0x48]
7101f0ab28  adrp x8,0x7101f38000
7101f0ab2c  add x8,x8,#0x230
7101f0ab30  stp x8,xzr,[x22, #0x58]
7101f0ab34  ldrsw x8,[x22, #0xd4]
7101f0ab38  cmp w8,#0x13
7101f0ab3c  stp x9,xzr,[x22, #0x38]
7101f0ab40  adrp x9,0x7101f38000
7101f0ab44  add x9,x9,#0x270
7101f0ab48  stp x9,xzr,[x22, #0x68]
7101f0ab4c  adrp x9,0x7101f38000
7101f0ab50  add x9,x9,#0x400
7101f0ab54  stp xzr,xzr,[x22, #0x140]
7101f0ab58  stp xzr,xzr,[x22, #0x130]
7101f0ab5c  stp x0,xzr,[x22, #0x120]
7101f0ab60  stp x9,xzr,[x22, #0x78]
7101f0ab64  b.cs 0x7101f0ef1c
7101f0ab68  add x8,x22,x8, LSL #0x2
7101f0ab6c  add x0,x26,#0x388
7101f0ab70  str wzr,[x8, #0x88]
7101f0ab74  str x22,[x26, #0x380]
7101f0ab78  bl 0x7101f33ed0
7101f0ab7c  add x0,x26,#0x398
7101f0ab80  bl 0x7101f2fbf0
7101f0ab84  adrp x8,0x71050b4000
7101f0ab88  add x8,x8,#0x30
7101f0ab8c  mov w0,#0x10
7101f0ab90  orr w1,wzr,#0x18
7101f0ab94  str x8,[x26, #0x3a8]
7101f0ab98  bl 0x710392e290
7101f0ab9c  mov x22,x0
7101f0aba0  cbnz x0,0x7101f0abec
7101f0aba4  adrp x8,0x7105332000
7101f0aba8  ldr x0,[x8, #0xf00]
7101f0abac  cbz x0,0x7101f0abe8
7101f0abb0  orr w8,wzr,#0x18
7101f0abb4  stur wzr,[x29, #-0xe0]
7101f0abb8  sub x1,x29,#0xe0
7101f0abbc  str x8,[sp, #0x50]
7101f0abc0  ldr x8,[x0]
7101f0abc4  ldr x8,[x8, #0x30]
7101f0abc8  add x2,sp,#0x50
7101f0abcc  blr x8
7101f0abd0  tbz w0,#0x0,0x7101f0abe8
7101f0abd4  mov w0,#0x10
7101f0abd8  orr w1,wzr,#0x18
7101f0abdc  bl 0x710392e290
7101f0abe0  mov x22,x0
7101f0abe4  cbnz x0,0x7101f0abec
7101f0abe8  mov x22,xzr
7101f0abec  mov w0,#0x10
7101f0abf0  mov w1,#0x8
7101f0abf4  bl 0x710392e290
7101f0abf8  mov x23,x0
7101f0abfc  cbnz x0,0x7101f0ac48
7101f0ac00  adrp x8,0x7105332000
7101f0ac04  ldr x0,[x8, #0xf00]
7101f0ac08  cbz x0,0x7101f0ac44
7101f0ac0c  mov w8,#0x8
7101f0ac10  stur wzr,[x29, #-0xe0]
7101f0ac14  sub x1,x29,#0xe0
7101f0ac18  str x8,[sp, #0x50]
7101f0ac1c  ldr x8,[x0]
7101f0ac20  ldr x8,[x8, #0x30]
7101f0ac24  add x2,sp,#0x50
7101f0ac28  blr x8
7101f0ac2c  tbz w0,#0x0,0x7101f0ac44
7101f0ac30  mov w0,#0x10
7101f0ac34  mov w1,#0x8
7101f0ac38  bl 0x710392e290
7101f0ac3c  mov x23,x0
7101f0ac40  cbnz x0,0x7101f0ac48
7101f0ac44  mov x23,xzr
7101f0ac48  mov x0,x23
7101f0ac4c  bl 0x7103773200
7101f0ac50  mov w0,#0x10
7101f0ac54  orr w1,wzr,#0x70
7101f0ac58  stp x23,x20,[x22]
7101f0ac5c  bl 0x710392e290
7101f0ac60  mov x23,x0
7101f0ac64  cbnz x0,0x7101f0acb0
7101f0ac68  adrp x8,0x7105332000
7101f0ac6c  ldr x0,[x8, #0xf00]
7101f0ac70  cbz x0,0x7101f0acac
7101f0ac74  orr w8,wzr,#0x70
7101f0ac78  stur wzr,[x29, #-0xe0]
7101f0ac7c  sub x1,x29,#0xe0
7101f0ac80  str x8,[sp, #0x50]
7101f0ac84  ldr x8,[x0]
7101f0ac88  ldr x8,[x8, #0x30]
7101f0ac8c  add x2,sp,#0x50
7101f0ac90  blr x8
7101f0ac94  tbz w0,#0x0,0x7101f0acac
7101f0ac98  mov w0,#0x10
7101f0ac9c  orr w1,wzr,#0x70
7101f0aca0  bl 0x710392e290
7101f0aca4  mov x23,x0
7101f0aca8  cbnz x0,0x7101f0acb0
7101f0acac  mov x23,xzr
7101f0acb0  mov x0,x23
7101f0acb4  stp xzr,xzr,[x23, #0x20]
7101f0acb8  stp xzr,xzr,[x23, #0x10]
7101f0acbc  stp xzr,xzr,[x23]
7101f0acc0  bl 0x7103776290
7101f0acc4  mov w0,#0x10
7101f0acc8  mov w1,#0x20
7101f0accc  str x19,[x23, #0x10]
7101f0acd0  bl 0x710392e290
7101f0acd4  cbnz x0,0x7101f0ad1c
7101f0acd8  adrp x8,0x7105332000
7101f0acdc  ldr x0,[x8, #0xf00]
7101f0ace0  cbz x0,0x7101f0ad18
7101f0ace4  mov w8,#0x20
7101f0ace8  stur wzr,[x29, #-0xe0]
7101f0acec  sub x1,x29,#0xe0
7101f0acf0  str x8,[sp, #0x50]
7101f0acf4  ldr x8,[x0]
7101f0acf8  ldr x8,[x8, #0x30]
7101f0acfc  add x2,sp,#0x50
7101f0ad00  blr x8
7101f0ad04  tbz w0,#0x0,0x7101f0ad18
7101f0ad08  mov w0,#0x10
7101f0ad0c  mov w1,#0x20
7101f0ad10  bl 0x710392e290
7101f0ad14  cbnz x0,0x7101f0ad1c
7101f0ad18  mov x0,xzr
7101f0ad1c  stp xzr,xzr,[x0, #0x10]
7101f0ad20  mov w1,#0x20
7101f0ad24  stp xzr,xzr,[x0]
7101f0ad28  stp x0,x19,[x23, #0x18]
7101f0ad2c  mov w0,#0x10
7101f0ad30  bl 0x710392e290
7101f0ad34  cbnz x0,0x7101f0ad7c
7101f0ad38  adrp x8,0x7105332000
7101f0ad3c  ldr x0,[x8, #0xf00]
7101f0ad40  cbz x0,0x7101f0ad78
7101f0ad44  mov w8,#0x20
7101f0ad48  stur wzr,[x29, #-0xe0]
7101f0ad4c  sub x1,x29,#0xe0
7101f0ad50  str x8,[sp, #0x50]
7101f0ad54  ldr x8,[x0]
7101f0ad58  ldr x8,[x8, #0x30]
7101f0ad5c  add x2,sp,#0x50
7101f0ad60  blr x8
7101f0ad64  tbz w0,#0x0,0x7101f0ad78
7101f0ad68  mov w0,#0x10
7101f0ad6c  mov w1,#0x20
7101f0ad70  bl 0x710392e290
7101f0ad74  cbnz x0,0x7101f0ad7c
7101f0ad78  mov x0,xzr
7101f0ad7c  stp xzr,xzr,[x0, #0x10]
7101f0ad80  stp xzr,xzr,[x0]
7101f0ad84  str x0,[x23, #0x28]
7101f0ad88  add x0,x23,#0x38
7101f0ad8c  strb wzr,[x23, #0x30]
7101f0ad90  bl 0x7101f42030
7101f0ad94  add x0,x23,#0x48
7101f0ad98  bl 0x7101f3f770
7101f0ad9c  add x0,x23,#0x58
7101f0ada0  bl 0x7101f40d20
7101f0ada4  mov w8,#0x1
7101f0ada8  strb w8,[x23, #0x68]
7101f0adac  adrp x8,0x71050b4000
7101f0adb0  add x8,x8,#0x50
7101f0adb4  mov w0,#0x10
7101f0adb8  orr w1,wzr,#0x30
7101f0adbc  str x23,[x22, #0x10]
7101f0adc0  str x22,[x26, #0x3b0]
7101f0adc4  str x8,[x26, #0x3b8]
7101f0adc8  bl 0x710392e290
7101f0adcc  mov x22,x0
7101f0add0  cbnz x0,0x7101f0ae1c
7101f0add4  adrp x8,0x7105332000
7101f0add8  ldr x0,[x8, #0xf00]
7101f0addc  cbz x0,0x7101f0ae18
7101f0ade0  orr w8,wzr,#0x30
7101f0ade4  stur wzr,[x29, #-0xe0]
7101f0ade8  sub x1,x29,#0xe0
7101f0adec  str x8,[sp, #0x50]
7101f0adf0  ldr x8,[x0]
7101f0adf4  ldr x8,[x8, #0x30]
7101f0adf8  add x2,sp,#0x50
7101f0adfc  blr x8
7101f0ae00  tbz w0,#0x0,0x7101f0ae18
7101f0ae04  mov w0,#0x10
7101f0ae08  orr w1,wzr,#0x30
7101f0ae0c  bl 0x710392e290
7101f0ae10  mov x22,x0
7101f0ae14  cbnz x0,0x7101f0ae1c
7101f0ae18  mov x22,xzr
7101f0ae1c  mov w0,#0x10
7101f0ae20  mov w1,#0x8
7101f0ae24  bl 0x710392e290
7101f0ae28  mov x23,x0
7101f0ae2c  cbnz x0,0x7101f0ae78
7101f0ae30  adrp x8,0x7105332000
7101f0ae34  ldr x0,[x8, #0xf00]
7101f0ae38  cbz x0,0x7101f0ae74
7101f0ae3c  mov w8,#0x8
7101f0ae40  stur wzr,[x29, #-0xe0]
7101f0ae44  sub x1,x29,#0xe0
7101f0ae48  str x8,[sp, #0x50]
7101f0ae4c  ldr x8,[x0]
7101f0ae50  ldr x8,[x8, #0x30]
7101f0ae54  add x2,sp,#0x50
7101f0ae58  blr x8
7101f0ae5c  tbz w0,#0x0,0x7101f0ae74
7101f0ae60  mov w0,#0x10
7101f0ae64  mov w1,#0x8
7101f0ae68  bl 0x710392e290
7101f0ae6c  mov x23,x0
7101f0ae70  cbnz x0,0x7101f0ae78
7101f0ae74  mov x23,xzr
7101f0ae78  mov x0,x23
7101f0ae7c  bl 0x7103773200
7101f0ae80  mov w0,#0x10
7101f0ae84  mov w1,#0x20
7101f0ae88  str x23,[x22]
7101f0ae8c  stp xzr,xzr,[x22, #0x18]
7101f0ae90  stp x19,xzr,[x22, #0x8]
7101f0ae94  bl 0x710392e290
7101f0ae98  cbnz x0,0x7101f0aee0
7101f0ae9c  adrp x8,0x7105332000
7101f0aea0  ldr x0,[x8, #0xf00]
7101f0aea4  cbz x0,0x7101f0aedc
7101f0aea8  mov w8,#0x20
7101f0aeac  stur wzr,[x29, #-0xe0]
7101f0aeb0  sub x1,x29,#0xe0
7101f0aeb4  str x8,[sp, #0x50]
7101f0aeb8  ldr x8,[x0]
7101f0aebc  ldr x8,[x8, #0x30]
7101f0aec0  add x2,sp,#0x50
7101f0aec4  blr x8
7101f0aec8  tbz w0,#0x0,0x7101f0aedc
7101f0aecc  mov w0,#0x10
7101f0aed0  mov w1,#0x20
7101f0aed4  bl 0x710392e290
7101f0aed8  cbnz x0,0x7101f0aee0
7101f0aedc  mov x0,xzr
7101f0aee0  stp xzr,xzr,[x0, #0x10]
7101f0aee4  mov w1,#0x20
7101f0aee8  stp xzr,xzr,[x0]
7101f0aeec  stp x0,x19,[x22, #0x10]
7101f0aef0  mov w0,#0x10
7101f0aef4  bl 0x710392e290
7101f0aef8  cbnz x0,0x7101f0af40
7101f0aefc  adrp x8,0x7105332000
7101f0af00  ldr x0,[x8, #0xf00]
7101f0af04  cbz x0,0x7101f0af3c
7101f0af08  mov w8,#0x20
7101f0af0c  stur wzr,[x29, #-0xe0]
7101f0af10  sub x1,x29,#0xe0
7101f0af14  str x8,[sp, #0x50]
7101f0af18  ldr x8,[x0]
7101f0af1c  ldr x8,[x8, #0x30]
7101f0af20  add x2,sp,#0x50
7101f0af24  blr x8
7101f0af28  tbz w0,#0x0,0x7101f0af3c
7101f0af2c  mov w0,#0x10
7101f0af30  mov w1,#0x20
7101f0af34  bl 0x710392e290
7101f0af38  cbnz x0,0x7101f0af40
7101f0af3c  mov x0,xzr
7101f0af40  stp xzr,xzr,[x0, #0x10]
7101f0af44  adrp x8,0x71050b4000
7101f0af48  add x8,x8,#0x70
7101f0af4c  stp xzr,xzr,[x0]
7101f0af50  mov w1,#0x10
7101f0af54  stp x0,x24,[x22, #0x20]
7101f0af58  mov w0,#0x10
7101f0af5c  str x22,[x26, #0x3c0]
7101f0af60  str x8,[x26, #0x3c8]
7101f0af64  bl 0x710392e290
7101f0af68  mov x22,x0
7101f0af6c  cbnz x0,0x7101f0afb8
7101f0af70  adrp x8,0x7105332000
7101f0af74  ldr x0,[x8, #0xf00]
7101f0af78  cbz x0,0x7101f0afb4
7101f0af7c  mov w8,#0x10
7101f0af80  stur wzr,[x29, #-0xe0]
7101f0af84  sub x1,x29,#0xe0
7101f0af88  str x8,[sp, #0x50]
7101f0af8c  ldr x8,[x0]
7101f0af90  ldr x8,[x8, #0x30]
7101f0af94  add x2,sp,#0x50
7101f0af98  blr x8
7101f0af9c  tbz w0,#0x0,0x7101f0afb4
7101f0afa0  mov w0,#0x10
7101f0afa4  mov w1,#0x10
7101f0afa8  bl 0x710392e290
7101f0afac  mov x22,x0
7101f0afb0  cbnz x0,0x7101f0afb8
7101f0afb4  mov x22,xzr
7101f0afb8  mov w0,#0x10
7101f0afbc  mov w1,#0x8
7101f0afc0  bl 0x710392e290
7101f0afc4  mov x23,x0
7101f0afc8  cbnz x0,0x7101f0b014
7101f0afcc  adrp x8,0x7105332000
7101f0afd0  ldr x0,[x8, #0xf00]
7101f0afd4  cbz x0,0x7101f0b010
7101f0afd8  mov w8,#0x8
7101f0afdc  stur wzr,[x29, #-0xe0]
7101f0afe0  sub x1,x29,#0xe0
7101f0afe4  str x8,[sp, #0x50]
7101f0afe8  ldr x8,[x0]
7101f0afec  ldr x8,[x8, #0x30]
7101f0aff0  add x2,sp,#0x50
7101f0aff4  blr x8
7101f0aff8  tbz w0,#0x0,0x7101f0b010
7101f0affc  mov w0,#0x10
7101f0b000  mov w1,#0x8
7101f0b004  bl 0x710392e290
7101f0b008  mov x23,x0
7101f0b00c  cbnz x0,0x7101f0b014
7101f0b010  mov x23,xzr
7101f0b014  mov x0,x23
7101f0b018  bl 0x7103773200
7101f0b01c  adrp x8,0x71050b4000
7101f0b020  add x8,x8,#0xb0
7101f0b024  mov w0,#0x10
7101f0b028  mov w1,#0x8
7101f0b02c  str x23,[x22]
7101f0b030  strb wzr,[x22, #0x8]
7101f0b034  str x22,[x26, #0x3d0]
7101f0b038  str x8,[x26, #0x3d8]
7101f0b03c  bl 0x710392e290
7101f0b040  mov x22,x0
7101f0b044  cbnz x0,0x7101f0b090
7101f0b048  adrp x8,0x7105332000
7101f0b04c  ldr x0,[x8, #0xf00]
7101f0b050  cbz x0,0x7101f0b08c
7101f0b054  mov w8,#0x8
7101f0b058  stur wzr,[x29, #-0xe0]
7101f0b05c  sub x1,x29,#0xe0
7101f0b060  str x8,[sp, #0x50]
7101f0b064  ldr x8,[x0]
7101f0b068  ldr x8,[x8, #0x30]
7101f0b06c  add x2,sp,#0x50
7101f0b070  blr x8
7101f0b074  tbz w0,#0x0,0x7101f0b08c
7101f0b078  mov w0,#0x10
7101f0b07c  mov w1,#0x8
7101f0b080  bl 0x710392e290
7101f0b084  mov x22,x0
7101f0b088  cbnz x0,0x7101f0b090
7101f0b08c  mov x22,xzr
7101f0b090  mov w0,#0x10
7101f0b094  mov w1,#0x8
7101f0b098  bl 0x710392e290
7101f0b09c  mov x23,x0
7101f0b0a0  cbnz x0,0x7101f0b0ec
7101f0b0a4  adrp x8,0x7105332000
7101f0b0a8  ldr x0,[x8, #0xf00]
7101f0b0ac  cbz x0,0x7101f0b0e8
7101f0b0b0  mov w8,#0x8
7101f0b0b4  stur wzr,[x29, #-0xe0]
7101f0b0b8  sub x1,x29,#0xe0
7101f0b0bc  str x8,[sp, #0x50]
7101f0b0c0  ldr x8,[x0]
7101f0b0c4  ldr x8,[x8, #0x30]
7101f0b0c8  add x2,sp,#0x50
7101f0b0cc  blr x8
7101f0b0d0  tbz w0,#0x0,0x7101f0b0e8
7101f0b0d4  mov w0,#0x10
7101f0b0d8  mov w1,#0x8
7101f0b0dc  bl 0x710392e290
7101f0b0e0  mov x23,x0
7101f0b0e4  cbnz x0,0x7101f0b0ec
7101f0b0e8  mov x23,xzr
7101f0b0ec  mov x0,x23
7101f0b0f0  bl 0x7103773200
7101f0b0f4  adrp x8,0x71050b4000
7101f0b0f8  add x8,x8,#0x358
7101f0b0fc  mov w1,#0x23e0
7101f0b100  mov w0,#0x10
7101f0b104  str x23,[x22]
7101f0b108  str x22,[x26, #0x3e0]
7101f0b10c  str x8,[x26, #0x3e8]
7101f0b110  bl 0x710392e290
7101f0b114  mov x22,x0
7101f0b118  cbnz x0,0x7101f0b164
7101f0b11c  adrp x8,0x7105332000
7101f0b120  ldr x0,[x8, #0xf00]
7101f0b124  cbz x0,0x7101f0b160
7101f0b128  mov w8,#0x23e0
7101f0b12c  stur wzr,[x29, #-0xe0]
7101f0b130  sub x1,x29,#0xe0
7101f0b134  str x8,[sp, #0x50]
7101f0b138  ldr x8,[x0]
7101f0b13c  ldr x8,[x8, #0x30]
7101f0b140  add x2,sp,#0x50
7101f0b144  blr x8
7101f0b148  tbz w0,#0x0,0x7101f0b160
7101f0b14c  mov w1,#0x23e0
7101f0b150  mov w0,#0x10
7101f0b154  bl 0x710392e290
7101f0b158  mov x22,x0
7101f0b15c  cbnz x0,0x7101f0b164
7101f0b160  mov x22,xzr
7101f0b164  mov x21,#0xff0000000000
7101f0b168  mov w20,#0x4
7101f0b16c  add x0,x22,#0x118
7101f0b170  mov w2,#0x120
7101f0b174  mov w1,wzr
7101f0b178  str xzr,[x22, #0x20]
7101f0b17c  movk x21,#0xd9ff, LSL #48
7101f0b180  stp xzr,xzr,[x22, #0x10]
7101f0b184  stp x22,xzr,[x22]
7101f0b188  str w28,[x22, #0xf0]
7101f0b18c  strb wzr,[x22, #0xf4]
7101f0b190  str xzr,[x22, #0x48]
7101f0b194  str xzr,[x22, #0xf8]
7101f0b198  str w20,[x22, #0x110]
7101f0b19c  stp xzr,x28,[x22, #0xe0]
7101f0b1a0  stp xzr,xzr,[x22, #0xd0]
7101f0b1a4  stp xzr,xzr,[x22, #0xc0]
7101f0b1a8  stp xzr,xzr,[x22, #0xb0]
7101f0b1ac  stp xzr,xzr,[x22, #0xa0]
7101f0b1b0  stp xzr,xzr,[x22, #0x90]
7101f0b1b4  stp xzr,xzr,[x22, #0x80]
7101f0b1b8  stp xzr,xzr,[x22, #0x70]
7101f0b1bc  stp xzr,xzr,[x22, #0x60]
7101f0b1c0  stp xzr,xzr,[x22, #0x50]
7101f0b1c4  stp xzr,xzr,[x22, #0x100]
7101f0b1c8  bl 0x71039c02a0
7101f0b1cc  add x8,x22,#0x184
7101f0b1d0  add x9,x22,#0x191
7101f0b1d4  str x24,[x22, #0x178]
7101f0b1d8  str w28,[x22, #0x180]
7101f0b1dc  str xzr,[x9]
7101f0b1e0  add x9,x22,#0x18c
7101f0b1e4  str xzr,[x8]
7101f0b1e8  add x8,x22,#0x23c
7101f0b1ec  mov w19,#0x1
7101f0b1f0  add x0,x22,#0x328
7101f0b1f4  mov w2,#0x1000
7101f0b1f8  mov w1,wzr
7101f0b1fc  str xzr,[x9]
7101f0b200  str w28,[x22, #0x19c]
7101f0b204  strb wzr,[x22, #0x1a0]
7101f0b208  str xzr,[x22, #0x208]
7101f0b20c  str x21,[x22, #0x210]
7101f0b210  strb wzr,[x22, #0x230]
7101f0b214  str xzr,[x22, #0x228]
7101f0b218  str xzr,[x22, #0x220]
7101f0b21c  str xzr,[x22, #0x218]
7101f0b220  str w28,[x22, #0x238]
7101f0b224  strb wzr,[x22, #0x244]
7101f0b228  stp xzr,xzr,[x22, #0x1f8]
7101f0b22c  stp xzr,xzr,[x22, #0x1e8]
7101f0b230  stp xzr,xzr,[x22, #0x1d8]
7101f0b234  strh wzr,[x22, #0x1e0]
7101f0b238  stp xzr,xzr,[x22, #0x1c8]
7101f0b23c  stp xzr,xzr,[x22, #0x1b8]
7101f0b240  str w28,[x22, #0x1b8]
7101f0b244  stp xzr,xzr,[x22, #0x1a8]
7101f0b248  stp x24,x24,[x22, #0x1a8]
7101f0b24c  stp xzr,xzr,[x22, #0x1d0]
7101f0b250  stp xzr,xzr,[x22, #0x1c0]
7101f0b254  str xzr,[x8]
7101f0b258  strb w19,[x22, #0x245]
7101f0b25c  str wzr,[x22, #0x248]
7101f0b260  str w19,[x22, #0x24c]
7101f0b264  strb wzr,[x22, #0x258]
7101f0b268  str xzr,[x22, #0x250]
7101f0b26c  strb wzr,[x22, #0x2a0]
7101f0b270  str xzr,[x22, #0x298]
7101f0b274  strb wzr,[x22, #0x2e8]
7101f0b278  str xzr,[x22, #0x2e0]
7101f0b27c  bl 0x71039c02a0
7101f0b280  mov w8,#0x1328
7101f0b284  mov w9,#0x1330
7101f0b288  mov w2,#0x1000
7101f0b28c  strb w19,[x22, x8, LSL ]
7101f0b290  str wzr,[x22, #0x132c]
7101f0b294  strb w19,[x22, x9, LSL ]
7101f0b298  mov w9,#0x1334
7101f0b29c  mov w8,#0x133c
7101f0b2a0  str xzr,[x22, x9, LSL #0x0]
7101f0b2a4  mov w9,#0x13cc
7101f0b2a8  strb wzr,[x22, x8, LSL ]
7101f0b2ac  mov w8,#0x20
7101f0b2b0  add x0,x22,x9
7101f0b2b4  mov w1,wzr
7101f0b2b8  str w8,[x22, #0x137c]
7101f0b2bc  bl 0x71039c02a0
7101f0b2c0  mov w8,#0x1385
7101f0b2c4  str xzr,[x22, x8, LSL #0x0]
7101f0b2c8  adrp x8,0x7101f43000
7101f0b2cc  add x8,x8,#0x10
7101f0b2d0  adrp x9,0x7101f43000
7101f0b2d4  add x9,x9,#0x1c0
7101f0b2d8  stp x8,xzr,[x22, #0x28]
7101f0b2dc  adrp x8,0x7101f43000
7101f0b2e0  add x8,x8,#0x20
7101f0b2e4  mov x0,x22
7101f0b2e8  stp x8,xzr,[x22, #0x38]
7101f0b2ec  adrp x8,0x7101f43000
7101f0b2f0  add x8,x8,#0xd0
7101f0b2f4  stp x8,xzr,[x22, #0x58]
7101f0b2f8  adrp x8,0x7101f43000
7101f0b2fc  add x8,x8,#0x6f0
7101f0b300  str xzr,[x22, #0x1380]
7101f0b304  stp x8,xzr,[x22, #0x78]
7101f0b308  adrp x8,0x7101f43000
7101f0b30c  add x8,x8,#0x810
7101f0b310  str x21,[x22, #0x23d0]
7101f0b314  str wzr,[x22, #0x23d8]
7101f0b318  str wzr,[x22, #0xe4]
7101f0b31c  stur xzr,[x22, #0xdc]
7101f0b320  stur xzr,[x22, #0xd4]
7101f0b324  stur xzr,[x22, #0xcc]
7101f0b328  stur xzr,[x22, #0xc4]
7101f0b32c  stur xzr,[x22, #0xbc]
7101f0b330  stur xzr,[x22, #0xb4]
7101f0b334  stur xzr,[x22, #0xac]
7101f0b338  stur xzr,[x22, #0xa4]
7101f0b33c  stur xzr,[x22, #0x9c]
7101f0b340  str x28,[x22, #0xe8]
7101f0b344  str w28,[x22, #0xf0]
7101f0b348  strb wzr,[x22, #0xf4]
7101f0b34c  str wzr,[x22, #0x98]
7101f0b350  stp x9,xzr,[x22, #0x68]
7101f0b354  stp x8,xzr,[x22, #0x88]
7101f0b358  stp xzr,xzr,[x22, #0x8]
7101f0b35c  bl 0x7101f43880
7101f0b360  add x8,x26,#0x46c
7101f0b364  str x22,[x26, #0x3f0]
7101f0b368  str wzr,[x26, #0x468]
7101f0b36c  str xzr,[x26, #0x460]
7101f0b370  mov x9,#0x100000001
7101f0b374  add x0,x26,#0x5a0
7101f0b378  str xzr,[x26, #0x458]
7101f0b37c  str xzr,[x26, #0x450]
7101f0b380  str xzr,[x26, #0x448]
7101f0b384  str xzr,[x26, #0x440]
7101f0b388  str xzr,[x26, #0x438]
7101f0b38c  str xzr,[x26, #0x430]
7101f0b390  str xzr,[x26, #0x428]
7101f0b394  str xzr,[x26, #0x420]
7101f0b398  str xzr,[x26, #0x418]
7101f0b39c  str xzr,[x26, #0x410]
7101f0b3a0  str xzr,[x26, #0x408]
7101f0b3a4  str xzr,[x26, #0x400]
7101f0b3a8  str xzr,[x26, #0x3f8]
7101f0b3ac  str x19,[x8]
7101f0b3b0  add x8,x26,#0x4bc
7101f0b3b4  str xzr,[x26, #0x478]
7101f0b3b8  str x21,[x26, #0x480]
7101f0b3bc  str xzr,[x26, #0x488]
7101f0b3c0  str x20,[x8]
7101f0b3c4  add x8,x26,#0x4c4
7101f0b3c8  str x9,[x8]
7101f0b3cc  add x9,x26,#0x4fa
7101f0b3d0  add x8,x26,#0x4cc
7101f0b3d4  strh wzr,[x26, #0x4b8]
7101f0b3d8  str xzr,[x26, #0x4b0]
7101f0b3dc  str xzr,[x26, #0x4a8]
7101f0b3e0  str xzr,[x26, #0x4a0]
7101f0b3e4  str xzr,[x26, #0x498]
7101f0b3e8  str xzr,[x26, #0x490]
7101f0b3ec  str xzr,[x9]
7101f0b3f0  add x9,x26,#0x4f4
7101f0b3f4  str xzr,[x9]
7101f0b3f8  add x9,x26,#0x4ec
7101f0b3fc  str xzr,[x9]
7101f0b400  add x9,x26,#0x4e4
7101f0b404  str xzr,[x9]
7101f0b408  add x9,x26,#0x4dc
7101f0b40c  str xzr,[x9]
7101f0b410  add x9,x26,#0x4d4
7101f0b414  str xzr,[x8]
7101f0b418  add x8,x26,#0x58e
7101f0b41c  str xzr,[x9]
7101f0b420  str wzr,[x26, #0x52c]
7101f0b424  str wzr,[x26, #0x530]
7101f0b428  strb wzr,[x26, #0x52a]
7101f0b42c  strh wzr,[x26, #0x528]
7101f0b430  str xzr,[x26, #0x520]
7101f0b434  str xzr,[x26, #0x518]
7101f0b438  str xzr,[x26, #0x510]
7101f0b43c  str xzr,[x26, #0x508]
7101f0b440  str w28,[x26, #0x534]
7101f0b444  str xzr,[x8]
7101f0b448  str xzr,[x26, #0x588]
7101f0b44c  str xzr,[x26, #0x580]
7101f0b450  str xzr,[x26, #0x578]
7101f0b454  str xzr,[x26, #0x570]
7101f0b458  str xzr,[x26, #0x568]
7101f0b45c  str xzr,[x26, #0x560]
7101f0b460  str xzr,[x26, #0x558]
7101f0b464  str xzr,[x26, #0x550]
7101f0b468  str xzr,[x26, #0x548]
7101f0b46c  str xzr,[x26, #0x540]
7101f0b470  str xzr,[x26, #0x538]
7101f0b474  str xzr,[x26, #0x658]
7101f0b478  str xzr,[x26, #0x650]
7101f0b47c  str xzr,[x26, #0x648]
7101f0b480  str xzr,[x26, #0x640]
7101f0b484  str xzr,[x26, #0x638]
7101f0b488  str xzr,[x26, #0x630]
7101f0b48c  str xzr,[x26, #0x628]
7101f0b490  str xzr,[x26, #0x620]
7101f0b494  str xzr,[x26, #0x618]
7101f0b498  str xzr,[x26, #0x610]
7101f0b49c  str xzr,[x26, #0x608]
7101f0b4a0  str xzr,[x26, #0x600]
7101f0b4a4  str xzr,[x26, #0x5f8]
7101f0b4a8  str xzr,[x26, #0x5f0]
7101f0b4ac  str xzr,[x26, #0x5e8]
7101f0b4b0  str xzr,[x26, #0x5e0]
7101f0b4b4  str xzr,[x26, #0x5d8]
7101f0b4b8  str xzr,[x26, #0x5d0]
7101f0b4bc  str xzr,[x26, #0x5c8]
7101f0b4c0  str xzr,[x26, #0x5c0]
7101f0b4c4  str xzr,[x26, #0x5b8]
7101f0b4c8  str xzr,[x26, #0x5b0]
7101f0b4cc  str xzr,[x26, #0x5a8]
7101f0b4d0  str xzr,[x26, #0x5a0]
7101f0b4d4  str xzr,[x26, #0x598]
7101f0b4d8  bl 0x71004f5770
7101f0b4dc  add x8,x26,#0x686
7101f0b4e0  add x0,x26,#0x738
7101f0b4e4  str wzr,[x26, #0x690]
7101f0b4e8  str xzr,[x8]
7101f0b4ec  str xzr,[x26, #0x680]
7101f0b4f0  str xzr,[x26, #0x678]
7101f0b4f4  str xzr,[x26, #0x670]
7101f0b4f8  str xzr,[x26, #0x668]
7101f0b4fc  str xzr,[x26, #0x660]
7101f0b500  str xzr,[x26, #0x730]
7101f0b504  str xzr,[x26, #0x728]
7101f0b508  str xzr,[x26, #0x720]
7101f0b50c  str xzr,[x26, #0x718]
7101f0b510  str xzr,[x26, #0x710]
7101f0b514  str xzr,[x26, #0x708]
7101f0b518  str xzr,[x26, #0x700]
7101f0b51c  str xzr,[x26, #0x6f8]
7101f0b520  str xzr,[x26, #0x6f0]
7101f0b524  str xzr,[x26, #0x6e8]
7101f0b528  str xzr,[x26, #0x6e0]
7101f0b52c  str xzr,[x26, #0x6d8]
7101f0b530  str xzr,[x26, #0x6d0]
7101f0b534  str xzr,[x26, #0x6c8]
7101f0b538  str xzr,[x26, #0x6c0]
7101f0b53c  str xzr,[x26, #0x6b8]
7101f0b540  str xzr,[x26, #0x6b0]
7101f0b544  str xzr,[x26, #0x6a8]
7101f0b548  str xzr,[x26, #0x6a0]
7101f0b54c  str xzr,[x26, #0x698]
7101f0b550  bl 0x7101f0ef30
7101f0b554  mov w8,#0x56df
7101f0b558  str xzr,[x26, x8, LSL #0x0]
7101f0b55c  mov x8,#0xff0000000000
7101f0b560  movk x8,#0x58ff, LSL #48
7101f0b564  str x8,[x26, #0x56e8]
7101f0b568  mov w8,#0x56f8
7101f0b56c  mov w9,#0x56fc
7101f0b570  str xzr,[x26, #0x56d8]
7101f0b574  str xzr,[x26, #0x56d0]
7101f0b578  str xzr,[x26, #0x56c8]
7101f0b57c  str xzr,[x26, #0x56c0]
7101f0b580  str xzr,[x26, #0x56b8]
7101f0b584  str xzr,[x26, #0x56b0]
7101f0b588  str xzr,[x26, #0x56a8]
7101f0b58c  str xzr,[x26, #0x56a0]
7101f0b590  str xzr,[x26, #0x5698]
7101f0b594  str xzr,[x26, #0x5690]
7101f0b598  str xzr,[x26, #0x5688]
7101f0b59c  str xzr,[x26, #0x5680]
7101f0b5a0  str xzr,[x26, #0x5678]
7101f0b5a4  str xzr,[x26, #0x5670]
7101f0b5a8  str xzr,[x26, #0x5668]
7101f0b5ac  str xzr,[x26, #0x5660]
7101f0b5b0  str xzr,[x26, #0x5658]
7101f0b5b4  str xzr,[x26, #0x5650]
7101f0b5b8  str xzr,[x26, #0x5648]
7101f0b5bc  str xzr,[x26, #0x56f0]
7101f0b5c0  strb wzr,[x26, x8, LSL ]
7101f0b5c4  adrp x8,0x7105314000
7101f0b5c8  str wzr,[x26, x9, LSL #0x0]
7101f0b5cc  ldr x8,[x8, #0x510]
7101f0b5d0  ldr x8,[x8]
7101f0b5d4  ldr x8,[x8, #0x268]
7101f0b5d8  ldr x8,[x8]
7101f0b5dc  ldr x8,[x8]
7101f0b5e0  add x8,x8,#0x540
7101f0b5e4  str x8,[x26, #0x5700]
7101f0b5e8  ldr x8,[x26, #0x2c0]
7101f0b5ec  ldr x19,[x8]
7101f0b5f0  adrp x8,0x710532f000
7101f0b5f4  add x8,x8,#0x4d0
7101f0b5f8  ldarb w8,[x8]
7101f0b5fc  tbz w8,#0x0,0x7101f0ee84
7101f0b600  ldr x10,[x19, #0x10]!
7101f0b604  cbz x10,0x7101f0b64c
7101f0b608  mov x9,#0x7373
7101f0b60c  movk x9,#0x4d8a, LSL #16
7101f0b610  movk x9,#0x2b, LSL #32
7101f0b614  mov x8,x19
7101f0b618  ldr x11,[x10, #0x20]
7101f0b61c  and x11,x11,#0xffffffffff
7101f0b620  cmp x11,x9
7101f0b624  cset w11,cc
7101f0b628  csel x8,x8,x10,cc
7101f0b62c  ldr x10,[x10, w11, UXTW #0x3]
7101f0b630  cbnz x10,0x7101f0b618
7101f0b634  cmp x8,x19
7101f0b638  b.eq 0x7101f0b64c
7101f0b63c  ldr x10,[x8, #0x20]
7101f0b640  and x10,x10,#0xfffffffffc
7101f0b644  cmp x10,x9
7101f0b648  b.ls 0x7101f0b734
7101f0b64c  adrp x8,0x710532f000
7101f0b650  add x8,x8,#0x4a0
7101f0b654  ldr w22,[x8]
7101f0b658  orr w19,wzr,#0xffffff
7101f0b65c  cmp w22,w19
7101f0b660  str w22,[sp, #0x48]
7101f0b664  b.ne 0x7101f0b678
7101f0b668  ldr x0,[sp, #0x18]
7101f0b66c  add x1,sp,#0x48
7101f0b670  bl 0x7103720c30
7101f0b674  b 0x7101f0b6a4
7101f0b678  adrp x20,0x7105332000
7101f0b67c  ldr x0,[x20, #0xf20]
7101f0b680  mov w1,w22
7101f0b684  bl 0x7103540a00
7101f0b688  ldr x0,[sp, #0x18]
7101f0b68c  add x1,sp,#0x48
7101f0b690  bl 0x7103720c30
7101f0b694  ldr x0,[x20, #0xf20]
7101f0b698  mov w1,w22
7101f0b69c  bl 0x7103540b10
7101f0b6a0  str w19,[sp, #0x48]
7101f0b6a4  ldr x8,[x26, #0x2d0]
7101f0b6a8  ldrb w9,[x8]
7101f0b6ac  cmp w9,#0xc
7101f0b6b0  b.ne 0x7101f0b74c
7101f0b6b4  ldur w10,[x8, #0x1]
7101f0b6b8  subs w10,w10,#0x1
7101f0b6bc  b.lt 0x7101f0b74c
7101f0b6c0  ldr x12,[sp, #0x18]
7101f0b6c4  ldr x14,[x12]
7101f0b6c8  str x14,[sp, #0x38]
7101f0b6cc  ldursw x13,[x8, #0x5]
7101f0b6d0  adrp x24,0x7104742000
7101f0b6d4  add x24,x24,#0xdbb
7101f0b6d8  ldp x12,x14,[x14, #0x20]
7101f0b6dc  add x13,x14,x13
7101f0b6e0  mov x14,#0x3b45
7101f0b6e4  movk x14,#0xa50b, LSL #16
7101f0b6e8  mov w11,wzr
7101f0b6ec  movk x14,#0x5, LSL #32
7101f0b6f0  add w15,w10,w11
7101f0b6f4  cmp w15,#0x0
7101f0b6f8  cinc w15,w15,lt
7101f0b6fc  asr w15,w15,#0x1
7101f0b700  add x16,x13,w15, SXTW  #0x3
7101f0b704  ldr w17,[x16]
7101f0b708  ldr x17,[x12, x17, LSL #0x3]
7101f0b70c  cmp x17,x14
7101f0b710  b.eq 0x7101f0b73c
7101f0b714  sub w16,w15,#0x1
7101f0b718  cmp x17,x14
7101f0b71c  csel w10,w16,w10,hi
7101f0b720  csinc w11,w11,w15,hi
7101f0b724  cmp w11,w10
7101f0b728  b.le 0x7101f0b6f0
7101f0b72c  str xzr,[sp, #0x38]
7101f0b730  b 0x7101f0b758
7101f0b734  add x8,x8,#0x28
7101f0b738  b 0x7101f0b654
7101f0b73c  ldrsw x10,[x16, #0x4]
7101f0b740  tbnz w10,#0x1f,0x7101f0b74c
7101f0b744  add x24,x8,x10
7101f0b748  b 0x7101f0b758
7101f0b74c  str xzr,[sp, #0x38]
7101f0b750  adrp x24,0x7104742000
7101f0b754  add x24,x24,#0xdbb
7101f0b758  ldrb w28,[x24]
7101f0b75c  sub w10,w28,#0xb
7101f0b760  cmp w10,#0x1
7101f0b764  str x26,[sp, #0x40]
7101f0b768  b.hi 0x7101f0bab0
7101f0b76c  ldur w20,[x24, #0x1]
7101f0b770  cmp w20,#0x1
7101f0b774  b.lt 0x7101f0bab0
7101f0b778  mov x26,#0xac3d
7101f0b77c  movk x26,#0x3a06, LSL #16
7101f0b780  mov x27,#0x9398
7101f0b784  movk x27,#0xf529, LSL #16
7101f0b788  mov x25,xzr
7101f0b78c  movk x26,#0x6, LSL #32
7101f0b790  movk x27,#0x5, LSL #32
7101f0b794  add x8,x24,#0x5
7101f0b798  str x8,[sp, #0x28]
7101f0b79c  adrp x21,0x7104742000
7101f0b7a0  add x21,x21,#0xdbb
7101f0b7a4  and w9,w28,#0xff
7101f0b7a8  mov x8,xzr
7101f0b7ac  cmp w9,#0xb
7101f0b7b0  b.ne 0x7101f0b7dc
7101f0b7b4  sxtw x9,w20
7101f0b7b8  cmp x25,x9
7101f0b7bc  mov x9,x21
7101f0b7c0  b.ge 0x7101f0b7e0
7101f0b7c4  ldr x9,[sp, #0x28]
7101f0b7c8  ubfiz x8,x25,#0x2,#0x1e
7101f0b7cc  ldrsw x8,[x9, x8, LSL #0x0]
7101f0b7d0  add x9,x24,x8
7101f0b7d4  ldr x8,[sp, #0x38]
7101f0b7d8  b 0x7101f0b7e0
7101f0b7dc  mov x9,x21
7101f0b7e0  ldrb w10,[x9]
7101f0b7e4  cmp w10,#0xc
7101f0b7e8  b.ne 0x7101f0b858
7101f0b7ec  ldur w10,[x9, #0x1]
7101f0b7f0  subs w10,w10,#0x1
7101f0b7f4  b.lt 0x7101f0b858
7101f0b7f8  ldursw x13,[x9, #0x5]
7101f0b7fc  ldp x12,x14,[x8, #0x20]
7101f0b800  mov w11,wzr
7101f0b804  add x13,x14,x13
7101f0b808  add w14,w10,w11
7101f0b80c  cmp w14,#0x0
7101f0b810  cinc w14,w14,lt
7101f0b814  asr w14,w14,#0x1
7101f0b818  add x15,x13,w14, SXTW  #0x3
7101f0b81c  ldr w16,[x15]
7101f0b820  ldr x16,[x12, x16, LSL #0x3]
7101f0b824  cmp x16,x27
7101f0b828  b.eq 0x7101f0b848
7101f0b82c  sub w15,w14,#0x1
7101f0b830  cmp x16,x27
7101f0b834  csel w10,w15,w10,hi
7101f0b838  csinc w11,w11,w14,hi
7101f0b83c  cmp w11,w10
7101f0b840  b.le 0x7101f0b808
7101f0b844  b 0x7101f0b858
7101f0b848  ldrsw x10,[x15, #0x4]
7101f0b84c  tbnz w10,#0x1f,0x7101f0b858
7101f0b850  add x9,x9,x10
7101f0b854  b 0x7101f0b860
7101f0b858  mov x8,xzr
7101f0b85c  mov x9,x21
7101f0b860  ldrb w10,[x9]
7101f0b864  cmp w10,#0x9
7101f0b868  b.ne 0x7101f0b87c
7101f0b86c  ldursw x9,[x9, #0x1]
7101f0b870  ldr x8,[x8, #0x20]
7101f0b874  ldr x23,[x8, x9, LSL #0x3]
7101f0b878  b 0x7101f0b880
7101f0b87c  mov x23,xzr
7101f0b880  mov x0,x23
7101f0b884  bl 0x7101f1e560
7101f0b888  cmp w0,#0x32
7101f0b88c  b.eq 0x7101f0ba84
7101f0b890  and w9,w28,#0xff
7101f0b894  mov w22,w0
7101f0b898  mov x8,xzr
7101f0b89c  cmp w9,#0xb
7101f0b8a0  b.ne 0x7101f0b8d0
7101f0b8a4  sxtw x9,w20
7101f0b8a8  ldr x20,[sp, #0x20]
7101f0b8ac  cmp x25,x9
7101f0b8b0  mov x9,x21
7101f0b8b4  b.ge 0x7101f0b8d8
7101f0b8b8  ldr x9,[sp, #0x28]
7101f0b8bc  ubfiz x8,x25,#0x2,#0x1e
7101f0b8c0  ldrsw x8,[x9, x8, LSL #0x0]
7101f0b8c4  add x9,x24,x8
7101f0b8c8  ldr x8,[sp, #0x38]
7101f0b8cc  b 0x7101f0b8d8
7101f0b8d0  ldr x20,[sp, #0x20]
7101f0b8d4  mov x9,x21
7101f0b8d8  ldrb w10,[x9]
7101f0b8dc  cmp w10,#0xc
7101f0b8e0  b.ne 0x7101f0b950
7101f0b8e4  ldur w10,[x9, #0x1]
7101f0b8e8  subs w10,w10,#0x1
7101f0b8ec  b.lt 0x7101f0b950
7101f0b8f0  ldursw x13,[x9, #0x5]
7101f0b8f4  ldp x12,x14,[x8, #0x20]
7101f0b8f8  mov w11,wzr
7101f0b8fc  add x13,x14,x13
7101f0b900  add w14,w10,w11
7101f0b904  cmp w14,#0x0
7101f0b908  cinc w14,w14,lt
7101f0b90c  asr w14,w14,#0x1
7101f0b910  add x15,x13,w14, SXTW  #0x3
7101f0b914  ldr w16,[x15]
7101f0b918  ldr x16,[x12, x16, LSL #0x3]
7101f0b91c  cmp x16,x26
7101f0b920  b.eq 0x7101f0b940
7101f0b924  sub w15,w14,#0x1
7101f0b928  cmp x16,x26
7101f0b92c  csel w10,w15,w10,hi
7101f0b930  csinc w11,w11,w14,hi
7101f0b934  cmp w11,w10
7101f0b938  b.le 0x7101f0b900
7101f0b93c  b 0x7101f0b950
7101f0b940  ldrsw x10,[x15, #0x4]
7101f0b944  tbnz w10,#0x1f,0x7101f0b950
7101f0b948  add x9,x9,x10
7101f0b94c  b 0x7101f0b958
7101f0b950  mov x8,xzr
7101f0b954  mov x9,x21
7101f0b958  ldrb w10,[x9]
7101f0b95c  cmp w10,#0x9
7101f0b960  b.ne 0x7101f0b974
7101f0b964  ldursw x9,[x9, #0x1]
7101f0b968  ldr x8,[x8, #0x20]
7101f0b96c  ldr x0,[x8, x9, LSL #0x3]
7101f0b970  b 0x7101f0b978
7101f0b974  mov x0,xzr
7101f0b978  bl 0x7101f1e8d0
7101f0b97c  and x19,x23,#0xffffffffff
7101f0b980  ldr x23,[x20]
7101f0b984  cbnz x23,0x7101f0b9a0
7101f0b988  mov x23,x20
7101f0b98c  ldr x8,[x20]
7101f0b990  cbnz x8,0x7101f0ba84
7101f0b994  b 0x7101f0b9e0
7101f0b998  mov x20,x23
7101f0b99c  mov x23,x8
7101f0b9a0  ldr x8,[x23, #0x20]
7101f0b9a4  cmp x19,x8
7101f0b9a8  b.cs 0x7101f0b9b8
7101f0b9ac  ldr x8,[x23]
7101f0b9b0  cbnz x8,0x7101f0b998
7101f0b9b4  b 0x7101f0b9d4
7101f0b9b8  cmp x8,x19
7101f0b9bc  b.cs 0x7101f0b9d8
7101f0b9c0  mov x20,x23
7101f0b9c4  ldr x8,[x20, #0x8]!
7101f0b9c8  cbz x8,0x7101f0b9d8
7101f0b9cc  mov x23,x8
7101f0b9d0  b 0x7101f0b9a0
7101f0b9d4  mov x20,x23
7101f0b9d8  ldr x8,[x20]
7101f0b9dc  cbnz x8,0x7101f0ba84
7101f0b9e0  mov w22,w22
7101f0b9e4  bfm x22,x0,#0x20,#0x1f
7101f0b9e8  mov w0,#0x10
7101f0b9ec  orr w1,wzr,#0x30
7101f0b9f0  bl 0x710392e290
7101f0b9f4  mov x1,x0
7101f0b9f8  cbnz x0,0x7101f0ba44
7101f0b9fc  adrp x8,0x7105332000
7101f0ba00  ldr x0,[x8, #0xf00]
7101f0ba04  cbz x0,0x7101f0ba40
7101f0ba08  orr w8,wzr,#0x30
7101f0ba0c  stur wzr,[x29, #-0xe0]
7101f0ba10  sub x1,x29,#0xe0
7101f0ba14  str x8,[sp, #0x50]
7101f0ba18  ldr x8,[x0]
7101f0ba1c  ldr x8,[x8, #0x30]
7101f0ba20  add x2,sp,#0x50
7101f0ba24  blr x8
7101f0ba28  tbz w0,#0x0,0x7101f0ba40
7101f0ba2c  mov w0,#0x10
7101f0ba30  orr w1,wzr,#0x30
7101f0ba34  bl 0x710392e290
7101f0ba38  mov x1,x0
7101f0ba3c  cbnz x0,0x7101f0ba44
7101f0ba40  mov x1,xzr
7101f0ba44  stp x19,x22,[x1, #0x20]
7101f0ba48  str x23,[x1, #0x10]
7101f0ba4c  stp xzr,xzr,[x1]
7101f0ba50  ldr x19,[sp, #0x40]
7101f0ba54  str x1,[x20]
7101f0ba58  ldr x8,[x19, #0x2f8]
7101f0ba5c  ldr x8,[x8]
7101f0ba60  cbz x8,0x7101f0ba6c
7101f0ba64  str x8,[x19, #0x2f8]
7101f0ba68  ldr x1,[x20]
7101f0ba6c  ldr x0,[x19, #0x300]
7101f0ba70  bl 0x71003e59f0
7101f0ba74  ldr x8,[x19, #0x308]
7101f0ba78  add x8,x8,#0x1
7101f0ba7c  str x8,[x19, #0x308]
7101f0ba80  ldrb w28,[x24]
7101f0ba84  sub w8,w28,#0xb
7101f0ba88  and w8,w8,#0xff
7101f0ba8c  cmp w8,#0x1
7101f0ba90  b.hi 0x7101f0baa4
7101f0ba94  ldursw x20,[x24, #0x1]
7101f0ba98  add x25,x25,#0x1
7101f0ba9c  cmp x25,x20
7101f0baa0  b.lt 0x7101f0b7a4
7101f0baa4  ldr x26,[sp, #0x40]
7101f0baa8  ldr x8,[x26, #0x2d0]
7101f0baac  ldrb w9,[x8]
7101f0bab0  mov w18,#0x56a8
7101f0bab4  cmp w9,#0xc
7101f0bab8  b.ne 0x7101f0bb4c
7101f0babc  ldur w10,[x8, #0x1]
7101f0bac0  subs w10,w10,#0x1
7101f0bac4  b.lt 0x7101f0bb4c
7101f0bac8  ldr x12,[sp, #0x18]
7101f0bacc  ldr x14,[x12]
7101f0bad0  str x14,[sp, #0x28]
7101f0bad4  ldursw x13,[x8, #0x5]
7101f0bad8  adrp x0,0x7104742000
7101f0badc  add x0,x0,#0xdbb
7101f0bae0  ldp x12,x14,[x14, #0x20]
7101f0bae4  add x13,x14,x13
7101f0bae8  mov x14,#0xa9a1
7101f0baec  movk x14,#0x7222, LSL #16
7101f0baf0  mov w11,wzr
7101f0baf4  movk x14,#0x6, LSL #32
7101f0baf8  add w15,w10,w11
7101f0bafc  cmp w15,#0x0
7101f0bb00  cinc w15,w15,lt
7101f0bb04  asr w15,w15,#0x1
7101f0bb08  add x16,x13,w15, SXTW  #0x3
7101f0bb0c  ldr w17,[x16]
7101f0bb10  ldr x17,[x12, x17, LSL #0x3]
7101f0bb14  cmp x17,x14
7101f0bb18  b.eq 0x7101f0bb3c
7101f0bb1c  sub w16,w15,#0x1
7101f0bb20  cmp x17,x14
7101f0bb24  csel w10,w16,w10,hi
7101f0bb28  csinc w11,w11,w15,hi
7101f0bb2c  cmp w11,w10
7101f0bb30  b.le 0x7101f0baf8
7101f0bb34  str xzr,[sp, #0x28]
7101f0bb38  b 0x7101f0bb58
7101f0bb3c  ldrsw x10,[x16, #0x4]
7101f0bb40  tbnz w10,#0x1f,0x7101f0bb4c
7101f0bb44  add x0,x8,x10
7101f0bb48  b 0x7101f0bb58
7101f0bb4c  str xzr,[sp, #0x28]
7101f0bb50  adrp x0,0x7104742000
7101f0bb54  add x0,x0,#0xdbb
7101f0bb58  ldrb w21,[x0]
7101f0bb5c  sub w10,w21,#0xb
7101f0bb60  cmp w10,#0x1
7101f0bb64  b.hi 0x7101f0bfbc
7101f0bb68  ldur w24,[x0, #0x1]
7101f0bb6c  cmp w24,#0x1
7101f0bb70  b.lt 0x7101f0bfbc
7101f0bb74  mov x28,#0xac3d
7101f0bb78  movk x28,#0x3a06, LSL #16
7101f0bb7c  mov x26,#0x9398
7101f0bb80  movk x26,#0xf529, LSL #16
7101f0bb84  mov x20,#0x3b45
7101f0bb88  movk x20,#0xa50b, LSL #16
7101f0bb8c  mov x27,xzr
7101f0bb90  str x0,[sp, #0x38]
7101f0bb94  movk x28,#0x6, LSL #32
7101f0bb98  movk x26,#0x5, LSL #32
7101f0bb9c  movk x20,#0x5, LSL #32
7101f0bba0  add x8,x0,#0x5
7101f0bba4  str x8,[sp, #0x20]
7101f0bba8  adrp x19,0x7104742000
7101f0bbac  add x19,x19,#0xdbb
7101f0bbb0  and w9,w21,#0xff
7101f0bbb4  mov x8,xzr
7101f0bbb8  cmp w9,#0xb
7101f0bbbc  b.ne 0x7101f0bbe8
7101f0bbc0  sxtw x9,w24
7101f0bbc4  cmp x27,x9
7101f0bbc8  mov x9,x19
7101f0bbcc  b.ge 0x7101f0bbec
7101f0bbd0  ldr x9,[sp, #0x20]
7101f0bbd4  ubfiz x8,x27,#0x2,#0x1e
7101f0bbd8  ldrsw x8,[x9, x8, LSL #0x0]
7101f0bbdc  add x9,x0,x8
7101f0bbe0  ldr x8,[sp, #0x28]
7101f0bbe4  b 0x7101f0bbec
7101f0bbe8  mov x9,x19
7101f0bbec  ldrb w10,[x9]
7101f0bbf0  cmp w10,#0xc
7101f0bbf4  b.ne 0x7101f0bc64
7101f0bbf8  ldur w10,[x9, #0x1]
7101f0bbfc  subs w10,w10,#0x1
7101f0bc00  b.lt 0x7101f0bc64
7101f0bc04  ldursw x13,[x9, #0x5]
7101f0bc08  ldp x12,x14,[x8, #0x20]
7101f0bc0c  mov w11,wzr
7101f0bc10  add x13,x14,x13
7101f0bc14  add w14,w10,w11
7101f0bc18  cmp w14,#0x0
7101f0bc1c  cinc w14,w14,lt
7101f0bc20  asr w14,w14,#0x1
7101f0bc24  add x15,x13,w14, SXTW  #0x3
7101f0bc28  ldr w16,[x15]
7101f0bc2c  ldr x16,[x12, x16, LSL #0x3]
7101f0bc30  cmp x16,x26
7101f0bc34  b.eq 0x7101f0bc54
7101f0bc38  sub w15,w14,#0x1
7101f0bc3c  cmp x16,x26
7101f0bc40  csel w10,w15,w10,hi
7101f0bc44  csinc w11,w11,w14,hi
7101f0bc48  cmp w11,w10
7101f0bc4c  b.le 0x7101f0bc14
7101f0bc50  b 0x7101f0bc64
7101f0bc54  ldrsw x10,[x15, #0x4]
7101f0bc58  tbnz w10,#0x1f,0x7101f0bc64
7101f0bc5c  add x9,x9,x10
7101f0bc60  b 0x7101f0bc6c
7101f0bc64  mov x8,xzr
7101f0bc68  mov x9,x19
7101f0bc6c  ldrb w10,[x9]
7101f0bc70  cmp w10,#0x9
7101f0bc74  b.ne 0x7101f0bc88
7101f0bc78  ldursw x9,[x9, #0x1]
7101f0bc7c  ldr x8,[x8, #0x20]
7101f0bc80  ldr x23,[x8, x9, LSL #0x3]
7101f0bc84  b 0x7101f0bc8c
7101f0bc88  mov x23,xzr
7101f0bc8c  mov x0,x23
7101f0bc90  bl 0x7101f1e560
7101f0bc94  cmp w0,#0x32
7101f0bc98  b.eq 0x7101f0bf80
7101f0bc9c  and w9,w21,#0xff
7101f0bca0  mov w22,w0
7101f0bca4  mov x8,xzr
7101f0bca8  cmp w9,#0xb
7101f0bcac  b.ne 0x7101f0bcdc
7101f0bcb0  sxtw x9,w24
7101f0bcb4  cmp x27,x9
7101f0bcb8  mov x9,x19
7101f0bcbc  b.ge 0x7101f0bce0
7101f0bcc0  ldr x9,[sp, #0x20]
7101f0bcc4  ubfiz x8,x27,#0x2,#0x1e
7101f0bcc8  ldrsw x8,[x9, x8, LSL #0x0]
7101f0bccc  ldr x9,[sp, #0x38]
7101f0bcd0  add x9,x9,x8
7101f0bcd4  ldr x8,[sp, #0x28]
7101f0bcd8  b 0x7101f0bce0
7101f0bcdc  mov x9,x19
7101f0bce0  ldrb w10,[x9]
7101f0bce4  cmp w10,#0xc
7101f0bce8  b.ne 0x7101f0bd58
7101f0bcec  ldur w10,[x9, #0x1]
7101f0bcf0  subs w10,w10,#0x1
7101f0bcf4  b.lt 0x7101f0bd58
7101f0bcf8  ldursw x13,[x9, #0x5]
7101f0bcfc  ldp x12,x14,[x8, #0x20]
7101f0bd00  mov w11,wzr
7101f0bd04  add x13,x14,x13
7101f0bd08  add w14,w10,w11
7101f0bd0c  cmp w14,#0x0
7101f0bd10  cinc w14,w14,lt
7101f0bd14  asr w14,w14,#0x1
7101f0bd18  add x15,x13,w14, SXTW  #0x3
7101f0bd1c  ldr w16,[x15]
7101f0bd20  ldr x16,[x12, x16, LSL #0x3]
7101f0bd24  cmp x16,x20
7101f0bd28  b.eq 0x7101f0bd48
7101f0bd2c  sub w15,w14,#0x1
7101f0bd30  cmp x16,x20
7101f0bd34  csel w10,w15,w10,hi
7101f0bd38  csinc w11,w11,w14,hi
7101f0bd3c  cmp w11,w10
7101f0bd40  b.le 0x7101f0bd08
7101f0bd44  b 0x7101f0bd58
7101f0bd48  ldrsw x10,[x15, #0x4]
7101f0bd4c  tbnz w10,#0x1f,0x7101f0bd58
7101f0bd50  add x9,x9,x10
7101f0bd54  b 0x7101f0bd60
7101f0bd58  mov x8,xzr
7101f0bd5c  mov x9,x19
7101f0bd60  ldrb w10,[x9]
7101f0bd64  cmp w10,#0x9
7101f0bd68  b.ne 0x7101f0bd80
7101f0bd6c  ldursw x9,[x9, #0x1]
7101f0bd70  ldr x8,[x8, #0x20]
7101f0bd74  ldr x8,[x8, x9, LSL #0x3]
7101f0bd78  str x8,[sp, #0x8]
7101f0bd7c  b 0x7101f0bd84
7101f0bd80  str xzr,[sp, #0x8]
7101f0bd84  and w9,w21,#0xff
7101f0bd88  mov x8,xzr
7101f0bd8c  cmp w9,#0xb
7101f0bd90  b.ne 0x7101f0bdc0
7101f0bd94  sxtw x9,w24
7101f0bd98  cmp x27,x9
7101f0bd9c  mov x9,x19
7101f0bda0  b.ge 0x7101f0bdc4
7101f0bda4  ldr x9,[sp, #0x20]
7101f0bda8  ubfiz x8,x27,#0x2,#0x1e
7101f0bdac  ldrsw x8,[x9, x8, LSL #0x0]
7101f0bdb0  ldr x9,[sp, #0x38]
7101f0bdb4  add x9,x9,x8
7101f0bdb8  ldr x8,[sp, #0x28]
7101f0bdbc  b 0x7101f0bdc4
7101f0bdc0  mov x9,x19
7101f0bdc4  ldrb w10,[x9]
7101f0bdc8  cmp w10,#0xc
7101f0bdcc  b.ne 0x7101f0be3c
7101f0bdd0  ldur w10,[x9, #0x1]
7101f0bdd4  subs w10,w10,#0x1
7101f0bdd8  b.lt 0x7101f0be3c
7101f0bddc  ldursw x13,[x9, #0x5]
7101f0bde0  ldp x12,x14,[x8, #0x20]
7101f0bde4  mov w11,wzr
7101f0bde8  add x13,x14,x13
7101f0bdec  add w14,w10,w11
7101f0bdf0  cmp w14,#0x0
7101f0bdf4  cinc w14,w14,lt
7101f0bdf8  asr w14,w14,#0x1
7101f0bdfc  add x15,x13,w14, SXTW  #0x3
7101f0be00  ldr w16,[x15]
7101f0be04  ldr x16,[x12, x16, LSL #0x3]
7101f0be08  cmp x16,x28
7101f0be0c  b.eq 0x7101f0be2c
7101f0be10  sub w15,w14,#0x1
7101f0be14  cmp x16,x28
7101f0be18  csel w10,w15,w10,hi
7101f0be1c  csinc w11,w11,w14,hi
7101f0be20  cmp w11,w10
7101f0be24  b.le 0x7101f0bdec
7101f0be28  b 0x7101f0be3c
7101f0be2c  ldrsw x10,[x15, #0x4]
7101f0be30  tbnz w10,#0x1f,0x7101f0be3c
7101f0be34  add x9,x9,x10
7101f0be38  b 0x7101f0be44
7101f0be3c  mov x8,xzr
7101f0be40  mov x9,x19
7101f0be44  ldrb w10,[x9]
7101f0be48  cmp w10,#0x9
7101f0be4c  b.ne 0x7101f0be60
7101f0be50  ldursw x9,[x9, #0x1]
7101f0be54  ldr x8,[x8, #0x20]
7101f0be58  ldr x0,[x8, x9, LSL #0x3]
7101f0be5c  b 0x7101f0be64
7101f0be60  mov x0,xzr
7101f0be64  bl 0x7101f1e8d0
7101f0be68  and x19,x23,#0xffffffffff
7101f0be6c  ldr x23,[sp, #0x10]
7101f0be70  ldr x25,[x23]
7101f0be74  mov w24,w0
7101f0be78  cbnz x25,0x7101f0be94
7101f0be7c  mov x25,x23
7101f0be80  ldr x8,[x23]
7101f0be84  cbnz x8,0x7101f0bf80
7101f0be88  b 0x7101f0bed4
7101f0be8c  mov x23,x25
7101f0be90  mov x25,x8
7101f0be94  ldr x8,[x25, #0x20]
7101f0be98  cmp x19,x8
7101f0be9c  b.cs 0x7101f0beac
7101f0bea0  ldr x8,[x25]
7101f0bea4  cbnz x8,0x7101f0be8c
7101f0bea8  b 0x7101f0bec8
7101f0beac  cmp x8,x19
7101f0beb0  b.cs 0x7101f0becc
7101f0beb4  mov x23,x25
7101f0beb8  ldr x8,[x23, #0x8]!
7101f0bebc  cbz x8,0x7101f0becc
7101f0bec0  mov x25,x8
7101f0bec4  b 0x7101f0be94
7101f0bec8  mov x23,x25
7101f0becc  ldr x8,[x23]
7101f0bed0  cbnz x8,0x7101f0bf80
7101f0bed4  ldr x8,[sp, #0x8]
7101f0bed8  mov w0,#0x10
7101f0bedc  orr w1,wzr,#0x38
7101f0bee0  and x21,x8,#0xffffffffff
7101f0bee4  bl 0x710392e290
7101f0bee8  mov x1,x0
7101f0beec  cbnz x0,0x7101f0bf38
7101f0bef0  adrp x8,0x7105332000
7101f0bef4  ldr x0,[x8, #0xf00]
7101f0bef8  cbz x0,0x7101f0bf34
7101f0befc  orr w8,wzr,#0x38
7101f0bf00  stur wzr,[x29, #-0xe0]
7101f0bf04  sub x1,x29,#0xe0
7101f0bf08  str x8,[sp, #0x50]
7101f0bf0c  ldr x8,[x0]
7101f0bf10  ldr x8,[x8, #0x30]
7101f0bf14  add x2,sp,#0x50
7101f0bf18  blr x8
7101f0bf1c  tbz w0,#0x0,0x7101f0bf34
7101f0bf20  mov w0,#0x10
7101f0bf24  orr w1,wzr,#0x38
7101f0bf28  bl 0x710392e290
7101f0bf2c  mov x1,x0
7101f0bf30  cbnz x0,0x7101f0bf38
7101f0bf34  mov x1,xzr
7101f0bf38  stp x19,x21,[x1, #0x20]
7101f0bf3c  stp w22,w24,[x1, #0x30]
7101f0bf40  str x25,[x1, #0x10]
7101f0bf44  stp xzr,xzr,[x1]
7101f0bf48  ldr x19,[sp, #0x40]
7101f0bf4c  str x1,[x23]
7101f0bf50  ldr x8,[x19, #0x310]
7101f0bf54  ldr x8,[x8]
7101f0bf58  cbz x8,0x7101f0bf64
7101f0bf5c  str x8,[x19, #0x310]
7101f0bf60  ldr x1,[x23]
7101f0bf64  ldr x0,[x19, #0x318]
7101f0bf68  ldr x21,[sp, #0x38]
7101f0bf6c  bl 0x71003e59f0
7101f0bf70  ldr x8,[x19, #0x320]
7101f0bf74  add x8,x8,#0x1
7101f0bf78  str x8,[x19, #0x320]
7101f0bf7c  ldrb w21,[x21]
7101f0bf80  ldr x0,[sp, #0x38]
7101f0bf84  sub w8,w21,#0xb
7101f0bf88  and w8,w8,#0xff
7101f0bf8c  cmp w8,#0x1
7101f0bf90  adrp x19,0x7104742000
7101f0bf94  add x19,x19,#0xdbb
7101f0bf98  b.hi 0x7101f0bfac
7101f0bf9c  ldursw x24,[x0, #0x1]
7101f0bfa0  add x27,x27,#0x1
7101f0bfa4  cmp x27,x24
7101f0bfa8  b.lt 0x7101f0bbb0
7101f0bfac  ldr x26,[sp, #0x40]
7101f0bfb0  ldr x8,[x26, #0x2d0]
7101f0bfb4  ldrb w9,[x8]
7101f0bfb8  mov w18,#0x56a8
7101f0bfbc  add x10,x26,x18
7101f0bfc0  cmp w9,#0xc
7101f0bfc4  str x10,[sp, #0x38]
7101f0bfc8  b.ne 0x7101f0c058
7101f0bfcc  ldur w9,[x8, #0x1]
7101f0bfd0  subs w9,w9,#0x1
7101f0bfd4  b.lt 0x7101f0c058
7101f0bfd8  ldr x13,[x26, #0x2c8]
7101f0bfdc  str x13,[sp, #0x20]
7101f0bfe0  ldursw x12,[x8, #0x5]
7101f0bfe4  ldp x11,x13,[x13, #0x20]
7101f0bfe8  add x12,x13,x12
7101f0bfec  mov x13,#0x6e08
7101f0bff0  movk x13,#0x50a0, LSL #16
7101f0bff4  mov w10,wzr
7101f0bff8  adrp x28,0x7104742000
7101f0bffc  add x28,x28,#0xdbb
7101f0c000  movk x13,#0x12, LSL #32
7101f0c004  add w14,w9,w10
7101f0c008  cmp w14,#0x0
7101f0c00c  cinc w14,w14,lt
7101f0c010  asr w14,w14,#0x1
7101f0c014  add x15,x12,w14, SXTW  #0x3
7101f0c018  ldr w16,[x15]
7101f0c01c  ldr x16,[x11, x16, LSL #0x3]
7101f0c020  cmp x16,x13
7101f0c024  b.eq 0x7101f0c048
7101f0c028  sub w15,w14,#0x1
7101f0c02c  cmp x16,x13
7101f0c030  csel w9,w15,w9,hi
7101f0c034  csinc w10,w10,w14,hi
7101f0c038  cmp w10,w9
7101f0c03c  b.le 0x7101f0c004
7101f0c040  str xzr,[sp, #0x20]
7101f0c044  b 0x7101f0c064
7101f0c048  ldrsw x9,[x15, #0x4]
7101f0c04c  tbnz w9,#0x1f,0x7101f0c058
7101f0c050  add x28,x8,x9
7101f0c054  b 0x7101f0c064
7101f0c058  str xzr,[sp, #0x20]
7101f0c05c  adrp x28,0x7104742000
7101f0c060  add x28,x28,#0xdbb
7101f0c064  ldrb w8,[x28]
7101f0c068  sub w9,w8,#0xb
7101f0c06c  cmp w9,#0x1
7101f0c070  b.hi 0x7101f0c90c
7101f0c074  ldur w10,[x28, #0x1]
7101f0c078  cmp w10,#0x1
7101f0c07c  b.lt 0x7101f0c90c
7101f0c080  add x9,x28,#0x5
7101f0c084  str x9,[sp, #0x10]
7101f0c088  adrp x9,0x7104472000
7101f0c08c  ldr s9,[x9, #0xc34]
7101f0c090  adrp x9,0x7104473000
7101f0c094  ldr s10,[x9, #0x20c]
7101f0c098  adrp x9,0x7104472000
7101f0c09c  ldr s11,[x9, #0xf0c]
7101f0c0a0  adrp x9,0x7104472000
7101f0c0a4  ldr s12,[x9, #0xb8c]
7101f0c0a8  adrp x9,0x7104473000
7101f0c0ac  ldr s8,[x9, #0x730]
7101f0c0b0  adrp x9,0x7104473000
7101f0c0b4  ldr s13,[x9, #0x844]
7101f0c0b8  adrp x9,0x7104471000
7101f0c0bc  ldr s14,[x9, #0xecc]
7101f0c0c0  mov x27,#0xd360
7101f0c0c4  movk x27,#0x78ef, LSL #16
7101f0c0c8  mov x0,#0xc304
7101f0c0cc  movk x0,#0x6558, LSL #16
7101f0c0d0  mov x1,#0x378b
7101f0c0d4  movk x1,#0x1532, LSL #16
7101f0c0d8  mov x18,#0xbc4f
7101f0c0dc  movk x18,#0x7f24, LSL #16
7101f0c0e0  mov x2,#0xac2b
7101f0c0e4  movk x2,#0x6293, LSL #16
7101f0c0e8  mov x3,#0x58a4
7101f0c0ec  movk x3,#0x12f9, LSL #16
7101f0c0f0  mov x22,xzr
7101f0c0f4  movk x27,#0x8, LSL #32
7101f0c0f8  movk x0,#0x8, LSL #32
7101f0c0fc  movk x1,#0x8, LSL #32
7101f0c100  movk x18,#0x6, LSL #32
7101f0c104  movk x2,#0x6, LSL #32
7101f0c108  movk x3,#0x6, LSL #32
7101f0c10c  adrp x4,0x7104742000
7101f0c110  add x4,x4,#0xdbb
7101f0c114  and w8,w8,#0xff
7101f0c118  mov x9,xzr
7101f0c11c  cmp w8,#0xb
7101f0c120  b.ne 0x7101f0c14c
7101f0c124  sxtw x8,w10
7101f0c128  cmp x22,x8
7101f0c12c  mov x8,x4
7101f0c130  b.ge 0x7101f0c150
7101f0c134  ldr x9,[sp, #0x10]
7101f0c138  ubfiz x8,x22,#0x2,#0x1e
7101f0c13c  ldrsw x8,[x9, x8, LSL #0x0]
7101f0c140  ldr x9,[sp, #0x20]
7101f0c144  add x8,x28,x8
7101f0c148  b 0x7101f0c150
7101f0c14c  mov x8,x4
7101f0c150  ldrb w11,[x8]
7101f0c154  cmp w11,#0xc
7101f0c158  mov x10,x4
7101f0c15c  b.ne 0x7101f0c1d0
7101f0c160  ldur w10,[x8, #0x1]
7101f0c164  subs w10,w10,#0x1
7101f0c168  b.lt 0x7101f0c1b8
7101f0c16c  ldursw x14,[x8, #0x5]
7101f0c170  ldp x13,x15,[x9, #0x20]
7101f0c174  mov w12,wzr
7101f0c178  add x14,x15,x14
7101f0c17c  add w15,w10,w12
7101f0c180  cmp w15,#0x0
7101f0c184  cinc w15,w15,lt
7101f0c188  asr w15,w15,#0x1
7101f0c18c  add x16,x14,w15, SXTW  #0x3
7101f0c190  ldr w17,[x16]
7101f0c194  ldr x17,[x13, x17, LSL #0x3]
7101f0c198  cmp x17,x18
7101f0c19c  b.eq 0x7101f0c1c0
7101f0c1a0  sub w16,w15,#0x1
7101f0c1a4  cmp x17,x18
7101f0c1a8  csel w10,w16,w10,hi
7101f0c1ac  csinc w12,w12,w15,hi
7101f0c1b0  cmp w12,w10
7101f0c1b4  b.le 0x7101f0c17c
7101f0c1b8  mov x10,x4
7101f0c1bc  b 0x7101f0c1d0
7101f0c1c0  ldrsw x10,[x16, #0x4]
7101f0c1c4  add x12,x8,x10
7101f0c1c8  tst w10,#0x80000000
7101f0c1cc  csel x10,x4,x12,ne
7101f0c1d0  ldrb w12,[x10]
7101f0c1d4  sub w12,w12,#0x1
7101f0c1d8  cmp w12,#0x6
7101f0c1dc  b.hi 0x7101f0c204
7101f0c1e0  adrp x13,0x71044fc000
7101f0c1e4  add x13,x13,#0x388
7101f0c1e8  ldrsw x12,[x13, x12, LSL #0x2]
7101f0c1ec  add x12,x12,x13
7101f0c1f0  br x12
7101f0c1f4  ldrb w10,[x10, #0x1]
7101f0c1f8  b 0x7101f0c220
7101f0c1fc  ldur w10,[x10, #0x1]
7101f0c200  b 0x7101f0c220
7101f0c204  mov w10,wzr
7101f0c208  b 0x7101f0c220
7101f0c20c  ldursh w10,[x10, #0x1]
7101f0c210  b 0x7101f0c220
7101f0c214  ldrsb w10,[x10, #0x1]
7101f0c218  b 0x7101f0c220
7101f0c21c  ldurh w10,[x10, #0x1]
7101f0c220  cmp w11,#0xc
7101f0c224  mov x12,x4
7101f0c228  b.ne 0x7101f0c29c
7101f0c22c  ldur w12,[x8, #0x1]
7101f0c230  subs w12,w12,#0x1
7101f0c234  b.lt 0x7101f0c298
7101f0c238  ldursw x15,[x8, #0x5]
7101f0c23c  ldp x14,x16,[x9, #0x20]
7101f0c240  mov w13,wzr
7101f0c244  add x15,x16,x15
7101f0c248  add w16,w12,w13
7101f0c24c  cmp w16,#0x0
7101f0c250  cinc w16,w16,lt
7101f0c254  asr w16,w16,#0x1
7101f0c258  add x17,x15,w16, SXTW  #0x3
7101f0c25c  ldr w18,[x17]
7101f0c260  ldr x18,[x14, x18, LSL #0x3]
7101f0c264  cmp x18,x3
7101f0c268  b.eq 0x7101f0c288
7101f0c26c  sub w17,w16,#0x1
7101f0c270  cmp x18,x3
7101f0c274  csel w12,w17,w12,hi
7101f0c278  csinc w13,w13,w16,hi
7101f0c27c  cmp w13,w12
7101f0c280  b.le 0x7101f0c248
7101f0c284  b 0x7101f0c298
7101f0c288  ldrsw x12,[x17, #0x4]
7101f0c28c  tbnz w12,#0x1f,0x7101f0c298
7101f0c290  add x12,x8,x12
7101f0c294  b 0x7101f0c29c
7101f0c298  mov x12,x4
7101f0c29c  ldrb w13,[x12]
7101f0c2a0  sub w13,w13,#0x1
7101f0c2a4  cmp w13,#0x6
7101f0c2a8  b.hi 0x7101f0c2d0
7101f0c2ac  adrp x14,0x71044fc000
7101f0c2b0  add x14,x14,#0x3a4
7101f0c2b4  ldrsw x13,[x14, x13, LSL #0x2]
7101f0c2b8  add x13,x13,x14
7101f0c2bc  br x13
7101f0c2c0  ldrb w23,[x12, #0x1]
7101f0c2c4  b 0x7101f0c2ec
7101f0c2c8  ldur w23,[x12, #0x1]
7101f0c2cc  b 0x7101f0c2ec
7101f0c2d0  mov w23,wzr
7101f0c2d4  b 0x7101f0c2ec
7101f0c2d8  ldursh w23,[x12, #0x1]
7101f0c2dc  b 0x7101f0c2ec
7101f0c2e0  ldrsb w23,[x12, #0x1]
7101f0c2e4  b 0x7101f0c2ec
7101f0c2e8  ldurh w23,[x12, #0x1]
7101f0c2ec  cmp w11,#0xc
7101f0c2f0  mov x12,x4
7101f0c2f4  b.ne 0x7101f0c368
7101f0c2f8  ldur w12,[x8, #0x1]
7101f0c2fc  subs w12,w12,#0x1
7101f0c300  b.lt 0x7101f0c364
7101f0c304  ldursw x15,[x8, #0x5]
7101f0c308  ldp x14,x16,[x9, #0x20]
7101f0c30c  mov w13,wzr
7101f0c310  add x15,x16,x15
7101f0c314  add w16,w12,w13
7101f0c318  cmp w16,#0x0
7101f0c31c  cinc w16,w16,lt
7101f0c320  asr w16,w16,#0x1
7101f0c324  add x17,x15,w16, SXTW  #0x3
7101f0c328  ldr w18,[x17]
7101f0c32c  ldr x18,[x14, x18, LSL #0x3]
7101f0c330  cmp x18,x2
7101f0c334  b.eq 0x7101f0c354
7101f0c338  sub w17,w16,#0x1
7101f0c33c  cmp x18,x2
7101f0c340  csel w12,w17,w12,hi
7101f0c344  csinc w13,w13,w16,hi
7101f0c348  cmp w13,w12
7101f0c34c  b.le 0x7101f0c314
7101f0c350  b 0x7101f0c364
7101f0c354  ldrsw x12,[x17, #0x4]
7101f0c358  tbnz w12,#0x1f,0x7101f0c364
7101f0c35c  add x12,x8,x12
7101f0c360  b 0x7101f0c368
7101f0c364  mov x12,x4
7101f0c368  ldrb w13,[x12]
7101f0c36c  sub w13,w13,#0x1
7101f0c370  cmp w13,#0x6
7101f0c374  b.hi 0x7101f0c39c
7101f0c378  adrp x14,0x71044fc000
7101f0c37c  add x14,x14,#0x3c0
7101f0c380  ldrsw x13,[x14, x13, LSL #0x2]
7101f0c384  add x13,x13,x14
7101f0c388  br x13
7101f0c38c  ldrb w24,[x12, #0x1]
7101f0c390  b 0x7101f0c3b8
7101f0c394  ldur w24,[x12, #0x1]
7101f0c398  b 0x7101f0c3b8
7101f0c39c  mov w24,wzr
7101f0c3a0  b 0x7101f0c3b8
7101f0c3a4  ldursh w24,[x12, #0x1]
7101f0c3a8  b 0x7101f0c3b8
7101f0c3ac  ldrsb w24,[x12, #0x1]
7101f0c3b0  b 0x7101f0c3b8
7101f0c3b4  ldurh w24,[x12, #0x1]
7101f0c3b8  cmp w11,#0xc
7101f0c3bc  mov x12,x4
7101f0c3c0  b.ne 0x7101f0c434
7101f0c3c4  ldur w12,[x8, #0x1]
7101f0c3c8  subs w12,w12,#0x1
7101f0c3cc  b.lt 0x7101f0c430
7101f0c3d0  ldursw x15,[x8, #0x5]
7101f0c3d4  ldp x14,x16,[x9, #0x20]
7101f0c3d8  mov w13,wzr
7101f0c3dc  add x15,x16,x15
7101f0c3e0  add w16,w12,w13
7101f0c3e4  cmp w16,#0x0
7101f0c3e8  cinc w16,w16,lt
7101f0c3ec  asr w16,w16,#0x1
7101f0c3f0  add x17,x15,w16, SXTW  #0x3
7101f0c3f4  ldr w18,[x17]
7101f0c3f8  ldr x18,[x14, x18, LSL #0x3]
7101f0c3fc  cmp x18,x27
7101f0c400  b.eq 0x7101f0c420
7101f0c404  sub w17,w16,#0x1
7101f0c408  cmp x18,x27
7101f0c40c  csel w12,w17,w12,hi
7101f0c410  csinc w13,w13,w16,hi
7101f0c414  cmp w13,w12
7101f0c418  b.le 0x7101f0c3e0
7101f0c41c  b 0x7101f0c430
7101f0c420  ldrsw x12,[x17, #0x4]
7101f0c424  tbnz w12,#0x1f,0x7101f0c430
7101f0c428  add x12,x8,x12
7101f0c42c  b 0x7101f0c434
7101f0c430  mov x12,x4
7101f0c434  ldrb w13,[x12]
7101f0c438  sub w13,w13,#0x1
7101f0c43c  cmp w13,#0x6
7101f0c440  b.hi 0x7101f0c468
7101f0c444  adrp x14,0x71044fc000
7101f0c448  add x14,x14,#0x3dc
7101f0c44c  ldrsw x13,[x14, x13, LSL #0x2]
7101f0c450  add x13,x13,x14
7101f0c454  br x13
7101f0c458  ldrb w25,[x12, #0x1]
7101f0c45c  b 0x7101f0c484
7101f0c460  ldur w25,[x12, #0x1]
7101f0c464  b 0x7101f0c484
7101f0c468  mov w25,wzr
7101f0c46c  b 0x7101f0c484
7101f0c470  ldursh w25,[x12, #0x1]
7101f0c474  b 0x7101f0c484
7101f0c478  ldrsb w25,[x12, #0x1]
7101f0c47c  b 0x7101f0c484
7101f0c480  ldurh w25,[x12, #0x1]
7101f0c484  cmp w11,#0xc
7101f0c488  mov x12,x4
7101f0c48c  b.ne 0x7101f0c500
7101f0c490  ldur w12,[x8, #0x1]
7101f0c494  subs w12,w12,#0x1
7101f0c498  b.lt 0x7101f0c4fc
7101f0c49c  ldursw x15,[x8, #0x5]
7101f0c4a0  ldp x14,x16,[x9, #0x20]
7101f0c4a4  mov w13,wzr
7101f0c4a8  add x15,x16,x15
7101f0c4ac  add w16,w12,w13
7101f0c4b0  cmp w16,#0x0
7101f0c4b4  cinc w16,w16,lt
7101f0c4b8  asr w16,w16,#0x1
7101f0c4bc  add x17,x15,w16, SXTW  #0x3
7101f0c4c0  ldr w18,[x17]
7101f0c4c4  ldr x18,[x14, x18, LSL #0x3]
7101f0c4c8  cmp x18,x1
7101f0c4cc  b.eq 0x7101f0c4ec
7101f0c4d0  sub w17,w16,#0x1
7101f0c4d4  cmp x18,x1
7101f0c4d8  csel w12,w17,w12,hi
7101f0c4dc  csinc w13,w13,w16,hi
7101f0c4e0  cmp w13,w12
7101f0c4e4  b.le 0x7101f0c4ac
7101f0c4e8  b 0x7101f0c4fc
7101f0c4ec  ldrsw x12,[x17, #0x4]
7101f0c4f0  tbnz w12,#0x1f,0x7101f0c4fc
7101f0c4f4  add x12,x8,x12
7101f0c4f8  b 0x7101f0c500
7101f0c4fc  mov x12,x4
7101f0c500  ldrb w13,[x12]
7101f0c504  sub w13,w13,#0x1
7101f0c508  cmp w13,#0x6
7101f0c50c  b.hi 0x7101f0c534
7101f0c510  adrp x14,0x71044fc000
7101f0c514  add x14,x14,#0x3f8
7101f0c518  ldrsw x13,[x14, x13, LSL #0x2]
7101f0c51c  add x13,x13,x14
7101f0c520  br x13
7101f0c524  ldrb w26,[x12, #0x1]
7101f0c528  b 0x7101f0c550
7101f0c52c  ldur w26,[x12, #0x1]
7101f0c530  b 0x7101f0c550
7101f0c534  mov w26,wzr
7101f0c538  b 0x7101f0c550
7101f0c53c  ldursh w26,[x12, #0x1]
7101f0c540  b 0x7101f0c550
7101f0c544  ldrsb w26,[x12, #0x1]
7101f0c548  b 0x7101f0c550
7101f0c54c  ldurh w26,[x12, #0x1]
7101f0c550  cmp w11,#0xc
7101f0c554  mov x11,x4
7101f0c558  b.ne 0x7101f0c5cc
7101f0c55c  ldur w11,[x8, #0x1]
7101f0c560  subs w11,w11,#0x1
7101f0c564  b.lt 0x7101f0c5c8
7101f0c568  ldursw x14,[x8, #0x5]
7101f0c56c  ldp x13,x9,[x9, #0x20]
7101f0c570  mov w12,wzr
7101f0c574  add x9,x9,x14
7101f0c578  add w14,w11,w12
7101f0c57c  cmp w14,#0x0
7101f0c580  cinc w14,w14,lt
7101f0c584  asr w14,w14,#0x1
7101f0c588  add x15,x9,w14, SXTW  #0x3
7101f0c58c  ldr w16,[x15]
7101f0c590  ldr x16,[x13, x16, LSL #0x3]
7101f0c594  cmp x16,x0
7101f0c598  b.eq 0x7101f0c5b8
7101f0c59c  sub w15,w14,#0x1
7101f0c5a0  cmp x16,x0
7101f0c5a4  csel w11,w15,w11,hi
7101f0c5a8  csinc w12,w12,w14,hi
7101f0c5ac  cmp w12,w11
7101f0c5b0  b.le 0x7101f0c578
7101f0c5b4  b 0x7101f0c5c8
7101f0c5b8  ldrsw x9,[x15, #0x4]
7101f0c5bc  tbnz w9,#0x1f,0x7101f0c5c8
7101f0c5c0  add x11,x8,x9
7101f0c5c4  b 0x7101f0c5cc
7101f0c5c8  mov x11,x4
7101f0c5cc  ldrb w8,[x11]
7101f0c5d0  sub w8,w8,#0x1
7101f0c5d4  cmp w8,#0x6
7101f0c5d8  b.hi 0x7101f0c600
7101f0c5dc  adrp x9,0x71044fc000
7101f0c5e0  add x9,x9,#0x414
7101f0c5e4  ldrsw x8,[x9, x8, LSL #0x2]
7101f0c5e8  add x8,x8,x9
7101f0c5ec  br x8
7101f0c5f0  ldrb w19,[x11, #0x1]
7101f0c5f4  b 0x7101f0c61c
7101f0c5f8  ldur w19,[x11, #0x1]
7101f0c5fc  b 0x7101f0c61c
7101f0c600  mov w19,wzr
7101f0c604  b 0x7101f0c61c
7101f0c608  ldursh w19,[x11, #0x1]
7101f0c60c  b 0x7101f0c61c
7101f0c610  ldrsb w19,[x11, #0x1]
7101f0c614  b 0x7101f0c61c
7101f0c618  ldurh w19,[x11, #0x1]
7101f0c61c  and w8,w10,#0xff
7101f0c620  ucvtf s0,w8
7101f0c624  fdiv s0,s0,s9
7101f0c628  fcmp s0,s10
7101f0c62c  b.ls 0x7101f0c644
7101f0c630  fadd s0,s0,s11
7101f0c634  fdiv s0,s0,s12
7101f0c638  mov v1.16B,v8.16B
7101f0c63c  bl 0x71039c0850
7101f0c640  b 0x7101f0c648
7101f0c644  fdiv s0,s0,s14
7101f0c648  and w8,w23,#0xff
7101f0c64c  ucvtf s1,w8
7101f0c650  fmul s15,s0,s13
7101f0c654  fdiv s0,s1,s9
7101f0c658  fcmp s0,s10
7101f0c65c  b.ls 0x7101f0c674
7101f0c660  fadd s0,s0,s11
7101f0c664  fdiv s0,s0,s12
7101f0c668  mov v1.16B,v8.16B
7101f0c66c  bl 0x71039c0850
7101f0c670  b 0x7101f0c678
7101f0c674  fdiv s0,s0,s14
7101f0c678  fmul s0,s0,s13
7101f0c67c  and w8,w24,#0xff
7101f0c680  fcvtzs w21,s0
7101f0c684  ucvtf s0,w8
7101f0c688  fdiv s0,s0,s9
7101f0c68c  fcvtzs w20,s15
7101f0c690  fcmp s0,s10
7101f0c694  b.ls 0x7101f0c6ac
7101f0c698  fadd s0,s0,s11
7101f0c69c  fdiv s0,s0,s12
7101f0c6a0  mov v1.16B,v8.16B
7101f0c6a4  bl 0x71039c0850
7101f0c6a8  b 0x7101f0c6b0
7101f0c6ac  fdiv s0,s0,s14
7101f0c6b0  fmul s0,s0,s13
7101f0c6b4  and w8,w25,#0xff
7101f0c6b8  bfm w20,w21,#0x18,#0x7
7101f0c6bc  fcvtzs w23,s0
7101f0c6c0  ucvtf s0,w8
7101f0c6c4  fdiv s0,s0,s9
7101f0c6c8  fcmp s0,s10
7101f0c6cc  b.ls 0x7101f0c6e4
7101f0c6d0  fadd s0,s0,s11
7101f0c6d4  fdiv s0,s0,s12
7101f0c6d8  mov v1.16B,v8.16B
7101f0c6dc  bl 0x71039c0850
7101f0c6e0  b 0x7101f0c6e8
7101f0c6e4  fdiv s0,s0,s14
7101f0c6e8  and w8,w26,#0xff
7101f0c6ec  ucvtf s1,w8
7101f0c6f0  fmul s15,s0,s13
7101f0c6f4  fdiv s0,s1,s9
7101f0c6f8  fcmp s0,s10
7101f0c6fc  bfm w20,w23,#0x10,#0x7
7101f0c700  b.ls 0x7101f0c718
7101f0c704  fadd s0,s0,s11
7101f0c708  fdiv s0,s0,s12
7101f0c70c  mov v1.16B,v8.16B
7101f0c710  bl 0x71039c0850
7101f0c714  b 0x7101f0c71c
7101f0c718  fdiv s0,s0,s14
7101f0c71c  fmul s0,s0,s13
7101f0c720  and w8,w19,#0xff
7101f0c724  orr w19,w20,#0xff000000
7101f0c728  fcvtzs w23,s0
7101f0c72c  ucvtf s0,w8
7101f0c730  fdiv s0,s0,s9
7101f0c734  fcvtzs w21,s15
7101f0c738  fcmp s0,s10
7101f0c73c  b.ls 0x7101f0c754
7101f0c740  fadd s0,s0,s11
7101f0c744  fdiv s0,s0,s12
7101f0c748  mov v1.16B,v8.16B
7101f0c74c  bl 0x71039c0850
7101f0c750  b 0x7101f0c758
7101f0c754  fdiv s0,s0,s14
7101f0c758  fmul s0,s0,s13
7101f0c75c  fcvtzs w8,s0
7101f0c760  ldr x10,[sp, #0x40]
7101f0c764  bfm w21,w23,#0x18,#0x7
7101f0c768  bfm w21,w8,#0x10,#0x7
7101f0c76c  ldr x8,[x10, #0x56b0]
7101f0c770  ldr x9,[x10, #0x56b8]
7101f0c774  orr w21,w21,#0xff000000
7101f0c778  cmp x8,x9
7101f0c77c  b.eq 0x7101f0c798
7101f0c780  bfm x19,x21,#0x20,#0x1f
7101f0c784  str x19,[x8]
7101f0c788  ldr x8,[x10, #0x56b0]
7101f0c78c  add x8,x8,#0x8
7101f0c790  str x8,[x10, #0x56b0]
7101f0c794  b 0x7101f0c8a8
7101f0c798  ldr x10,[sp, #0x38]
7101f0c79c  ldr x23,[x10]
7101f0c7a0  sub x24,x8,x23
7101f0c7a4  str x22,[sp, #0x28]
7101f0c7a8  mov x22,x27
7101f0c7ac  mov x27,x28
7101f0c7b0  asr x28,x24,#0x3
7101f0c7b4  add x8,x28,#0x1
7101f0c7b8  lsr x10,x8,#0x3d
7101f0c7bc  cbnz x10,0x7101f0ef20
7101f0c7c0  sub x9,x9,x23
7101f0c7c4  asr x10,x9,#0x3
7101f0c7c8  orr x11,xzr,#0xffffffffffffffe
7101f0c7cc  cmp x10,x11
7101f0c7d0  b.hi 0x7101f0c7f0
7101f0c7d4  asr x9,x9,#0x2
7101f0c7d8  cmp x9,x8
7101f0c7dc  csel x20,x8,x9,cc
7101f0c7e0  cbz x20,0x7101f0c854
7101f0c7e4  lsr x8,x20,#0x3d
7101f0c7e8  cbz x8,0x7101f0c7f4
7101f0c7ec  b 0x7101f0ef1c
7101f0c7f0  orr x20,xzr,#0x1fffffffffffffff
7101f0c7f4  lsl x8,x20,#0x3
7101f0c7f8  cmp x8,#0x0
7101f0c7fc  csinc x26,x8,xzr,ne
7101f0c800  mov w0,#0x10
7101f0c804  mov x1,x26
7101f0c808  bl 0x710392e290
7101f0c80c  mov x25,x0
7101f0c810  cbnz x0,0x7101f0c858
7101f0c814  adrp x8,0x7105332000
7101f0c818  ldr x0,[x8, #0xf00]
7101f0c81c  cbz x0,0x7101f0c854
7101f0c820  stur wzr,[x29, #-0xe0]
7101f0c824  str x26,[sp, #0x50]
7101f0c828  ldr x8,[x0]
7101f0c82c  ldr x8,[x8, #0x30]
7101f0c830  sub x1,x29,#0xe0
7101f0c834  add x2,sp,#0x50
7101f0c838  blr x8
7101f0c83c  tbz w0,#0x0,0x7101f0c854
7101f0c840  mov w0,#0x10
7101f0c844  mov x1,x26
7101f0c848  bl 0x710392e290
7101f0c84c  mov x25,x0
7101f0c850  cbnz x0,0x7101f0c858
7101f0c854  mov x25,xzr
7101f0c858  add x26,x25,x28, LSL #0x3
7101f0c85c  bfm x19,x21,#0x20,#0x1f
7101f0c860  cmp x24,#0x1
7101f0c864  str x19,[x26], #0x8
7101f0c868  add x19,x25,x20, LSL #0x3
7101f0c86c  b.lt 0x7101f0c880
7101f0c870  mov x0,x25
7101f0c874  mov x1,x23
7101f0c878  mov x2,x24
7101f0c87c  bl 0x71039c00e0
7101f0c880  ldr x8,[sp, #0x40]
7101f0c884  mov x28,x27
7101f0c888  mov x27,x22
7101f0c88c  ldr x22,[sp, #0x28]
7101f0c890  str x25,[x8, #0x56a8]
7101f0c894  str x26,[x8, #0x56b0]
7101f0c898  str x19,[x8, #0x56b8]
7101f0c89c  cbz x23,0x7101f0c8a8
7101f0c8a0  mov x0,x23
7101f0c8a4  bl 0x710392eb40
7101f0c8a8  ldrb w8,[x28]
7101f0c8ac  sub w9,w8,#0xb
7101f0c8b0  mov x0,#0xc304
7101f0c8b4  movk x0,#0x6558, LSL #16
7101f0c8b8  mov x1,#0x378b
7101f0c8bc  movk x1,#0x1532, LSL #16
7101f0c8c0  mov x18,#0xbc4f
7101f0c8c4  movk x18,#0x7f24, LSL #16
7101f0c8c8  mov x2,#0xac2b
7101f0c8cc  movk x2,#0x6293, LSL #16
7101f0c8d0  mov x3,#0x58a4
7101f0c8d4  movk x3,#0x12f9, LSL #16
7101f0c8d8  movk x0,#0x8, LSL #32
7101f0c8dc  movk x1,#0x8, LSL #32
7101f0c8e0  movk x18,#0x6, LSL #32
7101f0c8e4  cmp w9,#0x1
7101f0c8e8  movk x2,#0x6, LSL #32
7101f0c8ec  movk x3,#0x6, LSL #32
7101f0c8f0  adrp x4,0x7104742000
7101f0c8f4  add x4,x4,#0xdbb
7101f0c8f8  b.hi 0x7101f0c90c
7101f0c8fc  ldursw x10,[x28, #0x1]
7101f0c900  add x22,x22,#0x1
7101f0c904  cmp x22,x10
7101f0c908  b.lt 0x7101f0c114
7101f0c90c  adrp x26,0x7105326000
7101f0c910  add x26,x26,#0x3c0
7101f0c914  ldp x2,x8,[x26]
7101f0c918  cmp x8,x2
7101f0c91c  b.eq 0x7101f0ef10
7101f0c920  ldr x27,[sp, #0x40]
7101f0c924  ldr x8,[sp, #0x30]
7101f0c928  mov w3,#0x1
7101f0c92c  ldr x23,[x27, #0x350]
7101f0c930  ldr x1,[x8]
7101f0c934  mov x0,x23
7101f0c938  bl 0x71032cbf30
7101f0c93c  ldr x8,[x23]
7101f0c940  ldr x8,[x8]
7101f0c944  ldr x9,[x8]
7101f0c948  ldr x8,[x9, #0x600]
7101f0c94c  str wzr,[x8, #0x494]
7101f0c950  ldr x8,[x9, #0x608]
7101f0c954  ldr x9,[x9, #0x610]
7101f0c958  cmp x8,x9
7101f0c95c  b.eq 0x7101f0c9c4
7101f0c960  sub x10,x9,#0x10
7101f0c964  sub x10,x10,x8
7101f0c968  ubfx x11,x10,#0x4,#0x1c
7101f0c96c  add w11,w11,#0x1
7101f0c970  ands x11,x11,#0x3
7101f0c974  b.eq 0x7101f0c990
7101f0c978  neg x11,x11
7101f0c97c  ldr x12,[x8, #0x8]
7101f0c980  add x8,x8,#0x10
7101f0c984  adds x11,x11,#0x1
7101f0c988  str wzr,[x12, #0x494]
7101f0c98c  b.ne 0x7101f0c97c
7101f0c990  cmp x10,#0x30
7101f0c994  b.cc 0x7101f0c9c4
7101f0c998  ldr x10,[x8, #0x8]
7101f0c99c  str wzr,[x10, #0x494]
7101f0c9a0  ldr x10,[x8, #0x18]
7101f0c9a4  str wzr,[x10, #0x494]
7101f0c9a8  ldr x10,[x8, #0x28]
7101f0c9ac  str wzr,[x10, #0x494]
7101f0c9b0  ldr x10,[x8, #0x38]
7101f0c9b4  add x8,x8,#0x40
7101f0c9b8  cmp x9,x8
7101f0c9bc  str wzr,[x10, #0x494]
7101f0c9c0  b.ne 0x7101f0c998
7101f0c9c4  ldr x8,[x23]
7101f0c9c8  ldr x8,[x8]
7101f0c9cc  ldr x0,[x8]
7101f0c9d0  mov w1,#0x1
7101f0c9d4  bl 0x71037760f0
7101f0c9d8  ldr x8,[x23]
7101f0c9dc  ldr x8,[x8]
7101f0c9e0  ldr x8,[x8]
7101f0c9e4  ldr x9,[x8, #0x600]
7101f0c9e8  strb wzr,[x8, #0x656]
7101f0c9ec  strb wzr,[x9, #0x4ab]
7101f0c9f0  ldr x9,[x8, #0x608]
7101f0c9f4  ldr x10,[x8, #0x610]
7101f0c9f8  cmp x9,x10
7101f0c9fc  b.eq 0x7101f0ca78
7101f0ca00  sub x11,x10,#0x10
7101f0ca04  sub x11,x11,x9
7101f0ca08  ubfx x12,x11,#0x4,#0x1c
7101f0ca0c  add w12,w12,#0x1
7101f0ca10  ands x12,x12,#0x3
7101f0ca14  b.eq 0x7101f0ca34
7101f0ca18  neg x12,x12
7101f0ca1c  ldrb w13,[x8, #0x656]
7101f0ca20  ldr x14,[x9, #0x8]
7101f0ca24  add x9,x9,#0x10
7101f0ca28  adds x12,x12,#0x1
7101f0ca2c  strb w13,[x14, #0x4ab]
7101f0ca30  b.ne 0x7101f0ca1c
7101f0ca34  cmp x11,#0x30
7101f0ca38  b.cc 0x7101f0ca78
7101f0ca3c  ldrb w11,[x8, #0x656]
7101f0ca40  ldr x12,[x9, #0x8]
7101f0ca44  strb w11,[x12, #0x4ab]
7101f0ca48  ldrb w11,[x8, #0x656]
7101f0ca4c  ldr x12,[x9, #0x18]
7101f0ca50  strb w11,[x12, #0x4ab]
7101f0ca54  ldrb w11,[x8, #0x656]
7101f0ca58  ldr x12,[x9, #0x28]
7101f0ca5c  strb w11,[x12, #0x4ab]
7101f0ca60  ldrb w11,[x8, #0x656]
7101f0ca64  ldr x12,[x9, #0x38]
7101f0ca68  add x9,x9,#0x40
7101f0ca6c  cmp x10,x9
7101f0ca70  strb w11,[x12, #0x4ab]
7101f0ca74  b.ne 0x7101f0ca3c
7101f0ca78  mov x24,x23
7101f0ca7c  ldr x8,[x24], #0x8
7101f0ca80  ldr x8,[x8]
7101f0ca84  add x0,x8,#0x8
7101f0ca88  adrp x1,0x71042e7000
7101f0ca8c  add x1,x1,#0xb41
7101f0ca90  add x8,sp,#0x50
7101f0ca94  add x19,sp,#0x50
7101f0ca98  bl 0x7103776640
7101f0ca9c  cmp x24,x19
7101f0caa0  adrp x19,0x710523d000
7101f0caa4  add x19,x19,#0x9a8
7101f0caa8  b.eq 0x7101f0cad8
7101f0caac  ldr x8,[sp, #0x58]
7101f0cab0  str xzr,[sp, #0x58]
7101f0cab4  ldr x25,[x23, #0x10]
7101f0cab8  str x8,[x23, #0x10]
7101f0cabc  cbz x25,0x7101f0cad8
7101f0cac0  ldr x0,[x25, #0x18]
7101f0cac4  stp x19,xzr,[x25, #0x10]
7101f0cac8  cbz x0,0x7101f0cad0
7101f0cacc  bl 0x710392eb40
7101f0cad0  mov x0,x25
7101f0cad4  bl 0x710392eb40
7101f0cad8  ldr x25,[sp, #0x58]
7101f0cadc  adrp x28,0x710523d000
7101f0cae0  add x28,x28,#0x988
7101f0cae4  stp x28,xzr,[sp, #0x50]
7101f0cae8  cbz x25,0x7101f0cb04
7101f0caec  ldr x0,[x25, #0x18]
7101f0caf0  stp x19,xzr,[x25, #0x10]
7101f0caf4  cbz x0,0x7101f0cafc
7101f0caf8  bl 0x710392eb40
7101f0cafc  mov x0,x25
7101f0cb00  bl 0x710392eb40
7101f0cb04  adrp x1,0x71042d6000
7101f0cb08  add x1,x1,#0xbc2
7101f0cb0c  add x8,sp,#0x50
7101f0cb10  mov x0,x24
7101f0cb14  add x19,sp,#0x50
7101f0cb18  bl 0x7103776910
7101f0cb1c  add x8,x23,#0x18
7101f0cb20  cmp x8,x19
7101f0cb24  b.eq 0x7101f0cb40
7101f0cb28  ldr x8,[sp, #0x58]
7101f0cb2c  str xzr,[sp, #0x58]
7101f0cb30  ldr x0,[x23, #0x20]
7101f0cb34  str x8,[x23, #0x20]
7101f0cb38  cbz x0,0x7101f0cb40
7101f0cb3c  bl 0x710392eb40
7101f0cb40  ldr x0,[sp, #0x58]
7101f0cb44  adrp x8,0x710523d000
7101f0cb48  add x8,x8,#0x9a8
7101f0cb4c  stp x8,xzr,[sp, #0x50]
7101f0cb50  cbz x0,0x7101f0cb58
7101f0cb54  bl 0x710392eb40
7101f0cb58  adrp x1,0x7104413000
7101f0cb5c  add x1,x1,#0x18a
7101f0cb60  add x8,sp,#0x50
7101f0cb64  mov x0,x24
7101f0cb68  add x19,sp,#0x50
7101f0cb6c  bl 0x7103776910
7101f0cb70  add x8,x23,#0x28
7101f0cb74  cmp x8,x19
7101f0cb78  b.eq 0x7101f0cb94
7101f0cb7c  ldr x8,[sp, #0x58]
7101f0cb80  str xzr,[sp, #0x58]
7101f0cb84  ldr x0,[x23, #0x30]
7101f0cb88  str x8,[x23, #0x30]
7101f0cb8c  cbz x0,0x7101f0cb94
7101f0cb90  bl 0x710392eb40
7101f0cb94  ldr x0,[sp, #0x58]
7101f0cb98  adrp x8,0x710523d000
7101f0cb9c  add x8,x8,#0x9a8
7101f0cba0  stp x8,xzr,[sp, #0x50]
7101f0cba4  cbz x0,0x7101f0cbac
7101f0cba8  bl 0x710392eb40
7101f0cbac  mov w8,#0x1
7101f0cbb0  mov w20,#0x101
7101f0cbb4  strh w8,[sp, #0x64]
7101f0cbb8  str w8,[sp, #0x60]
7101f0cbbc  strb w8,[sp, #0x66]
7101f0cbc0  mov x22,#0x41f0000000000000
7101f0cbc4  add x8,sp,#0x50
7101f0cbc8  add x0,sp,#0x50
7101f0cbcc  str xzr,[sp, #0x50]
7101f0cbd0  strh w20,[sp, #0x58]
7101f0cbd4  add x19,x8,#0xf0
7101f0cbd8  strh wzr,[sp, #0x5e]
7101f0cbdc  stur wzr,[sp, #0x5a]
7101f0cbe0  str x22,[sp, #0x68]
7101f0cbe4  str wzr,[sp, #0x70]
7101f0cbe8  str xzr,[sp, #0xa0]
7101f0cbec  str xzr,[sp, #0xd0]
7101f0cbf0  str xzr,[sp, #0x100]
7101f0cbf4  str xzr,[sp, #0x130]
7101f0cbf8  str xzr,[sp, #0x160]
7101f0cbfc  str wzr,[sp, #0x170]
7101f0cc00  bl 0x710337df20
7101f0cc04  mov x24,x23
7101f0cc08  ldr x8,[x24], #0x38
7101f0cc0c  ldr x8,[x8]
7101f0cc10  add x1,x8,#0x8
7101f0cc14  adrp x2,0x71043e0000
7101f0cc18  add x2,x2,#0xa21
7101f0cc1c  add x3,sp,#0x50
7101f0cc20  mov x0,x24
7101f0cc24  bl 0x7103770b30
7101f0cc28  adrp x2,0x7104292000
7101f0cc2c  add x2,x2,#0x511
7101f0cc30  mov x0,x24
7101f0cc34  mov w1,wzr
7101f0cc38  bl 0x71037717d0
7101f0cc3c  adrp x2,0x71042e7000
7101f0cc40  add x2,x2,#0xb41
7101f0cc44  mov w1,#0x1
7101f0cc48  mov x0,x24
7101f0cc4c  bl 0x71037717d0
7101f0cc50  ldr x0,[x24]
7101f0cc54  ldr x8,[x0]
7101f0cc58  ldr x8,[x8, #0x60]
7101f0cc5c  mov w1,wzr
7101f0cc60  blr x8
7101f0cc64  ldr x0,[x24]
7101f0cc68  ldr x8,[x0]
7101f0cc6c  ldr x8,[x8, #0x70]
7101f0cc70  mov w1,wzr
7101f0cc74  blr x8
7101f0cc78  ldr x8,[x23]
7101f0cc7c  ldr x8,[x8]
7101f0cc80  fmov s8,wzr
7101f0cc84  mov v0.16B,v8.16B
7101f0cc88  adrp x1,0x7104421000
7101f0cc8c  add x1,x1,#0x55
7101f0cc90  ldr x0,[x8, #0x10]
7101f0cc94  bl 0x7103778630
7101f0cc98  ldr x0,[sp, #0x160]
7101f0cc9c  cmp x19,x0
7101f0cca0  b.eq 0x7101f0ccbc
7101f0cca4  ldr x19,[sp, #0x30]
7101f0cca8  cbz x0,0x7101f0cccc
7101f0ccac  ldr x8,[x0]
7101f0ccb0  ldr x8,[x8, #0x28]
7101f0ccb4  blr x8
7101f0ccb8  b 0x7101f0cccc
7101f0ccbc  ldr x8,[x0]
7101f0ccc0  ldr x8,[x8, #0x20]
7101f0ccc4  blr x8
7101f0ccc8  ldr x19,[sp, #0x30]
7101f0cccc  ldr x0,[sp, #0x130]
7101f0ccd0  add x8,sp,#0x50
7101f0ccd4  add x8,x8,#0xc0
7101f0ccd8  cmp x8,x0
7101f0ccdc  b.eq 0x7101f0ccf0
7101f0cce0  cbz x0,0x7101f0ccfc
7101f0cce4  ldr x8,[x0]
7101f0cce8  ldr x8,[x8, #0x28]
7101f0ccec  b 0x7101f0ccf8
7101f0ccf0  ldr x8,[x0]
7101f0ccf4  ldr x8,[x8, #0x20]
7101f0ccf8  blr x8
7101f0ccfc  ldr x0,[sp, #0x100]
7101f0cd00  add x8,sp,#0x50
7101f0cd04  add x8,x8,#0x90
7101f0cd08  cmp x8,x0
7101f0cd0c  b.eq 0x7101f0cd20
7101f0cd10  cbz x0,0x7101f0cd2c
7101f0cd14  ldr x8,[x0]
7101f0cd18  ldr x8,[x8, #0x28]
7101f0cd1c  b 0x7101f0cd28
7101f0cd20  ldr x8,[x0]
7101f0cd24  ldr x8,[x8, #0x20]
7101f0cd28  blr x8
7101f0cd2c  ldr x0,[sp, #0xd0]
7101f0cd30  add x8,sp,#0x50
7101f0cd34  add x8,x8,#0x60
7101f0cd38  cmp x8,x0
7101f0cd3c  b.eq 0x7101f0cd50
7101f0cd40  cbz x0,0x7101f0cd5c
7101f0cd44  ldr x8,[x0]
7101f0cd48  ldr x8,[x8, #0x28]
7101f0cd4c  b 0x7101f0cd58
7101f0cd50  ldr x8,[x0]
7101f0cd54  ldr x8,[x8, #0x20]
7101f0cd58  blr x8
7101f0cd5c  ldr x0,[sp, #0xa0]
7101f0cd60  add x8,sp,#0x50
7101f0cd64  add x8,x8,#0x30
7101f0cd68  cmp x8,x0
7101f0cd6c  b.eq 0x7101f0cd80
7101f0cd70  cbz x0,0x7101f0cd8c
7101f0cd74  ldr x8,[x0]
7101f0cd78  ldr x8,[x8, #0x28]
7101f0cd7c  b 0x7101f0cd88
7101f0cd80  ldr x8,[x0]
7101f0cd84  ldr x8,[x8, #0x20]
7101f0cd88  blr x8
7101f0cd8c  ldp x8,x9,[x26]
7101f0cd90  sub x9,x9,x8
7101f0cd94  asr x9,x9,#0x3
7101f0cd98  cmp x9,#0x1
7101f0cd9c  b.ls 0x7101f0ef10
7101f0cda0  ldr x0,[x27, #0x360]
7101f0cda4  ldr x1,[x19]
7101f0cda8  add x2,x8,#0x8
7101f0cdac  bl 0x7101f31930
7101f0cdb0  ldp x8,x9,[x26]
7101f0cdb4  sub x9,x9,x8
7101f0cdb8  asr x9,x9,#0x3
7101f0cdbc  cmp x9,#0x2
7101f0cdc0  b.ls 0x7101f0ef10
7101f0cdc4  cmp x9,#0xa
7101f0cdc8  b.ls 0x7101f0ef10
7101f0cdcc  ldr x0,[x27, #0x370]
7101f0cdd0  add x2,x8,#0x10
7101f0cdd4  add x3,x8,#0x50
7101f0cdd8  mov x1,x19
7101f0cddc  bl 0x7101f2d070
7101f0cde0  ldp x8,x9,[x26]
7101f0cde4  sub x9,x9,x8
7101f0cde8  asr x9,x9,#0x3
7101f0cdec  cmp x9,#0x3
7101f0cdf0  b.ls 0x7101f0ef10
7101f0cdf4  ldr x21,[x27, #0x380]
7101f0cdf8  ldr x1,[x19]
7101f0cdfc  add x23,x21,#0xe8
7101f0ce00  add x2,x8,#0x18
7101f0ce04  mov w3,#0x1
7101f0ce08  mov x0,x23
7101f0ce0c  bl 0x71032cbf30
7101f0ce10  ldr x8,[x21, #0xe8]
7101f0ce14  ldr x8,[x8]
7101f0ce18  ldr x9,[x8]
7101f0ce1c  ldr x8,[x9, #0x600]
7101f0ce20  str wzr,[x8, #0x494]
7101f0ce24  ldr x8,[x9, #0x608]
7101f0ce28  ldr x9,[x9, #0x610]
7101f0ce2c  cmp x8,x9
7101f0ce30  b.eq 0x7101f0ce98
7101f0ce34  sub x10,x9,#0x10
7101f0ce38  sub x10,x10,x8
7101f0ce3c  ubfx x11,x10,#0x4,#0x1c
7101f0ce40  add w11,w11,#0x1
7101f0ce44  ands x11,x11,#0x3
7101f0ce48  b.eq 0x7101f0ce64
7101f0ce4c  neg x11,x11
7101f0ce50  ldr x12,[x8, #0x8]
7101f0ce54  add x8,x8,#0x10
7101f0ce58  adds x11,x11,#0x1
7101f0ce5c  str wzr,[x12, #0x494]
7101f0ce60  b.ne 0x7101f0ce50
7101f0ce64  cmp x10,#0x30
7101f0ce68  b.cc 0x7101f0ce98
7101f0ce6c  ldr x10,[x8, #0x8]
7101f0ce70  str wzr,[x10, #0x494]
7101f0ce74  ldr x10,[x8, #0x18]
7101f0ce78  str wzr,[x10, #0x494]
7101f0ce7c  ldr x10,[x8, #0x28]
7101f0ce80  str wzr,[x10, #0x494]
7101f0ce84  ldr x10,[x8, #0x38]
7101f0ce88  add x8,x8,#0x40
7101f0ce8c  cmp x9,x8
7101f0ce90  str wzr,[x10, #0x494]
7101f0ce94  b.ne 0x7101f0ce6c
7101f0ce98  ldr x8,[x23]
7101f0ce9c  ldr x8,[x8]
7101f0cea0  ldr x0,[x8]
7101f0cea4  mov w1,#0x1
7101f0cea8  mov w19,#0x1
7101f0ceac  bl 0x71037760f0
7101f0ceb0  ldr x8,[x23]
7101f0ceb4  ldr x8,[x8]
7101f0ceb8  ldr x8,[x8]
7101f0cebc  ldr x9,[x8, #0x600]
7101f0cec0  strb wzr,[x8, #0x656]
7101f0cec4  strb wzr,[x9, #0x4ab]
7101f0cec8  ldr x9,[x8, #0x608]
7101f0cecc  ldr x10,[x8, #0x610]
7101f0ced0  cmp x9,x10
7101f0ced4  b.eq 0x7101f0cf50
7101f0ced8  sub x11,x10,#0x10
7101f0cedc  sub x11,x11,x9
7101f0cee0  ubfx x12,x11,#0x4,#0x1c
7101f0cee4  add w12,w12,#0x1
7101f0cee8  ands x12,x12,#0x3
7101f0ceec  b.eq 0x7101f0cf0c
7101f0cef0  neg x12,x12
7101f0cef4  ldrb w13,[x8, #0x656]
7101f0cef8  ldr x14,[x9, #0x8]
7101f0cefc  add x9,x9,#0x10
7101f0cf00  adds x12,x12,#0x1
7101f0cf04  strb w13,[x14, #0x4ab]
7101f0cf08  b.ne 0x7101f0cef4
7101f0cf0c  cmp x11,#0x30
7101f0cf10  b.cc 0x7101f0cf50
7101f0cf14  ldrb w11,[x8, #0x656]
7101f0cf18  ldr x12,[x9, #0x8]
7101f0cf1c  strb w11,[x12, #0x4ab]
7101f0cf20  ldrb w11,[x8, #0x656]
7101f0cf24  ldr x12,[x9, #0x18]
7101f0cf28  strb w11,[x12, #0x4ab]
7101f0cf2c  ldrb w11,[x8, #0x656]
7101f0cf30  ldr x12,[x9, #0x28]
7101f0cf34  strb w11,[x12, #0x4ab]
7101f0cf38  ldrb w11,[x8, #0x656]
7101f0cf3c  ldr x12,[x9, #0x38]
7101f0cf40  add x9,x9,#0x40
7101f0cf44  cmp x10,x9
7101f0cf48  strb w11,[x12, #0x4ab]
7101f0cf4c  b.ne 0x7101f0cf14
7101f0cf50  ldr x8,[x21, #0xe8]
7101f0cf54  ldr x8,[x8]
7101f0cf58  ldr x8,[x8]
7101f0cf5c  ldr x8,[x8, #0x600]
7101f0cf60  mov w9,#0x100
7101f0cf64  str w9,[x8, #0x18]
7101f0cf68  ldr x9,[x21, #0xe8]
7101f0cf6c  ldr x9,[x9]
7101f0cf70  ldr x9,[x9]
7101f0cf74  ldr x9,[x9, #0x600]
7101f0cf78  mov w8,#0x200
7101f0cf7c  str w8,[x9, #0x1c]
7101f0cf80  add x9,sp,#0x50
7101f0cf84  str w19,[sp, #0x60]
7101f0cf88  strh w19,[sp, #0x64]
7101f0cf8c  adrp x8,0x71050b4000
7101f0cf90  add x8,x8,#0xf0
7101f0cf94  stur wzr,[sp, #0x5a]
7101f0cf98  add x1,x9,#0x30
7101f0cf9c  strb w19,[sp, #0x66]
7101f0cfa0  sub x19,x29,#0xe0
7101f0cfa4  sub x0,x29,#0xe0
7101f0cfa8  str xzr,[sp, #0x50]
7101f0cfac  strh w20,[sp, #0x58]
7101f0cfb0  strh wzr,[sp, #0x5e]
7101f0cfb4  str x22,[sp, #0x68]
7101f0cfb8  str wzr,[sp, #0x70]
7101f0cfbc  str xzr,[sp, #0xa0]
7101f0cfc0  str xzr,[sp, #0xd0]
7101f0cfc4  str xzr,[sp, #0x100]
7101f0cfc8  str xzr,[sp, #0x130]
7101f0cfcc  str xzr,[sp, #0x160]
7101f0cfd0  str wzr,[sp, #0x170]
7101f0cfd4  stp x8,x21,[x29, #-0xe0]
7101f0cfd8  stur x19,[x29, #-0xc0]
7101f0cfdc  bl 0x7101a7ed70
7101f0cfe0  ldur x0,[x29, #-0xc0]
7101f0cfe4  cmp x19,x0
7101f0cfe8  b.eq 0x7101f0cffc
7101f0cfec  cbz x0,0x7101f0d008
7101f0cff0  ldr x8,[x0]
7101f0cff4  ldr x8,[x8, #0x28]
7101f0cff8  b 0x7101f0d004
7101f0cffc  ldr x8,[x0]
7101f0d000  ldr x8,[x8, #0x20]
7101f0d004  blr x8
7101f0d008  add x0,sp,#0x50
7101f0d00c  add x25,sp,#0x50
7101f0d010  bl 0x710337df20
7101f0d014  ldr x8,[x21, #0xe8]
7101f0d018  ldr x8,[x8]
7101f0d01c  add x23,x21,#0xf0
7101f0d020  adrp x2,0x7104307000
7101f0d024  add x2,x2,#0x72
7101f0d028  add x3,sp,#0x50
7101f0d02c  mov x0,x23
7101f0d030  add x1,x8,#0x8
7101f0d034  bl 0x7103770b30
7101f0d038  ldr x0,[x21, #0xf0]
7101f0d03c  ldr x8,[x0]
7101f0d040  ldr x8,[x8, #0x60]
7101f0d044  mov w1,wzr
7101f0d048  blr x8
7101f0d04c  ldr x0,[x21, #0xf0]
7101f0d050  ldr x8,[x0]
7101f0d054  ldr x8,[x8, #0x70]
7101f0d058  mov w1,wzr
7101f0d05c  blr x8
7101f0d060  adrp x24,0x71043be000
7101f0d064  add x24,x24,#0xedc
7101f0d068  mov x0,x23
7101f0d06c  mov w1,wzr
7101f0d070  mov x2,x24
7101f0d074  mov w3,wzr
7101f0d078  bl 0x71037717d0
7101f0d07c  mov w1,#0x1
7101f0d080  mov w3,#0x1
7101f0d084  mov x0,x23
7101f0d088  mov x2,x24
7101f0d08c  bl 0x71037717d0
7101f0d090  mov w1,#0x2
7101f0d094  mov w3,#0x2
7101f0d098  mov x0,x23
7101f0d09c  mov x2,x24
7101f0d0a0  bl 0x71037717d0
7101f0d0a4  orr w1,wzr,#0x3
7101f0d0a8  orr w3,wzr,#0x3
7101f0d0ac  mov x0,x23
7101f0d0b0  mov x2,x24
7101f0d0b4  bl 0x71037717d0
7101f0d0b8  mov w1,#0x4
7101f0d0bc  mov w3,#0x4
7101f0d0c0  mov x0,x23
7101f0d0c4  mov x2,x24
7101f0d0c8  bl 0x71037717d0
7101f0d0cc  mov w1,#0x5
7101f0d0d0  mov x0,x23
7101f0d0d4  mov x2,x24
7101f0d0d8  mov w3,w1
7101f0d0dc  bl 0x71037717d0
7101f0d0e0  orr w1,wzr,#0x6
7101f0d0e4  orr w3,wzr,#0x6
7101f0d0e8  mov x0,x23
7101f0d0ec  mov x2,x24
7101f0d0f0  bl 0x71037717d0
7101f0d0f4  orr w1,wzr,#0x7
7101f0d0f8  orr w3,wzr,#0x7
7101f0d0fc  mov x0,x23
7101f0d100  mov x2,x24
7101f0d104  bl 0x71037717d0
7101f0d108  mov w1,#0x8
7101f0d10c  mov w3,#0x8
7101f0d110  mov x0,x23
7101f0d114  mov x2,x24
7101f0d118  bl 0x71037717d0
7101f0d11c  mov w1,#0x9
7101f0d120  mov x0,x23
7101f0d124  mov x2,x24
7101f0d128  mov w3,w1
7101f0d12c  bl 0x71037717d0
7101f0d130  mov w1,#0xa
7101f0d134  mov x0,x23
7101f0d138  mov x2,x24
7101f0d13c  mov w3,w1
7101f0d140  bl 0x71037717d0
7101f0d144  mov w1,#0xb
7101f0d148  mov x0,x23
7101f0d14c  mov x2,x24
7101f0d150  mov w3,w1
7101f0d154  bl 0x71037717d0
7101f0d158  orr w1,wzr,#0xc
7101f0d15c  orr w3,wzr,#0xc
7101f0d160  mov x0,x23
7101f0d164  mov x2,x24
7101f0d168  bl 0x71037717d0
7101f0d16c  mov w1,#0xd
7101f0d170  mov x0,x23
7101f0d174  mov x2,x24
7101f0d178  mov w3,w1
7101f0d17c  bl 0x71037717d0
7101f0d180  orr w1,wzr,#0xe
7101f0d184  orr w3,wzr,#0xe
7101f0d188  mov x0,x23
7101f0d18c  mov x2,x24
7101f0d190  bl 0x71037717d0
7101f0d194  orr w1,wzr,#0xf
7101f0d198  orr w3,wzr,#0xf
7101f0d19c  mov x0,x23
7101f0d1a0  mov x2,x24
7101f0d1a4  bl 0x71037717d0
7101f0d1a8  ldr x0,[sp, #0x160]
7101f0d1ac  add x8,x25,#0xf0
7101f0d1b0  cmp x8,x0
7101f0d1b4  b.eq 0x7101f0d1c8
7101f0d1b8  cbz x0,0x7101f0d1d4
7101f0d1bc  ldr x8,[x0]
7101f0d1c0  ldr x8,[x8, #0x28]
7101f0d1c4  b 0x7101f0d1d0
7101f0d1c8  ldr x8,[x0]
7101f0d1cc  ldr x8,[x8, #0x20]
7101f0d1d0  blr x8
7101f0d1d4  ldr x0,[sp, #0x130]
7101f0d1d8  add x8,sp,#0x50
7101f0d1dc  add x8,x8,#0xc0
7101f0d1e0  cmp x8,x0
7101f0d1e4  b.eq 0x7101f0d1f8
7101f0d1e8  cbz x0,0x7101f0d204
7101f0d1ec  ldr x8,[x0]
7101f0d1f0  ldr x8,[x8, #0x28]
7101f0d1f4  b 0x7101f0d200
7101f0d1f8  ldr x8,[x0]
7101f0d1fc  ldr x8,[x8, #0x20]
7101f0d200  blr x8
7101f0d204  ldr x0,[sp, #0x100]
7101f0d208  add x8,sp,#0x50
7101f0d20c  add x8,x8,#0x90
7101f0d210  cmp x8,x0
7101f0d214  b.eq 0x7101f0d228
7101f0d218  cbz x0,0x7101f0d234
7101f0d21c  ldr x8,[x0]
7101f0d220  ldr x8,[x8, #0x28]
7101f0d224  b 0x7101f0d230
7101f0d228  ldr x8,[x0]
7101f0d22c  ldr x8,[x8, #0x20]
7101f0d230  blr x8
7101f0d234  ldr x0,[sp, #0xd0]
7101f0d238  add x8,sp,#0x50
7101f0d23c  add x8,x8,#0x60
7101f0d240  cmp x8,x0
7101f0d244  b.eq 0x7101f0d258
7101f0d248  cbz x0,0x7101f0d264
7101f0d24c  ldr x8,[x0]
7101f0d250  ldr x8,[x8, #0x28]
7101f0d254  b 0x7101f0d260
7101f0d258  ldr x8,[x0]
7101f0d25c  ldr x8,[x8, #0x20]
7101f0d260  blr x8
7101f0d264  ldr x0,[sp, #0xa0]
7101f0d268  add x8,sp,#0x50
7101f0d26c  add x8,x8,#0x30
7101f0d270  cmp x8,x0
7101f0d274  b.eq 0x7101f0d288
7101f0d278  cbz x0,0x7101f0d294
7101f0d27c  ldr x8,[x0]
7101f0d280  ldr x8,[x8, #0x28]
7101f0d284  b 0x7101f0d290
7101f0d288  ldr x8,[x0]
7101f0d28c  ldr x8,[x8, #0x20]
7101f0d290  blr x8
7101f0d294  mov w8,#0x1
7101f0d298  str w8,[sp, #0x60]
7101f0d29c  strh w8,[sp, #0x64]
7101f0d2a0  strb w8,[sp, #0x66]
7101f0d2a4  add x8,sp,#0x50
7101f0d2a8  add x0,sp,#0x50
7101f0d2ac  str xzr,[sp, #0x50]
7101f0d2b0  add x19,x8,#0xf0
7101f0d2b4  strh w20,[sp, #0x58]
7101f0d2b8  strh wzr,[sp, #0x5e]
7101f0d2bc  stur wzr,[sp, #0x5a]
7101f0d2c0  str x22,[sp, #0x68]
7101f0d2c4  str wzr,[sp, #0x70]
7101f0d2c8  str xzr,[sp, #0xa0]
7101f0d2cc  str xzr,[sp, #0xd0]
7101f0d2d0  str xzr,[sp, #0x100]
7101f0d2d4  str xzr,[sp, #0x130]
7101f0d2d8  str xzr,[sp, #0x160]
7101f0d2dc  str wzr,[sp, #0x170]
7101f0d2e0  bl 0x710337df20
7101f0d2e4  ldr x8,[x21, #0xe8]
7101f0d2e8  ldr x8,[x8]
7101f0d2ec  add x23,x21,#0xf8
7101f0d2f0  adrp x2,0x710424f000
7101f0d2f4  add x2,x2,#0xd71
7101f0d2f8  add x3,sp,#0x50
7101f0d2fc  mov x0,x23
7101f0d300  add x1,x8,#0x8
7101f0d304  bl 0x7103770b30
7101f0d308  adrp x2,0x710435c000
7101f0d30c  add x2,x2,#0x86
7101f0d310  mov x0,x23
7101f0d314  mov w1,wzr
7101f0d318  bl 0x71037717d0
7101f0d31c  adrp x2,0x71042b4000
7101f0d320  add x2,x2,#0xc5e
7101f0d324  mov w1,#0x1
7101f0d328  mov x0,x23
7101f0d32c  bl 0x71037717d0
7101f0d330  adrp x2,0x71043cf000
7101f0d334  add x2,x2,#0xcdb
7101f0d338  mov w1,#0x2
7101f0d33c  mov x0,x23
7101f0d340  bl 0x71037717d0
7101f0d344  ldr x0,[x21, #0xf8]
7101f0d348  ldr x8,[x0]
7101f0d34c  ldr x8,[x8, #0x60]
7101f0d350  mov w1,wzr
7101f0d354  blr x8
7101f0d358  ldr x0,[x21, #0xf8]
7101f0d35c  ldr x8,[x0]
7101f0d360  ldr x8,[x8, #0x70]
7101f0d364  mov w1,wzr
7101f0d368  blr x8
7101f0d36c  ldr x0,[sp, #0x160]
7101f0d370  cmp x19,x0
7101f0d374  b.eq 0x7101f0d388
7101f0d378  cbz x0,0x7101f0d394
7101f0d37c  ldr x8,[x0]
7101f0d380  ldr x8,[x8, #0x28]
7101f0d384  b 0x7101f0d390
7101f0d388  ldr x8,[x0]
7101f0d38c  ldr x8,[x8, #0x20]
7101f0d390  blr x8
7101f0d394  ldr x0,[sp, #0x130]
7101f0d398  add x8,sp,#0x50
7101f0d39c  add x8,x8,#0xc0
7101f0d3a0  cmp x8,x0
7101f0d3a4  b.eq 0x7101f0d3b8
7101f0d3a8  cbz x0,0x7101f0d3c4
7101f0d3ac  ldr x8,[x0]
7101f0d3b0  ldr x8,[x8, #0x28]
7101f0d3b4  b 0x7101f0d3c0
7101f0d3b8  ldr x8,[x0]
7101f0d3bc  ldr x8,[x8, #0x20]
7101f0d3c0  blr x8
7101f0d3c4  ldr x0,[sp, #0x100]
7101f0d3c8  add x8,sp,#0x50
7101f0d3cc  add x8,x8,#0x90
7101f0d3d0  cmp x8,x0
7101f0d3d4  b.eq 0x7101f0d3e8
7101f0d3d8  cbz x0,0x7101f0d3f4
7101f0d3dc  ldr x8,[x0]
7101f0d3e0  ldr x8,[x8, #0x28]
7101f0d3e4  b 0x7101f0d3f0
7101f0d3e8  ldr x8,[x0]
7101f0d3ec  ldr x8,[x8, #0x20]
7101f0d3f0  blr x8
7101f0d3f4  ldr x0,[sp, #0xd0]
7101f0d3f8  add x8,sp,#0x50
7101f0d3fc  add x8,x8,#0x60
7101f0d400  cmp x8,x0
7101f0d404  b.eq 0x7101f0d418
7101f0d408  cbz x0,0x7101f0d424
7101f0d40c  ldr x8,[x0]
7101f0d410  ldr x8,[x8, #0x28]
7101f0d414  b 0x7101f0d420
7101f0d418  ldr x8,[x0]
7101f0d41c  ldr x8,[x8, #0x20]
7101f0d420  blr x8
7101f0d424  ldr x0,[sp, #0xa0]
7101f0d428  add x8,sp,#0x50
7101f0d42c  add x8,x8,#0x30
7101f0d430  cmp x8,x0
7101f0d434  b.eq 0x7101f0d448
7101f0d438  cbz x0,0x7101f0d454
7101f0d43c  ldr x8,[x0]
7101f0d440  ldr x8,[x8, #0x28]
7101f0d444  b 0x7101f0d450
7101f0d448  ldr x8,[x0]
7101f0d44c  ldr x8,[x8, #0x20]
7101f0d450  blr x8
7101f0d454  mov w8,#0x1
7101f0d458  add x9,sp,#0x50
7101f0d45c  add x0,sp,#0x50
7101f0d460  str xzr,[sp, #0x50]
7101f0d464  strh w20,[sp, #0x58]
7101f0d468  stur wzr,[sp, #0x5a]
7101f0d46c  strh wzr,[sp, #0x5e]
7101f0d470  add x19,x9,#0xf0
7101f0d474  str w8,[sp, #0x60]
7101f0d478  strh w8,[sp, #0x64]
7101f0d47c  strb w8,[sp, #0x66]
7101f0d480  str x22,[sp, #0x68]
7101f0d484  str wzr,[sp, #0x70]
7101f0d488  str xzr,[sp, #0xa0]
7101f0d48c  str xzr,[sp, #0xd0]
7101f0d490  str xzr,[sp, #0x100]
7101f0d494  str xzr,[sp, #0x130]
7101f0d498  str xzr,[sp, #0x160]
7101f0d49c  str wzr,[sp, #0x170]
7101f0d4a0  strb w8,[sp, #0x5a]
7101f0d4a4  bl 0x710337df20
7101f0d4a8  ldr x8,[x21, #0xe8]
7101f0d4ac  ldr x8,[x8]
7101f0d4b0  add x23,x21,#0x100
7101f0d4b4  adrp x2,0x71043e0000
7101f0d4b8  add x2,x2,#0xa56
7101f0d4bc  add x3,sp,#0x50
7101f0d4c0  mov x0,x23
7101f0d4c4  add x1,x8,#0x8
7101f0d4c8  bl 0x7103770b30
7101f0d4cc  adrp x2,0x7104292000
7101f0d4d0  add x2,x2,#0x543
7101f0d4d4  mov x0,x23
7101f0d4d8  mov w1,wzr
7101f0d4dc  bl 0x71037717d0
7101f0d4e0  adrp x2,0x7104455000
7101f0d4e4  add x2,x2,#0x38e
7101f0d4e8  mov w1,#0x1
7101f0d4ec  mov x0,x23
7101f0d4f0  bl 0x71037717d0
7101f0d4f4  ldr x0,[x21, #0x100]
7101f0d4f8  ldr x8,[x0]
7101f0d4fc  ldr x8,[x8, #0x60]
7101f0d500  mov w1,wzr
7101f0d504  blr x8
7101f0d508  ldr x0,[x21, #0x100]
7101f0d50c  ldr x8,[x0]
7101f0d510  ldr x8,[x8, #0x70]
7101f0d514  mov w1,wzr
7101f0d518  blr x8
7101f0d51c  ldr x0,[x21, #0x100]
7101f0d520  orr w2,wzr,#0x6
7101f0d524  mov w1,wzr
7101f0d528  mov w3,wzr
7101f0d52c  bl 0x7103771930
7101f0d530  ldr x0,[x21, #0x100]
7101f0d534  mov w1,#0x1
7101f0d538  orr w2,wzr,#0x7
7101f0d53c  mov w3,wzr
7101f0d540  bl 0x7103771930
7101f0d544  ldr x0,[sp, #0x160]
7101f0d548  cmp x19,x0
7101f0d54c  b.eq 0x7101f0d56c
7101f0d550  adrp x19,0x710523d000
7101f0d554  add x19,x19,#0x9a8
7101f0d558  cbz x0,0x7101f0d580
7101f0d55c  ldr x8,[x0]
7101f0d560  ldr x8,[x8, #0x28]
7101f0d564  blr x8
7101f0d568  b 0x7101f0d580
7101f0d56c  ldr x8,[x0]
7101f0d570  ldr x8,[x8, #0x20]
7101f0d574  blr x8
7101f0d578  adrp x19,0x710523d000
7101f0d57c  add x19,x19,#0x9a8
7101f0d580  ldr x0,[sp, #0x130]
7101f0d584  add x8,sp,#0x50
7101f0d588  add x8,x8,#0xc0
7101f0d58c  cmp x8,x0
7101f0d590  b.eq 0x7101f0d5a4
7101f0d594  cbz x0,0x7101f0d5b0
7101f0d598  ldr x8,[x0]
7101f0d59c  ldr x8,[x8, #0x28]
7101f0d5a0  b 0x7101f0d5ac
7101f0d5a4  ldr x8,[x0]
7101f0d5a8  ldr x8,[x8, #0x20]
7101f0d5ac  blr x8
7101f0d5b0  ldr x0,[sp, #0x100]
7101f0d5b4  add x8,sp,#0x50
7101f0d5b8  add x8,x8,#0x90
7101f0d5bc  cmp x8,x0
7101f0d5c0  b.eq 0x7101f0d5d4
7101f0d5c4  cbz x0,0x7101f0d5e0
7101f0d5c8  ldr x8,[x0]
7101f0d5cc  ldr x8,[x8, #0x28]
7101f0d5d0  b 0x7101f0d5dc
7101f0d5d4  ldr x8,[x0]
7101f0d5d8  ldr x8,[x8, #0x20]
7101f0d5dc  blr x8
7101f0d5e0  ldr x0,[sp, #0xd0]
7101f0d5e4  add x8,sp,#0x50
7101f0d5e8  add x8,x8,#0x60
7101f0d5ec  cmp x8,x0
7101f0d5f0  b.eq 0x7101f0d604
7101f0d5f4  cbz x0,0x7101f0d610
7101f0d5f8  ldr x8,[x0]
7101f0d5fc  ldr x8,[x8, #0x28]
7101f0d600  b 0x7101f0d60c
7101f0d604  ldr x8,[x0]
7101f0d608  ldr x8,[x8, #0x20]
7101f0d60c  blr x8
7101f0d610  ldr x0,[sp, #0xa0]
7101f0d614  add x8,sp,#0x50
7101f0d618  add x8,x8,#0x30
7101f0d61c  cmp x8,x0
7101f0d620  b.eq 0x7101f0d634
7101f0d624  cbz x0,0x7101f0d640
7101f0d628  ldr x8,[x0]
7101f0d62c  ldr x8,[x8, #0x28]
7101f0d630  b 0x7101f0d63c
7101f0d634  ldr x8,[x0]
7101f0d638  ldr x8,[x8, #0x20]
7101f0d63c  blr x8
7101f0d640  ldr x8,[x21, #0xe8]
7101f0d644  ldr x8,[x8]
7101f0d648  add x1,x8,#0x8
7101f0d64c  add x0,sp,#0x50
7101f0d650  bl 0x7103776390
7101f0d654  ldr x0,[x21, #0x110]
7101f0d658  adrp x2,0x71042e7000
7101f0d65c  add x2,x2,#0xb5f
7101f0d660  add x1,sp,#0x50
7101f0d664  mov w3,#0x1
7101f0d668  bl 0x7101f42290
7101f0d66c  ldr x23,[sp, #0x58]
7101f0d670  stp x28,xzr,[sp, #0x50]
7101f0d674  cbz x23,0x7101f0d690
7101f0d678  ldr x0,[x23, #0x18]
7101f0d67c  stp x19,xzr,[x23, #0x10]
7101f0d680  cbz x0,0x7101f0d688
7101f0d684  bl 0x710392eb40
7101f0d688  mov x0,x23
7101f0d68c  bl 0x710392eb40
7101f0d690  ldr x8,[x21, #0xe8]
7101f0d694  ldr x8,[x8]
7101f0d698  add x0,x8,#0x8
7101f0d69c  adrp x1,0x71042c5000
7101f0d6a0  add x1,x1,#0x6e8
7101f0d6a4  sub x8,x29,#0xe0
7101f0d6a8  sub x19,x29,#0xe0
7101f0d6ac  bl 0x7103776910
7101f0d6b0  add x8,x21,#0x118
7101f0d6b4  cmp x8,x19
7101f0d6b8  b.eq 0x7101f0d6d4
7101f0d6bc  ldur x8,[x29, #-0xd8]
7101f0d6c0  stur xzr,[x29, #-0xd8]
7101f0d6c4  ldr x0,[x21, #0x120]
7101f0d6c8  str x8,[x21, #0x120]
7101f0d6cc  cbz x0,0x7101f0d6d4
7101f0d6d0  bl 0x710392eb40
7101f0d6d4  ldur x0,[x29, #-0xd8]
7101f0d6d8  ldr x23,[sp, #0x30]
7101f0d6dc  adrp x19,0x710523d000
7101f0d6e0  add x19,x19,#0x9a8
7101f0d6e4  stp x19,xzr,[x29, #-0xe0]
7101f0d6e8  cbz x0,0x7101f0d6f0
7101f0d6ec  bl 0x710392eb40
7101f0d6f0  ldr x9,[x27, #0x2d0]
7101f0d6f4  ldrb w8,[x9]
7101f0d6f8  cmp w8,#0xc
7101f0d6fc  b.ne 0x7101f0d788
7101f0d700  ldur w8,[x9, #0x1]
7101f0d704  subs w10,w8,#0x1
7101f0d708  b.lt 0x7101f0d788
7101f0d70c  ldr x12,[sp, #0x18]
7101f0d710  ldr x13,[x12]
7101f0d714  ldursw x8,[x9, #0x5]
7101f0d718  ldp x12,x13,[x13, #0x20]
7101f0d71c  mov x14,#0xa8ff
7101f0d720  movk x14,#0x2fb1, LSL #16
7101f0d724  mov w11,wzr
7101f0d728  add x13,x13,x8
7101f0d72c  movk x14,#0x10, LSL #32
7101f0d730  adrp x8,0x7104742000
7101f0d734  add x8,x8,#0xdbb
7101f0d738  add w15,w10,w11
7101f0d73c  cmp w15,#0x0
7101f0d740  cinc w15,w15,lt
7101f0d744  asr w15,w15,#0x1
7101f0d748  add x16,x13,w15, SXTW  #0x3
7101f0d74c  ldr w17,[x16]
7101f0d750  ldr x17,[x12, x17, LSL #0x3]
7101f0d754  cmp x17,x14
7101f0d758  b.eq 0x7101f0d778
7101f0d75c  sub w16,w15,#0x1
7101f0d760  cmp x17,x14
7101f0d764  csel w10,w16,w10,hi
7101f0d768  csinc w11,w11,w15,hi
7101f0d76c  cmp w11,w10
7101f0d770  b.le 0x7101f0d738
7101f0d774  b 0x7101f0d790
7101f0d778  ldrsw x8,[x16, #0x4]
7101f0d77c  tbnz w8,#0x1f,0x7101f0d788
7101f0d780  add x8,x9,x8
7101f0d784  b 0x7101f0d790
7101f0d788  adrp x8,0x7104742000
7101f0d78c  add x8,x8,#0xdbb
7101f0d790  ldrb w9,[x8]
7101f0d794  cmp w9,#0xb
7101f0d798  b.ne 0x7101f0d7b4
7101f0d79c  ldur w9,[x8, #0x1]
7101f0d7a0  cmp w9,#0x1
7101f0d7a4  b.lt 0x7101f0d7b4
7101f0d7a8  ldursw x9,[x8, #0x5]
7101f0d7ac  add x8,x8,x9
7101f0d7b0  b 0x7101f0d7bc
7101f0d7b4  adrp x8,0x7104742000
7101f0d7b8  add x8,x8,#0xdbb
7101f0d7bc  ldrb w9,[x8]
7101f0d7c0  cmp w9,#0x8
7101f0d7c4  b.ne 0x7101f0d7cc
7101f0d7c8  ldur s8,[x8, #0x1]
7101f0d7cc  adrp x8,0x7104473000
7101f0d7d0  ldr s0,[x8, #0xa54]
7101f0d7d4  fmul s1,s8,s0
7101f0d7d8  fcvtzu x8,s1
7101f0d7dc  str x8,[x21, #0x128]
7101f0d7e0  ldr x9,[x27, #0x2d0]
7101f0d7e4  ldrb w8,[x9]
7101f0d7e8  cmp w8,#0xc
7101f0d7ec  b.ne 0x7101f0d878
7101f0d7f0  ldur w8,[x9, #0x1]
7101f0d7f4  subs w10,w8,#0x1
7101f0d7f8  b.lt 0x7101f0d878
7101f0d7fc  ldr x12,[sp, #0x18]
7101f0d800  ldr x13,[x12]
7101f0d804  ldursw x8,[x9, #0x5]
7101f0d808  ldp x12,x13,[x13, #0x20]
7101f0d80c  mov x14,#0xa8ff
7101f0d810  movk x14,#0x2fb1, LSL #16
7101f0d814  mov w11,wzr
7101f0d818  add x13,x13,x8
7101f0d81c  movk x14,#0x10, LSL #32
7101f0d820  adrp x8,0x7104742000
7101f0d824  add x8,x8,#0xdbb
7101f0d828  add w15,w10,w11
7101f0d82c  cmp w15,#0x0
7101f0d830  cinc w15,w15,lt
7101f0d834  asr w15,w15,#0x1
7101f0d838  add x16,x13,w15, SXTW  #0x3
7101f0d83c  ldr w17,[x16]
7101f0d840  ldr x17,[x12, x17, LSL #0x3]
7101f0d844  cmp x17,x14
7101f0d848  b.eq 0x7101f0d868
7101f0d84c  sub w16,w15,#0x1
7101f0d850  cmp x17,x14
7101f0d854  csel w10,w16,w10,hi
7101f0d858  csinc w11,w11,w15,hi
7101f0d85c  cmp w11,w10
7101f0d860  b.le 0x7101f0d828
7101f0d864  b 0x7101f0d880
7101f0d868  ldrsw x8,[x16, #0x4]
7101f0d86c  tbnz w8,#0x1f,0x7101f0d878
7101f0d870  add x8,x9,x8
7101f0d874  b 0x7101f0d880
7101f0d878  adrp x8,0x7104742000
7101f0d87c  add x8,x8,#0xdbb
7101f0d880  ldrb w9,[x8]
7101f0d884  cmp w9,#0xb
7101f0d888  b.ne 0x7101f0d8a4
7101f0d88c  ldur w9,[x8, #0x1]
7101f0d890  cmp w9,#0x2
7101f0d894  b.lt 0x7101f0d8a4
7101f0d898  ldursw x9,[x8, #0x9]
7101f0d89c  add x8,x8,x9
7101f0d8a0  b 0x7101f0d8ac
7101f0d8a4  adrp x8,0x7104742000
7101f0d8a8  add x8,x8,#0xdbb
7101f0d8ac  ldrb w9,[x8]
7101f0d8b0  cmp w9,#0x8
7101f0d8b4  b.ne 0x7101f0d8c0
7101f0d8b8  ldur s1,[x8, #0x1]
7101f0d8bc  b 0x7101f0d8c4
7101f0d8c0  fmov s1,wzr
7101f0d8c4  fmul s1,s1,s0
7101f0d8c8  fcvtzu x8,s1
7101f0d8cc  str x8,[x21, #0x130]
7101f0d8d0  ldr x9,[x27, #0x2d0]
7101f0d8d4  ldrb w8,[x9]
7101f0d8d8  cmp w8,#0xc
7101f0d8dc  b.ne 0x7101f0d968
7101f0d8e0  ldur w8,[x9, #0x1]
7101f0d8e4  subs w10,w8,#0x1
7101f0d8e8  b.lt 0x7101f0d968
7101f0d8ec  ldr x12,[sp, #0x18]
7101f0d8f0  ldr x13,[x12]
7101f0d8f4  ldursw x8,[x9, #0x5]
7101f0d8f8  ldp x12,x13,[x13, #0x20]
7101f0d8fc  mov x14,#0xa8ff
7101f0d900  movk x14,#0x2fb1, LSL #16
7101f0d904  mov w11,wzr
7101f0d908  add x13,x13,x8
7101f0d90c  movk x14,#0x10, LSL #32
7101f0d910  adrp x8,0x7104742000
7101f0d914  add x8,x8,#0xdbb
7101f0d918  add w15,w10,w11
7101f0d91c  cmp w15,#0x0
7101f0d920  cinc w15,w15,lt
7101f0d924  asr w15,w15,#0x1
7101f0d928  add x16,x13,w15, SXTW  #0x3
7101f0d92c  ldr w17,[x16]
7101f0d930  ldr x17,[x12, x17, LSL #0x3]
7101f0d934  cmp x17,x14
7101f0d938  b.eq 0x7101f0d958
7101f0d93c  sub w16,w15,#0x1
7101f0d940  cmp x17,x14
7101f0d944  csel w10,w16,w10,hi
7101f0d948  csinc w11,w11,w15,hi
7101f0d94c  cmp w11,w10
7101f0d950  b.le 0x7101f0d918
7101f0d954  b 0x7101f0d970
7101f0d958  ldrsw x8,[x16, #0x4]
7101f0d95c  tbnz w8,#0x1f,0x7101f0d968
7101f0d960  add x8,x9,x8
7101f0d964  b 0x7101f0d970
7101f0d968  adrp x8,0x7104742000
7101f0d96c  add x8,x8,#0xdbb
7101f0d970  ldrb w9,[x8]
7101f0d974  cmp w9,#0xb
7101f0d978  b.ne 0x7101f0d994
7101f0d97c  ldur w9,[x8, #0x1]
7101f0d980  cmp w9,#0x3
7101f0d984  b.lt 0x7101f0d994
7101f0d988  ldursw x9,[x8, #0xd]
7101f0d98c  add x8,x8,x9
7101f0d990  b 0x7101f0d99c
7101f0d994  adrp x8,0x7104742000
7101f0d998  add x8,x8,#0xdbb
7101f0d99c  ldrb w9,[x8]
7101f0d9a0  cmp w9,#0x8
7101f0d9a4  b.ne 0x7101f0d9b0
7101f0d9a8  ldur s1,[x8, #0x1]
7101f0d9ac  b 0x7101f0d9b4
7101f0d9b0  fmov s1,wzr
7101f0d9b4  fmul s0,s1,s0
7101f0d9b8  fcvtzu x8,s0
7101f0d9bc  str x8,[x21, #0x138]
7101f0d9c0  ldr x9,[x27, #0x2d0]
7101f0d9c4  ldrb w8,[x9]
7101f0d9c8  cmp w8,#0xc
7101f0d9cc  b.ne 0x7101f0da58
7101f0d9d0  ldur w8,[x9, #0x1]
7101f0d9d4  subs w10,w8,#0x1
7101f0d9d8  b.lt 0x7101f0da58
7101f0d9dc  ldr x12,[sp, #0x18]
7101f0d9e0  ldr x13,[x12]
7101f0d9e4  ldursw x8,[x9, #0x5]
7101f0d9e8  ldp x12,x13,[x13, #0x20]
7101f0d9ec  mov x14,#0x42fa
7101f0d9f0  movk x14,#0x81e4, LSL #16
7101f0d9f4  mov w11,wzr
7101f0d9f8  add x13,x13,x8
7101f0d9fc  movk x14,#0x19, LSL #32
7101f0da00  adrp x8,0x7104742000
7101f0da04  add x8,x8,#0xdbb
7101f0da08  add w15,w10,w11
7101f0da0c  cmp w15,#0x0
7101f0da10  cinc w15,w15,lt
7101f0da14  asr w15,w15,#0x1
7101f0da18  add x16,x13,w15, SXTW  #0x3
7101f0da1c  ldr w17,[x16]
7101f0da20  ldr x17,[x12, x17, LSL #0x3]
7101f0da24  cmp x17,x14
7101f0da28  b.eq 0x7101f0da48
7101f0da2c  sub w16,w15,#0x1
7101f0da30  cmp x17,x14
7101f0da34  csel w10,w16,w10,hi
7101f0da38  csinc w11,w11,w15,hi
7101f0da3c  cmp w11,w10
7101f0da40  b.le 0x7101f0da08
7101f0da44  b 0x7101f0da60
7101f0da48  ldrsw x8,[x16, #0x4]
7101f0da4c  tbnz w8,#0x1f,0x7101f0da58
7101f0da50  add x8,x9,x8
7101f0da54  b 0x7101f0da60
7101f0da58  adrp x8,0x7104742000
7101f0da5c  add x8,x8,#0xdbb
7101f0da60  ldrb w9,[x8]
7101f0da64  sub w9,w9,#0x1
7101f0da68  cmp w9,#0x6
7101f0da6c  b.hi 0x7101f0da94
7101f0da70  adrp x10,0x71044fc000
7101f0da74  add x10,x10,#0x430
7101f0da78  ldrsw x9,[x10, x9, LSL #0x2]
7101f0da7c  add x9,x9,x10
7101f0da80  br x9
7101f0da84  ldrb w8,[x8, #0x1]
7101f0da88  b 0x7101f0dab0
7101f0da8c  ldur w8,[x8, #0x1]
7101f0da90  b 0x7101f0dab0
7101f0da94  mov w8,wzr
7101f0da98  b 0x7101f0dab0
7101f0da9c  ldursh w8,[x8, #0x1]
7101f0daa0  b 0x7101f0dab0
7101f0daa4  ldrsb w8,[x8, #0x1]
7101f0daa8  b 0x7101f0dab0
7101f0daac  ldurh w8,[x8, #0x1]
7101f0dab0  str w8,[x21, #0x140]
7101f0dab4  ldr x9,[x27, #0x2d0]
7101f0dab8  ldrb w8,[x9]
7101f0dabc  cmp w8,#0xc
7101f0dac0  b.ne 0x7101f0db4c
7101f0dac4  ldur w8,[x9, #0x1]
7101f0dac8  subs w10,w8,#0x1
7101f0dacc  b.lt 0x7101f0db4c
7101f0dad0  ldr x12,[sp, #0x18]
7101f0dad4  ldr x13,[x12]
7101f0dad8  ldursw x8,[x9, #0x5]
7101f0dadc  ldp x12,x13,[x13, #0x20]
7101f0dae0  mov x14,#0x5eac
7101f0dae4  movk x14,#0x25d9, LSL #16
7101f0dae8  mov w11,wzr
7101f0daec  add x13,x13,x8
7101f0daf0  movk x14,#0x18, LSL #32
7101f0daf4  adrp x8,0x7104742000
7101f0daf8  add x8,x8,#0xdbb
7101f0dafc  add w15,w10,w11
7101f0db00  cmp w15,#0x0
7101f0db04  cinc w15,w15,lt
7101f0db08  asr w15,w15,#0x1
7101f0db0c  add x16,x13,w15, SXTW  #0x3
7101f0db10  ldr w17,[x16]
7101f0db14  ldr x17,[x12, x17, LSL #0x3]
7101f0db18  cmp x17,x14
7101f0db1c  b.eq 0x7101f0db3c
7101f0db20  sub w16,w15,#0x1
7101f0db24  cmp x17,x14
7101f0db28  csel w10,w16,w10,hi
7101f0db2c  csinc w11,w11,w15,hi
7101f0db30  cmp w11,w10
7101f0db34  b.le 0x7101f0dafc
7101f0db38  b 0x7101f0db54
7101f0db3c  ldrsw x8,[x16, #0x4]
7101f0db40  tbnz w8,#0x1f,0x7101f0db4c
7101f0db44  add x8,x9,x8
7101f0db48  b 0x7101f0db54
7101f0db4c  adrp x8,0x7104742000
7101f0db50  add x8,x8,#0xdbb
7101f0db54  ldrb w9,[x8]
7101f0db58  sub w9,w9,#0x1
7101f0db5c  cmp w9,#0x6
7101f0db60  b.hi 0x7101f0db88
7101f0db64  adrp x10,0x71044fc000
7101f0db68  add x10,x10,#0x44c
7101f0db6c  ldrsw x9,[x10, x9, LSL #0x2]
7101f0db70  add x9,x9,x10
7101f0db74  br x9
7101f0db78  ldrb w8,[x8, #0x1]
7101f0db7c  b 0x7101f0dba4
7101f0db80  ldur w8,[x8, #0x1]
7101f0db84  b 0x7101f0dba4
7101f0db88  mov w8,wzr
7101f0db8c  b 0x7101f0dba4
7101f0db90  ldursh w8,[x8, #0x1]
7101f0db94  b 0x7101f0dba4
7101f0db98  ldrsb w8,[x8, #0x1]
7101f0db9c  b 0x7101f0dba4
7101f0dba0  ldurh w8,[x8, #0x1]
7101f0dba4  str w8,[x21, #0x144]
7101f0dba8  ldr x9,[x27, #0x2d0]
7101f0dbac  ldrb w8,[x9]
7101f0dbb0  cmp w8,#0xc
7101f0dbb4  b.ne 0x7101f0dc40
7101f0dbb8  ldur w8,[x9, #0x1]
7101f0dbbc  subs w10,w8,#0x1
7101f0dbc0  b.lt 0x7101f0dc40
7101f0dbc4  ldr x12,[sp, #0x18]
7101f0dbc8  ldr x13,[x12]
7101f0dbcc  ldursw x8,[x9, #0x5]
7101f0dbd0  ldp x12,x13,[x13, #0x20]
7101f0dbd4  mov x14,#0xc788
7101f0dbd8  movk x14,#0x7d56, LSL #16
7101f0dbdc  mov w11,wzr
7101f0dbe0  add x13,x13,x8
7101f0dbe4  movk x14,#0x1a, LSL #32
7101f0dbe8  adrp x8,0x7104742000
7101f0dbec  add x8,x8,#0xdbb
7101f0dbf0  add w15,w10,w11
7101f0dbf4  cmp w15,#0x0
7101f0dbf8  cinc w15,w15,lt
7101f0dbfc  asr w15,w15,#0x1
7101f0dc00  add x16,x13,w15, SXTW  #0x3
7101f0dc04  ldr w17,[x16]
7101f0dc08  ldr x17,[x12, x17, LSL #0x3]
7101f0dc0c  cmp x17,x14
7101f0dc10  b.eq 0x7101f0dc30
7101f0dc14  sub w16,w15,#0x1
7101f0dc18  cmp x17,x14
7101f0dc1c  csel w10,w16,w10,hi
7101f0dc20  csinc w11,w11,w15,hi
7101f0dc24  cmp w11,w10
7101f0dc28  b.le 0x7101f0dbf0
7101f0dc2c  b 0x7101f0dc48
7101f0dc30  ldrsw x8,[x16, #0x4]
7101f0dc34  tbnz w8,#0x1f,0x7101f0dc40
7101f0dc38  add x8,x9,x8
7101f0dc3c  b 0x7101f0dc48
7101f0dc40  adrp x8,0x7104742000
7101f0dc44  add x8,x8,#0xdbb
7101f0dc48  ldrb w9,[x8]
7101f0dc4c  sub w9,w9,#0x1
7101f0dc50  cmp w9,#0x6
7101f0dc54  b.hi 0x7101f0dc7c
7101f0dc58  adrp x10,0x71044fc000
7101f0dc5c  add x10,x10,#0x468
7101f0dc60  ldrsw x9,[x10, x9, LSL #0x2]
7101f0dc64  add x9,x9,x10
7101f0dc68  br x9
7101f0dc6c  ldrb w8,[x8, #0x1]
7101f0dc70  b 0x7101f0dc98
7101f0dc74  ldur w8,[x8, #0x1]
7101f0dc78  b 0x7101f0dc98
7101f0dc7c  mov w8,wzr
7101f0dc80  b 0x7101f0dc98
7101f0dc84  ldursh w8,[x8, #0x1]
7101f0dc88  b 0x7101f0dc98
7101f0dc8c  ldrsb w8,[x8, #0x1]
7101f0dc90  b 0x7101f0dc98
7101f0dc94  ldurh w8,[x8, #0x1]
7101f0dc98  str w8,[x21, #0x148]
7101f0dc9c  ldr x9,[x27, #0x2d0]
7101f0dca0  ldrb w8,[x9]
7101f0dca4  cmp w8,#0xc
7101f0dca8  b.ne 0x7101f0dd34
7101f0dcac  ldur w8,[x9, #0x1]
7101f0dcb0  subs w10,w8,#0x1
7101f0dcb4  b.lt 0x7101f0dd34
7101f0dcb8  ldr x12,[sp, #0x18]
7101f0dcbc  ldr x13,[x12]
7101f0dcc0  ldursw x8,[x9, #0x5]
7101f0dcc4  ldp x12,x13,[x13, #0x20]
7101f0dcc8  mov x14,#0xa2e2
7101f0dccc  movk x14,#0xf842, LSL #16
7101f0dcd0  mov w11,wzr
7101f0dcd4  add x13,x13,x8
7101f0dcd8  movk x14,#0x16, LSL #32
7101f0dcdc  adrp x8,0x7104742000
7101f0dce0  add x8,x8,#0xdbb
7101f0dce4  add w15,w10,w11
7101f0dce8  cmp w15,#0x0
7101f0dcec  cinc w15,w15,lt
7101f0dcf0  asr w15,w15,#0x1
7101f0dcf4  add x16,x13,w15, SXTW  #0x3
7101f0dcf8  ldr w17,[x16]
7101f0dcfc  ldr x17,[x12, x17, LSL #0x3]
7101f0dd00  cmp x17,x14
7101f0dd04  b.eq 0x7101f0dd24
7101f0dd08  sub w16,w15,#0x1
7101f0dd0c  cmp x17,x14
7101f0dd10  csel w10,w16,w10,hi
7101f0dd14  csinc w11,w11,w15,hi
7101f0dd18  cmp w11,w10
7101f0dd1c  b.le 0x7101f0dce4
7101f0dd20  b 0x7101f0dd3c
7101f0dd24  ldrsw x8,[x16, #0x4]
7101f0dd28  tbnz w8,#0x1f,0x7101f0dd34
7101f0dd2c  add x8,x9,x8
7101f0dd30  b 0x7101f0dd3c
7101f0dd34  adrp x8,0x7104742000
7101f0dd38  add x8,x8,#0xdbb
7101f0dd3c  ldrb w9,[x8]
7101f0dd40  sub w9,w9,#0x1
7101f0dd44  cmp w9,#0x6
7101f0dd48  b.hi 0x7101f0dd70
7101f0dd4c  adrp x10,0x71044fc000
7101f0dd50  add x10,x10,#0x484
7101f0dd54  ldrsw x9,[x10, x9, LSL #0x2]
7101f0dd58  add x9,x9,x10
7101f0dd5c  br x9
7101f0dd60  ldrb w8,[x8, #0x1]
7101f0dd64  b 0x7101f0dd8c
7101f0dd68  ldur w8,[x8, #0x1]
7101f0dd6c  b 0x7101f0dd8c
7101f0dd70  mov w8,wzr
7101f0dd74  b 0x7101f0dd8c
7101f0dd78  ldursh w8,[x8, #0x1]
7101f0dd7c  b 0x7101f0dd8c
7101f0dd80  ldrsb w8,[x8, #0x1]
7101f0dd84  b 0x7101f0dd8c
7101f0dd88  ldurh w8,[x8, #0x1]
7101f0dd8c  str w8,[x21, #0x14c]
7101f0dd90  ldr x8,[x21, #0xe8]
7101f0dd94  ldr x8,[x8]
7101f0dd98  ldr x0,[x8, #0x10]
7101f0dd9c  adrp x1,0x710428f000
7101f0dda0  add x1,x1,#0xf7d
7101f0dda4  bl 0x7103778760
7101f0dda8  ldp x8,x9,[x26]
7101f0ddac  sub x9,x9,x8
7101f0ddb0  asr x9,x9,#0x3
7101f0ddb4  cmp x9,#0x4
7101f0ddb8  b.ls 0x7101f0ef10
7101f0ddbc  ldr x0,[x27, #0x390]
7101f0ddc0  ldr x1,[x23]
7101f0ddc4  add x2,x8,#0x20
7101f0ddc8  ldr x3,[sp, #0x38]
7101f0ddcc  bl 0x7101f35b00
7101f0ddd0  ldp x8,x9,[x26]
7101f0ddd4  sub x9,x9,x8
7101f0ddd8  asr x9,x9,#0x3
7101f0dddc  cmp x9,#0x5
7101f0dde0  b.ls 0x7101f0ef10
7101f0dde4  ldr x0,[x27, #0x3a0]
7101f0dde8  ldr x1,[x23]
7101f0ddec  add x2,x8,#0x28
7101f0ddf0  bl 0x7101f307c0
7101f0ddf4  ldp x8,x9,[x26]
7101f0ddf8  sub x9,x9,x8
7101f0ddfc  asr x9,x9,#0x3
7101f0de00  cmp x9,#0x6
7101f0de04  b.ls 0x7101f0ef10
7101f0de08  ldr x21,[x27, #0x3b0]
7101f0de0c  ldr x1,[x23]
7101f0de10  add x2,x8,#0x30
7101f0de14  mov w3,#0x1
7101f0de18  mov x0,x21
7101f0de1c  bl 0x71032cbf30
7101f0de20  ldr x8,[x21]
7101f0de24  ldr x8,[x8]
7101f0de28  ldr x9,[x8]
7101f0de2c  ldr x8,[x9, #0x600]
7101f0de30  str wzr,[x8, #0x494]
7101f0de34  ldr x8,[x9, #0x608]
7101f0de38  ldr x9,[x9, #0x610]
7101f0de3c  cmp x8,x9
7101f0de40  b.eq 0x7101f0dea8
7101f0de44  sub x10,x9,#0x10
7101f0de48  sub x10,x10,x8
7101f0de4c  ubfx x11,x10,#0x4,#0x1c
7101f0de50  add w11,w11,#0x1
7101f0de54  ands x11,x11,#0x3
7101f0de58  b.eq 0x7101f0de74
7101f0de5c  neg x11,x11
7101f0de60  ldr x12,[x8, #0x8]
7101f0de64  add x8,x8,#0x10
7101f0de68  adds x11,x11,#0x1
7101f0de6c  str wzr,[x12, #0x494]
7101f0de70  b.ne 0x7101f0de60
7101f0de74  cmp x10,#0x30
7101f0de78  b.cc 0x7101f0dea8
7101f0de7c  ldr x10,[x8, #0x8]
7101f0de80  str wzr,[x10, #0x494]
7101f0de84  ldr x10,[x8, #0x18]
7101f0de88  str wzr,[x10, #0x494]
7101f0de8c  ldr x10,[x8, #0x28]
7101f0de90  str wzr,[x10, #0x494]
7101f0de94  ldr x10,[x8, #0x38]
7101f0de98  add x8,x8,#0x40
7101f0de9c  cmp x9,x8
7101f0dea0  str wzr,[x10, #0x494]
7101f0dea4  b.ne 0x7101f0de7c
7101f0dea8  ldr x8,[x21]
7101f0deac  ldr x8,[x8]
7101f0deb0  ldr x0,[x8]
7101f0deb4  mov w1,#0x1
7101f0deb8  bl 0x71037760f0
7101f0debc  ldr x8,[x21]
7101f0dec0  ldr x8,[x8]
7101f0dec4  ldr x8,[x8]
7101f0dec8  ldr x9,[x8, #0x600]
7101f0decc  strb wzr,[x8, #0x656]
7101f0ded0  strb wzr,[x9, #0x4ab]
7101f0ded4  ldr x9,[x8, #0x608]
7101f0ded8  ldr x10,[x8, #0x610]
7101f0dedc  cmp x9,x10
7101f0dee0  b.eq 0x7101f0df5c
7101f0dee4  sub x11,x10,#0x10
7101f0dee8  sub x11,x11,x9
7101f0deec  ubfx x12,x11,#0x4,#0x1c
7101f0def0  add w12,w12,#0x1
7101f0def4  ands x12,x12,#0x3
7101f0def8  b.eq 0x7101f0df18
7101f0defc  neg x12,x12
7101f0df00  ldrb w13,[x8, #0x656]
7101f0df04  ldr x14,[x9, #0x8]
7101f0df08  add x9,x9,#0x10
7101f0df0c  adds x12,x12,#0x1
7101f0df10  strb w13,[x14, #0x4ab]
7101f0df14  b.ne 0x7101f0df00
7101f0df18  cmp x11,#0x30
7101f0df1c  b.cc 0x7101f0df5c
7101f0df20  ldrb w11,[x8, #0x656]
7101f0df24  ldr x12,[x9, #0x8]
7101f0df28  strb w11,[x12, #0x4ab]
7101f0df2c  ldrb w11,[x8, #0x656]
7101f0df30  ldr x12,[x9, #0x18]
7101f0df34  strb w11,[x12, #0x4ab]
7101f0df38  ldrb w11,[x8, #0x656]
7101f0df3c  ldr x12,[x9, #0x28]
7101f0df40  strb w11,[x12, #0x4ab]
7101f0df44  ldrb w11,[x8, #0x656]
7101f0df48  ldr x12,[x9, #0x38]
7101f0df4c  add x9,x9,#0x40
7101f0df50  cmp x10,x9
7101f0df54  strb w11,[x12, #0x4ab]
7101f0df58  b.ne 0x7101f0df20
7101f0df5c  ldr x8,[x21]
7101f0df60  ldr x8,[x8]
7101f0df64  add x1,x8,#0x8
7101f0df68  add x0,sp,#0x50
7101f0df6c  bl 0x7103776390
7101f0df70  ldr x0,[x21, #0x10]
7101f0df74  adrp x2,0x710424f000
7101f0df78  add x2,x2,#0xd4d
7101f0df7c  add x1,sp,#0x50
7101f0df80  mov w3,wzr
7101f0df84  bl 0x7101f3e4e0
7101f0df88  ldr x21,[sp, #0x58]
7101f0df8c  stp x28,xzr,[sp, #0x50]
7101f0df90  cbz x21,0x7101f0dfac
7101f0df94  ldr x0,[x21, #0x18]
7101f0df98  stp x19,xzr,[x21, #0x10]
7101f0df9c  cbz x0,0x7101f0dfa4
7101f0dfa0  bl 0x710392eb40
7101f0dfa4  mov x0,x21
7101f0dfa8  bl 0x710392eb40
7101f0dfac  ldp x8,x9,[x26]
7101f0dfb0  sub x9,x9,x8
7101f0dfb4  asr x9,x9,#0x3
7101f0dfb8  cmp x9,#0x7
7101f0dfbc  b.ls 0x7101f0ef10
7101f0dfc0  ldr x21,[x27, #0x3c0]
7101f0dfc4  ldr x1,[x23]
7101f0dfc8  add x2,x8,#0x38
7101f0dfcc  mov w3,#0x1
7101f0dfd0  mov x0,x21
7101f0dfd4  bl 0x71032cbf30
7101f0dfd8  ldr x8,[x21]
7101f0dfdc  ldr x8,[x8]
7101f0dfe0  ldr x9,[x8]
7101f0dfe4  ldr x8,[x9, #0x600]
7101f0dfe8  str wzr,[x8, #0x494]
7101f0dfec  ldr x8,[x9, #0x608]
7101f0dff0  ldr x9,[x9, #0x610]
7101f0dff4  cmp x8,x9
7101f0dff8  b.eq 0x7101f0e060
7101f0dffc  sub x10,x9,#0x10
7101f0e000  sub x10,x10,x8
7101f0e004  ubfx x11,x10,#0x4,#0x1c
7101f0e008  add w11,w11,#0x1
7101f0e00c  ands x11,x11,#0x3
7101f0e010  b.eq 0x7101f0e02c
7101f0e014  neg x11,x11
7101f0e018  ldr x12,[x8, #0x8]
7101f0e01c  add x8,x8,#0x10
7101f0e020  adds x11,x11,#0x1
7101f0e024  str wzr,[x12, #0x494]
7101f0e028  b.ne 0x7101f0e018
7101f0e02c  cmp x10,#0x30
7101f0e030  b.cc 0x7101f0e060
7101f0e034  ldr x10,[x8, #0x8]
7101f0e038  str wzr,[x10, #0x494]
7101f0e03c  ldr x10,[x8, #0x18]
7101f0e040  str wzr,[x10, #0x494]
7101f0e044  ldr x10,[x8, #0x28]
7101f0e048  str wzr,[x10, #0x494]
7101f0e04c  ldr x10,[x8, #0x38]
7101f0e050  add x8,x8,#0x40
7101f0e054  cmp x9,x8
7101f0e058  str wzr,[x10, #0x494]
7101f0e05c  b.ne 0x7101f0e034
7101f0e060  ldr x8,[x21]
7101f0e064  ldr x8,[x8]
7101f0e068  ldr x0,[x8]
7101f0e06c  mov w1,#0x1
7101f0e070  bl 0x71037760f0
7101f0e074  ldr x8,[x21]
7101f0e078  ldr x8,[x8]
7101f0e07c  ldr x8,[x8]
7101f0e080  ldr x9,[x8, #0x600]
7101f0e084  strb wzr,[x8, #0x656]
7101f0e088  strb wzr,[x9, #0x4ab]
7101f0e08c  ldr x9,[x8, #0x608]
7101f0e090  ldr x10,[x8, #0x610]
7101f0e094  cmp x9,x10
7101f0e098  b.eq 0x7101f0e114
7101f0e09c  sub x11,x10,#0x10
7101f0e0a0  sub x11,x11,x9
7101f0e0a4  ubfx x12,x11,#0x4,#0x1c
7101f0e0a8  add w12,w12,#0x1
7101f0e0ac  ands x12,x12,#0x3
7101f0e0b0  b.eq 0x7101f0e0d0
7101f0e0b4  neg x12,x12
7101f0e0b8  ldrb w13,[x8, #0x656]
7101f0e0bc  ldr x14,[x9, #0x8]
7101f0e0c0  add x9,x9,#0x10
7101f0e0c4  adds x12,x12,#0x1
7101f0e0c8  strb w13,[x14, #0x4ab]
7101f0e0cc  b.ne 0x7101f0e0b8
7101f0e0d0  cmp x11,#0x30
7101f0e0d4  b.cc 0x7101f0e114
7101f0e0d8  ldrb w11,[x8, #0x656]
7101f0e0dc  ldr x12,[x9, #0x8]
7101f0e0e0  strb w11,[x12, #0x4ab]
7101f0e0e4  ldrb w11,[x8, #0x656]
7101f0e0e8  ldr x12,[x9, #0x18]
7101f0e0ec  strb w11,[x12, #0x4ab]
7101f0e0f0  ldrb w11,[x8, #0x656]
7101f0e0f4  ldr x12,[x9, #0x28]
7101f0e0f8  strb w11,[x12, #0x4ab]
7101f0e0fc  ldrb w11,[x8, #0x656]
7101f0e100  ldr x12,[x9, #0x38]
7101f0e104  add x9,x9,#0x40
7101f0e108  cmp x10,x9
7101f0e10c  strb w11,[x12, #0x4ab]
7101f0e110  b.ne 0x7101f0e0d8
7101f0e114  mov x19,x21
7101f0e118  ldr x8,[x19], #0x8
7101f0e11c  ldr x8,[x8]
7101f0e120  add x0,x8,#0x8
7101f0e124  adrp x1,0x71043ae000
7101f0e128  add x1,x1,#0x114
7101f0e12c  add x8,sp,#0x50
7101f0e130  add x20,sp,#0x50
7101f0e134  bl 0x7103776910
7101f0e138  cmp x19,x20
7101f0e13c  b.eq 0x7101f0e158
7101f0e140  ldr x8,[sp, #0x58]
7101f0e144  str xzr,[sp, #0x58]
7101f0e148  ldr x0,[x21, #0x10]
7101f0e14c  str x8,[x21, #0x10]
7101f0e150  cbz x0,0x7101f0e158
7101f0e154  bl 0x710392eb40
7101f0e158  ldr x0,[sp, #0x58]
7101f0e15c  adrp x8,0x710523d000
7101f0e160  add x8,x8,#0x9a8
7101f0e164  stp x8,xzr,[sp, #0x50]
7101f0e168  cbz x0,0x7101f0e170
7101f0e16c  bl 0x710392eb40
7101f0e170  mov x19,x21
7101f0e174  ldr x8,[x19], #0x18
7101f0e178  ldr x8,[x8]
7101f0e17c  add x0,x8,#0x8
7101f0e180  adrp x1,0x7104270000
7101f0e184  add x1,x1,#0x857
7101f0e188  add x8,sp,#0x50
7101f0e18c  add x20,sp,#0x50
7101f0e190  bl 0x7103776910
7101f0e194  cmp x19,x20
7101f0e198  b.eq 0x7101f0e1b4
7101f0e19c  ldr x8,[sp, #0x58]
7101f0e1a0  str xzr,[sp, #0x58]
7101f0e1a4  ldr x0,[x21, #0x20]
7101f0e1a8  str x8,[x21, #0x20]
7101f0e1ac  cbz x0,0x7101f0e1b4
7101f0e1b0  bl 0x710392eb40
7101f0e1b4  ldr x0,[sp, #0x58]
7101f0e1b8  adrp x19,0x710523d000
7101f0e1bc  add x19,x19,#0x9a8
7101f0e1c0  stp x19,xzr,[sp, #0x50]
7101f0e1c4  cbz x0,0x7101f0e1cc
7101f0e1c8  bl 0x710392eb40
7101f0e1cc  ldr x8,[x21]
7101f0e1d0  ldr x8,[x8]
7101f0e1d4  add x0,x8,#0x8
7101f0e1d8  adrp x1,0x710439d000
7101f0e1dc  add x1,x1,#0xcf4
7101f0e1e0  add x8,sp,#0x50
7101f0e1e4  bl 0x7103776640
7101f0e1e8  ldr x22,[sp, #0x58]
7101f0e1ec  fmov s0,0x3f800000
7101f0e1f0  adrp x1,0x710435c000
7101f0e1f4  add x1,x1,#0xad
7101f0e1f8  mov x0,x22
7101f0e1fc  bl 0x7103778300
7101f0e200  stp x28,xzr,[sp, #0x50]
7101f0e204  cbz x22,0x7101f0e220
7101f0e208  ldr x0,[x22, #0x18]
7101f0e20c  stp x19,xzr,[x22, #0x10]
7101f0e210  cbz x0,0x7101f0e218
7101f0e214  bl 0x710392eb40
7101f0e218  mov x0,x22
7101f0e21c  bl 0x710392eb40
7101f0e220  ldr x8,[x21]
7101f0e224  ldr x8,[x8]
7101f0e228  ldr x0,[x8, #0x10]
7101f0e22c  adrp x1,0x710428f000
7101f0e230  add x1,x1,#0xf7d
7101f0e234  bl 0x7103778760
7101f0e238  ldp x8,x9,[x26]
7101f0e23c  sub x9,x9,x8
7101f0e240  asr x9,x9,#0x3
7101f0e244  cmp x9,#0x8
7101f0e248  b.ls 0x7101f0ef10
7101f0e24c  ldr x21,[x27, #0x3d0]
7101f0e250  ldr x1,[x23]
7101f0e254  add x2,x8,#0x40
7101f0e258  mov w3,#0x1
7101f0e25c  mov x0,x21
7101f0e260  bl 0x71032cbf30
7101f0e264  ldr x8,[x21]
7101f0e268  ldr x8,[x8]
7101f0e26c  ldr x9,[x8]
7101f0e270  ldr x8,[x9, #0x600]
7101f0e274  str wzr,[x8, #0x494]
7101f0e278  ldr x8,[x9, #0x608]
7101f0e27c  ldr x9,[x9, #0x610]
7101f0e280  cmp x8,x9
7101f0e284  b.eq 0x7101f0e2ec
7101f0e288  sub x10,x9,#0x10
7101f0e28c  sub x10,x10,x8
7101f0e290  ubfx x11,x10,#0x4,#0x1c
7101f0e294  add w11,w11,#0x1
7101f0e298  ands x11,x11,#0x3
7101f0e29c  b.eq 0x7101f0e2b8
7101f0e2a0  neg x11,x11
7101f0e2a4  ldr x12,[x8, #0x8]
7101f0e2a8  add x8,x8,#0x10
7101f0e2ac  adds x11,x11,#0x1
7101f0e2b0  str wzr,[x12, #0x494]
7101f0e2b4  b.ne 0x7101f0e2a4
7101f0e2b8  cmp x10,#0x30
7101f0e2bc  b.cc 0x7101f0e2ec
7101f0e2c0  ldr x10,[x8, #0x8]
7101f0e2c4  str wzr,[x10, #0x494]
7101f0e2c8  ldr x10,[x8, #0x18]
7101f0e2cc  str wzr,[x10, #0x494]
7101f0e2d0  ldr x10,[x8, #0x28]
7101f0e2d4  str wzr,[x10, #0x494]
7101f0e2d8  ldr x10,[x8, #0x38]
7101f0e2dc  add x8,x8,#0x40
7101f0e2e0  cmp x9,x8
7101f0e2e4  str wzr,[x10, #0x494]
7101f0e2e8  b.ne 0x7101f0e2c0
7101f0e2ec  ldr x8,[x21]
7101f0e2f0  ldr x8,[x8]
7101f0e2f4  ldr x0,[x8]
7101f0e2f8  mov w1,#0x1
7101f0e2fc  bl 0x71037760f0
7101f0e300  ldr x8,[x21]
7101f0e304  ldr x8,[x8]
7101f0e308  ldr x8,[x8]
7101f0e30c  ldr x9,[x8, #0x600]
7101f0e310  strb wzr,[x8, #0x656]
7101f0e314  strb wzr,[x9, #0x4ab]
7101f0e318  ldr x9,[x8, #0x608]
7101f0e31c  ldr x10,[x8, #0x610]
7101f0e320  cmp x9,x10
7101f0e324  b.eq 0x7101f0e3a0
7101f0e328  sub x11,x10,#0x10
7101f0e32c  sub x11,x11,x9
7101f0e330  ubfx x12,x11,#0x4,#0x1c
7101f0e334  add w12,w12,#0x1
7101f0e338  ands x12,x12,#0x3
7101f0e33c  b.eq 0x7101f0e35c
7101f0e340  neg x12,x12
7101f0e344  ldrb w13,[x8, #0x656]
7101f0e348  ldr x14,[x9, #0x8]
7101f0e34c  add x9,x9,#0x10
7101f0e350  adds x12,x12,#0x1
7101f0e354  strb w13,[x14, #0x4ab]
7101f0e358  b.ne 0x7101f0e344
7101f0e35c  cmp x11,#0x30
7101f0e360  b.cc 0x7101f0e3a0
7101f0e364  ldrb w11,[x8, #0x656]
7101f0e368  ldr x12,[x9, #0x8]
7101f0e36c  strb w11,[x12, #0x4ab]
7101f0e370  ldrb w11,[x8, #0x656]
7101f0e374  ldr x12,[x9, #0x18]
7101f0e378  strb w11,[x12, #0x4ab]
7101f0e37c  ldrb w11,[x8, #0x656]
7101f0e380  ldr x12,[x9, #0x28]
7101f0e384  strb w11,[x12, #0x4ab]
7101f0e388  ldrb w11,[x8, #0x656]
7101f0e38c  ldr x12,[x9, #0x38]
7101f0e390  add x9,x9,#0x40
7101f0e394  cmp x10,x9
7101f0e398  strb w11,[x12, #0x4ab]
7101f0e39c  b.ne 0x7101f0e364
7101f0e3a0  ldr x8,[x21]
7101f0e3a4  ldr x8,[x8]
7101f0e3a8  ldr x8,[x8, #0x10]
7101f0e3ac  ldr x8,[x8, #0x8]
7101f0e3b0  cbz x8,0x7101f0e3c8
7101f0e3b4  ldr x8,[x8, #0x18]
7101f0e3b8  cbz x8,0x7101f0e3c8
7101f0e3bc  ldrb w9,[x8, #0x58]
7101f0e3c0  and w9,w9,#0xfe
7101f0e3c4  strb w9,[x8, #0x58]
7101f0e3c8  ldp x8,x9,[x26]
7101f0e3cc  sub x9,x9,x8
7101f0e3d0  asr x9,x9,#0x3
7101f0e3d4  cmp x9,#0x9
7101f0e3d8  b.ls 0x7101f0ef10
7101f0e3dc  ldr x21,[x27, #0x3e0]
7101f0e3e0  ldr x1,[x23]
7101f0e3e4  add x2,x8,#0x48
7101f0e3e8  mov w3,#0x1
7101f0e3ec  mov x0,x21
7101f0e3f0  bl 0x71032cbf30
7101f0e3f4  ldr x8,[x21]
7101f0e3f8  ldr x8,[x8]
7101f0e3fc  ldr x9,[x8]
7101f0e400  ldr x8,[x9, #0x600]
7101f0e404  str wzr,[x8, #0x494]
7101f0e408  ldr x8,[x9, #0x608]
7101f0e40c  ldr x9,[x9, #0x610]
7101f0e410  cmp x8,x9
7101f0e414  b.eq 0x7101f0e47c
7101f0e418  sub x10,x9,#0x10
7101f0e41c  sub x10,x10,x8
7101f0e420  ubfx x11,x10,#0x4,#0x1c
7101f0e424  add w11,w11,#0x1
7101f0e428  ands x11,x11,#0x3
7101f0e42c  b.eq 0x7101f0e448
7101f0e430  neg x11,x11
7101f0e434  ldr x12,[x8, #0x8]
7101f0e438  add x8,x8,#0x10
7101f0e43c  adds x11,x11,#0x1
7101f0e440  str wzr,[x12, #0x494]
7101f0e444  b.ne 0x7101f0e434
7101f0e448  cmp x10,#0x30
7101f0e44c  b.cc 0x7101f0e47c
7101f0e450  ldr x10,[x8, #0x8]
7101f0e454  str wzr,[x10, #0x494]
7101f0e458  ldr x10,[x8, #0x18]
7101f0e45c  str wzr,[x10, #0x494]
7101f0e460  ldr x10,[x8, #0x28]
7101f0e464  str wzr,[x10, #0x494]
7101f0e468  ldr x10,[x8, #0x38]
7101f0e46c  add x8,x8,#0x40
7101f0e470  cmp x9,x8
7101f0e474  str wzr,[x10, #0x494]
7101f0e478  b.ne 0x7101f0e450
7101f0e47c  ldr x8,[x21]
7101f0e480  ldr x8,[x8]
7101f0e484  ldr x0,[x8]
7101f0e488  mov w1,#0x1
7101f0e48c  bl 0x71037760f0
7101f0e490  ldr x8,[x21]
7101f0e494  ldr x8,[x8]
7101f0e498  ldr x8,[x8]
7101f0e49c  ldr x9,[x8, #0x600]
7101f0e4a0  strb wzr,[x8, #0x656]
7101f0e4a4  strb wzr,[x9, #0x4ab]
7101f0e4a8  ldr x9,[x8, #0x608]
7101f0e4ac  ldr x10,[x8, #0x610]
7101f0e4b0  cmp x9,x10
7101f0e4b4  b.eq 0x7101f0e530
7101f0e4b8  sub x11,x10,#0x10
7101f0e4bc  sub x11,x11,x9
7101f0e4c0  ubfx x12,x11,#0x4,#0x1c
7101f0e4c4  add w12,w12,#0x1
7101f0e4c8  ands x12,x12,#0x3
7101f0e4cc  b.eq 0x7101f0e4ec
7101f0e4d0  neg x12,x12
7101f0e4d4  ldrb w13,[x8, #0x656]
7101f0e4d8  ldr x14,[x9, #0x8]
7101f0e4dc  add x9,x9,#0x10
7101f0e4e0  adds x12,x12,#0x1
7101f0e4e4  strb w13,[x14, #0x4ab]
7101f0e4e8  b.ne 0x7101f0e4d4
7101f0e4ec  cmp x11,#0x30
7101f0e4f0  b.cc 0x7101f0e530
7101f0e4f4  ldrb w11,[x8, #0x656]
7101f0e4f8  ldr x12,[x9, #0x8]
7101f0e4fc  strb w11,[x12, #0x4ab]
7101f0e500  ldrb w11,[x8, #0x656]
7101f0e504  ldr x12,[x9, #0x18]
7101f0e508  strb w11,[x12, #0x4ab]
7101f0e50c  ldrb w11,[x8, #0x656]
7101f0e510  ldr x12,[x9, #0x28]
7101f0e514  strb w11,[x12, #0x4ab]
7101f0e518  ldrb w11,[x8, #0x656]
7101f0e51c  ldr x12,[x9, #0x38]
7101f0e520  add x9,x9,#0x40
7101f0e524  cmp x10,x9
7101f0e528  strb w11,[x12, #0x4ab]
7101f0e52c  b.ne 0x7101f0e4f4
7101f0e530  ldr x8,[x21]
7101f0e534  ldr x8,[x8]
7101f0e538  add x0,x8,#0x8
7101f0e53c  adrp x1,0x71043ae000
7101f0e540  add x1,x1,#0x14d
7101f0e544  sub x8,x29,#0xe0
7101f0e548  bl 0x7103776640
7101f0e54c  adrp x1,0x7104464000
7101f0e550  add x1,x1,#0x37f
7101f0e554  add x8,sp,#0x50
7101f0e558  sub x0,x29,#0xe0
7101f0e55c  bl 0x7103776910
7101f0e560  ldur x21,[x29, #-0xd8]
7101f0e564  stp x28,xzr,[x29, #-0xe0]
7101f0e568  cbz x21,0x7101f0e584
7101f0e56c  ldr x0,[x21, #0x18]
7101f0e570  stp x19,xzr,[x21, #0x10]
7101f0e574  cbz x0,0x7101f0e57c
7101f0e578  bl 0x710392eb40
7101f0e57c  mov x0,x21
7101f0e580  bl 0x710392eb40
7101f0e584  adrp x8,0x7105339000
7101f0e588  ldr x19,[x8, #0xfd0]
7101f0e58c  mov w0,#0x10
7101f0e590  mov w1,#0x20
7101f0e594  bl 0x710392e290
7101f0e598  mov x21,x0
7101f0e59c  cbnz x0,0x7101f0e5e8
7101f0e5a0  adrp x8,0x7105332000
7101f0e5a4  ldr x0,[x8, #0xf00]
7101f0e5a8  cbz x0,0x7101f0e5e4
7101f0e5ac  mov w8,#0x20
7101f0e5b0  stur wzr,[x29, #-0xb0]
7101f0e5b4  sub x1,x29,#0xb0
7101f0e5b8  stur x8,[x29, #-0xe0]
7101f0e5bc  ldr x8,[x0]
7101f0e5c0  ldr x8,[x8, #0x30]
7101f0e5c4  sub x2,x29,#0xe0
7101f0e5c8  blr x8
7101f0e5cc  tbz w0,#0x0,0x7101f0e5e4
7101f0e5d0  mov w0,#0x10
7101f0e5d4  mov w1,#0x20
7101f0e5d8  bl 0x710392e290
7101f0e5dc  mov x21,x0
7101f0e5e0  cbnz x0,0x7101f0e5e8
7101f0e5e4  mov x21,xzr
7101f0e5e8  stp xzr,xzr,[x21, #0x10]
7101f0e5ec  stp xzr,xzr,[x21]
7101f0e5f0  ldr x8,[sp, #0x58]
7101f0e5f4  ldr x9,[x8]
7101f0e5f8  str x9,[x21]
7101f0e5fc  ldr x8,[x8, #0x8]
7101f0e600  str x8,[x21, #0x8]
7101f0e604  ldr x22,[sp, #0x58]
7101f0e608  ldr x8,[x22, #0x10]
7101f0e60c  str x8,[x21, #0x10]
7101f0e610  ldr x8,[x22, #0x18]
7101f0e614  str x8,[x21, #0x18]
7101f0e618  ldr x8,[x19, #0x40]
7101f0e61c  str x9,[x8]
7101f0e620  ldr x8,[x21, #0x8]
7101f0e624  ldr x9,[x19, #0x40]
7101f0e628  str x8,[x9, #0x8]
7101f0e62c  ldr x8,[x21, #0x10]
7101f0e630  ldr x9,[x19, #0x40]
7101f0e634  str x8,[x9, #0x10]
7101f0e638  ldr x8,[x21, #0x18]
7101f0e63c  ldr x9,[x19, #0x40]
7101f0e640  str x8,[x9, #0x18]
7101f0e644  ldr x0,[x19, #0x40]
7101f0e648  ldr x8,[x0]
7101f0e64c  cbz x8,0x7101f0e660
7101f0e650  ldrb w9,[x8, #0x58]
7101f0e654  and w9,w9,#0xfe
7101f0e658  strb w9,[x8, #0x58]
7101f0e65c  ldr x0,[x19, #0x40]
7101f0e660  mov w1,#0x1
7101f0e664  bl 0x71037790a0
7101f0e668  ldr x8,[x19, #0x40]
7101f0e66c  ldr x8,[x8]
7101f0e670  cbz x8,0x7101f0e68c
7101f0e674  mov w9,#0x44870000
7101f0e678  add w10,w9,#0x690, LSL #12
7101f0e67c  stp w10,w9,[x8, #0x50]
7101f0e680  ldrb w9,[x8, #0x58]
7101f0e684  orr w9,w9,#0x10
7101f0e688  strb w9,[x8, #0x58]
7101f0e68c  adrp x19,0x710523d000
7101f0e690  add x19,x19,#0x9a8
7101f0e694  cbz x21,0x7101f0e6a0
7101f0e698  mov x0,x21
7101f0e69c  bl 0x710392eb40
7101f0e6a0  stp x19,xzr,[sp, #0x50]
7101f0e6a4  cbz x22,0x7101f0e6b0
7101f0e6a8  mov x0,x22
7101f0e6ac  bl 0x710392eb40
7101f0e6b0  ldr x20,[x27, #0x3f0]
7101f0e6b4  ldp x19,x8,[x20, #0x118]
7101f0e6b8  cmp x8,x19
7101f0e6bc  b.eq 0x7101f0e6e0
7101f0e6c0  ldur x0,[x8, #-0x28]
7101f0e6c4  sub x21,x8,#0x30
7101f0e6c8  cbz x0,0x7101f0e6d4
7101f0e6cc  stur x0,[x8, #-0x20]
7101f0e6d0  bl 0x710392eb40
7101f0e6d4  cmp x19,x21
7101f0e6d8  mov x8,x21
7101f0e6dc  b.ne 0x7101f0e6c0
7101f0e6e0  str x19,[x20, #0x120]
7101f0e6e4  ldp x19,x8,[x20, #0x130]
7101f0e6e8  cmp x8,x19
7101f0e6ec  b.eq 0x7101f0e710
7101f0e6f0  ldur x0,[x8, #-0x20]
7101f0e6f4  sub x21,x8,#0x58
7101f0e6f8  cbz x0,0x7101f0e704
7101f0e6fc  stur x0,[x8, #-0x18]
7101f0e700  bl 0x710392eb40
7101f0e704  cmp x19,x21
7101f0e708  mov x8,x21
7101f0e70c  b.ne 0x7101f0e6f0
7101f0e710  add x8,x20,#0x118
7101f0e714  str x8,[sp, #0x38]
7101f0e718  str x19,[x20, #0x138]
7101f0e71c  ldp x19,x8,[x20, #0x148]
7101f0e720  cmp x8,x19
7101f0e724  b.eq 0x7101f0e748
7101f0e728  ldur x0,[x8, #-0x20]
7101f0e72c  sub x21,x8,#0xc8
7101f0e730  cbz x0,0x7101f0e73c
7101f0e734  stur x0,[x8, #-0x18]
7101f0e738  bl 0x710392eb40
7101f0e73c  cmp x19,x21
7101f0e740  mov x8,x21
7101f0e744  b.ne 0x7101f0e728
7101f0e748  str x19,[x20, #0x150]
7101f0e74c  adrp x8,0x710532f000
7101f0e750  ldr x8,[x8, #0x730]
7101f0e754  ldr x19,[x8, #0x8]
7101f0e758  add x0,sp,#0x50
7101f0e75c  bl 0x7103272e60
7101f0e760  ldr x0,[x20, #0x160]
7101f0e764  add x22,x20,#0x160
7101f0e768  cbz x0,0x7101f0e77c
7101f0e76c  str x0,[x20, #0x168]
7101f0e770  bl 0x710392eb40
7101f0e774  stp xzr,xzr,[x22, #0x8]
7101f0e778  str xzr,[x22]
7101f0e77c  ldr x8,[sp, #0x50]
7101f0e780  str x8,[x20, #0x160]
7101f0e784  ldr x8,[sp, #0x58]
7101f0e788  str x8,[x20, #0x168]
7101f0e78c  ldr x8,[sp, #0x60]
7101f0e790  sub x0,x29,#0xe0
7101f0e794  mov x1,x22
7101f0e798  mov w2,wzr
7101f0e79c  str x8,[x20, #0x170]
7101f0e7a0  bl 0x7101d85960
7101f0e7a4  ldr x8,[x19, #0x188]
7101f0e7a8  ldr x0,[x8, #0x8]
7101f0e7ac  mov x1,#0x2008
7101f0e7b0  movk x1,#0xbcbf, LSL #16
7101f0e7b4  movk x1,#0xd, LSL #32
7101f0e7b8  bl 0x710329a390
7101f0e7bc  ldp x8,x9,[x20, #0x160]
7101f0e7c0  mov x22,x0
7101f0e7c4  ldr x0,[sp, #0x38]
7101f0e7c8  sub x8,x9,x8
7101f0e7cc  asr x1,x8,#0x3
7101f0e7d0  bl 0x710184ca10
7101f0e7d4  ldp x23,x25,[x20, #0x160]
7101f0e7d8  cmp x23,x25
7101f0e7dc  b.eq 0x7101f0e950
7101f0e7e0  tst x22,#0xffffffffff
7101f0e7e4  lsr x8,x22,#0x38
7101f0e7e8  add x9,sp,#0x50
7101f0e7ec  cset w10,ne
7101f0e7f0  cmp x8,#0x2d
7101f0e7f4  cset w8,eq
7101f0e7f8  mov x19,#0xff0000000000
7101f0e7fc  mov x26,#0x2d00000000000000
7101f0e800  add x28,x9,#0x8
7101f0e804  and w27,w8,w10
7101f0e808  add x21,x9,#0x20
7101f0e80c  movk x19,#0x2dff, LSL #48
7101f0e810  stp xzr,xzr,[x29, #-0xa8]
7101f0e814  stur xzr,[x29, #-0xb0]
7101f0e818  ldr x8,[x23]
7101f0e81c  and x10,x8,#-0x100000000000000
7101f0e820  and x9,x8,#0xffffffffff
7101f0e824  cmp x10,x26
7101f0e828  ccmp x9,#0x0,#0x4,eq
7101f0e82c  b.ne 0x7101f0e838
7101f0e830  tbnz w27,#0x0,0x7101f0e848
7101f0e834  b 0x7101f0e874
7101f0e838  cbz w27,0x7101f0e848
7101f0e83c  eor x8,x22,x8
7101f0e840  tst x8,#0xffffffffff
7101f0e844  b.eq 0x7101f0e874
7101f0e848  add x0,sp,#0x50
7101f0e84c  mov x1,x23
7101f0e850  mov w2,wzr
7101f0e854  bl 0x7101d85b40
7101f0e858  ldp x24,x8,[sp, #0x50]
7101f0e85c  ldr x9,[sp, #0x60]
7101f0e860  stp x24,x8,[x29, #-0xb0]
7101f0e864  stur x9,[x29, #-0xa0]
7101f0e868  cmp x8,x24
7101f0e86c  b.eq 0x7101f0e934
7101f0e870  b 0x7101f0e894
7101f0e874  ldp x24,x8,[x29, #-0xe0]
7101f0e878  ldur x9,[x29, #-0xd0]
7101f0e87c  stp x24,x8,[x29, #-0xb0]
7101f0e880  stur x9,[x29, #-0xa0]
7101f0e884  stp xzr,xzr,[x29, #-0xd8]
7101f0e888  stur xzr,[x29, #-0xe0]
7101f0e88c  cmp x8,x24
7101f0e890  b.eq 0x7101f0e934
7101f0e894  mov x8,#0xff0000000000
7101f0e898  movk x8,#0xd9ff, LSL #48
7101f0e89c  add x0,sp,#0x50
7101f0e8a0  sub x2,x29,#0xb0
7101f0e8a4  mov x1,x23
7101f0e8a8  str x19,[sp, #0x50]
7101f0e8ac  mov w3,wzr
7101f0e8b0  stur xzr,[x28, #0x15]
7101f0e8b4  str xzr,[x28]
7101f0e8b8  stp xzr,xzr,[x28, #0x8]
7101f0e8bc  str x8,[sp, #0x78]
7101f0e8c0  bl 0x7101d87c30
7101f0e8c4  ldp x8,x9,[x20, #0x120]
7101f0e8c8  cmp x8,x9
7101f0e8cc  b.cs 0x7101f0e918
7101f0e8d0  ldr x9,[sp, #0x50]
7101f0e8d4  stp xzr,xzr,[x8, #0x10]
7101f0e8d8  stp x9,xzr,[x8]
7101f0e8dc  ldr x9,[sp, #0x58]
7101f0e8e0  str x9,[x8, #0x8]
7101f0e8e4  ldr x9,[sp, #0x60]
7101f0e8e8  str x9,[x8, #0x10]
7101f0e8ec  ldr x9,[sp, #0x68]
7101f0e8f0  str x9,[x8, #0x18]
7101f0e8f4  str xzr,[x28]
7101f0e8f8  stp xzr,xzr,[x28, #0x8]
7101f0e8fc  ldp x9,x10,[x21]
7101f0e900  stp x9,x10,[x8, #0x20]
7101f0e904  ldr x8,[x20, #0x120]
7101f0e908  add x8,x8,#0x30
7101f0e90c  str x8,[x20, #0x120]
7101f0e910  cbnz x24,0x7101f0e938
7101f0e914  b 0x7101f0e944
7101f0e918  ldr x0,[sp, #0x38]
7101f0e91c  add x1,sp,#0x50
7101f0e920  bl 0x710184cbd0
7101f0e924  ldr x0,[sp, #0x58]
7101f0e928  cbz x0,0x7101f0e934
7101f0e92c  str x0,[sp, #0x60]
7101f0e930  bl 0x710392eb40
7101f0e934  cbz x24,0x7101f0e944
7101f0e938  mov x0,x24
7101f0e93c  stur x24,[x29, #-0xa8]
7101f0e940  bl 0x710392eb40
7101f0e944  add x23,x23,#0x8
7101f0e948  cmp x25,x23
7101f0e94c  b.ne 0x7101f0e810
7101f0e950  ldur x0,[x29, #-0xe0]
7101f0e954  cbz x0,0x7101f0e960
7101f0e958  stur x0,[x29, #-0xd8]
7101f0e95c  bl 0x710392eb40
7101f0e960  mov w1,#0x88
7101f0e964  mov w0,#0x10
7101f0e968  bl 0x710392e290
7101f0e96c  ldr x19,[sp, #0x30]
7101f0e970  mov x22,x0
7101f0e974  cbnz x0,0x7101f0e9c0
7101f0e978  adrp x8,0x7105332000
7101f0e97c  ldr x0,[x8, #0xf00]
7101f0e980  cbz x0,0x7101f0e9bc
7101f0e984  mov w8,#0x88
7101f0e988  stur wzr,[x29, #-0xe0]
7101f0e98c  sub x1,x29,#0xe0
7101f0e990  str x8,[sp, #0x50]
7101f0e994  ldr x8,[x0]
7101f0e998  ldr x8,[x8, #0x30]
7101f0e99c  add x2,sp,#0x50
7101f0e9a0  blr x8
7101f0e9a4  tbz w0,#0x0,0x7101f0e9bc
7101f0e9a8  mov w1,#0x88
7101f0e9ac  mov w0,#0x10
7101f0e9b0  bl 0x710392e290
7101f0e9b4  mov x22,x0
7101f0e9b8  cbnz x0,0x7101f0e9c0
7101f0e9bc  mov x22,xzr
7101f0e9c0  ldr w3,[x20, #0x110]
7101f0e9c4  ldr x2,[sp, #0x38]
7101f0e9c8  mov x0,x22
7101f0e9cc  mov x1,x19
7101f0e9d0  bl 0x7101d74980
7101f0e9d4  adrp x24,0x7105333000
7101f0e9d8  add x24,x24,#0x600
7101f0e9dc  str x24,[x22, #0x10]
7101f0e9e0  ldr w8,[x24, #0x60]
7101f0e9e4  str w8,[x22, #0x68]
7101f0e9e8  ldr w8,[x24, #0x64]
7101f0e9ec  str w8,[x22, #0x6c]
7101f0e9f0  adrp x23,0x7105333000
7101f0e9f4  add x23,x23,#0x650
7101f0e9f8  mov w8,#0x1
7101f0e9fc  ldaxrb w9,[x23]
7101f0ea00  stxrb w10,w8,[x23]
7101f0ea04  and w9,w9,#0x1
7101f0ea08  cmp w10,#0x0
7101f0ea0c  ccmp w9,#0x0,#0x0,eq
7101f0ea10  b.ne 0x7101f0e9fc
7101f0ea14  adrp x25,0x7105333000
7101f0ea18  add x25,x25,#0x648
7101f0ea1c  ldr x8,[x25]
7101f0ea20  mov x9,x25
7101f0ea24  str x8,[x22, #0x48]
7101f0ea28  mov x0,x22
7101f0ea2c  str x22,[x9], #0x8
7101f0ea30  stlrb wzr,[x9]
7101f0ea34  bl 0x71032caea0
7101f0ea38  ldr x0,[x20, #0xf8]
7101f0ea3c  ldr x19,[sp, #0x40]
7101f0ea40  str x22,[x20, #0xf8]
7101f0ea44  cbz x0,0x7101f0ea4c
7101f0ea48  bl 0x71032cad20
7101f0ea4c  mov w1,#0x88
7101f0ea50  mov w0,#0x10
7101f0ea54  bl 0x710392e290
7101f0ea58  mov x22,x0
7101f0ea5c  cbnz x0,0x7101f0eaa8
7101f0ea60  adrp x8,0x7105332000
7101f0ea64  ldr x0,[x8, #0xf00]
7101f0ea68  cbz x0,0x7101f0eaa4
7101f0ea6c  mov w8,#0x88
7101f0ea70  stur wzr,[x29, #-0xe0]
7101f0ea74  sub x1,x29,#0xe0
7101f0ea78  str x8,[sp, #0x50]
7101f0ea7c  ldr x8,[x0]
7101f0ea80  ldr x8,[x8, #0x30]
7101f0ea84  add x2,sp,#0x50
7101f0ea88  blr x8
7101f0ea8c  tbz w0,#0x0,0x7101f0eaa4
7101f0ea90  mov w1,#0x88
7101f0ea94  mov w0,#0x10
7101f0ea98  bl 0x710392e290
7101f0ea9c  mov x22,x0
7101f0eaa0  cbnz x0,0x7101f0eaa8
7101f0eaa4  mov x22,xzr
7101f0eaa8  ldr w3,[x20, #0x110]
7101f0eaac  ldp x1,x2,[sp, #0x30]
7101f0eab0  mov x0,x22
7101f0eab4  bl 0x7101d7f040
7101f0eab8  str x24,[x22, #0x10]
7101f0eabc  ldr w8,[x24, #0x60]
7101f0eac0  str w8,[x22, #0x68]
7101f0eac4  ldr w8,[x24, #0x64]
7101f0eac8  str w8,[x22, #0x6c]
7101f0eacc  mov w8,#0x1
7101f0ead0  ldaxrb w9,[x23]
7101f0ead4  stxrb w10,w8,[x23]
7101f0ead8  and w9,w9,#0x1
7101f0eadc  cmp w10,#0x0
7101f0eae0  ccmp w9,#0x0,#0x0,eq
7101f0eae4  b.ne 0x7101f0ead0
7101f0eae8  ldr x8,[x25]
7101f0eaec  mov x9,x25
7101f0eaf0  str x8,[x22, #0x48]
7101f0eaf4  str x22,[x9], #0x8
7101f0eaf8  mov x0,x22
7101f0eafc  stlrb wzr,[x9]
7101f0eb00  bl 0x71032caea0
7101f0eb04  ldr x0,[x20, #0x100]
7101f0eb08  str x22,[x20, #0x100]
7101f0eb0c  cbz x0,0x7101f0eb14
7101f0eb10  bl 0x71032cad20
7101f0eb14  mov w1,#0x88
7101f0eb18  mov w0,#0x10
7101f0eb1c  bl 0x710392e290
7101f0eb20  mov x22,x0
7101f0eb24  cbnz x0,0x7101f0eb70
7101f0eb28  adrp x8,0x7105332000
7101f0eb2c  ldr x0,[x8, #0xf00]
7101f0eb30  cbz x0,0x7101f0eb6c
7101f0eb34  mov w8,#0x88
7101f0eb38  stur wzr,[x29, #-0xe0]
7101f0eb3c  sub x1,x29,#0xe0
7101f0eb40  str x8,[sp, #0x50]
7101f0eb44  ldr x8,[x0]
7101f0eb48  ldr x8,[x8, #0x30]
7101f0eb4c  add x2,sp,#0x50
7101f0eb50  blr x8
7101f0eb54  tbz w0,#0x0,0x7101f0eb6c
7101f0eb58  mov w1,#0x88
7101f0eb5c  mov w0,#0x10
7101f0eb60  bl 0x710392e290
7101f0eb64  mov x22,x0
7101f0eb68  cbnz x0,0x7101f0eb70
7101f0eb6c  mov x22,xzr
7101f0eb70  ldp x1,x2,[sp, #0x30]
7101f0eb74  mov x0,x22
7101f0eb78  bl 0x7101d83a00
7101f0eb7c  str x24,[x22, #0x10]
7101f0eb80  ldr w8,[x24, #0x60]
7101f0eb84  str w8,[x22, #0x68]
7101f0eb88  ldr w8,[x24, #0x64]
7101f0eb8c  str w8,[x22, #0x6c]
7101f0eb90  mov w8,#0x1
7101f0eb94  ldaxrb w9,[x23]
7101f0eb98  stxrb w10,w8,[x23]
7101f0eb9c  and w9,w9,#0x1
7101f0eba0  cmp w10,#0x0
7101f0eba4  ccmp w9,#0x0,#0x0,eq
7101f0eba8  b.ne 0x7101f0eb94
7101f0ebac  ldr x8,[x25]
7101f0ebb0  str x8,[x22, #0x48]
7101f0ebb4  mov x0,x22
7101f0ebb8  str x22,[x25], #0x8
7101f0ebbc  stlrb wzr,[x25]
7101f0ebc0  bl 0x71032caea0
7101f0ebc4  ldr x0,[x20, #0x108]
7101f0ebc8  str x22,[x20, #0x108]
7101f0ebcc  cbz x0,0x7101f0ebd4
7101f0ebd0  bl 0x71032cad20
7101f0ebd4  adrp x8,0x7105314000
7101f0ebd8  add x8,x8,#0x4d8
7101f0ebdc  ldarb w8,[x8]
7101f0ebe0  tbz w8,#0x0,0x7101f0eed0
7101f0ebe4  mov x9,#0xff0000000000
7101f0ebe8  adrp x8,0x7105308000
7101f0ebec  mov x0,x19
7101f0ebf0  movk x9,#0xd9ff, LSL #48
7101f0ebf4  str x9,[x8, #0x338]
7101f0ebf8  ldr x8,[x19, #0x360]
7101f0ebfc  ldr x8,[x8]
7101f0ec00  ldr x8,[x8]
7101f0ec04  ldr x8,[x8]
7101f0ec08  add x1,x8,#0x5f8
7101f0ec0c  bl 0x7101f0f160
7101f0ec10  ldr x8,[x19, #0x360]
7101f0ec14  ldr x8,[x8]
7101f0ec18  ldr x8,[x8]
7101f0ec1c  ldr x8,[x8]
7101f0ec20  ldr x9,[x8, #0x610]
7101f0ec24  ldr x1,[x8, #0x608]
7101f0ec28  cmp x9,x1
7101f0ec2c  b.eq 0x7101f0ef28
7101f0ec30  mov x0,x19
7101f0ec34  bl 0x7101f0f160
7101f0ec38  ldr x8,[x19, #0x360]
7101f0ec3c  ldr x8,[x8]
7101f0ec40  ldr x8,[x8]
7101f0ec44  ldr x8,[x8]
7101f0ec48  ldr x10,[x8, #0x610]
7101f0ec4c  ldr x9,[x8, #0x608]
7101f0ec50  sub x10,x10,x9
7101f0ec54  asr x10,x10,#0x4
7101f0ec58  cmp x10,#0x1
7101f0ec5c  b.ls 0x7101f0ef28
7101f0ec60  add x1,x9,#0x10
7101f0ec64  mov x0,x19
7101f0ec68  bl 0x7101f0f160
7101f0ec6c  ldr x8,[x19, #0x3c0]
7101f0ec70  ldr x8,[x8]
7101f0ec74  ldr x8,[x8]
7101f0ec78  ldr x8,[x8]
7101f0ec7c  add x1,x8,#0x5f8
7101f0ec80  mov x0,x19
7101f0ec84  bl 0x7101f0f160
7101f0ec88  adrp x8,0x7101f0f000
7101f0ec8c  add x8,x8,#0x2c0
7101f0ec90  adrp x9,0x7101f10000
7101f0ec94  add x9,x9,#0x6b0
7101f0ec98  stp x8,xzr,[x19, #0x28]
7101f0ec9c  adrp x8,0x7101f0f000
7101f0eca0  add x8,x8,#0x430
7101f0eca4  str xzr,[x19, #0x210]
7101f0eca8  stp x8,xzr,[x19, #0x38]
7101f0ecac  adrp x8,0x7101f10000
7101f0ecb0  add x8,x8,#0x310
7101f0ecb4  stp x8,xzr,[x19, #0x48]
7101f0ecb8  adrp x8,0x7101f10000
7101f0ecbc  add x8,x8,#0x710
7101f0ecc0  str xzr,[x19, #0x220]
7101f0ecc4  str xzr,[x19, #0x230]
7101f0ecc8  str xzr,[x19, #0x240]
7101f0eccc  str xzr,[x19, #0x250]
7101f0ecd0  stp x8,xzr,[x19, #0x68]
7101f0ecd4  adrp x8,0x7101f12000
7101f0ecd8  add x8,x8,#0x6c0
7101f0ecdc  stp x8,xzr,[x19, #0x78]
7101f0ece0  adrp x8,0x7101f13000
7101f0ece4  add x8,x8,#0x90
7101f0ece8  stp x8,xzr,[x19, #0x98]
7101f0ecec  adrp x8,0x7101f13000
7101f0ecf0  add x8,x8,#0xa20
7101f0ecf4  stp x8,xzr,[x19, #0xa8]
7101f0ecf8  adrp x8,0x7101f14000
7101f0ecfc  add x8,x8,#0x1d0
7101f0ed00  stp x8,xzr,[x19, #0xc8]
7101f0ed04  adrp x8,0x7101f14000
7101f0ed08  add x8,x8,#0x5d0
7101f0ed0c  stp x8,xzr,[x19, #0xd8]
7101f0ed10  adrp x8,0x7101f14000
7101f0ed14  add x8,x8,#0xd10
7101f0ed18  stp x8,xzr,[x19, #0xf8]
7101f0ed1c  adrp x8,0x7101f15000
7101f0ed20  add x8,x8,#0x2f0
7101f0ed24  stp x8,xzr,[x19, #0x108]
7101f0ed28  adrp x8,0x7101f15000
7101f0ed2c  add x8,x8,#0xa70
7101f0ed30  stp x8,xzr,[x19, #0x128]
7101f0ed34  adrp x8,0x7101f15000
7101f0ed38  add x8,x8,#0xef0
7101f0ed3c  stp x8,xzr,[x19, #0x138]
7101f0ed40  adrp x8,0x7101f16000
7101f0ed44  add x8,x8,#0x250
7101f0ed48  stp x8,xzr,[x19, #0x158]
7101f0ed4c  adrp x8,0x7101f16000
7101f0ed50  add x8,x8,#0x340
7101f0ed54  stp x8,xzr,[x19, #0x168]
7101f0ed58  adrp x8,0x7101f16000
7101f0ed5c  add x8,x8,#0xb30
7101f0ed60  stp x8,xzr,[x19, #0x188]
7101f0ed64  adrp x8,0x7101f16000
7101f0ed68  add x8,x8,#0xd40
7101f0ed6c  stp x8,xzr,[x19, #0x198]
7101f0ed70  adrp x8,0x7101f17000
7101f0ed74  add x8,x8,#0x530
7101f0ed78  stp x8,xzr,[x19, #0x1b8]
7101f0ed7c  adrp x8,0x7101f17000
7101f0ed80  add x8,x8,#0x8f0
7101f0ed84  stp x8,xzr,[x19, #0x1c8]
7101f0ed88  adrp x8,0x7101f17000
7101f0ed8c  add x8,x8,#0xc10
7101f0ed90  stp x8,xzr,[x19, #0x1e8]
7101f0ed94  adrp x8,0x7101f17000
7101f0ed98  add x8,x8,#0xe80
7101f0ed9c  stp x9,xzr,[x19, #0x58]
7101f0eda0  adrp x9,0x7101f12000
7101f0eda4  add x9,x9,#0xcc0
7101f0eda8  stp x8,xzr,[x19, #0x1f8]
7101f0edac  adrp x8,0x7101f18000
7101f0edb0  add x8,x8,#0xc10
7101f0edb4  str x8,[x19, #0x218]
7101f0edb8  adrp x8,0x7101f18000
7101f0edbc  add x8,x8,#0xfd0
7101f0edc0  str x8,[x19, #0x228]
7101f0edc4  adrp x8,0x7101f19000
7101f0edc8  add x8,x8,#0xd0
7101f0edcc  str x8,[x19, #0x238]
7101f0edd0  adrp x8,0x7101f19000
7101f0edd4  add x8,x8,#0x1e0
7101f0edd8  str x8,[x19, #0x248]
7101f0eddc  ldrsw x8,[x19, #0x2a4]
7101f0ede0  cmp w8,#0x13
7101f0ede4  stp x9,xzr,[x19, #0x88]
7101f0ede8  adrp x9,0x7101f13000
7101f0edec  add x9,x9,#0xd80
7101f0edf0  stp x9,xzr,[x19, #0xb8]
7101f0edf4  adrp x9,0x7101f14000
7101f0edf8  add x9,x9,#0x6e0
7101f0edfc  stp x9,xzr,[x19, #0xe8]
7101f0ee00  adrp x9,0x7101f15000
7101f0ee04  add x9,x9,#0x6e0
7101f0ee08  stp x9,xzr,[x19, #0x118]
7101f0ee0c  adrp x9,0x7101f15000
7101f0ee10  add x9,x9,#0xff0
7101f0ee14  stp x9,xzr,[x19, #0x148]
7101f0ee18  adrp x9,0x7101f16000
7101f0ee1c  add x9,x9,#0x410
7101f0ee20  stp x9,xzr,[x19, #0x178]
7101f0ee24  adrp x9,0x7101f16000
7101f0ee28  add x9,x9,#0xf70
7101f0ee2c  stp x9,xzr,[x19, #0x1a8]
7101f0ee30  adrp x9,0x7101f17000
7101f0ee34  add x9,x9,#0xbb0
7101f0ee38  stp x9,xzr,[x19, #0x1d8]
7101f0ee3c  adrp x9,0x7101f17000
7101f0ee40  add x9,x9,#0xf10
7101f0ee44  str x9,[x19, #0x208]
7101f0ee48  b.cs 0x7101f0ef1c
7101f0ee4c  add x8,x19,x8, LSL #0x2
7101f0ee50  str wzr,[x8, #0x258]
7101f0ee54  add sp,sp,#0x1d0
7101f0ee58  ldp d9,d8,[sp, #0x30]
7101f0ee5c  ldp d11,d10,[sp, #0x20]
7101f0ee60  ldp d13,d12,[sp, #0x10]
7101f0ee64  ldp x29,x30,[sp, #0x90]
7101f0ee68  ldp x20,x19,[sp, #0x80]
7101f0ee6c  ldp x22,x21,[sp, #0x70]
7101f0ee70  ldp x24,x23,[sp, #0x60]
7101f0ee74  ldp x26,x25,[sp, #0x50]
7101f0ee78  ldp x28,x27,[sp, #0x40]
7101f0ee7c  ldp d15,d14,[sp], #0xa0
7101f0ee80  ret
7101f0ee84  adrp x0,0x710532f000
7101f0ee88  add x0,x0,#0x4d0
7101f0ee8c  bl 0x71039c06b0
7101f0ee90  cbz w0,0x7101f0b600
7101f0ee94  adrp x1,0x710532f000
7101f0ee98  add x1,x1,#0x4a0
7101f0ee9c  orr w8,wzr,#0xffffff
7101f0eea0  adrp x0,0x710353d000
7101f0eea4  add x0,x0,#0xb50
7101f0eea8  str w8,[x1]
7101f0eeac  adrp x2,0x7104f17000
7101f0eeb0  add x2,x2,#0x0
7101f0eeb4  bl 0x71000001c0
7101f0eeb8  adrp x0,0x710532f000
7101f0eebc  add x0,x0,#0x4d0
7101f0eec0  bl 0x71039c06c0
7101f0eec4  ldr x10,[x19, #0x10]!
7101f0eec8  cbnz x10,0x7101f0b608
7101f0eecc  b 0x7101f0b64c
7101f0eed0  adrp x0,0x7105314000
7101f0eed4  add x0,x0,#0x4d8
7101f0eed8  bl 0x71039c06b0
7101f0eedc  cbz w0,0x7101f0ebe4
7101f0eee0  bl 0x7101764000
7101f0eee4  adrp x0,0x7101763000
7101f0eee8  add x0,x0,#0xc40
7101f0eeec  adrp x1,0x71052c5000
7101f0eef0  add x1,x1,#0x180
7101f0eef4  adrp x2,0x7104f17000
7101f0eef8  add x2,x2,#0x0
7101f0eefc  bl 0x71000001c0
7101f0ef00  adrp x0,0x7105314000
7101f0ef04  add x0,x0,#0x4d8
7101f0ef08  bl 0x71039c06c0
7101f0ef0c  b 0x7101f0ebe4
7101f0ef10  adrp x0,0x7105326000
7101f0ef14  add x0,x0,#0x3c0
7101f0ef18  bl 0x71039c1330
7101f0ef1c  bl 0x71039c2650
7101f0ef20  ldr x0,[sp, #0x38]
7101f0ef24  bl 0x71039c0c00
7101f0ef28  add x0,x8,#0x608
7101f0ef2c  bl 0x71039c1330
