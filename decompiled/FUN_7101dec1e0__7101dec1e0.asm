// addr:      7101dec1e0
// offset:    0x1dec1e0
// name:      FUN_7101dec1e0
// mangled:   
// size:      6028

7101dec1e0  sub sp,sp,#0x130
7101dec1e4  str d10,[sp, #0xb0]
7101dec1e8  stp d9,d8,[sp, #0xc0]
7101dec1ec  stp x28,x27,[sp, #0xd0]
7101dec1f0  stp x26,x25,[sp, #0xe0]
7101dec1f4  stp x24,x23,[sp, #0xf0]
7101dec1f8  stp x22,x21,[sp, #0x100]
7101dec1fc  stp x20,x19,[sp, #0x110]
7101dec200  stp x29,x30,[sp, #0x120]
7101dec204  add x29,sp,#0x120
7101dec208  ldr w8,[x0, #0x134]
7101dec20c  mov x20,x0
7101dec210  cbz w8,0x7101dec274
7101dec214  ldr x8,[x20, #0x28]
7101dec218  ldr x9,[x8, #0x80]
7101dec21c  ldr w9,[x9, #0xe0]
7101dec220  cmp w9,#0x5
7101dec224  b.ne 0x7101ded914
7101dec228  mov w9,#0x1
7101dec22c  strb w9,[x8, #0x70]
7101dec230  ldr x8,[x20, #0x8]
7101dec234  ldr x8,[x8]
7101dec238  ldr x0,[x8]
7101dec23c  mov w1,#0x1
7101dec240  bl 0x71037760f0
7101dec244  ldr w8,[x20, #0x144]
7101dec248  cmp w8,#0x4
7101dec24c  b.eq 0x7101dec258
7101dec250  cmp w8,#0xd
7101dec254  b.ne 0x7101dec2c0
7101dec258  ldrsw x8,[x20, #0x12c]
7101dec25c  cmp w8,#0x13
7101dec260  b.cs 0x7101ded968
7101dec264  add x8,x20,x8, LSL #0x2
7101dec268  mov w9,#0x2
7101dec26c  str w9,[x8, #0xe0]
7101dec270  b 0x7101ded914
7101dec274  ldr x8,[x20, #0x8]
7101dec278  ldr x8,[x8]
7101dec27c  ldr x0,[x8]
7101dec280  mov w1,wzr
7101dec284  bl 0x71037760f0
7101dec288  ldr x8,[x20, #0x20]
7101dec28c  ldr x9,[x8, #0x38]
7101dec290  ldrsw x9,[x9, #0x2a4]
7101dec294  tbnz w9,#0x1f,0x7101dec3c0
7101dec298  ldr w10,[x8, #0x2c8]
7101dec29c  tst w10,#0xffffff
7101dec2a0  b.eq 0x7101dec3a8
7101dec2a4  ldr w10,[x8, #0x308]
7101dec2a8  cmp w10,w9
7101dec2ac  b.le 0x7101dec3c0
7101dec2b0  ldr x8,[x8, #0x240]
7101dec2b4  ldr x8,[x8, x9, LSL #0x3]
7101dec2b8  ldrh w19,[x8]
7101dec2bc  b 0x7101dec3c4
7101dec2c0  ldr x8,[x20, #0x20]
7101dec2c4  ldr x9,[x8, #0x6b8]
7101dec2c8  ldrb w22,[x8, #0x6c0]
7101dec2cc  mov w8,#0x11ac
7101dec2d0  ldr x23,[x9, #0x80]
7101dec2d4  strb w22,[x23, x8, LSL ]
7101dec2d8  ldr w8,[x23, #0x11b0]
7101dec2dc  cmp w8,#0x6
7101dec2e0  b.lt 0x7101dec4d0
7101dec2e4  ldr x9,[x23, #0x2268]
7101dec2e8  ldr x8,[x9, #0x1b8]
7101dec2ec  cbz x8,0x7101dec258
7101dec2f0  add x9,x9,#0x1b8
7101dec2f4  mov x10,x9
7101dec2f8  mov x11,x8
7101dec2fc  ldr w12,[x11, #0x20]
7101dec300  cmp w12,#0x2
7101dec304  cset w12,lt
7101dec308  csel x10,x10,x11,lt
7101dec30c  ldr x11,[x11, w12, UXTW #0x3]
7101dec310  cbnz x11,0x7101dec2fc
7101dec314  cmp x10,x9
7101dec318  b.eq 0x7101dec370
7101dec31c  ldr w11,[x10, #0x20]
7101dec320  cmp w11,#0x2
7101dec324  b.gt 0x7101dec370
7101dec328  ldr x19,[x10, #0x28]
7101dec32c  cbz x19,0x7101dec370
7101dec330  ldr x8,[x19]
7101dec334  ldr x8,[x8, #0x1f8]
7101dec338  cmp w22,#0x0
7101dec33c  cset w1,ne
7101dec340  mov x0,x19
7101dec344  cset w21,eq
7101dec348  blr x8
7101dec34c  ldr x8,[x19]
7101dec350  ldr x8,[x8, #0x388]
7101dec354  mov x0,x19
7101dec358  mov w1,w21
7101dec35c  mov w2,wzr
7101dec360  blr x8
7101dec364  ldr x8,[x23, #0x2268]
7101dec368  add x9,x8,#0x1b8
7101dec36c  ldr x8,[x8, #0x1b8]
7101dec370  cbz x8,0x7101dec258
7101dec374  mov x10,x9
7101dec378  ldr w11,[x8, #0x20]
7101dec37c  cmp w11,#0x2
7101dec380  cset w11,lt
7101dec384  csel x10,x10,x8,lt
7101dec388  ldr x8,[x8, w11, UXTW #0x3]
7101dec38c  cbnz x8,0x7101dec378
7101dec390  cmp x10,x9
7101dec394  b.eq 0x7101dec258
7101dec398  ldr w8,[x10, #0x20]
7101dec39c  cmp w8,#0x2
7101dec3a0  b.gt 0x7101dec258
7101dec3a4  b 0x7101dec59c
7101dec3a8  ldr x10,[x8, #0x248]
7101dec3ac  ldr x11,[x8, #0x240]
7101dec3b0  sub x10,x10,x11
7101dec3b4  lsr x10,x10,#0x3
7101dec3b8  cmp w10,w9
7101dec3bc  b.gt 0x7101dec2b0
7101dec3c0  orr w19,wzr,#0xffff
7101dec3c4  ldr x8,[x20, #0x28]
7101dec3c8  strb wzr,[x8, #0x70]
7101dec3cc  adrp x23,0x7105329000
7101dec3d0  ldp x8,x20,[x20, #0x20]
7101dec3d4  ldr s0,[x8, #0x60c]
7101dec3d8  ldr x8,[x23, #0xf98]
7101dec3dc  ldr x8,[x8]
7101dec3e0  ldr x9,[x8, #0x30]
7101dec3e4  lsr w21,w19,#0x4
7101dec3e8  cmp w21,#0x177
7101dec3ec  b.cc 0x7101dec438
7101dec3f0  mov w8,#0xffffe890
7101dec3f4  add w10,w19,w8
7101dec3f8  adrp x8,0x710532a000
7101dec3fc  add x8,x8,#0x878
7101dec400  cmp w10,#0x63
7101dec404  b.hi 0x7101dec44c
7101dec408  and x10,x10,#0xffff
7101dec40c  mov w11,#0x50
7101dec410  madd x9,x10,x11,x9
7101dec414  mov w11,#0x8cc8
7101dec418  movk w11,#0x8, LSL #16
7101dec41c  mov w10,#0x8cc0
7101dec420  movk w10,#0x8, LSL #16
7101dec424  ldrsh w11,[x9, x11, LSL #0x0]
7101dec428  add x9,x9,x10
7101dec42c  cmn w11,#0x1
7101dec430  csel x8,x8,x9,eq
7101dec434  b 0x7101dec44c
7101dec438  mov w8,#0x50
7101dec43c  umaddl x8,w19,w8,x9
7101dec440  mov w9,#0x1940
7101dec444  movk w9,#0x1, LSL #16
7101dec448  add x8,x8,x9
7101dec44c  ldrh w0,[x8, #0x8]
7101dec450  bl 0x71025cba90
7101dec454  ldr x25,[x20, #0x80]
7101dec458  ldr x8,[x25, #0xf0]
7101dec45c  mov w22,w0
7101dec460  ldr x0,[x8]
7101dec464  mov w2,#0xfff
7101dec468  movk w2,#0x1, LSL #16
7101dec46c  mov w1,#0x1
7101dec470  bl 0x7103775dc0
7101dec474  orr w8,wzr,#0xffff
7101dec478  cmp w19,w8
7101dec47c  strh w19,[x25, #0x510]
7101dec480  b.eq 0x7101ded914
7101dec484  ldr x8,[x23, #0xf98]
7101dec488  ldr x9,[x8]
7101dec48c  ldr x10,[x9, #0x40]
7101dec490  ldr x11,[x10, #0x8]
7101dec494  str w22,[sp, #0x4]
7101dec498  cbz x11,0x7101dec60c
7101dec49c  mov x9,x11
7101dec4a0  ldrh w12,[x9, #0x8]!
7101dec4a4  cmp w12,w19
7101dec4a8  b.ne 0x7101dec4b8
7101dec4ac  mov x10,xzr
7101dec4b0  mov x11,x9
7101dec4b4  b 0x7101decb7c
7101dec4b8  ldrh w12,[x11, #0x1d0]
7101dec4bc  cmp w12,w19
7101dec4c0  b.ne 0x7101dec5dc
7101dec4c4  mov x10,xzr
7101dec4c8  add x11,x11,#0x1d0
7101dec4cc  b 0x7101decb7c
7101dec4d0  sub w8,w8,#0x1
7101dec4d4  cmp w8,#0x4
7101dec4d8  b.hi 0x7101dec258
7101dec4dc  ldr x9,[x23, #0x2268]
7101dec4e0  ldr x8,[x9, #0x1b8]
7101dec4e4  cbz x8,0x7101dec258
7101dec4e8  add x9,x9,#0x1b8
7101dec4ec  mov x10,x9
7101dec4f0  mov x11,x8
7101dec4f4  ldr w12,[x11, #0x20]
7101dec4f8  cmp w12,#0x1
7101dec4fc  cset w12,lt
7101dec500  csel x10,x10,x11,lt
7101dec504  ldr x11,[x11, w12, UXTW #0x3]
7101dec508  cbnz x11,0x7101dec4f4
7101dec50c  cmp x10,x9
7101dec510  b.eq 0x7101dec568
7101dec514  ldr w11,[x10, #0x20]
7101dec518  cmp w11,#0x1
7101dec51c  b.gt 0x7101dec568
7101dec520  ldr x19,[x10, #0x28]
7101dec524  cbz x19,0x7101dec568
7101dec528  ldr x8,[x19]
7101dec52c  ldr x8,[x8, #0x1f8]
7101dec530  cmp w22,#0x0
7101dec534  cset w1,ne
7101dec538  mov x0,x19
7101dec53c  cset w21,eq
7101dec540  blr x8
7101dec544  ldr x8,[x19]
7101dec548  ldr x8,[x8, #0x388]
7101dec54c  mov x0,x19
7101dec550  mov w1,w21
7101dec554  mov w2,wzr
7101dec558  blr x8
7101dec55c  ldr x8,[x23, #0x2268]
7101dec560  add x9,x8,#0x1b8
7101dec564  ldr x8,[x8, #0x1b8]
7101dec568  cbz x8,0x7101dec258
7101dec56c  mov x10,x9
7101dec570  ldr w11,[x8, #0x20]
7101dec574  cmp w11,#0x1
7101dec578  cset w11,lt
7101dec57c  csel x10,x10,x8,lt
7101dec580  ldr x8,[x8, w11, UXTW #0x3]
7101dec584  cbnz x8,0x7101dec570
7101dec588  cmp x10,x9
7101dec58c  b.eq 0x7101dec258
7101dec590  ldr w8,[x10, #0x20]
7101dec594  cmp w8,#0x1
7101dec598  b.gt 0x7101dec258
7101dec59c  ldr x19,[x10, #0x28]
7101dec5a0  cbz x19,0x7101dec258
7101dec5a4  ldr x8,[x19]
7101dec5a8  ldr x8,[x8, #0x208]
7101dec5ac  cmp w22,#0x0
7101dec5b0  cset w1,ne
7101dec5b4  mov x0,x19
7101dec5b8  cset w21,eq
7101dec5bc  blr x8
7101dec5c0  ldr x8,[x19]
7101dec5c4  ldr x8,[x8, #0x388]
7101dec5c8  mov x0,x19
7101dec5cc  mov w1,w21
7101dec5d0  mov w2,wzr
7101dec5d4  blr x8
7101dec5d8  b 0x7101dec258
7101dec5dc  ldrh w12,[x11, #0x398]
7101dec5e0  cmp w12,w19
7101dec5e4  b.ne 0x7101dec5f4
7101dec5e8  mov x10,xzr
7101dec5ec  add x11,x11,#0x398
7101dec5f0  b 0x7101decb7c
7101dec5f4  ldrh w12,[x11, #0x560]
7101dec5f8  cmp w12,w19
7101dec5fc  b.ne 0x7101dec60c
7101dec600  mov x10,xzr
7101dec604  add x11,x11,#0x560
7101dec608  b 0x7101decb7c
7101dec60c  ldr x11,[x10, #0x10]
7101dec610  cbz x11,0x7101dec678
7101dec614  mov x9,x11
7101dec618  ldrh w12,[x9, #0x8]!
7101dec61c  cmp w12,w19
7101dec620  b.ne 0x7101dec630
7101dec624  mov w10,#0x1
7101dec628  mov x11,x9
7101dec62c  b 0x7101decb7c
7101dec630  ldrh w12,[x11, #0x1d0]
7101dec634  cmp w12,w19
7101dec638  b.ne 0x7101dec648
7101dec63c  add x11,x11,#0x1d0
7101dec640  mov w10,#0x1
7101dec644  b 0x7101decb7c
7101dec648  ldrh w12,[x11, #0x398]
7101dec64c  cmp w12,w19
7101dec650  b.ne 0x7101dec660
7101dec654  add x11,x11,#0x398
7101dec658  mov w10,#0x1
7101dec65c  b 0x7101decb7c
7101dec660  ldrh w12,[x11, #0x560]
7101dec664  cmp w12,w19
7101dec668  b.ne 0x7101dec678
7101dec66c  add x11,x11,#0x560
7101dec670  mov w10,#0x1
7101dec674  b 0x7101decb7c
7101dec678  ldr x11,[x10, #0x18]
7101dec67c  cbz x11,0x7101dec6e4
7101dec680  mov x9,x11
7101dec684  ldrh w12,[x9, #0x8]!
7101dec688  cmp w12,w19
7101dec68c  b.ne 0x7101dec69c
7101dec690  mov w10,#0x2
7101dec694  mov x11,x9
7101dec698  b 0x7101decb7c
7101dec69c  ldrh w12,[x11, #0x1d0]
7101dec6a0  cmp w12,w19
7101dec6a4  b.ne 0x7101dec6b4
7101dec6a8  add x11,x11,#0x1d0
7101dec6ac  mov w10,#0x2
7101dec6b0  b 0x7101decb7c
7101dec6b4  ldrh w12,[x11, #0x398]
7101dec6b8  cmp w12,w19
7101dec6bc  b.ne 0x7101dec6cc
7101dec6c0  add x11,x11,#0x398
7101dec6c4  mov w10,#0x2
7101dec6c8  b 0x7101decb7c
7101dec6cc  ldrh w12,[x11, #0x560]
7101dec6d0  cmp w12,w19
7101dec6d4  b.ne 0x7101dec6e4
7101dec6d8  add x11,x11,#0x560
7101dec6dc  mov w10,#0x2
7101dec6e0  b 0x7101decb7c
7101dec6e4  ldr x11,[x10, #0x20]
7101dec6e8  cbz x11,0x7101dec750
7101dec6ec  mov x9,x11
7101dec6f0  ldrh w12,[x9, #0x8]!
7101dec6f4  cmp w12,w19
7101dec6f8  b.ne 0x7101dec708
7101dec6fc  orr w10,wzr,#0x3
7101dec700  mov x11,x9
7101dec704  b 0x7101decb7c
7101dec708  ldrh w12,[x11, #0x1d0]
7101dec70c  cmp w12,w19
7101dec710  b.ne 0x7101dec720
7101dec714  add x11,x11,#0x1d0
7101dec718  orr w10,wzr,#0x3
7101dec71c  b 0x7101decb7c
7101dec720  ldrh w12,[x11, #0x398]
7101dec724  cmp w12,w19
7101dec728  b.ne 0x7101dec738
7101dec72c  add x11,x11,#0x398
7101dec730  orr w10,wzr,#0x3
7101dec734  b 0x7101decb7c
7101dec738  ldrh w12,[x11, #0x560]
7101dec73c  cmp w12,w19
7101dec740  b.ne 0x7101dec750
7101dec744  add x11,x11,#0x560
7101dec748  orr w10,wzr,#0x3
7101dec74c  b 0x7101decb7c
7101dec750  ldr x11,[x10, #0x28]
7101dec754  cbz x11,0x7101dec7bc
7101dec758  mov x9,x11
7101dec75c  ldrh w12,[x9, #0x8]!
7101dec760  cmp w12,w19
7101dec764  b.ne 0x7101dec774
7101dec768  mov w10,#0x4
7101dec76c  mov x11,x9
7101dec770  b 0x7101decb7c
7101dec774  ldrh w12,[x11, #0x1d0]
7101dec778  cmp w12,w19
7101dec77c  b.ne 0x7101dec78c
7101dec780  add x11,x11,#0x1d0
7101dec784  mov w10,#0x4
7101dec788  b 0x7101decb7c
7101dec78c  ldrh w12,[x11, #0x398]
7101dec790  cmp w12,w19
7101dec794  b.ne 0x7101dec7a4
7101dec798  add x11,x11,#0x398
7101dec79c  mov w10,#0x4
7101dec7a0  b 0x7101decb7c
7101dec7a4  ldrh w12,[x11, #0x560]
7101dec7a8  cmp w12,w19
7101dec7ac  b.ne 0x7101dec7bc
7101dec7b0  add x11,x11,#0x560
7101dec7b4  mov w10,#0x4
7101dec7b8  b 0x7101decb7c
7101dec7bc  ldr x11,[x10, #0x30]
7101dec7c0  cbz x11,0x7101dec828
7101dec7c4  mov x9,x11
7101dec7c8  ldrh w12,[x9, #0x8]!
7101dec7cc  cmp w12,w19
7101dec7d0  b.ne 0x7101dec7e0
7101dec7d4  mov w10,#0x5
7101dec7d8  mov x11,x9
7101dec7dc  b 0x7101decb7c
7101dec7e0  ldrh w12,[x11, #0x1d0]
7101dec7e4  cmp w12,w19
7101dec7e8  b.ne 0x7101dec7f8
7101dec7ec  add x11,x11,#0x1d0
7101dec7f0  mov w10,#0x5
7101dec7f4  b 0x7101decb7c
7101dec7f8  ldrh w12,[x11, #0x398]
7101dec7fc  cmp w12,w19
7101dec800  b.ne 0x7101dec810
7101dec804  add x11,x11,#0x398
7101dec808  mov w10,#0x5
7101dec80c  b 0x7101decb7c
7101dec810  ldrh w12,[x11, #0x560]
7101dec814  cmp w12,w19
7101dec818  b.ne 0x7101dec828
7101dec81c  add x11,x11,#0x560
7101dec820  mov w10,#0x5
7101dec824  b 0x7101decb7c
7101dec828  ldr x11,[x10, #0x38]
7101dec82c  cbz x11,0x7101dec894
7101dec830  mov x9,x11
7101dec834  ldrh w12,[x9, #0x8]!
7101dec838  cmp w12,w19
7101dec83c  b.ne 0x7101dec84c
7101dec840  orr w10,wzr,#0x6
7101dec844  mov x11,x9
7101dec848  b 0x7101decb7c
7101dec84c  ldrh w12,[x11, #0x1d0]
7101dec850  cmp w12,w19
7101dec854  b.ne 0x7101dec864
7101dec858  add x11,x11,#0x1d0
7101dec85c  orr w10,wzr,#0x6
7101dec860  b 0x7101decb7c
7101dec864  ldrh w12,[x11, #0x398]
7101dec868  cmp w12,w19
7101dec86c  b.ne 0x7101dec87c
7101dec870  add x11,x11,#0x398
7101dec874  orr w10,wzr,#0x6
7101dec878  b 0x7101decb7c
7101dec87c  ldrh w12,[x11, #0x560]
7101dec880  cmp w12,w19
7101dec884  b.ne 0x7101dec894
7101dec888  add x11,x11,#0x560
7101dec88c  orr w10,wzr,#0x6
7101dec890  b 0x7101decb7c
7101dec894  ldr x11,[x10, #0x40]
7101dec898  cbz x11,0x7101dec900
7101dec89c  mov x9,x11
7101dec8a0  ldrh w12,[x9, #0x8]!
7101dec8a4  cmp w12,w19
7101dec8a8  b.ne 0x7101dec8b8
7101dec8ac  orr w10,wzr,#0x7
7101dec8b0  mov x11,x9
7101dec8b4  b 0x7101decb7c
7101dec8b8  ldrh w12,[x11, #0x1d0]
7101dec8bc  cmp w12,w19
7101dec8c0  b.ne 0x7101dec8d0
7101dec8c4  add x11,x11,#0x1d0
7101dec8c8  orr w10,wzr,#0x7
7101dec8cc  b 0x7101decb7c
7101dec8d0  ldrh w12,[x11, #0x398]
7101dec8d4  cmp w12,w19
7101dec8d8  b.ne 0x7101dec8e8
7101dec8dc  add x11,x11,#0x398
7101dec8e0  orr w10,wzr,#0x7
7101dec8e4  b 0x7101decb7c
7101dec8e8  ldrh w12,[x11, #0x560]
7101dec8ec  cmp w12,w19
7101dec8f0  b.ne 0x7101dec900
7101dec8f4  add x11,x11,#0x560
7101dec8f8  orr w10,wzr,#0x7
7101dec8fc  b 0x7101decb7c
7101dec900  ldr x11,[x10, #0x48]
7101dec904  cbz x11,0x7101dec96c
7101dec908  mov x9,x11
7101dec90c  ldrh w12,[x9, #0x8]!
7101dec910  cmp w12,w19
7101dec914  b.ne 0x7101dec924
7101dec918  mov w10,#0x8
7101dec91c  mov x11,x9
7101dec920  b 0x7101decb7c
7101dec924  ldrh w12,[x11, #0x1d0]
7101dec928  cmp w12,w19
7101dec92c  b.ne 0x7101dec93c
7101dec930  add x11,x11,#0x1d0
7101dec934  mov w10,#0x8
7101dec938  b 0x7101decb7c
7101dec93c  ldrh w12,[x11, #0x398]
7101dec940  cmp w12,w19
7101dec944  b.ne 0x7101dec954
7101dec948  add x11,x11,#0x398
7101dec94c  mov w10,#0x8
7101dec950  b 0x7101decb7c
7101dec954  ldrh w12,[x11, #0x560]
7101dec958  cmp w12,w19
7101dec95c  b.ne 0x7101dec96c
7101dec960  add x11,x11,#0x560
7101dec964  mov w10,#0x8
7101dec968  b 0x7101decb7c
7101dec96c  ldr x11,[x10, #0x50]
7101dec970  cbz x11,0x7101dec9d8
7101dec974  mov x9,x11
7101dec978  ldrh w12,[x9, #0x8]!
7101dec97c  cmp w12,w19
7101dec980  b.ne 0x7101dec990
7101dec984  mov w10,#0x9
7101dec988  mov x11,x9
7101dec98c  b 0x7101decb7c
7101dec990  ldrh w12,[x11, #0x1d0]
7101dec994  cmp w12,w19
7101dec998  b.ne 0x7101dec9a8
7101dec99c  add x11,x11,#0x1d0
7101dec9a0  mov w10,#0x9
7101dec9a4  b 0x7101decb7c
7101dec9a8  ldrh w12,[x11, #0x398]
7101dec9ac  cmp w12,w19
7101dec9b0  b.ne 0x7101dec9c0
7101dec9b4  add x11,x11,#0x398
7101dec9b8  mov w10,#0x9
7101dec9bc  b 0x7101decb7c
7101dec9c0  ldrh w12,[x11, #0x560]
7101dec9c4  cmp w12,w19
7101dec9c8  b.ne 0x7101dec9d8
7101dec9cc  add x11,x11,#0x560
7101dec9d0  mov w10,#0x9
7101dec9d4  b 0x7101decb7c
7101dec9d8  ldr x11,[x10, #0x58]
7101dec9dc  cbz x11,0x7101deca44
7101dec9e0  mov x9,x11
7101dec9e4  ldrh w12,[x9, #0x8]!
7101dec9e8  cmp w12,w19
7101dec9ec  b.ne 0x7101dec9fc
7101dec9f0  mov w10,#0xa
7101dec9f4  mov x11,x9
7101dec9f8  b 0x7101decb7c
7101dec9fc  ldrh w12,[x11, #0x1d0]
7101deca00  cmp w12,w19
7101deca04  b.ne 0x7101deca14
7101deca08  add x11,x11,#0x1d0
7101deca0c  mov w10,#0xa
7101deca10  b 0x7101decb7c
7101deca14  ldrh w12,[x11, #0x398]
7101deca18  cmp w12,w19
7101deca1c  b.ne 0x7101deca2c
7101deca20  add x11,x11,#0x398
7101deca24  mov w10,#0xa
7101deca28  b 0x7101decb7c
7101deca2c  ldrh w12,[x11, #0x560]
7101deca30  cmp w12,w19
7101deca34  b.ne 0x7101deca44
7101deca38  add x11,x11,#0x560
7101deca3c  mov w10,#0xa
7101deca40  b 0x7101decb7c
7101deca44  ldr x11,[x10, #0x60]
7101deca48  cbz x11,0x7101decab0
7101deca4c  mov x9,x11
7101deca50  ldrh w12,[x9, #0x8]!
7101deca54  cmp w12,w19
7101deca58  b.ne 0x7101deca68
7101deca5c  mov w10,#0xb
7101deca60  mov x11,x9
7101deca64  b 0x7101decb7c
7101deca68  ldrh w12,[x11, #0x1d0]
7101deca6c  cmp w12,w19
7101deca70  b.ne 0x7101deca80
7101deca74  add x11,x11,#0x1d0
7101deca78  mov w10,#0xb
7101deca7c  b 0x7101decb7c
7101deca80  ldrh w12,[x11, #0x398]
7101deca84  cmp w12,w19
7101deca88  b.ne 0x7101deca98
7101deca8c  add x11,x11,#0x398
7101deca90  mov w10,#0xb
7101deca94  b 0x7101decb7c
7101deca98  ldrh w12,[x11, #0x560]
7101deca9c  cmp w12,w19
7101decaa0  b.ne 0x7101decab0
7101decaa4  add x11,x11,#0x560
7101decaa8  mov w10,#0xb
7101decaac  b 0x7101decb7c
7101decab0  ldr x11,[x10, #0x68]
7101decab4  cbz x11,0x7101decb1c
7101decab8  mov x9,x11
7101decabc  ldrh w12,[x9, #0x8]!
7101decac0  cmp w12,w19
7101decac4  b.ne 0x7101decad4
7101decac8  orr w10,wzr,#0xc
7101decacc  mov x11,x9
7101decad0  b 0x7101decb7c
7101decad4  ldrh w12,[x11, #0x1d0]
7101decad8  cmp w12,w19
7101decadc  b.ne 0x7101decaec
7101decae0  add x11,x11,#0x1d0
7101decae4  orr w10,wzr,#0xc
7101decae8  b 0x7101decb7c
7101decaec  ldrh w12,[x11, #0x398]
7101decaf0  cmp w12,w19
7101decaf4  b.ne 0x7101decb04
7101decaf8  add x11,x11,#0x398
7101decafc  orr w10,wzr,#0xc
7101decb00  b 0x7101decb7c
7101decb04  ldrh w12,[x11, #0x560]
7101decb08  cmp w12,w19
7101decb0c  b.ne 0x7101decb1c
7101decb10  add x11,x11,#0x560
7101decb14  orr w10,wzr,#0xc
7101decb18  b 0x7101decb7c
7101decb1c  ldr x10,[x10, #0x70]
7101decb20  cbz x10,0x7101ded93c
7101decb24  mov x9,x10
7101decb28  ldrh w11,[x9, #0x8]!
7101decb2c  cmp w11,w19
7101decb30  b.ne 0x7101decb40
7101decb34  mov w10,#0xd
7101decb38  mov x11,x9
7101decb3c  b 0x7101decb7c
7101decb40  ldrh w11,[x10, #0x1d0]
7101decb44  cmp w11,w19
7101decb48  b.ne 0x7101decb54
7101decb4c  add x11,x10,#0x1d0
7101decb50  b 0x7101decb78
7101decb54  ldrh w11,[x10, #0x398]
7101decb58  cmp w11,w19
7101decb5c  b.ne 0x7101decb68
7101decb60  add x11,x10,#0x398
7101decb64  b 0x7101decb78
7101decb68  ldrh w11,[x10, #0x560]
7101decb6c  cmp w11,w19
7101decb70  b.ne 0x7101ded93c
7101decb74  add x11,x10,#0x560
7101decb78  mov w10,#0xd
7101decb7c  sub w9,w11,w9
7101decb80  mov w11,#0xee090000
7101decb84  lsr w9,w9,#0x3
7101decb88  mul w9,w9,w11
7101decb8c  and w11,w9,#0xff0000
7101decb90  lsr w9,w9,#0x10
7101decb94  bfm w11,w10,#0x18,#0x3
7101decb98  strb w10,[x25, #0x359]
7101decb9c  mov w10,#0x1
7101decba0  strb w10,[x25, #0x358]
7101decba4  strb w9,[x25, #0x35b]
7101decba8  strb w10,[x25, #0x35a]
7101decbac  ldr x8,[x8]
7101decbb0  mov w0,#0x10
7101decbb4  mov w1,#0x10
7101decbb8  orr w20,w11,#0x1
7101decbbc  add x22,x8,#0x38
7101decbc0  bl 0x710392e290
7101decbc4  cbnz x0,0x7101decc0c
7101decbc8  adrp x8,0x7105332000
7101decbcc  ldr x0,[x8, #0xf00]
7101decbd0  cbz x0,0x7101decc08
7101decbd4  mov w8,#0x10
7101decbd8  str wzr,[sp, #0x8]
7101decbdc  add x1,sp,#0x8
7101decbe0  str x8,[sp, #0x50]
7101decbe4  ldr x8,[x0]
7101decbe8  ldr x8,[x8, #0x30]
7101decbec  add x2,sp,#0x50
7101decbf0  blr x8
7101decbf4  tbz w0,#0x0,0x7101decc08
7101decbf8  mov w0,#0x10
7101decbfc  mov w1,#0x10
7101decc00  bl 0x710392e290
7101decc04  cbnz x0,0x7101decc0c
7101decc08  mov x0,xzr
7101decc0c  lsr w8,w20,#0x8
7101decc10  str x22,[x0]
7101decc14  strb w8,[x0, #0x8]
7101decc18  ldr x8,[x25, #0x350]
7101decc1c  str x0,[x25, #0x350]
7101decc20  cbz x8,0x7101decc2c
7101decc24  mov x0,x8
7101decc28  bl 0x710392eb40
7101decc2c  mov w8,#0x1
7101decc30  str w8,[sp]
7101decc34  ldr x8,[x23, #0xf98]
7101decc38  ldr x8,[x8]
7101decc3c  ldr x8,[x8, #0x30]
7101decc40  cmp w21,#0x177
7101decc44  b.cc 0x7101decc90
7101decc48  mov w9,#0xffffe890
7101decc4c  add w9,w19,w9
7101decc50  adrp x28,0x710532a000
7101decc54  add x28,x28,#0x878
7101decc58  cmp w9,#0x63
7101decc5c  b.hi 0x7101decca4
7101decc60  and x9,x9,#0xffff
7101decc64  mov w10,#0x50
7101decc68  madd x8,x9,x10,x8
7101decc6c  mov w10,#0x8cc8
7101decc70  movk w10,#0x8, LSL #16
7101decc74  mov w9,#0x8cc0
7101decc78  movk w9,#0x8, LSL #16
7101decc7c  ldrsh w10,[x8, x10, LSL #0x0]
7101decc80  add x8,x8,x9
7101decc84  cmn w10,#0x1
7101decc88  csel x28,x28,x8,eq
7101decc8c  b 0x7101decca4
7101decc90  mov w9,#0x50
7101decc94  umaddl x8,w19,w9,x8
7101decc98  mov w9,#0x1940
7101decc9c  movk w9,#0x1, LSL #16
7101decca0  add x28,x8,x9
7101decca4  ldrsh x8,[x28, #0x8]
7101decca8  strh w8,[x25, #0x400]
7101deccac  adrp x9,0x710532f000
7101deccb0  ldr x9,[x9, #0x730]
7101deccb4  ldr x26,[x9, #0x8]
7101deccb8  ldr x22,[x26, #0x1d8]
7101deccbc  cmn x8,#0x1
7101deccc0  b.eq 0x7101deccd0
7101deccc4  add x9,x22,x8, LSL #0x1
7101deccc8  ldrh w9,[x9, #0x60]
7101decccc  b 0x7101deccd4
7101deccd0  mov w9,#0xffffffff
7101deccd4  ldp x10,x11,[x22, #0x20]
7101deccd8  sub x11,x11,x10
7101deccdc  orr x12,xzr,#-0x3333333333333334
7101decce0  movk x12,#0xcccd
7101decce4  mov w24,#0x140
7101decce8  madd x10,x9,x24,x10
7101deccec  and x1,x8,#0xffff
7101deccf0  asr x11,x11,#0x6
7101deccf4  mul x11,x11,x12
7101deccf8  adrp x12,0x7105182000
7101deccfc  add x12,x12,#0xb08
7101decd00  cmp x11,x9
7101decd04  mov x0,x22
7101decd08  add x21,x25,#0x360
7101decd0c  csel x20,x10,x12,hi
7101decd10  bl 0x71032a9470
7101decd14  mov x2,x0
7101decd18  add x0,sp,#0x50
7101decd1c  mov x1,x22
7101decd20  add x27,sp,#0x50
7101decd24  bl 0x71032a9540
7101decd28  add x1,x27,#0x8
7101decd2c  adrp x0,0x7104464000
7101decd30  add x0,x0,#0x1d4
7101decd34  add x8,sp,#0x8
7101decd38  add x22,sp,#0x8
7101decd3c  bl 0x71003a4ca0
7101decd40  add x0,x25,#0x370
7101decd44  add x1,x22,#0x8
7101decd48  bl 0x710377a120
7101decd4c  ldrsh x9,[x25, #0x400]
7101decd50  ldr x8,[x26, #0x1d8]
7101decd54  mov w10,#0xffffffff
7101decd58  cmn x9,#0x1
7101decd5c  b.eq 0x7101decd6c
7101decd60  add x10,x8,x9, LSL #0x1
7101decd64  ldrh w12,[x10, #0x60]
7101decd68  b 0x7101decd70
7101decd6c  mov w12,w10
7101decd70  ldp x10,x11,[x8, #0x20]
7101decd74  sub x11,x11,x10
7101decd78  lsr x11,x11,#0x6
7101decd7c  mov w13,#0xcccd
7101decd80  movk w13,#0xcccc, LSL #16
7101decd84  mul w11,w11,w13
7101decd88  cmp w12,w11
7101decd8c  b.cs 0x7101decdcc
7101decd90  umaddl x12,w12,w24,x10
7101decd94  ldrh w12,[x12, #0x90]
7101decd98  cbz w12,0x7101decdcc
7101decd9c  ldr x0,[x25, #0x368]
7101decda0  fmov s0,0x3f800000
7101decda4  adrp x1,0x710425f000
7101decda8  add x1,x1,#0x9b8
7101decdac  bl 0x7103778300
7101decdb0  ldrh w2,[x20, #0x90]
7101decdb4  add x1,x25,#0x3d0
7101decdb8  mov x0,x21
7101decdbc  bl 0x7101e040e0
7101decdc0  mov w8,#0x1
7101decdc4  strb w8,[x25, #0x410]
7101decdc8  b 0x7101decea0
7101decdcc  cmn w9,#0x1
7101decdd0  b.eq 0x7101dece28
7101decdd4  cmp w9,#0x7cf
7101decdd8  b.gt 0x7101dece28
7101decddc  add x9,x8,x9, LSL #0x1
7101decde0  ldrh w9,[x9, #0x60]
7101decde4  cmp w11,w9
7101decde8  b.ls 0x7101dece28
7101decdec  add x8,x8,x9, LSL #0x1
7101decdf0  ldrh w8,[x8, #0x1000]
7101decdf4  cmp w11,w8
7101decdf8  b.ls 0x7101dece28
7101decdfc  mov w9,#0x140
7101dece00  mul x8,x8,x9
7101dece04  ldrsh w8,[x10, x8, LSL #0x0]
7101dece08  cmn w8,#0x1
7101dece0c  b.eq 0x7101dece28
7101dece10  ldr x0,[x25, #0x368]
7101dece14  fmov s0,0x3f800000
7101dece18  adrp x1,0x71043be000
7101dece1c  add x1,x1,#0xb83
7101dece20  bl 0x7103778300
7101dece24  b 0x7101decea0
7101dece28  ldrh w2,[x20, #0x6a]
7101dece2c  add x1,x25,#0x3a0
7101dece30  mov x0,x21
7101dece34  bl 0x7101e040e0
7101dece38  ldrb w8,[x20, #0x6c]
7101dece3c  cmp w8,#0x3
7101dece40  b.hi 0x7101dece9c
7101dece44  adrp x9,0x71044fb000
7101dece48  add x9,x9,#0x7a0
7101dece4c  ldrsw x8,[x9, x8, LSL #0x2]
7101dece50  add x8,x8,x9
7101dece54  br x8
7101dece58  ldr x0,[x25, #0x368]
7101dece5c  adrp x1,0x7104281000
7101dece60  add x1,x1,#0x9c
7101dece64  b 0x7101dece94
7101dece68  ldr x0,[x25, #0x368]
7101dece6c  adrp x1,0x710436c000
7101dece70  add x1,x1,#0x98a
7101dece74  b 0x7101dece94
7101dece78  ldr x0,[x25, #0x368]
7101dece7c  adrp x1,0x710437c000
7101dece80  add x1,x1,#0xb20
7101dece84  b 0x7101dece94
7101dece88  ldr x0,[x25, #0x368]
7101dece8c  adrp x1,0x7104433000
7101dece90  add x1,x1,#0x649
7101dece94  fmov s0,0x3f800000
7101dece98  bl 0x7103778300
7101dece9c  strb wzr,[x25, #0x410]
7101decea0  ldrh w8,[x25, #0x400]
7101decea4  orr w20,wzr,#0xffff
7101decea8  cmp x8,x20
7101deceac  b.eq 0x7101decfa4
7101deceb0  ldr x9,[x23, #0xf98]
7101deceb4  ldr x9,[x9]
7101deceb8  ldr x21,[x9, #0x20]
7101decebc  mov x0,x21
7101decec0  ldr x9,[x0, #0x28]!
7101decec4  ldr x10,[x21, #0x30]
7101decec8  sub x11,x10,x9
7101dececc  asr x10,x11,#0x3
7101deced0  cmp w10,#0x1
7101deced4  b.lt 0x7101decfb8
7101deced8  mov x12,xzr
7101decedc  sbfx x11,x11,#0x3,#0x20
7101decee0  mov x13,x9
7101decee4  cmp x10,x12
7101decee8  b.ls 0x7101ded95c
7101deceec  ldrh w14,[x13]
7101decef0  cmp w14,w8
7101decef4  b.eq 0x7101decf0c
7101decef8  add x12,x12,#0x1
7101decefc  add x13,x13,#0x8
7101decf00  cmp x12,x11
7101decf04  b.lt 0x7101decee4
7101decf08  b 0x7101decfac
7101decf0c  tbnz w12,#0x1f,0x7101decfac
7101decf10  mov x12,xzr
7101decf14  cmp x10,x12
7101decf18  b.ls 0x7101ded95c
7101decf1c  ldrh w13,[x9]
7101decf20  cmp w13,w8
7101decf24  b.eq 0x7101decf3c
7101decf28  add x12,x12,#0x1
7101decf2c  add x9,x9,#0x8
7101decf30  cmp x12,x11
7101decf34  b.lt 0x7101decf14
7101decf38  b 0x7101decfac
7101decf3c  tbnz w12,#0x1f,0x7101decfac
7101decf40  adrp x9,0x710532f000
7101decf44  ldr x9,[x9, #0x730]
7101decf48  ldr x9,[x9, #0x8]
7101decf4c  ldr x0,[x9, #0x1d8]
7101decf50  mov x1,x8
7101decf54  bl 0x71032a9470
7101decf58  mov x1,x0
7101decf5c  add x0,x21,#0x8
7101decf60  orr w2,wzr,#0x18
7101decf64  bl 0x71032412a0
7101decf68  ldrh w8,[x25, #0x400]
7101decf6c  tbz w0,#0x0,0x7101decfac
7101decf70  orr w9,wzr,#0xffff
7101decf74  cmp w8,w9
7101decf78  b.eq 0x7101decfa4
7101decf7c  add x1,x25,#0x380
7101decf80  orr w2,wzr,#0x3
7101decf84  mov w3,#0x1
7101decf88  mov x0,x8
7101decf8c  bl 0x71025ae1b0
7101decf90  ldrh w0,[x25, #0x400]
7101decf94  add x1,x25,#0x390
7101decf98  orr w2,wzr,#0x3
7101decf9c  mov w3,#0x1
7101decfa0  bl 0x71025ae1b0
7101decfa4  strh w20,[x25, #0x400]
7101decfa8  b 0x7101ded024
7101decfac  orr w9,wzr,#0xffff
7101decfb0  cmp w8,w9
7101decfb4  b.eq 0x7101ded024
7101decfb8  ldr x9,[x23, #0xf98]
7101decfbc  ldr x9,[x9]
7101decfc0  ldr x0,[x9, #0x20]
7101decfc4  mov x9,x0
7101decfc8  ldr x10,[x9, #0x28]!
7101decfcc  ldr x11,[x0, #0x30]
7101decfd0  sub x13,x11,x10
7101decfd4  asr x11,x13,#0x3
7101decfd8  cmp w11,#0x1
7101decfdc  b.lt 0x7101ded014
7101decfe0  mov x12,xzr
7101decfe4  sbfx x13,x13,#0x3,#0x20
7101decfe8  cmp x11,x12
7101decfec  b.ls 0x7101ded960
7101decff0  ldrh w14,[x10]
7101decff4  cmp w14,w8
7101decff8  b.eq 0x7101ded010
7101decffc  add x12,x12,#0x1
7101ded000  add x10,x10,#0x8
7101ded004  cmp x12,x13
7101ded008  b.lt 0x7101decfe8
7101ded00c  b 0x7101ded014
7101ded010  tbz w12,#0x1f,0x7101ded024
7101ded014  mov w1,#0x1
7101ded018  mov w3,#0x2
7101ded01c  mov x2,x8
7101ded020  bl 0x710259c150
7101ded024  adrp x8,0x710532f000
7101ded028  ldr x8,[x8, #0x730]
7101ded02c  ldr x20,[x8, #0x8]
7101ded030  ldr x22,[x28, #0x18]
7101ded034  mov x1,x22
7101ded038  add x23,x25,#0x448
7101ded03c  ldr x0,[x20, #0x208]
7101ded040  bl 0x71032a59b0
7101ded044  ldr x24,[x20, #0x218]
7101ded048  and w8,w0,#0xffff
7101ded04c  cmp w8,#0x11c
7101ded050  stur x28,[x29, #-0x68]
7101ded054  b.hi 0x7101ded06c
7101ded058  adrp x8,0x7104547000
7101ded05c  add x8,x8,#0xdc0
7101ded060  sxth x9,w0
7101ded064  ldr x1,[x8, x9, LSL #0x3]
7101ded068  b 0x7101ded078
7101ded06c  mov x1,#0xcf
7101ded070  movk x1,#0x7f90, LSL #16
7101ded074  movk x1,#0x4, LSL #32
7101ded078  ldr x0,[x24, #0x8]
7101ded07c  mov x26,#0xe86
7101ded080  movk x26,#0x30ff, LSL #16
7101ded084  mov x28,#0x5200000000000000
7101ded088  movk x26,#0x15, LSL #32
7101ded08c  bl 0x71032a0a40
7101ded090  mov x2,x0
7101ded094  add x0,sp,#0x50
7101ded098  mov x1,x24
7101ded09c  add x21,sp,#0x50
7101ded0a0  bl 0x71032a0b40
7101ded0a4  add x1,x21,#0x8
7101ded0a8  adrp x0,0x71042c3000
7101ded0ac  add x0,x0,#0x4aa
7101ded0b0  add x8,sp,#0x8
7101ded0b4  add x21,sp,#0x8
7101ded0b8  bl 0x71003a4ca0
7101ded0bc  add x1,x21,#0x8
7101ded0c0  mov x0,x23
7101ded0c4  bl 0x710377a120
7101ded0c8  adrp x8,0x710532f000
7101ded0cc  ldr x8,[x8, #0x730]
7101ded0d0  ldr x8,[x8, #0x8]
7101ded0d4  ldr x8,[x8, #0x208]
7101ded0d8  ldr x0,[x8, #0x8]
7101ded0dc  mov x1,x26
7101ded0e0  bl 0x71032a3d90
7101ded0e4  and x10,x0,#-0x100000000000000
7101ded0e8  and x9,x0,#0xffffffffff
7101ded0ec  and x8,x22,#0xffffffffff
7101ded0f0  cmp x10,x28
7101ded0f4  and x11,x22,#-0x100000000000000
7101ded0f8  ccmp x9,#0x0,#0x4,eq
7101ded0fc  b.ne 0x7101ded2a8
7101ded100  ldr w21,[sp]
7101ded104  cmp x10,x28
7101ded108  cset w10,eq
7101ded10c  cmp x9,#0x0
7101ded110  cset w9,ne
7101ded114  cmp x8,#0x0
7101ded118  cset w8,ne
7101ded11c  cmp x11,x28
7101ded120  and w9,w10,w9
7101ded124  cset w10,eq
7101ded128  and w8,w8,w10
7101ded12c  eor w8,w8,w9
7101ded130  cmp w8,#0x1
7101ded134  b.eq 0x7101ded2c4
7101ded138  ldr x8,[x25, #0x460]
7101ded13c  ldr x0,[x8, #0x10]
7101ded140  cbz x0,0x7101ded158
7101ded144  add x1,sp,#0x50
7101ded148  mov w2,wzr
7101ded14c  mov w3,wzr
7101ded150  str wzr,[sp, #0x50]
7101ded154  bl 0x71037a2270
7101ded158  ldr x8,[x25, #0x470]
7101ded15c  ldr x0,[x8, #0x10]
7101ded160  cbz x0,0x7101ded178
7101ded164  add x1,sp,#0x50
7101ded168  mov w2,wzr
7101ded16c  mov w3,wzr
7101ded170  str wzr,[sp, #0x50]
7101ded174  bl 0x71037a2270
7101ded178  ldr x8,[x25, #0x480]
7101ded17c  ldr x0,[x8, #0x10]
7101ded180  cbz x0,0x7101ded198
7101ded184  add x1,sp,#0x50
7101ded188  mov w2,wzr
7101ded18c  mov w3,wzr
7101ded190  str wzr,[sp, #0x50]
7101ded194  bl 0x71037a2270
7101ded198  ldr x8,[x25, #0x490]
7101ded19c  ldr x0,[x8, #0x10]
7101ded1a0  cbz x0,0x7101ded1b8
7101ded1a4  add x1,sp,#0x50
7101ded1a8  mov w2,wzr
7101ded1ac  mov w3,wzr
7101ded1b0  str wzr,[sp, #0x50]
7101ded1b4  bl 0x71037a2270
7101ded1b8  ldr x8,[x25, #0x4a0]
7101ded1bc  ldr x0,[x8, #0x10]
7101ded1c0  cbz x0,0x7101ded1d8
7101ded1c4  add x1,sp,#0x50
7101ded1c8  mov w2,wzr
7101ded1cc  mov w3,wzr
7101ded1d0  str wzr,[sp, #0x50]
7101ded1d4  bl 0x71037a2270
7101ded1d8  ldr x8,[x25, #0x4b0]
7101ded1dc  ldr x0,[x8, #0x10]
7101ded1e0  cbz x0,0x7101ded1f8
7101ded1e4  add x1,sp,#0x50
7101ded1e8  mov w2,wzr
7101ded1ec  mov w3,wzr
7101ded1f0  str wzr,[sp, #0x50]
7101ded1f4  bl 0x71037a2270
7101ded1f8  ldr x8,[x25, #0x4c0]
7101ded1fc  ldr x0,[x8, #0x10]
7101ded200  cbz x0,0x7101ded218
7101ded204  add x1,sp,#0x50
7101ded208  mov w2,wzr
7101ded20c  mov w3,wzr
7101ded210  str wzr,[sp, #0x50]
7101ded214  bl 0x71037a2270
7101ded218  ldr x8,[x25, #0x4d0]
7101ded21c  ldr x0,[x8, #0x10]
7101ded220  cbz x0,0x7101ded238
7101ded224  add x1,sp,#0x50
7101ded228  mov w2,wzr
7101ded22c  mov w3,wzr
7101ded230  str wzr,[sp, #0x50]
7101ded234  bl 0x71037a2270
7101ded238  ldr x8,[x25, #0x4e0]
7101ded23c  ldr x0,[x8, #0x10]
7101ded240  cbz x0,0x7101ded258
7101ded244  add x1,sp,#0x50
7101ded248  mov w2,wzr
7101ded24c  mov w3,wzr
7101ded250  str wzr,[sp, #0x50]
7101ded254  bl 0x71037a2270
7101ded258  ldr x8,[x25, #0x4f0]
7101ded25c  ldr x0,[x8, #0x10]
7101ded260  cbz x0,0x7101ded278
7101ded264  add x1,sp,#0x50
7101ded268  mov w2,wzr
7101ded26c  mov w3,wzr
7101ded270  str wzr,[sp, #0x50]
7101ded274  bl 0x71037a2270
7101ded278  fmov s8,0x3f800000
7101ded27c  ldr x0,[x25, #0x440]
7101ded280  adrp x1,0x7104292000
7101ded284  add x1,x1,#0x179
7101ded288  mov v0.16B,v8.16B
7101ded28c  bl 0x7103778300
7101ded290  ldr x0,[x25, #0x440]
7101ded294  mov v0.16B,v8.16B
7101ded298  adrp x1,0x71043cf000
7101ded29c  add x1,x1,#0x924
7101ded2a0  bl 0x7103778300
7101ded2a4  b 0x7101ded3b0
7101ded2a8  ldr w21,[sp]
7101ded2ac  cmp x11,x28
7101ded2b0  b.ne 0x7101ded104
7101ded2b4  cbz x8,0x7101ded104
7101ded2b8  eor x8,x22,x0
7101ded2bc  tst x8,#0xffffffffff
7101ded2c0  b.eq 0x7101ded138
7101ded2c4  stp xzr,xzr,[sp, #0x58]
7101ded2c8  add x0,sp,#0x8
7101ded2cc  str xzr,[sp, #0x50]
7101ded2d0  ldr x1,[x20, #0x208]
7101ded2d4  mov x2,x22
7101ded2d8  bl 0x71032a3e90
7101ded2dc  add x0,sp,#0x8
7101ded2e0  add x1,sp,#0x50
7101ded2e4  bl 0x71032a5330
7101ded2e8  stp xzr,xzr,[sp, #0x10]
7101ded2ec  sub x0,x29,#0x88
7101ded2f0  str xzr,[sp, #0x8]
7101ded2f4  ldr x1,[x20, #0x208]
7101ded2f8  mov x2,x22
7101ded2fc  bl 0x71032a40d0
7101ded300  sub x0,x29,#0x88
7101ded304  add x1,sp,#0x8
7101ded308  bl 0x71032a5330
7101ded30c  add x1,x25,#0x458
7101ded310  add x0,sp,#0x50
7101ded314  bl 0x7101e044a0
7101ded318  add x1,x25,#0x4a8
7101ded31c  add x0,sp,#0x8
7101ded320  bl 0x7101e044a0
7101ded324  ldr x0,[x20, #0x208]
7101ded328  mov x1,x22
7101ded32c  bl 0x71032a50f0
7101ded330  mov w23,w0
7101ded334  ldr x0,[x20, #0x208]
7101ded338  mov x1,x22
7101ded33c  bl 0x71032a5210
7101ded340  fmov s8,0x3f800000
7101ded344  mov w22,w0
7101ded348  ldr x0,[x25, #0x440]
7101ded34c  adrp x8,0x710435b000
7101ded350  add x8,x8,#0xdc9
7101ded354  adrp x9,0x710433a000
7101ded358  add x9,x9,#0x7af
7101ded35c  tst w23,#0x1
7101ded360  csel x1,x9,x8,ne
7101ded364  mov v0.16B,v8.16B
7101ded368  bl 0x7103778300
7101ded36c  ldr x0,[x25, #0x440]
7101ded370  mov v0.16B,v8.16B
7101ded374  adrp x8,0x71043e0000
7101ded378  add x8,x8,#0x7a5
7101ded37c  adrp x9,0x7104319000
7101ded380  add x9,x9,#0x45d
7101ded384  tst w22,#0x1
7101ded388  csel x1,x9,x8,ne
7101ded38c  bl 0x7103778300
7101ded390  ldr x0,[sp, #0x8]
7101ded394  cbz x0,0x7101ded3a0
7101ded398  str x0,[sp, #0x10]
7101ded39c  bl 0x710392eb40
7101ded3a0  ldr x0,[sp, #0x50]
7101ded3a4  cbz x0,0x7101ded3b0
7101ded3a8  str x0,[sp, #0x58]
7101ded3ac  bl 0x710392eb40
7101ded3b0  ldr w1,[sp, #0x4]
7101ded3b4  mov w0,w19
7101ded3b8  mov w2,wzr
7101ded3bc  bl 0x71025ca3c0
7101ded3c0  cmp w0,#0x0
7101ded3c4  csinc w8,w0,wzr,ne
7101ded3c8  fmov s8,0x3f800000
7101ded3cc  ucvtf s9,w8
7101ded3d0  fmov s10,wzr
7101ded3d4  mov x20,xzr
7101ded3d8  eor w26,w21,#0x1
7101ded3dc  adrp x8,0x710532f000
7101ded3e0  ldr x8,[x8, #0x730]
7101ded3e4  ldr x8,[x8, #0x8]
7101ded3e8  add x19,x25,x20
7101ded3ec  ldr x23,[x19, #0x118]
7101ded3f0  mov x1,x23
7101ded3f4  ldr x24,[x8, #0x208]
7101ded3f8  mov x0,x24
7101ded3fc  bl 0x71032a44b0
7101ded400  lsr w8,w0,#0x1f
7101ded404  and x9,x23,#-0x100000000000000
7101ded408  eor w27,w8,#0x1
7101ded40c  and x8,x23,#0xffffffffff
7101ded410  cmp x9,x28
7101ded414  mov w22,w0
7101ded418  ccmp x8,#0x0,#0x4,eq
7101ded41c  b.ne 0x7101ded430
7101ded420  ldr x0,[x19, #0x100]
7101ded424  adrp x1,0x71043cf000
7101ded428  add x1,x1,#0x936
7101ded42c  b 0x7101ded48c
7101ded430  ldr x0,[x24, #0x8]
7101ded434  mov x1,#0xe86
7101ded438  movk x1,#0x30ff, LSL #16
7101ded43c  movk x1,#0x15, LSL #32
7101ded440  bl 0x71032a3d90
7101ded444  tst x0,#0xffffffffff
7101ded448  and x9,x0,#-0x100000000000000
7101ded44c  cset w8,ne
7101ded450  cmp x9,x28
7101ded454  cset w9,eq
7101ded458  and w8,w9,w8
7101ded45c  eor x9,x23,x0
7101ded460  ldr x0,[x19, #0x100]
7101ded464  tst x9,#0xffffffffff
7101ded468  cset w9,eq
7101ded46c  cmp w8,#0x1
7101ded470  csel w8,w8,w9,ne
7101ded474  cmp w8,#0x0
7101ded478  adrp x8,0x7104292000
7101ded47c  add x8,x8,#0x189
7101ded480  adrp x9,0x7104319000
7101ded484  add x9,x9,#0x33d
7101ded488  csel x1,x9,x8,ne
7101ded48c  mov v0.16B,v8.16B
7101ded490  bl 0x7103778300
7101ded494  cmp w27,#0x0
7101ded498  cset w8,eq
7101ded49c  orr w8,w26,w8
7101ded4a0  tbnz w8,#0x0,0x7101ded680
7101ded4a4  ldrb w8,[x25, #0x358]
7101ded4a8  cbz w8,0x7101ded680
7101ded4ac  ldrb w8,[x25, #0x359]
7101ded4b0  cmp w8,w22, UXTB 
7101ded4b4  b.ne 0x7101ded680
7101ded4b8  adrp x8,0x710532f000
7101ded4bc  ldr x8,[x8, #0x730]
7101ded4c0  ldr x8,[x8, #0x8]
7101ded4c4  ldr x8,[x8, #0x208]
7101ded4c8  ldr x0,[x8, #0x8]
7101ded4cc  ldr x21,[x19, #0x118]
7101ded4d0  mov x1,#0xe86
7101ded4d4  movk x1,#0x30ff, LSL #16
7101ded4d8  movk x1,#0x15, LSL #32
7101ded4dc  bl 0x71032a3d90
7101ded4e0  and x10,x0,#-0x100000000000000
7101ded4e4  and x9,x0,#0xffffffffff
7101ded4e8  and x8,x21,#0xffffffffff
7101ded4ec  cmp x10,x28
7101ded4f0  ccmp x9,#0x0,#0x4,eq
7101ded4f4  b.ne 0x7101ded818
7101ded4f8  and x11,x21,#-0x100000000000000
7101ded4fc  cmp x10,x28
7101ded500  cset w10,eq
7101ded504  cmp x9,#0x0
7101ded508  cset w9,ne
7101ded50c  cmp x8,#0x0
7101ded510  cset w8,ne
7101ded514  cmp x11,x28
7101ded518  and w9,w10,w9
7101ded51c  cset w10,eq
7101ded520  and w8,w8,w10
7101ded524  eor w8,w8,w9
7101ded528  cmp w8,#0x1
7101ded52c  b.ne 0x7101ded544
7101ded530  ldr x0,[x19, #0x100]
7101ded534  mov v0.16B,v8.16B
7101ded538  adrp x1,0x710439d000
7101ded53c  add x1,x1,#0x92f
7101ded540  bl 0x7103778300
7101ded544  ldr x9,[x25, #0x350]
7101ded548  mov v0.16B,v10.16B
7101ded54c  cbz x9,0x7101ded668
7101ded550  ldrb w8,[x25, #0x35a]
7101ded554  mov v0.16B,v10.16B
7101ded558  cbz w8,0x7101ded668
7101ded55c  ldrb w8,[x9, #0x8]
7101ded560  mov v0.16B,v10.16B
7101ded564  cmp x8,#0xd
7101ded568  b.hi 0x7101ded668
7101ded56c  ldr x9,[x9]
7101ded570  ldr x10,[x9, #0x8]
7101ded574  ldrb w9,[x10, #0x388]
7101ded578  mov v0.16B,v10.16B
7101ded57c  cbz w9,0x7101ded668
7101ded580  ldrb w9,[x25, #0x35b]
7101ded584  mov v0.16B,v10.16B
7101ded588  cmp w9,#0x3
7101ded58c  b.hi 0x7101ded668
7101ded590  add x8,x10,x8, LSL #0x3
7101ded594  ldr x8,[x8, #0x8]
7101ded598  mov v0.16B,v10.16B
7101ded59c  cbz x8,0x7101ded668
7101ded5a0  mov w10,#0x1c8
7101ded5a4  madd x9,x9,x10,x8
7101ded5a8  ldr x8,[x9, #0x20]
7101ded5ac  ldr x9,[x9, #0x10]
7101ded5b0  mov v0.16B,v8.16B
7101ded5b4  cmp x8,x9
7101ded5b8  b.eq 0x7101ded668
7101ded5bc  mov w12,#0xf7cf
7101ded5c0  movk w12,#0xe353, LSL #16
7101ded5c4  and x10,x9,#0xffffffff
7101ded5c8  asr x11,x9,#0x20
7101ded5cc  mov x13,x12
7101ded5d0  mul x12,x11,x12
7101ded5d4  mul x13,x10,x13
7101ded5d8  add x12,x12,x13, LSR #0x20
7101ded5dc  mov w13,#0x9ba5
7101ded5e0  movk w13,#0x20c4, LSL #16
7101ded5e4  mul x11,x11,x13
7101ded5e8  mul x10,x10,x13
7101ded5ec  add x10,x10,w12, UXTW 
7101ded5f0  add x11,x11,x12, ASR #0x20
7101ded5f4  add x10,x11,x10, LSR #0x20
7101ded5f8  asr x10,x10,#0x7
7101ded5fc  add x9,x10,x9, LSR #0x3f
7101ded600  mov v0.16B,v10.16B
7101ded604  cmp x9,#0x1
7101ded608  b.lt 0x7101ded668
7101ded60c  mov w12,#0xf7cf
7101ded610  movk w12,#0xe353, LSL #16
7101ded614  and x10,x8,#0xffffffff
7101ded618  asr x11,x8,#0x20
7101ded61c  mov x13,x12
7101ded620  mul x12,x11,x12
7101ded624  mul x13,x10,x13
7101ded628  add x12,x12,x13, LSR #0x20
7101ded62c  mov w13,#0x9ba5
7101ded630  movk w13,#0x20c4, LSL #16
7101ded634  mul x11,x11,x13
7101ded638  mul x10,x10,x13
7101ded63c  scvtf s0,x9
7101ded640  add x10,x10,w12, UXTW 
7101ded644  add x11,x11,x12, ASR #0x20
7101ded648  add x10,x11,x10, LSR #0x20
7101ded64c  asr x10,x10,#0x7
7101ded650  add x8,x10,x8, LSR #0x3f
7101ded654  scvtf s1,x8
7101ded658  fdiv s0,s1,s0
7101ded65c  fmin s1,s0,s8
7101ded660  fcmp s0,#0.0
7101ded664  fcsel s0,s10,s1,mi
7101ded668  ldr x8,[x19, #0x110]
7101ded66c  ldr x8,[x8]
7101ded670  cbz x8,0x7101ded8c4
7101ded674  orr w9,wzr,#0x3f800000
7101ded678  fmax s0,s0,s10
7101ded67c  b 0x7101ded8b0
7101ded680  ldr x23,[x19, #0x118]
7101ded684  and x8,x23,#-0x100000000000000
7101ded688  cmp x8,x28
7101ded68c  b.ne 0x7101ded8c4
7101ded690  and x8,x23,#0xffffffffff
7101ded694  cbz x8,0x7101ded8c4
7101ded698  ldur x8,[x29, #-0x68]
7101ded69c  ldr x8,[x8, #0x18]
7101ded6a0  and x9,x8,#-0x100000000000000
7101ded6a4  cmp x9,x28
7101ded6a8  b.ne 0x7101ded6c0
7101ded6ac  and x9,x8,#0xffffffffff
7101ded6b0  cbz x9,0x7101ded6c0
7101ded6b4  eor x8,x23,x8
7101ded6b8  tst x8,#0xffffffffff
7101ded6bc  b.eq 0x7101ded7a0
7101ded6c0  adrp x8,0x710532f000
7101ded6c4  ldr x21,[x8, #0x730]
7101ded6c8  ldr x8,[x21, #0x8]
7101ded6cc  ldr x8,[x8, #0x208]
7101ded6d0  ldr x0,[x8, #0x8]
7101ded6d4  mov x1,#0xe86
7101ded6d8  movk x1,#0x30ff, LSL #16
7101ded6dc  movk x1,#0x15, LSL #32
7101ded6e0  bl 0x71032a3d90
7101ded6e4  tst x0,#0xffffffffff
7101ded6e8  and x9,x0,#-0x100000000000000
7101ded6ec  cset w8,ne
7101ded6f0  cmp x9,x28
7101ded6f4  cset w9,eq
7101ded6f8  and w8,w9,w8
7101ded6fc  eor x9,x23,x0
7101ded700  tst x9,#0xffffffffff
7101ded704  cset w9,eq
7101ded708  cmp w8,#0x1
7101ded70c  csel w8,w8,w9,ne
7101ded710  cbz w27,0x7101ded8c4
7101ded714  tbnz w8,#0x0,0x7101ded8c4
7101ded718  and w8,w22,#0xff
7101ded71c  cmp w8,#0xd
7101ded720  b.hi 0x7101ded8c4
7101ded724  ldur x9,[x29, #-0x68]
7101ded728  add x8,x9,w8, UXTW  #0x1
7101ded72c  ldrh w0,[x25, #0x510]
7101ded730  ldrh w24,[x8, #0x20]
7101ded734  mov x1,x23
7101ded738  bl 0x71025ca280
7101ded73c  mov w22,w0
7101ded740  cbnz w24,0x7101ded748
7101ded744  tbz w22,#0x0,0x7101ded8c4
7101ded748  ldr x8,[x21, #0x8]
7101ded74c  ldr x8,[x8, #0x208]
7101ded750  ldr x0,[x8, #0x8]
7101ded754  ldr x23,[x19, #0x118]
7101ded758  mov x1,#0xe86
7101ded75c  movk x1,#0x30ff, LSL #16
7101ded760  movk x1,#0x15, LSL #32
7101ded764  bl 0x71032a3d90
7101ded768  and x10,x0,#-0x100000000000000
7101ded76c  and x9,x0,#0xffffffffff
7101ded770  and x8,x23,#0xffffffffff
7101ded774  cmp x10,x28
7101ded778  b.ne 0x7101ded838
7101ded77c  cbz x9,0x7101ded838
7101ded780  and x11,x23,#-0x100000000000000
7101ded784  cmp x11,x28
7101ded788  b.ne 0x7101ded83c
7101ded78c  cbz x8,0x7101ded83c
7101ded790  eor x8,x23,x0
7101ded794  tst x8,#0xffffffffff
7101ded798  b.ne 0x7101ded870
7101ded79c  b 0x7101ded894
7101ded7a0  adrp x8,0x710532f000
7101ded7a4  ldr x8,[x8, #0x730]
7101ded7a8  ldr x8,[x8, #0x8]
7101ded7ac  ldr x8,[x8, #0x208]
7101ded7b0  ldr x0,[x8, #0x8]
7101ded7b4  mov x1,#0xe86
7101ded7b8  movk x1,#0x30ff, LSL #16
7101ded7bc  movk x1,#0x15, LSL #32
7101ded7c0  bl 0x71032a3d90
7101ded7c4  tst x0,#0xffffffffff
7101ded7c8  and x9,x0,#-0x100000000000000
7101ded7cc  cset w8,ne
7101ded7d0  cmp x9,x28
7101ded7d4  cset w9,eq
7101ded7d8  and w8,w9,w8
7101ded7dc  eor x9,x23,x0
7101ded7e0  ldr x0,[x19, #0x100]
7101ded7e4  tst x9,#0xffffffffff
7101ded7e8  cset w9,eq
7101ded7ec  cmp w8,#0x1
7101ded7f0  csel w8,w8,w9,ne
7101ded7f4  mov v0.16B,v8.16B
7101ded7f8  adrp x9,0x71043ad000
7101ded7fc  add x9,x9,#0xd1a
7101ded800  cmp w8,#0x0
7101ded804  adrp x8,0x71042b4000
7101ded808  add x8,x8,#0x835
7101ded80c  csel x1,x9,x8,ne
7101ded810  bl 0x7103778300
7101ded814  b 0x7101ded8c4
7101ded818  and x11,x21,#-0x100000000000000
7101ded81c  cmp x11,x28
7101ded820  b.ne 0x7101ded4fc
7101ded824  cbz x8,0x7101ded4fc
7101ded828  eor x8,x21,x0
7101ded82c  tst x8,#0xffffffffff
7101ded830  b.ne 0x7101ded530
7101ded834  b 0x7101ded544
7101ded838  and x11,x23,#-0x100000000000000
7101ded83c  cmp x10,x28
7101ded840  cset w10,eq
7101ded844  cmp x9,#0x0
7101ded848  cset w9,ne
7101ded84c  cmp x8,#0x0
7101ded850  cset w8,ne
7101ded854  cmp x11,x28
7101ded858  and w9,w10,w9
7101ded85c  cset w10,eq
7101ded860  and w8,w8,w10
7101ded864  eor w8,w8,w9
7101ded868  cmp w8,#0x1
7101ded86c  b.ne 0x7101ded894
7101ded870  ldr x0,[x19, #0x100]
7101ded874  mov v0.16B,v8.16B
7101ded878  tst w22,#0x1
7101ded87c  adrp x8,0x710439d000
7101ded880  add x8,x8,#0x92f
7101ded884  adrp x9,0x71043be000
7101ded888  add x9,x9,#0xb9e
7101ded88c  csel x1,x9,x8,ne
7101ded890  bl 0x7103778300
7101ded894  ldr x8,[x19, #0x110]
7101ded898  ldr x8,[x8]
7101ded89c  cbz x8,0x7101ded8c4
7101ded8a0  ucvtf s0,w24
7101ded8a4  fdiv s0,s0,s9
7101ded8a8  fmin s0,s0,s8
7101ded8ac  orr w9,wzr,#0x3f800000
7101ded8b0  str w9,[x8, #0x4c]
7101ded8b4  ldrb w9,[x8, #0x58]
7101ded8b8  orr w9,w9,#0x10
7101ded8bc  str s0,[x8, #0x48]
7101ded8c0  strb w9,[x8, #0x58]
7101ded8c4  add x20,x20,#0x28
7101ded8c8  cmp x20,#0x258
7101ded8cc  b.ne 0x7101ded3dc
7101ded8d0  mov w8,#0xffffffff
7101ded8d4  str x8,[x25, #0xe0]
7101ded8d8  str w8,[x25, #0xe8]
7101ded8dc  mov w8,#0x1
7101ded8e0  stp xzr,xzr,[x25, #0x10]
7101ded8e4  str wzr,[x25, #0xdc]
7101ded8e8  stur xzr,[x25, #0xd4]
7101ded8ec  stur xzr,[x25, #0xcc]
7101ded8f0  stur xzr,[x25, #0xc4]
7101ded8f4  stur xzr,[x25, #0xbc]
7101ded8f8  stur xzr,[x25, #0xb4]
7101ded8fc  stur xzr,[x25, #0xac]
7101ded900  stur xzr,[x25, #0xa4]
7101ded904  stur xzr,[x25, #0x9c]
7101ded908  stur xzr,[x25, #0x94]
7101ded90c  strb wzr,[x25, #0xec]
7101ded910  str w8,[x25, #0x90]
7101ded914  ldp d9,d8,[sp, #0xc0]
7101ded918  ldr d10,[sp, #0xb0]
7101ded91c  ldp x29,x30,[sp, #0x120]
7101ded920  ldp x20,x19,[sp, #0x110]
7101ded924  ldp x22,x21,[sp, #0x100]
7101ded928  ldp x24,x23,[sp, #0xf0]
7101ded92c  ldp x26,x25,[sp, #0xe0]
7101ded930  ldp x28,x27,[sp, #0xd0]
7101ded934  add sp,sp,#0x130
7101ded938  ret
7101ded93c  ldr x0,[x25, #0x350]
7101ded940  str xzr,[x25, #0x350]
7101ded944  cbz x0,0x7101ded94c
7101ded948  bl 0x710392eb40
7101ded94c  str wzr,[sp]
7101ded950  strb wzr,[x25, #0x358]
7101ded954  strb wzr,[x25, #0x35a]
7101ded958  b 0x7101decc34
7101ded95c  bl 0x71039c1330
7101ded960  mov x0,x9
7101ded964  bl 0x71039c1330
7101ded968  bl 0x71039c2650
