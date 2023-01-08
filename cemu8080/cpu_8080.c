#include "memory.h"



void init_cpu_state(cpu_8080* cpu){

	//i can do this after i get a good idea about the memory structure

}



char fetch(){

	//fetch the isntruction from the given address in the program counter, 
	//and increment the counter


	//must be able to get the entire instruction in this function itself. args included
	//meaning i must inspect every fucking instruction at this point itself, 
	//so i know how many bytes after the isntruction are args, and where the next 
	//the next instruction byte is

	
	
	//the first byte i get out of the pc is going to be the instruction opcode.

	char instruction = memory.memory[state_8080.pc];
	int length = get_args_length(instruction);

	state_8080.pc++;
	char args[length];
	//the successive args are stored in this array, 
	//im expecting it to be quite small, 1 digit
	for(int i = 0; i < length; i++){
		args[i] = memory.memory[state_8080.pc];
		state_8080.pc++;
	}

	//pc is already incremented to the next instruction
	
	//the datasheet confirms that the fetch can take multiple fetches can occur
	//to get the whole instruction before it can be decoded.
	//now i have to identify the next instruction bytes.

	
	//hmm, lets constrain ourself to a few basic instructions for now?
	//idk if this decision will lead me to hell later on

	
	//now these bytes that i have extracted out must be stored somewhere right?	
	//the datasheet mentions a certain instruction register

	//but there is no such mention in the asm manual
	
	

}


int decode(){//decode the instruction

//i just realized that when the cpu is given the instructions, the opcode is already determined.





}



int execute(){




}




int get_args_length(uint8_t opcode){

	//this will be long mannnn

}
