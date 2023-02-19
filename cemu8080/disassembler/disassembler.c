#include<stdio.h>
#include<stdint.h>
int disassembler_8080(unsigned char* buffer, uint16_t pc){

	unsigned char* code = buffer + pc;
	
	int bytes = 1;//assume it is a 1 byte instruction, no args.

	printf("%04X", pc);

	switch(*opcode){
		case 0x00: printf("NOP"); break;
		case 0x01: printf("LXI	B	$%02x%02x", code[2], code[1]); bytes = 3;
		case 0x02: printf("STAX B"); break;
		case 0x03: printf("INX 	B"); break;
		case 0x04: printf("INR 	B"); break;
		case 0x05: printf("DCR 	B"); break;
		case 0x06: printf("MVI 	B 	$%02x", code[1]; bytes = 2; break;
		case 0x07: printf("RLC"); break;
		case 0x08: printf("NOP"); break;
		
		/******Got like... 200 more of these :)****/
		//to be continued...
	}
}
