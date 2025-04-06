Custom Compiler with VISHNU Instructions
========================================

This project is a simple compiler built using Flex, Bison, and C++ that parses and interprets domain-specific instructions.

Instruction Supported:
-----------------------
- VISHNU for computing the factorial of a number

Features:
---------
- Expression parsing
- Three Address Code (TAC) generation
- Optimized instruction printing
- Final result evaluation
- Simulated final assembly output (STORE)

Project Structure:
------------------
.
├── lexer.l        # Lexical analyzer (Flex)
├── parser.y       # Syntax and semantic rules (Bison)
├── main.cpp       # Entry point of the compiler
├── makefile       # Build automation script
└── README.md      # Project documentation

Requirements:
-------------
- flex
- bison
- g++

To install them:
----------------
sudo apt install flex bison g++

Build Instructions:
-------------------
Run the following commands in your terminal:

make clean
make

This will generate an executable named:
mycompiler

Usage:
------
./mycompiler

Example:
--------
VISHNU X = 5;

Manual Assignments using expressions are also supported:
X = 3 + 4 * 2;

Features Summary:
-----------------
✔ Detects and evaluates valid expressions  
✔ Generates Three Address Code (TAC)  
✔ Optimizes instructions for known patterns  
✔ Evaluates and prints the final result  
✔ Emits simulated final assembly code (e.g., STORE X)

Clean Up:
---------
To remove all compiled files:
make clean
