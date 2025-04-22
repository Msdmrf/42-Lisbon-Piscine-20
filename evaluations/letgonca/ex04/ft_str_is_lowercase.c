/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letgonca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 21:05:42 by letgonca          #+#    #+#             */
/*   Updated: 2025/03/18 21:33:39 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	x;
	int	a;

	x = 0;
	a = 1;
	if (str[0] == '\0')
		return (1);
	while (str[x] != '\0')
	{
		if (str[x] < 'a' || str[x] > 'z')
		{
			a = 0;
		}
		x++;
	}
	return (a);
}

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("abcdef"));
	printf("%d\n", ft_str_is_lowercase("abcDEF"));
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("OLA"));
	printf("%d\n", ft_str_is_lowercase("ola"));
}
