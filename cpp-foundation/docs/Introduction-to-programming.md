A computer program is a sequence of instructions that directs a computer to perform certain actions in a specified order. Computer programs are typically written in a programming language, which is a language designed to facilitate the writing of instructions for computers. There are many different programming languages available, each of which caters to a different set of needs. The act (and art) of writing a program is called programming. We’ll talk more specifically about how to create programs in C++ in upcoming lessons in this chapter.

When a computer is performing the actions described by the instructions in a computer program, we say it is running or executing the program. A computer will not begin execution of a program until told to do so. That typically requires the user to launch (or run or execute) the program, although programs may also be launched by other programs.

Programs are executed on the computer’s hardware, which consists of the physical components that make up a computer. Notable hardware found on a typical computing device includes:

A CPU (central processing unit, often called the “brain” of the computer), which actually executes the instructions.
Memory, where computer programs are loaded prior to execution.
Interactive devices (e.g. a monitor, touch screen, keyboard, or mouse), which allow a person to interact with a computer.
Storage devices (e.g. a hard drive, SSD, or flash memory), which retain information (including installed programs) even when the computer is turned off.
In contrast, the term software broadly refers to the programs on a system that are designed to be executed on hardware.

Ezoic
In modern computing, programs often interact with more than just hardware -- they also interact with other software on the system (particularly the operating system). The term platform refers to a compatible set of hardware and software (OS, browser, etc…) that provides an environment for software to run. For example, the term “PC” is used colloquially to mean the platform consisting of a Windows OS running on an x86-family CPU.

Platforms often provide useful services for the programs running on them. For example, a desktop application might request the operating system give them a chunk of free memory, create a file over there, or play a sound. The running program doesn’t have to know how this is actually facilitated. If a program uses capabilities or services provided by the platform, it becomes dependent on that platform, and cannot be run on other platforms without modification. A program that can be easily transferred from one platform to another is said to be portable. The act of modifying a program so that it runs on a different platform is called porting.

Now that we’ve talked about programs, let’s discuss programming languages. This isn’t just a history lesson, we’ll also be introducing terminology that will come up in future lessons.

## Machine Language ##

A computer’s CPU is incapable of understanding C++. Instead, CPUs are only capable of processing instructions written in machine language (or machine code). The set of all possible machine language instructions that a given CPU can understand is called an instruction set.

Here is a sample machine language instruction: 10110000 01100001.

Ezoic
Each instruction is understood by the CPU as a command to do a very specific job, such as “compare these two numbers”, or “copy this number into that memory location”. Back when computers were first invented, programmers had to write programs directly in machine language, which was a very difficult and time-consuming thing to do.

How these instructions are organized and interpreted is beyond the scope of this tutorial series, but it is worth noting a few things.

First, each instruction is composed of a sequence of 1s and 0s. Each individual 0 or 1 is called a binary digit, or bit for short. The number of bits in a machine language instruction varies -- for example, some CPUs process instructions that are always 32 bits long, whereas some other CPUs (such as those from the x86 family, which you may be using) have instructions that can be a variable length.

Second, each family of compatible `CPUs` (e.g. x86, Arm64) has its `own machine language`, and this machine language is `not compatible with the machine language of other CPU families`. This means `machine language programs written for one CPU family cannot be run on CPUs from a different family!`

## Related content

A “CPU family” is formally called an “instruction set architecture” (“ISA” for short). Wikipedia has a list of different CPU families here().

## Assembly Languages

Ezoic
Machine language instructions (like 10110000 01100001) are ideal for a CPU, but are difficult for humans to understand. Since programs (at least historically) have been written and maintained by humans, it makes sense that programming languages should be designed with human needs in mind.

An assembly language (often called assembly for short) is a programming language that essentially functions as a more human-readable machine language. Here is the same instruction as above in x86 assembly language: mov al, 0x61.

Optional reading

This instruction illustrates many of the capabilities that make assembly more readable than machine language.

The operation (what the instruction does) is identified by a short mnemonic (typically a 3-5 letter name). mov is easily understood to be a mnemonic for “move”, which is an operation that copies bits from one location to another.
Registers (fast memory locations that are part of the CPU itself) are accessed by a name. al is the name of a specific register on an x86 CPU.
Numbers can be specified in a more convenient format. Assembly languages typically support both decimal numbers (e.g. 97) and hexadecimal numbers (e.g. 0x61).
It is fairly easy to understand that the assembly instruction mov al, 0x61 copies hexadecimal number 0x61 into the al CPU register.

Since CPUs do not understand assembly language, assembly programs must be translated into machine language before they can be executed. This translation is done by a program called an assembler. Because each assembly language instruction is typically designed to mirror an equivalent machine language instruction, the translation process is typically straightforward.

Just like each CPU family has its own machine language, each CPU family also has its own assembly language (which is designed to be assembled into machine language for that same CPU family). This means there are many different assembly languages. Although conceptually similar, different assembly languages support different instructions, use different naming conventions, etc…

Introduction to low-level languages

Machine languages and assembly languages are considered low-level languages, as these languages provide minimal abstraction from the architecture of the machine. In other words, the programming language itself is tailored to the specific instruction set architecture it will be run on.

Ezoic
## Low-level languages have a number of notable downsides:

Programs written in a low-level language are not portable. Since a low-level language is tailored to a specific instruction set architecture, the programs written in the language are too. Porting such programs to other architectures is typically non-trivial.

Writing a program in a low-level language requires detailed knowledge of the architecture itself. For instance, the instruction mov al, 061h requires knowing that al refers to a CPU register available on this specific platform, and understanding how to work with that register. On a different architecture, this register might be named something different, have different limitations, or not exist at all.

Low-level programs are hard to understand. While individual assembly instructions can be quite understandable, it can still be hard to deduce what a section of assembly code is actually doing. And since assembly programs require many instructions to do even simple tasks, they tend to be quite long
It is hard to write assembly programs of significant complexity because the language only provides primitive capabilities. The programmer is left to implement everything they need themselves.

The primary benefit of low-level languages is that they are fast. Assembly is still used today when there are sections of code that are performance critical. And it’s also used in a few other cases, one of which we’ll discuss in a moment.

## Introduction to high-level Languages

To address many of the above downsides, new “high-level” programming languages such as C, C++, Pascal (and later, languages such as Java, Javascript, and Perl) were developed.

Here is the same instruction as above in C/C++: a = 97;

//97 is `decimal` translated from `hexadecimal` 0x67

Much like assembly programs (which must be assembled to machine language), programs written in a high-level language must be translated into machine language before they can be run. There are two primary ways this is done: compiling and interpreting.

Ezoic
C++ programs are usually compiled. A compiler is a program (or collection of programs) that reads the source code of one language (usually a high-level language) and translates it into another language (usually a low-level language). For example, a C++ compiler translates C++ source code into machine code.