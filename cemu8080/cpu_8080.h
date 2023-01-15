#ifndef CPU_8080_H_
#define CPU_8080_H_
#include<stdlib.h>
#include<stdint.h>
struct{

	uint16_t pc;//Program Counter
	uint16_t sp;//Stack Pointer

	//7 8-bit registers
	uint8_t A, B, C, D, E, H, L;//A - accumulator

	uint8_t flag;
	//carry, auxiliary, sign, zero, parity

} cpu_8080;

struct{

	unsigned int carry_bit:1;
	unsigned int auxiliary_carry_bit:1;
	unsigned int sign_bit:1;
	unsigned int zero_bit:1;
	unsigned int parity_bit:1;

	//5 condition bits

} condition_bits;

void init_cpu_state();


char fetch();

/*

To fetch the isntruction from the program counter, and increment it.
Used char since each fetch simply fetches a byte.

... and i feel like ill get tired writing int8_t

*/


int decode();

/*

To determine the instruction to be followed according to the given op-code 

*/


int execute();//perform the instruction


int get_args_length(uint8_t opcode);
//returns the number of bytes of arguments for the given instruction opcode
//abstraction is epic :))
//i can implement this later ahaahaahhh

#endif
