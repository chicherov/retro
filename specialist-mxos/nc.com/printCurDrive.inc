;----------------------------------------------------------------------------
; MXOS NC.COM
; ����� �������� ����������
;
; 2013-12-18 ����������������� vinxru
;----------------------------------------------------------------------------

printCurDrive:	; ������ �������� ����������
		mvi	e, 2
		call	fileGetSetDrive

printDrive:	; ������� ��� ����� �� �����
		adi	'A'
		mov	c, a
		call	printChar

		; ������� ':'
		mvi	c, ':'
		jmp	printChar
