/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportuga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 03:37:22 by pportuga          #+#    #+#             */
/*   Updated: 2025/03/18 18:39:04 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	long_nb;
	long int	aux;
	char		c;

	long_nb = nb;
	aux = 0;
	if (long_nb == 0)
		write (1, "0", 1);
	if (long_nb < 0)
	{
		write (1, "-", 1);
		long_nb = -long_nb;
	}
	while (long_nb)
	{
		aux = aux * 10 + long_nb % 10;
		long_nb /= 10;
	}
	while (aux)
	{
		c = aux % 10 + '0';
		aux /= 10;
		write (1, &c, 1);
	}
}

int	main(void)
{
	int	nb;

	nb = -2147483648;
	ft_putnbr(nb);
	return (0);
}
