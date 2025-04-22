/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsilberm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:24:57 by tsilberm          #+#    #+#             */
/*   Updated: 2025/03/06 16:35:47 by tsilberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base || !base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base_rec(int nbr, char *base, int base_len)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_len)
		ft_putnbr_base_rec(nbr / base_len, base, base_len);
	write(1, &base[nbr % base_len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = 0;
	if (!is_valid_base(base))
		return ;
	while (base[base_len])
		base_len++;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (nbr == -2147483648)
	{
		ft_putnbr_base_rec(nbr / base_len, base, base_len);
		write(1, &base[nbr % base_len], 1);
		return ;
	}
	ft_putnbr_base_rec(nbr, base, base_len);
}
/*
int main()
{
	ft_putnbr_base(1234, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	ft_putnbr_base(255, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(123, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(-123, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "01");
	write(1, "\n", 1);
	return 0;
}*/
