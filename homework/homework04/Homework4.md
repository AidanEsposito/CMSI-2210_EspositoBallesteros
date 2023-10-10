Aidan Esposito / Juan Ballesteros

1. X := A or (B or C)
   Y :=  (Not A) or (B and (Not C))

   X := (A nand A) nand (B nand C)
   Y := (A nand A) nand (C nand C) //NOT DONE

2. Image Added in File //NOT DONE

3. a.    AND 0xAAAAAAAA
   
   b.     OR 0x00000007

   c.     AND 0x00000007

   d.     OR 0xFFFFFFFF

   e. XOR 0xC0000000

   f. OR 0xFFFFFFF8

   
//FIX NUMBERs


4.         JMP START
   Current: 0
   Start:
   Top:    LOAD Current
           WRITE  0x08
           ADD    0x01
           STORE Current
           SUB 0x100
           JLZ Top
   End:    JMP End

5. C0000000
   00000000
   00000000
   00000008
   40000001
   10000000
   50000100
   E0000002
   C0000007

   
6. S

7.       STORE temp1
         LOAD 0x30AA
         STORE temp2
         LOAD temp1
         STORE 0x30AA
         LOAD temp2

8.       JGZ 0x837BBEI
         JZ  0x837BBEI

9.       a.



         b.
