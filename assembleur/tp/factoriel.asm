data segment
    n db 4
    msg db 'le factoriel de 4 est: $'
ends

code segment
    start:
    mov ax, data
    mov ds, ax
    
    ;affectation
    mov ax, 4
    mov bl, 1
    
    boucle:
    mul bl
    inc bl
    cmp bl, 4
    jl boucle 
    
    ;affichage
    mov ah, 02h
    mov dx, ax
    int 21h 
    
end start
ends