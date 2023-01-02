
<h3> Address Register </h3>
```
An Address Register may be used to hold on to a memory address that is to be accessed for data.
```

If the address register is programmable, the program can "build" an
address in the address register prior to executing a Memory
Reference instruction 
```
An instruction that reads data from memory, writes data to memory or operates on data stored in memory.
```

<h3> ALU </h3>
```
The ALU is the portion of the CPU hardware, that performs the arithmetic and logical operations on binary data.
```

The ALU must consist of an **adder** which can add the contents of two registers. This permits the processor to perform arithmetic manipulations to data.

Using basic adder, a programmer can write routines to subtract, multiply and divide, and give the machine complete arithmetic capabilities.

However, ALU's provide other built-in functions like hardware subtraction, boolean logic and bit shift.

```
The ALU contains Flag Bits, which specify certain conditions that arise during arithmetic and logical manipulations.
```

```
Flags typically include Carry, Zero, Sign, and Parity.
```

It is possible to program **conditional jumps** dependent on the status of 1 or more flags.

Example, the program may be designed to jump to a special routine if the carry bit is set following an addition instruction.
<h3> Control Circuitry </h3>
```
It is the primary functional unit in a CPU. After an instruction is fetched and decoded, the CU issues appropriate signals for initiating the proper processing action.
```

```
The CU must be able to respond to external signals like INTERRUPT or a WAIT request.
```

An INTERRUPT will cause the CU to interrupt the main program, jump to a different routine to service the interrupt and then return to the main program.

A WAIT request is often issued by the memory or an I/O element slower than the CPU. The control circuitry will idle the CPU, until the memory or I/O port is ready with data.

[[Timing, Read, Write and Wait]]