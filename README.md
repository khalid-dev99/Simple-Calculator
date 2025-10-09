🧮 Simple Calculator in C++:

This is a basic command-line calculator written in C++ that performs arithmetic operations between two numbers. The user is prompted to input an operation (+, -, *, or /) and then enter two numeric values.
__________________________________________________________________
📄 Features:

Performs the four basic arithmetic operations:

Addition (+)

Subtraction (-)

Multiplication (*)

Division (/)

Handles division by zero.

Provides a message for invalid operations.
___________________________________________________________________
⚙️ How It Works:

1. The program asks the user to choose an arithmetic operation:

2. Then it asks for two numbers.

3. It uses a `switch` statement to perform the selected operation:
- `+`: Adds the two numbers
- `-`: Subtracts the second number from the first
- `*`: Multiplies the numbers
- `/`: Divides the first number by the second (if not zero)

4. If the user enters `/` and the second number is `0`, it prints: Invalid operation

5. If the user enters an unknown operation, it also prints: Invalid operation
_____________________________________________________________________
