/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaires- <dcaires-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:13:51 by dcaires-          #+#    #+#             */
/*   Updated: 2025/03/13 17:31:08 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_word;

	i = 0;
	is_word = 1;
	while (str[i])
	{
		if (is_word && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (!is_word && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		if ((str[i] < '0' || str[i] > '9')
			&& (str[i] < 'A' || str[i] > 'Z')
			&& (str[i] < 'a' || str[i] > 'z'))
			is_word = 1;
		else
			is_word = 0;
		i++;
	}
	return (str);
}


int	main(void)
{
	char	*str = "Este e-um+teste, TESTE";

	ft_strcapitalize(str);
	printf("%s", str);
}
