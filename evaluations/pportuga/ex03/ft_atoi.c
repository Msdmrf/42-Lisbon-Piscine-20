/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportuga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 03:54:44 by pportuga          #+#    #+#             */
/*   Updated: 2025/03/18 18:44:41 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	count_negative;
	int	nbr;

	i = 0;
	count_negative = 0;
	nbr = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count_negative++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if (count_negative % 2 != 0)
		nbr = -nbr;
	return (nbr);
}

int	main(void)
{
	char	*str = "    ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
}
