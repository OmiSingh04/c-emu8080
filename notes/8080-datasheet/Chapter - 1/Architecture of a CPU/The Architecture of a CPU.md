The CPU consists of the following units -
- Registers
- ALU
- Control Circuitry


```
Registers are temporary storage units within the CPU. They can be dedicated (like the program counter or the instruction register), or general purpose (like the Accumulator).
```

<h3> Accumulator </h3>
Usually stores on of the operands to be manipulated by the ALU. 

A typical instruction might direct the ALU to add the contents of some other register to the contents of the accumulator and store the result in the accumulator itself.

The accumulator is usually the operand and the destination itself.

<h3>Program Counter</h3>
Each location in memory is numbered. The number which identifies a memory location is an **Address**.

The processor maintains a counter which contains the address of the next program instruction - **Program Counter**.

```c
uint_8* pc; //stores address and simulates 1 byte addressing
```

The processor updates the program counter by adding 1 each time it fetches an instruction, so that the program counter is always pointing to the next instruction.

```
The programmer stores his instructions in numerically adjacent addresses, so that the lower addresses contain the first instructions to be executed and the higher addresses contain later instructions.
```

The only time this sequential rule is violated is when a **jump** instruction is encountered.

<h3> Jump Instruction </h3>
The jump instruction contains the address of the instruction which is to follow it. The next instruction may be stored in any memory location, as long as the programmed jump specifies the correct address.

```
When the jump instruction is executed, the contents of the program counter is replaced with the address in the jump.
```

A special kind of jump occurs when the program "**calls**" a subroutine. 

```
'Call' is a kind of jump instruction. In this, the processor is required to 'remember' the contents of the program counter at the time the jump occurs. So, when the last instruction of the subroutine is executed, the processor can resume with the main program.
```

<h3> Subroutine </h3>
```
A Subroutine is a program within a program. It is a general-purpose set of instructions which must be executed repeatedly in the course of a main program.
```

Examples are routines which calculate square, sine and logarithm.

<h3> Stack </h3>
The processor handles subroutines in a special way. 

```
When the processor receives a call instruction, it increments the Program Counter, and stores the counter's content in a reserved memory known as the Stack.
```

The stack saves the address of the next instruction to be executed, when the last instruction of a subroutine is executed.
The processor then loads the address in the program counter, which is the address of the first instruction in the subroutine.


```
The last instruction in any subroutine is the return instruction.
```

When a return instruction is fetched, the processor simply replaces the contents of the program counter with the address at the top of the stack.


Subroutines are often nested. 
The status of the processor - the contents of all the registers.

```
During interrupts, the status of the processor can be saved in the stack, and can be restored after the interrupt has been serviced.
```

[[Instruction, Register and Decoder]]