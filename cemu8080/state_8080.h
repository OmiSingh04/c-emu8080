#ifndef STATE_8080_H_
#define STATE_8080_H_
#include<stdlib.h>
#include<stdint.h>
typedef struct{

	
	uint16_t pc;//Program Counter
	uint16_t sp;//Stack Pointer

	//7 8-bit registers
	
	int8_t A, B, C, D, E, H, L;//A - accumulator


} state_8080;

//there is also 65536 bytes of addressable memory.
//each distinct value in the 16 bit program counter represents a distinct address in memory.
//this enables having 65536 addressable bytes of memory.
int* memory;

void init_memory();
void free_memory();
#endif
