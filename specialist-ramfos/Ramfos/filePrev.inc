;+---------------------------------------------------------------------------
; RAMFOS
; �������� ����� ����������� �����
;
; �� �����
;  hl - ����� �����
;
; �� ������
;  bc - ����� ����������� �����
;
; 2013-11-01 ����������������� vinxru
;----------------------------------------------------------------------------

		; ��������� ��� ����� ����� ��� ��������� �� ������.
		dcx	h
		call	pageRead
		mov	b, c
		dcx	h
		call	pageRead