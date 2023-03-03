#include<stdio.h>
#include<stdint.h>

#include "disassembler.h"

int main(void){

	uint16_t pc = 0;
	unsigned char opcode[] = {0x01, 0x3E, 0x21, 0};//length of the instruction
	int length = disassembler_8080(opcode, pc);
	printf("%d\n", length);
	
}
