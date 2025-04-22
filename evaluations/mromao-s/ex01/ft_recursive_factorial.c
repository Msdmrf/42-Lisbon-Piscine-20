/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:57:43 by mromao-s          #+#    #+#             */
/*   Updated: 2025/03/10 22:21:59 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int	out;

	out = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (out);
	if (nb == 1)
		out = 1;
	out = nb * ft_recursive_factorial(nb - 1);
	return (out);
}

/* int	main(int argc, char **argv) {
	if (argc != 2)
		return (printf("wrong number of args!\n"));
	printf("output is %i\n", ft_recursive_factorial(atoi(argv[1])));
	return (0);
} */
