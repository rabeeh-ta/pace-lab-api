		AREA SQRTLOOKUP, CODE, READONLY
		ENTRY
		
		LDR		R0, =LOOKUP
		MOV		R1, #5
		
		MOV		R1, R1, LSL#2
		ADD		R0, R0, R1
		LDR		R2, [R0]
		
		LDR		R3, RESULT
		STR		R2, [R3]
S		B		S

LOOKUP	DCD 0X00000000
		DCD 0X00000001
		DCD 0X00000004
		DCD 0X00000009
		DCD 0X00000016
		DCD 0X00000025
		DCD 0X00000036
		DCD 0X00000049
		DCD 0X00000064
		DCD 0X00000081
		DCD 0X00000100
		
RESULT	DCD	0X40000000
		
		END