# 🟢 Exercise 16: ft_strlen

## 📝 Objective
Create a function that counts and returns the number of characters in a string.

## 💡 The Logic
The goal is to calculate the length of a string without using the standard `<string.h>` library.

We use an integer counter (`len`) set to 0. After safely checking that the string pointer is not `NULL`, we iterate through the character array using a `while` loop. As long as the current character is not the null-terminator (`'\0'`), we increment the counter. Once the loop finishes, we return the final count.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_strlen.c`](ft_strlen.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `Piscine-Reloaded` directory. You must pass the `-D EX16` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX16 ../tester.c ft_strlen.c -o test_ex16
   ./test_ex16
   ```
