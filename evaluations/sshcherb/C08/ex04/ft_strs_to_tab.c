/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:15:54 by sshcherb          #+#    #+#             */
/*   Updated: 2025/03/12 15:15:56 by sshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcopy(char *str)
{
	char	*dest_temp;
	int		i;

	dest_temp = (char *)malloc(sizeof(char) * ft_strlen(str) +1);
	if (dest_temp == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		dest_temp[i] = str[i];
		i++;
	}
	dest_temp[i] = '\0';
	return (dest_temp);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strcopy(av[i]);
		if (!stock[i].copy)
		{
			while (i >= 0)
			{
				free(stock[i].copy);
				i--;
			}
			free(stock);
			return (NULL);
		}
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
