
---

# File I/O Functions

This repository contains implementations of various file I/O operations in C. The following functions are included:

1. **`read_textfile`**: Reads a text file and prints it to the POSIX standard output.
2. **`create_file`**: Creates a file with specific content and permissions.
3. **`append_text_to_file`**: Appends text to an existing file.
4. **`cp`**: Copies the content of one file to another.

## 1. `read_textfile`

**Prototype:**
```c
ssize_t read_textfile(const char *filename, size_t letters);
```

**Description:**
Reads a text file and prints up to `letters` number of letters to the POSIX standard output.

**Parameters:**
- `filename`: The name of the file to read.
- `letters`: The number of letters to read and print.

**Returns:**
- The actual number of letters read and printed.
- Returns `0` if the file cannot be opened or read, if `filename` is `NULL`, or if `write` fails or does not write the expected number of bytes.

**Usage Example:**
```c
ssize_t n;
n = read_textfile("example.txt", 114);
printf("\n(printed chars: %li)\n", n);
```

## 2. `create_file`

**Prototype:**
```c
int create_file(const char *filename, char *text_content);
```

**Description:**
Creates a file with the specified content and permissions.

**Parameters:**
- `filename`: The name of the file to create.
- `text_content`: The NULL-terminated string to write to the file.

**Returns:**
- `1` on success.
- `-1` on failure (file cannot be created, file cannot be written, etc.).

**Notes:**
- If the file already exists, it is truncated.
- If `text_content` is `NULL`, an empty file is created.
- The file permissions are set to `rw-------`.

**Usage Example:**
```c
int result;
result = create_file("newfile.txt", "Hello, World!");
printf("-> %i\n", result);
```

## 3. `append_text_to_file`

**Prototype:**
```c
int append_text_to_file(const char *filename, char *text_content);
```

**Description:**
Appends text to the end of a file.

**Parameters:**
- `filename`: The name of the file to append text to.
- `text_content`: The NULL-terminated string to add to the file.

**Returns:**
- `1` on success.
- `-1` on failure (file does not exist, cannot be written, etc.).

**Notes:**
- If `text_content` is `NULL`, nothing is added to the file.
- Does not create the file if it does not exist.

**Usage Example:**
```c
int result;
result = append_text_to_file("existingfile.txt", " More text.");
printf("-> %i\n", result);
```

## 4. `cp`

**Prototype:**
```c
int main(int argc, char **argv);
```

**Description:**
Copies the content of one file to another.

**Usage:**
```
cp file_from file_to
```

**Errors and Exit Codes:**
- Exit with code `97` and print `Usage: cp file_from file_to` if the number of arguments is incorrect.
- Exit with code `98` and print `Error: Can't read from file NAME_OF_THE_FILE` if `file_from` does not exist or cannot be read.
- Exit with code `99` and print `Error: Can't write to NAME_OF_THE_FILE` if `file_to` cannot be created or written to.
- Exit with code `100` and print `Error: Can't close fd FD_VALUE` if a file descriptor cannot be closed.

**Usage Example:**
```sh
./cp sourcefile.txt destinationfile.txt
```

---
