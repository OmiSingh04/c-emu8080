#include<stdio.h>
#include<string.h>
#include<stdint.h>

char* parse_asm(char* asm_file_path){//

	FILE asm_file = fopen(asm_file_path, "r");
	
	if(asm_file == NULL){
		fprintf(stderr, "Error opening file.\n");
		return NULL;
	}

	fseek(asm_file, 0L, SEEK_END);

	long size = ftell(asm_file);

	char* asm_str = malloc(size * sizeof(char));


	//still need to initialize the string...


	//which is a different kind of headache and not something im ready to tackle right now!	



	return asm_str;
}


//do i really need to convert the opcode to binary? no! i can make do with normal numbers right
//i can make do with just a byte array.

//yea!


char* get_machine_code(char* asm_str){


	


}




//want to convert the asm instructions to machine code.


//step 1 is to take the instruction word, get the opcode

//step 2 is to inspect the opcode, check the number of arguments, and then convert the rest of them in binary
//at this point, 1 instruction is converted to binary.

//the next step is to follow step 1, but for the next isntruction

//easy to understand

//hellish to implement


//:)




