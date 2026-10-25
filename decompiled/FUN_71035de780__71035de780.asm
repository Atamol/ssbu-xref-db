// addr:      71035de780
// offset:    0x35de780
// name:      FUN_71035de780
// mangled:   
// size:      5004

71035de780  sub sp,sp,#0x140
71035de784  stp x28,x27,[sp, #0xe0]
71035de788  stp x26,x25,[sp, #0xf0]
71035de78c  stp x24,x23,[sp, #0x100]
71035de790  stp x22,x21,[sp, #0x110]
71035de794  stp x20,x19,[sp, #0x120]
71035de798  stp x29,x30,[sp, #0x130]
71035de79c  add x29,sp,#0x130
71035de7a0  str wzr,[x0, #0x98]
71035de7a4  ldp x8,x9,[x1]
71035de7a8  ldr x10,[x0, #0x488]
71035de7ac  cmp x9,x8
71035de7b0  str x1,[sp, #0x28]
71035de7b4  b.eq 0x71035dfab8
71035de7b8  add x9,sp,#0x80
71035de7bc  add x11,x10,#0x10
71035de7c0  orr x9,x9,#0x1
71035de7c4  stp x10,x0,[sp, #0x30]
71035de7c8  mov x20,xzr
71035de7cc  stp x9,x11,[sp, #0x40]
71035de7d0  add x9,x10,#0x38
71035de7d4  str x9,[sp, #0x18]
71035de7d8  add x9,x10,#0x50
71035de7dc  adrp x24,0x7105232000
71035de7e0  add x24,x24,#0x4e8
71035de7e4  str x9,[sp, #0x10]
71035de7e8  add x9,x10,#0x68
71035de7ec  str x9,[sp, #0x58]
71035de7f0  add x9,x10,#0x78
71035de7f4  str x9,[sp, #0x8]
71035de7f8  add x9,sp,#0x98
71035de7fc  orr x19,x9,#0x1
71035de800  add x9,sp,#0x68
71035de804  orr x9,x9,#0x1
71035de808  str x9,[sp]
71035de80c  sub x9,x29,#0x80
71035de810  orr x9,x9,#0x1
71035de814  str x9,[sp, #0x60]
71035de818  add x9,x10,#0x20
71035de81c  str x9,[sp, #0x20]
71035de820  add x8,x8,x20, LSL #0x5
71035de824  ldr x8,[x8, #0x8]
71035de828  ldrb w9,[x8, #0x10]
71035de82c  ldr x10,[x8, #0x20]
71035de830  add x8,x8,#0x11
71035de834  str xzr,[sp, #0x80]
71035de838  stp xzr,xzr,[sp, #0x88]
71035de83c  tst w9,#0x1
71035de840  csel x28,x8,x10,eq
71035de844  mov x0,x28
71035de848  bl 0x71039c0070
71035de84c  cmn x0,#0x10
71035de850  b.cs 0x71035dfae8
71035de854  mov x21,x0
71035de858  cmp x0,#0x17
71035de85c  b.cs 0x71035de874
71035de860  ldr x26,[sp, #0x40]
71035de864  lsl w8,w21,#0x1
71035de868  strb w8,[sp, #0x80]
71035de86c  cbnz x21,0x71035de8f4
71035de870  b 0x71035de904
71035de874  add x8,x21,#0x10
71035de878  and x23,x8,#-0x10
71035de87c  add x0,sp,#0x98
71035de880  mov w1,#0x10
71035de884  mov x2,x23
71035de888  bl 0x710392e1f0
71035de88c  cmp w0,#0xc
71035de890  b.ne 0x71035de8c8
71035de894  adrp x8,0x710593d000
71035de898  ldr x0,[x8, #0x2b0]
71035de89c  cbz x0,0x71035de8c8
71035de8a0  stur x23,[x29, #-0x80]
71035de8a4  ldr x8,[x0]
71035de8a8  ldr x8,[x8, #0x30]
71035de8ac  sub x1,x29,#0x80
71035de8b0  blr x8
71035de8b4  tbz w0,#0x0,0x71035de8c8
71035de8b8  add x0,sp,#0x98
71035de8bc  mov w1,#0x10
71035de8c0  mov x2,x23
71035de8c4  bl 0x710392e1f0
71035de8c8  adrp x8,0x71052a8000
71035de8cc  ldr x8,[x8, #0xa78]
71035de8d0  cbz x8,0x71035de8e4
71035de8d4  ldr x2,[sp, #0x98]
71035de8d8  mov w1,#0x10
71035de8dc  mov x0,x23
71035de8e0  bl 0x71039c19e0
71035de8e4  ldr x26,[sp, #0x98]
71035de8e8  orr x8,x23,#0x1
71035de8ec  str x8,[sp, #0x80]
71035de8f0  stp x21,x26,[sp, #0x88]
71035de8f4  mov x0,x26
71035de8f8  mov x1,x28
71035de8fc  mov x2,x21
71035de900  bl 0x71039c00e0
71035de904  strb wzr,[x26, x21, LSL ]
71035de908  ldrb w8,[sp, #0x80]
71035de90c  stp xzr,xzr,[sp, #0x70]
71035de910  str xzr,[sp, #0x68]
71035de914  tbnz w8,#0x0,0x71035de92c
71035de918  ldp x9,x8,[sp, #0x88]
71035de91c  stp x9,x8,[sp, #0x70]
71035de920  ldr x8,[sp, #0x80]
71035de924  str x8,[sp, #0x68]
71035de928  b 0x71035de9ec
71035de92c  ldr x21,[sp, #0x88]
71035de930  cmn x21,#0x10
71035de934  b.cs 0x71035dfaf0
71035de938  ldr x23,[sp, #0x90]
71035de93c  cmp x21,#0x17
71035de940  b.cs 0x71035de958
71035de944  ldr x26,[sp]
71035de948  lsl w8,w21,#0x1
71035de94c  strb w8,[sp, #0x68]
71035de950  cbnz x21,0x71035de9d8
71035de954  b 0x71035de9e8
71035de958  add x8,x21,#0x10
71035de95c  and x28,x8,#-0x10
71035de960  add x0,sp,#0x98
71035de964  mov w1,#0x10
71035de968  mov x2,x28
71035de96c  bl 0x710392e1f0
71035de970  cmp w0,#0xc
71035de974  b.ne 0x71035de9ac
71035de978  adrp x8,0x710593d000
71035de97c  ldr x0,[x8, #0x2b0]
71035de980  cbz x0,0x71035de9ac
71035de984  stur x28,[x29, #-0x80]
71035de988  ldr x8,[x0]
71035de98c  ldr x8,[x8, #0x30]
71035de990  sub x1,x29,#0x80
71035de994  blr x8
71035de998  tbz w0,#0x0,0x71035de9ac
71035de99c  add x0,sp,#0x98
71035de9a0  mov w1,#0x10
71035de9a4  mov x2,x28
71035de9a8  bl 0x710392e1f0
71035de9ac  adrp x8,0x71052a8000
71035de9b0  ldr x8,[x8, #0xa78]
71035de9b4  cbz x8,0x71035de9c8
71035de9b8  ldr x2,[sp, #0x98]
71035de9bc  mov w1,#0x10
71035de9c0  mov x0,x28
71035de9c4  bl 0x71039c19e0
71035de9c8  ldr x26,[sp, #0x98]
71035de9cc  orr x8,x28,#0x1
71035de9d0  str x8,[sp, #0x68]
71035de9d4  stp x21,x26,[sp, #0x70]
71035de9d8  mov x0,x26
71035de9dc  mov x1,x23
71035de9e0  mov x2,x21
71035de9e4  bl 0x71039c00e0
71035de9e8  strb wzr,[x26, x21, LSL ]
71035de9ec  ldrb w8,[sp, #0x68]
71035de9f0  stp xzr,xzr,[sp, #0xa0]
71035de9f4  str xzr,[sp, #0x98]
71035de9f8  str x20,[sp, #0x50]
71035de9fc  tbnz w8,#0x0,0x71035dea14
71035dea00  ldp x9,x8,[sp, #0x70]
71035dea04  stp x9,x8,[sp, #0xa0]
71035dea08  ldr x8,[sp, #0x68]
71035dea0c  str x8,[sp, #0x98]
71035dea10  b 0x71035dead4
71035dea14  ldr x21,[sp, #0x70]
71035dea18  cmn x21,#0x10
71035dea1c  b.cs 0x71035dfae0
71035dea20  ldr x23,[sp, #0x78]
71035dea24  cmp x21,#0x17
71035dea28  b.cs 0x71035dea40
71035dea2c  lsl w8,w21,#0x1
71035dea30  mov x26,x19
71035dea34  strb w8,[sp, #0x98]
71035dea38  cbnz x21,0x71035deac0
71035dea3c  b 0x71035dead0
71035dea40  add x8,x21,#0x10
71035dea44  and x28,x8,#-0x10
71035dea48  sub x0,x29,#0x60
71035dea4c  mov w1,#0x10
71035dea50  mov x2,x28
71035dea54  bl 0x710392e1f0
71035dea58  cmp w0,#0xc
71035dea5c  b.ne 0x71035dea94
71035dea60  adrp x8,0x710593d000
71035dea64  ldr x0,[x8, #0x2b0]
71035dea68  cbz x0,0x71035dea94
71035dea6c  stur x28,[x29, #-0x80]
71035dea70  ldr x8,[x0]
71035dea74  ldr x8,[x8, #0x30]
71035dea78  sub x1,x29,#0x80
71035dea7c  blr x8
71035dea80  tbz w0,#0x0,0x71035dea94
71035dea84  sub x0,x29,#0x60
71035dea88  mov w1,#0x10
71035dea8c  mov x2,x28
71035dea90  bl 0x710392e1f0
71035dea94  adrp x8,0x71052a8000
71035dea98  ldr x8,[x8, #0xa78]
71035dea9c  cbz x8,0x71035deab0
71035deaa0  ldur x2,[x29, #-0x60]
71035deaa4  mov w1,#0x10
71035deaa8  mov x0,x28
71035deaac  bl 0x71039c19e0
71035deab0  ldur x26,[x29, #-0x60]
71035deab4  orr x8,x28,#0x1
71035deab8  str x8,[sp, #0x98]
71035deabc  stp x21,x26,[sp, #0xa0]
71035deac0  mov x0,x26
71035deac4  mov x1,x23
71035deac8  mov x2,x21
71035deacc  bl 0x71039c00e0
71035dead0  strb wzr,[x26, x21, LSL ]
71035dead4  ldrb w8,[sp, #0x98]
71035dead8  ldr x9,[sp, #0xa8]
71035deadc  tst w8,#0x1
71035deae0  lsr x8,x8,#0x1
71035deae4  csel x28,x19,x9,eq
71035deae8  ldr x9,[sp, #0xa0]
71035deaec  csel x20,x8,x9,eq
71035deaf0  subs x22,x20,#0x5
71035deaf4  b.lt 0x71035dec80
71035deaf8  add x23,x28,x20
71035deafc  mov x8,x20
71035deb00  mov x0,x28
71035deb04  subs x2,x8,#0x4
71035deb08  b.eq 0x71035dec80
71035deb0c  mov w1,#0x53
71035deb10  bl 0x71039c0280
71035deb14  cbz x0,0x71035dec80
71035deb18  adrp x1,0x7104453000
71035deb1c  add x1,x1,#0x1f9
71035deb20  mov w2,#0x5
71035deb24  mov x21,x0
71035deb28  bl 0x71039c0250
71035deb2c  cbz w0,0x71035deb44
71035deb30  add x0,x21,#0x1
71035deb34  sub x8,x23,x0
71035deb38  cmp x8,#0x5
71035deb3c  b.ge 0x71035deb04
71035deb40  b 0x71035dec80
71035deb44  sub x8,x21,x28
71035deb48  cmn x8,#0x1
71035deb4c  b.eq 0x71035dec80
71035deb50  cmp x21,x23
71035deb54  b.eq 0x71035dec80
71035deb58  cmp x8,x22
71035deb5c  b.ne 0x71035dec80
71035deb60  cmp x20,x8
71035deb64  csel x21,x20,x8,cc
71035deb68  stur xzr,[x29, #-0x80]
71035deb6c  stp xzr,xzr,[x29, #-0x78]
71035deb70  cmn x21,#0x10
71035deb74  b.cs 0x71035dfad8
71035deb78  cmp x21,#0x17
71035deb7c  b.cs 0x71035deb94
71035deb80  ldr x26,[sp, #0x60]
71035deb84  lsl w8,w21,#0x1
71035deb88  sturb w8,[x29, #-0x80]
71035deb8c  cbnz x21,0x71035dec14
71035deb90  b 0x71035dec24
71035deb94  add x8,x21,#0x10
71035deb98  and x23,x8,#-0x10
71035deb9c  sub x0,x29,#0x68
71035deba0  mov w1,#0x10
71035deba4  mov x2,x23
71035deba8  bl 0x710392e1f0
71035debac  cmp w0,#0xc
71035debb0  b.ne 0x71035debe8
71035debb4  adrp x8,0x710593d000
71035debb8  ldr x0,[x8, #0x2b0]
71035debbc  cbz x0,0x71035debe8
71035debc0  stur x23,[x29, #-0x60]
71035debc4  ldr x8,[x0]
71035debc8  ldr x8,[x8, #0x30]
71035debcc  sub x1,x29,#0x60
71035debd0  blr x8
71035debd4  tbz w0,#0x0,0x71035debe8
71035debd8  sub x0,x29,#0x68
71035debdc  mov w1,#0x10
71035debe0  mov x2,x23
71035debe4  bl 0x710392e1f0
71035debe8  adrp x8,0x71052a8000
71035debec  ldr x8,[x8, #0xa78]
71035debf0  cbz x8,0x71035dec04
71035debf4  ldur x2,[x29, #-0x68]
71035debf8  mov w1,#0x10
71035debfc  mov x0,x23
71035dec00  bl 0x71039c19e0
71035dec04  ldur x26,[x29, #-0x68]
71035dec08  orr x8,x23,#0x1
71035dec0c  stur x8,[x29, #-0x80]
71035dec10  stp x21,x26,[x29, #-0x78]
71035dec14  mov x0,x26
71035dec18  mov x1,x28
71035dec1c  mov x2,x21
71035dec20  bl 0x71039c00e0
71035dec24  strb wzr,[x26, x21, LSL ]
71035dec28  ldrb w8,[sp, #0x98]
71035dec2c  tbnz w8,#0x0,0x71035dec38
71035dec30  strh wzr,[sp, #0x98]
71035dec34  b 0x71035dec70
71035dec38  ldr x8,[sp, #0xa8]
71035dec3c  strb wzr,[x8]
71035dec40  ldrb w8,[sp, #0x98]
71035dec44  str xzr,[sp, #0xa0]
71035dec48  tbz w8,#0x0,0x71035dec70
71035dec4c  adrp x8,0x71052a8000
71035dec50  ldr x21,[sp, #0xa8]
71035dec54  ldr x8,[x8, #0xa70]
71035dec58  cbz x8,0x71035dec64
71035dec5c  mov x0,x21
71035dec60  bl 0x71039c19b0
71035dec64  mov x0,x21
71035dec68  bl 0x710392eb40
71035dec6c  str xzr,[sp, #0x98]
71035dec70  ldp x9,x8,[x29, #-0x78]
71035dec74  stp x9,x8,[sp, #0xa0]
71035dec78  ldur x8,[x29, #-0x80]
71035dec7c  str x8,[sp, #0x98]
71035dec80  ldrb w8,[sp, #0x68]
71035dec84  tbnz w8,#0x0,0x71035dec90
71035dec88  strh wzr,[sp, #0x68]
71035dec8c  b 0x71035decc8
71035dec90  ldr x8,[sp, #0x78]
71035dec94  strb wzr,[x8]
71035dec98  ldrb w8,[sp, #0x68]
71035dec9c  str xzr,[sp, #0x70]
71035deca0  tbz w8,#0x0,0x71035decc8
71035deca4  adrp x8,0x71052a8000
71035deca8  ldr x21,[sp, #0x78]
71035decac  ldr x8,[x8, #0xa70]
71035decb0  cbz x8,0x71035decbc
71035decb4  mov x0,x21
71035decb8  bl 0x71039c19b0
71035decbc  mov x0,x21
71035decc0  bl 0x710392eb40
71035decc4  str xzr,[sp, #0x68]
71035decc8  ldr x8,[sp, #0xa8]
71035deccc  str x8,[sp, #0x78]
71035decd0  ldr x8,[sp, #0xa0]
71035decd4  stp xzr,xzr,[sp, #0xa0]
71035decd8  str x8,[sp, #0x70]
71035decdc  ldr x8,[sp, #0x98]
71035dece0  str xzr,[sp, #0x98]
71035dece4  str x8,[sp, #0x68]
71035dece8  and x8,x8,#0xff
71035decec  tbnz w8,#0x0,0x71035ded04
71035decf0  ldp x9,x8,[sp, #0x70]
71035decf4  stp x9,x8,[sp, #0xa0]
71035decf8  ldr x8,[sp, #0x68]
71035decfc  str x8,[sp, #0x98]
71035ded00  b 0x71035dedc4
71035ded04  ldr x21,[sp, #0x70]
71035ded08  cmn x21,#0x10
71035ded0c  b.cs 0x71035dfae0
71035ded10  ldr x23,[sp, #0x78]
71035ded14  cmp x21,#0x17
71035ded18  b.cs 0x71035ded30
71035ded1c  lsl w8,w21,#0x1
71035ded20  mov x26,x19
71035ded24  strb w8,[sp, #0x98]
71035ded28  cbnz x21,0x71035dedb0
71035ded2c  b 0x71035dedc0
71035ded30  add x8,x21,#0x10
71035ded34  and x28,x8,#-0x10
71035ded38  sub x0,x29,#0x60
71035ded3c  mov w1,#0x10
71035ded40  mov x2,x28
71035ded44  bl 0x710392e1f0
71035ded48  cmp w0,#0xc
71035ded4c  b.ne 0x71035ded84
71035ded50  adrp x8,0x710593d000
71035ded54  ldr x0,[x8, #0x2b0]
71035ded58  cbz x0,0x71035ded84
71035ded5c  stur x28,[x29, #-0x80]
71035ded60  ldr x8,[x0]
71035ded64  ldr x8,[x8, #0x30]
71035ded68  sub x1,x29,#0x80
71035ded6c  blr x8
71035ded70  tbz w0,#0x0,0x71035ded84
71035ded74  sub x0,x29,#0x60
71035ded78  mov w1,#0x10
71035ded7c  mov x2,x28
71035ded80  bl 0x710392e1f0
71035ded84  adrp x8,0x71052a8000
71035ded88  ldr x8,[x8, #0xa78]
71035ded8c  cbz x8,0x71035deda0
71035ded90  ldur x2,[x29, #-0x60]
71035ded94  mov w1,#0x10
71035ded98  mov x0,x28
71035ded9c  bl 0x71039c19e0
71035deda0  ldur x26,[x29, #-0x60]
71035deda4  orr x8,x28,#0x1
71035deda8  str x8,[sp, #0x98]
71035dedac  stp x21,x26,[sp, #0xa0]
71035dedb0  mov x0,x26
71035dedb4  mov x1,x23
71035dedb8  mov x2,x21
71035dedbc  bl 0x71039c00e0
71035dedc0  strb wzr,[x26, x21, LSL ]
71035dedc4  mov w22,wzr
71035dedc8  adrp x25,0x7105232000
71035dedcc  add x25,x25,#0x4c8
71035dedd0  ldr x21,[x25]
71035dedd4  ldrb w20,[sp, #0x98]
71035dedd8  tst w20,#0x1
71035deddc  ldr x8,[sp, #0xa8]
71035dede0  mov x0,x21
71035dede4  csel x28,x19,x8,eq
71035dede8  bl 0x71039c0070
71035dedec  cbz x0,0x71035dee5c
71035dedf0  ldr x9,[sp, #0xa0]
71035dedf4  ubfx x8,x20,#0x1,#0x1f
71035dedf8  tst w20,#0x1
71035dedfc  csel x20,x8,x9,eq
71035dee00  mov x23,x0
71035dee04  cmp x20,x0
71035dee08  b.lt 0x71035defc0
71035dee0c  ldrb w26,[x21]
71035dee10  add x24,x28,x20
71035dee14  mov x8,x20
71035dee18  mov x0,x28
71035dee1c  sub x8,x8,x23
71035dee20  adds x2,x8,#0x1
71035dee24  b.eq 0x71035defb8
71035dee28  mov w1,w26
71035dee2c  bl 0x71039c0280
71035dee30  cbz x0,0x71035defb8
71035dee34  mov x1,x21
71035dee38  mov x2,x23
71035dee3c  mov x27,x0
71035dee40  bl 0x71039c0250
71035dee44  cbz w0,0x71035def98
71035dee48  add x0,x27,#0x1
71035dee4c  sub x8,x24,x0
71035dee50  cmp x8,x23
71035dee54  b.ge 0x71035dee1c
71035dee58  b 0x71035defb8
71035dee5c  ldr x9,[sp, #0xa0]
71035dee60  lsr x10,x20,#0x1
71035dee64  tst w20,#0x1
71035dee68  mov x8,xzr
71035dee6c  csel x20,x10,x9,eq
71035dee70  cmp x20,x8
71035dee74  csel x21,x20,x8,cc
71035dee78  stur xzr,[x29, #-0x80]
71035dee7c  stp xzr,xzr,[x29, #-0x78]
71035dee80  cmn x21,#0x10
71035dee84  b.cs 0x71035dfad8
71035dee88  cmp x21,#0x17
71035dee8c  b.cs 0x71035deea4
71035dee90  ldr x26,[sp, #0x60]
71035dee94  lsl w8,w21,#0x1
71035dee98  sturb w8,[x29, #-0x80]
71035dee9c  cbnz x21,0x71035def24
71035deea0  b 0x71035def34
71035deea4  add x8,x21,#0x10
71035deea8  and x23,x8,#-0x10
71035deeac  sub x0,x29,#0x68
71035deeb0  mov w1,#0x10
71035deeb4  mov x2,x23
71035deeb8  bl 0x710392e1f0
71035deebc  cmp w0,#0xc
71035deec0  b.ne 0x71035deef8
71035deec4  adrp x8,0x710593d000
71035deec8  ldr x0,[x8, #0x2b0]
71035deecc  cbz x0,0x71035deef8
71035deed0  stur x23,[x29, #-0x60]
71035deed4  ldr x8,[x0]
71035deed8  ldr x8,[x8, #0x30]
71035deedc  sub x1,x29,#0x60
71035deee0  blr x8
71035deee4  tbz w0,#0x0,0x71035deef8
71035deee8  sub x0,x29,#0x68
71035deeec  mov w1,#0x10
71035deef0  mov x2,x23
71035deef4  bl 0x710392e1f0
71035deef8  adrp x8,0x71052a8000
71035deefc  ldr x8,[x8, #0xa78]
71035def00  cbz x8,0x71035def14
71035def04  ldur x2,[x29, #-0x68]
71035def08  mov w1,#0x10
71035def0c  mov x0,x23
71035def10  bl 0x71039c19e0
71035def14  ldur x26,[x29, #-0x68]
71035def18  orr x8,x23,#0x1
71035def1c  stur x8,[x29, #-0x80]
71035def20  stp x21,x26,[x29, #-0x78]
71035def24  mov x0,x26
71035def28  mov x1,x28
71035def2c  mov x2,x21
71035def30  bl 0x71039c00e0
71035def34  strb wzr,[x26, x21, LSL ]
71035def38  ldrb w8,[sp, #0x98]
71035def3c  tbnz w8,#0x0,0x71035def48
71035def40  strh wzr,[sp, #0x98]
71035def44  b 0x71035def80
71035def48  ldr x8,[sp, #0xa8]
71035def4c  strb wzr,[x8]
71035def50  ldrb w8,[sp, #0x98]
71035def54  str xzr,[sp, #0xa0]
71035def58  tbz w8,#0x0,0x71035def80
71035def5c  adrp x8,0x71052a8000
71035def60  ldr x21,[sp, #0xa8]
71035def64  ldr x8,[x8, #0xa70]
71035def68  cbz x8,0x71035def74
71035def6c  mov x0,x21
71035def70  bl 0x71039c19b0
71035def74  mov x0,x21
71035def78  bl 0x710392eb40
71035def7c  str xzr,[sp, #0x98]
71035def80  ldp x9,x8,[x29, #-0x78]
71035def84  mov w22,#0x1
71035def88  stp x9,x8,[sp, #0xa0]
71035def8c  ldur x8,[x29, #-0x80]
71035def90  str x8,[sp, #0x98]
71035def94  b 0x71035defc0
71035def98  cmp x27,x24
71035def9c  b.eq 0x71035defb8
71035defa0  sub x8,x27,x28
71035defa4  cmn x8,#0x1
71035defa8  adrp x24,0x7105232000
71035defac  add x24,x24,#0x4e8
71035defb0  b.ne 0x71035dee70
71035defb4  b 0x71035defc0
71035defb8  adrp x24,0x7105232000
71035defbc  add x24,x24,#0x4e8
71035defc0  add x25,x25,#0x8
71035defc4  cmp x25,x24
71035defc8  b.ne 0x71035dedd0
71035defcc  ldr x24,[sp, #0x48]
71035defd0  mov x20,#-0x1
71035defd4  adrp x25,0x7104754000
71035defd8  add x25,x25,#0x84
71035defdc  tbz w22,#0x0,0x71035df1b4
71035defe0  ldrb w9,[sp, #0x98]
71035defe4  ldp x10,x8,[sp, #0xa0]
71035defe8  tst w9,#0x1
71035defec  lsr x12,x9,#0x1
71035deff0  cset w11,eq
71035deff4  csel x14,x19,x8,eq
71035deff8  csel x13,x12,x10,eq
71035deffc  cbz x13,0x71035df020
71035df000  mov x12,x13
71035df004  cbz x12,0x71035df028
71035df008  add x15,x14,x12
71035df00c  sub x12,x12,#0x1
71035df010  ldurb w15,[x15, #-0x1]
71035df014  cmp w15,#0x5f
71035df018  b.ne 0x71035df004
71035df01c  b 0x71035df034
71035df020  mov x12,x20
71035df024  b 0x71035df034
71035df028  mov x12,x20
71035df02c  b 0x71035df034
71035df030  mov x12,x20
71035df034  sub x13,x13,#0x1
71035df038  cmp x12,x13
71035df03c  b.ne 0x71035df1b4
71035df040  ubfx w9,w9,#0x1,#0x7
71035df044  tst w11,#0x1
71035df048  csel x28,x19,x8,ne
71035df04c  csel x9,x9,x10,ne
71035df050  cmp x9,x12
71035df054  stur xzr,[x29, #-0x80]
71035df058  stp xzr,xzr,[x29, #-0x78]
71035df05c  csel x21,x9,x12,cc
71035df060  cmn x21,#0x10
71035df064  b.cs 0x71035dfad8
71035df068  cmp x21,#0x17
71035df06c  b.cs 0x71035df084
71035df070  ldr x26,[sp, #0x60]
71035df074  lsl w8,w21,#0x1
71035df078  sturb w8,[x29, #-0x80]
71035df07c  cbnz x21,0x71035df104
71035df080  b 0x71035df114
71035df084  add x8,x21,#0x10
71035df088  and x23,x8,#-0x10
71035df08c  sub x0,x29,#0x68
71035df090  mov w1,#0x10
71035df094  mov x2,x23
71035df098  bl 0x710392e1f0
71035df09c  cmp w0,#0xc
71035df0a0  b.ne 0x71035df0d8
71035df0a4  adrp x8,0x710593d000
71035df0a8  ldr x0,[x8, #0x2b0]
71035df0ac  cbz x0,0x71035df0d8
71035df0b0  stur x23,[x29, #-0x60]
71035df0b4  ldr x8,[x0]
71035df0b8  ldr x8,[x8, #0x30]
71035df0bc  sub x1,x29,#0x60
71035df0c0  blr x8
71035df0c4  tbz w0,#0x0,0x71035df0d8
71035df0c8  sub x0,x29,#0x68
71035df0cc  mov w1,#0x10
71035df0d0  mov x2,x23
71035df0d4  bl 0x710392e1f0
71035df0d8  adrp x8,0x71052a8000
71035df0dc  ldr x8,[x8, #0xa78]
71035df0e0  cbz x8,0x71035df0f4
71035df0e4  ldur x2,[x29, #-0x68]
71035df0e8  mov w1,#0x10
71035df0ec  mov x0,x23
71035df0f0  bl 0x71039c19e0
71035df0f4  ldur x26,[x29, #-0x68]
71035df0f8  orr x8,x23,#0x1
71035df0fc  stur x8,[x29, #-0x80]
71035df100  stp x21,x26,[x29, #-0x78]
71035df104  mov x0,x26
71035df108  mov x1,x28
71035df10c  mov x2,x21
71035df110  bl 0x71039c00e0
71035df114  strb wzr,[x26, x21, LSL ]
71035df118  ldrb w8,[sp, #0x98]
71035df11c  tbnz w8,#0x0,0x71035df128
71035df120  strh wzr,[sp, #0x98]
71035df124  b 0x71035df160
71035df128  ldr x8,[sp, #0xa8]
71035df12c  strb wzr,[x8]
71035df130  ldrb w8,[sp, #0x98]
71035df134  str xzr,[sp, #0xa0]
71035df138  tbz w8,#0x0,0x71035df160
71035df13c  adrp x8,0x71052a8000
71035df140  ldr x21,[sp, #0xa8]
71035df144  ldr x8,[x8, #0xa70]
71035df148  cbz x8,0x71035df154
71035df14c  mov x0,x21
71035df150  bl 0x71039c19b0
71035df154  mov x0,x21
71035df158  bl 0x710392eb40
71035df15c  str xzr,[sp, #0x98]
71035df160  ldp x8,x10,[x29, #-0x80]
71035df164  stp x8,x10,[sp, #0x98]
71035df168  ldrb w9,[sp, #0x98]
71035df16c  ldur x8,[x29, #-0x70]
71035df170  str x8,[sp, #0xa8]
71035df174  tst w9,#0x1
71035df178  lsr x12,x9,#0x1
71035df17c  cset w11,eq
71035df180  csel x14,x19,x8,eq
71035df184  csel x13,x12,x10,eq
71035df188  cbz x13,0x71035df030
71035df18c  mov x12,x13
71035df190  cbz x12,0x71035df1ac
71035df194  add x15,x14,x12
71035df198  sub x12,x12,#0x1
71035df19c  ldurb w15,[x15, #-0x1]
71035df1a0  cmp w15,#0x5f
71035df1a4  b.ne 0x71035df190
71035df1a8  b 0x71035df034
71035df1ac  mov x12,x20
71035df1b0  b 0x71035df034
71035df1b4  ldrb w8,[sp, #0x68]
71035df1b8  tbnz w8,#0x0,0x71035df1c8
71035df1bc  ldp x22,x20,[sp, #0x30]
71035df1c0  strh wzr,[sp, #0x68]
71035df1c4  b 0x71035df204
71035df1c8  ldr x8,[sp, #0x78]
71035df1cc  strb wzr,[x8]
71035df1d0  ldrb w8,[sp, #0x68]
71035df1d4  ldp x22,x20,[sp, #0x30]
71035df1d8  str xzr,[sp, #0x70]
71035df1dc  tbz w8,#0x0,0x71035df204
71035df1e0  adrp x8,0x71052a8000
71035df1e4  ldr x21,[sp, #0x78]
71035df1e8  ldr x8,[x8, #0xa70]
71035df1ec  cbz x8,0x71035df1f8
71035df1f0  mov x0,x21
71035df1f4  bl 0x71039c19b0
71035df1f8  mov x0,x21
71035df1fc  bl 0x710392eb40
71035df200  str xzr,[sp, #0x68]
71035df204  ldp x9,x8,[sp, #0xa0]
71035df208  stp x9,x8,[sp, #0x70]
71035df20c  ldr x8,[sp, #0x98]
71035df210  str x8,[sp, #0x68]
71035df214  ldrb w8,[sp, #0x80]
71035df218  tbnz w8,#0x0,0x71035df224
71035df21c  strh wzr,[sp, #0x80]
71035df220  b 0x71035df25c
71035df224  ldr x8,[sp, #0x90]
71035df228  strb wzr,[x8]
71035df22c  ldrb w8,[sp, #0x80]
71035df230  str xzr,[sp, #0x88]
71035df234  tbz w8,#0x0,0x71035df25c
71035df238  adrp x8,0x71052a8000
71035df23c  ldr x21,[sp, #0x90]
71035df240  ldr x8,[x8, #0xa70]
71035df244  cbz x8,0x71035df250
71035df248  mov x0,x21
71035df24c  bl 0x71039c19b0
71035df250  mov x0,x21
71035df254  bl 0x710392eb40
71035df258  str xzr,[sp, #0x80]
71035df25c  ldp x8,x10,[sp, #0x68]
71035df260  stp x8,x10,[sp, #0x80]
71035df264  ldrb w9,[sp, #0x80]
71035df268  ldr x8,[sp, #0x78]
71035df26c  str x8,[sp, #0x90]
71035df270  lsr x11,x9,#0x1
71035df274  tst w9,#0x1
71035df278  ldr x9,[sp, #0x40]
71035df27c  csel x9,x9,x8,eq
71035df280  csel x8,x11,x10,eq
71035df284  cbz w8,0x71035df2c4
71035df288  add x10,x9,w8, UXTW 
71035df28c  mov w11,#0xffffffff
71035df290  ldrb w12,[x9], #0x1
71035df294  sub w13,w12,#0x41
71035df298  add w14,w12,#0x20
71035df29c  cmp w13,#0x1a
71035df2a0  csel w12,w14,w12,cc
71035df2a4  eor w12,w12,w11
71035df2a8  and w12,w12,#0xff
71035df2ac  cmp x9,x10
71035df2b0  ldr w12,[x25, w12, UXTW #0x2]
71035df2b4  eor w11,w12,w11, LSR #0x8
71035df2b8  b.cc 0x71035df290
71035df2bc  mvn w27,w11
71035df2c0  b 0x71035df2c8
71035df2c4  mov x27,xzr
71035df2c8  ldr x10,[x22, #0x18]
71035df2cc  bfm x27,x8,#0x20,#0x7
71035df2d0  cbz x10,0x71035df3ac
71035df2d4  sub x11,x10,#0x1
71035df2d8  ands x12,x11,x10
71035df2dc  b.eq 0x71035df2f8
71035df2e0  cmp x27,x10
71035df2e4  mov x9,x27
71035df2e8  b.cc 0x71035df2fc
71035df2ec  udiv x8,x27,x10
71035df2f0  msub x9,x8,x10,x27
71035df2f4  b 0x71035df2fc
71035df2f8  and x9,x11,x27
71035df2fc  ldr x8,[x24]
71035df300  ldr x8,[x8, x9, LSL #0x3]
71035df304  cbz x8,0x71035df3ac
71035df308  ldr x8,[x8]
71035df30c  cbz x8,0x71035df3ac
71035df310  cbz x12,0x71035df354
71035df314  ldr x11,[x8, #0x8]
71035df318  cmp x27,x11
71035df31c  b.ne 0x71035df330
71035df320  ldr x11,[x8, #0x10]
71035df324  cmp x11,x27
71035df328  b.ne 0x71035df348
71035df32c  b 0x71035df388
71035df330  cmp x11,x10
71035df334  b.cc 0x71035df340
71035df338  udiv x12,x11,x10
71035df33c  msub x11,x12,x10,x11
71035df340  cmp x11,x9
71035df344  b.ne 0x71035df3ac
71035df348  ldr x8,[x8]
71035df34c  cbnz x8,0x71035df314
71035df350  b 0x71035df3ac
71035df354  ldr x10,[x8, #0x8]
71035df358  and x12,x10,x11
71035df35c  cmp x27,x10
71035df360  ccmp x12,x9,#0x4,ne
71035df364  b.ne 0x71035df3ac
71035df368  cmp x27,x10
71035df36c  b.ne 0x71035df37c
71035df370  ldr x10,[x8, #0x10]
71035df374  cmp x10,x27
71035df378  b.eq 0x71035df388
71035df37c  ldr x8,[x8]
71035df380  cbnz x8,0x71035df354
71035df384  b 0x71035df3ac
71035df388  mov x10,#-0x1
71035df38c  ldr x8,[x8]
71035df390  mov x9,x10
71035df394  cbz x8,0x71035df3a8
71035df398  ldr x11,[x8, #0x10]
71035df39c  sub x10,x9,#0x1
71035df3a0  cmp x11,x27
71035df3a4  b.eq 0x71035df38c
71035df3a8  cbnz x9,0x71035df7f4
71035df3ac  ldp x9,x8,[x22, #0x40]
71035df3b0  cmp x9,x8
71035df3b4  b.eq 0x71035df3cc
71035df3b8  str x27,[x9]
71035df3bc  ldr x8,[x22, #0x40]
71035df3c0  add x8,x8,#0x8
71035df3c4  str x8,[x22, #0x40]
71035df3c8  b 0x71035df4c4
71035df3cc  ldr x10,[sp, #0x18]
71035df3d0  ldr x28,[x10]
71035df3d4  sub x21,x9,x28
71035df3d8  asr x22,x21,#0x3
71035df3dc  add x9,x22,#0x1
71035df3e0  lsr x10,x9,#0x3d
71035df3e4  cbnz x10,0x71035dfaf8
71035df3e8  sub x8,x8,x28
71035df3ec  asr x10,x8,#0x3
71035df3f0  orr x11,xzr,#0xffffffffffffffe
71035df3f4  cmp x10,x11
71035df3f8  b.hi 0x71035df418
71035df3fc  asr x8,x8,#0x2
71035df400  cmp x8,x9
71035df404  csel x25,x9,x8,cc
71035df408  cbz x25,0x71035df47c
71035df40c  lsr x8,x25,#0x3d
71035df410  cbz x8,0x71035df41c
71035df414  b 0x71035dfb08
71035df418  orr x25,xzr,#0x1fffffffffffffff
71035df41c  lsl x8,x25,#0x3
71035df420  cmp x8,#0x0
71035df424  csinc x26,x8,xzr,ne
71035df428  mov w0,#0x10
71035df42c  mov x1,x26
71035df430  bl 0x710392e290
71035df434  mov x23,x0
71035df438  cbnz x0,0x71035df480
71035df43c  adrp x8,0x7105332000
71035df440  ldr x0,[x8, #0xf00]
71035df444  cbz x0,0x71035df47c
71035df448  str wzr,[sp, #0x98]
71035df44c  stur x26,[x29, #-0x80]
71035df450  ldr x8,[x0]
71035df454  ldr x8,[x8, #0x30]
71035df458  add x1,sp,#0x98
71035df45c  sub x2,x29,#0x80
71035df460  blr x8
71035df464  tbz w0,#0x0,0x71035df47c
71035df468  mov w0,#0x10
71035df46c  mov x1,x26
71035df470  bl 0x710392e290
71035df474  mov x23,x0
71035df478  cbnz x0,0x71035df480
71035df47c  mov x23,xzr
71035df480  add x20,x23,x22, LSL #0x3
71035df484  add x22,x23,x25, LSL #0x3
71035df488  cmp x21,#0x1
71035df48c  str x27,[x20], #0x8
71035df490  b.lt 0x71035df4a4
71035df494  mov x0,x23
71035df498  mov x1,x28
71035df49c  mov x2,x21
71035df4a0  bl 0x71039c00e0
71035df4a4  ldr x8,[sp, #0x30]
71035df4a8  stp x23,x20,[x8, #0x38]
71035df4ac  ldr x20,[sp, #0x38]
71035df4b0  str x22,[x8, #0x48]
71035df4b4  mov x22,x8
71035df4b8  cbz x28,0x71035df4c4
71035df4bc  mov x0,x28
71035df4c0  bl 0x710392eb40
71035df4c4  ldp x28,x8,[x22, #0x58]
71035df4c8  cmp x28,x8
71035df4cc  b.eq 0x71035df4f4
71035df4d0  stp xzr,xzr,[x28, #0x8]
71035df4d4  str xzr,[x28]
71035df4d8  ldrb w8,[sp, #0x80]
71035df4dc  tbnz w8,#0x0,0x71035df504
71035df4e0  ldp x8,x9,[sp, #0x80]
71035df4e4  ldr x10,[sp, #0x90]
71035df4e8  stp x9,x10,[x28, #0x8]
71035df4ec  str x8,[x28]
71035df4f0  b 0x71035df5c4
71035df4f4  ldr x0,[sp, #0x10]
71035df4f8  add x1,sp,#0x80
71035df4fc  bl 0x71035de1f0
71035df500  b 0x71035df5d0
71035df504  ldr x21,[sp, #0x88]
71035df508  cmn x21,#0x10
71035df50c  b.cs 0x71035dfb00
71035df510  ldr x23,[sp, #0x90]
71035df514  cmp x21,#0x17
71035df518  b.cs 0x71035df530
71035df51c  lsl w8,w21,#0x1
71035df520  strb w8,[x28], #0x1
71035df524  mov x0,x28
71035df528  cbnz x21,0x71035df5b4
71035df52c  b 0x71035df5c0
71035df530  add x8,x21,#0x10
71035df534  and x26,x8,#-0x10
71035df538  add x0,sp,#0x98
71035df53c  mov w1,#0x10
71035df540  mov x2,x26
71035df544  bl 0x710392e1f0
71035df548  cmp w0,#0xc
71035df54c  b.ne 0x71035df584
71035df550  adrp x8,0x710593d000
71035df554  ldr x0,[x8, #0x2b0]
71035df558  cbz x0,0x71035df584
71035df55c  stur x26,[x29, #-0x80]
71035df560  ldr x8,[x0]
71035df564  ldr x8,[x8, #0x30]
71035df568  sub x1,x29,#0x80
71035df56c  blr x8
71035df570  tbz w0,#0x0,0x71035df584
71035df574  add x0,sp,#0x98
71035df578  mov w1,#0x10
71035df57c  mov x2,x26
71035df580  bl 0x710392e1f0
71035df584  adrp x8,0x71052a8000
71035df588  ldr x8,[x8, #0xa78]
71035df58c  cbz x8,0x71035df5a0
71035df590  ldr x2,[sp, #0x98]
71035df594  mov w1,#0x10
71035df598  mov x0,x26
71035df59c  bl 0x71039c19e0
71035df5a0  ldr x0,[sp, #0x98]
71035df5a4  orr x8,x26,#0x1
71035df5a8  str x8,[x28]
71035df5ac  stp x21,x0,[x28, #0x8]
71035df5b0  mov x28,x0
71035df5b4  mov x1,x23
71035df5b8  mov x2,x21
71035df5bc  bl 0x71039c00e0
71035df5c0  strb wzr,[x28, x21, LSL ]
71035df5c4  ldr x8,[x22, #0x58]
71035df5c8  add x8,x8,#0x18
71035df5cc  str x8,[x22, #0x58]
71035df5d0  ldr w25,[x20, #0x98]
71035df5d4  ldr x21,[x22, #0x70]
71035df5d8  cbz x21,0x71035df680
71035df5dc  sub x9,x21,#0x1
71035df5e0  ands x10,x9,x21
71035df5e4  b.eq 0x71035df600
71035df5e8  cmp x27,x21
71035df5ec  mov x23,x27
71035df5f0  b.cc 0x71035df604
71035df5f4  udiv x8,x27,x21
71035df5f8  msub x23,x8,x21,x27
71035df5fc  b 0x71035df604
71035df600  and x23,x9,x27
71035df604  ldr x8,[sp, #0x58]
71035df608  ldr x8,[x8]
71035df60c  ldr x8,[x8, x23, LSL #0x3]
71035df610  cbz x8,0x71035df680
71035df614  cbz x10,0x71035df654
71035df618  ldr x8,[x8]
71035df61c  cbz x8,0x71035df680
71035df620  ldr x9,[x8, #0x8]
71035df624  cmp x9,x27
71035df628  b.eq 0x71035df644
71035df62c  cmp x9,x21
71035df630  b.cc 0x71035df63c
71035df634  udiv x10,x9,x21
71035df638  msub x9,x10,x21,x9
71035df63c  cmp x9,x23
71035df640  b.ne 0x71035df680
71035df644  ldr x9,[x8, #0x10]
71035df648  cmp x9,x27
71035df64c  b.ne 0x71035df618
71035df650  b 0x71035df7e8
71035df654  ldr x8,[x8]
71035df658  cbz x8,0x71035df680
71035df65c  ldr x10,[x8, #0x8]
71035df660  and x11,x10,x9
71035df664  cmp x10,x27
71035df668  ccmp x11,x23,#0x4,ne
71035df66c  b.ne 0x71035df680
71035df670  ldr x10,[x8, #0x10]
71035df674  cmp x10,x27
71035df678  b.ne 0x71035df654
71035df67c  b 0x71035df7e8
71035df680  mov w0,#0x10
71035df684  mov w1,#0x20
71035df688  bl 0x710392e290
71035df68c  mov x28,x0
71035df690  cbnz x0,0x71035df6cc
71035df694  adrp x8,0x7105332000
71035df698  ldr x0,[x8, #0xf00]
71035df69c  mov w8,#0x20
71035df6a0  str wzr,[sp, #0x98]
71035df6a4  add x1,sp,#0x98
71035df6a8  stur x8,[x29, #-0x80]
71035df6ac  ldr x8,[x0]
71035df6b0  ldr x8,[x8, #0x30]
71035df6b4  sub x2,x29,#0x80
71035df6b8  blr x8
71035df6bc  mov w0,#0x10
71035df6c0  mov w1,#0x20
71035df6c4  bl 0x710392e290
71035df6c8  mov x28,x0
71035df6cc  stp x27,x27,[x28, #0x8]
71035df6d0  str w25,[x28, #0x18]
71035df6d4  str xzr,[x28]
71035df6d8  ldr x8,[x22, #0x80]
71035df6dc  add x8,x8,#0x1
71035df6e0  ucvtf s0,x8
71035df6e4  ldr s1,[x22, #0x88]
71035df6e8  cbz x21,0x71035df6fc
71035df6ec  ucvtf s2,x21
71035df6f0  fmul s2,s1,s2
71035df6f4  fcmp s2,s0
71035df6f8  b.pl 0x71035df768
71035df6fc  lsl x8,x21,#0x1
71035df700  cmp x21,#0x3
71035df704  b.cc 0x71035df718
71035df708  sub x9,x21,#0x1
71035df70c  tst x9,x21
71035df710  cset w9,ne
71035df714  b 0x71035df71c
71035df718  mov w9,#0x1
71035df71c  fdiv s0,s0,s1
71035df720  fcvtpu x10,s0
71035df724  ldr x0,[sp, #0x58]
71035df728  orr x8,x9,x8
71035df72c  cmp x8,x10
71035df730  csel x1,x10,x8,cc
71035df734  bl 0x71032a9680
71035df738  ldr x21,[x22, #0x70]
71035df73c  sub x8,x21,#0x1
71035df740  tst x8,x21
71035df744  b.eq 0x71035df758
71035df748  cmp x27,x21
71035df74c  b.cs 0x71035df760
71035df750  mov x23,x27
71035df754  b 0x71035df768
71035df758  and x23,x8,x27
71035df75c  b 0x71035df768
71035df760  udiv x8,x27,x21
71035df764  msub x23,x8,x21,x27
71035df768  ldr x8,[sp, #0x58]
71035df76c  ldr x9,[x8]
71035df770  ldr x8,[x9, x23, LSL #0x3]
71035df774  cbz x8,0x71035df784
71035df778  ldr x9,[x8]
71035df77c  str x9,[x28]
71035df780  b 0x71035df7d4
71035df784  ldr x10,[sp, #0x8]
71035df788  ldr x8,[x10]
71035df78c  str x8,[x28]
71035df790  str x28,[x10]
71035df794  str x10,[x9, x23, LSL #0x3]
71035df798  ldr x8,[x28]
71035df79c  cbz x8,0x71035df7d8
71035df7a0  ldr x8,[x8, #0x8]
71035df7a4  sub x9,x21,#0x1
71035df7a8  tst x9,x21
71035df7ac  b.eq 0x71035df7c4
71035df7b0  cmp x8,x21
71035df7b4  b.cc 0x71035df7c8
71035df7b8  udiv x9,x8,x21
71035df7bc  msub x8,x9,x21,x8
71035df7c0  b 0x71035df7c8
71035df7c4  and x8,x8,x9
71035df7c8  ldr x9,[sp, #0x58]
71035df7cc  ldr x9,[x9]
71035df7d0  add x8,x9,x8, LSL #0x3
71035df7d4  str x28,[x8]
71035df7d8  ldr x8,[x22, #0x80]
71035df7dc  add x8,x8,#0x1
71035df7e0  str x8,[x22, #0x80]
71035df7e4  ldr w25,[x20, #0x98]
71035df7e8  ldr x24,[sp, #0x48]
71035df7ec  add w8,w25,#0x1
71035df7f0  str w8,[x20, #0x98]
71035df7f4  mov w0,#0x10
71035df7f8  mov w1,#0x20
71035df7fc  bl 0x710392e290
71035df800  mov x28,x0
71035df804  cbnz x0,0x71035df850
71035df808  adrp x8,0x7105332000
71035df80c  ldr x0,[x8, #0xf00]
71035df810  cbz x0,0x71035df84c
71035df814  mov w8,#0x20
71035df818  str wzr,[sp, #0x98]
71035df81c  add x1,sp,#0x98
71035df820  stur x8,[x29, #-0x80]
71035df824  ldr x8,[x0]
71035df828  ldr x8,[x8, #0x30]
71035df82c  sub x2,x29,#0x80
71035df830  blr x8
71035df834  tbz w0,#0x0,0x71035df84c
71035df838  mov w0,#0x10
71035df83c  mov w1,#0x20
71035df840  bl 0x710392e290
71035df844  mov x28,x0
71035df848  cbnz x0,0x71035df850
71035df84c  mov x28,xzr
71035df850  stp x27,x27,[x28, #0x8]
71035df854  ldr x20,[sp, #0x50]
71035df858  str w20,[x28, #0x18]
71035df85c  str xzr,[x28]
71035df860  ldr x9,[x22, #0x28]
71035df864  add x9,x9,#0x1
71035df868  ucvtf s0,x9
71035df86c  ldr s1,[x22, #0x30]
71035df870  ldr x8,[x22, #0x18]
71035df874  cbz x8,0x71035df888
71035df878  ucvtf s2,x8
71035df87c  fmul s2,s1,s2
71035df880  fcmp s2,s0
71035df884  b.pl 0x71035df8cc
71035df888  lsl x9,x8,#0x1
71035df88c  cmp x8,#0x3
71035df890  b.cc 0x71035df8a4
71035df894  sub x10,x8,#0x1
71035df898  tst x10,x8
71035df89c  cset w8,ne
71035df8a0  b 0x71035df8a8
71035df8a4  mov w8,#0x1
71035df8a8  fdiv s0,s0,s1
71035df8ac  fcvtpu x10,s0
71035df8b0  orr x8,x8,x9
71035df8b4  cmp x8,x10
71035df8b8  csel x1,x10,x8,cc
71035df8bc  mov x0,x24
71035df8c0  bl 0x71032a9680
71035df8c4  ldr x8,[x22, #0x18]
71035df8c8  ldr x27,[x28, #0x8]
71035df8cc  sub x9,x8,#0x1
71035df8d0  ands x11,x9,x8
71035df8d4  b.eq 0x71035df8f0
71035df8d8  cmp x27,x8
71035df8dc  mov x10,x27
71035df8e0  b.cc 0x71035df8f4
71035df8e4  udiv x10,x27,x8
71035df8e8  msub x10,x10,x8,x27
71035df8ec  b 0x71035df8f4
71035df8f0  and x10,x9,x27
71035df8f4  ldr x12,[x24]
71035df8f8  ldr x12,[x12, x10, LSL #0x3]
71035df8fc  cbz x12,0x71035dfa00
71035df900  mov w15,wzr
71035df904  cbnz x11,0x71035df970
71035df908  mov x13,x12
71035df90c  ldr x12,[x12]
71035df910  cbz x12,0x71035df9c8
71035df914  mov w14,w15
71035df918  ldr x15,[x12, #0x8]
71035df91c  and x16,x15,x9
71035df920  cmp x16,x10
71035df924  b.ne 0x71035df9c8
71035df928  cmp x15,x27
71035df92c  b.ne 0x71035df94c
71035df930  ldr x15,[x12, #0x10]
71035df934  ldr x16,[x28, #0x10]
71035df938  cmp x15,x16
71035df93c  cset w16,eq
71035df940  orr w15,w14,w16
71035df944  tbz w16,#0x0,0x71035df958
71035df948  b 0x71035df908
71035df94c  mov w16,wzr
71035df950  orr w15,w14,w16
71035df954  tbnz w16,#0x0,0x71035df908
71035df958  eor w14,w14,#0x1
71035df95c  tbnz w14,#0x0,0x71035df908
71035df960  b 0x71035df9c8
71035df964  mov w16,wzr
71035df968  orr w15,w14,w16
71035df96c  tbz w16,#0x0,0x71035df9c0
71035df970  mov x13,x12
71035df974  ldr x12,[x12]
71035df978  cbz x12,0x71035df9c8
71035df97c  mov w14,w15
71035df980  ldr x15,[x12, #0x8]
71035df984  cmp x15,x8
71035df988  mov x16,x15
71035df98c  b.cc 0x71035df998
71035df990  udiv x16,x15,x8
71035df994  msub x16,x16,x8,x15
71035df998  cmp x16,x10
71035df99c  b.ne 0x71035df9c8
71035df9a0  cmp x15,x27
71035df9a4  b.ne 0x71035df964
71035df9a8  ldr x15,[x12, #0x10]
71035df9ac  ldr x16,[x28, #0x10]
71035df9b0  cmp x15,x16
71035df9b4  cset w16,eq
71035df9b8  orr w15,w14,w16
71035df9bc  tbnz w16,#0x0,0x71035df970
71035df9c0  eor w14,w14,#0x1
71035df9c4  tbnz w14,#0x0,0x71035df970
71035df9c8  ldr x12,[x13]
71035df9cc  str x12,[x28]
71035df9d0  str x28,[x13]
71035df9d4  ldr x12,[x28]
71035df9d8  cbz x12,0x71035dfa60
71035df9dc  ldr x12,[x12, #0x8]
71035df9e0  cbz x11,0x71035dfa3c
71035df9e4  cmp x12,x8
71035df9e8  b.cc 0x71035df9f4
71035df9ec  udiv x9,x12,x8
71035df9f0  msub x12,x9,x8,x12
71035df9f4  cmp x12,x10
71035df9f8  b.ne 0x71035dfa48
71035df9fc  b 0x71035dfa60
71035dfa00  ldr x13,[sp, #0x20]
71035dfa04  ldr x12,[x13]
71035dfa08  str x12,[x28]
71035dfa0c  str x28,[x13]
71035dfa10  ldr x12,[x24]
71035dfa14  str x13,[x12, x10, LSL #0x3]
71035dfa18  ldr x10,[x28]
71035dfa1c  cbz x10,0x71035dfa60
71035dfa20  ldr x10,[x10, #0x8]
71035dfa24  cbz x11,0x71035dfa54
71035dfa28  cmp x10,x8
71035dfa2c  b.cc 0x71035dfa58
71035dfa30  udiv x9,x10,x8
71035dfa34  msub x10,x9,x8,x10
71035dfa38  b 0x71035dfa58
71035dfa3c  and x12,x12,x9
71035dfa40  cmp x12,x10
71035dfa44  b.eq 0x71035dfa60
71035dfa48  ldr x8,[x24]
71035dfa4c  str x28,[x8, x12, LSL #0x3]
71035dfa50  b 0x71035dfa60
71035dfa54  and x10,x10,x9
71035dfa58  ldr x8,[x24]
71035dfa5c  str x28,[x8, x10, LSL #0x3]
71035dfa60  ldr x8,[x22, #0x28]
71035dfa64  add x8,x8,#0x1
71035dfa68  str x8,[x22, #0x28]
71035dfa6c  ldrb w8,[sp, #0x80]
71035dfa70  adrp x24,0x7105232000
71035dfa74  add x24,x24,#0x4e8
71035dfa78  tbz w8,#0x0,0x71035dfa9c
71035dfa7c  adrp x8,0x71052a8000
71035dfa80  ldr x21,[sp, #0x90]
71035dfa84  ldr x8,[x8, #0xa70]
71035dfa88  cbz x8,0x71035dfa94
71035dfa8c  mov x0,x21
71035dfa90  bl 0x71039c19b0
71035dfa94  mov x0,x21
71035dfa98  bl 0x710392eb40
71035dfa9c  ldr x9,[sp, #0x28]
71035dfaa0  ldp x8,x9,[x9]
71035dfaa4  sub x9,x9,x8
71035dfaa8  add w20,w20,#0x1
71035dfaac  asr x9,x9,#0x5
71035dfab0  cmp x9,x20
71035dfab4  b.hi 0x71035de820
71035dfab8  ldp x29,x30,[sp, #0x130]
71035dfabc  ldp x20,x19,[sp, #0x120]
71035dfac0  ldp x22,x21,[sp, #0x110]
71035dfac4  ldp x24,x23,[sp, #0x100]
71035dfac8  ldp x26,x25,[sp, #0xf0]
71035dfacc  ldp x28,x27,[sp, #0xe0]
71035dfad0  add sp,sp,#0x140
71035dfad4  ret
71035dfad8  sub x0,x29,#0x80
71035dfadc  bl 0x71039c1a00
71035dfae0  add x0,sp,#0x98
71035dfae4  bl 0x71039c1a00
71035dfae8  add x0,sp,#0x80
71035dfaec  bl 0x71039c1a00
71035dfaf0  add x0,sp,#0x68
71035dfaf4  bl 0x71039c1a00
71035dfaf8  ldr x0,[sp, #0x18]
71035dfafc  bl 0x71039c0c00
71035dfb00  mov x0,x28
71035dfb04  bl 0x71039c1a00
71035dfb08  bl 0x71039c2650
