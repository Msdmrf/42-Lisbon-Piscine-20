/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaranch <ibaranch@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:30:11 by ibaranch          #+#    #+#             */
/*   Updated: 2025/03/06 13:27:20 by ibaranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	string[11];
	int		i;

	i = 0;
	if (nb == 0)
		write (1, "0", 1);
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	if (nb > 0)
	{
		while (nb)
		{
			string[i] = nb % 10 + '0';
			nb = nb / 10;
			i++;
		}
		while (i--)
			write (1, &string[i], 1);
	}
}
/*
int	main(void)
{
	int	nb = -2147483648;
	ft_putnbr(nb);
	return (0);
}
*/
