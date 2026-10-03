# 🟢 Exercise 22: ft_abs.h

## 📝 Objective
Create a macro `ABS(Value)` that automatically replaces its argument with its absolute value.

## 💡 The Logic
While a standard ternary operator (`(Value < 0) ? -Value : Value`) is usually used for this, the 42 Norm strictly forbids ternary operators!
1. **Mathematical Bypass:** We use a pure math equation that evaluates boolean expressions as `1` or `0` to manipulate the sign: `((Value) * (((Value) > 0) - ((Value) < 0)))`.
2. **The Precedence Trap:** Notice how *every single instance* of `Value` is wrapped in parentheses. If a user passes an equation like `ABS(5 - 10)` into the macro, the preprocessor blindly copy-pastes it. Without strict parentheses, multiplication would happen before subtraction, completely corrupting the result!

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_abs.h`](ft_abs.h)**

2. **Testing:**
   You must use the `-R CheckDefine` flag to verify macros in Norminette! Use the master **[`tester.c`](../tester.c)** file provided in the root `Piscine-Reloaded` directory. You must pass the `-D EX22` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   norminette -R CheckDefine ft_abs.h
   cc -Wall -Wextra -Werror -D EX22 ../tester.c -o test_ex22
   ./test_ex22
   ```
