#include "memory.h"
int main(){
	int status = init_memory();
	if(status == -1)
		return -1;
	get_byte(0);
	free_memory();
}
