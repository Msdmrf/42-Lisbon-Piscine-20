/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:33:48 by mromao-s          #+#    #+#             */
/*   Updated: 2025/03/10 22:24:54 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	i = 1;
	while (++i < nb)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	nb++;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/* int	main(void) {
	for (int i = -1; i < 100; i++) {
		printf("number= %i and next prime is: %i\n", i, ft_find_next_prime(i));
	}
	return (0);
}
 */