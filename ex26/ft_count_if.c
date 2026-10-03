/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 21:12:39 by maaugust          #+#    #+#             */
/*   Updated: 2026/10/04 00:12:25 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn int ft_count_if(char **tab, int (*f)(char*))
 * @brief Counts the number of strings that satisfy a specific condition.
 * @details Increments a counter each time the provided evaluation function
 * returns a non-zero value for an element in the array.
 * @param tab The array of string pointers.
 * @param f   A pointer to the conditional evaluation function.
 * @return    The total number of elements that met the condition.
 */
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	cnt;
	int	i;

	cnt = 0;
	if (!tab || !f)
		return (cnt);
	i = -1;
	while (tab[++i])
	{
		if (f(tab[i]))
			cnt++;
	}
	return (cnt);
}
