/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 23:39:32 by maaugust          #+#    #+#             */
/*   Updated: 2026/10/04 00:26:50 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/* --- Master Switch --- */
#ifdef TEST_ALL
# define EX06
# define EX07
# define EX08
# define EX09
# define EX10
# define EX11
# define EX12
# define EX13
# define EX14
# define EX15
# define EX16
# define EX17
# define EX20
# define EX21
# define EX22
# define EX23
# define EX25
# define EX26
#endif

/* --- Headers for Macros & Structs --- */
#ifdef EX22
# include "ex22/ft_abs.h"
#endif

#ifdef EX23
# include "ex23/ft_point.h"
#endif

/* --- Mock Functions to satisfy Header Prototypes --- */
#ifdef EX23
void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
#endif

/* --- Prototypes --- */
void	ft_print_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_ft(int *nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
int	    ft_iterative_factorial(int nb);
int	    ft_recursive_factorial(int nb);
int	    ft_sqrt(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
void	ft_foreach(int *tab, int length, void (*f)(int));
int		ft_count_if(char **tab, int (*f)(char*));

/* --- Helper Functions for Pointers --- */
void	print_int(int n)
{
	printf("%d ", n);
}

int		starts_with_upper(char *str)
{
	if (str && str[0] >= 'A' && str[0] <= 'Z')
		return (1);
	return (0);
}

/* --- Main Testing Function --- */
int	main(void)
{
#ifdef EX06
	printf("--- EX06: ft_print_alphabet ---\n");
	ft_print_alphabet();
	printf("\n\n");
#endif

#ifdef EX07
	printf("--- EX07: ft_print_numbers ---\n");
	ft_print_numbers();
	printf("\n\n");
#endif

#ifdef EX08
	printf("--- EX08: ft_is_negative ---\n");
	printf("-5: ");
	ft_is_negative(-5);
	printf("\n 0: ");
	ft_is_negative(0);
	printf("\n 5: ");
	ft_is_negative(5);
	printf("\n\n");
#endif

#ifdef EX09
	int	nbr9 = 0;
	printf("--- EX09: ft_ft ---\n");
	printf("Before: %d\n", nbr9);
	ft_ft(&nbr9);
	printf("After : %d\n\n", nbr9);
#endif

#ifdef EX10
	int a10 = 10;
	int b10 = 99;
	printf("--- EX10: ft_swap ---\n");
	printf("Before: a = %d, b = %d\n", a10, b10);
	ft_swap(&a10, &b10);
	printf("After : a = %d, b = %d\n\n", a10, b10);
#endif

#ifdef EX11
	int div11, mod11;
	printf("--- EX11: ft_div_mod ---\n");
	ft_div_mod(10, 3, &div11, &mod11);
	printf("10 / 3  -> Div: %d, Mod: %d\n\n", div11, mod11);
#endif

#ifdef EX12
	printf("--- EX12: ft_iterative_factorial ---\n");
	printf("Fact  5: %d (Expected: 120)\n", ft_iterative_factorial(5));
	printf("Fact  0: %d (Expected: 1)\n", ft_iterative_factorial(0));
	printf("Fact -5: %d (Expected: 0)\n\n", ft_iterative_factorial(-5));
#endif

#ifdef EX13
	printf("--- EX13: ft_recursive_factorial ---\n");
	printf("Fact  5: %d (Expected: 120)\n", ft_recursive_factorial(5));
	printf("Fact  0: %d (Expected: 1)\n", ft_recursive_factorial(0));
	printf("Fact -5: %d (Expected: 0)\n\n", ft_recursive_factorial(-5));
#endif

#ifdef EX14
	printf("--- EX14: ft_sqrt ---\n");
	printf("Sqrt 16: %d (Expected: 4)\n", ft_sqrt(16));
	printf("Sqrt 25: %d (Expected: 5)\n", ft_sqrt(25));
	printf("Sqrt 26: %d (Expected: 0 - irrational)\n", ft_sqrt(26));
	printf("Sqrt 2147395600: %d (Expected: 46340 - safe max)\n\n", ft_sqrt(2147395600));
#endif

#ifdef EX15
	printf("--- EX15: ft_putstr ---\n");
	printf("Expected: Hello World!\n");
	printf("Result  : ");
	ft_putstr("Hello World!\n");
	printf("\n");
#endif

#ifdef EX16
	printf("--- EX16: ft_strlen ---\n");
	printf("Length of 'Hello': %d (Expected: 5)\n", ft_strlen("Hello"));
	printf("Length of '': %d (Expected: 0)\n\n", ft_strlen(""));
#endif

#ifdef EX17
	printf("--- EX17: ft_strcmp ---\n");
	printf("cmp('Hello', 'Hello') -> %d (Expected: 0)\n", ft_strcmp("Hello", "Hello"));
	printf("cmp('Hello', 'World') -> %d (Expected: negative)\n", ft_strcmp("Hello", "World"));
	printf("cmp('World', 'Hello') -> %d (Expected: positive)\n\n", ft_strcmp("World", "Hello"));
#endif

#ifdef EX20
	printf("--- EX20: ft_strdup ---\n");
	char *dup1 = ft_strdup("Hello 42!");
	char *dup2 = ft_strdup("");
	printf("Original: 'Hello 42!' | Duplicated: '%s'\n", dup1);
	printf("Original: ''          | Duplicated: '%s'\n\n", dup2);
	free(dup1);
	free(dup2);
#endif

#ifdef EX21
	printf("--- EX21: ft_range ---\n");
	int *arr1 = ft_range(5, 10);
	int *arr2 = ft_range(10, 5);
	printf("Range 5 to 10: ");
	if (arr1)
	{
		for (int i = 0; i < 5; i++)
			printf("%d ", arr1[i]);
		printf("\n");
		free(arr1);
	}
	printf("Range 10 to 5: %p (Expected: nil or 0x0)\n\n", (void *)arr2);
#endif

#ifdef EX22
	printf("--- EX22: ft_abs.h ---\n");
	printf("ABS(-42)      : %d (Expected: 42)\n", ABS(-42));
	printf("ABS(42)       : %d (Expected: 42)\n", ABS(42));
	printf("ABS(0)        : %d (Expected: 0)\n", ABS(0));
	printf("ABS(-5 - 10)  : %d (Expected: 15 - tests macro safety!)\n\n", ABS(-5 - 10));
#endif

#ifdef EX23
	printf("--- EX23: ft_point.h ---\n");
	t_point point;
	set_point(&point);
	printf("Point X: %d (Expected: 42)\n", point.x);
	printf("Point Y: %d (Expected: 21)\n\n", point.y);
#endif

#ifdef EX25
	printf("--- EX25: ft_foreach ---\n");
	int tab25[] = {1, 2, 3, 4, 5};
	printf("Expected: 1 2 3 4 5 \nResult  : ");
	ft_foreach(tab25, 5, &print_int);
	printf("\n\n");
#endif

#ifdef EX26
	printf("--- EX26: ft_count_if ---\n");
	char *tab26[] = {"Hello", "World", "test", "Apple", NULL};
	printf("Uppercase count: %d (Expected: 3)\n\n", ft_count_if(tab26, &starts_with_upper));
#endif

	return (0);
}
