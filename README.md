*This project has been created as part of the 42 curriculum by maaugust.*

<div align="center">
  <img src="https://raw.githubusercontent.com/rfs-hybrid/42-piscine-artwork/main/assets/covers/cover-reloaded.png" alt="Piscine Reloaded Cover" width="100%" />
</div>

<div align="center">
  <h1>💻 Piscine Reloaded</h1>
  <p><i>Back to the basics: A comprehensive review of the C Piscine fundamentals.</i></p>
  <img src="https://img.shields.io/badge/Language-C-blue" alt="Language badge" />
  <img src="https://img.shields.io/badge/Grade-100%2F100-success" alt="Grade badge" />
  <img src="https://img.shields.io/badge/Norminette-Passing-success" alt="Norminette badge" />
  <br />
</div>

---

## 💡 Description
**Piscine Reloaded** is a curated "best-of" collection of exercises from the C Piscine. Its purpose is to remind students of the core syntactic and semantic bases of the C programming language before diving into the main curriculum. 

Rather than reusing old code, this module forces a fresh implementation of fundamental concepts, ensuring that the critical building blocks—functions, loops, pointers, and structures—are fully mastered.

---

## 🧠 Exercise Breakdown

The 28 exercises in this module incrementally test standard Unix command-line proficiency and low-level C programming mechanics.

### 🔹 Shell & Command Line
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex00: Oh yeah, mooore...`](ex00)** | **Advanced Attributes, Sizes & Symlinks:** A deeper dive into `ls -l` outputs, requiring specific file sizes, timestamps, and symbolic links. <br><br>**Logic:** <br>1. **Timestamps:** Use `touch -t YYYYMMDDHHMM filename` to forge exact creation dates.<br>2. **Sizes:** Use `truncate -s` to match the exact byte sizes required by the subject.<br>3. **Symlinks:** Use `ln -s target link_name` to create the pointer file.<br>4. **Directories:** Remember that to *enter* or read a directory, it requires the execute (`x`) permission. |
| **[`ex01: Z`](ex01)** | **Standard Output:** The goal is to create a file that outputs "Z" and a newline when `cat` is called on it. <br><br>**Logic:** Use the `echo` command combined with the output redirection operator (`>`) to write text directly into a file without opening a text editor. <br>`echo "Z" > z` |
| **[`ex02: clean`](ex02)** | **Finding & Deleting:** Locating and erasing temporary files (`*~` or `#*#`) in a single command line. <br><br>**Logic:** The `find` command is incredibly powerful. Use `find . -type f` to look for files. Use `\( -name "*~" -o -name "#*#" \)` to set the search parameters (the `-o` means OR). Finally, use `-print -delete` to display and remove them. |
| **[`ex03: find_sh`](ex03)** | **Advanced Searching:** Finding all `.sh` files but outputting *only* their names, without the extension or the path. <br><br>**Logic:** Instead of spawning a new process for every file, use `find . -type f -name '*.sh' -printf "%f\n"` to strip the path, and pipe that into `sed 's/\.sh$//'` to erase the extension. |
| **[`ex04: MAC`](ex04)** | **Data Parsing & Regex:** Extracting only the MAC addresses from network configuration data. <br><br>**Logic:** Run `ifconfig -a` to dump all network interface data. Pipe it into `grep -oE` using a POSIX extended regular expression (`'([[:xdigit:]]{2}:){5}..'`) to aggressively hunt and extract *only* the strings that perfectly match the mathematical format of a MAC address. |
| **[`ex05: Can you create it?`](ex05)** | **Escape Characters & Attributes:** Creating a file with a highly unconventional name full of special characters, while matching specific permissions (`614`), exact byte size (2 bytes), and a forged timestamp. <br><br>**Logic:** The terminal interprets characters like `*`, `$`, `?`, and `\` as active commands or wildcards. To create a file literally named `"\?$*'MaRViN'*$?\"`, you must use strong quotes (`'`) and carefully escape specific characters so the shell reads them purely as text. Then, use `echo -n` to write exactly two bytes without a trailing newline, `chmod` for the `-rw---xr--` permissions, and `touch -t` for the specific `Oct 2 12:21` timestamp. |

