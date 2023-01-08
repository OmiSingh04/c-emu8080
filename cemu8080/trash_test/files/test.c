#include<stdio.h>

int main(){

	FILE* file = fopen("test.txt", "r");
	
	fseek(file, 0L, SEEK_END);

	
	printf("%ld\n", ftell(file));
	

	fseek(file, 0L, SEEK_SET);

	char c;
	while(1){
		c = fgetc(file);

		printf("%c", c);
		if(c == EOF){
			printf("%d", c);
			break;
		}

	}

}
