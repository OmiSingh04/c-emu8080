#include "state_8080.h"
#include<stdlib.h>
void init_memory(){
	memory = malloc(65536);
}

void free_memory(){
	free(memory);
}
