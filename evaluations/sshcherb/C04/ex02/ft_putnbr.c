/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:53:37 by sshcherb          #+#    #+#             */
/*   Updated: 2025/03/06 16:40:34 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	str[12];
	int		i;

	i = 0;
	if (nb == 0)
		write (1, "0", 1);
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 0)
	{
		while (nb)
		{
			str[i] = '0' + (nb % 10);
			nb = nb / 10;
			i++;
		}
		while (--i >= 0)
			write (1, &str[i], 1);
	}
}

/* int main()
{
	ft_putnbr(23);
	return 0;
} */
