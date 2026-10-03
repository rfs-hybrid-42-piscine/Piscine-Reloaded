/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:33:05 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/22 22:51:21 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @fn void ft_is_negative(int n)
 * @brief Checks if an integer is negative or positive/zero.
 * @details Prints 'N' to the standard output if the integer passed is 
 * strictly less than zero, otherwise prints 'P'.
 * @param n The integer to evaluate.
 */
void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
