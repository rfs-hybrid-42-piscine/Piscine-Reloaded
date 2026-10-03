# 🟢 Exercise 09: ft_ft

## 📝 Objective
Create a function that takes a pointer to an int as a parameter and sets the value of that int to "42".

## 💡 The Logic
In C, when you pass a normal variable to a function, you are only passing a *copy* of its value. If you change that copy inside the function, the original variable remains completely unaffected. 

To change the actual, original variable, you must pass its memory address using a **Pointer**. Inside our function, we use the dereference operator (`*`) to "open up" that memory address and forcefully insert the value `42` directly into the original variable.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_ft.c`](ft_ft.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `Piscine-Reloaded` directory. Pass the `-D EX09` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX09 ../tester.c ft_ft.c -o test_ex09
   ./test_ex09
   ```
