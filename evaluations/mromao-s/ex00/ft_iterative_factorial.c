/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:46:54 by mromao-s          #+#    #+#             */
/*   Updated: 2025/03/11 16:19:00 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	out;

	i = 0;
	out = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (++i <= nb)
	{
		if (i == 1)
			out = 1;
		out *= i;
	}
	return (out);
}

int	main(int argc, char **argv) {
	if (argc != 2)
		return (printf("wrong number of args!\n"));
	printf("output is %i\n", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
