/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:54:06 by migusant          #+#    #+#             */
/*   Updated: 2025/03/13 14:41:47 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (res);
	if (nb == 1)
		res = 1;
	res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}

/* int	main()
{
	int	nb;
	int	res;

	nb = 5;

	res = ft_recursive_factorial(nb);
	printf("%d! = %d\n", nb, res);
	return 0;
} */
