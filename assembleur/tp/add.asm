   data segment
    a db 6
    b db 5
   ends
   
   code segment
    start:
    mov ax, data ;ax joue le role d intermediaire
    mov ds, ax 
    
    ; affectation
    mov al, a
    mov bl, b
    add al, bl
    
    ; affichage
    mov ah, 02h
    mov dl, al ; on doit poser la valeur a afficher dans dx ou dl 
    int 21h
    
    
    mov ax, 4c00h ; fin du programme
    int 21h ; interuption
    
   ends
   end start
   