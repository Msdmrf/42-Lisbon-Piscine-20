/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:59:00 by migusant          #+#    #+#             */
/*   Updated: 2025/03/13 14:40:29 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/* int	main()
{
	int	nb;
	int	res;

//	nb = 0;
//	nb = 1;
//	nb = 2;
//	nb = 3;
	nb = 7;
	res = ft_is_prime(nb);
	if (res == 0)
		printf("%d is not a prime number.\n", nb);
	else
		printf("%d is a prime number.\n", nb);
	return 0;
} */
