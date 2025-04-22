/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milnasci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:21:45 by milnasci          #+#    #+#             */
/*   Updated: 2025/03/10 17:00:17 by milnasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	char	str1[] = "LALALANDIA";
	char	str2[] = "lalalandia";
	char	str3[] = "12La";
	char	str4[] = "";

	printf("%d", ft_str_is_uppercase(str1));
	printf("%d", ft_str_is_uppercase(str2));
	printf("%d", ft_str_is_uppercase(str3));
	printf("%d", ft_str_is_uppercase(str4));
	return(0);
}*/
