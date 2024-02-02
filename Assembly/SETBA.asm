Write a program that adds the BCD contents of a block of memory. Block length in hex not exceeding 63H (9910) is stored at ……………………… and starting address of block is ……………..
Store the BCD sun as result starting from memory location ……………….

ANS:
Certainly! Below is a simple example of a program in assembly language that adds the BCD contents of a block of memory. 
Please note that the exact instructions and syntax may vary depending on the specific assembly language you are using. 
I'll provide a generic example in x86 assembly language.


PRAC ANS: 

ORG 2000H ; Assuming the program starts at memory address 2000H

MOV C, #0 ; Initialize the carry flag
MOV H, #30H ; Initialize the source address (block start)
MOV L, #00H ; Initialize the destination address (result start)

ADD_LOOP:
    MOV A, M ; Load a BCD byte from the source address
    DAA ; Adjust for BCD addition
    ADD C ; Add the carry (if any)
    MOV M, A ; Store the result to the destination address

    INX H ; Move to the next byte in the source
    INX L ; Move to the next byte in the destination

    MOV A, L ; Load the low byte of the destination address
    CPI #63H ; Compare with the block length
    JZ END_PROGRAM ; If block length is reached, end the program

    MOV A, H ; Load the high byte of the destination address
    CPI #31H ; Compare with the result start address
    JZ END_PROGRAM ; If result start address is reached, end the program

    JMP ADD_LOOP ; Repeat the loop

END_PROGRAM:
HLT ; Halt the program

; Additional Data Section
; Define a block of BCD data starting at memory address 3000H (block start)
ORG 3000H
DB 01H, 02H, 03H, 04H, 05H, 06H, 07H, 08H, 09H, 0AH, 0BH, 0CH

