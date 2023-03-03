#ifndef DISASSEMBLE_H_
#define DISASSEMBLE_H_
#include<stdint.h>
int disassembler_8080(unsigned char* buffer, uint16_t pc);
/*
Args - The current instruction and the program counter.
Return Val - The number of bytes that particular instruction returns.
*/
#endif
