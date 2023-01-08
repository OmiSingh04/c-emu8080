#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdint.h>
#include "memory.h"


//i think these three functions will do for now, although im expecting more functions to fill in later

int init_memory(){
	memory.memory = malloc(sizeof(char) * 65536);
	if(memory.memory == NULL){
		fprintf(stderr, "Error allocating!");
		return -1;
	}
	memset(memory.memory, 0, 65536);
	return 0;
}

void free_memory(){
	free(memory.memory);
}

char get_byte(uint16_t address){
	printf("%ld\n", sizeof memory.memory[address]);
	return memory.memory[address];
}


void set_byte(char byte, uint16_t address){
	memory.memory[address] = byte;
}


