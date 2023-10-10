Aidan Esposito / Juan Ballesteros

1. X := A or (B or C)
   Y :=  (Not A) or (B and (Not C))

   X := (A nand A) nand (B nand C)
   Y := nand(nand(A and A) and nand(C and C))

2. Image Added in File 

3. a.     AND 0xAAAAAAAA
   
   b.     OR 0x00000007

   c.     AND 0x00000007

   d.     OR 0xFFFFFFFF

   e.     XOR 0xC0000000

   f.     OR 0xFFFFFFF8


4. JMP START

Current: 0

Start:
    Top:
        LOAD Current
        WRITE 0x08
        ADD 0x01
        STORE Current
        SUB 0x100
        JLZ Top

End:
    JMP End

5. C0000000
   00000000
   00000000
   00000008
   40000001
   10000000
   50000100
   E0000002
   C0000007

   
6. JMP START
    NUM1 = 0
    NUM2 = 0
    RESULT = 0
    TEMP = 0

Start:
    Top:
        LOAD 0x100
        STORE NUM1
        LOAD 0x101
        STORE NUM2
        LOAD NUM1
        SUB NUM2
        JZ DONE
        JLZ SWAP
        LOAD NUM2
        STORE TEMP
        LOAD NUM1
        STORE NUM2

Swap:
    LOAD NUM1
    STORE TEMP
    LOAD NUM2
    STORE NUM1
    LOAD TEMP
    STORE NUM2
    LOAD NUM1
    SUB NUM2
    STORE NUM1
    JMP Start

Done:
    STORE RESULT
    LOAD RESULT
    WRITE 0x200  

7.       STORE temp1
         LOAD 0x30AA
         STORE temp2
         LOAD temp1
         STORE 0x30AA
         LOAD temp2

8.       JGZ 0x837BBEI
         JZ  0x837BBEI

9.       a. This sequence, when described at a high level starts by performing an XOR logic function on the registers r8
            and r9, storing the result of the swap at r8. This then happens again using XOR to swaps the values in r9 and
            r8, with the vales being flipped, resulting in the result of this swap being stored in r9. Finally, another
            XOR is called on r8 and r9 to swap the values and store the result in r8. After these instructions finish and
            the stored values are set, the result will be a complete swap of data in registers r8 and r9.



         b. This happens because when using XOR, it only changes the bits that have one 1 value into a 1 in the result
            while the others stay 0 during the swap. With this, when the result is done again, the value is reset back to
            its original result because any results with both 1's will turn back to zeros and ones and any value with only
            0's will stay zeros. This leads to the swapping of values with XOR for r8 and r9 as seen in the last example.
            There is also no need for any value for storage when swapping with XOR because of this reset idea.
