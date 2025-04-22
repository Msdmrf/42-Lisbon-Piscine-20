/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:56:03 by migusant          #+#    #+#             */
/*   Updated: 2025/03/13 14:41:26 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = res * ft_recursive_power(res, power - 1);
	return (res);
}

/* int main()
{
	int	nb;
	int	power;
	int	res;

	nb = 5;
	power = 2;

	res = ft_recursive_power(nb, power);
	printf("%d^%d = %d\n", nb, power, res);
	return 0;
} */
