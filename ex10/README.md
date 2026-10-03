# 🟢 Exercise 10: ft_swap

## 📝 Objective
Create a function that swaps the values of two integers using their addresses received as parameters.

## 💡 The Logic
If you try to swap two variables directly (e.g., `*a = *b`), the original value of `*a` is immediately overwritten and permanently lost, making it impossible to assign it to `*b`. 

To solve this, we must declare a temporary variable (`tmp`).
1. Store the value of `*a` inside `tmp`.
2. Overwrite `*a` with the value of `*b`.
3. Finally, assign the saved `tmp` value to `*b`.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_swap.c`](ft_swap.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `Piscine-Reloaded` directory. You must pass the `-D EX10` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX10 ../tester.c ft_swap.c -o test_ex10
   ./test_ex10
   ```
