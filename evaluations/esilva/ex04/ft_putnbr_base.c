/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:54:29 by esilva            #+#    #+#             */
/*   Updated: 2025/03/11 17:42:15 by esilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

int	if_error(char *str)
{
	int	i;
	int	w;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		w = i + 1;
		while (str[w] != '\0')
		{
			if (str[i] == str[w])
				return (0);
			w++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	ft_number(int nbr, char *base, unsigned int value)
{
	unsigned int	y;

	if (nbr < 0)
	{
		ft_write('-');
		y = nbr * -1;
	}
	else
		y = nbr;
	if (y >= value)
		ft_number(y / value, base, value);
	ft_write(base[y % value]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	value;

	value = 2;
	value = if_error(base);
	if (!value)
		return ;
	ft_number(nbr, base, value);
}
/*
int     main(void)
{
        int     a = 53;
        char    b[] = "0123456789abcdef";

        ft_putnbr_base(a, b);

        return (0);
}*/
