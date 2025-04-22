/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:35:13 by migusant          #+#    #+#             */
/*   Updated: 2025/03/17 16:14:25 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	char	str[12];

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
		while (nb != 0)
		{
			str[i] = '0' + (nb % 10);
			nb = nb / 10;
			i++;
		}
		while (--i >= 0)
			write (1, &str[i], 1);
	}
}

void	ft_show_tab(struct s_stock_str *strs)
{
	int	i;

	i = 0;
	while (strs[i].str != NULL)
	{
		ft_putstr(strs[i].str);
		write(1, "\n", 1);
		ft_putnbr(strs[i].size);
		write(1, "\n", 1);
		ft_putstr(strs[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	struct s_stock_str	*strs;

	strs = ft_strs_to_tab(argc, argv);
	if (strs == NULL)
	{
		write(1, "Error: Memory allocation failed\n", 31);
		return (1);
	}
	ft_show_tab(strs);
	return (0);
}
