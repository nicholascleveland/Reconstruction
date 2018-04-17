include irvine32.inc
; Program Description : This program assigns a letter grade when given a score
; Author: Nicholas Cleveland
; Creation Date : 02 / 20 / 17
; Revisions: None
;Date:       Modified by:
.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, dwExitCode : DWORD
.data
letterGradeA BYTE 'A'
letterGradeB BYTE 'B'
letterGradeC BYTE 'C'
letterGradeD BYTE 'D'
letterGradeE BYTE 'E'

numberGradeA BYTE 90
numberGradeB BYTE 80
numberGradeC BYTE 70
numberGradeD BYTE 60
numberGradeE BYTE 60

actualNumberGrade BYTE 88    ; for example
actualLetterGrade BYTE ?
.code
main PROC
mov al, actualNumberGrade
mov bl, letterGradeA
cmp al, numberGradeA
jge M1
jl L1
M1:
mov actualLetterGrade, bl
jmp BREAK
L1:
mov bl, letterGradeB
cmp al, numberGradeB
jge M2
jl L2
M2:
mov actualLetterGrade, bl
jmp BREAK
L2:
mov bl, letterGradeC
cmp al, numberGradeC
jge M3
jl L3
M3:
mov actualLetterGrade, bl
jmp BREAK
L3:
mov bl, letterGradeD
cmp al, numberGradeD
jge M4
jl L4
M4:
mov actualLetterGrade, bl
jmp BREAK
L4:
mov bl, letterGradeE
cmp al, numberGradeE
jl L5
L5:
mov actualLetterGrade, bl
jmp BREAK

BREAK:
mov eax, 0
mov al, actualLetterGrade
INVOKE ExitProcess, 0
main ENDP
END main