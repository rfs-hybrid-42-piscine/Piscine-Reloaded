# 🟢 Exercise 26: ft_count_if

## 📝 Objective
Create a function `ft_count_if` which will return the number of elements of the array that return 1, passed to the function `f`. The array will be delimited by a null pointer (`0`).

## 💡 The Logic
This simulates a classic "filter/count" array method, but relies on null-termination rather than a fixed length.
1. **The Counter:** We initialize an integer `cnt = 0`.
2. **Iteration:** Because there is no `length` parameter, we iterate through the `char **` array using a `while` loop, stopping only when we encounter a null pointer (`0`) at the end of the array.
3. **Evaluation:** For each element, we evaluate `f(tab[i])`. If the function returns a non-zero value (e.g., `1`), we increment our counter `cnt++`. Once the loop finishes, we return the total count.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_count_if.c`](ft_count_if.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `Piscine-Reloaded` directory. You must pass the `-D EX26` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX26 ../tester.c ft_count_if.c -o test_ex26
   ./test_ex26
   ```