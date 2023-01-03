#ifndef MEMORY_8080_H_
#define	MEMORY_8080_H_ 
#include<stdint.h>
//memory is simply an array of bytes.
//since we use 16 bits to get an address, we get 65536 (2^16) addresses, hence 65536 bytes.
//cpu should be able to prompt the memory for data, when an address is passed.
//also need to account for managing stacks, for subroutines.
struct{
	uint8_t* memory;//the RAM in general I guess? Do i want it t be uint8_t*? Yeah i guess? ptr increments increment by 8 bits.

	uint8_t* vid;//video RAM, the video will simply be a 2D array of bits. (a pixel is just on or off.)
	//i forgot where i referred the desired resolution. meh.

}memory;

int init_memory();//allocate the 65536 bytes
void free_memory();//free the said bytes.
int8_t get_byte(uint16_t address);//was using direct vals instead of actual pointers the right choice? i dont know
#endif
