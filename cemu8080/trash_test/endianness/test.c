#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

int main(){
	
	uint16_t* x = malloc(sizeof(uint16_t));
	char* y = (char*) x;
	*y = 0x1A;
	y++;
	*y = 0xB3;
	printf("%x", *x);

	//this is exactly what endianness is about!!!
	//the output which i expected is 1AB3, which assumes the CPU to be Big Endian
	//but the output is B31A which is the right assumption, that the CPU is actually Little Endian
}
