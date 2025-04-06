# Custom Compiler with  and VISHNU Instructions

This project is a simple compiler built using **Flex**, **Bison**, and **C++** that parses and interprets domain-specific instructions:
- `VISHNU` for computing the **factorial** of a number

It supports:
- Expression parsing
- Three address code generation
- Optimized instruction printing
- Final result evaluation and storage output

---

## Project Structure

. ├── lexer.l # Lexical analyzer (Flex) ├── parser.y # Syntax and semantic rules (Bison) ├── main.cpp # Entry point of the compiler ├── makefile # Build automation script └── README.md # Project documentation

---

##  Requirements

- `flex`
- `bison`
- `g++`

Install them using:

```bash
sudo apt install flex bison g++
 Build Instructions
Run the following commands in your terminal:

bash
Copy
Edit
make clean
make
This will generate an executable called mycompiler.

bash
Copy
Edit
./mycompiler
2. Factorial (VISHNU)
VISHNU X = 5;
3. Manual Assignment Using Expression
ini
Copy
Edit
 Features
Detects and evaluates valid expressions

Generates Three Address Code (TAC)

Optimizes instructions for known patterns

Evaluates and prints the final result

Emits simulated final assembly code (STORE)

 Clean Up
To remove all compiled files:

bash
Copy
Edit
make clean
