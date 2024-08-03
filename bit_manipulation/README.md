```markdown
# Bit Manipulation Project

This project contains various functions for manipulating bits in C, such as converting binary strings to unsigned integers, printing binary representations, and more. It is part of the Holberton School low-level programming curriculum.

## Table of Contents

- [Files](#files)
- [Function Descriptions](#function-descriptions)
- [Usage](#usage)
- [Compilation](#compilation)
- [Examples](#examples)

## Files

- `0-binary_to_uint.c`: Contains the `binary_to_uint` function.
- `1-print_binary.c`: Contains the `print_binary` function.
- `2-get_bit.c`: Contains the `get_bit` function.
- `3-set_bit.c`: Contains the `set_bit` function.
- `4-clear_bit.c`: Contains the `clear_bit` function.
- `5-flip_bits.c`: Contains the `flip_bits` function.
- `main.h`: Header file containing function prototypes.
- `0-main.c`, `1-main.c`, `2-main.c`, `3-main.c`, `4-main.c`, `5-main.c`: Test files for each function.

## Function Descriptions

### `unsigned int binary_to_uint(const char *b);`

Converts a binary number (given as a string) to an unsigned integer.

- **Parameters:**
  - `b`: A string of 0 and 1 characters.

- **Returns:**
  - The converted number, or 0 if there are invalid characters or `b` is `NULL`.

### `void print_binary(unsigned long int n);`

Prints the binary representation of a number without using arrays or malloc.

- **Parameters:**
  - `n`: The number to be printed in binary.

### `int get_bit(unsigned long int n, unsigned int index);`

Returns the value of a bit at a given index.

- **Parameters:**
  - `n`: The number from which to get the bit.
  - `index`: The index of the bit to retrieve.

- **Returns:**
  - The value of the bit at index, or -1 if an error occurred.

### `int set_bit(unsigned long int *n, unsigned int index);`

Sets the value of a bit to 1 at a given index.

- **Parameters:**
  - `n`: Pointer to the number to modify.
  - `index`: The index of the bit to set.

- **Returns:**
  - 1 if successful, or -1 if an error occurred.

### `int clear_bit(unsigned long int *n, unsigned int index);`

Sets the value of a bit to 0 at a given index.

- **Parameters:**
  - `n`: Pointer to the number to modify.
  - `index`: The index of the bit to clear.

- **Returns:**
  - 1 if successful, or -1 if an error occurred.

### `unsigned int flip_bits(unsigned long int n, unsigned long int m);`

Returns the number of bits needed to flip to get from one number to another.

- **Parameters:**
  - `n`: The first number.
  - `m`: The second number.

- **Returns:**
  - The number of bits needed to flip.

## Usage

Include the header file `main.h` in your program to use these functions. The functions are designed to handle bit manipulation tasks efficiently.

## Compilation

To compile the code, you can use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
./a

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c -o b
./b

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c
./c

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
./d

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
./e

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
./f
```

## Examples

Here are some examples of how each function can be used:

### `binary_to_uint`

```c
unsigned int n;

n = binary_to_uint("101");
printf("%u\n", n); // Output: 5
```

### `print_binary`

```c
print_binary(98); // Output: 1100010
printf("\n");
```

### `get_bit`

```c
int bit;

bit = get_bit(98, 1);
printf("%d\n", bit); // Output: 1
```

### `set_bit`

```c
unsigned long int n = 98;

set_bit(&n, 0);
printf("%lu\n", n); // Output: 99
```

### `clear_bit`

```c
unsigned long int n = 98;

clear_bit(&n, 1);
printf("%lu\n", n); // Output: 96
```

### `flip_bits`

```c
unsigned int flips;

flips = flip_bits(1024, 1);
printf("%u\n", flips); // Output: 2
```

### Notes

- Make sure to adjust the file paths and compilation commands according to your project's directory structure.
- You can include more sections in the `README.md` as needed, such as information on how to run tests or detailed explanations of algorithms.
- This template provides a clear and structured format that can help users and collaborators understand your project quickly.

