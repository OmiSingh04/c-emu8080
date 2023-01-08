#include "memory.h"
#include "asm_parse.h"
int main(){
	int status = init_memory();
	if(status == -1){
		fprintf(stderr, "Couldn't initialize memory");
		return -1;
	}
	get_byte(0);
	free_memory();

	

}
