; Aidan Esposito / Juan Ballesteros

; To Assemble: nasm -fwin32 paritygen.asm
; To Compile: gcc -m32 paritygen.obj -o paritygen.exe
; To Run: paritygen.exe

section .text
    global _main
    extern _printf ; printf function from C to show parity bit

_main:
    mov eax, input_byte ; load input_byte into eax

top:
    test eax, 1 ; check if current value in byte is 1
    jnz odd_parity ; if 1, go to odd parity

even_parity:

    ; print 0 for even parity
    push '0'
    push format
    call _printf
    add esp, 8      
    jmp exit

odd_parity:

    ; print 1 for odd parity
    push '1'
    push format
    call _printf
    add esp, 8  

    ; shift right to check next bit
    shr eax, 1
    jnz top  
    jmp exit

exit:
    ; exit the program
    mov eax, 0
    ret

section .data

    input_byte db 103 ; byte used to test parity (103) 
    format db "Parity Bit: %c", 10, 0 ; used to print out the end parity bit
