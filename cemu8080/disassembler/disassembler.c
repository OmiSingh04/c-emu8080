#include<stdio.h>
#include<stdint.h>
int disassembler_8080(unsigned char* buffer, uint16_t pc){

	unsigned char* opcode = buffer + pc;
	
	//*opcode -= 48;//ascii character to an actual number, so we offset by 48, the buffer is in a text file.
	int bytes = 1;//assume it is a 1 byte instruction, no args.

	printf("%04X ", pc);
	switch(*opcode){
		case 0x00: printf("NOP"); break;
		case 0x01: printf("LXI	B, #0x%02x%02x", opcode[2], opcode[1]); bytes = 3; break;
		case 0x02: printf("STAX B"); break;
		case 0x03: printf("INX 	B"); break;
		case 0x04: printf("INR 	B"); break;
		case 0x05: printf("DCR 	B"); break;
		case 0x06: printf("MVI 	B, $%02x", opcode[1]); bytes = 2; break;
		case 0x07: printf("RLC"); break;
		case 0x08: printf("NOP"); break;
		case 0x09: printf("DAD	B"); break;
		case 0x0A: printf("LDAX	B"); break;
		case 0x0B: printf("DCX	B"); break;
		case 0x0C: printf("INR	C"); break;
		case 0x0D: printf("DCR	C"); break;
		case 0x0E: printf("MVI	C, $%02X", opcode[1]); bytes = 2; break;
		case 0x0F: printf("RRC"); break;
		case 0x11: printf("LXI	D, $%02X%02X", opcode[2], opcode[1]); bytes = 3; break;
		case 0x12: printf("STAX D"); break;
		case 0x13: printf("INX	D"); break;
		case 0x14: printf("INR 	D"); break;
		case 0x15: printf("DCR 	D"); break;
		case 0x16: printf("MVI	D, $%02X", opcode[1]); bytes = 2; break;
		case 0x17: printf("RAL"); break;
		case 0x19: printf("DAD	D"); break;
		case 0x1A: printf("LDAX	D"); break;
		case 0x1B: printf("DCX	D"); break;
		case 0x1C: printf("INR	E"); break;
		case 0x1D: printf("DCR	E"); break;
		case 0x1E: printf("MVI	E, $%02X", opcode[1]); bytes = 2; break;
		case 0x1F: printf("RAR"); break;
		case 0x21: printf("LXI	H, $%02X%02X", opcode[2], opcode[1]); bytes = 3; break;
		case 0x22: printf("SHLD	$%02X%02X", opcode[2], opcode[1]); bytes = 3; break;
		case 0x23: printf("INX 	H"); break;
		case 0x24: printf("INR 	H"); break;
		case 0x25: printf("DCR	H"); break;
		case 0x26: printf("MVI	H, $%02X", opcode[1]); bytes = 2; break;
		case 0x27: printf("DAA"); break;
		case 0x29: printf("DAD H"); break;
		case 0x2A: printf("LHLD	$%02X%02X", opcode[2], opcode[1]); bytes = 3; break;
		case 0x2B: printf("DCX H"); break;
		case 0x2C: printf("INR L"); break;
		case 0x2D: printf("DCR L"); break;
		case 0x2E: printf("MVI L, $%02X", opcode[1]); bytes = 2; break;
		case 0x2F: printf("CMA"); break;
		/*case 0x31: printf("LXI SP, 
		case 0x32:
		case 0x33:
		case 0x34:
		case 0x35:
		case 0x36:
		case 0x37:
		case 
		case 
		case */
		/******Got like... 200 more of these :)****/
		//to be continued...
	}
	printf("\n");
	return bytes;
}

