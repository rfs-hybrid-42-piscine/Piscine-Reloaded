# 🟢 Exercise 24: Makefile

## 📝 Objective
Create a `Makefile` that fully automates the compilation of a static library named `libft.a`. The script must pull specific source files from a `srcs/` directory and headers from an `includes/` directory, while strictly avoiding the use of wildcards (`*`).

## 💡 The Logic

A Makefile prevents you from having to type out massive compilation commands manually. It tracks file timestamps and only recompiles files that have been updated.
1. **Variables:** We define variables (`NAME`, `CC`, `CFLAGS`, `SRCS`, `OBJS`) at the top so we can easily change the compiler, flags, or file lists globally. 
2. **Explicit File Declarations (No Wildcards):** The subject explicitly warns to "Watch out for wildcards!" Using `*.c` is generally forbidden in 42 Makefiles because it can accidentally compile hidden or broken files. We manually declare `ft_putchar.c`, `ft_putstr.c`, `ft_strcmp.c`, `ft_strlen.c`, and `ft_swap.c`.
3. **Path Mapping:** The project is structured. We map the `SRCS` variable to specific files inside the `srcs/` directory, and use `-I includes` to tell the compiler where to find the header files.
4. **Library Archiving (`ar rc`):** Unlike standard executables built with `gcc -o`, a static library (`.a`) is an archive of object files. We use the `ar` (archiver) command to bundle the generated `.o` files into `libft.a`.
5. **Build Targets:** We define the exact rules required by the subject:
   - `all`: Triggers the compilation of `libft.a`.
   - `clean`: Removes only the generated `.o` files.
   - `fclean`: Runs `clean` and also removes the `libft.a` archive.
   - `re`: Runs `fclean` followed by `all` to force a complete rebuild.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the Makefile here:* **[`Makefile`](Makefile)**

2. **Testing Environment Setup:**
   Because a Makefile is an automation script, it will fail if the files it expects do not exist. Before testing, you must simulate the strict directory structure requested by the subject.
   ```bash
   mkdir -p srcs includes
   touch srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
   touch includes/ft.h
   ```

3. **Running the Tests:**
   Now that the environment is set up, test your `make` rules one by one to ensure the paths and variables resolve perfectly.
   ```bash
   make        # Should compile the specific .o files inside srcs/ and build libft.a
   ls -la      # Verify libft.a exists at the root!
   make clean  # Should delete all .o files from srcs/
   make fclean # Should delete libft.a
   make re     # Should rebuild everything from scratch
   ```
