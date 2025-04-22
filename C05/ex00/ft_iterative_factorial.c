/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:51:30 by migusant          #+#    #+#             */
/*   Updated: 2025/03/13 14:42:01 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		if (i == 1)
			res = 1;
		res = res * i;
		i++;
	}
	return (res);
}

/* int	main()
{
	int	nb;
	int	res;

	nb = 5;
	
	res = ft_iterative_factorial(nb);
	printf("%d! = %d\n", nb, res);
	return 0;
} */
