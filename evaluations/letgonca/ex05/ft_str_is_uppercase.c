/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letgonca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:03:27 by letgonca          #+#    #+#             */
/*   Updated: 2025/03/17 22:09:54 by letgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	x;
	int	a;

	x = 0;
	a = 1;
	if (str[0] == '\0')
		return (1);
	while (str[x] != '\0')
	{
		if (str[x] < 'A' || str[x] > 'Z')
		{
			a = 0;
		}
		x++;
	}
	return (a);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("ABCDEF"));
	printf("%d\n", ft_str_is_uppercase("abcDEF"));
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase("OLA"));
	printf("%d\n", ft_str_is_uppercase("ola"));
}*/
