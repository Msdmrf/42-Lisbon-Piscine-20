/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:18:06 by migusant          #+#    #+#             */
/*   Updated: 2025/03/11 16:06:03 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	num;
	int	signal;

	signal = 1;
	num = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			signal = -signal;
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * signal);
}

/* int	main()
{
	int		ret;
	char	*str;

	str = " ---+--+1234ab567";
	ret = ft_atoi(str);
	printf("%d\n", ret);
	return 0;
} */
