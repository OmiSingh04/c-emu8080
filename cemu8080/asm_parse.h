#ifndef ASM_PARSE_H_
#define ASM_PARSE_H_

char* parse_asm(char*);
//get the asm file as a string

char* get_machine_code(char*);
//get the machine code in the form of a byte array, from the asm_str

//i figured i would same some memory if i resort to byte array, where every bit is just a bid, rather than a string, where every bit would be a byte?



#endif
