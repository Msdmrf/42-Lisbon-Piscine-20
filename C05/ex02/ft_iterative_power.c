/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:55:10 by migusant          #+#    #+#             */
/*   Updated: 2025/03/13 13:53:25 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

/* int	main()
{
	int	nb;
	int	power;
	int	res;

	nb = 5;
	power = 2;
	res = 0;
	res = ft_iterative_power(nb, power);
	printf("%d^%d = %d\n", nb, power, res);
	return 0;
} */
