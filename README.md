
# ALX - 0x19. C - Stacks, Queues - LIFO, FIFO

# Monty Interpreter

The Monty Interpreter is a program written in C. This interpreter reads a Monty Bytecode file, interprets its instructions, and executes them.

## Usage

To use the Monty Interpreter, follow these steps:

1. Clone the Monty Interpreter repository: `git clone https://github.com/kirubel-web/monty`

2. Compile the program by running the following command: `gcc -Wall -Werror -Wextra -pedantic *.c -o monty`

3. Run the Monty Interpreter with a Monty Bytecode file as an argument: `./monty path/to/bytecode.m`

## Monty Bytecode

Monty Bytecode is a language that represents instructions as single words. Each line in a Monty Bytecode file contains an instruction followed by any necessary arguments.

Here are some examples of Monty Bytecode instructions:

- `push 2` - Pushes the value 2 onto the stack.
- `pall` - Prints all values on the stack.
- `add` - Adds the top two elements of the stack and removes them, then pushes the result onto the stack.

## Supported Instructions

The Monty Interpreter supports the following instructions:

- `push <int>`: Pushes an integer onto the stack.
- `pall`: Prints all values on the stack.
- `pint`: Prints the value at the top of the stack.
- `pop`: Removes the top element of the stack.
- `swap`: Swaps the top two elements of the stack.
- `add`: Adds the top two elements of the stack.
- `nop`: Does nothing.
- more to be added


## Contributing

If you would like to contribute to the Monty Interpreter, please follow these steps:

1. Fork the repository.
2. Create a new branch: `git checkout -b feature/my-feature`.
3. Make your changes and commit them: `git commit -m "Add my feature"`.
4. Push to the branch: `git push origin feature/my-feature`.
5. Create a pull request.

## License

The Monty Interpreter is licensed under the MIT License. See `LICENSE` for more information.
