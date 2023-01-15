#include<stdio.h>

struct my_struct{
	unsigned int a:3;//an unsigned 3 bit integer
	unsigned int  :2;//2 bit padding
	unsigned int b:3;//an unsigned 3 bit integer
	unsigned int  :16;
	unsigned int c:8;
};
 
	
int main(){
	struct my_struct obj = {7, 7};
	printf("%ld", sizeof(struct my_struct));
}
