# 🟢 Exercise 21: ft_range

## 📝 Objective
Create a function that allocates and returns an array of integers containing all values from `min` (included) to `max` (excluded).

## 💡 The Logic
1. **Edge Case:** The exercise strictly states that if `min >= max`, the function must return a `NULL` pointer.
2. **Allocation:** The total number of elements we need is `max - min`. Because an integer takes up more than 1 byte in memory, we must multiply the required amount of elements by `sizeof(int)`. 
3. **Population:** After confirming `malloc` was successful, we use a loop to fill the array, calculating the value mathematically with `min + i`, and return the allocated array pointer.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_range.c`](ft_range.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `Piscine-Reloaded` directory. You must pass the `-D EX21` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX21 ../tester.c ft_range.c -o test_ex21
   ./test_ex21
   ```
