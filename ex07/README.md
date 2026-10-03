# 🟢 Exercise 07: ft_print_numbers

## 📝 Objective
Create a function that displays all digits on a single line, in ascending order.

## 💡 The Logic
This exercise highlights a critical difference in C: **Integers vs. Characters**. 
If you try to `write` the raw integer `0`, the terminal will not print a visible "0". Instead, it will output the ASCII null character (`\0`). 

To print visible numbers using `write`, you must use their character equivalents. We loop from the *character* `'0'` (which is ASCII value 48) up to the character `'9'` (ASCII 57).

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_print_numbers.c`](ft_print_numbers.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `Piscine-Reloaded` directory. You must pass the `-D EX07` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX07 ../tester.c ft_print_numbers.c -o test_ex07
   ./test_ex07
   ```
   *(Expected output: `0123456789`)*
