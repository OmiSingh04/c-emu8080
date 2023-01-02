The activities of a CPU are cyclic. 
This is an orderly sequence, which requires precise timing. 

```
The CPU therefore requires a free running oscillator clock, which furnishes the reference of all processor actions.
```

```
An instruction cycle consists of three steps
	Fetch
	Decode
	Execute
```

The portion of the cycle identified with a clearly defined activity is called a **State**.

The interval between the pulses of the oscillating clock is called a **Clock Period**.

One or more clock periods are necessary for the completion of a state, and several states in a cycle.


<h3> Instruction Fetch </h3>
```
The first state in any instruction cycle is dedicated to fetching the next instruction. 
```

The CPU issues a read signal and the contents of the program counter are sent to memory.
The memory responds by returning the next instruction word.


The first byte of the instruction is placed in the instruction register.

```
If the instruction consists of more than one byte, additional states are required to fetch each byte of the instruction.
```

When the entire instruction is present in the CPU, the **Program Counter** is incremented, and the instruction is **decoded**.

The operation specified in the instruction will be executed in the remaining states of the instruction cycle.

The instruction may call for a memory read, a memory write, I/O, or some internal CPU operation, like register to register transfer, or an add-registers operation.



<h3> Memory Read </h3>
A Fetch is a special memory read operation, that brings the instruction to the CPU's instruction register.

The instruction may then call for data to be read from the memory. The CPU again issues a read signal and sends the proper memory address. 

Memory responds by transmitting the required word.

The data received is placed in teh accumulator or one of the other purpose registers!


<h3> Memory Write </h3>
A memory write operation is similar to a read, except the direction of data flow. The CPU issues a write signal, sends the memory address and then also, sends the data word to be written into the addressed memory location.


<h3> Wait (memory synchronization) </h3>
The speed of the CPU is limited by the memory's access time.
Once the signal is issued to the memory, it cannot proceed until the memory has time to respond. 

There are a few memories, that cannot supply the addressed byte within the minimum time established by the CPU's clock.

The memory, must contain a synchronization provision, which permits the memory to request a Wait state.

When the memory receives a read or write enable signal, it places a signal on the processor's READY line, causing the CPU to idle temporarily.

After the memory has had time to respond, it frees the processor's READY line, and instruction cycle proceeds.



