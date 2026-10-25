// addr:      7101dd5280
// offset:    0x1dd5280
// name:      FUN_7101dd5280
// mangled:   
// size:      12728

7101dd5280  stp x28,x27,[sp, #-0x60]!
7101dd5284  stp x26,x25,[sp, #0x10]
7101dd5288  stp x24,x23,[sp, #0x20]
7101dd528c  stp x22,x21,[sp, #0x30]
7101dd5290  stp x20,x19,[sp, #0x40]
7101dd5294  stp x29,x30,[sp, #0x50]
7101dd5298  add x29,sp,#0x50
7101dd529c  sub sp,sp,#0x300
7101dd52a0  ldr x8,[x0, #0xf8]
7101dd52a4  and x8,x8,#-0x200
7101dd52a8  str x8,[x0, #0xf8]
7101dd52ac  ldr x8,[x0]
7101dd52b0  ldr x1,[x8]
7101dd52b4  add x28,x0,#0x8
7101dd52b8  mov x20,x0
7101dd52bc  adrp x2,0x7104545000
7101dd52c0  add x2,x2,#0x928
7101dd52c4  mov w3,#0x1
7101dd52c8  mov x0,x28
7101dd52cc  mov w19,#0x1
7101dd52d0  bl 0x71032cbf30
7101dd52d4  ldr x8,[x20, #0x8]
7101dd52d8  ldr x8,[x8]
7101dd52dc  add x9,x8,#0x8
7101dd52e0  add x25,x20,#0xc0
7101dd52e4  cmp x25,x9
7101dd52e8  b.eq 0x7101dd535c
7101dd52ec  ldr x9,[x8, #0x10]
7101dd52f0  ldr x9,[x9]
7101dd52f4  ldr x10,[x20, #0xc8]
7101dd52f8  str x9,[x10]
7101dd52fc  ldr x9,[x8, #0x10]
7101dd5300  ldr x9,[x9, #0x8]
7101dd5304  ldr x10,[x20, #0xc8]
7101dd5308  str x9,[x10, #0x8]
7101dd530c  ldr x9,[x8, #0x10]
7101dd5310  ldr x8,[x20, #0xc8]
7101dd5314  cmp x8,x9
7101dd5318  b.eq 0x7101dd535c
7101dd531c  ldr x10,[x9, #0x18]
7101dd5320  ldr x10,[x10]
7101dd5324  ldr x11,[x8, #0x18]
7101dd5328  str x10,[x11]
7101dd532c  ldr x10,[x9, #0x18]
7101dd5330  ldr x10,[x10, #0x8]
7101dd5334  ldr x11,[x8, #0x18]
7101dd5338  str x10,[x11, #0x8]
7101dd533c  ldr x10,[x9, #0x18]
7101dd5340  ldr x10,[x10, #0x10]
7101dd5344  ldr x11,[x8, #0x18]
7101dd5348  str x10,[x11, #0x10]
7101dd534c  ldr x9,[x9, #0x18]
7101dd5350  ldr x9,[x9, #0x18]
7101dd5354  ldr x8,[x8, #0x18]
7101dd5358  str x9,[x8, #0x18]
7101dd535c  mov w8,#0x101
7101dd5360  strh w8,[sp, #0x34]
7101dd5364  mov x8,#0x42c8000000000000
7101dd5368  mov x27,#0xa635
7101dd536c  movk x27,#0xbad, LSL #16
7101dd5370  mov x26,#0x40cd
7101dd5374  movk x26,#0x7e5a, LSL #16
7101dd5378  str x8,[sp, #0x38]
7101dd537c  mov w8,#0x100
7101dd5380  add x0,sp,#0x20
7101dd5384  movk x27,#0x12, LSL #32
7101dd5388  str xzr,[sp, #0x20]
7101dd538c  movk x26,#0x11, LSL #32
7101dd5390  strh wzr,[sp, #0x2e]
7101dd5394  stur wzr,[sp, #0x2a]
7101dd5398  str w19,[sp, #0x30]
7101dd539c  strb w19,[sp, #0x36]
7101dd53a0  str wzr,[sp, #0x40]
7101dd53a4  str xzr,[sp, #0x70]
7101dd53a8  str xzr,[sp, #0xa0]
7101dd53ac  str xzr,[sp, #0xd0]
7101dd53b0  str xzr,[sp, #0x100]
7101dd53b4  str xzr,[sp, #0x130]
7101dd53b8  str wzr,[sp, #0x140]
7101dd53bc  strh w8,[sp, #0x28]
7101dd53c0  strb w19,[sp, #0x2f]
7101dd53c4  bl 0x710337df20
7101dd53c8  add x21,x20,#0xf0
7101dd53cc  adrp x2,0x7104433000
7101dd53d0  add x2,x2,#0x952
7101dd53d4  add x3,sp,#0x20
7101dd53d8  mov x0,x21
7101dd53dc  mov x1,x25
7101dd53e0  bl 0x7103770b30
7101dd53e4  adrp x0,0x710439d000
7101dd53e8  add x0,x0,#0xc57
7101dd53ec  add x8,sp,#0x150
7101dd53f0  mov w1,wzr
7101dd53f4  stur x26,[x29, #-0xc8]
7101dd53f8  add x19,sp,#0x150
7101dd53fc  bl 0x71003a4ca0
7101dd5400  add x2,x19,#0x8
7101dd5404  mov x0,x21
7101dd5408  mov w1,wzr
7101dd540c  bl 0x71037717d0
7101dd5410  ldr x0,[x20, #0xf0]
7101dd5414  sub x2,x29,#0xc8
7101dd5418  mov w1,wzr
7101dd541c  bl 0x7103772070
7101dd5420  stur x27,[x29, #-0x68]
7101dd5424  ldr x8,[x20, #0xf0]
7101dd5428  ldr x10,[x8, #0x1b8]
7101dd542c  cbz x10,0x7101dd5464
7101dd5430  add x11,x8,#0x1b8
7101dd5434  mov x9,x11
7101dd5438  ldr w12,[x10, #0x20]
7101dd543c  cmp w12,#0x0
7101dd5440  cset w12,lt
7101dd5444  csel x9,x9,x10,lt
7101dd5448  ldr x10,[x10, w12, UXTW #0x3]
7101dd544c  cbnz x10,0x7101dd5438
7101dd5450  cmp x9,x11
7101dd5454  b.eq 0x7101dd5464
7101dd5458  ldr w10,[x9, #0x20]
7101dd545c  cmp w10,#0x0
7101dd5460  b.le 0x7101dd6788
7101dd5464  adrp x8,0x710523d000
7101dd5468  add x8,x8,#0x9c8
7101dd546c  mov w0,#0x10
7101dd5470  mov w1,#0x8
7101dd5474  stur x8,[x29, #-0xc0]
7101dd5478  bl 0x710392e290
7101dd547c  mov x23,x0
7101dd5480  cbnz x0,0x7101dd54cc
7101dd5484  adrp x8,0x7105332000
7101dd5488  ldr x0,[x8, #0xf00]
7101dd548c  cbz x0,0x7101dd54c8
7101dd5490  mov w8,#0x8
7101dd5494  stur wzr,[x29, #-0x5c]
7101dd5498  sub x1,x29,#0x5c
7101dd549c  stur x8,[x29, #-0x78]
7101dd54a0  ldr x8,[x0]
7101dd54a4  ldr x8,[x8, #0x30]
7101dd54a8  sub x2,x29,#0x78
7101dd54ac  blr x8
7101dd54b0  tbz w0,#0x0,0x7101dd54c8
7101dd54b4  mov w0,#0x10
7101dd54b8  mov w1,#0x8
7101dd54bc  bl 0x710392e290
7101dd54c0  mov x23,x0
7101dd54c4  cbnz x0,0x7101dd54cc
7101dd54c8  mov x23,xzr
7101dd54cc  str xzr,[x23]
7101dd54d0  stur x23,[x29, #-0xb8]
7101dd54d4  ldr x0,[x23]
7101dd54d8  cbz x0,0x7101dd54ec
7101dd54dc  ldr x8,[x0]
7101dd54e0  ldr x8,[x8, #0x2a0]
7101dd54e4  sub x1,x29,#0x68
7101dd54e8  blr x8
7101dd54ec  adrp x22,0x710523d000
7101dd54f0  add x22,x22,#0x9c8
7101dd54f4  stp x22,xzr,[x29, #-0xc0]
7101dd54f8  cbz x23,0x7101dd5504
7101dd54fc  mov x0,x23
7101dd5500  bl 0x710392eb40
7101dd5504  ldr x8,[x20, #0xf8]
7101dd5508  orr x8,x8,#0x1
7101dd550c  str x8,[x20, #0xf8]
7101dd5510  adrp x0,0x710439d000
7101dd5514  add x0,x0,#0xc57
7101dd5518  add x8,sp,#0x150
7101dd551c  mov w1,#0x1
7101dd5520  stur x26,[x29, #-0xc8]
7101dd5524  add x19,sp,#0x150
7101dd5528  bl 0x71003a4ca0
7101dd552c  add x2,x19,#0x8
7101dd5530  mov w1,#0x1
7101dd5534  mov x0,x21
7101dd5538  bl 0x71037717d0
7101dd553c  ldr x0,[x20, #0xf0]
7101dd5540  mov w1,#0x1
7101dd5544  sub x2,x29,#0xc8
7101dd5548  bl 0x7103772070
7101dd554c  stur x27,[x29, #-0x68]
7101dd5550  ldr x8,[x20, #0xf0]
7101dd5554  ldr x10,[x8, #0x1b8]
7101dd5558  cbz x10,0x7101dd55b8
7101dd555c  add x11,x8,#0x1b8
7101dd5560  mov x9,x11
7101dd5564  ldr w12,[x10, #0x20]
7101dd5568  cmp w12,#0x1
7101dd556c  cset w12,lt
7101dd5570  csel x9,x9,x10,lt
7101dd5574  ldr x10,[x10, w12, UXTW #0x3]
7101dd5578  cbnz x10,0x7101dd5564
7101dd557c  cmp x9,x11
7101dd5580  b.eq 0x7101dd55b8
7101dd5584  ldr w10,[x9, #0x20]
7101dd5588  cmp w10,#0x1
7101dd558c  b.gt 0x7101dd55b8
7101dd5590  ldr x9,[x9, #0x28]
7101dd5594  cbz x9,0x7101dd55b8
7101dd5598  ldr x1,[x9, #0x88]
7101dd559c  add x0,x8,#0x160
7101dd55a0  sub x8,x29,#0xc0
7101dd55a4  bl 0x7103776ad0
7101dd55a8  ldur x23,[x29, #-0xb8]
7101dd55ac  ldr x0,[x23]
7101dd55b0  cbnz x0,0x7101dd5628
7101dd55b4  b 0x7101dd5638
7101dd55b8  mov w0,#0x10
7101dd55bc  mov w1,#0x8
7101dd55c0  stur x22,[x29, #-0xc0]
7101dd55c4  bl 0x710392e290
7101dd55c8  mov x23,x0
7101dd55cc  cbnz x0,0x7101dd5618
7101dd55d0  adrp x8,0x7105332000
7101dd55d4  ldr x0,[x8, #0xf00]
7101dd55d8  cbz x0,0x7101dd5614
7101dd55dc  mov w8,#0x8
7101dd55e0  stur wzr,[x29, #-0x5c]
7101dd55e4  sub x1,x29,#0x5c
7101dd55e8  stur x8,[x29, #-0x78]
7101dd55ec  ldr x8,[x0]
7101dd55f0  ldr x8,[x8, #0x30]
7101dd55f4  sub x2,x29,#0x78
7101dd55f8  blr x8
7101dd55fc  tbz w0,#0x0,0x7101dd5614
7101dd5600  mov w0,#0x10
7101dd5604  mov w1,#0x8
7101dd5608  bl 0x710392e290
7101dd560c  mov x23,x0
7101dd5610  cbnz x0,0x7101dd5618
7101dd5614  mov x23,xzr
7101dd5618  str xzr,[x23]
7101dd561c  stur x23,[x29, #-0xb8]
7101dd5620  ldr x0,[x23]
7101dd5624  cbz x0,0x7101dd5638
7101dd5628  ldr x8,[x0]
7101dd562c  ldr x8,[x8, #0x2a0]
7101dd5630  sub x1,x29,#0x68
7101dd5634  blr x8
7101dd5638  stp x22,xzr,[x29, #-0xc0]
7101dd563c  cbz x23,0x7101dd5648
7101dd5640  mov x0,x23
7101dd5644  bl 0x710392eb40
7101dd5648  ldr x8,[x20, #0xf8]
7101dd564c  orr x8,x8,#0x2
7101dd5650  str x8,[x20, #0xf8]
7101dd5654  adrp x0,0x710439d000
7101dd5658  add x0,x0,#0xc57
7101dd565c  add x8,sp,#0x150
7101dd5660  mov w1,#0x2
7101dd5664  stur x26,[x29, #-0xc8]
7101dd5668  add x19,sp,#0x150
7101dd566c  bl 0x71003a4ca0
7101dd5670  add x2,x19,#0x8
7101dd5674  mov w1,#0x2
7101dd5678  mov x0,x21
7101dd567c  bl 0x71037717d0
7101dd5680  ldr x0,[x20, #0xf0]
7101dd5684  mov w1,#0x2
7101dd5688  sub x2,x29,#0xc8
7101dd568c  bl 0x7103772070
7101dd5690  stur x27,[x29, #-0x68]
7101dd5694  ldr x8,[x20, #0xf0]
7101dd5698  ldr x10,[x8, #0x1b8]
7101dd569c  cbz x10,0x7101dd56fc
7101dd56a0  add x11,x8,#0x1b8
7101dd56a4  mov x9,x11
7101dd56a8  ldr w12,[x10, #0x20]
7101dd56ac  cmp w12,#0x2
7101dd56b0  cset w12,lt
7101dd56b4  csel x9,x9,x10,lt
7101dd56b8  ldr x10,[x10, w12, UXTW #0x3]
7101dd56bc  cbnz x10,0x7101dd56a8
7101dd56c0  cmp x9,x11
7101dd56c4  b.eq 0x7101dd56fc
7101dd56c8  ldr w10,[x9, #0x20]
7101dd56cc  cmp w10,#0x2
7101dd56d0  b.gt 0x7101dd56fc
7101dd56d4  ldr x9,[x9, #0x28]
7101dd56d8  cbz x9,0x7101dd56fc
7101dd56dc  ldr x1,[x9, #0x88]
7101dd56e0  add x0,x8,#0x160
7101dd56e4  sub x8,x29,#0xc0
7101dd56e8  bl 0x7103776ad0
7101dd56ec  ldur x23,[x29, #-0xb8]
7101dd56f0  ldr x0,[x23]
7101dd56f4  cbnz x0,0x7101dd576c
7101dd56f8  b 0x7101dd577c
7101dd56fc  mov w0,#0x10
7101dd5700  mov w1,#0x8
7101dd5704  stur x22,[x29, #-0xc0]
7101dd5708  bl 0x710392e290
7101dd570c  mov x23,x0
7101dd5710  cbnz x0,0x7101dd575c
7101dd5714  adrp x8,0x7105332000
7101dd5718  ldr x0,[x8, #0xf00]
7101dd571c  cbz x0,0x7101dd5758
7101dd5720  mov w8,#0x8
7101dd5724  stur wzr,[x29, #-0x5c]
7101dd5728  sub x1,x29,#0x5c
7101dd572c  stur x8,[x29, #-0x78]
7101dd5730  ldr x8,[x0]
7101dd5734  ldr x8,[x8, #0x30]
7101dd5738  sub x2,x29,#0x78
7101dd573c  blr x8
7101dd5740  tbz w0,#0x0,0x7101dd5758
7101dd5744  mov w0,#0x10
7101dd5748  mov w1,#0x8
7101dd574c  bl 0x710392e290
7101dd5750  mov x23,x0
7101dd5754  cbnz x0,0x7101dd575c
7101dd5758  mov x23,xzr
7101dd575c  str xzr,[x23]
7101dd5760  stur x23,[x29, #-0xb8]
7101dd5764  ldr x0,[x23]
7101dd5768  cbz x0,0x7101dd577c
7101dd576c  ldr x8,[x0]
7101dd5770  ldr x8,[x8, #0x2a0]
7101dd5774  sub x1,x29,#0x68
7101dd5778  blr x8
7101dd577c  stp x22,xzr,[x29, #-0xc0]
7101dd5780  cbz x23,0x7101dd578c
7101dd5784  mov x0,x23
7101dd5788  bl 0x710392eb40
7101dd578c  ldr x8,[x20, #0xf8]
7101dd5790  orr x8,x8,#0x4
7101dd5794  str x8,[x20, #0xf8]
7101dd5798  adrp x0,0x710439d000
7101dd579c  add x0,x0,#0xc57
7101dd57a0  add x8,sp,#0x150
7101dd57a4  orr w1,wzr,#0x3
7101dd57a8  stur x26,[x29, #-0xc8]
7101dd57ac  add x19,sp,#0x150
7101dd57b0  bl 0x71003a4ca0
7101dd57b4  add x2,x19,#0x8
7101dd57b8  orr w1,wzr,#0x3
7101dd57bc  mov x0,x21
7101dd57c0  bl 0x71037717d0
7101dd57c4  ldr x0,[x20, #0xf0]
7101dd57c8  orr w1,wzr,#0x3
7101dd57cc  sub x2,x29,#0xc8
7101dd57d0  bl 0x7103772070
7101dd57d4  stur x27,[x29, #-0x68]
7101dd57d8  ldr x8,[x20, #0xf0]
7101dd57dc  ldr x10,[x8, #0x1b8]
7101dd57e0  cbz x10,0x7101dd5840
7101dd57e4  add x11,x8,#0x1b8
7101dd57e8  mov x9,x11
7101dd57ec  ldr w12,[x10, #0x20]
7101dd57f0  cmp w12,#0x3
7101dd57f4  cset w12,lt
7101dd57f8  csel x9,x9,x10,lt
7101dd57fc  ldr x10,[x10, w12, UXTW #0x3]
7101dd5800  cbnz x10,0x7101dd57ec
7101dd5804  cmp x9,x11
7101dd5808  b.eq 0x7101dd5840
7101dd580c  ldr w10,[x9, #0x20]
7101dd5810  cmp w10,#0x3
7101dd5814  b.gt 0x7101dd5840
7101dd5818  ldr x9,[x9, #0x28]
7101dd581c  cbz x9,0x7101dd5840
7101dd5820  ldr x1,[x9, #0x88]
7101dd5824  add x0,x8,#0x160
7101dd5828  sub x8,x29,#0xc0
7101dd582c  bl 0x7103776ad0
7101dd5830  ldur x23,[x29, #-0xb8]
7101dd5834  ldr x0,[x23]
7101dd5838  cbnz x0,0x7101dd58b0
7101dd583c  b 0x7101dd58c0
7101dd5840  mov w0,#0x10
7101dd5844  mov w1,#0x8
7101dd5848  stur x22,[x29, #-0xc0]
7101dd584c  bl 0x710392e290
7101dd5850  mov x23,x0
7101dd5854  cbnz x0,0x7101dd58a0
7101dd5858  adrp x8,0x7105332000
7101dd585c  ldr x0,[x8, #0xf00]
7101dd5860  cbz x0,0x7101dd589c
7101dd5864  mov w8,#0x8
7101dd5868  stur wzr,[x29, #-0x5c]
7101dd586c  sub x1,x29,#0x5c
7101dd5870  stur x8,[x29, #-0x78]
7101dd5874  ldr x8,[x0]
7101dd5878  ldr x8,[x8, #0x30]
7101dd587c  sub x2,x29,#0x78
7101dd5880  blr x8
7101dd5884  tbz w0,#0x0,0x7101dd589c
7101dd5888  mov w0,#0x10
7101dd588c  mov w1,#0x8
7101dd5890  bl 0x710392e290
7101dd5894  mov x23,x0
7101dd5898  cbnz x0,0x7101dd58a0
7101dd589c  mov x23,xzr
7101dd58a0  str xzr,[x23]
7101dd58a4  stur x23,[x29, #-0xb8]
7101dd58a8  ldr x0,[x23]
7101dd58ac  cbz x0,0x7101dd58c0
7101dd58b0  ldr x8,[x0]
7101dd58b4  ldr x8,[x8, #0x2a0]
7101dd58b8  sub x1,x29,#0x68
7101dd58bc  blr x8
7101dd58c0  stp x22,xzr,[x29, #-0xc0]
7101dd58c4  cbz x23,0x7101dd58d0
7101dd58c8  mov x0,x23
7101dd58cc  bl 0x710392eb40
7101dd58d0  ldr x8,[x20, #0xf8]
7101dd58d4  orr x8,x8,#0x8
7101dd58d8  str x8,[x20, #0xf8]
7101dd58dc  adrp x0,0x710439d000
7101dd58e0  add x0,x0,#0xc57
7101dd58e4  add x8,sp,#0x150
7101dd58e8  mov w1,#0x4
7101dd58ec  stur x26,[x29, #-0xc8]
7101dd58f0  add x19,sp,#0x150
7101dd58f4  bl 0x71003a4ca0
7101dd58f8  add x2,x19,#0x8
7101dd58fc  mov w1,#0x8
7101dd5900  mov x0,x21
7101dd5904  bl 0x71037717d0
7101dd5908  ldr x0,[x20, #0xf0]
7101dd590c  mov w1,#0x8
7101dd5910  sub x2,x29,#0xc8
7101dd5914  bl 0x7103772070
7101dd5918  stur x27,[x29, #-0x68]
7101dd591c  ldr x8,[x20, #0xf0]
7101dd5920  ldr x10,[x8, #0x1b8]
7101dd5924  cbz x10,0x7101dd5984
7101dd5928  add x11,x8,#0x1b8
7101dd592c  mov x9,x11
7101dd5930  ldr w12,[x10, #0x20]
7101dd5934  cmp w12,#0x8
7101dd5938  cset w12,lt
7101dd593c  csel x9,x9,x10,lt
7101dd5940  ldr x10,[x10, w12, UXTW #0x3]
7101dd5944  cbnz x10,0x7101dd5930
7101dd5948  cmp x9,x11
7101dd594c  b.eq 0x7101dd5984
7101dd5950  ldr w10,[x9, #0x20]
7101dd5954  cmp w10,#0x8
7101dd5958  b.gt 0x7101dd5984
7101dd595c  ldr x9,[x9, #0x28]
7101dd5960  cbz x9,0x7101dd5984
7101dd5964  ldr x1,[x9, #0x88]
7101dd5968  add x0,x8,#0x160
7101dd596c  sub x8,x29,#0xc0
7101dd5970  bl 0x7103776ad0
7101dd5974  ldur x23,[x29, #-0xb8]
7101dd5978  ldr x0,[x23]
7101dd597c  cbnz x0,0x7101dd59f4
7101dd5980  b 0x7101dd5a04
7101dd5984  mov w0,#0x10
7101dd5988  mov w1,#0x8
7101dd598c  stur x22,[x29, #-0xc0]
7101dd5990  bl 0x710392e290
7101dd5994  mov x23,x0
7101dd5998  cbnz x0,0x7101dd59e4
7101dd599c  adrp x8,0x7105332000
7101dd59a0  ldr x0,[x8, #0xf00]
7101dd59a4  cbz x0,0x7101dd59e0
7101dd59a8  mov w8,#0x8
7101dd59ac  stur wzr,[x29, #-0x5c]
7101dd59b0  sub x1,x29,#0x5c
7101dd59b4  stur x8,[x29, #-0x78]
7101dd59b8  ldr x8,[x0]
7101dd59bc  ldr x8,[x8, #0x30]
7101dd59c0  sub x2,x29,#0x78
7101dd59c4  blr x8
7101dd59c8  tbz w0,#0x0,0x7101dd59e0
7101dd59cc  mov w0,#0x10
7101dd59d0  mov w1,#0x8
7101dd59d4  bl 0x710392e290
7101dd59d8  mov x23,x0
7101dd59dc  cbnz x0,0x7101dd59e4
7101dd59e0  mov x23,xzr
7101dd59e4  str xzr,[x23]
7101dd59e8  stur x23,[x29, #-0xb8]
7101dd59ec  ldr x0,[x23]
7101dd59f0  cbz x0,0x7101dd5a04
7101dd59f4  ldr x8,[x0]
7101dd59f8  ldr x8,[x8, #0x2a0]
7101dd59fc  sub x1,x29,#0x68
7101dd5a00  blr x8
7101dd5a04  stp x22,xzr,[x29, #-0xc0]
7101dd5a08  cbz x23,0x7101dd5a14
7101dd5a0c  mov x0,x23
7101dd5a10  bl 0x710392eb40
7101dd5a14  ldr x8,[x20, #0xf8]
7101dd5a18  and x8,x8,#-0x101
7101dd5a1c  str x8,[x20, #0xf8]
7101dd5a20  adrp x0,0x710439d000
7101dd5a24  add x0,x0,#0xc57
7101dd5a28  mov w1,#0x5
7101dd5a2c  add x8,sp,#0x150
7101dd5a30  stur x26,[x29, #-0xc8]
7101dd5a34  add x19,sp,#0x150
7101dd5a38  bl 0x71003a4ca0
7101dd5a3c  add x2,x19,#0x8
7101dd5a40  orr w1,wzr,#0x6
7101dd5a44  mov x0,x21
7101dd5a48  bl 0x71037717d0
7101dd5a4c  ldr x0,[x20, #0xf0]
7101dd5a50  orr w1,wzr,#0x6
7101dd5a54  sub x2,x29,#0xc8
7101dd5a58  bl 0x7103772070
7101dd5a5c  stur x27,[x29, #-0x68]
7101dd5a60  ldr x8,[x20, #0xf0]
7101dd5a64  ldr x10,[x8, #0x1b8]
7101dd5a68  cbz x10,0x7101dd5ac8
7101dd5a6c  add x11,x8,#0x1b8
7101dd5a70  mov x9,x11
7101dd5a74  ldr w12,[x10, #0x20]
7101dd5a78  cmp w12,#0x6
7101dd5a7c  cset w12,lt
7101dd5a80  csel x9,x9,x10,lt
7101dd5a84  ldr x10,[x10, w12, UXTW #0x3]
7101dd5a88  cbnz x10,0x7101dd5a74
7101dd5a8c  cmp x9,x11
7101dd5a90  b.eq 0x7101dd5ac8
7101dd5a94  ldr w10,[x9, #0x20]
7101dd5a98  cmp w10,#0x6
7101dd5a9c  b.gt 0x7101dd5ac8
7101dd5aa0  ldr x9,[x9, #0x28]
7101dd5aa4  cbz x9,0x7101dd5ac8
7101dd5aa8  ldr x1,[x9, #0x88]
7101dd5aac  add x0,x8,#0x160
7101dd5ab0  sub x8,x29,#0xc0
7101dd5ab4  bl 0x7103776ad0
7101dd5ab8  ldur x23,[x29, #-0xb8]
7101dd5abc  ldr x0,[x23]
7101dd5ac0  cbnz x0,0x7101dd5b38
7101dd5ac4  b 0x7101dd5b48
7101dd5ac8  mov w0,#0x10
7101dd5acc  mov w1,#0x8
7101dd5ad0  stur x22,[x29, #-0xc0]
7101dd5ad4  bl 0x710392e290
7101dd5ad8  mov x23,x0
7101dd5adc  cbnz x0,0x7101dd5b28
7101dd5ae0  adrp x8,0x7105332000
7101dd5ae4  ldr x0,[x8, #0xf00]
7101dd5ae8  cbz x0,0x7101dd5b24
7101dd5aec  mov w8,#0x8
7101dd5af0  stur wzr,[x29, #-0x5c]
7101dd5af4  sub x1,x29,#0x5c
7101dd5af8  stur x8,[x29, #-0x78]
7101dd5afc  ldr x8,[x0]
7101dd5b00  ldr x8,[x8, #0x30]
7101dd5b04  sub x2,x29,#0x78
7101dd5b08  blr x8
7101dd5b0c  tbz w0,#0x0,0x7101dd5b24
7101dd5b10  mov w0,#0x10
7101dd5b14  mov w1,#0x8
7101dd5b18  bl 0x710392e290
7101dd5b1c  mov x23,x0
7101dd5b20  cbnz x0,0x7101dd5b28
7101dd5b24  mov x23,xzr
7101dd5b28  str xzr,[x23]
7101dd5b2c  stur x23,[x29, #-0xb8]
7101dd5b30  ldr x0,[x23]
7101dd5b34  cbz x0,0x7101dd5b48
7101dd5b38  ldr x8,[x0]
7101dd5b3c  ldr x8,[x8, #0x2a0]
7101dd5b40  sub x1,x29,#0x68
7101dd5b44  blr x8
7101dd5b48  stp x22,xzr,[x29, #-0xc0]
7101dd5b4c  cbz x23,0x7101dd5b58
7101dd5b50  mov x0,x23
7101dd5b54  bl 0x710392eb40
7101dd5b58  ldr x8,[x20, #0xf8]
7101dd5b5c  and x8,x8,#-0x41
7101dd5b60  str x8,[x20, #0xf8]
7101dd5b64  adrp x0,0x710439d000
7101dd5b68  add x0,x0,#0xc57
7101dd5b6c  add x8,sp,#0x150
7101dd5b70  orr w1,wzr,#0x6
7101dd5b74  stur x26,[x29, #-0xc8]
7101dd5b78  add x19,sp,#0x150
7101dd5b7c  bl 0x71003a4ca0
7101dd5b80  add x2,x19,#0x8
7101dd5b84  orr w1,wzr,#0x7
7101dd5b88  mov x0,x21
7101dd5b8c  bl 0x71037717d0
7101dd5b90  ldr x0,[x20, #0xf0]
7101dd5b94  orr w1,wzr,#0x7
7101dd5b98  sub x2,x29,#0xc8
7101dd5b9c  bl 0x7103772070
7101dd5ba0  stur x27,[x29, #-0x68]
7101dd5ba4  ldr x8,[x20, #0xf0]
7101dd5ba8  ldr x10,[x8, #0x1b8]
7101dd5bac  cbz x10,0x7101dd5c0c
7101dd5bb0  add x11,x8,#0x1b8
7101dd5bb4  mov x9,x11
7101dd5bb8  ldr w12,[x10, #0x20]
7101dd5bbc  cmp w12,#0x7
7101dd5bc0  cset w12,lt
7101dd5bc4  csel x9,x9,x10,lt
7101dd5bc8  ldr x10,[x10, w12, UXTW #0x3]
7101dd5bcc  cbnz x10,0x7101dd5bb8
7101dd5bd0  cmp x9,x11
7101dd5bd4  b.eq 0x7101dd5c0c
7101dd5bd8  ldr w10,[x9, #0x20]
7101dd5bdc  cmp w10,#0x7
7101dd5be0  b.gt 0x7101dd5c0c
7101dd5be4  ldr x9,[x9, #0x28]
7101dd5be8  cbz x9,0x7101dd5c0c
7101dd5bec  ldr x1,[x9, #0x88]
7101dd5bf0  add x0,x8,#0x160
7101dd5bf4  sub x8,x29,#0xc0
7101dd5bf8  bl 0x7103776ad0
7101dd5bfc  ldur x23,[x29, #-0xb8]
7101dd5c00  ldr x0,[x23]
7101dd5c04  cbnz x0,0x7101dd5c7c
7101dd5c08  b 0x7101dd5c8c
7101dd5c0c  mov w0,#0x10
7101dd5c10  mov w1,#0x8
7101dd5c14  stur x22,[x29, #-0xc0]
7101dd5c18  bl 0x710392e290
7101dd5c1c  mov x23,x0
7101dd5c20  cbnz x0,0x7101dd5c6c
7101dd5c24  adrp x8,0x7105332000
7101dd5c28  ldr x0,[x8, #0xf00]
7101dd5c2c  cbz x0,0x7101dd5c68
7101dd5c30  mov w8,#0x8
7101dd5c34  stur wzr,[x29, #-0x5c]
7101dd5c38  sub x1,x29,#0x5c
7101dd5c3c  stur x8,[x29, #-0x78]
7101dd5c40  ldr x8,[x0]
7101dd5c44  ldr x8,[x8, #0x30]
7101dd5c48  sub x2,x29,#0x78
7101dd5c4c  blr x8
7101dd5c50  tbz w0,#0x0,0x7101dd5c68
7101dd5c54  mov w0,#0x10
7101dd5c58  mov w1,#0x8
7101dd5c5c  bl 0x710392e290
7101dd5c60  mov x23,x0
7101dd5c64  cbnz x0,0x7101dd5c6c
7101dd5c68  mov x23,xzr
7101dd5c6c  str xzr,[x23]
7101dd5c70  stur x23,[x29, #-0xb8]
7101dd5c74  ldr x0,[x23]
7101dd5c78  cbz x0,0x7101dd5c8c
7101dd5c7c  ldr x8,[x0]
7101dd5c80  ldr x8,[x8, #0x2a0]
7101dd5c84  sub x1,x29,#0x68
7101dd5c88  blr x8
7101dd5c8c  stp x22,xzr,[x29, #-0xc0]
7101dd5c90  cbz x23,0x7101dd5c9c
7101dd5c94  mov x0,x23
7101dd5c98  bl 0x710392eb40
7101dd5c9c  ldp x8,x9,[x20, #0xf0]
7101dd5ca0  and x9,x9,#-0x81
7101dd5ca4  str x9,[x20, #0xf8]
7101dd5ca8  ldr x9,[x8, #0x1b8]
7101dd5cac  cbz x9,0x7101dd6150
7101dd5cb0  add x8,x8,#0x1b8
7101dd5cb4  mov x10,x8
7101dd5cb8  mov x11,x9
7101dd5cbc  ldr w12,[x11, #0x20]
7101dd5cc0  cmp w12,#0x0
7101dd5cc4  cset w12,lt
7101dd5cc8  csel x10,x10,x11,lt
7101dd5ccc  ldr x11,[x11, w12, UXTW #0x3]
7101dd5cd0  cbnz x11,0x7101dd5cbc
7101dd5cd4  cmp x10,x8
7101dd5cd8  b.eq 0x7101dd5d28
7101dd5cdc  ldr w11,[x10, #0x20]
7101dd5ce0  cmp w11,#0x0
7101dd5ce4  b.gt 0x7101dd5d28
7101dd5ce8  ldr x23,[x10, #0x28]
7101dd5cec  cbz x23,0x7101dd5d28
7101dd5cf0  ldr x8,[x23]
7101dd5cf4  ldr x8,[x8, #0x208]
7101dd5cf8  mov w1,#0x1
7101dd5cfc  mov x0,x23
7101dd5d00  blr x8
7101dd5d04  ldr x8,[x23]
7101dd5d08  ldr x8,[x8, #0x388]
7101dd5d0c  mov x0,x23
7101dd5d10  mov w1,wzr
7101dd5d14  mov w2,wzr
7101dd5d18  blr x8
7101dd5d1c  ldr x9,[x21]
7101dd5d20  add x8,x9,#0x1b8
7101dd5d24  ldr x9,[x9, #0x1b8]
7101dd5d28  cbz x9,0x7101dd6150
7101dd5d2c  mov x10,x8
7101dd5d30  mov x11,x9
7101dd5d34  ldr w12,[x11, #0x20]
7101dd5d38  cmp w12,#0x0
7101dd5d3c  cset w12,lt
7101dd5d40  csel x10,x10,x11,lt
7101dd5d44  ldr x11,[x11, w12, UXTW #0x3]
7101dd5d48  cbnz x11,0x7101dd5d34
7101dd5d4c  cmp x10,x8
7101dd5d50  b.eq 0x7101dd5da0
7101dd5d54  ldr w11,[x10, #0x20]
7101dd5d58  cmp w11,#0x0
7101dd5d5c  b.gt 0x7101dd5da0
7101dd5d60  ldr x23,[x10, #0x28]
7101dd5d64  cbz x23,0x7101dd5da0
7101dd5d68  ldr x8,[x23]
7101dd5d6c  ldr x8,[x8, #0x1f8]
7101dd5d70  mov w1,#0x1
7101dd5d74  mov x0,x23
7101dd5d78  blr x8
7101dd5d7c  ldr x8,[x23]
7101dd5d80  ldr x8,[x8, #0x388]
7101dd5d84  mov x0,x23
7101dd5d88  mov w1,wzr
7101dd5d8c  mov w2,wzr
7101dd5d90  blr x8
7101dd5d94  ldr x9,[x21]
7101dd5d98  add x8,x9,#0x1b8
7101dd5d9c  ldr x9,[x9, #0x1b8]
7101dd5da0  cbz x9,0x7101dd6150
7101dd5da4  mov x10,x8
7101dd5da8  mov x11,x9
7101dd5dac  ldr w12,[x11, #0x20]
7101dd5db0  cmp w12,#0x1
7101dd5db4  cset w12,lt
7101dd5db8  csel x10,x10,x11,lt
7101dd5dbc  ldr x11,[x11, w12, UXTW #0x3]
7101dd5dc0  cbnz x11,0x7101dd5dac
7101dd5dc4  cmp x10,x8
7101dd5dc8  b.eq 0x7101dd5e18
7101dd5dcc  ldr w11,[x10, #0x20]
7101dd5dd0  cmp w11,#0x1
7101dd5dd4  b.gt 0x7101dd5e18
7101dd5dd8  ldr x23,[x10, #0x28]
7101dd5ddc  cbz x23,0x7101dd5e18
7101dd5de0  ldr x8,[x23]
7101dd5de4  ldr x8,[x8, #0x208]
7101dd5de8  mov w1,#0x1
7101dd5dec  mov x0,x23
7101dd5df0  blr x8
7101dd5df4  ldr x8,[x23]
7101dd5df8  ldr x8,[x8, #0x388]
7101dd5dfc  mov x0,x23
7101dd5e00  mov w1,wzr
7101dd5e04  mov w2,wzr
7101dd5e08  blr x8
7101dd5e0c  ldr x9,[x21]
7101dd5e10  add x8,x9,#0x1b8
7101dd5e14  ldr x9,[x9, #0x1b8]
7101dd5e18  cbz x9,0x7101dd6150
7101dd5e1c  mov x10,x8
7101dd5e20  mov x11,x9
7101dd5e24  ldr w12,[x11, #0x20]
7101dd5e28  cmp w12,#0x1
7101dd5e2c  cset w12,lt
7101dd5e30  csel x10,x10,x11,lt
7101dd5e34  ldr x11,[x11, w12, UXTW #0x3]
7101dd5e38  cbnz x11,0x7101dd5e24
7101dd5e3c  cmp x10,x8
7101dd5e40  b.eq 0x7101dd5e90
7101dd5e44  ldr w11,[x10, #0x20]
7101dd5e48  cmp w11,#0x1
7101dd5e4c  b.gt 0x7101dd5e90
7101dd5e50  ldr x23,[x10, #0x28]
7101dd5e54  cbz x23,0x7101dd5e90
7101dd5e58  ldr x8,[x23]
7101dd5e5c  ldr x8,[x8, #0x1f8]
7101dd5e60  mov w1,#0x1
7101dd5e64  mov x0,x23
7101dd5e68  blr x8
7101dd5e6c  ldr x8,[x23]
7101dd5e70  ldr x8,[x8, #0x388]
7101dd5e74  mov x0,x23
7101dd5e78  mov w1,wzr
7101dd5e7c  mov w2,wzr
7101dd5e80  blr x8
7101dd5e84  ldr x9,[x21]
7101dd5e88  add x8,x9,#0x1b8
7101dd5e8c  ldr x9,[x9, #0x1b8]
7101dd5e90  cbz x9,0x7101dd6150
7101dd5e94  mov x10,x8
7101dd5e98  mov x11,x9
7101dd5e9c  ldr w12,[x11, #0x20]
7101dd5ea0  cmp w12,#0x2
7101dd5ea4  cset w12,lt
7101dd5ea8  csel x10,x10,x11,lt
7101dd5eac  ldr x11,[x11, w12, UXTW #0x3]
7101dd5eb0  cbnz x11,0x7101dd5e9c
7101dd5eb4  cmp x10,x8
7101dd5eb8  b.eq 0x7101dd5f08
7101dd5ebc  ldr w11,[x10, #0x20]
7101dd5ec0  cmp w11,#0x2
7101dd5ec4  b.gt 0x7101dd5f08
7101dd5ec8  ldr x23,[x10, #0x28]
7101dd5ecc  cbz x23,0x7101dd5f08
7101dd5ed0  ldr x8,[x23]
7101dd5ed4  ldr x8,[x8, #0x208]
7101dd5ed8  mov w1,#0x1
7101dd5edc  mov x0,x23
7101dd5ee0  blr x8
7101dd5ee4  ldr x8,[x23]
7101dd5ee8  ldr x8,[x8, #0x388]
7101dd5eec  mov x0,x23
7101dd5ef0  mov w1,wzr
7101dd5ef4  mov w2,wzr
7101dd5ef8  blr x8
7101dd5efc  ldr x9,[x21]
7101dd5f00  add x8,x9,#0x1b8
7101dd5f04  ldr x9,[x9, #0x1b8]
7101dd5f08  cbz x9,0x7101dd6150
7101dd5f0c  mov x10,x8
7101dd5f10  mov x11,x9
7101dd5f14  ldr w12,[x11, #0x20]
7101dd5f18  cmp w12,#0x2
7101dd5f1c  cset w12,lt
7101dd5f20  csel x10,x10,x11,lt
7101dd5f24  ldr x11,[x11, w12, UXTW #0x3]
7101dd5f28  cbnz x11,0x7101dd5f14
7101dd5f2c  cmp x10,x8
7101dd5f30  b.eq 0x7101dd5f80
7101dd5f34  ldr w11,[x10, #0x20]
7101dd5f38  cmp w11,#0x2
7101dd5f3c  b.gt 0x7101dd5f80
7101dd5f40  ldr x23,[x10, #0x28]
7101dd5f44  cbz x23,0x7101dd5f80
7101dd5f48  ldr x8,[x23]
7101dd5f4c  ldr x8,[x8, #0x1f8]
7101dd5f50  mov w1,#0x1
7101dd5f54  mov x0,x23
7101dd5f58  blr x8
7101dd5f5c  ldr x8,[x23]
7101dd5f60  ldr x8,[x8, #0x388]
7101dd5f64  mov x0,x23
7101dd5f68  mov w1,wzr
7101dd5f6c  mov w2,wzr
7101dd5f70  blr x8
7101dd5f74  ldr x9,[x21]
7101dd5f78  add x8,x9,#0x1b8
7101dd5f7c  ldr x9,[x9, #0x1b8]
7101dd5f80  cbz x9,0x7101dd6150
7101dd5f84  mov x10,x8
7101dd5f88  mov x11,x9
7101dd5f8c  ldr w12,[x11, #0x20]
7101dd5f90  cmp w12,#0x3
7101dd5f94  cset w12,lt
7101dd5f98  csel x10,x10,x11,lt
7101dd5f9c  ldr x11,[x11, w12, UXTW #0x3]
7101dd5fa0  cbnz x11,0x7101dd5f8c
7101dd5fa4  cmp x10,x8
7101dd5fa8  b.eq 0x7101dd5ff8
7101dd5fac  ldr w11,[x10, #0x20]
7101dd5fb0  cmp w11,#0x3
7101dd5fb4  b.gt 0x7101dd5ff8
7101dd5fb8  ldr x23,[x10, #0x28]
7101dd5fbc  cbz x23,0x7101dd5ff8
7101dd5fc0  ldr x8,[x23]
7101dd5fc4  ldr x8,[x8, #0x208]
7101dd5fc8  mov w1,#0x1
7101dd5fcc  mov x0,x23
7101dd5fd0  blr x8
7101dd5fd4  ldr x8,[x23]
7101dd5fd8  ldr x8,[x8, #0x388]
7101dd5fdc  mov x0,x23
7101dd5fe0  mov w1,wzr
7101dd5fe4  mov w2,wzr
7101dd5fe8  blr x8
7101dd5fec  ldr x9,[x21]
7101dd5ff0  add x8,x9,#0x1b8
7101dd5ff4  ldr x9,[x9, #0x1b8]
7101dd5ff8  cbz x9,0x7101dd6150
7101dd5ffc  mov x10,x8
7101dd6000  mov x11,x9
7101dd6004  ldr w12,[x11, #0x20]
7101dd6008  cmp w12,#0x3
7101dd600c  cset w12,lt
7101dd6010  csel x10,x10,x11,lt
7101dd6014  ldr x11,[x11, w12, UXTW #0x3]
7101dd6018  cbnz x11,0x7101dd6004
7101dd601c  cmp x10,x8
7101dd6020  b.eq 0x7101dd6070
7101dd6024  ldr w11,[x10, #0x20]
7101dd6028  cmp w11,#0x3
7101dd602c  b.gt 0x7101dd6070
7101dd6030  ldr x23,[x10, #0x28]
7101dd6034  cbz x23,0x7101dd6070
7101dd6038  ldr x8,[x23]
7101dd603c  ldr x8,[x8, #0x1f8]
7101dd6040  mov w1,#0x1
7101dd6044  mov x0,x23
7101dd6048  blr x8
7101dd604c  ldr x8,[x23]
7101dd6050  ldr x8,[x8, #0x388]
7101dd6054  mov x0,x23
7101dd6058  mov w1,wzr
7101dd605c  mov w2,wzr
7101dd6060  blr x8
7101dd6064  ldr x9,[x21]
7101dd6068  add x8,x9,#0x1b8
7101dd606c  ldr x9,[x9, #0x1b8]
7101dd6070  cbz x9,0x7101dd6150
7101dd6074  mov x10,x8
7101dd6078  mov x11,x9
7101dd607c  ldr w12,[x11, #0x20]
7101dd6080  cmp w12,#0x8
7101dd6084  cset w12,lt
7101dd6088  csel x10,x10,x11,lt
7101dd608c  ldr x11,[x11, w12, UXTW #0x3]
7101dd6090  cbnz x11,0x7101dd607c
7101dd6094  cmp x10,x8
7101dd6098  b.eq 0x7101dd60e8
7101dd609c  ldr w11,[x10, #0x20]
7101dd60a0  cmp w11,#0x8
7101dd60a4  b.gt 0x7101dd60e8
7101dd60a8  ldr x23,[x10, #0x28]
7101dd60ac  cbz x23,0x7101dd60e8
7101dd60b0  ldr x8,[x23]
7101dd60b4  ldr x8,[x8, #0x208]
7101dd60b8  mov w1,#0x1
7101dd60bc  mov x0,x23
7101dd60c0  blr x8
7101dd60c4  ldr x8,[x23]
7101dd60c8  ldr x8,[x8, #0x388]
7101dd60cc  mov x0,x23
7101dd60d0  mov w1,wzr
7101dd60d4  mov w2,wzr
7101dd60d8  blr x8
7101dd60dc  ldr x9,[x21]
7101dd60e0  add x8,x9,#0x1b8
7101dd60e4  ldr x9,[x9, #0x1b8]
7101dd60e8  cbz x9,0x7101dd6150
7101dd60ec  mov x10,x8
7101dd60f0  ldr w11,[x9, #0x20]
7101dd60f4  cmp w11,#0x8
7101dd60f8  cset w11,lt
7101dd60fc  csel x10,x10,x9,lt
7101dd6100  ldr x9,[x9, w11, UXTW #0x3]
7101dd6104  cbnz x9,0x7101dd60f0
7101dd6108  cmp x10,x8
7101dd610c  b.eq 0x7101dd6150
7101dd6110  ldr w8,[x10, #0x20]
7101dd6114  cmp w8,#0x8
7101dd6118  b.gt 0x7101dd6150
7101dd611c  ldr x23,[x10, #0x28]
7101dd6120  cbz x23,0x7101dd6150
7101dd6124  ldr x8,[x23]
7101dd6128  ldr x8,[x8, #0x1f8]
7101dd612c  mov w1,#0x1
7101dd6130  mov x0,x23
7101dd6134  blr x8
7101dd6138  ldr x8,[x23]
7101dd613c  ldr x8,[x8, #0x388]
7101dd6140  mov x0,x23
7101dd6144  mov w1,wzr
7101dd6148  mov w2,wzr
7101dd614c  blr x8
7101dd6150  adrp x9,0x710532f000
7101dd6154  adrp x8,0x7105329000
7101dd6158  ldr x9,[x9, #0x730]
7101dd615c  ldr x8,[x8, #0xfa0]
7101dd6160  ldr x24,[x9, #0x8]
7101dd6164  ldr x8,[x8]
7101dd6168  ldr x23,[x24, #0x1d8]
7101dd616c  ldr x1,[x8, #0x7e8]
7101dd6170  mov x0,x23
7101dd6174  bl 0x71032a7800
7101dd6178  ldp x9,x8,[x23, #0x20]
7101dd617c  str x25,[sp, #0x18]
7101dd6180  sub x8,x8,x9
7101dd6184  lsr x8,x8,#0x6
7101dd6188  mov w10,#0xcccd
7101dd618c  movk w10,#0xcccc, LSL #16
7101dd6190  mul w8,w8,w10
7101dd6194  orr w10,wzr,#0xffff
7101dd6198  cmp w0,w8
7101dd619c  b.cs 0x7101dd61b8
7101dd61a0  mov w11,#0x140
7101dd61a4  umull x11,w0,w11
7101dd61a8  ldrh w9,[x9, x11, LSL #0x0]
7101dd61ac  cmp w9,w10
7101dd61b0  b.ne 0x7101dd61c4
7101dd61b4  b 0x7101dd6210
7101dd61b8  orr w9,wzr,#0xffff
7101dd61bc  cmp w9,w10
7101dd61c0  b.eq 0x7101dd6210
7101dd61c4  sxth w10,w9
7101dd61c8  cmp w10,#0x7cf
7101dd61cc  b.gt 0x7101dd6210
7101dd61d0  lsl x10,x9,#0x30
7101dd61d4  add x10,x23,x10, ASR #0x2f
7101dd61d8  ldrh w10,[x10, #0x60]
7101dd61dc  cmp w8,w10
7101dd61e0  b.ls 0x7101dd6210
7101dd61e4  adrp x8,0x7105329000
7101dd61e8  ldr x8,[x8, #0xf98]
7101dd61ec  ldr x8,[x8]
7101dd61f0  ldr x8,[x8, #0x30]
7101dd61f4  sxth x9,w9
7101dd61f8  mov w10,#0x24
7101dd61fc  madd x8,x9,x10,x8
7101dd6200  ldrh w8,[x8, #0x20]
7101dd6204  cbz w8,0x7101dd6210
7101dd6208  mov w23,#0x1
7101dd620c  b 0x7101dd6318
7101dd6210  mov x19,x26
7101dd6214  mov x26,x27
7101dd6218  mov x27,x28
7101dd621c  mov w23,wzr
7101dd6220  mov w25,wzr
7101dd6224  mov x22,#0x5200000000000000
7101dd6228  mov w28,#0x24
7101dd622c  ldr x0,[x24, #0x208]
7101dd6230  mov w1,w23
7101dd6234  bl 0x71032a3bd0
7101dd6238  and x9,x0,#-0x100000000000000
7101dd623c  and x8,x0,#0xffffffffff
7101dd6240  cmp x9,x22
7101dd6244  ccmp x8,#0x0,#0x4,eq
7101dd6248  b.ne 0x7101dd6254
7101dd624c  orr w0,wzr,#0xffff
7101dd6250  b 0x7101dd6260
7101dd6254  mov x1,x0
7101dd6258  ldr x0,[x24, #0x208]
7101dd625c  bl 0x71032a5750
7101dd6260  adrp x9,0x710532f000
7101dd6264  ldr x9,[x9, #0x730]
7101dd6268  ldr x24,[x9, #0x8]
7101dd626c  mvn w9,w0
7101dd6270  mov w8,wzr
7101dd6274  tst w9,#0xffff
7101dd6278  b.eq 0x7101dd62e4
7101dd627c  sxth w9,w0
7101dd6280  cmp w9,#0x7cf
7101dd6284  b.gt 0x7101dd62e4
7101dd6288  ldr x8,[x24, #0x1d8]
7101dd628c  lsl x9,x0,#0x30
7101dd6290  add x9,x8,x9, ASR #0x2f
7101dd6294  ldp x10,x8,[x8, #0x20]
7101dd6298  ldrh w9,[x9, #0x60]
7101dd629c  sub x8,x8,x10
7101dd62a0  mov w10,#0xcccd
7101dd62a4  movk w10,#0xcccc, LSL #16
7101dd62a8  lsr x8,x8,#0x6
7101dd62ac  mul w8,w8,w10
7101dd62b0  cmp w8,w9
7101dd62b4  b.ls 0x7101dd62e0
7101dd62b8  adrp x8,0x7105329000
7101dd62bc  ldr x8,[x8, #0xf98]
7101dd62c0  ldr x8,[x8]
7101dd62c4  ldr x8,[x8, #0x30]
7101dd62c8  sxth x9,w0
7101dd62cc  madd x8,x9,x28,x8
7101dd62d0  ldrh w8,[x8, #0x20]
7101dd62d4  cmp w8,#0x0
7101dd62d8  cset w8,ne
7101dd62dc  b 0x7101dd62e4
7101dd62e0  mov w8,wzr
7101dd62e4  add w23,w23,#0x1
7101dd62e8  add w25,w25,w8
7101dd62ec  cmp w23,#0xf
7101dd62f0  b.ne 0x7101dd622c
7101dd62f4  cbz w25,0x7101dd6300
7101dd62f8  mov w23,#0x1
7101dd62fc  b 0x7101dd630c
7101dd6300  bl 0x71025136e0
7101dd6304  cmp w0,#0x0
7101dd6308  cset w23,ne
7101dd630c  mov x28,x27
7101dd6310  mov x27,x26
7101dd6314  mov x26,x19
7101dd6318  ldr x9,[x21]
7101dd631c  ldr x25,[sp, #0x18]
7101dd6320  ldr x8,[x9, #0x1b8]
7101dd6324  cbz x8,0x7101dd6408
7101dd6328  add x9,x9,#0x1b8
7101dd632c  mov x10,x9
7101dd6330  mov x11,x8
7101dd6334  ldr w12,[x11, #0x20]
7101dd6338  cmp w12,#0x6
7101dd633c  cset w12,lt
7101dd6340  csel x10,x10,x11,lt
7101dd6344  ldr x11,[x11, w12, UXTW #0x3]
7101dd6348  cbnz x11,0x7101dd6334
7101dd634c  cmp x10,x9
7101dd6350  b.eq 0x7101dd63a0
7101dd6354  ldr w11,[x10, #0x20]
7101dd6358  cmp w11,#0x6
7101dd635c  b.gt 0x7101dd63a0
7101dd6360  ldr x24,[x10, #0x28]
7101dd6364  cbz x24,0x7101dd63a0
7101dd6368  ldr x8,[x24]
7101dd636c  ldr x8,[x8, #0x208]
7101dd6370  mov x0,x24
7101dd6374  mov w1,w23
7101dd6378  blr x8
7101dd637c  ldr x8,[x24]
7101dd6380  ldr x8,[x8, #0x388]
7101dd6384  eor w1,w23,#0x1
7101dd6388  mov x0,x24
7101dd638c  mov w2,wzr
7101dd6390  blr x8
7101dd6394  ldr x8,[x21]
7101dd6398  add x9,x8,#0x1b8
7101dd639c  ldr x8,[x8, #0x1b8]
7101dd63a0  cbz x8,0x7101dd6408
7101dd63a4  mov x10,x9
7101dd63a8  ldr w11,[x8, #0x20]
7101dd63ac  cmp w11,#0x6
7101dd63b0  cset w11,lt
7101dd63b4  csel x10,x10,x8,lt
7101dd63b8  ldr x8,[x8, w11, UXTW #0x3]
7101dd63bc  cbnz x8,0x7101dd63a8
7101dd63c0  cmp x10,x9
7101dd63c4  b.eq 0x7101dd6408
7101dd63c8  ldr w8,[x10, #0x20]
7101dd63cc  cmp w8,#0x6
7101dd63d0  b.gt 0x7101dd6408
7101dd63d4  ldr x24,[x10, #0x28]
7101dd63d8  cbz x24,0x7101dd6408
7101dd63dc  ldr x8,[x24]
7101dd63e0  ldr x8,[x8, #0x1f8]
7101dd63e4  mov x0,x24
7101dd63e8  mov w1,w23
7101dd63ec  blr x8
7101dd63f0  ldr x8,[x24]
7101dd63f4  ldr x8,[x8, #0x388]
7101dd63f8  eor w1,w23,#0x1
7101dd63fc  mov x0,x24
7101dd6400  mov w2,wzr
7101dd6404  blr x8
7101dd6408  adrp x19,0x710523d000
7101dd640c  add x19,x19,#0x9c8
7101dd6410  tbnz w23,#0x0,0x7101dd6470
7101dd6414  ldr x1,[x21]
7101dd6418  sub x0,x29,#0xc0
7101dd641c  orr w2,wzr,#0x6
7101dd6420  bl 0x7103771d60
7101dd6424  ldur x23,[x29, #-0xb8]
7101dd6428  ldr x1,[x23]
7101dd642c  add x0,sp,#0x150
7101dd6430  bl 0x710377ad90
7101dd6434  ldr x0,[sp, #0x158]
7101dd6438  ldr x8,[x0]
7101dd643c  cbz x8,0x7101dd644c
7101dd6440  ldrb w9,[x8, #0x58]
7101dd6444  and w9,w9,#0xfe
7101dd6448  strb w9,[x8, #0x58]
7101dd644c  adrp x8,0x710523d000
7101dd6450  add x8,x8,#0x9a8
7101dd6454  stp x8,xzr,[sp, #0x150]
7101dd6458  cbz x0,0x7101dd6460
7101dd645c  bl 0x710392eb40
7101dd6460  stp x19,xzr,[x29, #-0xc0]
7101dd6464  cbz x23,0x7101dd6470
7101dd6468  mov x0,x23
7101dd646c  bl 0x710392eb40
7101dd6470  adrp x0,0x710435b000
7101dd6474  add x0,x0,#0xd3c
7101dd6478  add x8,sp,#0x150
7101dd647c  add x22,sp,#0x150
7101dd6480  bl 0x71003a4ca0
7101dd6484  add x1,x22,#0x8
7101dd6488  sub x8,x29,#0xc0
7101dd648c  mov x0,x25
7101dd6490  sub x22,x29,#0xc0
7101dd6494  bl 0x7103776640
7101dd6498  add x8,x20,#0xe0
7101dd649c  cmp x8,x22
7101dd64a0  b.eq 0x7101dd64d8
7101dd64a4  ldur x8,[x29, #-0xb8]
7101dd64a8  stur xzr,[x29, #-0xb8]
7101dd64ac  ldr x23,[x20, #0xe8]
7101dd64b0  str x8,[x20, #0xe8]
7101dd64b4  cbz x23,0x7101dd64d8
7101dd64b8  ldr x0,[x23, #0x18]
7101dd64bc  adrp x8,0x710523d000
7101dd64c0  add x8,x8,#0x9a8
7101dd64c4  stp x8,xzr,[x23, #0x10]
7101dd64c8  cbz x0,0x7101dd64d0
7101dd64cc  bl 0x710392eb40
7101dd64d0  mov x0,x23
7101dd64d4  bl 0x710392eb40
7101dd64d8  ldur x23,[x29, #-0xb8]
7101dd64dc  adrp x8,0x710523d000
7101dd64e0  add x8,x8,#0x988
7101dd64e4  stp x8,xzr,[x29, #-0xc0]
7101dd64e8  cbz x23,0x7101dd650c
7101dd64ec  ldr x0,[x23, #0x18]
7101dd64f0  adrp x8,0x710523d000
7101dd64f4  add x8,x8,#0x9a8
7101dd64f8  stp x8,xzr,[x23, #0x10]
7101dd64fc  cbz x0,0x7101dd6504
7101dd6500  bl 0x710392eb40
7101dd6504  mov x0,x23
7101dd6508  bl 0x710392eb40
7101dd650c  bl 0x7102513950
7101dd6510  ldr x9,[x21]
7101dd6514  ldr x8,[x9, #0x1b8]
7101dd6518  mov w23,w0
7101dd651c  cbz x8,0x7101dd6618
7101dd6520  add x9,x9,#0x1b8
7101dd6524  mov x10,x9
7101dd6528  mov x11,x8
7101dd652c  ldr w12,[x11, #0x20]
7101dd6530  cmp w12,#0x7
7101dd6534  cset w12,lt
7101dd6538  csel x10,x10,x11,lt
7101dd653c  ldr x11,[x11, w12, UXTW #0x3]
7101dd6540  cbnz x11,0x7101dd652c
7101dd6544  cmp x10,x9
7101dd6548  b.eq 0x7101dd65a4
7101dd654c  ldr w11,[x10, #0x20]
7101dd6550  cmp w11,#0x7
7101dd6554  b.gt 0x7101dd65a4
7101dd6558  ldr x24,[x10, #0x28]
7101dd655c  cbz x24,0x7101dd65a4
7101dd6560  ldr x8,[x24]
7101dd6564  ldr x8,[x8, #0x208]
7101dd6568  cmp w23,#0x0
7101dd656c  cset w1,ne
7101dd6570  mov x0,x24
7101dd6574  cset w25,eq
7101dd6578  blr x8
7101dd657c  ldr x8,[x24]
7101dd6580  ldr x8,[x8, #0x388]
7101dd6584  mov w1,w25
7101dd6588  ldr x25,[sp, #0x18]
7101dd658c  mov x0,x24
7101dd6590  mov w2,wzr
7101dd6594  blr x8
7101dd6598  ldr x8,[x21]
7101dd659c  add x9,x8,#0x1b8
7101dd65a0  ldr x8,[x8, #0x1b8]
7101dd65a4  cbz x8,0x7101dd6618
7101dd65a8  mov x10,x9
7101dd65ac  ldr w11,[x8, #0x20]
7101dd65b0  cmp w11,#0x7
7101dd65b4  cset w11,lt
7101dd65b8  csel x10,x10,x8,lt
7101dd65bc  ldr x8,[x8, w11, UXTW #0x3]
7101dd65c0  cbnz x8,0x7101dd65ac
7101dd65c4  cmp x10,x9
7101dd65c8  b.eq 0x7101dd6618
7101dd65cc  ldr w8,[x10, #0x20]
7101dd65d0  cmp w8,#0x7
7101dd65d4  b.gt 0x7101dd6618
7101dd65d8  ldr x24,[x10, #0x28]
7101dd65dc  cbz x24,0x7101dd6618
7101dd65e0  ldr x8,[x24]
7101dd65e4  ldr x8,[x8, #0x1f8]
7101dd65e8  cmp w23,#0x0
7101dd65ec  cset w1,ne
7101dd65f0  mov x0,x24
7101dd65f4  cset w25,eq
7101dd65f8  blr x8
7101dd65fc  ldr x8,[x24]
7101dd6600  ldr x8,[x8, #0x388]
7101dd6604  mov w1,w25
7101dd6608  ldr x25,[sp, #0x18]
7101dd660c  mov x0,x24
7101dd6610  mov w2,wzr
7101dd6614  blr x8
7101dd6618  cbz w23,0x7101dd6718
7101dd661c  adrp x8,0x7105329000
7101dd6620  ldr x8,[x8, #0xf98]
7101dd6624  adrp x19,0x7105329000
7101dd6628  ldr x24,[x8]
7101dd662c  ldr x8,[x19, #0xfa0]
7101dd6630  ldr x8,[x8]
7101dd6634  ldr x9,[x8, #0x8d8]
7101dd6638  ldr x8,[x8, #0x8d0]
7101dd663c  cmp x9,x8
7101dd6640  b.eq 0x7101dd6a8c
7101dd6644  adrp x9,0x710532f000
7101dd6648  ldr x9,[x9, #0x730]
7101dd664c  ldr x22,[x9, #0x8]
7101dd6650  ldr x23,[x22, #0x1d8]
7101dd6654  ldr x1,[x8]
7101dd6658  mov x0,x23
7101dd665c  bl 0x71032a7800
7101dd6660  ldp x8,x9,[x23, #0x20]
7101dd6664  sub x9,x9,x8
7101dd6668  lsr x9,x9,#0x6
7101dd666c  mov w10,#0xcccd
7101dd6670  movk w10,#0xcccc, LSL #16
7101dd6674  mul w9,w9,w10
7101dd6678  cmp w0,w9
7101dd667c  b.cs 0x7101dd6a8c
7101dd6680  mov w9,#0x140
7101dd6684  umull x9,w0,w9
7101dd6688  str wzr,[sp, #0x10]
7101dd668c  ldrsh w8,[x8, x9, LSL #0x0]
7101dd6690  cmn w8,#0x1
7101dd6694  b.eq 0x7101dd6a90
7101dd6698  cmp w8,#0x7cf
7101dd669c  b.gt 0x7101dd6a90
7101dd66a0  ldp x10,x11,[x23, #0x20]
7101dd66a4  and x8,x8,#0xffff
7101dd66a8  lsl x9,x8,#0x30
7101dd66ac  add x9,x23,x9, ASR #0x2f
7101dd66b0  sub x10,x11,x10
7101dd66b4  ldrh w9,[x9, #0x60]
7101dd66b8  lsr x10,x10,#0x6
7101dd66bc  mov w11,#0xcccd
7101dd66c0  movk w11,#0xcccc, LSL #16
7101dd66c4  mul w10,w10,w11
7101dd66c8  cmp w10,w9
7101dd66cc  b.ls 0x7101dd6a8c
7101dd66d0  ldr x9,[x24, #0x30]
7101dd66d4  sxth x8,w8
7101dd66d8  mov w10,#0x24
7101dd66dc  madd x8,x8,x10,x9
7101dd66e0  ldrh w8,[x8, #0x20]
7101dd66e4  cbz w8,0x7101dd6a8c
7101dd66e8  ldr x8,[x24, #0x40]
7101dd66ec  ldr x0,[x8, #0x90]
7101dd66f0  str x24,[sp, #0x8]
7101dd66f4  cbz x0,0x7101dd67b0
7101dd66f8  mov w1,wzr
7101dd66fc  bl 0x7102510b80
7101dd6700  ldr x8,[x24, #0x40]
7101dd6704  ldr x9,[x8, #0x90]
7101dd6708  adrp x8,0x710532f000
7101dd670c  ldr x8,[x8, #0x730]
7101dd6710  ldr x22,[x8, #0x8]
7101dd6714  b 0x7101dd67b4
7101dd6718  ldr x1,[x21]
7101dd671c  sub x0,x29,#0xc0
7101dd6720  orr w2,wzr,#0x7
7101dd6724  bl 0x7103771d60
7101dd6728  ldur x23,[x29, #-0xb8]
7101dd672c  ldr x1,[x23]
7101dd6730  add x0,sp,#0x150
7101dd6734  bl 0x710377ad90
7101dd6738  ldr x0,[sp, #0x158]
7101dd673c  ldr x8,[x0]
7101dd6740  cbz x8,0x7101dd6750
7101dd6744  ldrb w9,[x8, #0x58]
7101dd6748  and w9,w9,#0xfe
7101dd674c  strb w9,[x8, #0x58]
7101dd6750  adrp x8,0x710523d000
7101dd6754  add x8,x8,#0x9a8
7101dd6758  adrp x19,0x710523d000
7101dd675c  add x19,x19,#0x9c8
7101dd6760  stp x8,xzr,[sp, #0x150]
7101dd6764  cbz x0,0x7101dd676c
7101dd6768  bl 0x710392eb40
7101dd676c  stp x19,xzr,[x29, #-0xc0]
7101dd6770  cbz x23,0x7101dd677c
7101dd6774  mov x0,x23
7101dd6778  bl 0x710392eb40
7101dd677c  adrp x24,0x710424f000
7101dd6780  add x24,x24,#0x9f8
7101dd6784  b 0x7101dd7768
7101dd6788  ldr x9,[x9, #0x28]
7101dd678c  cbz x9,0x7101dd5464
7101dd6790  ldr x1,[x9, #0x88]
7101dd6794  add x0,x8,#0x160
7101dd6798  sub x8,x29,#0xc0
7101dd679c  bl 0x7103776ad0
7101dd67a0  ldur x23,[x29, #-0xb8]
7101dd67a4  ldr x0,[x23]
7101dd67a8  cbnz x0,0x7101dd54dc
7101dd67ac  b 0x7101dd54ec
7101dd67b0  mov x9,xzr
7101dd67b4  ldr x8,[x22, #0x2f8]
7101dd67b8  ldr x25,[x8, #0x8]
7101dd67bc  mov x19,#0xcd2e
7101dd67c0  movk x19,#0x9337, LSL #16
7101dd67c4  ldr x23,[x9]
7101dd67c8  movk x19,#0x16, LSL #32
7101dd67cc  mov x1,x19
7101dd67d0  str x9,[sp, #0x10]
7101dd67d4  mov x0,x25
7101dd67d8  mov x24,#-0x3f00000000000000
7101dd67dc  bl 0x71032817a0
7101dd67e0  ldr x12,[x23, #0x10]
7101dd67e4  and x10,x12,#-0x100000000000000
7101dd67e8  and x9,x12,#0xffffffffff
7101dd67ec  and x8,x0,#0xffffffffff
7101dd67f0  cmp x10,x24
7101dd67f4  b.ne 0x7101dd681c
7101dd67f8  cbz x9,0x7101dd681c
7101dd67fc  and x11,x0,#-0x100000000000000
7101dd6800  cmp x11,x24
7101dd6804  b.ne 0x7101dd6820
7101dd6808  cbz x8,0x7101dd6820
7101dd680c  eor x8,x0,x12
7101dd6810  tst x8,#0xffffffffff
7101dd6814  b.ne 0x7101dd6880
7101dd6818  b 0x7101dd6854
7101dd681c  and x11,x0,#-0x100000000000000
7101dd6820  cmp x10,x24
7101dd6824  cset w10,eq
7101dd6828  cmp x9,#0x0
7101dd682c  cset w9,ne
7101dd6830  cmp x8,#0x0
7101dd6834  cset w8,ne
7101dd6838  cmp x11,x24
7101dd683c  and w9,w10,w9
7101dd6840  cset w10,eq
7101dd6844  and w8,w8,w10
7101dd6848  eor w8,w8,w9
7101dd684c  cmp w8,#0x1
7101dd6850  b.eq 0x7101dd6880
7101dd6854  add x1,x23,#0x10
7101dd6858  mov x0,x23
7101dd685c  bl 0x71025128e0
7101dd6860  tbz w0,#0x0,0x7101dd6a28
7101dd6864  ldr x8,[sp, #0x10]
7101dd6868  ldr x23,[x8]
7101dd686c  adrp x8,0x710532f000
7101dd6870  ldr x8,[x8, #0x730]
7101dd6874  ldr x8,[x8, #0x8]
7101dd6878  ldr x8,[x8, #0x2f8]
7101dd687c  ldr x25,[x8, #0x8]
7101dd6880  mov x0,x25
7101dd6884  mov x1,x19
7101dd6888  bl 0x71032817a0
7101dd688c  ldr x12,[x23, #0x40]
7101dd6890  and x10,x12,#-0x100000000000000
7101dd6894  and x9,x12,#0xffffffffff
7101dd6898  and x8,x0,#0xffffffffff
7101dd689c  cmp x10,x24
7101dd68a0  b.ne 0x7101dd68c8
7101dd68a4  cbz x9,0x7101dd68c8
7101dd68a8  and x11,x0,#-0x100000000000000
7101dd68ac  cmp x11,x24
7101dd68b0  b.ne 0x7101dd68cc
7101dd68b4  cbz x8,0x7101dd68cc
7101dd68b8  eor x8,x0,x12
7101dd68bc  tst x8,#0xffffffffff
7101dd68c0  b.ne 0x7101dd692c
7101dd68c4  b 0x7101dd6900
7101dd68c8  and x11,x0,#-0x100000000000000
7101dd68cc  cmp x10,x24
7101dd68d0  cset w10,eq
7101dd68d4  cmp x9,#0x0
7101dd68d8  cset w9,ne
7101dd68dc  cmp x8,#0x0
7101dd68e0  cset w8,ne
7101dd68e4  cmp x11,x24
7101dd68e8  and w9,w10,w9
7101dd68ec  cset w10,eq
7101dd68f0  and w8,w8,w10
7101dd68f4  eor w8,w8,w9
7101dd68f8  cmp w8,#0x1
7101dd68fc  b.eq 0x7101dd692c
7101dd6900  add x1,x23,#0x40
7101dd6904  mov x0,x23
7101dd6908  bl 0x71025128e0
7101dd690c  tbz w0,#0x0,0x7101dd6a28
7101dd6910  ldr x8,[sp, #0x10]
7101dd6914  ldr x23,[x8]
7101dd6918  adrp x8,0x710532f000
7101dd691c  ldr x8,[x8, #0x730]
7101dd6920  ldr x8,[x8, #0x8]
7101dd6924  ldr x8,[x8, #0x2f8]
7101dd6928  ldr x25,[x8, #0x8]
7101dd692c  mov x0,x25
7101dd6930  mov x1,x19
7101dd6934  bl 0x71032817a0
7101dd6938  ldr x12,[x23, #0x70]
7101dd693c  and x10,x12,#-0x100000000000000
7101dd6940  and x9,x12,#0xffffffffff
7101dd6944  and x8,x0,#0xffffffffff
7101dd6948  cmp x10,x24
7101dd694c  b.ne 0x7101dd6974
7101dd6950  cbz x9,0x7101dd6974
7101dd6954  and x11,x0,#-0x100000000000000
7101dd6958  cmp x11,x24
7101dd695c  b.ne 0x7101dd6978
7101dd6960  cbz x8,0x7101dd6978
7101dd6964  eor x8,x0,x12
7101dd6968  tst x8,#0xffffffffff
7101dd696c  b.ne 0x7101dd69d8
7101dd6970  b 0x7101dd69ac
7101dd6974  and x11,x0,#-0x100000000000000
7101dd6978  cmp x10,x24
7101dd697c  cset w10,eq
7101dd6980  cmp x9,#0x0
7101dd6984  cset w9,ne
7101dd6988  cmp x8,#0x0
7101dd698c  cset w8,ne
7101dd6990  cmp x11,x24
7101dd6994  and w9,w10,w9
7101dd6998  cset w10,eq
7101dd699c  and w8,w8,w10
7101dd69a0  eor w8,w8,w9
7101dd69a4  cmp w8,#0x1
7101dd69a8  b.eq 0x7101dd69d8
7101dd69ac  add x1,x23,#0x70
7101dd69b0  mov x0,x23
7101dd69b4  bl 0x71025128e0
7101dd69b8  tbz w0,#0x0,0x7101dd6a28
7101dd69bc  ldr x8,[sp, #0x10]
7101dd69c0  ldr x23,[x8]
7101dd69c4  adrp x8,0x710532f000
7101dd69c8  ldr x8,[x8, #0x730]
7101dd69cc  ldr x8,[x8, #0x8]
7101dd69d0  ldr x8,[x8, #0x2f8]
7101dd69d4  ldr x25,[x8, #0x8]
7101dd69d8  mov x0,x25
7101dd69dc  mov x1,x19
7101dd69e0  bl 0x71032817a0
7101dd69e4  ldr x12,[x23, #0xa0]
7101dd69e8  and x10,x12,#-0x100000000000000
7101dd69ec  and x9,x12,#0xffffffffff
7101dd69f0  and x8,x0,#0xffffffffff
7101dd69f4  cmp x10,x24
7101dd69f8  b.ne 0x7101dd6a3c
7101dd69fc  cbz x9,0x7101dd6a3c
7101dd6a00  and x11,x0,#-0x100000000000000
7101dd6a04  cmp x11,x24
7101dd6a08  b.ne 0x7101dd6a40
7101dd6a0c  cbz x8,0x7101dd6a40
7101dd6a10  ldr x24,[sp, #0x8]
7101dd6a14  eor x8,x0,x12
7101dd6a18  tst x8,#0xffffffffff
7101dd6a1c  adrp x19,0x7105329000
7101dd6a20  b.ne 0x7101dd6a8c
7101dd6a24  b 0x7101dd6a7c
7101dd6a28  ldr x24,[sp, #0x8]
7101dd6a2c  mov w8,#0x1
7101dd6a30  str w8,[sp, #0x10]
7101dd6a34  adrp x19,0x7105329000
7101dd6a38  b 0x7101dd6a90
7101dd6a3c  and x11,x0,#-0x100000000000000
7101dd6a40  cmp x10,x24
7101dd6a44  cset w10,eq
7101dd6a48  cmp x9,#0x0
7101dd6a4c  cset w9,ne
7101dd6a50  cmp x8,#0x0
7101dd6a54  cset w8,ne
7101dd6a58  cmp x11,x24
7101dd6a5c  and w9,w10,w9
7101dd6a60  cset w10,eq
7101dd6a64  ldr x24,[sp, #0x8]
7101dd6a68  and w8,w8,w10
7101dd6a6c  eor w8,w8,w9
7101dd6a70  cmp w8,#0x1
7101dd6a74  adrp x19,0x7105329000
7101dd6a78  b.eq 0x7101dd6a8c
7101dd6a7c  add x1,x23,#0xa0
7101dd6a80  mov x0,x23
7101dd6a84  bl 0x71025128e0
7101dd6a88  tbz w0,#0x0,0x7101dd842c
7101dd6a8c  str wzr,[sp, #0x10]
7101dd6a90  ldr x8,[x19, #0xfa0]
7101dd6a94  ldr x8,[x8]
7101dd6a98  adrp x10,0x710532f000
7101dd6a9c  ldr x10,[x10, #0x730]
7101dd6aa0  ldr x25,[x10, #0x8]
7101dd6aa4  ldr x9,[x8, #0x8d8]
7101dd6aa8  ldr x8,[x8, #0x8d0]
7101dd6aac  sub x9,x9,x8
7101dd6ab0  asr x9,x9,#0x4
7101dd6ab4  cmp x9,#0x1
7101dd6ab8  b.ls 0x7101dd6afc
7101dd6abc  ldr x23,[x25, #0x1d8]
7101dd6ac0  ldr x1,[x8, #0x10]
7101dd6ac4  mov x0,x23
7101dd6ac8  bl 0x71032a7800
7101dd6acc  ldp x8,x9,[x23, #0x20]
7101dd6ad0  sub x9,x9,x8
7101dd6ad4  lsr x9,x9,#0x6
7101dd6ad8  mov w10,#0xcccd
7101dd6adc  movk w10,#0xcccc, LSL #16
7101dd6ae0  mul w9,w9,w10
7101dd6ae4  cmp w0,w9
7101dd6ae8  b.cs 0x7101dd6b00
7101dd6aec  mov w9,#0x140
7101dd6af0  umull x9,w0,w9
7101dd6af4  ldrh w8,[x8, x9, LSL #0x0]
7101dd6af8  b 0x7101dd6b04
7101dd6afc  ldr x23,[x25, #0x1d8]
7101dd6b00  orr w8,wzr,#0xffff
7101dd6b04  orr w9,wzr,#0xffff
7101dd6b08  cmp w8,w9
7101dd6b0c  b.eq 0x7101dd6e74
7101dd6b10  sxth w9,w8
7101dd6b14  cmp w9,#0x7cf
7101dd6b18  b.gt 0x7101dd6e74
7101dd6b1c  ldp x10,x11,[x23, #0x20]
7101dd6b20  lsl x9,x8,#0x30
7101dd6b24  add x9,x23,x9, ASR #0x2f
7101dd6b28  ldrh w9,[x9, #0x60]
7101dd6b2c  sub x10,x11,x10
7101dd6b30  mov w11,#0xcccd
7101dd6b34  movk w11,#0xcccc, LSL #16
7101dd6b38  lsr x10,x10,#0x6
7101dd6b3c  mul w10,w10,w11
7101dd6b40  cmp w10,w9
7101dd6b44  b.ls 0x7101dd6e74
7101dd6b48  adrp x9,0x7105329000
7101dd6b4c  ldr x9,[x9, #0xf98]
7101dd6b50  ldr x9,[x9]
7101dd6b54  ldr x9,[x9, #0x30]
7101dd6b58  sxth x8,w8
7101dd6b5c  mov w10,#0x24
7101dd6b60  madd x8,x8,x10,x9
7101dd6b64  ldrh w8,[x8, #0x20]
7101dd6b68  cbz w8,0x7101dd6e74
7101dd6b6c  ldr x8,[x24, #0x40]
7101dd6b70  ldr x0,[x8, #0x98]
7101dd6b74  str x24,[sp, #0x8]
7101dd6b78  cbz x0,0x7101dd6b9c
7101dd6b7c  mov w1,wzr
7101dd6b80  bl 0x7102510b80
7101dd6b84  ldr x8,[x24, #0x40]
7101dd6b88  ldr x9,[x8, #0x98]
7101dd6b8c  adrp x8,0x710532f000
7101dd6b90  ldr x8,[x8, #0x730]
7101dd6b94  ldr x25,[x8, #0x8]
7101dd6b98  b 0x7101dd6ba0
7101dd6b9c  mov x9,xzr
7101dd6ba0  ldr x8,[x25, #0x2f8]
7101dd6ba4  ldr x25,[x8, #0x8]
7101dd6ba8  mov x19,#0xcd2e
7101dd6bac  movk x19,#0x9337, LSL #16
7101dd6bb0  ldr x23,[x9]
7101dd6bb4  movk x19,#0x16, LSL #32
7101dd6bb8  mov x1,x19
7101dd6bbc  mov x22,x9
7101dd6bc0  mov x0,x25
7101dd6bc4  mov x24,#-0x3f00000000000000
7101dd6bc8  bl 0x71032817a0
7101dd6bcc  ldr x12,[x23, #0x10]
7101dd6bd0  and x10,x12,#-0x100000000000000
7101dd6bd4  and x9,x12,#0xffffffffff
7101dd6bd8  and x8,x0,#0xffffffffff
7101dd6bdc  cmp x10,x24
7101dd6be0  b.ne 0x7101dd6c08
7101dd6be4  cbz x9,0x7101dd6c08
7101dd6be8  and x11,x0,#-0x100000000000000
7101dd6bec  cmp x11,x24
7101dd6bf0  b.ne 0x7101dd6c0c
7101dd6bf4  cbz x8,0x7101dd6c0c
7101dd6bf8  eor x8,x0,x12
7101dd6bfc  tst x8,#0xffffffffff
7101dd6c00  b.ne 0x7101dd6c68
7101dd6c04  b 0x7101dd6c40
7101dd6c08  and x11,x0,#-0x100000000000000
7101dd6c0c  cmp x10,x24
7101dd6c10  cset w10,eq
7101dd6c14  cmp x9,#0x0
7101dd6c18  cset w9,ne
7101dd6c1c  cmp x8,#0x0
7101dd6c20  cset w8,ne
7101dd6c24  cmp x11,x24
7101dd6c28  and w9,w10,w9
7101dd6c2c  cset w10,eq
7101dd6c30  and w8,w8,w10
7101dd6c34  eor w8,w8,w9
7101dd6c38  cmp w8,#0x1
7101dd6c3c  b.eq 0x7101dd6c68
7101dd6c40  add x1,x23,#0x10
7101dd6c44  mov x0,x23
7101dd6c48  bl 0x71025128e0
7101dd6c4c  tbz w0,#0x0,0x7101dd6e08
7101dd6c50  adrp x8,0x710532f000
7101dd6c54  ldr x8,[x8, #0x730]
7101dd6c58  ldr x8,[x8, #0x8]
7101dd6c5c  ldr x8,[x8, #0x2f8]
7101dd6c60  ldr x23,[x22]
7101dd6c64  ldr x25,[x8, #0x8]
7101dd6c68  mov x0,x25
7101dd6c6c  mov x1,x19
7101dd6c70  bl 0x71032817a0
7101dd6c74  ldr x12,[x23, #0x40]
7101dd6c78  and x10,x12,#-0x100000000000000
7101dd6c7c  and x9,x12,#0xffffffffff
7101dd6c80  and x8,x0,#0xffffffffff
7101dd6c84  cmp x10,x24
7101dd6c88  b.ne 0x7101dd6cb0
7101dd6c8c  cbz x9,0x7101dd6cb0
7101dd6c90  and x11,x0,#-0x100000000000000
7101dd6c94  cmp x11,x24
7101dd6c98  b.ne 0x7101dd6cb4
7101dd6c9c  cbz x8,0x7101dd6cb4
7101dd6ca0  eor x8,x0,x12
7101dd6ca4  tst x8,#0xffffffffff
7101dd6ca8  b.ne 0x7101dd6d10
7101dd6cac  b 0x7101dd6ce8
7101dd6cb0  and x11,x0,#-0x100000000000000
7101dd6cb4  cmp x10,x24
7101dd6cb8  cset w10,eq
7101dd6cbc  cmp x9,#0x0
7101dd6cc0  cset w9,ne
7101dd6cc4  cmp x8,#0x0
7101dd6cc8  cset w8,ne
7101dd6ccc  cmp x11,x24
7101dd6cd0  and w9,w10,w9
7101dd6cd4  cset w10,eq
7101dd6cd8  and w8,w8,w10
7101dd6cdc  eor w8,w8,w9
7101dd6ce0  cmp w8,#0x1
7101dd6ce4  b.eq 0x7101dd6d10
7101dd6ce8  add x1,x23,#0x40
7101dd6cec  mov x0,x23
7101dd6cf0  bl 0x71025128e0
7101dd6cf4  tbz w0,#0x0,0x7101dd6e08
7101dd6cf8  adrp x8,0x710532f000
7101dd6cfc  ldr x8,[x8, #0x730]
7101dd6d00  ldr x8,[x8, #0x8]
7101dd6d04  ldr x8,[x8, #0x2f8]
7101dd6d08  ldr x23,[x22]
7101dd6d0c  ldr x25,[x8, #0x8]
7101dd6d10  mov x0,x25
7101dd6d14  mov x1,x19
7101dd6d18  bl 0x71032817a0
7101dd6d1c  ldr x12,[x23, #0x70]
7101dd6d20  and x10,x12,#-0x100000000000000
7101dd6d24  and x9,x12,#0xffffffffff
7101dd6d28  and x8,x0,#0xffffffffff
7101dd6d2c  cmp x10,x24
7101dd6d30  b.ne 0x7101dd6d58
7101dd6d34  cbz x9,0x7101dd6d58
7101dd6d38  and x11,x0,#-0x100000000000000
7101dd6d3c  cmp x11,x24
7101dd6d40  b.ne 0x7101dd6d5c
7101dd6d44  cbz x8,0x7101dd6d5c
7101dd6d48  eor x8,x0,x12
7101dd6d4c  tst x8,#0xffffffffff
7101dd6d50  b.ne 0x7101dd6db8
7101dd6d54  b 0x7101dd6d90
7101dd6d58  and x11,x0,#-0x100000000000000
7101dd6d5c  cmp x10,x24
7101dd6d60  cset w10,eq
7101dd6d64  cmp x9,#0x0
7101dd6d68  cset w9,ne
7101dd6d6c  cmp x8,#0x0
7101dd6d70  cset w8,ne
7101dd6d74  cmp x11,x24
7101dd6d78  and w9,w10,w9
7101dd6d7c  cset w10,eq
7101dd6d80  and w8,w8,w10
7101dd6d84  eor w8,w8,w9
7101dd6d88  cmp w8,#0x1
7101dd6d8c  b.eq 0x7101dd6db8
7101dd6d90  add x1,x23,#0x70
7101dd6d94  mov x0,x23
7101dd6d98  bl 0x71025128e0
7101dd6d9c  tbz w0,#0x0,0x7101dd6e08
7101dd6da0  adrp x8,0x710532f000
7101dd6da4  ldr x8,[x8, #0x730]
7101dd6da8  ldr x8,[x8, #0x8]
7101dd6dac  ldr x8,[x8, #0x2f8]
7101dd6db0  ldr x23,[x22]
7101dd6db4  ldr x25,[x8, #0x8]
7101dd6db8  mov x0,x25
7101dd6dbc  mov x1,x19
7101dd6dc0  bl 0x71032817a0
7101dd6dc4  ldr x12,[x23, #0xa0]
7101dd6dc8  and x10,x12,#-0x100000000000000
7101dd6dcc  and x9,x12,#0xffffffffff
7101dd6dd0  and x8,x0,#0xffffffffff
7101dd6dd4  cmp x10,x24
7101dd6dd8  b.ne 0x7101dd6e1c
7101dd6ddc  cbz x9,0x7101dd6e1c
7101dd6de0  and x11,x0,#-0x100000000000000
7101dd6de4  cmp x11,x24
7101dd6de8  b.ne 0x7101dd6e20
7101dd6dec  cbz x8,0x7101dd6e20
7101dd6df0  ldr x24,[sp, #0x8]
7101dd6df4  eor x8,x0,x12
7101dd6df8  tst x8,#0xffffffffff
7101dd6dfc  adrp x19,0x7105329000
7101dd6e00  b.ne 0x7101dd6e74
7101dd6e04  b 0x7101dd6e5c
7101dd6e08  ldr x24,[sp, #0x8]
7101dd6e0c  mov w8,#0x1
7101dd6e10  str w8,[sp, #0x10]
7101dd6e14  adrp x19,0x7105329000
7101dd6e18  b 0x7101dd6e74
7101dd6e1c  and x11,x0,#-0x100000000000000
7101dd6e20  cmp x10,x24
7101dd6e24  cset w10,eq
7101dd6e28  cmp x9,#0x0
7101dd6e2c  cset w9,ne
7101dd6e30  cmp x8,#0x0
7101dd6e34  cset w8,ne
7101dd6e38  cmp x11,x24
7101dd6e3c  and w9,w10,w9
7101dd6e40  cset w10,eq
7101dd6e44  ldr x24,[sp, #0x8]
7101dd6e48  and w8,w8,w10
7101dd6e4c  eor w8,w8,w9
7101dd6e50  cmp w8,#0x1
7101dd6e54  adrp x19,0x7105329000
7101dd6e58  b.eq 0x7101dd6e74
7101dd6e5c  add x1,x23,#0xa0
7101dd6e60  mov x0,x23
7101dd6e64  bl 0x71025128e0
7101dd6e68  tbnz w0,#0x0,0x7101dd6e74
7101dd6e6c  mov w8,#0x1
7101dd6e70  str w8,[sp, #0x10]
7101dd6e74  ldr x8,[x19, #0xfa0]
7101dd6e78  ldr x8,[x8]
7101dd6e7c  adrp x10,0x710532f000
7101dd6e80  ldr x10,[x10, #0x730]
7101dd6e84  ldr x25,[x10, #0x8]
7101dd6e88  ldr x9,[x8, #0x8d8]
7101dd6e8c  ldr x8,[x8, #0x8d0]
7101dd6e90  sub x9,x9,x8
7101dd6e94  asr x9,x9,#0x4
7101dd6e98  cmp x9,#0x2
7101dd6e9c  b.ls 0x7101dd6ee0
7101dd6ea0  ldr x23,[x25, #0x1d8]
7101dd6ea4  ldr x1,[x8, #0x20]
7101dd6ea8  mov x0,x23
7101dd6eac  bl 0x71032a7800
7101dd6eb0  ldp x8,x9,[x23, #0x20]
7101dd6eb4  sub x9,x9,x8
7101dd6eb8  lsr x9,x9,#0x6
7101dd6ebc  mov w10,#0xcccd
7101dd6ec0  movk w10,#0xcccc, LSL #16
7101dd6ec4  mul w9,w9,w10
7101dd6ec8  cmp w0,w9
7101dd6ecc  b.cs 0x7101dd6ee4
7101dd6ed0  mov w9,#0x140
7101dd6ed4  umull x9,w0,w9
7101dd6ed8  ldrh w8,[x8, x9, LSL #0x0]
7101dd6edc  b 0x7101dd6ee8
7101dd6ee0  ldr x23,[x25, #0x1d8]
7101dd6ee4  orr w8,wzr,#0xffff
7101dd6ee8  orr w9,wzr,#0xffff
7101dd6eec  cmp w8,w9
7101dd6ef0  b.eq 0x7101dd7258
7101dd6ef4  sxth w9,w8
7101dd6ef8  cmp w9,#0x7cf
7101dd6efc  b.gt 0x7101dd7258
7101dd6f00  ldp x10,x11,[x23, #0x20]
7101dd6f04  lsl x9,x8,#0x30
7101dd6f08  add x9,x23,x9, ASR #0x2f
7101dd6f0c  ldrh w9,[x9, #0x60]
7101dd6f10  sub x10,x11,x10
7101dd6f14  mov w11,#0xcccd
7101dd6f18  movk w11,#0xcccc, LSL #16
7101dd6f1c  lsr x10,x10,#0x6
7101dd6f20  mul w10,w10,w11
7101dd6f24  cmp w10,w9
7101dd6f28  b.ls 0x7101dd7258
7101dd6f2c  adrp x9,0x7105329000
7101dd6f30  ldr x9,[x9, #0xf98]
7101dd6f34  ldr x9,[x9]
7101dd6f38  ldr x9,[x9, #0x30]
7101dd6f3c  sxth x8,w8
7101dd6f40  mov w10,#0x24
7101dd6f44  madd x8,x8,x10,x9
7101dd6f48  ldrh w8,[x8, #0x20]
7101dd6f4c  cbz w8,0x7101dd7258
7101dd6f50  ldr x8,[x24, #0x40]
7101dd6f54  ldr x0,[x8, #0xa0]
7101dd6f58  str x24,[sp, #0x8]
7101dd6f5c  cbz x0,0x7101dd6f80
7101dd6f60  mov w1,wzr
7101dd6f64  bl 0x7102510b80
7101dd6f68  ldr x8,[x24, #0x40]
7101dd6f6c  ldr x9,[x8, #0xa0]
7101dd6f70  adrp x8,0x710532f000
7101dd6f74  ldr x8,[x8, #0x730]
7101dd6f78  ldr x25,[x8, #0x8]
7101dd6f7c  b 0x7101dd6f84
7101dd6f80  mov x9,xzr
7101dd6f84  ldr x8,[x25, #0x2f8]
7101dd6f88  ldr x25,[x8, #0x8]
7101dd6f8c  mov x19,#0xcd2e
7101dd6f90  movk x19,#0x9337, LSL #16
7101dd6f94  ldr x23,[x9]
7101dd6f98  movk x19,#0x16, LSL #32
7101dd6f9c  mov x1,x19
7101dd6fa0  mov x22,x9
7101dd6fa4  mov x0,x25
7101dd6fa8  mov x24,#-0x3f00000000000000
7101dd6fac  bl 0x71032817a0
7101dd6fb0  ldr x12,[x23, #0x10]
7101dd6fb4  and x10,x12,#-0x100000000000000
7101dd6fb8  and x9,x12,#0xffffffffff
7101dd6fbc  and x8,x0,#0xffffffffff
7101dd6fc0  cmp x10,x24
7101dd6fc4  b.ne 0x7101dd6fec
7101dd6fc8  cbz x9,0x7101dd6fec
7101dd6fcc  and x11,x0,#-0x100000000000000
7101dd6fd0  cmp x11,x24
7101dd6fd4  b.ne 0x7101dd6ff0
7101dd6fd8  cbz x8,0x7101dd6ff0
7101dd6fdc  eor x8,x0,x12
7101dd6fe0  tst x8,#0xffffffffff
7101dd6fe4  b.ne 0x7101dd704c
7101dd6fe8  b 0x7101dd7024
7101dd6fec  and x11,x0,#-0x100000000000000
7101dd6ff0  cmp x10,x24
7101dd6ff4  cset w10,eq
7101dd6ff8  cmp x9,#0x0
7101dd6ffc  cset w9,ne
7101dd7000  cmp x8,#0x0
7101dd7004  cset w8,ne
7101dd7008  cmp x11,x24
7101dd700c  and w9,w10,w9
7101dd7010  cset w10,eq
7101dd7014  and w8,w8,w10
7101dd7018  eor w8,w8,w9
7101dd701c  cmp w8,#0x1
7101dd7020  b.eq 0x7101dd704c
7101dd7024  add x1,x23,#0x10
7101dd7028  mov x0,x23
7101dd702c  bl 0x71025128e0
7101dd7030  tbz w0,#0x0,0x7101dd71ec
7101dd7034  adrp x8,0x710532f000
7101dd7038  ldr x8,[x8, #0x730]
7101dd703c  ldr x8,[x8, #0x8]
7101dd7040  ldr x8,[x8, #0x2f8]
7101dd7044  ldr x23,[x22]
7101dd7048  ldr x25,[x8, #0x8]
7101dd704c  mov x0,x25
7101dd7050  mov x1,x19
7101dd7054  bl 0x71032817a0
7101dd7058  ldr x12,[x23, #0x40]
7101dd705c  and x10,x12,#-0x100000000000000
7101dd7060  and x9,x12,#0xffffffffff
7101dd7064  and x8,x0,#0xffffffffff
7101dd7068  cmp x10,x24
7101dd706c  b.ne 0x7101dd7094
7101dd7070  cbz x9,0x7101dd7094
7101dd7074  and x11,x0,#-0x100000000000000
7101dd7078  cmp x11,x24
7101dd707c  b.ne 0x7101dd7098
7101dd7080  cbz x8,0x7101dd7098
7101dd7084  eor x8,x0,x12
7101dd7088  tst x8,#0xffffffffff
7101dd708c  b.ne 0x7101dd70f4
7101dd7090  b 0x7101dd70cc
7101dd7094  and x11,x0,#-0x100000000000000
7101dd7098  cmp x10,x24
7101dd709c  cset w10,eq
7101dd70a0  cmp x9,#0x0
7101dd70a4  cset w9,ne
7101dd70a8  cmp x8,#0x0
7101dd70ac  cset w8,ne
7101dd70b0  cmp x11,x24
7101dd70b4  and w9,w10,w9
7101dd70b8  cset w10,eq
7101dd70bc  and w8,w8,w10
7101dd70c0  eor w8,w8,w9
7101dd70c4  cmp w8,#0x1
7101dd70c8  b.eq 0x7101dd70f4
7101dd70cc  add x1,x23,#0x40
7101dd70d0  mov x0,x23
7101dd70d4  bl 0x71025128e0
7101dd70d8  tbz w0,#0x0,0x7101dd71ec
7101dd70dc  adrp x8,0x710532f000
7101dd70e0  ldr x8,[x8, #0x730]
7101dd70e4  ldr x8,[x8, #0x8]
7101dd70e8  ldr x8,[x8, #0x2f8]
7101dd70ec  ldr x23,[x22]
7101dd70f0  ldr x25,[x8, #0x8]
7101dd70f4  mov x0,x25
7101dd70f8  mov x1,x19
7101dd70fc  bl 0x71032817a0
7101dd7100  ldr x12,[x23, #0x70]
7101dd7104  and x10,x12,#-0x100000000000000
7101dd7108  and x9,x12,#0xffffffffff
7101dd710c  and x8,x0,#0xffffffffff
7101dd7110  cmp x10,x24
7101dd7114  b.ne 0x7101dd713c
7101dd7118  cbz x9,0x7101dd713c
7101dd711c  and x11,x0,#-0x100000000000000
7101dd7120  cmp x11,x24
7101dd7124  b.ne 0x7101dd7140
7101dd7128  cbz x8,0x7101dd7140
7101dd712c  eor x8,x0,x12
7101dd7130  tst x8,#0xffffffffff
7101dd7134  b.ne 0x7101dd719c
7101dd7138  b 0x7101dd7174
7101dd713c  and x11,x0,#-0x100000000000000
7101dd7140  cmp x10,x24
7101dd7144  cset w10,eq
7101dd7148  cmp x9,#0x0
7101dd714c  cset w9,ne
7101dd7150  cmp x8,#0x0
7101dd7154  cset w8,ne
7101dd7158  cmp x11,x24
7101dd715c  and w9,w10,w9
7101dd7160  cset w10,eq
7101dd7164  and w8,w8,w10
7101dd7168  eor w8,w8,w9
7101dd716c  cmp w8,#0x1
7101dd7170  b.eq 0x7101dd719c
7101dd7174  add x1,x23,#0x70
7101dd7178  mov x0,x23
7101dd717c  bl 0x71025128e0
7101dd7180  tbz w0,#0x0,0x7101dd71ec
7101dd7184  adrp x8,0x710532f000
7101dd7188  ldr x8,[x8, #0x730]
7101dd718c  ldr x8,[x8, #0x8]
7101dd7190  ldr x8,[x8, #0x2f8]
7101dd7194  ldr x23,[x22]
7101dd7198  ldr x25,[x8, #0x8]
7101dd719c  mov x0,x25
7101dd71a0  mov x1,x19
7101dd71a4  bl 0x71032817a0
7101dd71a8  ldr x12,[x23, #0xa0]
7101dd71ac  and x10,x12,#-0x100000000000000
7101dd71b0  and x9,x12,#0xffffffffff
7101dd71b4  and x8,x0,#0xffffffffff
7101dd71b8  cmp x10,x24
7101dd71bc  b.ne 0x7101dd7200
7101dd71c0  cbz x9,0x7101dd7200
7101dd71c4  and x11,x0,#-0x100000000000000
7101dd71c8  cmp x11,x24
7101dd71cc  b.ne 0x7101dd7204
7101dd71d0  cbz x8,0x7101dd7204
7101dd71d4  ldr x24,[sp, #0x8]
7101dd71d8  eor x8,x0,x12
7101dd71dc  tst x8,#0xffffffffff
7101dd71e0  adrp x19,0x7105329000
7101dd71e4  b.ne 0x7101dd7258
7101dd71e8  b 0x7101dd7240
7101dd71ec  ldr x24,[sp, #0x8]
7101dd71f0  mov w8,#0x1
7101dd71f4  str w8,[sp, #0x10]
7101dd71f8  adrp x19,0x7105329000
7101dd71fc  b 0x7101dd7258
7101dd7200  and x11,x0,#-0x100000000000000
7101dd7204  cmp x10,x24
7101dd7208  cset w10,eq
7101dd720c  cmp x9,#0x0
7101dd7210  cset w9,ne
7101dd7214  cmp x8,#0x0
7101dd7218  cset w8,ne
7101dd721c  cmp x11,x24
7101dd7220  and w9,w10,w9
7101dd7224  cset w10,eq
7101dd7228  ldr x24,[sp, #0x8]
7101dd722c  and w8,w8,w10
7101dd7230  eor w8,w8,w9
7101dd7234  cmp w8,#0x1
7101dd7238  adrp x19,0x7105329000
7101dd723c  b.eq 0x7101dd7258
7101dd7240  add x1,x23,#0xa0
7101dd7244  mov x0,x23
7101dd7248  bl 0x71025128e0
7101dd724c  tbnz w0,#0x0,0x7101dd7258
7101dd7250  mov w8,#0x1
7101dd7254  str w8,[sp, #0x10]
7101dd7258  ldr x8,[x19, #0xfa0]
7101dd725c  ldr x8,[x8]
7101dd7260  adrp x10,0x710532f000
7101dd7264  ldr x10,[x10, #0x730]
7101dd7268  ldr x25,[x10, #0x8]
7101dd726c  ldr x9,[x8, #0x8d8]
7101dd7270  ldr x8,[x8, #0x8d0]
7101dd7274  sub x9,x9,x8
7101dd7278  asr x9,x9,#0x4
7101dd727c  cmp x9,#0x3
7101dd7280  b.ls 0x7101dd72c4
7101dd7284  ldr x23,[x25, #0x1d8]
7101dd7288  ldr x1,[x8, #0x30]
7101dd728c  mov x0,x23
7101dd7290  bl 0x71032a7800
7101dd7294  ldp x8,x9,[x23, #0x20]
7101dd7298  sub x9,x9,x8
7101dd729c  lsr x9,x9,#0x6
7101dd72a0  mov w10,#0xcccd
7101dd72a4  movk w10,#0xcccc, LSL #16
7101dd72a8  mul w9,w9,w10
7101dd72ac  cmp w0,w9
7101dd72b0  b.cs 0x7101dd72c8
7101dd72b4  mov w9,#0x140
7101dd72b8  umull x9,w0,w9
7101dd72bc  ldrh w8,[x8, x9, LSL #0x0]
7101dd72c0  b 0x7101dd72cc
7101dd72c4  ldr x23,[x25, #0x1d8]
7101dd72c8  orr w8,wzr,#0xffff
7101dd72cc  orr w9,wzr,#0xffff
7101dd72d0  cmp w8,w9
7101dd72d4  b.eq 0x7101dd763c
7101dd72d8  sxth w9,w8
7101dd72dc  cmp w9,#0x7cf
7101dd72e0  b.gt 0x7101dd763c
7101dd72e4  ldp x10,x11,[x23, #0x20]
7101dd72e8  lsl x9,x8,#0x30
7101dd72ec  add x9,x23,x9, ASR #0x2f
7101dd72f0  ldrh w9,[x9, #0x60]
7101dd72f4  sub x10,x11,x10
7101dd72f8  mov w11,#0xcccd
7101dd72fc  movk w11,#0xcccc, LSL #16
7101dd7300  lsr x10,x10,#0x6
7101dd7304  mul w10,w10,w11
7101dd7308  cmp w10,w9
7101dd730c  b.ls 0x7101dd763c
7101dd7310  adrp x9,0x7105329000
7101dd7314  ldr x9,[x9, #0xf98]
7101dd7318  ldr x9,[x9]
7101dd731c  ldr x9,[x9, #0x30]
7101dd7320  sxth x8,w8
7101dd7324  mov w10,#0x24
7101dd7328  madd x8,x8,x10,x9
7101dd732c  ldrh w8,[x8, #0x20]
7101dd7330  cbz w8,0x7101dd763c
7101dd7334  ldr x8,[x24, #0x40]
7101dd7338  ldr x0,[x8, #0xa8]
7101dd733c  str x24,[sp, #0x8]
7101dd7340  cbz x0,0x7101dd7364
7101dd7344  mov w1,wzr
7101dd7348  bl 0x7102510b80
7101dd734c  ldr x8,[x24, #0x40]
7101dd7350  ldr x9,[x8, #0xa8]
7101dd7354  adrp x8,0x710532f000
7101dd7358  ldr x8,[x8, #0x730]
7101dd735c  ldr x25,[x8, #0x8]
7101dd7360  b 0x7101dd7368
7101dd7364  mov x9,xzr
7101dd7368  ldr x8,[x25, #0x2f8]
7101dd736c  ldr x25,[x8, #0x8]
7101dd7370  mov x19,#0xcd2e
7101dd7374  movk x19,#0x9337, LSL #16
7101dd7378  ldr x23,[x9]
7101dd737c  movk x19,#0x16, LSL #32
7101dd7380  mov x1,x19
7101dd7384  mov x22,x9
7101dd7388  mov x0,x25
7101dd738c  mov x24,#-0x3f00000000000000
7101dd7390  bl 0x71032817a0
7101dd7394  ldr x12,[x23, #0x10]
7101dd7398  and x10,x12,#-0x100000000000000
7101dd739c  and x9,x12,#0xffffffffff
7101dd73a0  and x8,x0,#0xffffffffff
7101dd73a4  cmp x10,x24
7101dd73a8  b.ne 0x7101dd73d0
7101dd73ac  cbz x9,0x7101dd73d0
7101dd73b0  and x11,x0,#-0x100000000000000
7101dd73b4  cmp x11,x24
7101dd73b8  b.ne 0x7101dd73d4
7101dd73bc  cbz x8,0x7101dd73d4
7101dd73c0  eor x8,x0,x12
7101dd73c4  tst x8,#0xffffffffff
7101dd73c8  b.ne 0x7101dd7430
7101dd73cc  b 0x7101dd7408
7101dd73d0  and x11,x0,#-0x100000000000000
7101dd73d4  cmp x10,x24
7101dd73d8  cset w10,eq
7101dd73dc  cmp x9,#0x0
7101dd73e0  cset w9,ne
7101dd73e4  cmp x8,#0x0
7101dd73e8  cset w8,ne
7101dd73ec  cmp x11,x24
7101dd73f0  and w9,w10,w9
7101dd73f4  cset w10,eq
7101dd73f8  and w8,w8,w10
7101dd73fc  eor w8,w8,w9
7101dd7400  cmp w8,#0x1
7101dd7404  b.eq 0x7101dd7430
7101dd7408  add x1,x23,#0x10
7101dd740c  mov x0,x23
7101dd7410  bl 0x71025128e0
7101dd7414  tbz w0,#0x0,0x7101dd75d0
7101dd7418  adrp x8,0x710532f000
7101dd741c  ldr x8,[x8, #0x730]
7101dd7420  ldr x8,[x8, #0x8]
7101dd7424  ldr x8,[x8, #0x2f8]
7101dd7428  ldr x23,[x22]
7101dd742c  ldr x25,[x8, #0x8]
7101dd7430  mov x0,x25
7101dd7434  mov x1,x19
7101dd7438  bl 0x71032817a0
7101dd743c  ldr x12,[x23, #0x40]
7101dd7440  and x10,x12,#-0x100000000000000
7101dd7444  and x9,x12,#0xffffffffff
7101dd7448  and x8,x0,#0xffffffffff
7101dd744c  cmp x10,x24
7101dd7450  b.ne 0x7101dd7478
7101dd7454  cbz x9,0x7101dd7478
7101dd7458  and x11,x0,#-0x100000000000000
7101dd745c  cmp x11,x24
7101dd7460  b.ne 0x7101dd747c
7101dd7464  cbz x8,0x7101dd747c
7101dd7468  eor x8,x0,x12
7101dd746c  tst x8,#0xffffffffff
7101dd7470  b.ne 0x7101dd74d8
7101dd7474  b 0x7101dd74b0
7101dd7478  and x11,x0,#-0x100000000000000
7101dd747c  cmp x10,x24
7101dd7480  cset w10,eq
7101dd7484  cmp x9,#0x0
7101dd7488  cset w9,ne
7101dd748c  cmp x8,#0x0
7101dd7490  cset w8,ne
7101dd7494  cmp x11,x24
7101dd7498  and w9,w10,w9
7101dd749c  cset w10,eq
7101dd74a0  and w8,w8,w10
7101dd74a4  eor w8,w8,w9
7101dd74a8  cmp w8,#0x1
7101dd74ac  b.eq 0x7101dd74d8
7101dd74b0  add x1,x23,#0x40
7101dd74b4  mov x0,x23
7101dd74b8  bl 0x71025128e0
7101dd74bc  tbz w0,#0x0,0x7101dd75d0
7101dd74c0  adrp x8,0x710532f000
7101dd74c4  ldr x8,[x8, #0x730]
7101dd74c8  ldr x8,[x8, #0x8]
7101dd74cc  ldr x8,[x8, #0x2f8]
7101dd74d0  ldr x23,[x22]
7101dd74d4  ldr x25,[x8, #0x8]
7101dd74d8  mov x0,x25
7101dd74dc  mov x1,x19
7101dd74e0  bl 0x71032817a0
7101dd74e4  ldr x12,[x23, #0x70]
7101dd74e8  and x10,x12,#-0x100000000000000
7101dd74ec  and x9,x12,#0xffffffffff
7101dd74f0  and x8,x0,#0xffffffffff
7101dd74f4  cmp x10,x24
7101dd74f8  b.ne 0x7101dd7520
7101dd74fc  cbz x9,0x7101dd7520
7101dd7500  and x11,x0,#-0x100000000000000
7101dd7504  cmp x11,x24
7101dd7508  b.ne 0x7101dd7524
7101dd750c  cbz x8,0x7101dd7524
7101dd7510  eor x8,x0,x12
7101dd7514  tst x8,#0xffffffffff
7101dd7518  b.ne 0x7101dd7580
7101dd751c  b 0x7101dd7558
7101dd7520  and x11,x0,#-0x100000000000000
7101dd7524  cmp x10,x24
7101dd7528  cset w10,eq
7101dd752c  cmp x9,#0x0
7101dd7530  cset w9,ne
7101dd7534  cmp x8,#0x0
7101dd7538  cset w8,ne
7101dd753c  cmp x11,x24
7101dd7540  and w9,w10,w9
7101dd7544  cset w10,eq
7101dd7548  and w8,w8,w10
7101dd754c  eor w8,w8,w9
7101dd7550  cmp w8,#0x1
7101dd7554  b.eq 0x7101dd7580
7101dd7558  add x1,x23,#0x70
7101dd755c  mov x0,x23
7101dd7560  bl 0x71025128e0
7101dd7564  tbz w0,#0x0,0x7101dd75d0
7101dd7568  adrp x8,0x710532f000
7101dd756c  ldr x8,[x8, #0x730]
7101dd7570  ldr x8,[x8, #0x8]
7101dd7574  ldr x8,[x8, #0x2f8]
7101dd7578  ldr x23,[x22]
7101dd757c  ldr x25,[x8, #0x8]
7101dd7580  mov x0,x25
7101dd7584  mov x1,x19
7101dd7588  bl 0x71032817a0
7101dd758c  ldr x12,[x23, #0xa0]
7101dd7590  and x10,x12,#-0x100000000000000
7101dd7594  and x9,x12,#0xffffffffff
7101dd7598  and x8,x0,#0xffffffffff
7101dd759c  cmp x10,x24
7101dd75a0  b.ne 0x7101dd75e4
7101dd75a4  cbz x9,0x7101dd75e4
7101dd75a8  and x11,x0,#-0x100000000000000
7101dd75ac  cmp x11,x24
7101dd75b0  b.ne 0x7101dd75e8
7101dd75b4  cbz x8,0x7101dd75e8
7101dd75b8  ldr x24,[sp, #0x8]
7101dd75bc  eor x8,x0,x12
7101dd75c0  tst x8,#0xffffffffff
7101dd75c4  adrp x19,0x7105329000
7101dd75c8  b.ne 0x7101dd763c
7101dd75cc  b 0x7101dd7624
7101dd75d0  ldr x24,[sp, #0x8]
7101dd75d4  mov w8,#0x1
7101dd75d8  str w8,[sp, #0x10]
7101dd75dc  adrp x19,0x7105329000
7101dd75e0  b 0x7101dd763c
7101dd75e4  and x11,x0,#-0x100000000000000
7101dd75e8  cmp x10,x24
7101dd75ec  cset w10,eq
7101dd75f0  cmp x9,#0x0
7101dd75f4  cset w9,ne
7101dd75f8  cmp x8,#0x0
7101dd75fc  cset w8,ne
7101dd7600  cmp x11,x24
7101dd7604  and w9,w10,w9
7101dd7608  cset w10,eq
7101dd760c  ldr x24,[sp, #0x8]
7101dd7610  and w8,w8,w10
7101dd7614  eor w8,w8,w9
7101dd7618  cmp w8,#0x1
7101dd761c  adrp x19,0x7105329000
7101dd7620  b.eq 0x7101dd763c
7101dd7624  add x1,x23,#0xa0
7101dd7628  mov x0,x23
7101dd762c  bl 0x71025128e0
7101dd7630  tbnz w0,#0x0,0x7101dd763c
7101dd7634  mov w8,#0x1
7101dd7638  str w8,[sp, #0x10]
7101dd763c  ldr x8,[x19, #0xfa0]
7101dd7640  ldr x8,[x8]
7101dd7644  adrp x10,0x710532f000
7101dd7648  ldr x10,[x10, #0x730]
7101dd764c  ldr x25,[x10, #0x8]
7101dd7650  ldr x9,[x8, #0x8d8]
7101dd7654  ldr x8,[x8, #0x8d0]
7101dd7658  sub x9,x9,x8
7101dd765c  asr x9,x9,#0x4
7101dd7660  cmp x9,#0x4
7101dd7664  b.ls 0x7101dd76a8
7101dd7668  ldr x23,[x25, #0x1d8]
7101dd766c  ldr x1,[x8, #0x40]
7101dd7670  mov x0,x23
7101dd7674  bl 0x71032a7800
7101dd7678  ldp x8,x9,[x23, #0x20]
7101dd767c  sub x9,x9,x8
7101dd7680  lsr x9,x9,#0x6
7101dd7684  mov w10,#0xcccd
7101dd7688  movk w10,#0xcccc, LSL #16
7101dd768c  mul w9,w9,w10
7101dd7690  cmp w0,w9
7101dd7694  b.cs 0x7101dd76ac
7101dd7698  mov w9,#0x140
7101dd769c  umull x9,w0,w9
7101dd76a0  ldrh w8,[x8, x9, LSL #0x0]
7101dd76a4  b 0x7101dd76b0
7101dd76a8  ldr x23,[x25, #0x1d8]
7101dd76ac  orr w8,wzr,#0xffff
7101dd76b0  orr w9,wzr,#0xffff
7101dd76b4  cmp w8,w9
7101dd76b8  b.eq 0x7101dd7748
7101dd76bc  sxth w9,w8
7101dd76c0  cmp w9,#0x7cf
7101dd76c4  b.gt 0x7101dd7748
7101dd76c8  ldp x10,x11,[x23, #0x20]
7101dd76cc  lsl x9,x8,#0x30
7101dd76d0  add x9,x23,x9, ASR #0x2f
7101dd76d4  ldrh w9,[x9, #0x60]
7101dd76d8  sub x10,x11,x10
7101dd76dc  mov w11,#0xcccd
7101dd76e0  movk w11,#0xcccc, LSL #16
7101dd76e4  lsr x10,x10,#0x6
7101dd76e8  mul w10,w10,w11
7101dd76ec  cmp w10,w9
7101dd76f0  b.ls 0x7101dd7748
7101dd76f4  adrp x9,0x7105329000
7101dd76f8  ldr x9,[x9, #0xf98]
7101dd76fc  ldr x9,[x9]
7101dd7700  ldr x9,[x9, #0x30]
7101dd7704  sxth x8,w8
7101dd7708  mov w10,#0x24
7101dd770c  madd x8,x8,x10,x9
7101dd7710  ldrh w8,[x8, #0x20]
7101dd7714  cbz w8,0x7101dd7748
7101dd7718  ldr x8,[x24, #0x40]
7101dd771c  ldr x0,[x8, #0xb0]
7101dd7720  cbz x0,0x7101dd8138
7101dd7724  mov w1,wzr
7101dd7728  mov x22,x27
7101dd772c  bl 0x7102510b80
7101dd7730  ldr x8,[x24, #0x40]
7101dd7734  ldr x27,[x8, #0xb0]
7101dd7738  adrp x8,0x710532f000
7101dd773c  ldr x8,[x8, #0x730]
7101dd7740  ldr x25,[x8, #0x8]
7101dd7744  b 0x7101dd8140
7101dd7748  ldr x25,[sp, #0x18]
7101dd774c  ldr w10,[sp, #0x10]
7101dd7750  adrp x8,0x7104412000
7101dd7754  add x8,x8,#0xe33
7101dd7758  adrp x9,0x710424f000
7101dd775c  add x9,x9,#0x9f8
7101dd7760  cmp w10,#0x0
7101dd7764  csel x24,x9,x8,eq
7101dd7768  adrp x0,0x7104281000
7101dd776c  add x0,x0,#0x191
7101dd7770  add x8,sp,#0x150
7101dd7774  add x19,sp,#0x150
7101dd7778  bl 0x71003a4ca0
7101dd777c  add x1,x19,#0x8
7101dd7780  sub x8,x29,#0xc0
7101dd7784  mov x0,x25
7101dd7788  bl 0x7103776640
7101dd778c  ldur x23,[x29, #-0xb8]
7101dd7790  fmov s0,0x3f800000
7101dd7794  mov x0,x23
7101dd7798  mov x1,x24
7101dd779c  bl 0x7103778300
7101dd77a0  adrp x24,0x710523d000
7101dd77a4  add x24,x24,#0x988
7101dd77a8  stp x24,xzr,[x29, #-0xc0]
7101dd77ac  cbz x23,0x7101dd77d0
7101dd77b0  ldr x0,[x23, #0x18]
7101dd77b4  adrp x8,0x710523d000
7101dd77b8  add x8,x8,#0x9a8
7101dd77bc  stp x8,xzr,[x23, #0x10]
7101dd77c0  cbz x0,0x7101dd77c8
7101dd77c4  bl 0x710392eb40
7101dd77c8  mov x0,x23
7101dd77cc  bl 0x710392eb40
7101dd77d0  adrp x19,0x7105314000
7101dd77d4  ldr x8,[x19, #0x510]
7101dd77d8  ldr x8,[x8]
7101dd77dc  ldr x8,[x8, #0xe8]
7101dd77e0  ldr x8,[x8]
7101dd77e4  ldr x8,[x8]
7101dd77e8  ldrb w8,[x8, #0x229]
7101dd77ec  cbz w8,0x7101dd7814
7101dd77f0  adrp x1,0x710439d000
7101dd77f4  add x1,x1,#0xab9
7101dd77f8  add x8,sp,#0x150
7101dd77fc  mov x0,x25
7101dd7800  bl 0x7103776640
7101dd7804  ldr x23,[sp, #0x158]
7101dd7808  adrp x1,0x7104433000
7101dd780c  add x1,x1,#0x569
7101dd7810  b 0x7101dd7834
7101dd7814  adrp x1,0x710439d000
7101dd7818  add x1,x1,#0xab9
7101dd781c  add x8,sp,#0x150
7101dd7820  mov x0,x25
7101dd7824  bl 0x7103776640
7101dd7828  ldr x23,[sp, #0x158]
7101dd782c  adrp x1,0x71042f8000
7101dd7830  add x1,x1,#0x7c4
7101dd7834  fmov s0,0x3f800000
7101dd7838  mov x0,x23
7101dd783c  bl 0x7103778300
7101dd7840  stp x24,xzr,[sp, #0x150]
7101dd7844  cbz x23,0x7101dd7868
7101dd7848  ldr x0,[x23, #0x18]
7101dd784c  adrp x8,0x710523d000
7101dd7850  add x8,x8,#0x9a8
7101dd7854  stp x8,xzr,[x23, #0x10]
7101dd7858  cbz x0,0x7101dd7860
7101dd785c  bl 0x710392eb40
7101dd7860  mov x0,x23
7101dd7864  bl 0x710392eb40
7101dd7868  adrp x1,0x7104422000
7101dd786c  add x1,x1,#0x86c
7101dd7870  add x8,sp,#0x150
7101dd7874  mov x0,x25
7101dd7878  add x22,sp,#0x150
7101dd787c  bl 0x7103776640
7101dd7880  add x8,x20,#0xd0
7101dd7884  cmp x8,x22
7101dd7888  b.eq 0x7101dd78c0
7101dd788c  ldr x8,[sp, #0x158]
7101dd7890  str xzr,[sp, #0x158]
7101dd7894  ldr x22,[x20, #0xd8]
7101dd7898  str x8,[x20, #0xd8]
7101dd789c  cbz x22,0x7101dd78c0
7101dd78a0  ldr x0,[x22, #0x18]
7101dd78a4  adrp x8,0x710523d000
7101dd78a8  add x8,x8,#0x9a8
7101dd78ac  stp x8,xzr,[x22, #0x10]
7101dd78b0  cbz x0,0x7101dd78b8
7101dd78b4  bl 0x710392eb40
7101dd78b8  mov x0,x22
7101dd78bc  bl 0x710392eb40
7101dd78c0  ldr x22,[sp, #0x158]
7101dd78c4  stp x24,xzr,[sp, #0x150]
7101dd78c8  cbz x22,0x7101dd78ec
7101dd78cc  ldr x0,[x22, #0x18]
7101dd78d0  adrp x8,0x710523d000
7101dd78d4  add x8,x8,#0x9a8
7101dd78d8  stp x8,xzr,[x22, #0x10]
7101dd78dc  cbz x0,0x7101dd78e4
7101dd78e0  bl 0x710392eb40
7101dd78e4  mov x0,x22
7101dd78e8  bl 0x710392eb40
7101dd78ec  mov x24,x20
7101dd78f0  ldr x8,[x24], #0x18
7101dd78f4  ldr x1,[x8]
7101dd78f8  add x22,x20,#0x10
7101dd78fc  adrp x2,0x7104545000
7101dd7900  add x2,x2,#0x938
7101dd7904  mov w3,#0x1
7101dd7908  mov x0,x22
7101dd790c  mov w23,#0x1
7101dd7910  bl 0x71032cbf30
7101dd7914  ldr x8,[x20, #0x10]
7101dd7918  ldr x8,[x8]
7101dd791c  cmp x22,x8
7101dd7920  b.eq 0x7101dd7994
7101dd7924  ldr x9,[x8, #0x10]
7101dd7928  ldr x9,[x9]
7101dd792c  ldr x10,[x20, #0x20]
7101dd7930  str x9,[x10]
7101dd7934  ldr x9,[x8, #0x10]
7101dd7938  ldr x9,[x9, #0x8]
7101dd793c  ldr x10,[x20, #0x20]
7101dd7940  str x9,[x10, #0x8]
7101dd7944  ldr x9,[x8, #0x10]
7101dd7948  ldr x8,[x20, #0x20]
7101dd794c  cmp x8,x9
7101dd7950  b.eq 0x7101dd7994
7101dd7954  ldr x10,[x9, #0x18]
7101dd7958  ldr x10,[x10]
7101dd795c  ldr x11,[x8, #0x18]
7101dd7960  str x10,[x11]
7101dd7964  ldr x10,[x9, #0x18]
7101dd7968  ldr x10,[x10, #0x8]
7101dd796c  ldr x11,[x8, #0x18]
7101dd7970  str x10,[x11, #0x8]
7101dd7974  ldr x10,[x9, #0x18]
7101dd7978  ldr x10,[x10, #0x10]
7101dd797c  ldr x11,[x8, #0x18]
7101dd7980  str x10,[x11, #0x10]
7101dd7984  ldr x9,[x9, #0x18]
7101dd7988  ldr x9,[x9, #0x18]
7101dd798c  ldr x8,[x8, #0x18]
7101dd7990  str x9,[x8, #0x18]
7101dd7994  mov w8,#0x101
7101dd7998  strh w8,[sp, #0x158]
7101dd799c  add x8,sp,#0x5b
7101dd79a0  str xzr,[sp, #0x150]
7101dd79a4  stur wzr,[x8, #0xff]
7101dd79a8  mov x8,#0x41f0000000000000
7101dd79ac  add x0,sp,#0x150
7101dd79b0  strh wzr,[sp, #0x15e]
7101dd79b4  str w23,[sp, #0x160]
7101dd79b8  strh w23,[sp, #0x164]
7101dd79bc  strb w23,[sp, #0x166]
7101dd79c0  str x8,[sp, #0x168]
7101dd79c4  str wzr,[sp, #0x170]
7101dd79c8  str xzr,[sp, #0x1a0]
7101dd79cc  str xzr,[sp, #0x1d0]
7101dd79d0  str xzr,[sp, #0x200]
7101dd79d4  str xzr,[sp, #0x230]
7101dd79d8  str xzr,[sp, #0x260]
7101dd79dc  str wzr,[sp, #0x270]
7101dd79e0  bl 0x710337df20
7101dd79e4  add x23,x20,#0x28
7101dd79e8  adrp x2,0x7104307000
7101dd79ec  add x2,x2,#0x72
7101dd79f0  add x3,sp,#0x150
7101dd79f4  mov x0,x23
7101dd79f8  mov x1,x24
7101dd79fc  bl 0x7103770b30
7101dd7a00  adrp x0,0x710439d000
7101dd7a04  add x0,x0,#0xc57
7101dd7a08  sub x8,x29,#0xc0
7101dd7a0c  mov w1,wzr
7101dd7a10  sub x25,x29,#0xc0
7101dd7a14  bl 0x71003a4ca0
7101dd7a18  add x2,x25,#0x8
7101dd7a1c  mov w1,#0x4
7101dd7a20  mov x0,x23
7101dd7a24  bl 0x71037717d0
7101dd7a28  stur x26,[x29, #-0x78]
7101dd7a2c  ldr x0,[x20, #0x28]
7101dd7a30  mov w1,#0x4
7101dd7a34  sub x2,x29,#0x78
7101dd7a38  bl 0x7103772070
7101dd7a3c  stur x27,[x29, #-0xc8]
7101dd7a40  ldr x8,[x20, #0x28]
7101dd7a44  ldr x10,[x8, #0x1b8]
7101dd7a48  cbz x10,0x7101dd7aa8
7101dd7a4c  add x11,x8,#0x1b8
7101dd7a50  mov x9,x11
7101dd7a54  ldr w12,[x10, #0x20]
7101dd7a58  cmp w12,#0x4
7101dd7a5c  cset w12,lt
7101dd7a60  csel x9,x9,x10,lt
7101dd7a64  ldr x10,[x10, w12, UXTW #0x3]
7101dd7a68  cbnz x10,0x7101dd7a54
7101dd7a6c  cmp x9,x11
7101dd7a70  b.eq 0x7101dd7aa8
7101dd7a74  ldr w10,[x9, #0x20]
7101dd7a78  cmp w10,#0x4
7101dd7a7c  b.gt 0x7101dd7aa8
7101dd7a80  ldr x9,[x9, #0x28]
7101dd7a84  cbz x9,0x7101dd7aa8
7101dd7a88  ldr x1,[x9, #0x88]
7101dd7a8c  add x0,x8,#0x160
7101dd7a90  sub x8,x29,#0x78
7101dd7a94  bl 0x7103776ad0
7101dd7a98  ldur x25,[x29, #-0x70]
7101dd7a9c  ldr x0,[x25]
7101dd7aa0  cbnz x0,0x7101dd7b20
7101dd7aa4  b 0x7101dd7b30
7101dd7aa8  adrp x8,0x710523d000
7101dd7aac  add x8,x8,#0x9c8
7101dd7ab0  mov w0,#0x10
7101dd7ab4  mov w1,#0x8
7101dd7ab8  stur x8,[x29, #-0x78]
7101dd7abc  bl 0x710392e290
7101dd7ac0  mov x25,x0
7101dd7ac4  cbnz x0,0x7101dd7b10
7101dd7ac8  adrp x8,0x7105332000
7101dd7acc  ldr x0,[x8, #0xf00]
7101dd7ad0  cbz x0,0x7101dd7b0c
7101dd7ad4  mov w8,#0x8
7101dd7ad8  stur wzr,[x29, #-0x5c]
7101dd7adc  sub x1,x29,#0x5c
7101dd7ae0  stur x8,[x29, #-0x68]
7101dd7ae4  ldr x8,[x0]
7101dd7ae8  ldr x8,[x8, #0x30]
7101dd7aec  sub x2,x29,#0x68
7101dd7af0  blr x8
7101dd7af4  tbz w0,#0x0,0x7101dd7b0c
7101dd7af8  mov w0,#0x10
7101dd7afc  mov w1,#0x8
7101dd7b00  bl 0x710392e290
7101dd7b04  mov x25,x0
7101dd7b08  cbnz x0,0x7101dd7b10
7101dd7b0c  mov x25,xzr
7101dd7b10  str xzr,[x25]
7101dd7b14  stur x25,[x29, #-0x70]
7101dd7b18  ldr x0,[x25]
7101dd7b1c  cbz x0,0x7101dd7b30
7101dd7b20  ldr x8,[x0]
7101dd7b24  ldr x8,[x8, #0x2a0]
7101dd7b28  sub x1,x29,#0xc8
7101dd7b2c  blr x8
7101dd7b30  adrp x8,0x710523d000
7101dd7b34  add x8,x8,#0x9c8
7101dd7b38  stp x8,xzr,[x29, #-0x78]
7101dd7b3c  cbz x25,0x7101dd7b48
7101dd7b40  mov x0,x25
7101dd7b44  bl 0x710392eb40
7101dd7b48  adrp x0,0x710439d000
7101dd7b4c  add x0,x0,#0xc57
7101dd7b50  sub x8,x29,#0xc0
7101dd7b54  mov w1,#0x1
7101dd7b58  sub x25,x29,#0xc0
7101dd7b5c  bl 0x71003a4ca0
7101dd7b60  add x2,x25,#0x8
7101dd7b64  mov w25,#0x5
7101dd7b68  mov x0,x23
7101dd7b6c  mov w1,w25
7101dd7b70  bl 0x71037717d0
7101dd7b74  stur x26,[x29, #-0x78]
7101dd7b78  ldr x0,[x23]
7101dd7b7c  sub x2,x29,#0x78
7101dd7b80  mov w1,w25
7101dd7b84  bl 0x7103772070
7101dd7b88  stur x27,[x29, #-0xc8]
7101dd7b8c  ldr x8,[x23]
7101dd7b90  ldr x10,[x8, #0x1b8]
7101dd7b94  cbz x10,0x7101dd7bf4
7101dd7b98  add x11,x8,#0x1b8
7101dd7b9c  mov x9,x11
7101dd7ba0  ldr w12,[x10, #0x20]
7101dd7ba4  cmp w12,#0x5
7101dd7ba8  cset w12,lt
7101dd7bac  csel x9,x9,x10,lt
7101dd7bb0  ldr x10,[x10, w12, UXTW #0x3]
7101dd7bb4  cbnz x10,0x7101dd7ba0
7101dd7bb8  cmp x9,x11
7101dd7bbc  b.eq 0x7101dd7bf4
7101dd7bc0  ldr w10,[x9, #0x20]
7101dd7bc4  cmp w10,#0x5
7101dd7bc8  b.gt 0x7101dd7bf4
7101dd7bcc  ldr x9,[x9, #0x28]
7101dd7bd0  cbz x9,0x7101dd7bf4
7101dd7bd4  ldr x1,[x9, #0x88]
7101dd7bd8  add x0,x8,#0x160
7101dd7bdc  sub x8,x29,#0x78
7101dd7be0  bl 0x7103776ad0
7101dd7be4  ldur x25,[x29, #-0x70]
7101dd7be8  ldr x0,[x25]
7101dd7bec  cbnz x0,0x7101dd7c6c
7101dd7bf0  b 0x7101dd7c7c
7101dd7bf4  adrp x8,0x710523d000
7101dd7bf8  add x8,x8,#0x9c8
7101dd7bfc  mov w0,#0x10
7101dd7c00  mov w1,#0x8
7101dd7c04  stur x8,[x29, #-0x78]
7101dd7c08  bl 0x710392e290
7101dd7c0c  mov x25,x0
7101dd7c10  cbnz x0,0x7101dd7c5c
7101dd7c14  adrp x8,0x7105332000
7101dd7c18  ldr x0,[x8, #0xf00]
7101dd7c1c  cbz x0,0x7101dd7c58
7101dd7c20  mov w8,#0x8
7101dd7c24  stur wzr,[x29, #-0x5c]
7101dd7c28  sub x1,x29,#0x5c
7101dd7c2c  stur x8,[x29, #-0x68]
7101dd7c30  ldr x8,[x0]
7101dd7c34  ldr x8,[x8, #0x30]
7101dd7c38  sub x2,x29,#0x68
7101dd7c3c  blr x8
7101dd7c40  tbz w0,#0x0,0x7101dd7c58
7101dd7c44  mov w0,#0x10
7101dd7c48  mov w1,#0x8
7101dd7c4c  bl 0x710392e290
7101dd7c50  mov x25,x0
7101dd7c54  cbnz x0,0x7101dd7c5c
7101dd7c58  mov x25,xzr
7101dd7c5c  str xzr,[x25]
7101dd7c60  stur x25,[x29, #-0x70]
7101dd7c64  ldr x0,[x25]
7101dd7c68  cbz x0,0x7101dd7c7c
7101dd7c6c  ldr x8,[x0]
7101dd7c70  ldr x8,[x8, #0x2a0]
7101dd7c74  sub x1,x29,#0xc8
7101dd7c78  blr x8
7101dd7c7c  adrp x8,0x710523d000
7101dd7c80  add x8,x8,#0x9c8
7101dd7c84  stp x8,xzr,[x29, #-0x78]
7101dd7c88  cbz x25,0x7101dd7c94
7101dd7c8c  mov x0,x25
7101dd7c90  bl 0x710392eb40
7101dd7c94  adrp x1,0x710428f000
7101dd7c98  add x1,x1,#0xf7d
7101dd7c9c  sub x8,x29,#0xc0
7101dd7ca0  mov x0,x24
7101dd7ca4  bl 0x71037780e0
7101dd7ca8  sub x0,x29,#0xc0
7101dd7cac  bl 0x710377b140
7101dd7cb0  ldur x0,[x29, #-0xb8]
7101dd7cb4  adrp x8,0x710523d000
7101dd7cb8  add x8,x8,#0x9e8
7101dd7cbc  stp x8,xzr,[x29, #-0xc0]
7101dd7cc0  cbz x0,0x7101dd7cc8
7101dd7cc4  bl 0x710392eb40
7101dd7cc8  ldr x8,[x19, #0x510]
7101dd7ccc  ldr x8,[x8]
7101dd7cd0  ldr x8,[x8, #0xe8]
7101dd7cd4  ldr x8,[x8]
7101dd7cd8  ldr x8,[x8]
7101dd7cdc  ldrb w8,[x8, #0x229]
7101dd7ce0  cbz w8,0x7101dd7d08
7101dd7ce4  adrp x1,0x7104401000
7101dd7ce8  add x1,x1,#0xdad
7101dd7cec  sub x8,x29,#0xc0
7101dd7cf0  mov x0,x24
7101dd7cf4  bl 0x7103776640
7101dd7cf8  ldur x24,[x29, #-0xb8]
7101dd7cfc  adrp x1,0x7104433000
7101dd7d00  add x1,x1,#0x569
7101dd7d04  b 0x7101dd7d28
7101dd7d08  adrp x1,0x7104401000
7101dd7d0c  add x1,x1,#0xdad
7101dd7d10  sub x8,x29,#0xc0
7101dd7d14  mov x0,x24
7101dd7d18  bl 0x7103776640
7101dd7d1c  ldur x24,[x29, #-0xb8]
7101dd7d20  adrp x1,0x71042f8000
7101dd7d24  add x1,x1,#0x7c4
7101dd7d28  fmov s0,0x3f800000
7101dd7d2c  mov x0,x24
7101dd7d30  bl 0x7103778300
7101dd7d34  adrp x8,0x710523d000
7101dd7d38  add x8,x8,#0x988
7101dd7d3c  stp x8,xzr,[x29, #-0xc0]
7101dd7d40  cbz x24,0x7101dd7d64
7101dd7d44  ldr x0,[x24, #0x18]
7101dd7d48  adrp x8,0x710523d000
7101dd7d4c  add x8,x8,#0x9a8
7101dd7d50  stp x8,xzr,[x24, #0x10]
7101dd7d54  cbz x0,0x7101dd7d5c
7101dd7d58  bl 0x710392eb40
7101dd7d5c  mov x0,x24
7101dd7d60  bl 0x710392eb40
7101dd7d64  ldr x0,[x23]
7101dd7d68  ldr x8,[x0]
7101dd7d6c  ldr x8,[x8, #0x60]
7101dd7d70  mov w1,#0x1
7101dd7d74  blr x8
7101dd7d78  ldr x0,[x23]
7101dd7d7c  ldr x8,[x0]
7101dd7d80  ldr x8,[x8, #0x70]
7101dd7d84  mov w1,#0x1
7101dd7d88  blr x8
7101dd7d8c  ldr x8,[x22]
7101dd7d90  ldr x8,[x8]
7101dd7d94  ldr x0,[x8]
7101dd7d98  mov w1,wzr
7101dd7d9c  bl 0x71037760f0
7101dd7da0  ldr x0,[sp, #0x260]
7101dd7da4  add x8,sp,#0x150
7101dd7da8  add x8,x8,#0xf0
7101dd7dac  cmp x8,x0
7101dd7db0  b.eq 0x7101dd7dc4
7101dd7db4  cbz x0,0x7101dd7dd0
7101dd7db8  ldr x8,[x0]
7101dd7dbc  ldr x8,[x8, #0x28]
7101dd7dc0  b 0x7101dd7dcc
7101dd7dc4  ldr x8,[x0]
7101dd7dc8  ldr x8,[x8, #0x20]
7101dd7dcc  blr x8
7101dd7dd0  ldr x0,[sp, #0x230]
7101dd7dd4  add x8,sp,#0x150
7101dd7dd8  add x8,x8,#0xc0
7101dd7ddc  cmp x8,x0
7101dd7de0  b.eq 0x7101dd7df4
7101dd7de4  cbz x0,0x7101dd7e00
7101dd7de8  ldr x8,[x0]
7101dd7dec  ldr x8,[x8, #0x28]
7101dd7df0  b 0x7101dd7dfc
7101dd7df4  ldr x8,[x0]
7101dd7df8  ldr x8,[x8, #0x20]
7101dd7dfc  blr x8
7101dd7e00  ldr x0,[sp, #0x200]
7101dd7e04  add x8,sp,#0x150
7101dd7e08  add x8,x8,#0x90
7101dd7e0c  cmp x8,x0
7101dd7e10  b.eq 0x7101dd7e24
7101dd7e14  cbz x0,0x7101dd7e30
7101dd7e18  ldr x8,[x0]
7101dd7e1c  ldr x8,[x8, #0x28]
7101dd7e20  b 0x7101dd7e2c
7101dd7e24  ldr x8,[x0]
7101dd7e28  ldr x8,[x8, #0x20]
7101dd7e2c  blr x8
7101dd7e30  ldr x0,[sp, #0x1d0]
7101dd7e34  add x8,sp,#0x150
7101dd7e38  add x8,x8,#0x60
7101dd7e3c  cmp x8,x0
7101dd7e40  b.eq 0x7101dd7e54
7101dd7e44  cbz x0,0x7101dd7e60
7101dd7e48  ldr x8,[x0]
7101dd7e4c  ldr x8,[x8, #0x28]
7101dd7e50  b 0x7101dd7e5c
7101dd7e54  ldr x8,[x0]
7101dd7e58  ldr x8,[x8, #0x20]
7101dd7e5c  blr x8
7101dd7e60  ldr x0,[sp, #0x1a0]
7101dd7e64  add x8,sp,#0x150
7101dd7e68  add x8,x8,#0x30
7101dd7e6c  cmp x8,x0
7101dd7e70  b.eq 0x7101dd7e84
7101dd7e74  cbz x0,0x7101dd7e90
7101dd7e78  ldr x8,[x0]
7101dd7e7c  ldr x8,[x8, #0x28]
7101dd7e80  b 0x7101dd7e8c
7101dd7e84  ldr x8,[x0]
7101dd7e88  ldr x8,[x8, #0x20]
7101dd7e8c  blr x8
7101dd7e90  mov x22,x20
7101dd7e94  ldr x8,[x22], #0x48
7101dd7e98  ldr x1,[x8]
7101dd7e9c  add x23,x20,#0x40
7101dd7ea0  adrp x2,0x7104545000
7101dd7ea4  add x2,x2,#0x930
7101dd7ea8  mov w3,#0x1
7101dd7eac  mov x0,x23
7101dd7eb0  bl 0x71032cbf30
7101dd7eb4  ldr x8,[x20, #0x40]
7101dd7eb8  ldr x8,[x8]
7101dd7ebc  ldr x0,[x8]
7101dd7ec0  mov w1,wzr
7101dd7ec4  bl 0x71037760f0
7101dd7ec8  ldr x8,[x20, #0x40]
7101dd7ecc  ldr x8,[x8]
7101dd7ed0  cmp x23,x8
7101dd7ed4  b.eq 0x7101dd7f48
7101dd7ed8  ldr x9,[x8, #0x10]
7101dd7edc  ldr x9,[x9]
7101dd7ee0  ldr x10,[x20, #0x50]
7101dd7ee4  str x9,[x10]
7101dd7ee8  ldr x9,[x8, #0x10]
7101dd7eec  ldr x9,[x9, #0x8]
7101dd7ef0  ldr x10,[x20, #0x50]
7101dd7ef4  str x9,[x10, #0x8]
7101dd7ef8  ldr x9,[x8, #0x10]
7101dd7efc  ldr x8,[x20, #0x50]
7101dd7f00  cmp x8,x9
7101dd7f04  b.eq 0x7101dd7f48
7101dd7f08  ldr x10,[x9, #0x18]
7101dd7f0c  ldr x10,[x10]
7101dd7f10  ldr x11,[x8, #0x18]
7101dd7f14  str x10,[x11]
7101dd7f18  ldr x10,[x9, #0x18]
7101dd7f1c  ldr x10,[x10, #0x8]
7101dd7f20  ldr x11,[x8, #0x18]
7101dd7f24  str x10,[x11, #0x8]
7101dd7f28  ldr x10,[x9, #0x18]
7101dd7f2c  ldr x10,[x10, #0x10]
7101dd7f30  ldr x11,[x8, #0x18]
7101dd7f34  str x10,[x11, #0x10]
7101dd7f38  ldr x9,[x9, #0x18]
7101dd7f3c  ldr x9,[x9, #0x18]
7101dd7f40  ldr x8,[x8, #0x18]
7101dd7f44  str x9,[x8, #0x18]
7101dd7f48  adrp x1,0x71043cf000
7101dd7f4c  add x1,x1,#0xca4
7101dd7f50  add x8,sp,#0x150
7101dd7f54  mov x0,x22
7101dd7f58  add x19,sp,#0x150
7101dd7f5c  bl 0x7103776910
7101dd7f60  add x8,x20,#0x58
7101dd7f64  cmp x8,x19
7101dd7f68  b.eq 0x7101dd7f84
7101dd7f6c  ldr x8,[sp, #0x158]
7101dd7f70  str xzr,[sp, #0x158]
7101dd7f74  ldr x0,[x20, #0x60]
7101dd7f78  str x8,[x20, #0x60]
7101dd7f7c  cbz x0,0x7101dd7f84
7101dd7f80  bl 0x710392eb40
7101dd7f84  ldr x0,[sp, #0x158]
7101dd7f88  adrp x19,0x710523d000
7101dd7f8c  add x19,x19,#0x9a8
7101dd7f90  stp x19,xzr,[sp, #0x150]
7101dd7f94  cbz x0,0x7101dd7f9c
7101dd7f98  bl 0x710392eb40
7101dd7f9c  adrp x1,0x7104281000
7101dd7fa0  add x1,x1,#0x234
7101dd7fa4  add x8,sp,#0x150
7101dd7fa8  mov x0,x22
7101dd7fac  add x23,sp,#0x150
7101dd7fb0  bl 0x7103776910
7101dd7fb4  add x8,x20,#0x68
7101dd7fb8  cmp x8,x23
7101dd7fbc  b.eq 0x7101dd7fd8
7101dd7fc0  ldr x8,[sp, #0x158]
7101dd7fc4  str xzr,[sp, #0x158]
7101dd7fc8  ldr x0,[x20, #0x70]
7101dd7fcc  str x8,[x20, #0x70]
7101dd7fd0  cbz x0,0x7101dd7fd8
7101dd7fd4  bl 0x710392eb40
7101dd7fd8  ldr x0,[sp, #0x158]
7101dd7fdc  stp x19,xzr,[sp, #0x150]
7101dd7fe0  cbz x0,0x7101dd7fe8
7101dd7fe4  bl 0x710392eb40
7101dd7fe8  ldr x8,[x28]
7101dd7fec  ldr x8,[x8]
7101dd7ff0  ldr x8,[x8]
7101dd7ff4  ldr x8,[x8, #0x600]
7101dd7ff8  mov w9,#0x80
7101dd7ffc  str w9,[x8, #0x18]
7101dd8000  ldr x0,[x21]
7101dd8004  ldr x8,[x0]
7101dd8008  ldr x8,[x8, #0x60]
7101dd800c  mov w1,#0x1
7101dd8010  blr x8
7101dd8014  ldr x0,[x21]
7101dd8018  ldr x8,[x0]
7101dd801c  ldr x8,[x8, #0x70]
7101dd8020  mov w1,#0x1
7101dd8024  blr x8
7101dd8028  ldr x0,[sp, #0x130]
7101dd802c  add x8,sp,#0x20
7101dd8030  add x8,x8,#0xf0
7101dd8034  cmp x8,x0
7101dd8038  b.eq 0x7101dd804c
7101dd803c  cbz x0,0x7101dd8058
7101dd8040  ldr x8,[x0]
7101dd8044  ldr x8,[x8, #0x28]
7101dd8048  b 0x7101dd8054
7101dd804c  ldr x8,[x0]
7101dd8050  ldr x8,[x8, #0x20]
7101dd8054  blr x8
7101dd8058  ldr x0,[sp, #0x100]
7101dd805c  add x8,sp,#0x20
7101dd8060  add x8,x8,#0xc0
7101dd8064  cmp x8,x0
7101dd8068  b.eq 0x7101dd807c
7101dd806c  cbz x0,0x7101dd8088
7101dd8070  ldr x8,[x0]
7101dd8074  ldr x8,[x8, #0x28]
7101dd8078  b 0x7101dd8084
7101dd807c  ldr x8,[x0]
7101dd8080  ldr x8,[x8, #0x20]
7101dd8084  blr x8
7101dd8088  ldr x0,[sp, #0xd0]
7101dd808c  add x8,sp,#0x20
7101dd8090  add x8,x8,#0x90
7101dd8094  cmp x8,x0
7101dd8098  b.eq 0x7101dd80ac
7101dd809c  cbz x0,0x7101dd80b8
7101dd80a0  ldr x8,[x0]
7101dd80a4  ldr x8,[x8, #0x28]
7101dd80a8  b 0x7101dd80b4
7101dd80ac  ldr x8,[x0]
7101dd80b0  ldr x8,[x8, #0x20]
7101dd80b4  blr x8
7101dd80b8  ldr x0,[sp, #0xa0]
7101dd80bc  add x8,sp,#0x20
7101dd80c0  add x8,x8,#0x60
7101dd80c4  cmp x8,x0
7101dd80c8  b.eq 0x7101dd80dc
7101dd80cc  cbz x0,0x7101dd80e8
7101dd80d0  ldr x8,[x0]
7101dd80d4  ldr x8,[x8, #0x28]
7101dd80d8  b 0x7101dd80e4
7101dd80dc  ldr x8,[x0]
7101dd80e0  ldr x8,[x8, #0x20]
7101dd80e4  blr x8
7101dd80e8  ldr x0,[sp, #0x70]
7101dd80ec  add x8,sp,#0x20
7101dd80f0  add x8,x8,#0x30
7101dd80f4  cmp x8,x0
7101dd80f8  b.eq 0x7101dd810c
7101dd80fc  cbz x0,0x7101dd8118
7101dd8100  ldr x8,[x0]
7101dd8104  ldr x8,[x8, #0x28]
7101dd8108  b 0x7101dd8114
7101dd810c  ldr x8,[x0]
7101dd8110  ldr x8,[x8, #0x20]
7101dd8114  blr x8
7101dd8118  add sp,sp,#0x300
7101dd811c  ldp x29,x30,[sp, #0x50]
7101dd8120  ldp x20,x19,[sp, #0x40]
7101dd8124  ldp x22,x21,[sp, #0x30]
7101dd8128  ldp x24,x23,[sp, #0x20]
7101dd812c  ldp x26,x25,[sp, #0x10]
7101dd8130  ldp x28,x27,[sp], #0x60
7101dd8134  ret
7101dd8138  mov x22,x27
7101dd813c  mov x27,xzr
7101dd8140  ldr x8,[x25, #0x2f8]
7101dd8144  ldr x25,[x8, #0x8]
7101dd8148  mov x26,#0xcd2e
7101dd814c  movk x26,#0x9337, LSL #16
7101dd8150  ldr x23,[x27]
7101dd8154  movk x26,#0x16, LSL #32
7101dd8158  mov x1,x26
7101dd815c  mov x0,x25
7101dd8160  mov x24,#-0x3f00000000000000
7101dd8164  bl 0x71032817a0
7101dd8168  ldr x12,[x23, #0x10]
7101dd816c  and x10,x12,#-0x100000000000000
7101dd8170  and x9,x12,#0xffffffffff
7101dd8174  and x8,x0,#0xffffffffff
7101dd8178  cmp x10,x24
7101dd817c  b.ne 0x7101dd81a4
7101dd8180  cbz x9,0x7101dd81a4
7101dd8184  and x11,x0,#-0x100000000000000
7101dd8188  cmp x11,x24
7101dd818c  b.ne 0x7101dd81a8
7101dd8190  cbz x8,0x7101dd81a8
7101dd8194  eor x8,x0,x12
7101dd8198  tst x8,#0xffffffffff
7101dd819c  b.ne 0x7101dd8204
7101dd81a0  b 0x7101dd81dc
7101dd81a4  and x11,x0,#-0x100000000000000
7101dd81a8  cmp x10,x24
7101dd81ac  cset w10,eq
7101dd81b0  cmp x9,#0x0
7101dd81b4  cset w9,ne
7101dd81b8  cmp x8,#0x0
7101dd81bc  cset w8,ne
7101dd81c0  cmp x11,x24
7101dd81c4  and w9,w10,w9
7101dd81c8  cset w10,eq
7101dd81cc  and w8,w8,w10
7101dd81d0  eor w8,w8,w9
7101dd81d4  cmp w8,#0x1
7101dd81d8  b.eq 0x7101dd8204
7101dd81dc  add x1,x23,#0x10
7101dd81e0  mov x0,x23
7101dd81e4  bl 0x71025128e0
7101dd81e8  tbz w0,#0x0,0x7101dd83b0
7101dd81ec  adrp x8,0x710532f000
7101dd81f0  ldr x8,[x8, #0x730]
7101dd81f4  ldr x8,[x8, #0x8]
7101dd81f8  ldr x8,[x8, #0x2f8]
7101dd81fc  ldr x23,[x27]
7101dd8200  ldr x25,[x8, #0x8]
7101dd8204  mov x0,x25
7101dd8208  mov x1,x26
7101dd820c  bl 0x71032817a0
7101dd8210  ldr x12,[x23, #0x40]
7101dd8214  and x10,x12,#-0x100000000000000
7101dd8218  and x9,x12,#0xffffffffff
7101dd821c  and x8,x0,#0xffffffffff
7101dd8220  cmp x10,x24
7101dd8224  b.ne 0x7101dd824c
7101dd8228  cbz x9,0x7101dd824c
7101dd822c  and x11,x0,#-0x100000000000000
7101dd8230  cmp x11,x24
7101dd8234  b.ne 0x7101dd8250
7101dd8238  cbz x8,0x7101dd8250
7101dd823c  eor x8,x0,x12
7101dd8240  tst x8,#0xffffffffff
7101dd8244  b.ne 0x7101dd82ac
7101dd8248  b 0x7101dd8284
7101dd824c  and x11,x0,#-0x100000000000000
7101dd8250  cmp x10,x24
7101dd8254  cset w10,eq
7101dd8258  cmp x9,#0x0
7101dd825c  cset w9,ne
7101dd8260  cmp x8,#0x0
7101dd8264  cset w8,ne
7101dd8268  cmp x11,x24
7101dd826c  and w9,w10,w9
7101dd8270  cset w10,eq
7101dd8274  and w8,w8,w10
7101dd8278  eor w8,w8,w9
7101dd827c  cmp w8,#0x1
7101dd8280  b.eq 0x7101dd82ac
7101dd8284  add x1,x23,#0x40
7101dd8288  mov x0,x23
7101dd828c  bl 0x71025128e0
7101dd8290  tbz w0,#0x0,0x7101dd83b0
7101dd8294  adrp x8,0x710532f000
7101dd8298  ldr x8,[x8, #0x730]
7101dd829c  ldr x8,[x8, #0x8]
7101dd82a0  ldr x8,[x8, #0x2f8]
7101dd82a4  ldr x23,[x27]
7101dd82a8  ldr x25,[x8, #0x8]
7101dd82ac  mov x0,x25
7101dd82b0  mov x1,x26
7101dd82b4  bl 0x71032817a0
7101dd82b8  ldr x12,[x23, #0x70]
7101dd82bc  and x10,x12,#-0x100000000000000
7101dd82c0  and x9,x12,#0xffffffffff
7101dd82c4  and x8,x0,#0xffffffffff
7101dd82c8  cmp x10,x24
7101dd82cc  b.ne 0x7101dd82f4
7101dd82d0  cbz x9,0x7101dd82f4
7101dd82d4  and x11,x0,#-0x100000000000000
7101dd82d8  cmp x11,x24
7101dd82dc  b.ne 0x7101dd82f8
7101dd82e0  cbz x8,0x7101dd82f8
7101dd82e4  eor x8,x0,x12
7101dd82e8  tst x8,#0xffffffffff
7101dd82ec  b.ne 0x7101dd8354
7101dd82f0  b 0x7101dd832c
7101dd82f4  and x11,x0,#-0x100000000000000
7101dd82f8  cmp x10,x24
7101dd82fc  cset w10,eq
7101dd8300  cmp x9,#0x0
7101dd8304  cset w9,ne
7101dd8308  cmp x8,#0x0
7101dd830c  cset w8,ne
7101dd8310  cmp x11,x24
7101dd8314  and w9,w10,w9
7101dd8318  cset w10,eq
7101dd831c  and w8,w8,w10
7101dd8320  eor w8,w8,w9
7101dd8324  cmp w8,#0x1
7101dd8328  b.eq 0x7101dd8354
7101dd832c  add x1,x23,#0x70
7101dd8330  mov x0,x23
7101dd8334  bl 0x71025128e0
7101dd8338  tbz w0,#0x0,0x7101dd83b0
7101dd833c  adrp x8,0x710532f000
7101dd8340  ldr x8,[x8, #0x730]
7101dd8344  ldr x8,[x8, #0x8]
7101dd8348  ldr x8,[x8, #0x2f8]
7101dd834c  ldr x23,[x27]
7101dd8350  ldr x25,[x8, #0x8]
7101dd8354  mov x0,x25
7101dd8358  mov x1,x26
7101dd835c  mov x27,x22
7101dd8360  bl 0x71032817a0
7101dd8364  ldr x12,[x23, #0xa0]
7101dd8368  and x10,x12,#-0x100000000000000
7101dd836c  and x9,x12,#0xffffffffff
7101dd8370  and x8,x0,#0xffffffffff
7101dd8374  cmp x10,x24
7101dd8378  b.ne 0x7101dd83cc
7101dd837c  cbz x9,0x7101dd83cc
7101dd8380  and x11,x0,#-0x100000000000000
7101dd8384  cmp x11,x24
7101dd8388  b.ne 0x7101dd83d0
7101dd838c  ldr x25,[sp, #0x18]
7101dd8390  mov x26,#0x40cd
7101dd8394  movk x26,#0x7e5a, LSL #16
7101dd8398  movk x26,#0x11, LSL #32
7101dd839c  cbz x8,0x7101dd83e0
7101dd83a0  eor x8,x0,x12
7101dd83a4  tst x8,#0xffffffffff
7101dd83a8  b.ne 0x7101dd774c
7101dd83ac  b 0x7101dd8414
7101dd83b0  ldr x25,[sp, #0x18]
7101dd83b4  mov x26,#0x40cd
7101dd83b8  movk x26,#0x7e5a, LSL #16
7101dd83bc  mov w10,#0x1
7101dd83c0  mov x27,x22
7101dd83c4  movk x26,#0x11, LSL #32
7101dd83c8  b 0x7101dd7750
7101dd83cc  and x11,x0,#-0x100000000000000
7101dd83d0  ldr x25,[sp, #0x18]
7101dd83d4  mov x26,#0x40cd
7101dd83d8  movk x26,#0x7e5a, LSL #16
7101dd83dc  movk x26,#0x11, LSL #32
7101dd83e0  cmp x10,x24
7101dd83e4  cset w10,eq
7101dd83e8  cmp x9,#0x0
7101dd83ec  cset w9,ne
7101dd83f0  cmp x8,#0x0
7101dd83f4  cset w8,ne
7101dd83f8  cmp x11,x24
7101dd83fc  and w9,w10,w9
7101dd8400  cset w10,eq
7101dd8404  and w8,w8,w10
7101dd8408  eor w8,w8,w9
7101dd840c  cmp w8,#0x1
7101dd8410  b.eq 0x7101dd774c
7101dd8414  add x1,x23,#0xa0
7101dd8418  mov x0,x23
7101dd841c  bl 0x71025128e0
7101dd8420  tbnz w0,#0x0,0x7101dd774c
7101dd8424  mov w10,#0x1
7101dd8428  b 0x7101dd7750
7101dd842c  mov w8,#0x1
7101dd8430  str w8,[sp, #0x10]
7101dd8434  b 0x7101dd6a90
