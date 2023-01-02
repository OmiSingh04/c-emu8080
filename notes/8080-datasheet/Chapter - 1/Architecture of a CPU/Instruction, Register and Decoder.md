```
Every computer has a Word Length, which is a characteristic of the machine.
```

The word length is determined by the size of the internal storage elements, and interconnecting paths.

A CPU whose registers can store, and transmit 8 bits of information has a characteristic word length of 8 bits.

```
Each operation that the processor can perform is identified by a unique byte of data known as the Operation Code(opcode).
```

8 bits used for an opcode gives 2^8 = 256 possible opcodes, which is more than enough for our processor.

<h3> Fetch </h3>
Fetching an instruction is done in two distinct operations.
First, the address in the program counter is transmitted to the memory. 

The memory then returns the addressed byte to the processor.

```
The instruction fetched from the memory is stored in the instruction register.
```

```
The 8 bits in the instruction register are decoded, to activate one of a number of output lines, upto 256 lines.
```

The translation of the code in the instruction register is done by the Instruction Decoder, and the associated control circuitry.

There are times when the execution of the instruction requires more than 8 bits.

An example is when an instruction references a memory location. The basic instruction code identifies the operation to be performed, but cannot specify the object address as well.

In a case like this, a two or three byte instruction is used. Successive instruction bytes are stored in sequentially adjacent memory locations, and the processor performs two or more fetches to get the complete instruction.

```
Such instructions which require multiple fetches to get the complete instructions is a Varable Length Instruction.
```

[[Address Register, ALU and CU]]