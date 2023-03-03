#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include "disassembler.h"


long file_size(FILE* file){
	fseek(file, 0L, SEEK_END);
	long size = ftell(file);
	fseek(file, 0L, SEEK_SET);
	return size;
}



char *read_rom(FILE* rom){
	long size = file_size(rom);
	printf("%ld\n", size);
	unsigned char* buffer = malloc(size);
	fread(buffer, sizeof(char), size, rom);
	return buffer;
}
	
int main(int argc, char* argv[]){

	FILE* file = fopen(argv[1], "r");
	char* buffer = read_rom(file);	//returns a heap allocated string containing the rom
	long size = file_size(file);
	uint16_t pc = 0;
	while(pc < size)
		pc += disassembler_8080(buffer, pc);

}
