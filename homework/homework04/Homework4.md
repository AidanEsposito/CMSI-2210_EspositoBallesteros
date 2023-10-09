Aidan Esposito / Juan Ballesteros

1. X := A or (B or C)
   Y :=  //NOT DONE

   X := (A nand A) nand (B nand C)
   Y := (A nand A) nand (C nand C) //NOT DONE

2. Image Added in File //NOT DONE

3. a.    AND 1010 1010 1010 1010 1010 1010 1010 1010 
   
   b.     OR 0000 0000 0000 0000 0000 0000 0000 0111 

   c.     AND 0000 0000 0000 0000 0000 0000 0000 0111 

   d.     OR 1111 1111 1111 1111 1111 1111 1111 1111 

   e.

   f.

   
//FIX NUMBERs


4.         JMP START
   Current: 1
   Start:
   Top:    LOAD Current
           WRITE  0x08
           ADD    0x01
           STORE Current
           SUB 0xFF
           JLZ Top
   End:    JMP End

5. S

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
