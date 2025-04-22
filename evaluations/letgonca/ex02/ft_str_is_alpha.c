/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letgonca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 18:06:54 by letgonca          #+#    #+#             */
/*   Updated: 2025/03/18 21:32:06 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	x;
	int	a;

	x = 0;
	a = 1;
	while (str[x] != '\0')
	{
		if (!((str[x] >= 'a' && str[x] <= 'z')
				|| (str[x] >= 'A' && str[x] <= 'Z')))
		{
			a = 0;
		}	
		x++;
	}
	return (a);
}

int	main(void)
{
	char	str[] = "Ola";
	char	str1[] = "OLA";
	char	str2[] = "ola";
	char	str3[] = "121212a";
	char	str4[] = "";

	printf("%d\n", ft_str_is_alpha (str));
	printf("%d\n", ft_str_is_alpha (str1));
	printf("%d\n", ft_str_is_alpha (str2));
	printf("%d\n", ft_str_is_alpha (str3));
	printf("%d\n", ft_str_is_alpha (str4));
	return (0);
}
