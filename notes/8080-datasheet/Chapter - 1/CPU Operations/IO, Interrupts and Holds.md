
<h3> I/O </h3>
Input and Output operations are similar to memory read and write operations with the exception that a peripheral I/O device is addressed instead of a memory location. 


The CPU issues the appropriate input or output control signal, sends the proper device address, and either receives the data from the input or sends data to the output.

Data input/output can be in either 
```
Parallel Form
Serial Form
```

Binary data consists of bits.

In **Parallel** I/O, all the bits of the word are transferred at a single time, one bit per line. (Perhaps some data line... (data bus?))

In **Serial** I/O, one bit at a time, through a single line. 

Serial I/O is much slower, but requires less hardware.

<h3> Interrupts </h3>

