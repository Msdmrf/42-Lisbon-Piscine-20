/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuguiur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:51:16 by fsuguiur          #+#    #+#             */
/*   Updated: 2025/03/13 17:05:26 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	n;
	char		nb_char;

	n = nb;
	nb_char = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	if (n >= 0 && n <= 9)
	{
		nb_char = n + '0';
		write(1, &nb_char, 1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	main(void)
{
	int nb = -2147483648;
	ft_putnbr(nb);
}
