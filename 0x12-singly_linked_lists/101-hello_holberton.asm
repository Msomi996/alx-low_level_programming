section .data
    format db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf
    mov edi, format   ; Move the address of the format string to the edi register
    xor eax, eax      ; Clear the eax register (set it to zero)

    ; Call printf
    call printf

    ; Exit the program
    xor eax, eax      ; Set the return value to 0
    ret
