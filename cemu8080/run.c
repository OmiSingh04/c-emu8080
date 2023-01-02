#include<stdio.h>
#include "state_8080.h"
int main(){
	init_memory();
	printf("Hello World!\n");
	free_memory();
}
