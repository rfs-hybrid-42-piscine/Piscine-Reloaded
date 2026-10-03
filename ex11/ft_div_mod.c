/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:26:14 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 02:30:09 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn void ft_div_mod(int a, int b, int *div, int *mod)
 * @brief Calculates the division and modulo of two integers.
 * @details Divides 'a' by 'b' and stores the quotient in the memory address
 * pointed to by 'div', and the remainder in 'mod'. Includes a safety check
 * to prevent division by zero.
 * @param a The dividend.
 * @param b The divisor.
 * @param div Pointer to store the result of the division.
 * @param mod Pointer to store the remainder of the modulo operation.
 */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
