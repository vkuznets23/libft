# libft

Libft is a coding project I completed as part of my studies at Hive Helsinki, where I recreated key functions from the C standard library. The aim was to gain a deep understanding of how fundamental functions work by building them entirely from scratch. For this project, I was limited to using only three built-in functions: `malloc`, `free`, and `write`.

## Table of Contents
- [Getting Started](#getting-started)
- [Usage Example](#usage-examples)
- [Contripution](#contribution)


## Getting Started
To use Libft in your project, you must clone the repo and run the makefile:

```bash
https://github.com/vkuznets23/libft.git libft
cd libft
make
```
## Usage Example
Here are some basic examples demonstrating how to use Libft functions:

```c
#include <stdio.h>
#include "libft.h"

int main() {
    // Example 1: Convert a string to an integer
    char  *str = "1234";
    int  number = ft_atoi(str);
    printf("string = %s, number = %d\n", str, number);

    //Example 2: Find the length of the string
    char  *str = "Hello world!";
    int  len = ft_strlen(str);
    printf("length of the string is %d\n", len);

    //Example 3: Join 2 strings
    char  *str1 = "Hello";
    char  *str2 = " World!";
    char  *join = ft_strjoin(str1, str2);
    printf("Joined string: %s\n", join);
    free(join);
```

## Contribution
Contributions are welcome! If you spot any bugs, feel free to open an issue.
