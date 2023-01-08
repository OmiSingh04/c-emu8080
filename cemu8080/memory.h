#ifndef MEMORY_8080_H_
#define	MEMORY_8080_H_ 
#include<stdint.h>
struct{
	char* memory;
	char* vid;	
}memory;

int init_memory();		//allocate the 65536 bytes
void free_memory();		//free the said bytes.
char get_byte(uint16_t address);

void set_byte(char byte, uint16_t address);


#endif


//the RAM in general I guess? Do i want it t be char*? Yeah i guess? ptr increments increment by 8 bits.
//video RAM, the video will simply be a 2D array of bits. (a pixel is just on or off.)