### 🔹 C Fundamentals & Math
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex06: ft_print_alphabet`](ex06)** | **Loops & ASCII:** Printing the alphabet in lowercase, on a single line, in ascending order. <br><br>**Logic:** In C, characters are just integers representing ASCII values ('a' is `97`, 'z' is `122`). We can use a `while` loop starting at 'a' and incrementing the character by `1` until it reaches 'z'. |
| **[`ex07: ft_print_numbers`](ex07)** | **Character vs Integer:** Printing all digits (0 to 9) on a single line, in ascending order. <br><br>**Logic:** We loop from the *character* '0' (ASCII 48) to the character '9' (ASCII 57). It is crucial to understand that printing the integer `0` using `write` will not output the number "0", but rather the ASCII null character. |
| **[`ex08: ft_is_negative`](ex08)** | **Conditionals:** Displaying 'N' if the integer passed as a parameter is negative, or 'P' if it is positive or zero. <br><br>**Logic:** A simple introduction to `if/else` statements to check the sign of a number. If the integer `n < 0`, write 'N'. Otherwise, write 'P'. |
| **[`ex09: ft_ft`](ex09)** | **Basic Pointers:** Taking a pointer to an `int` as a parameter and setting its value to `42`. <br><br>**Logic:** In C, passing a variable to a function only passes a copy of its value. To change the actual variable, you must pass its memory address (a pointer). Inside the function, we use the dereference operator (`*`) to access that address and alter the original value. |
| **[`ex10: ft_swap`](ex10)** | **Pass by Reference:** Swapping the contents of two integers whose addresses are passed as parameters. <br><br>**Logic:** Because we have the addresses of the two original variables, we can safely swap their values. This requires declaring a temporary variable (`tmp`) to hold one value so it isn't overwritten and lost during the swap. |
| **[`ex11: ft_div_mod`](ex11)** | **Returning Multiple Values:** Calculating division and modulo, and storing the results in two separate pointers. <br><br>**Logic:** A standard C function can only `return` one value. By accepting pointers as parameters (`*div` and `*mod`), a function can effectively "return" multiple values by writing the results directly into the memory of the calling function. Includes a safety check to prevent division by zero. |
| **[`ex12: ft_iterative_factorial`](ex12)** | **Iterative Math:** Calculating a factorial ($n!$) using a standard loop. <br><br>**Logic:** A factorial is the product of an integer and all the integers below it (e.g., $4! = 4 \times 3 \times 2 \times 1$). We use a `while` loop to multiply a `result` variable by a decreasing counter until it reaches 1. Invalid numbers (like negatives) must return 0. |
| **[`ex13: ft_recursive_factorial`](ex13)** | **Recursive Factorial:** Calculating a factorial using function self-calling. <br><br>**Logic:** Instead of a loop, the function calls itself with `nb - 1`. The base case to stop the recursion is when `nb` equals 0 or 1 (returning 1). The return statement builds the math dynamically: `return (nb * ft_recursive_factorial(nb - 1))`. |
| **[`ex14: ft_sqrt`](ex14)** | **Integer Square Root:** Finding the exact square root of a number. <br><br>**Logic:** We iterate a variable `root` starting from 1. *The Overflow Optimization:* Multiplying `root * root` can easily overflow the 32-bit integer limit if `nb` is very large. To safely prevent this without casting, we use division in our loop condition: `while (root <= nb / root)`. If `root * root == nb`, we return it; otherwise, the root is irrational, returning 0. |

### 🔹 Strings & Command-Line Arguments
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex15: ft_putstr`](ex15)** | **Standard Output:** Printing a string to the terminal using `write`. <br><br>**Logic:** We iterate through the string, using the `write` system call on each character until the null-terminator is reached. |
| **[`ex16: ft_strlen`](ex16)** | **String Length:** Reproducing the standard `strlen` function. <br><br>**Logic:** We iterate through the string with a counter until we hit the null-terminator `\0`, returning the final count. |
| **[`ex17: ft_strcmp`](ex17)** | **Lexicographical Comparison:** Reproducing the standard `strcmp` function. <br><br>**Logic:** We iterate through both strings simultaneously as long as their characters match and we haven't reached the null-terminator. The moment a mismatch occurs (or a string ends), we return the mathematical difference between the two characters. *Crucial:* The difference must be calculated by casting the characters to `unsigned char` to handle extended ASCII correctly! |
| **[`ex18: ft_print_params`](ex18)** | **Iterating Vectors:** Displaying all given arguments in the order they were passed. <br><br>**Logic:** The `argc` variable tells us exactly how many arguments exist. We create a `while` loop starting at index `1` (to explicitly skip the program name at `argv[0]`) and run it until `i < argc`. For each iteration, we use a safe secondary index (`argv[i][j]`) to print the characters of the string located at `argv[i]`, followed by a newline. |
| **[`ex19: ft_sort_params`](ex19)** | **ASCII Sorting:** Displaying all arguments sorted in strict ASCII order. <br><br>**Logic:** We need to sort an array of strings. We can implement a classic Bubble Sort algorithm. We iterate through the `argv` array (starting from index `1`). We use a custom `ft_strcmp` helper function to mathematically compare adjacent strings. If a string is "greater" than the one next to it, we swap their pointer positions in the `argv` array. Once the array is fully sorted, we loop through it one last time to safely print the results. |

