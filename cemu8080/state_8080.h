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
#endif
