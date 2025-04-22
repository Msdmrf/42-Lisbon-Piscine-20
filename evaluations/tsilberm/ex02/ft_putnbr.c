/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:49:27 by tsilberm          #+#    #+#             */
/*   Updated: 2025/03/06 18:14:15 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	last_digit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	printf("%d\n", nb);
	last_digit = nb % 10 + '0';
	//ft_putchar(last_digit);
	printf("\t%c\n", last_digit);
}

/* int main()
{

	ft_putnbr(123);
	write(1, "\n", 1);
//	ft_putnbr(-42);
//	write(1, "\n", 1);
//	ft_putnbr(0);
  //  write(1, "\n", 1);
   // ft_putnbr(2147483647);
   // write(1, "\n", 1);
   // ft_putnbr(-2147483648);
   // write(1, "\n", 1);

    return 0;
} */
