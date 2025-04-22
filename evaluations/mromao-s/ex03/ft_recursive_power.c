/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:40:06 by mromao-s          #+#    #+#             */
/*   Updated: 2025/03/10 21:41:45 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	int	out;

	out = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	out *= ft_recursive_power(out, power - 1);
	return (out);
}

/* int	main(int argc, char **argv) {
	if (argc != 3)
		return(printf("wrong number of args!\n"));
	printf("output is %i\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
 */