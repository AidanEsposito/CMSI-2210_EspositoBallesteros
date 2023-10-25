global   _main 
        extern _printf
        section  .data
pow:    db 1
limit:  db 1000000 

        section  .text

_main:
        
        mov     eax,  4
        mov     ecx,  pow
        call    _printf
        add     pow
        add     esp, 4
        cmp     limit, pow
        jcc     g
        ret


