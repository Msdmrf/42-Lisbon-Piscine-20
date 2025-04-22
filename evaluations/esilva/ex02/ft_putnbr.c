/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:11:31 by esilva            #+#    #+#             */
/*   Updated: 2025/03/18 13:06:23 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	long int	num;

	num = nb;
	if (num == -2147483648)
	{
		ft_write('-');
		ft_write('2');
		num = 147483648;
	}
	if (num < 0)
	{
		ft_write('-');
		num *= -1;
	}
	if (num >= 0 && num <= 9)
	{
		ft_write(num + '0');
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}

int	main(void)
{
	ft_putnbr(2147483648);
	return (0);
}
