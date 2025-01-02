data segment 
    a db 8
    b db 3  
    msg db 'le resultat est $'
ends

code segment
    start:
    mov ax, data
    mov ds, ax  
    
    ;afficher chaine de carac
    mov ah, 09h
    mov dl, offset msg
    int 21h 
    
    ;affectation
    mov al, a
    mov bl, b
    mul bl  
    mov dx, ax ;si le resultat est grand il doit etre sur dx
    
    ;affichage
    mov ah ,02h
    mov dl ,al
    int 21h
    
    ;fin du programme
    mov ax, 4c00h 
    int 21h
    
ends
end start
    