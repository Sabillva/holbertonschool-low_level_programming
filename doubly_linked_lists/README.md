### README for Doubly Linked Lists Project

#### Introduction
This project involves the implementation of various functions to manipulate a doubly linked list (`dlistint_t`). A doubly linked list is a type of linked list in which each node contains a reference to the next node and the previous node in the sequence.

#### Project Structure
The project contains several C files, each implementing different functionalities related to doubly linked lists. Below is a description of the implemented functions and their respective prototypes.

#### Functions Implemented

1. **Printing all elements of a doubly linked list**
   - **Prototype:** `size_t print_dlistint(const dlistint_t *h);`
   - **Description:** Prints all the elements of a `dlistint_t` list.
   - **Return:** The number of nodes in the list.

2. **Returning the number of elements in a linked `dlistint_t` list**
   - **Prototype:** `size_t dlistint_len(const dlistint_t *h);`
   - **Description:** Returns the number of elements in a linked `dlistint_t` list.

3. **Adding a new node at the beginning of a `dlistint_t` list**
   - **Prototype:** `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
   - **Description:** Adds a new node at the beginning of a `dlistint_t` list.
   - **Return:** The address of the new element, or `NULL` if it failed.

4. **Adding a new node at the end of a `dlistint_t` list**
   - **Prototype:** `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
   - **Description:** Adds a new node at the end of a `dlistint_t` list.
   - **Return:** The address of the new element, or `NULL` if it failed.

5. **Freeing a `dlistint_t` list**
   - **Prototype:** `void free_dlistint(dlistint_t *head);`
   - **Description:** Frees a `dlistint_t` list.

6. **Returning the nth node of a `dlistint_t` linked list**
   - **Prototype:** `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
   - **Description:** Returns the nth node of a `dlistint_t` linked list.
   - **Return:** The nth node, or `NULL` if the node does not exist.

7. **Returning the sum of all the data (n) of a `dlistint_t` linked list**
   - **Prototype:** `int sum_dlistint(dlistint_t *head);`
   - **Description:** Returns the sum of all the data (n) of a `dlistint_t` linked list.
   - **Return:** The sum of all the data, or `0` if the list is empty.

8. **Inserting a new node at a given position**
   - **Prototype:** `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
   - **Description:** Inserts a new node at a given position.
   - **Return:** The address of the new node, or `NULL` if it failed.

9. **Deleting the node at index `index` of a `dlistint_t` linked list**
   - **Prototype:** `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
   - **Description:** Deletes the node at index `index` of a `dlistint_t` linked list.
   - **Return:** `1` if it succeeded, `-1` if it failed.

#### Compilation and Execution
To compile the project, use the `gcc` compiler with the following flags:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <source_files> -o <output_file>
```

Example:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o print
./print
```

#### Valgrind
To check for memory leaks, you can use Valgrind:

```bash
valgrind ./<output_file>
```

Example:

```bash
valgrind ./print
```

#### Repository
All the source files for this project can be found in the following GitHub repository:

**GitHub repository:** [holbertonschool-low_level_programming]

**Directory:** `doubly_linked_lists`

Author: Sabina Allahverdiyeva
