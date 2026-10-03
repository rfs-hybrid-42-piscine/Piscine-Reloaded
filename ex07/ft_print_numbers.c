/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:19:42 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/22 22:51:14 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @fn void ft_print_numbers(void)
 * @brief Prints all single-digit numbers in ascending order.
 * @details Iterates from the character '0' (ASCII 48) to '9' (ASCII 57) 
 * using a while loop and writes each digit to the standard output.
 */
void	ft_print_numbers(void)
{
	char	digit;

	digit = '0';
	while (digit <= '9')
	{
		write(1, &digit, 1);
		digit++;
	}
}
