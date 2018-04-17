include irvine32.inc

; Program Description: This program computes A1 = (A1+A2)-(A3+A4), Where A1,A2,A3,and A4 are defined and initialized.
; Author: Nicholas Cleveland
; Creation Date : 02 / 03 / 17
; Revisions: None
; Date:     Modified by :

.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, dwExitCode: DWORD
.data
A1 DWORD 30
A2 DWORD 20
A3 DWORD 10
A4 DWORD 5
.code
main PROC
mov eax, A1
mov ebx, A2
mov ecx, A3
mov edx, A4
add eax, ebx
add ecx, edx
sub eax, ecx
mov A1, eax

INVOKE ExitProcess, 0
main ENDP
END main