### 🔹 Dynamic Allocation, Macros & Structs
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex20: ft_strdup`](ex20)** | **String Duplication:** Reproducing the standard `strdup` function using `malloc`. <br><br>**Logic:** We first find the length of the source string `src`. We then use `malloc` to allocate `length + 1` bytes of memory (the `+ 1` is strictly for the null-terminator `\0`). After verifying the allocation didn't fail (return `NULL`), we copy the characters from `src` into our newly allocated memory block and return the pointer. |
| **[`ex21: ft_range`](ex21)** | **Integer Arrays:** Generating an array of numbers between `min` (included) and `max` (excluded). <br><br>**Logic:** If `min >= max`, the range is invalid, and we immediately return `NULL`. Otherwise, the total number of elements is `max - min`. We allocate memory by multiplying this count by `sizeof(int)`. Finally, we use a loop to populate the array with the incremental values and return the pointer. |
| **[`ex22: ft_abs.h`](ex22)** | **Macro Functions:** Creating a macro that dynamically calculates an absolute value. <br><br>**Logic:** The 42 Norm strictly forbids ternary operators. To bypass this, we use a mathematical boolean evaluation inside a `#define`: `#define ABS(Value) ((Value) * (((Value) > 0) - ((Value) < 0)))`. *Crucial Trap:* Every single instance of `Value` must be wrapped in strict parentheses to prevent mathematical precedence errors if a complex equation (like `ABS(5 - 10)`) is passed into the macro! |
| **[`ex23: ft_point.h`](ex23)** | **Structures:** Defining a custom data type to hold multiple variables. <br><br>**Logic:** We create a `struct s_point` containing two integers (`x` and `y`). We use `typedef` so the user can declare it simply using `t_point point;` without needing the `struct` keyword every time. |

### 🔹 Build Systems, Function Pointers & I/O
| Exercise | Concept & Logic |
| :--- | :--- |
| **[`ex24: Makefile`](ex24)** | **Makefiles:** Automating the compilation process to build `libft.a` dynamically from a specific folder structure. <br><br>**Logic:** A `Makefile` consists of rules and dependencies. We use variables (like `SRCS`, `OBJS`, `CC`, `CFLAGS`) to keep the file clean. We define an `all` rule that points to `libft.a`. The compiler must fetch `.c` files from a `srcs/` directory and map them to `.o` files, using the header `ft.h` located in the `includes/` directory. We also build utility rules: `clean` (removes `.o` files), `fclean` (removes `.o` files AND the `.a` library), and `re` (runs `fclean` then `all`). |
| **[`ex25: ft_foreach`](ex25)** | **Applying Functions:** Iterating through an integer array and executing a function on each element. <br><br>**Logic:** The prototype accepts a function pointer `void (*f)(int)`. We use a simple loop from `0` to `length - 1`, calling `f(tab[i])` for every index. |
| **[`ex26: ft_count_if`](ex26)** | **Filtering:** Counting how many elements meet a specific condition. <br><br>**Logic:** Similar to `ft_any`, but instead of returning early, we increment a counter variable every time `f(tab[i]) == 1`. We iterate exactly `length` times and return the final count. |
| **[`ex27: display_file`](ex27)** | **Basic I/O:** Replicating a simplified file reader using a fixed-size buffer. <br><br>**Logic:** The program takes a single file path as an argument. We use `open()` to get a file descriptor, and a `while` loop with `read()` to pull chunks of text into a fixed-size character array (without using `malloc`). We use `write()` to print the buffer to standard output, and finally `close()` the file. Custom error messages handle missing arguments or unreadable files. |

---

## 🛠️ Instructions

### 🧪 Compilation & Execution
This repository contains individual directories for each exercise. Where executables or libraries are required, a `Makefile` is provided. 

All C files are compiled with strict error flags:
`gcc -Wall -Wextra -Werror`

