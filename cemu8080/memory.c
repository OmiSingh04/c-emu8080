#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdint.h>
#include "memory.h"
int init_memory(){
	memory.memory = malloc(sizeof(uint8_t) * 65536);
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

int8_t get_byte(uint16_t address){
	printf("%ld\n",sizeof memory.memory[address]);
	return memory.memory[address];
}
