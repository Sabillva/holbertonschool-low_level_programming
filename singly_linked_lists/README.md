# Singly Linked Lists

## Description

This project involves the implementation and manipulation of singly linked lists in C. The main focus is to create various functions to handle linked list operations such as printing, adding, and deleting nodes.

## Files

- `lists.h`: Header file containing the definition of the `list_t` structure and function prototypes.
- `0-print_list.c`: Contains the implementation of the function that prints all elements of a `list_t` list.
- `0-main.c`: Test file to demonstrate the functionality of the `print_list` function.

## Function

### print_list

Prototype: 
```c
size_t print_list(const list_t *h);
```

- This function prints all the elements of a `list_t` list.
- It returns the number of nodes in the list.
- The format of the output should be:
  ```
  [<len>] <str>
  ```
- If `str` is `NULL`, the function prints `[0] (nil)`.

## Example

Here is an example of how to use the `print_list` function:

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
```

## Compilation and Execution

To compile the code, use the following command:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
```

To run the executable:
```sh
./a
```

## Output

The output of the example program should be:
```
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
```

Author: Sabina Allahverdiyeva