1. **Clone the repository:**
   You can clone this module directly, or pull the entire 42 Piscine parent repository which includes this module as a submodule.

   **Option A: Clone this module directly**
   ```bash
   git clone git@github.com:rfs-hybrid-42-piscine/Piscine-Reloaded.git Piscine-Reloaded
   cd Piscine-Reloaded
   ```

   **Option B: Clone the parent repository (with submodules)**
   ```bash
   git clone --recurse-submodules git@github.com:rfs-hybrid/42-Piscine.git 42-Piscine
   cd 42-Piscine/Piscine-Reloaded
   ```
   *(Note: The `--recurse-submodules` flag ensures all nested module repositories are populated immediately.)*

2. **Test a Single C Function (using `tester.c`):**
   Pass the corresponding `-D EX**` flag to activate that specific test block inside the master tester file.
   ```bash
   # Example for ex20 (ft_strdup):
   cc -Wall -Wextra -Werror -D EX20 tester.c ex20/ft_strdup.c -o test_ex20
   ./test_ex20
   ```

3. **Test Multiple Functions Together:**
   You can chain multiple `-D` flags to test several functions at once, provided you include all their `.c` files in the command.
   ```bash
   # Example for ex20 and ex21:
   cc -Wall -Wextra -Werror -D EX20 -D EX21 tester.c ex20/ft_strdup.c ex21/ft_range.c -o test_multiple
   ./test_multiple
   ```

4. **Test ALL C Exercises at Once:**
   By passing the `-D TEST_ALL` master flag, you activate the entire testing suite in one go. Because the tester will call every function, you **must** compile it alongside every corresponding `.c` source file!
   ```bash
   cc -Wall -Wextra -Werror -D TEST_ALL tester.c \
   ex06/ft_print_alphabet.c ex07/ft_print_numbers.c ex08/ft_is_negative.c \
   ex09/ft_ft.c ex10/ft_swap.c ex11/ft_div_mod.c ex12/ft_iterative_factorial.c \
   ex13/ft_recursive_factorial.c ex14/ft_sqrt.c ex15/ft_putstr.c ex16/ft_strlen.c \
   ex17/ft_strcmp.c ex20/ft_strdup.c ex21/ft_range.c ex25/ft_foreach.c \
   ex26/ft_count_if.c -o test_all
   ./test_all
   ```

5. **Build Programs & Libraries (Makefiles):**
   Exercises 24 and 27 are standalone programs/libraries that utilize `make`. Navigate to their respective folders to compile them:
   ```bash
   cd ex27
   make
   ./ft_display_file <filename>
   ```

### 🚨 The Norm
Moulinette relies on a program called `norminette` to check if your files comply with the Norm. Every single `.c` and `.h` file must pass. 

**The 42 Header:**
Before writing any code, every file must start with the standard 42 header. `norminette` will automatically fail any file missing this specific signature.
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:03:42 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/26 18:42:25 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
```

Run the following command before pushing:
```bash
norminette -R CheckForbiddenSourceHeader <file.c>
```

---

## 📚 Resources & References

### System Manuals & POSIX API
* **Shell Commands & CLI Utilities:** `man 1 ls`, `man 1 touch`, `man 1 truncate`, `man 1 ln`, `man 1 tar`, `man 1 cat`, `man 1 echo`, `man 1 find`, `man 1 sed`, `man 1 grep`, `man 1 chmod`, `man 8 ifconfig`, `man 1 make` - Crucial for the initial configuration, file manipulation, and build automation exercises.
* **System Calls:** `man 2 write`, `man 2 open`, `man 2 read`, `man 2 close` - Essential documentation for standard output manipulation and file descriptor I/O operations required in later exercises.
* **C Library Functions:** `man 3 malloc`, `man 3 strlen`, `man 3 strcmp`, `man 3 strdup` - Reference for dynamic memory allocation and string behavior required to rebuild standard functions from scratch.

### 42 Curriculum Standards
* [42 Norm V4](https://cdn.intra.42.fr/pdf/pdf/96987/en.norm.pdf) - The strict coding standard for 42 C projects.
* [Official 42 Norminette Repository](https://github.com/42School/norminette) - The open-source linter enforcing the strict 42 coding standard.

---

### 🤖 AI Usage Guidelines
* **Code:** No AI-generated code was used to solve these exercises. All scripts, algorithms, and file I/O operations were built manually to re-solidify the foundational C paradigms required for the core curriculum.
* **Documentation:** AI tools were utilized to structure this `README.md` to cleanly categorize the 28 distinct exercises into an easily navigable portfolio format.
