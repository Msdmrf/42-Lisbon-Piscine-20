/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letgonca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 21:31:50 by letgonca          #+#    #+#             */
/*   Updated: 2025/03/18 21:32:37 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_str_is_numeric(char *str)
{
	int	x;
	int	a;

	x = 0;
	a = 1;
	if (str[0] == '\0')
		return (1);
	while (str[x] != '\0')
	{
		if (str[x] < '0' || str[x] > '9' )
		{
			a = 0;
		}
		x++;
	}
	return (a);
}

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("123456"));
	printf("%d\n", ft_str_is_numeric("123a456"));
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("9876543210"));
	return (0);
}
