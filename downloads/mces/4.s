		AREA ADDOFARRY, CODE, READONLY
		ENTRY
		MOV		R0, #4
		MOV		R1, #0
		LDR		R2, =VALUES
		
LOOP	LDR		R3, [R2],#2
		LDR		R4, MASK
		AND		R3, R3, R4
		ADD		R1, R1, R3
		SUB		R0, R0, #1
		CMP		R0, #0
		BNE		LOOP
		
		LDR		R5, RESULT
		STR		R1, [R5]
		
S		B		S

RESULT	DCD		0X40000000
MASK	DCD		0X0000FFFF
VALUES	DCW		0X0001, 0X0004,0X0001,0X0001
		
		END