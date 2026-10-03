# 🟢 Exercise 12: ft_iterative_factorial

## 📝 Objective
Create an iterative function that returns a number representing the factorial of the given parameter.

## 💡 The Logic
A factorial (denoted as $n!$) is the product of an integer and all the integers below it. 
Instead of recursion, we use a standard `while` loop. We initialize a `res` variable to 1. As long as our parameter `nb` is greater than 1, we multiply `res` by `nb` and then decrement `nb`. 
If the number is negative, the function is strictly required to return 0.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_iterative_factorial.c`](ft_iterative_factorial.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `Piscine-Reloaded` directory. You must pass the `-D EX12` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX12 ../tester.c ft_iterative_factorial.c -o test_ex12
   ./test_ex12
   ```
