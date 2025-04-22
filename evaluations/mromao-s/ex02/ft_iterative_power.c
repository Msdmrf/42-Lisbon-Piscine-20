/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:30:47 by mromao-s          #+#    #+#             */
/*   Updated: 2025/03/07 13:45:51 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	out;

	out = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power > 0)
		out *= nb;
	return (out);
}

/* int	main(int argc, char **argv) {
	if (argc != 3)
		return(printf("wrong number of args!\n"));
	printf("output is %i\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
} */
